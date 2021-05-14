#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include <winrt/OopServer.h>
#include <winrt/Windows.UI.Core.h>

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace winrt::Windows::Foundation;
using namespace winrt::OopServer;

const CLSID CLSID_SampleClass = { 0x36ec670b, 0xceed, 0x4b6c, 0x96, 0xc8, 0x96, 0x0e, 0x46, 0xc5, 0xf2, 0xa4 };  //36ec670b-ceed-4b6c-96c8-960e46c5f2a4

namespace winrt::CallerApp::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    IAsyncAction GetPropertyValueFromServer(
        winrt::Windows::UI::Xaml::Controls::TextBlock textBlock)
    {
        co_await winrt::resume_background();
        SampleClass sample = winrt::create_instance<SampleClass>(CLSID_SampleClass, CLSCTX_LOCAL_SERVER);
        auto randValue = rand();
        sample.MyProperty(randValue);
        auto samplePropVal = sample.MyProperty();
        AnotherSampleClass anotherSample = sample.GetNonActivatableClass();
        // On the server this takes the value set in SampleClass MyProperty and divides it by two.
        // The second sample class is intended to demonstrate lifetime management of a non-com-activatable class.
        auto anotherSamplePropVal = anotherSample.MyProperty();
        co_await winrt::resume_foreground(textBlock.Dispatcher());

        std::wstring newStatusText{ L"Property values: " };
        newStatusText += std::to_wstring(randValue) + L" Sample: " + std::to_wstring(samplePropVal) + L" Other sample: " + std::to_wstring(anotherSamplePropVal);
        textBlock.Text(newStatusText.c_str());
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
        GetPropertyValueFromServer(sampleStatusText());
    }
}
