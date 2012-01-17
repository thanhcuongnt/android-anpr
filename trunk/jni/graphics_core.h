#ifndef GRAPHICS_CORE__
#define GRAPHICS_CORE__

#include <string.h>
#include <jni.h>
#include <android/bitmap.h>
#include <cpu-features.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "logger.h"
#include <vector>

#ifdef __ARM_NEON__
	#include <arm_neon.h>
#endif

/*
 *  core.h
 *  intelligencyNative
 *
 *  Created by ������ ������ on 15.06.11.
 *  Copyright 2011 Begun. All rights reserved.
 *
 */

namespace GraphicsCoreNS {
	class GraphicsCore {

		public:
			GraphicsCore();
			void processSobelArr (jint* , int, int, uint32_t *, uint32_t *				);
			void convert565to8888 	(JNIEnv *, jobject, jobject							);
			void HSVBrightness 		(JNIEnv *, jclass, 	jobject, jfloatArray			);
			void HSVBrightnessHorizontally (JNIEnv * , jclass, jobject, jfloatArray		);
			void treshold 			(JNIEnv *, jclass, 	jobject, jobject, 	uint8_t		);
			void adaptiveTreshold 	(JNIEnv *, jclass, 	jobject, jobject				);
			void sobel				(JNIEnv *, jclass, 	jobject, jobject, 	jintArray	);
			void fullEdgeDetector	(JNIEnv *, jclass, 	jobject, jobject										);
			void convolve 			(JNIEnv *, jobject, jobject, jintArray, uint8_t, uint8_t, uint8_t, uint8_t	);
			void RGBtoHSV			(double, double, double, double *, double *, double *);
			void sobelFilterTexas 	(uint32_t *, int, int, uint32_t *, int);
	};
};
#endif
