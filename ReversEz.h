#pragma once

#include "IPlug_include_in_plug_hdr.h"

const int kNumPresets = 2;

enum EParams
{
  kGain = 0,
  kHot,
  kNumParams
};

using namespace iplug;
using namespace igraphics;

class ReversEz final : public Plugin
{
public:
  ReversEz(const InstanceInfo& info);

#if IPLUG_DSP // http://bit.ly/2S64BDd
  void ProcessBlock(sample** inputs, sample** outputs, int nFrames) override;
#endif
};
