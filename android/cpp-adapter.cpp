#include <jni.h>
#include "react-native-cpp-library.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_cpplibrary_CppLibraryModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return cpplibrary::multiply(a, b);
}
