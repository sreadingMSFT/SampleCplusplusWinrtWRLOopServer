#include "pch.h"
#include "SampleClass.h"
#include "SampleClass.g.cpp"
#include "AnotherSampleClass.h"
#include "SampleResult.h"
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

    winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::OopServer::SampleResult, winrt::OopServer::SampleProgress> SampleClass::SampleAsync()
    {

        auto report_progress{ co_await winrt::get_progress_token() };
        auto cancellationToken{ co_await winrt::get_cancellation_token() };

        // co_await does not guarantee that it will be on a background thread, and it's important that it is, so force it.
        co_await winrt::resume_background();

        Sleep(2000);

        SampleProgress queuedProgress{ 1, 2, 3, 4, 5 };
        report_progress(queuedProgress);

        Sleep(2000);
        report_progress(queuedProgress);

        auto sampleResult = winrt::make_self<wil::details::module_count_wrapper<winrt::OopServer::implementation::SampleResult>>();
        sampleResult->Initialize(L"test", true);
        co_return *sampleResult;
    }

    winrt::Windows::Foundation::IAsyncOperationWithProgress<double, double> SampleClass::SampleSimpleAsync()
    {
        auto report_progress{ co_await winrt::get_progress_token() };

        co_await winrt::resume_background();

        Sleep(2000);

        report_progress(4.0);
        Sleep(2000);
        report_progress(4.0);
        Sleep(2000);
        report_progress(4.0);
        Sleep(2000);
        report_progress(4.0);
        Sleep(2000);
        report_progress(4.0);
        Sleep(2000);
        report_progress(4.0);
        Sleep(2000);
        report_progress(4.0);

        Sleep(2000);

        co_return 7.0;
    }

    CoCreatableCppWinRtClass(SampleClass);
}
