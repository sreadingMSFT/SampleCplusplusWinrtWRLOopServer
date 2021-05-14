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
