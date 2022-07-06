#include <jni.h>
JNIEXPORT jstring JNICALL
Java_com_example_securekeys_MainActivity_getPublicKey(JNIEnv *env, jobject instance) {
    return (*env)->  NewStringUTF(env, "long_public_key");
}
JNIEXPORT jstring JNICALL
Java_com_example_securekeys_MainActivity_getPrivateKey(JNIEnv *env, jobject instance) {
    return (*env)->NewStringUTF(env, "long_private_key");
}

JNIEXPORT jstring JNICALL
Java_com_example_securekeys_App_getPrivateAppKey(JNIEnv *env, jobject this) {
    return (*env)->NewStringUTF(env, "long_private_key");
}

JNIEXPORT jstring JNICALL
Java_com_example_securekeys_App_getPublicAppKey(JNIEnv *env, jobject this) {
    return (*env)->  NewStringUTF(env, "long_public_key");
}