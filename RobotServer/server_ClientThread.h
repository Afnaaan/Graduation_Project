/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class server_ClientThread */

#ifndef _Included_server_ClientThread
#define _Included_server_ClientThread
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     server_ClientThread
 * Method:    sendPath1
 * Signature: ([I[III)V
 */
JNIEXPORT void JNICALL Java_server_ClientThread_sendPath1
  (JNIEnv *, jobject, jintArray, jintArray, jint, jint);

/*
 * Class:     server_ClientThread
 * Method:    feedbackPosition
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_server_ClientThread_feedbackPosition
  (JNIEnv *, jclass);

/*
 * Class:     server_ClientThread
 * Method:    sendVelocity
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_server_ClientThread_sendVelocity
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif