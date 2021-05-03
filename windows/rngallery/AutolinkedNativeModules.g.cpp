// AutolinkedNativeModules.g.cpp contents generated by "react-native autolink-windows"
// clang-format off
#include "pch.h"
#include "AutolinkedNativeModules.g.h"

// Includes from @react-native-community/checkbox
#include <winrt/CheckboxWindows.h>

// Includes from @react-native-community/progress-view
#include <winrt/progress_view.h>

// Includes from @react-native-community/slider
#include <winrt/SliderWindows.h>

// Includes from @terrylinla/react-native-sketch-canvas
#include <winrt/RNSketchCanvas.h>

// Includes from react-native-config
#include <winrt/RNCConfig.h>

// Includes from react-native-device-info
#include <winrt/RNDeviceInfoCPP.h>

// Includes from react-native-gesture-handler
#include <winrt/RNGestureHandler.h>

// Includes from react-native-permissions
#include <winrt/RNPermissions.h>

// Includes from react-native-print
#include <winrt/RNPrint.h>

// Includes from react-native-sensitive-info
#include <winrt/RNSensitiveInfoCPP.h>

// Includes from react-native-tts
#include <winrt/RNTTS.h>

// Includes from react-native-xaml
#include <winrt/ReactNativeXaml.h>

namespace winrt::Microsoft::ReactNative
{

void RegisterAutolinkedNativeModulePackages(winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::ReactNative::IReactPackageProvider> const& packageProviders)
{ 
    // IReactPackageProviders from @react-native-community/checkbox
    packageProviders.Append(winrt::CheckboxWindows::ReactPackageProvider());
    // IReactPackageProviders from @react-native-community/progress-view
    packageProviders.Append(winrt::progress_view::ReactPackageProvider());
    // IReactPackageProviders from @react-native-community/slider
    packageProviders.Append(winrt::SliderWindows::ReactPackageProvider());
    // IReactPackageProviders from @terrylinla/react-native-sketch-canvas
    packageProviders.Append(winrt::RNSketchCanvas::ReactPackageProvider());
    // IReactPackageProviders from react-native-config
    packageProviders.Append(winrt::RNCConfig::ReactPackageProvider());
    // IReactPackageProviders from react-native-device-info
    packageProviders.Append(winrt::RNDeviceInfoCPP::ReactPackageProvider());
    // IReactPackageProviders from react-native-gesture-handler
    packageProviders.Append(winrt::RNGestureHandler::ReactPackageProvider());
    // IReactPackageProviders from react-native-permissions
    packageProviders.Append(winrt::RNPermissions::ReactPackageProvider());
    // IReactPackageProviders from react-native-print
    packageProviders.Append(winrt::RNPrint::ReactPackageProvider());
    // IReactPackageProviders from react-native-sensitive-info
    packageProviders.Append(winrt::RNSensitiveInfoCPP::ReactPackageProvider());
    // IReactPackageProviders from react-native-tts
    packageProviders.Append(winrt::RNTTS::ReactPackageProvider());
    // IReactPackageProviders from react-native-xaml
    packageProviders.Append(winrt::ReactNativeXaml::ReactPackageProvider());
}

}
