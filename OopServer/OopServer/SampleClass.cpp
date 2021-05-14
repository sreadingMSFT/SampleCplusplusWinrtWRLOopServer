#include "pch.h"
#include "SampleClass.h"
#include "SampleClass.g.cpp"
#include "AnotherSampleClass.h"
#include <wil\cppwinrt_wrl.h>

namespace winrt::OopServer::implementation
{
    int32_t SampleClass::MyProperty()
    {
        return m_propertyVal;
    }

    void SampleClass::MyProperty(int32_t value)
    {
        m_propertyVal = value;
    }

    winrt::OopServer::AnotherSampleClass SampleClass::GetNonActivatableClass()
    {
        auto anotherSampleImpl = winrt::make_self<wil::details::module_count_wrapper<winrt::OopServer::implementation::AnotherSampleClass>>();
        anotherSampleImpl->Initialize(m_propertyVal/2);
        return *anotherSampleImpl;
    }

    CoCreatableCppWinRtClass(SampleClass);
}
