/* ========================================================================== */
/*                                                                            */
/*                                                                            */
/*  !!!!!!!!!!!!!! Replace DOUTH with the name of your module!!!!!!!!!!  */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*   DOUTH_Types.h                                                       */
/*   Autor(s): Ciucu Alexandru-Mihai, Lupu Nicolae, Popescu Andrei-Florin, Preda Stefan-Marian                                                    */
/*   Description                                                              */
/*       File Containing the Type definitions of the module DOUTH        */
/* ========================================================================== */

#ifndef DOUTH_TYPES_H
#define DOUTH_TYPES_H
/* ========================================================================== */
/*                  PUT YOUR CODE HERE                                        */
/* ========================================================================== */

#include "DOUTH_Private.h"

typedef enum{
    DOUTH_LOW = 0,
    DOUTH_HIGH = 1
}DoutH_ValueType; 

typedef uint8 DoutH_ChannelIdType;

typedef DoutH_ValueType DoutH_BufferType[DOUTH_NO_CHANNELS];

#endif
