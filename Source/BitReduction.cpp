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
        outAudio[i] =  (inAudio[i - i % inBitReduction]) * 2;
      }
    }
  }
}
