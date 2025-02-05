// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_Hosting_2_H
#define WINRT_Microsoft_UI_Xaml_Hosting_2_H
#include "winrt/impl/Microsoft.UI.Composition.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Controls.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Hosting.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Hosting
{
    struct WINRT_IMPL_EMPTY_BASES ElementCompositionPreview : winrt::Microsoft::UI::Xaml::Hosting::IElementCompositionPreview
    {
        ElementCompositionPreview(std::nullptr_t) noexcept {}
        ElementCompositionPreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Hosting::IElementCompositionPreview(ptr, take_ownership_from_abi) {}
        static auto GetElementVisual(winrt::Microsoft::UI::Xaml::UIElement const& element);
        static auto GetElementChildVisual(winrt::Microsoft::UI::Xaml::UIElement const& element);
        static auto SetElementChildVisual(winrt::Microsoft::UI::Xaml::UIElement const& element, winrt::Microsoft::UI::Composition::Visual const& visual);
        static auto GetScrollViewerManipulationPropertySet(winrt::Microsoft::UI::Xaml::Controls::ScrollViewer const& scrollViewer);
        static auto SetImplicitShowAnimation(winrt::Microsoft::UI::Xaml::UIElement const& element, winrt::Microsoft::UI::Composition::ICompositionAnimationBase const& animation);
        static auto SetImplicitHideAnimation(winrt::Microsoft::UI::Xaml::UIElement const& element, winrt::Microsoft::UI::Composition::ICompositionAnimationBase const& animation);
        static auto SetIsTranslationEnabled(winrt::Microsoft::UI::Xaml::UIElement const& element, bool value);
        static auto GetPointerPositionPropertySet(winrt::Microsoft::UI::Xaml::UIElement const& targetElement);
    };
}
#endif
