// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#include "pch.h"
#include "SampleResult.h"
#include "SampleResult.g.cpp"
#include <wil\cppwinrt_wrl.h>

namespace winrt::OopServer::implementation
{
    void SampleResult::Initialize(
        hstring const& sampleString, 
        bool sampleBoolean)
    {
        m_sampleString = sampleString;
        m_sampleBoolean = sampleBoolean;
    }
    hstring SampleResult::SampleString()
    {
        return hstring(m_sampleString);
    }
    bool SampleResult::SampleBoolean()
    {
        return m_sampleBoolean;
    }
}
