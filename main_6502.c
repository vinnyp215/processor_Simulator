/* HEADER FILES */
#include <stdio.h>
#include <stdlib.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;
struct CPU
{
  WORD program_Counter;
  WORD stack_Pointer;

  /* REGISTERS */
  BYTE accumulator;
  BYTE index_Register_X;
  BYTE index_Register_Y;

  /* PROCESSOR FLAGS */
  BYTE carry : 1;
  BYTE zero : 1;
  BYTE interrupt : 1;
  BYTE decimal : 1;
  BYTE break_Command : 1;
  BYTE overflow : 1;
  BYTE negative : 1;
}

void Reset(struct CPU cpu)
{
  cpu.program_Counter = 0xFFFC;
  cpu.stack_Pointer = 0x00FF;
  cpu.decimal = 0;
  cpu.accumulator = 0;
  cpu.index_Register_X = 0;
  cpu.index_Register_Y = 0;
    
}

int main()
{
  struct CPU cpu;
  cpu Reset();
  return 0;
}