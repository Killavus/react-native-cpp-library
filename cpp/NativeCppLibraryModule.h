#pragma once

#if __has_include(<React-Codegen/RNCppLibrarySpecJSI.h>)
// CocoaPods include (iOS)
#include <React-Codegen/RNCppLibrarySpecJSI.h>
#elif __has_include(<RNCppLibrarySpecJSI.h>)
// CMake include on Android
#include <RNCppLibrarySpecJSI.h>
#else
#error Cannot find react-native-cpp-library spec! Try cleaning your cache and re-running CodeGen!
#endif


namespace facebook::react
{
  class NativeCppLibraryModule : public NativeCppLibraryCxxSpec<NativeCppLibraryModule>
  {
  public:
    NativeCppLibraryModule(std::shared_ptr<CallInvoker> jsInvoker);
    ~NativeCppLibraryModule();

    // This is dependent on your `NativeCppLibrary.ts` turbomodule spec!
    double multiply(jsi::Runtime &runtime, double a, double b);
  };
}
