// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_Interop_0_H
#define WINRT_Microsoft_UI_Xaml_Interop_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Interop
{
    enum class NotifyCollectionChangedAction : int32_t
    {
        Add = 0,
        Remove = 1,
        Replace = 2,
        Move = 3,
        Reset = 4,
    };
    struct IBindableIterable;
    struct IBindableIterator;
    struct IBindableObservableVector;
    struct IBindableVector;
    struct IBindableVectorView;
    struct INotifyCollectionChanged;
    struct INotifyCollectionChangedEventArgs;
    struct INotifyCollectionChangedEventArgsFactory;
    struct NotifyCollectionChangedEventArgs;
    struct BindableVectorChangedEventHandler;
    struct NotifyCollectionChangedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::IBindableIterable>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::IBindableIterator>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::IBindableObservableVector>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::IBindableVector>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::IBindableVectorView>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChanged>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedAction>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::BindableVectorChangedEventHandler>{ using type = delegate_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventArgs> = L"Microsoft.UI.Xaml.Interop.NotifyCollectionChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedAction> = L"Microsoft.UI.Xaml.Interop.NotifyCollectionChangedAction";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::IBindableIterable> = L"Microsoft.UI.Xaml.Interop.IBindableIterable";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::IBindableIterator> = L"Microsoft.UI.Xaml.Interop.IBindableIterator";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::IBindableObservableVector> = L"Microsoft.UI.Xaml.Interop.IBindableObservableVector";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::IBindableVector> = L"Microsoft.UI.Xaml.Interop.IBindableVector";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::IBindableVectorView> = L"Microsoft.UI.Xaml.Interop.IBindableVectorView";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChanged> = L"Microsoft.UI.Xaml.Interop.INotifyCollectionChanged";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgs> = L"Microsoft.UI.Xaml.Interop.INotifyCollectionChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory> = L"Microsoft.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::BindableVectorChangedEventHandler> = L"Microsoft.UI.Xaml.Interop.BindableVectorChangedEventHandler";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventHandler> = L"Microsoft.UI.Xaml.Interop.NotifyCollectionChangedEventHandler";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::IBindableIterable>{ 0x036D2C08,0xDF29,0x41AF,{ 0x8A,0xA2,0xD7,0x74,0xBE,0x62,0xBA,0x6F } }; // 036D2C08-DF29-41AF-8AA2-D774BE62BA6F
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::IBindableIterator>{ 0x6A1D6C07,0x076D,0x49F2,{ 0x83,0x14,0xF5,0x2C,0x9C,0x9A,0x83,0x31 } }; // 6A1D6C07-076D-49F2-8314-F52C9C9A8331
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::IBindableObservableVector>{ 0xFE1EB536,0x7E7F,0x4F90,{ 0xAC,0x9A,0x47,0x49,0x84,0xAA,0xE5,0x12 } }; // FE1EB536-7E7F-4F90-AC9A-474984AAE512
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::IBindableVector>{ 0x393DE7DE,0x6FD0,0x4C0D,{ 0xBB,0x71,0x47,0x24,0x4A,0x11,0x3E,0x93 } }; // 393DE7DE-6FD0-4C0D-BB71-47244A113E93
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::IBindableVectorView>{ 0x346DD6E7,0x976E,0x4BC3,{ 0x81,0x5D,0xEC,0xE2,0x43,0xBC,0x0F,0x33 } }; // 346DD6E7-976E-4BC3-815D-ECE243BC0F33
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChanged>{ 0x530155E1,0x28A5,0x5693,{ 0x87,0xCE,0x30,0x72,0x4D,0x95,0xA0,0x6D } }; // 530155E1-28A5-5693-87CE-30724D95A06D
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>{ 0xDA049FF2,0xD2E0,0x5FE8,{ 0x8C,0x7B,0xF8,0x7F,0x26,0x06,0x0B,0x6F } }; // DA049FF2-D2E0-5FE8-8C7B-F87F26060B6F
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>{ 0x5108EBA4,0x4892,0x5A20,{ 0x83,0x74,0xA9,0x68,0x15,0xE0,0xFD,0x27 } }; // 5108EBA4-4892-5A20-8374-A96815E0FD27
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::BindableVectorChangedEventHandler>{ 0x624CD4E1,0xD007,0x43B1,{ 0x9C,0x03,0xAF,0x4D,0x3E,0x62,0x58,0xC4 } }; // 624CD4E1-D007-43B1-9C03-AF4D3E6258C4
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>{ 0x8B0909DC,0x2005,0x5D93,{ 0xBF,0x8A,0x72,0x5F,0x01,0x7B,0xAA,0x8D } }; // 8B0909DC-2005-5D93-BF8A-725F017BAA8D
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventArgs>{ using type = winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgs; };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::IBindableIterable>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall First(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::IBindableIterator>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasCurrent(bool*) noexcept = 0;
            virtual int32_t __stdcall MoveNext(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::IBindableObservableVector>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall add_VectorChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VectorChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::IBindableVector>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetAt(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetView(void**) noexcept = 0;
            virtual int32_t __stdcall IndexOf(void*, uint32_t*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetAt(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall InsertAt(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAt(uint32_t) noexcept = 0;
            virtual int32_t __stdcall Append(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAtEnd() noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::IBindableVectorView>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetAt(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall IndexOf(void*, uint32_t*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChanged>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall add_CollectionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CollectionChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Action(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewItems(void**) noexcept = 0;
            virtual int32_t __stdcall get_OldItems(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewStartingIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OldStartingIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithAllParameters(int32_t, void*, void*, int32_t, int32_t, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::BindableVectorChangedEventHandler>
    {
        struct WINRT_IMPL_NOVTABLE type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>
    {
        struct WINRT_IMPL_NOVTABLE type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Interop_IBindableIterable
    {
        auto First() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Interop::IBindableIterable>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Interop_IBindableIterable<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Interop_IBindableIterator
    {
        [[nodiscard]] auto Current() const;
        [[nodiscard]] auto HasCurrent() const;
        auto MoveNext() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Interop::IBindableIterator>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Interop_IBindableIterator<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Interop_IBindableObservableVector
    {
        auto VectorChanged(winrt::Microsoft::UI::Xaml::Interop::BindableVectorChangedEventHandler const& handler) const;
        using VectorChanged_revoker = impl::event_revoker<winrt::Microsoft::UI::Xaml::Interop::IBindableObservableVector, &impl::abi_t<winrt::Microsoft::UI::Xaml::Interop::IBindableObservableVector>::remove_VectorChanged>;
        [[nodiscard]] auto VectorChanged(auto_revoke_t, winrt::Microsoft::UI::Xaml::Interop::BindableVectorChangedEventHandler const& handler) const;
        auto VectorChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Interop::IBindableObservableVector>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Interop_IBindableObservableVector<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Interop_IBindableVector
    {
        auto GetAt(uint32_t index) const;
        [[nodiscard]] auto Size() const;
        auto GetView() const;
        auto IndexOf(winrt::Windows::Foundation::IInspectable const& value, uint32_t& index) const;
        auto SetAt(uint32_t index, winrt::Windows::Foundation::IInspectable const& value) const;
        auto InsertAt(uint32_t index, winrt::Windows::Foundation::IInspectable const& value) const;
        auto RemoveAt(uint32_t index) const;
        auto Append(winrt::Windows::Foundation::IInspectable const& value) const;
        auto RemoveAtEnd() const;
        auto Clear() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Interop::IBindableVector>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Interop_IBindableVector<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Interop_IBindableVectorView
    {
        auto GetAt(uint32_t index) const;
        [[nodiscard]] auto Size() const;
        auto IndexOf(winrt::Windows::Foundation::IInspectable const& value, uint32_t& index) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Interop::IBindableVectorView>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Interop_IBindableVectorView<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Interop_INotifyCollectionChanged
    {
        auto CollectionChanged(winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& handler) const;
        using CollectionChanged_revoker = impl::event_revoker<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChanged, &impl::abi_t<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChanged>::remove_CollectionChanged>;
        [[nodiscard]] auto CollectionChanged(auto_revoke_t, winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& handler) const;
        auto CollectionChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChanged>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Interop_INotifyCollectionChanged<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Interop_INotifyCollectionChangedEventArgs
    {
        [[nodiscard]] auto Action() const;
        [[nodiscard]] auto NewItems() const;
        [[nodiscard]] auto OldItems() const;
        [[nodiscard]] auto NewStartingIndex() const;
        [[nodiscard]] auto OldStartingIndex() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory
    {
        auto CreateInstanceWithAllParameters(winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, winrt::Microsoft::UI::Xaml::Interop::IBindableVector const& newItems, winrt::Microsoft::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex, winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory<D>;
    };
}
#endif
