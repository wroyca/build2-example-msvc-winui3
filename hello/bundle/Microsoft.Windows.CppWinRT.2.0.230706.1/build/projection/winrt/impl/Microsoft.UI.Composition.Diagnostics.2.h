// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Microsoft_UI_Composition_Diagnostics_2_H
#define WINRT_Microsoft_UI_Composition_Diagnostics_2_H
#include "winrt/impl/Microsoft.UI.Composition.1.h"
#include "winrt/impl/Microsoft.UI.Composition.Diagnostics.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition::Diagnostics
{
    struct WINRT_IMPL_EMPTY_BASES CompositionDebugHeatMaps : winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps
    {
        CompositionDebugHeatMaps(std::nullptr_t) noexcept {}
        CompositionDebugHeatMaps(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugHeatMaps(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CompositionDebugSettings : winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettings
    {
        CompositionDebugSettings(std::nullptr_t) noexcept {}
        CompositionDebugSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Diagnostics::ICompositionDebugSettings(ptr, take_ownership_from_abi) {}
        static auto TryGetSettings(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
}
#endif
