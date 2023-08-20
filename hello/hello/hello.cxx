#include <Windows.h>

#ifdef GetCurrentTime
#undef GetCurrentTime
#endif

#include <winrt/Microsoft.UI.Xaml.h>
#include <MddBootstrap.h>
#include <WindowsAppSDK-VersionInfo.h>

using namespace winrt;
using namespace winrt::Microsoft;
using namespace winrt::Microsoft::UI;
using namespace winrt::Microsoft::UI::Xaml;
using namespace ::Microsoft::WindowsAppSDK;

int
main (int argc, char* argv [])
{
  init_apartment (apartment_type::single_threaded);

  MddBootstrapInitialize2 (Release::MajorMinor,
                           Release::VersionTag,
                           PACKAGE_VERSION {Runtime::Version::UInt64},
                           MddBootstrapInitializeOptions_OnNoMatch_ShowUI);

  Application::Start ([] (auto&&)
  {
    Application a;
    Window w;
    w.Activate ();
  });

  MddBootstrapShutdown ();
}
