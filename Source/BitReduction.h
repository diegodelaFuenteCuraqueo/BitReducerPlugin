/*
  ==============================================================================

    BitReduction.h
    Created: 11 Jan 2023 1:06:55am
    Author:  Diego Ignacio de la Fuente Curaqueo

  ==============================================================================
*/

#pragma once

class BitReduction
{
  public:
    BitReduction();
    ~BitReduction();

    /*
     reduce calidad de señal entrante inAudio, en outAudio.
     inBitReduction indica la cantidad de repeticiones de la muestra (disminyyendo resolucion temporal)
     inNumSamples es el tamaño del buffer de audio
    */
    void bitReductionProcess(float* inAudio, float* outAudio, int inBitReduction, int inNumSamples);
};
