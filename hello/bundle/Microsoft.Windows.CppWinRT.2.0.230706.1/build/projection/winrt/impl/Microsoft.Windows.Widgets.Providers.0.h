// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Microsoft_Windows_Widgets_Providers_0_H
#define WINRT_Microsoft_Windows_Widgets_Providers_0_H
WINRT_EXPORT namespace winrt::Microsoft::Windows::Widgets
{
    enum class WidgetSize : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
}
WINRT_EXPORT namespace winrt::Microsoft::Windows::Widgets::Providers
{
    struct IWidgetActionInvokedArgs;
    struct IWidgetContext;
    struct IWidgetContextChangedArgs;
    struct IWidgetInfo;
    struct IWidgetManager;
    struct IWidgetManagerStatics;
    struct IWidgetProvider;
    struct IWidgetUpdateRequestOptions;
    struct IWidgetUpdateRequestOptionsFactory;
    struct IWidgetUpdateRequestOptionsStatics;
    struct WidgetActionInvokedArgs;
    struct WidgetContext;
    struct WidgetContextChangedArgs;
    struct WidgetInfo;
    struct WidgetManager;
    struct WidgetUpdateRequestOptions;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetActionInvokedArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContext>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContextChangedArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetInfo>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManager>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetProvider>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptions>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsFactory>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::WidgetActionInvokedArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::WidgetContext>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::WidgetContextChangedArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::WidgetInfo>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::WidgetManager>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::Widgets::Providers::WidgetUpdateRequestOptions>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::WidgetActionInvokedArgs> = L"Microsoft.Windows.Widgets.Providers.WidgetActionInvokedArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::WidgetContext> = L"Microsoft.Windows.Widgets.Providers.WidgetContext";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::WidgetContextChangedArgs> = L"Microsoft.Windows.Widgets.Providers.WidgetContextChangedArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::WidgetInfo> = L"Microsoft.Windows.Widgets.Providers.WidgetInfo";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::WidgetManager> = L"Microsoft.Windows.Widgets.Providers.WidgetManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::WidgetUpdateRequestOptions> = L"Microsoft.Windows.Widgets.Providers.WidgetUpdateRequestOptions";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetActionInvokedArgs> = L"Microsoft.Windows.Widgets.Providers.IWidgetActionInvokedArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContext> = L"Microsoft.Windows.Widgets.Providers.IWidgetContext";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContextChangedArgs> = L"Microsoft.Windows.Widgets.Providers.IWidgetContextChangedArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetInfo> = L"Microsoft.Windows.Widgets.Providers.IWidgetInfo";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManager> = L"Microsoft.Windows.Widgets.Providers.IWidgetManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManagerStatics> = L"Microsoft.Windows.Widgets.Providers.IWidgetManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetProvider> = L"Microsoft.Windows.Widgets.Providers.IWidgetProvider";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptions> = L"Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptions";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsFactory> = L"Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsFactory";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsStatics> = L"Microsoft.Windows.Widgets.Providers.IWidgetUpdateRequestOptionsStatics";
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetActionInvokedArgs>{ 0xC593CC57,0x04B9,0x52CA,{ 0x88,0xAD,0x46,0xFE,0xA2,0x1E,0xA3,0x40 } }; // C593CC57-04B9-52CA-88AD-46FEA21EA340
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContext>{ 0x903C518B,0x40BC,0x5BC6,{ 0x88,0xF7,0xAF,0x9D,0x81,0xC0,0xCD,0xC1 } }; // 903C518B-40BC-5BC6-88F7-AF9D81C0CDC1
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContextChangedArgs>{ 0x2C226D54,0x2252,0x576B,{ 0xA1,0x97,0x37,0x0B,0x28,0xD2,0x5C,0x2F } }; // 2C226D54-2252-576B-A197-370B28D25C2F
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetInfo>{ 0xCEA11F42,0xA020,0x5DB5,{ 0x89,0xE2,0xB7,0xDE,0xCE,0x4A,0xE5,0xCB } }; // CEA11F42-A020-5DB5-89E2-B7DECE4AE5CB
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManager>{ 0x71CB10C0,0x671E,0x48E3,{ 0xB9,0x95,0x20,0x79,0x40,0x39,0x71,0x23 } }; // 71CB10C0-671E-48E3-B995-207940397123
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManagerStatics>{ 0x7F233B06,0x28E5,0x5E2B,{ 0x8C,0x04,0xA4,0xFA,0x74,0x7C,0x28,0xC7 } }; // 7F233B06-28E5-5E2B-8C04-A4FA747C28C7
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetProvider>{ 0x5C5774CC,0x72A0,0x452D,{ 0xB9,0xED,0x07,0x5C,0x0D,0xD2,0x5E,0xED } }; // 5C5774CC-72A0-452D-B9ED-075C0DD25EED
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptions>{ 0xB09CA8F7,0x7424,0x5687,{ 0xBA,0xAF,0x7D,0xD6,0xFA,0x63,0x96,0x72 } }; // B09CA8F7-7424-5687-BAAF-7DD6FA639672
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsFactory>{ 0xE0E00AF8,0x1D10,0x57A8,{ 0x94,0x19,0x3F,0x56,0x8E,0x85,0x4D,0xAA } }; // E0E00AF8-1D10-57A8-9419-3F568E854DAA
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsStatics>{ 0x4645B5E3,0xD332,0x5D11,{ 0x82,0xF0,0x36,0x07,0xE5,0xDF,0x60,0x18 } }; // 4645B5E3-D332-5D11-82F0-3607E5DF6018
    template <> struct default_interface<winrt::Microsoft::Windows::Widgets::Providers::WidgetActionInvokedArgs>{ using type = winrt::Microsoft::Windows::Widgets::Providers::IWidgetActionInvokedArgs; };
    template <> struct default_interface<winrt::Microsoft::Windows::Widgets::Providers::WidgetContext>{ using type = winrt::Microsoft::Windows::Widgets::Providers::IWidgetContext; };
    template <> struct default_interface<winrt::Microsoft::Windows::Widgets::Providers::WidgetContextChangedArgs>{ using type = winrt::Microsoft::Windows::Widgets::Providers::IWidgetContextChangedArgs; };
    template <> struct default_interface<winrt::Microsoft::Windows::Widgets::Providers::WidgetInfo>{ using type = winrt::Microsoft::Windows::Widgets::Providers::IWidgetInfo; };
    template <> struct default_interface<winrt::Microsoft::Windows::Widgets::Providers::WidgetManager>{ using type = winrt::Microsoft::Windows::Widgets::Providers::IWidgetManager; };
    template <> struct default_interface<winrt::Microsoft::Windows::Widgets::Providers::WidgetUpdateRequestOptions>{ using type = winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptions; };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetActionInvokedArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_WidgetContext(void**) noexcept = 0;
            virtual int32_t __stdcall get_Verb(void**) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomState(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContext>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefinitionId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Size(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContextChangedArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_WidgetContext(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetInfo>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_WidgetContext(void**) noexcept = 0;
            virtual int32_t __stdcall get_Template(void**) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomState(void**) noexcept = 0;
            virtual int32_t __stdcall get_LastUpdateTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManager>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall UpdateWidget(void*) noexcept = 0;
            virtual int32_t __stdcall GetWidgetIds(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall GetWidgetInfo(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetWidgetInfos(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall DeleteWidget(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManagerStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetProvider>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWidget(void*) noexcept = 0;
            virtual int32_t __stdcall DeleteWidget(void*, void*) noexcept = 0;
            virtual int32_t __stdcall OnActionInvoked(void*) noexcept = 0;
            virtual int32_t __stdcall OnWidgetContextChanged(void*) noexcept = 0;
            virtual int32_t __stdcall Activate(void*) noexcept = 0;
            virtual int32_t __stdcall Deactivate(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptions>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_WidgetId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Template(void**) noexcept = 0;
            virtual int32_t __stdcall put_Template(void*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall put_Data(void*) noexcept = 0;
            virtual int32_t __stdcall get_CustomState(void**) noexcept = 0;
            virtual int32_t __stdcall put_CustomState(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_UnsetValue(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetActionInvokedArgs
    {
        [[nodiscard]] auto WidgetContext() const;
        [[nodiscard]] auto Verb() const;
        [[nodiscard]] auto Data() const;
        [[nodiscard]] auto CustomState() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetActionInvokedArgs>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetActionInvokedArgs<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetContext
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto DefinitionId() const;
        [[nodiscard]] auto Size() const;
        [[nodiscard]] auto IsActive() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContext>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetContext<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetContextChangedArgs
    {
        [[nodiscard]] auto WidgetContext() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetContextChangedArgs>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetContextChangedArgs<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetInfo
    {
        [[nodiscard]] auto WidgetContext() const;
        [[nodiscard]] auto Template() const;
        [[nodiscard]] auto Data() const;
        [[nodiscard]] auto CustomState() const;
        [[nodiscard]] auto LastUpdateTime() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetInfo>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetInfo<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetManager
    {
        auto UpdateWidget(winrt::Microsoft::Windows::Widgets::Providers::WidgetUpdateRequestOptions const& widgetUpdateRequestOptions) const;
        auto GetWidgetIds() const;
        auto GetWidgetInfo(param::hstring const& widgetId) const;
        auto GetWidgetInfos() const;
        auto DeleteWidget(param::hstring const& widgetId) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManager>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetManager<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetManagerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetManagerStatics>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetManagerStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetProvider
    {
        auto CreateWidget(winrt::Microsoft::Windows::Widgets::Providers::WidgetContext const& widgetContext) const;
        auto DeleteWidget(param::hstring const& widgetId, param::hstring const& customState) const;
        auto OnActionInvoked(winrt::Microsoft::Windows::Widgets::Providers::WidgetActionInvokedArgs const& actionInvokedArgs) const;
        auto OnWidgetContextChanged(winrt::Microsoft::Windows::Widgets::Providers::WidgetContextChangedArgs const& contextChangedArgs) const;
        auto Activate(winrt::Microsoft::Windows::Widgets::Providers::WidgetContext const& widgetContext) const;
        auto Deactivate(param::hstring const& widgetId) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetProvider>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetProvider<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptions
    {
        [[nodiscard]] auto WidgetId() const;
        [[nodiscard]] auto Template() const;
        auto Template(param::hstring const& value) const;
        [[nodiscard]] auto Data() const;
        auto Data(param::hstring const& value) const;
        [[nodiscard]] auto CustomState() const;
        auto CustomState(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptions>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptions<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptionsFactory
    {
        auto CreateInstance(param::hstring const& widgetId) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsFactory>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptionsStatics
    {
        [[nodiscard]] auto UnsetValue() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Widgets::Providers::IWidgetUpdateRequestOptionsStatics>
    {
        template <typename D> using type = consume_Microsoft_Windows_Widgets_Providers_IWidgetUpdateRequestOptionsStatics<D>;
    };
}
#endif
