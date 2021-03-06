# Sample out of proc com server callable by UWP packages.

![Alt text here](OopServerDiagram.svg)

## 1 Setting up the Server
### 1.1 Creating the runtime component
Create a C++/winrt runtime component in the server project
Add windows.implementationlibrary nuget package  
Change the runtime component General Properties type from DLL to Application.  
Change the idl in the runtime component to your class definition and name.  
Copy the generated files for each class from Generated Files\sources and remove the static assert and add them to the project.  
In project properties change Output Directory to $(SolutionDir)$(PlatformTarget)\$(Configuration)\$(ProjectName)\ change Intermediate Directory to $(PlatformTarget)\$(Configuration)\  

Add a uuid in the .h file of any classes that should be activatable out of proc, and in the cpp file add  
#include <wil\cppwinrt_wrl.h>  
CoCreatableCppWinRtClass(SampleClass); 
Remove the .def file and add main.cpp  

Edit the vcxproj to remove  
```
    <AppContainerApplication>true</AppContainerApplication>  
    <ApplicationType>Windows Store</ApplicationType>  
```
and replace
```
      <SubSystem>Console</SubSystem>
      <GenerateWindowsMetadata>false</GenerateWindowsMetadata>
      <ModuleDefinitionFile>OopServer.def</ModuleDefinitionFile>
```
with
```
      <GenerateWindowsMetadata>true</GenerateWindowsMetadata>
```

### 1.3 Creating the packaging project
In the server solution add a Packaging Project.\
Use the text editor to edit Package.appxmanifest and add the com server extension with the guids from the activatable h files and xmlns:com="http://schemas.microsoft.com/appx/manifest/com/windows10"\
Add a reference to the exe project from the packaging project.\
Set the packaging project as the startup project (doesn't have to be true in general, and likely wouldn't be in a real app, but since there's no other projects in the sample)  
Edit the vcxproj to add the winmd explicitly.
    <Content Include="$(SolutionDir)$(PlatformTarget)\$(Configuration)\OopServer\OopServer.winmd" />

## 2 Setting up the Client
Create a C++/winrt blank app project for the client solution.\
Copy the winmd from the server project $(SolutionDir)$(PlatformTarget)\$(Configuration)\$(ProjectName)\Merged to the client project and add it as a reference.\
Include the generated file, namespace, and CLSID from the server.\
#include <winrt/OopServer.h>\
using namespace winrt::OopServer;\
const CLSID CLSID_SampleClass = { 0x36ec670b, 0xceed, 0x4b6c, 0x96, 0xc8, 0x96, 0x0e, 0x46, 0xc5, 0xf2, 0xa4 };  //36ec670b-ceed-4b6c-96c8-960e46c5f2a4  
use winrt::create_instance to make the object
SampleClass sample = winrt::create_instance<SampleClass>(CLSID_SampleClass, CLSCTX_LOCAL_SERVER);