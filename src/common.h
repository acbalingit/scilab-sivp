/***********************************************************************
 * SIVP - Scilab Image and Video Processing toolbox
 * Copyright (C) 2005  Shiqi Yu
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 ***********************************************************************/


#ifndef SIVP_COMMON_H
#define SIVP_COMMON_H

#ifdef __cplusplus
extern "C" {
#endif


#define CV_INLINE static

#ifndef TRUE
    #define TRUE 1
#endif
#ifndef FALSE
    #define FALSE 0
#endif

#define SIVP_ABS(a) ((a) < 0 ? (-(a)) : (a))
typedef int BOOL;


#define SIVP_FLOAT 32
#define SIVP_DOUBLE 64

#include "config.h"

#include <stdio.h>

#include <cv.h>
#include <cxcore.h>
#include <highgui.h>

#include <stack-c.h>


#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define MAX_AVI_FILE_NUM 32
#define MAX_FILENAME_LENGTH 2048

  typedef struct OpenedAvifileCap{
    int iswriter; //reader or writer
    union{
      CvCapture * cap; //for reading from video files or cameras
      CvVideoWriter * writer; // for writing to video files 
    }video;
    int width; //now only used by writer
    int height;//now only used by writer
    char filename[MAX_FILENAME_LENGTH];
  } OpenedAvifileCap;

  OpenedAvifileCap OpenedAviCap[MAX_AVI_FILE_NUM];

//#ifdef HAVE_FFMPEG
//#include <ffmpeg/avcodec.h>
//#include <ffmpeg/avformat.h>
//#endif

  BOOL IplImg2Mat(IplImage * pImage, int nPos);

  BOOL Create2DIntMat(int nPos, int nRow, int nCol, void * pData, int nType);
  BOOL Create2DFloatMat(int nPos, int nRow, int nCol, float * pData);
  BOOL Create2DDoubleMat(int nPos, int nRow, int nCol, double * pData);
  BOOL Create3DIntMat(int nPos, int nRow, int nCol, int nCh, void * pData, int nType);
  BOOL Create3DFloatMat(int nPos, int nRow, int nCol, int nCh, float* pData);
  BOOL Create3DDoubleMat(int nPos, int nRow, int nCol, int nCh, double* pData);

  IplImage * Mat2IplImg(int nPos);
  IplImage * CreateIplImgFromHm(int nPos);

  BOOL MatData2ImgData(IplImage * pImage, void * pMatData);
  BOOL ImgData2MatData(IplImage * pImage, void * pMatData);
  
  
  int IplType2SciType(int IplType);
  int SciType2IplType(int SciType);

  void img2mat(unsigned char* pSrc, unsigned char * pDst, int nWidth, int nHeight, int nCh);
  void mat2img(unsigned char * pMat, unsigned char *pImg, int nWidth, int nHeight, int nCh);


#ifdef __cplusplus
}
#endif


#endif
