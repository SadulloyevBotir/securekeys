#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring  extern "C" JNICALL
Java_com_example_securekeys_MainActivity_getAPIKey(
        JNIEnv* env,
        jobject /* this */) {
    std::string api_key = "API KEY";
    return env->NewStringUTF(api_key.c_str());

extern "C" JNIEXPORT jstring  extern "C" JNICALL
Java_com_example_securekeys_MainActivity_getApplicationKey(
        JNIEnv* env,
        jobject /* this */) {
    std::string api_key = "Application Key";
    return env->NewStringUTF(api_key.c_str());

}