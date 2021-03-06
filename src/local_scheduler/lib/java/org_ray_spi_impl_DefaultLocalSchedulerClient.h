/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ray_spi_impl_DefaultLocalSchedulerClient */

#ifndef _Included_org_ray_spi_impl_DefaultLocalSchedulerClient
#define _Included_org_ray_spi_impl_DefaultLocalSchedulerClient
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativeInit
 * Signature: (Ljava/lang/String;[BZ[BZ)J
 */
JNIEXPORT jlong JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativeInit(JNIEnv *,
                                                             jclass,
                                                             jstring,
                                                             jbyteArray,
                                                             jboolean,
                                                             jbyteArray,
                                                             jboolean);

/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativeSubmitTask
 * Signature: (J[BLjava/nio/ByteBuffer;IIZ)V
 */
JNIEXPORT void JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativeSubmitTask(JNIEnv *,
                                                                   jclass,
                                                                   jlong,
                                                                   jbyteArray,
                                                                   jobject,
                                                                   jint,
                                                                   jint,
                                                                   jboolean);

/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativeGetTask
 * Signature: (JZ)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativeGetTask(JNIEnv *,
                                                                jclass,
                                                                jlong,
                                                                jboolean);

/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativeDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativeDestroy(JNIEnv *,
                                                                jclass,
                                                                jlong);

/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativeReconstructObjects
 * Signature: (J[[BZ)V
 */
JNIEXPORT void JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativeReconstructObjects(
    JNIEnv *,
    jclass,
    jlong,
    jobjectArray,
    jboolean);

/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativeNotifyUnblocked
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativeNotifyUnblocked(
    JNIEnv *,
    jclass,
    jlong);

/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativePutObject
 * Signature: (J[B[B)V
 */
JNIEXPORT void JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativePutObject(JNIEnv *,
                                                                  jclass,
                                                                  jlong,
                                                                  jbyteArray,
                                                                  jbyteArray);

/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativeWaitObject
 * Signature: (J[[BIIZ)[Z
 */
JNIEXPORT jbooleanArray JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativeWaitObject(JNIEnv *,
                                                                   jclass,
                                                                   jlong,
                                                                   jobjectArray,
                                                                   jint,
                                                                   jint,
                                                                   jboolean);

/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativeGenerateTaskId
 * Signature: ([B[BI)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativeGenerateTaskId(
    JNIEnv *,
    jclass,
    jbyteArray,
    jbyteArray,
    jint);

/*
 * Class:     org_ray_spi_impl_DefaultLocalSchedulerClient
 * Method:    nativeFreePlasmaObjects
 * Signature: (J[[BZ)V
 */
JNIEXPORT void JNICALL
Java_org_ray_spi_impl_DefaultLocalSchedulerClient_nativeFreePlasmaObjects(
    JNIEnv *,
    jclass,
    jlong,
    jobjectArray,
    jboolean);

#ifdef __cplusplus
}
#endif
#endif
