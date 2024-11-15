         org   0x0000
  
; Sizes for immediate values
MIN_SIGNED     equ -32768
MAX_SIGNED     equ 32767
MIN_UNSIGNED   equ 0
MAX_UNSIGNED   equ 65535
MIN_EXTSIGNED  equ -65535
MAX_EXTSIGNED  equ 65535

; Range checks immediate values - all fail
;==============================================================
   add  R1,#MIN_EXTSIGNED-1     ; unsigned [-65535..65535]
   sub  R1,#MIN_EXTSIGNED-1     ; unsigned [-65535..65535]
   and  R1,#MIN_UNSIGNED-1      ; unsigned [0..65535]
   or   R1,#MIN_UNSIGNED-1      ; unsigned [0..65535]
   mul  R1,#MIN_UNSIGNED-1      ; unsigned [0..65535]
   xor  R1,#MIN_SIGNED-1        ; signed   [-32768..32767]
   eor  R1,#MIN_SIGNED-1        ; signed   [-32768..32767]
   movh R1,#MIN_UNSIGNED-1      ; unsigned [0..65535]
   add  R1,R1,#MIN_EXTSIGNED-1  ; unsigned [-65535..65535]
   sub  R1,R1,#MIN_EXTSIGNED-1  ; unsigned [-65535..65535]
   and  R1,R1,#MIN_UNSIGNED-1   ; unsigned [0..65535]
   or   R1,R1,#MIN_UNSIGNED-1   ; unsigned [0..65535]
   mul  R1,R1,#MIN_UNSIGNED-1   ; unsigned [0..65535]
   xor  R1,R1,#MIN_SIGNED-1     ; signed   [-32768..32767]
   eor  R1,R1,#MIN_SIGNED-1     ; signed   [-32768..32767]

   add  R1,#MAX_EXTSIGNED+1     ; unsigned [-65535..65535]
   sub  R1,#MAX_EXTSIGNED+1     ; unsigned [-65535..65535]
   and  R1,#MAX_UNSIGNED+1      ; unsigned [0..65535]
   or   R1,#MAX_UNSIGNED+1      ; unsigned [0..65535]
   mul  R1,#MAX_UNSIGNED+1      ; unsigned [0..65535]
   xor  R1,#MAX_SIGNED+1        ; signed   [-32768..32767]
   eor  R1,#MAX_SIGNED+1        ; signed   [-32768..32767]
   movh R1,#MAX_UNSIGNED+1      ; unsigned [0..65535]
   add  R1,R1,#MAX_UNSIGNED+1   ; unsigned [-65535..65535]
   sub  R1,R1,#MAX_UNSIGNED+1   ; unsigned [-65535..65535]
   and  R1,R1,#MAX_UNSIGNED+1   ; unsigned [0..65535]
   or   R1,R1,#MAX_UNSIGNED+1   ; unsigned [0..65535]
   mul  R1,R1,#MAX_UNSIGNED+1   ; unsigned [0..65535]
   xor  R1,#MAX_SIGNED+1        ; signed   [-32768..32767]
   eor  R1,#MAX_SIGNED+1        ; signed   [-32768..32767]

; Range checks immediate values - all pass
;==============================================================
   ; Check negation
   add R3,R2,#-12
   sub R3,R2,#-12

   add  R1,#MIN_EXTSIGNED    ; unsigned [-65535..65535]
   sub  R1,#MIN_EXTSIGNED    ; unsigned [-65535..65535]
   and  R1,#MIN_UNSIGNED     ; unsigned [0..65535]
   or   R1,#MIN_UNSIGNED     ; unsigned [0..65535]
   mul  R1,#MIN_UNSIGNED     ; unsigned [0..65535]
   xor  R1,#MIN_SIGNED       ; signed   [-32768..32767]
   eor  R1,#MIN_SIGNED       ; signed   [-32768..32767]
   movh R1,#MIN_UNSIGNED     ; unsigned [0..65535]
   add  R1,R1,#MIN_UNSIGNED  ; unsigned [-65535..65535]
   sub  R1,R1,#MIN_UNSIGNED  ; unsigned [-65535..65535]
   and  R1,R1,#MIN_UNSIGNED  ; unsigned [0..65535]
   or   R1,R1,#MIN_UNSIGNED  ; unsigned [0..65535]
   mul  R1,R1,#MIN_UNSIGNED  ; unsigned [0..65535]
   xor  R1,R1,#MIN_SIGNED    ; signed   [-32768..32767]
   eor  R1,R1,#MIN_SIGNED    ; signed   [-32768..32767]

   add  R1,#MAX_EXTSIGNED    ; unsigned [-65535..65535]
   sub  R1,#MAX_EXTSIGNED    ; unsigned [-65535..65535]
   and  R1,#MAX_UNSIGNED     ; unsigned [0..65535]
   or   R1,#MAX_UNSIGNED     ; unsigned [0..65535]
   mul  R1,#MAX_UNSIGNED     ; unsigned [0..65535]
   xor  R1,#MAX_SIGNED       ; signed   [-32768..32767]
   eor  R1,#MAX_SIGNED       ; signed   [-32768..32767]
   movh R1,#MAX_UNSIGNED     ; unsigned [0..65535]
   add  R1,R1,#MAX_UNSIGNED  ; unsigned [-65535..65535]
   sub  R1,R1,#MAX_UNSIGNED  ; unsigned [-65535..65535]
   and  R1,R1,#MAX_UNSIGNED  ; unsigned [0..65535]
   or   R1,R1,#MAX_UNSIGNED  ; unsigned [0..65535]
   mul  R1,R1,#MAX_UNSIGNED  ; unsigned [0..65535]
   xor  R1,R1,#MAX_SIGNED    ; signed   [-32768..32767]
   eor  R1,R1,#MAX_SIGNED    ; signed   [-32768..32767]

;==========================================================
   mov  R1,R2
   mov  R1,#0x1234

   add  R1,R2
   sub  R1,R2
   and  R1,R2
   or   R1,R2
   eor  R1,R2
   xor  R1,R2
   mul  R1,R2

   add  R1,#0x1234
   sub  R1,#0x1234
   and  R1,#0x1234
   or   R1,#0x1234
   eor  R1,#0x1234
   xor  R1,#0x1234
   mul  R1,#0x1234

   add  R1,R2,R3
   sub  R1,R2,R3
   and  R1,R2,R3
   or   R1,R2,R3
   eor  R1,R2,R3
   xor  R1,R2,R3
   mul  R1,R2,R3

   add  R1,R2,#0x1234
   sub  R1,R2,#0x1234
   and  R1,R2,#0x1234
   or   R1,R2,#0x1234
   eor  R1,R2,#0x1234
   xor  R1,R2,#0x1234
   movh R1,#0x1234
   add  R1,#0x5678
   mul  R1,R2,#0x1234

   ld  R1,0x1234(R2)
   ld  R1,(R2)
   ld  R1,0x1234
   jmp 0x1234(R2)
   jmp 0x1234
   jmp (R2)
   rts

   st  R1,0x1234(R2)
   st  R1,(R2)
   st  R1,0x1234

label:
   bra label
   bcs label
   blo label
   beq label
   bvs label

   bmi label
   blt label
   ble label
   bls label

   bsr label
   bcc label
   bhs label
   bne label
   bvc label

   bpl label
   bge label
   bgt label
   bhi label


; Tutorial Example
   mov r1,#0
   mov r2,#1
loop1:
   add r1,r1,r2
   bra loop1

