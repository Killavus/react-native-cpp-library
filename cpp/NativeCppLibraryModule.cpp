#include "NativeCppLibraryModule.h"

namespace facebook::react
{
  NativeCppLibraryModule::NativeCppLibraryModule(std::shared_ptr<CallInvoker> jsInvoker) : NativeCppLibraryCxxSpec(jsInvoker) {}

  // Doing nothing in destructor - not needed.
  NativeCppLibraryModule::~NativeCppLibraryModule() {}

  double NativeCppLibraryModule::multiply(jsi::Runtime &runtime, double a, double b)
  {
    return a * b;
  }
}
