#pragma once

#include "conv/Forward.h"

#define STATIC static
#define VIRTUAL virtual

class ForwardAuto : public Forward {
public:
  THClState *state;
  int device;
  ClConvolver *conv;

  int num;
  int *milliseconds;
  bool *valid;
  int chosenIndex;
  Forward **instances;
  int nextIndex;

//  virtual ~Forward() {}
//  virtual void forward(THClState *state, THClTensor *input, THClTensor *weight, THClTensor *bias, THClTensor *output) = 0;

  // [[[cog
  // import cog_addheaders
  // cog_addheaders.add()
  // ]]]
  // generated, using cog:
  ForwardAuto(THClState *state, int device, ClConvolver *conv);
  VIRTUAL ~ForwardAuto();
  VIRTUAL void forward(THClState *state, THClTensor *input, THClTensor *weight, THClTensor *bias, THClTensor *output);

  // [[[end]]]
};
