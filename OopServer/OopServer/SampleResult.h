// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once
#include "SampleResult.g.h"

namespace winrt::OopServer::implementation
{
    struct SampleResult : SampleResultT<SampleResult>
    {
        SampleResult() = default;
        void Initialize(
            hstring const& sampleString, 
            bool sampleBoolean);

        hstring SampleString();
        bool SampleBoolean();
    private:
        std::wstring m_sampleString = L"";
        bool m_sampleBoolean = false;
    };
}
