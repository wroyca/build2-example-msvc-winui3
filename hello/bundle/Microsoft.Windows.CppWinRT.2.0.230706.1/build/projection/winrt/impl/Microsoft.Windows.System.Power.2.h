// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Microsoft_Windows_System_Power_2_H
#define WINRT_Microsoft_Windows_System_Power_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Microsoft.Windows.System.Power.1.h"
WINRT_EXPORT namespace winrt::Microsoft::Windows::System::Power
{
    struct PowerManager
    {
        PowerManager() = delete;
        [[nodiscard]] static auto EnergySaverStatus();
        static auto EnergySaverStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using EnergySaverStatusChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_EnergySaverStatusChanged>;
        [[nodiscard]] static auto EnergySaverStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto EnergySaverStatusChanged(winrt::event_token const& token);
        [[nodiscard]] static auto BatteryStatus();
        static auto BatteryStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using BatteryStatusChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_BatteryStatusChanged>;
        [[nodiscard]] static auto BatteryStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto BatteryStatusChanged(winrt::event_token const& token);
        [[nodiscard]] static auto PowerSupplyStatus();
        static auto PowerSupplyStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using PowerSupplyStatusChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_PowerSupplyStatusChanged>;
        [[nodiscard]] static auto PowerSupplyStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto PowerSupplyStatusChanged(winrt::event_token const& token);
        [[nodiscard]] static auto RemainingChargePercent();
        static auto RemainingChargePercentChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using RemainingChargePercentChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_RemainingChargePercentChanged>;
        [[nodiscard]] static auto RemainingChargePercentChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto RemainingChargePercentChanged(winrt::event_token const& token);
        [[nodiscard]] static auto RemainingDischargeTime();
        static auto RemainingDischargeTimeChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using RemainingDischargeTimeChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_RemainingDischargeTimeChanged>;
        [[nodiscard]] static auto RemainingDischargeTimeChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto RemainingDischargeTimeChanged(winrt::event_token const& token);
        [[nodiscard]] static auto PowerSourceKind();
        static auto PowerSourceKindChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using PowerSourceKindChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_PowerSourceKindChanged>;
        [[nodiscard]] static auto PowerSourceKindChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto PowerSourceKindChanged(winrt::event_token const& token);
        [[nodiscard]] static auto DisplayStatus();
        static auto DisplayStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using DisplayStatusChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_DisplayStatusChanged>;
        [[nodiscard]] static auto DisplayStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto DisplayStatusChanged(winrt::event_token const& token);
        static auto SystemIdleStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using SystemIdleStatusChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_SystemIdleStatusChanged>;
        [[nodiscard]] static auto SystemIdleStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto SystemIdleStatusChanged(winrt::event_token const& token);
        [[nodiscard]] static auto EffectivePowerMode();
        static auto EffectivePowerModeChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using EffectivePowerModeChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_EffectivePowerModeChanged>;
        [[nodiscard]] static auto EffectivePowerModeChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto EffectivePowerModeChanged(winrt::event_token const& token);
        [[nodiscard]] static auto UserPresenceStatus();
        static auto UserPresenceStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using UserPresenceStatusChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_UserPresenceStatusChanged>;
        [[nodiscard]] static auto UserPresenceStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto UserPresenceStatusChanged(winrt::event_token const& token);
        [[nodiscard]] static auto SystemSuspendStatus();
        static auto SystemSuspendStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using SystemSuspendStatusChanged_revoker = impl::factory_event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_SystemSuspendStatusChanged>;
        [[nodiscard]] static auto SystemSuspendStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto SystemSuspendStatusChanged(winrt::event_token const& token);
        [[nodiscard]] static auto EffectivePowerMode2();
    };
}
#endif
