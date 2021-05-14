#pragma once
#include "AnotherSampleClass.g.h"

namespace winrt::OopServer::implementation
{
    struct AnotherSampleClass : AnotherSampleClassT<AnotherSampleClass>
    {
        AnotherSampleClass() = default;
        void Initialize(int32_t value);

        int32_t MyProperty();
    private:
        int32_t m_propertyVal = 0;
    };
}
