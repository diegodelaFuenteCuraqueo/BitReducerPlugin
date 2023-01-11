/*
  ==============================================================================

    BitReduction.h
    Created: 11 Jan 2023 1:06:55am
    Author:  Diego Ignacio de la Fuente Curaqueo

  ==============================================================================
*/

#pragma once

class BitReduction{
  public:
    BitReduction();
    ~BitReduction();

    void bitReducProcess(float* inAudio, float* outAudio, int inBitReduction, int inNumSamples);
}
