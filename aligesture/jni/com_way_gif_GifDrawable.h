/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_way_gif_GifDrawable */

#ifndef _Included_com_way_gif_GifDrawable
#define _Included_com_way_gif_GifDrawable
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_way_gif_GifDrawable
 * Method:    renderFrame
 * Signature: ([II[I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_way_gif_GifDrawable_renderFrame
  (JNIEnv *, jclass, jintArray, jint, jintArray);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    openFd
 * Signature: ([ILjava/io/FileDescriptor;JZ)I
 */
JNIEXPORT jint JNICALL Java_com_way_gif_GifDrawable_openFd
  (JNIEnv *, jclass, jintArray, jobject, jlong, jboolean);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    openByteArray
 * Signature: ([I[BZ)I
 */
JNIEXPORT jint JNICALL Java_com_way_gif_GifDrawable_openByteArray
  (JNIEnv *, jclass, jintArray, jbyteArray, jboolean);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    openDirectByteBuffer
 * Signature: ([ILjava/nio/ByteBuffer;Z)I
 */
JNIEXPORT jint JNICALL Java_com_way_gif_GifDrawable_openDirectByteBuffer
  (JNIEnv *, jclass, jintArray, jobject, jboolean);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    openStream
 * Signature: ([ILjava/io/InputStream;Z)I
 */
JNIEXPORT jint JNICALL Java_com_way_gif_GifDrawable_openStream
  (JNIEnv *, jclass, jintArray, jobject, jboolean);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    openFile
 * Signature: ([ILjava/lang/String;Z)I
 */
JNIEXPORT jint JNICALL Java_com_way_gif_GifDrawable_openFile
  (JNIEnv *, jclass, jintArray, jstring, jboolean);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    free
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_way_gif_GifDrawable_free
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    reset
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_way_gif_GifDrawable_reset
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    setSpeedFactor
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_way_gif_GifDrawable_setSpeedFactor
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    getComment
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_way_gif_GifDrawable_getComment
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    getLoopCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_way_gif_GifDrawable_getLoopCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    getDuration
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_way_gif_GifDrawable_getDuration
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    getCurrentPosition
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_way_gif_GifDrawable_getCurrentPosition
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    seekToTime
 * Signature: (II[I)V
 */
JNIEXPORT void JNICALL Java_com_way_gif_GifDrawable_seekToTime
  (JNIEnv *, jclass, jint, jint, jintArray);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    seekToFrame
 * Signature: (II[I)V
 */
JNIEXPORT void JNICALL Java_com_way_gif_GifDrawable_seekToFrame
  (JNIEnv *, jclass, jint, jint, jintArray);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    saveRemainder
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_way_gif_GifDrawable_saveRemainder
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    restoreRemainder
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_way_gif_GifDrawable_restoreRemainder
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_way_gif_GifDrawable
 * Method:    getAllocationByteCount
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_way_gif_GifDrawable_getAllocationByteCount
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
