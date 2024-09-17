/*
**  opcode.c - table of information for assembler
*/
#include <stddef.h>
#include "opcode.h"

typedef int class_handler(op_entry &);

extern int do_INHERENT(op_entry &);
extern int do_2or3ADDRESS(op_entry &);
extern int do_2ADDRESS(op_entry &);
extern int do_INDEXED(op_entry &);
extern int do_REGISTER(op_entry &);
extern int do_BRANCH(op_entry &);

extern int do_ORG(op_entry &);
//extern int do_REG(op_entry &);
extern int do_EQU(op_entry &);
extern int do_DC(op_entry &);
extern int do_DS(op_entry &);
extern int do_ALIGN(op_entry &);
extern int do_END(op_entry &);
extern int do_DATA(op_entry &);
extern int do_TEXT(op_entry &);
extern int do_GLOBAL(op_entry &);
extern int do_EXTERN(op_entry &);
//extern int do_XDEF(op_entry &);
//extern int do_XREF(op_entry &);
//extern int do_PUSH(op_entry &);
//extern int do_PULL(op_entry &);

op_entry op_info[]=
/*
    Information for each instruction
*/
{
/*
  <pseudo-op> <args....>
*/
/* mnemonic     class           size            opcode  ea modes */
{"ORG",      do_ORG,            NO_SIZE,        0x0000, PSEUDO_OP},
#ifdef LABELS
{"EQU",      do_EQU,            NO_SIZE,        0x0000, PSEUDO_OP},
//{"REG",      do_REG,            NO_SIZE,        0x0000, PSEUDO_OP},
#endif
{"DC",       do_DC,             ANY_SIZE,       0x0000, PSEUDO_OP},
{"BYTE",     do_DC,             BYTE_SIZE,      0x0000, PSEUDO_OP},
{"WORD",     do_DC,             WORD_SIZE,      0x0000, PSEUDO_OP},
{"LONG",     do_DC,             LONG_SIZE,      0x0000, PSEUDO_OP},
{"ASCII",    do_DC,             BYTE_SIZE,      0x0000, PSEUDO_OP},
{"DS",       do_DS,             ANY_SIZE,       0x0000, PSEUDO_OP},
{"BLOCK",    do_DS,             BYTE_SIZE,      0x0000, PSEUDO_OP},
{"RMB",      do_DS,             BYTE_SIZE,      0x0000, PSEUDO_OP},
{"ALIGN",    do_ALIGN,          ANY_SIZE,       0x0000, PSEUDO_OP},
#ifdef ASM
{"EXTERN",   do_EXTERN,         NO_SIZE,        0x0000, PSEUDO_OP},
{"XREF",     do_EXTERN,         NO_SIZE,        0x0000, PSEUDO_OP},
{"GLOBAL",   do_GLOBAL,         NO_SIZE,        0x0000, PSEUDO_OP},
{"XDEF",     do_GLOBAL,         NO_SIZE,        0x0000, PSEUDO_OP},
{"TEXT",     do_TEXT,           NO_SIZE,        0x0000, PSEUDO_OP},
{"DATA",     do_DATA,           NO_SIZE,        0x0000, PSEUDO_OP},
{"END",      do_END,            NO_SIZE,        0x0000, PSEUDO_OP},
#endif

/*
  <mnemonic>
*/
/* mnemonic     class           size            opcode  ea modes */
{"RTS",      do_INHERENT,       NO_SIZE,        0x40000000+(31<<16), NOT_USED},
/*
  <mnemonic> Ra,Rb
  <mnemonic> Ra,#dddd
*/
{"MOV",      do_2ADDRESS,      NO_SIZE,       0x00000000+(0x0<<26), UNSIGNED_IMM},
{"MOVH",     do_2ADDRESS,      NO_SIZE,       0x00000000+(0x5<<26), UNSIGNED_IMM},
{"SWAP",     do_2ADDRESS,      NO_SIZE,       0x00000000+(0x5<<26), NOT_USED},

{"ADD",      do_2or3ADDRESS,   NO_SIZE,       0x00000000+(0x0<<26), UNSIGNED_IMM},
{"SUB",      do_2or3ADDRESS,   NO_SIZE,       0x00000000+(0x1<<26), UNSIGNED_IMM},
{"AND",      do_2or3ADDRESS,   NO_SIZE,       0x00000000+(0x2<<26), UNSIGNED_IMM},
{"OR",       do_2or3ADDRESS,   NO_SIZE,       0x00000000+(0x3<<26), UNSIGNED_IMM},
{"EOR",      do_2or3ADDRESS,   NO_SIZE,       0x00000000+(0x4<<26), SIGNED_IMM},
{"XOR",      do_2or3ADDRESS,   NO_SIZE,       0x00000000+(0x4<<26), SIGNED_IMM},
{"MUL",      do_2or3ADDRESS,   NO_SIZE,       0x00000000+(0x7<<26), UNSIGNED_IMM},
/*
  <mnemonic> Rb,dddd(Ra)
*/
{"LD",       do_INDEXED,        ANY_SIZE,      0x40000000, SIGNED_IMM},
{"ST",       do_INDEXED,        ANY_SIZE,      0x60000000, SIGNED_IMM},
/*
  <mnemonic> dddd(Ra)
*/
{"JMP",      do_REGISTER,       NO_SIZE,       0x40000000, SIGNED_IMM},
/*
  <mnemonic> <label>
*/
{"BRA",       do_BRANCH,        NO_SIZE, 0x80000000+(0x0<<23), SIGNED_IMM},
{"BSR",       do_BRANCH,        NO_SIZE, 0x80000000+(0x1<<23), SIGNED_IMM},
{"BCS",       do_BRANCH,        NO_SIZE, 0x80000000+(0x2<<23), SIGNED_IMM},
{"BLO",/*BCS*/do_BRANCH,        NO_SIZE, 0x80000000+(0x2<<23), SIGNED_IMM},
{"BCC",       do_BRANCH,        NO_SIZE, 0x80000000+(0x3<<23), SIGNED_IMM},
{"BHS",/*BCC*/do_BRANCH,        NO_SIZE, 0x80000000+(0x3<<23), SIGNED_IMM},
{"BEQ",       do_BRANCH,        NO_SIZE, 0x80000000+(0x4<<23), SIGNED_IMM},
{"BNE",       do_BRANCH,        NO_SIZE, 0x80000000+(0x5<<23), SIGNED_IMM},
{"BVS",       do_BRANCH,        NO_SIZE, 0x80000000+(0x6<<23), SIGNED_IMM},
{"BVC",       do_BRANCH,        NO_SIZE, 0x80000000+(0x7<<23), SIGNED_IMM},
{"BMI",       do_BRANCH,        NO_SIZE, 0x80000000+(0x8<<23), SIGNED_IMM},
{"BPL",       do_BRANCH,        NO_SIZE, 0x80000000+(0x9<<23), SIGNED_IMM},
{"BLT",       do_BRANCH,        NO_SIZE, 0x80000000+(0xA<<23), SIGNED_IMM},
{"BGE",       do_BRANCH,        NO_SIZE, 0x80000000+(0xB<<23), SIGNED_IMM},
{"BLE",       do_BRANCH,        NO_SIZE, 0x80000000+(0xC<<23), SIGNED_IMM},
{"BGT",       do_BRANCH,        NO_SIZE, 0x80000000+(0xD<<23), SIGNED_IMM},
{"BLS",       do_BRANCH,        NO_SIZE, 0x80000000+(0xE<<23), SIGNED_IMM},
{"BHI",       do_BRANCH,        NO_SIZE, 0x80000000+(0xF<<23), SIGNED_IMM},

{NULL,0,0,0,0}
};
