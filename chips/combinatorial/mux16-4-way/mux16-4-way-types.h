#ifndef MUX16_4_WAY_TYPES_H
#define MUX16_4_WAY_TYPES_H

#include <stdbool.h>
#include "types.h"

typedef struct Mux16_4_Way_Input
{
  bool a[WORD_SIZE];
  bool b[WORD_SIZE];
  bool c[WORD_SIZE];
  bool d[WORD_SIZE];
  bool sel[2];
} Mux16_4_Way_Input;

typedef struct Mux16_4_Way_Output
{
  bool out[WORD_SIZE];
} Mux16_4_Way_Output;

typedef struct Mux16_4_Way
{
  Mux16_4_Way_Input input;
  Mux16_4_Way_Output output;
} Mux16_4_Way;

#endif