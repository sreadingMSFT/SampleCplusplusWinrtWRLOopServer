#pragma once

#include "SampleClass.g.h"

namespace winrt::OopServer::implementation
{
    [uuid("36ec670b-ceed-4b6c-96c8-960e46c5f2a4")]
    struct SampleClass : SampleClassT<SampleClass>
    {
        SampleClass() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
        winrt::OopServer::AnotherSampleClass GetNonActivatableClass();
        winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::OopServer::SampleResult, winrt::OopServer::SampleProgress> SampleAsync();
        winrt::Windows::Foundation::IAsyncOperationWithProgress<double, double> SampleSimpleAsync();
    private:
        int32_t m_propertyVal = 0;
    };
}

namespace winrt::OopServer::factory_implementation
{
    struct SampleClass : SampleClassT<SampleClass, implementation::SampleClass>
    {
    };
}
