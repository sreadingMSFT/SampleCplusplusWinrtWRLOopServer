#include "pch.h"
#include "AnotherSampleClass.h"
#include "AnotherSampleClass.g.cpp"

namespace winrt::OopServer::implementation
{
    void AnotherSampleClass::Initialize(int32_t value)
    {
        m_propertyVal = value;
    }
    int32_t AnotherSampleClass::MyProperty()
    {
        return m_propertyVal;
    }
}
