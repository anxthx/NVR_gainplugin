/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
NVR_GainPluginAudioProcessorEditor::NVR_GainPluginAudioProcessorEditor (NVR_GainPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    mGainSlider.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    mGainSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, true,50,20);
    mGainSlider.setRange(0.0f,1.0,0.01);
    mGainSlider.setValue(0.5f);
    addAndMakeVisible(mGainSlider);
    setSize (200, 300);
}

NVR_GainPluginAudioProcessorEditor::~NVR_GainPluginAudioProcessorEditor()
{
}

//==============================================================================
void NVR_GainPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);
}

void NVR_GainPluginAudioProcessorEditor::resized()
{
    mGainSlider.setBounds(getWidth()/2-50,getHeight()/2-75,100,150);
}
