// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Windows_UI_Core_Preview_2_H
#define WINRT_Windows_UI_Core_Preview_2_H
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
#include "winrt/impl/Windows.UI.Core.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview
{
    struct WINRT_IMPL_EMPTY_BASES CoreAppWindowPreview : winrt::Windows::UI::Core::Preview::ICoreAppWindowPreview
    {
        CoreAppWindowPreview(std::nullptr_t) noexcept {}
        CoreAppWindowPreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::Preview::ICoreAppWindowPreview(ptr, take_ownership_from_abi) {}
        static auto GetIdFromWindow(winrt::Windows::UI::WindowManagement::AppWindow const& window);
    };
    struct WINRT_IMPL_EMPTY_BASES SystemNavigationCloseRequestedPreviewEventArgs : winrt::Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs
    {
        SystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t) noexcept {}
        SystemNavigationCloseRequestedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemNavigationManagerPreview : winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreview
    {
        SystemNavigationManagerPreview(std::nullptr_t) noexcept {}
        SystemNavigationManagerPreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreview(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
}
#endif
