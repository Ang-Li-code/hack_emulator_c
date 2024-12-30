#include <stdio.h>
#include "gates/not/not.h"
#include "gates/nand/nand.h"
#include "gates/and/and.h"
#include "gates/or/or.h"
#include "gates/xor/xor.h"
#include "chips/combinatorial/mux/mux.h"
#include "chips/combinatorial/dmux/dmux.h"
#include "chips/combinatorial/not16/not16.h"
#include "chips/combinatorial/and16/and16.h"
#include "chips/combinatorial/or16/or16.h"
#include "chips/combinatorial/or-8-way/or-8-way.h"
#include "chips/combinatorial/mux16-8-way/mux16-8-way.h"
#include "chips/combinatorial/dmux-4-way/dmux-4-way.h"
#include "chips/combinatorial/dmux-8-way/dmux-8-way.h"
#include "types/types.h"

int main(void)
{
  Dmux_8_Way dmux_8_way = {
      .input.in = 1,
      .input.sel = {1, 1, 1},
  };

  dmux_8_way_chip(&dmux_8_way);

  printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", dmux_8_way.output.a, dmux_8_way.output.b, dmux_8_way.output.c, dmux_8_way.output.d, dmux_8_way.output.e, dmux_8_way.output.f, dmux_8_way.output.g, dmux_8_way.output.h);
  printf("\n");
}