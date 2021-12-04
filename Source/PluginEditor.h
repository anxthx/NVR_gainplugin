/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class NVR_GainPluginAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    NVR_GainPluginAudioProcessorEditor (NVR_GainPluginAudioProcessor&);
    ~NVR_GainPluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider mGainSlider;
    NVR_GainPluginAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NVR_GainPluginAudioProcessorEditor)
};
