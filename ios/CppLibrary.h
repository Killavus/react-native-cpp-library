#ifdef __cplusplus
#import "react-native-cpp-library.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCppLibrarySpec.h"

@interface CppLibrary : NSObject <NativeCppLibrarySpec>
#else
#import <React/RCTBridgeModule.h>

@interface CppLibrary : NSObject <RCTBridgeModule>
#endif

@end
