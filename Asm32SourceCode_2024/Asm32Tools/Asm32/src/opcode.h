/*
 **   OPCODE.H
 */
#include <stdint.h>

struct op_entry {
   const char  *mnemonic;
   int   (*clazz)(op_entry &);
   uint8_t    size;     // Bit map of PermittedSizes
   uint32_t   opcode;
   uint32_t   ea_mask;
};

/* operand size indices for return values */
enum {
   BYTE_SIZE_IDX=0,
   WORD_SIZE_IDX=1,
   LONG_SIZE_IDX=2,
   NO_SIZE_IDX=3
};

/****************************************************************/
/*    OPCODE INFORMATION                                        */
/****************************************************************/

/* effective address types and categories */
enum {
   NOT_USED,
   PSEUDO_OP,
   SIGNED_IMM,
   UNSIGNED_IMM,
};

/* operand sizes for opcode table */
enum PermittedSizes {
   BYTE_SIZE  = (0x01),
   WORD_SIZE  = (0x02),
   LONG_SIZE  = (0x04),
   ANY_SIZE   = BYTE_SIZE|WORD_SIZE|LONG_SIZE,
   DEF_SIZE   = ANY_SIZE, /* no size given in mnemonic */
   NO_SIZE    = (0x00)    /* unsized */
};

extern op_entry op_info[];
