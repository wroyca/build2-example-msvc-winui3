// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Calls_Provider_0_H
#define WINRT_Windows_ApplicationModel_Calls_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Provider
{
    struct IPhoneCallOrigin;
    struct IPhoneCallOrigin2;
    struct IPhoneCallOrigin3;
    struct IPhoneCallOriginManagerStatics;
    struct IPhoneCallOriginManagerStatics2;
    struct IPhoneCallOriginManagerStatics3;
    struct PhoneCallOrigin;
    struct PhoneCallOriginManager;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin> = L"Windows.ApplicationModel.Calls.Provider.PhoneCallOrigin";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager> = L"Windows.ApplicationModel.Calls.Provider.PhoneCallOriginManager";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin3";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOriginManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOriginManagerStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3> = L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOriginManagerStatics3";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>{ 0x20613479,0x0EF9,0x4454,{ 0x87,0x1C,0xAF,0xB6,0x6A,0x14,0xB6,0xA5 } }; // 20613479-0EF9-4454-871C-AFB66A14B6A5
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>{ 0x04C7E980,0x9AC2,0x4768,{ 0xB5,0x36,0xB6,0x8D,0xA4,0x95,0x7D,0x02 } }; // 04C7E980-9AC2-4768-B536-B68DA4957D02
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>{ 0x49330FB4,0xD1A7,0x43A2,{ 0xAE,0xEE,0xC0,0x7B,0x6D,0xBA,0xF0,0x68 } }; // 49330FB4-D1A7-43A2-AEEE-C07B6DBAF068
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>{ 0xCCFC5A0A,0x9AF7,0x6149,{ 0x39,0xD0,0xE0,0x76,0xFC,0xCE,0x13,0x95 } }; // CCFC5A0A-9AF7-6149-39D0-E076FCCE1395
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>{ 0x8BF3EE3F,0x40F4,0x4380,{ 0x8C,0x7C,0xAE,0xA2,0xC9,0xB8,0xDD,0x7A } }; // 8BF3EE3F-40F4-4380-8C7C-AEA2C9B8DD7A
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>{ 0x2ED69764,0xA6E3,0x50F0,{ 0xB7,0x6A,0xD6,0x7C,0xB3,0x9B,0xDF,0xDE } }; // 2ED69764-A6E3-50F0-B76A-D67CB39BDFDE
    template <> struct default_interface<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>{ using type = winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin; };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Category(void**) noexcept = 0;
            virtual int32_t __stdcall put_Category(void*) noexcept = 0;
            virtual int32_t __stdcall get_CategoryDescription(void**) noexcept = 0;
            virtual int32_t __stdcall put_CategoryDescription(void*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayPicture(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayPicture(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCurrentAppActiveCallOriginApp(bool*) noexcept = 0;
            virtual int32_t __stdcall ShowPhoneCallOriginSettingsUI() noexcept = 0;
            virtual int32_t __stdcall SetCallOrigin(winrt::guid, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall RequestSetAsActiveCallOriginAppAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin
    {
        [[nodiscard]] auto Category() const;
        auto Category(param::hstring const& value) const;
        [[nodiscard]] auto CategoryDescription() const;
        auto CategoryDescription(param::hstring const& value) const;
        [[nodiscard]] auto Location() const;
        auto Location(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2
    {
        [[nodiscard]] auto DisplayName() const;
        auto DisplayName(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3
    {
        [[nodiscard]] auto DisplayPicture() const;
        auto DisplayPicture(winrt::Windows::Storage::StorageFile const& value) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics
    {
        [[nodiscard]] auto IsCurrentAppActiveCallOriginApp() const;
        auto ShowPhoneCallOriginSettingsUI() const;
        auto SetCallOrigin(winrt::guid const& requestId, winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const& callOrigin) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics2
    {
        auto RequestSetAsActiveCallOriginAppAsync() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics3
    {
        [[nodiscard]] auto IsSupported() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics3<D>;
    };
}
#endif
