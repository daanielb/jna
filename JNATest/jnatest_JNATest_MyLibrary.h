/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jnatest_JNATest_MyLibrary */

#ifndef _Included_jnatest_JNATest_MyLibrary
#define _Included_jnatest_JNATest_MyLibrary
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jnatest_JNATest_MyLibrary
 * Method:    calc
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_jnatest_JNATest_00024MyLibrary_calc
  (JNIEnv *, jclass, jint);

/*
 * Class:     jnatest_JNATest_MyLibrary
 * Method:    log
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_jnatest_JNATest_00024MyLibrary_log
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jnatest_JNATest_MyLibrary
 * Method:    getname
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jnatest_JNATest_00024MyLibrary_getname
  (JNIEnv *, jclass);

/*
 * Class:     jnatest_JNATest_MyLibrary
 * Method:    callme
 * Signature: (Ljnatest/JNATest/MyLibrary/callback;)V
 */
JNIEXPORT void JNICALL Java_jnatest_JNATest_00024MyLibrary_callme
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
