/*
  =============================================================================/Users/delaefe/Documents/JUCE/BitReducer/Source/BitReduction.h=

    BitReduction.cpp
    Created: 11 Jan 2023 1:06:55am
    Author:  Diego Ignacio de la Fuente Curaqueo

  ==============================================================================
*/

#include "BitReduction.h"

BitReduction::BitReduction()
{

}

BitReduction::~BitReduction()
{

}

void BitReduction::bitReductionProcess(float* inAudio, float* outAudio, int inBitReduction, int inNumSamples)
{
  if(inBitReduction > 1)
  {
    for(int i = 0; i < inNumSamples; i++)
    {
      if(i % inBitReduction != 0)
      {
        /*
          aplica bit reduction, si inBitReduction = 1, entonces la muestra se repite 1 vez
          inBitReduction = 2, entonces la muestra se repite 2 veces
          inBitReduction = 3, entonces la muestra se repite 3 veces..etc
          Es como disminuir el samplerate usando un valor escalar (2 -> 22050, 4 -> 11025, ...)
        */
        outAudio[i] =  (inAudio[i - i % inBitReduction]) * 2;
      }
    }
  }
}
