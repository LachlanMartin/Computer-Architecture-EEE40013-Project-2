/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_TEXTIO;
static const char *ng1 = "memoryfile";
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3564397177;
static const char *ng5 = "/mnt/c/Users/aligo/Desktop/Developer/EEE40013-Project-2/E2_CPU32Debug_2024/E2_CPU32Debug/Source/CodeMemory.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_3261611579494183203_91900896(char *, char *, char *, char *, char *, char *);


char *work_a_1330581807_1516540902_sub_417864347629189775_2134189630(char *t1, char *t2, char *t3)
{
    char t4[896];
    char t5[24];
    char t12[8];
    char t18[16];
    char t33[8];
    char t45[8];
    char t48[16];
    char t74[32];
    char t83[8192];
    char t100[16];
    char t101[16];
    char t102[16];
    char t103[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    int t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    char *t71;
    unsigned char t72;
    unsigned int t73;
    char *t75;
    char *t76;
    int t77;
    unsigned int t78;
    char *t79;
    int t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned char t96;
    char *t97;
    char *t98;
    char *t99;

LAB0:    t6 = ((STD_TEXTIO) + 3400);
    t7 = (t4 + 4U);
    t8 = xsi_create_file_variable_in_buffer(0, ng1, t6, 0, 0, 1);
    *((char **)t7) = t8;
    t9 = (t4 + 12U);
    t10 = ((STD_STANDARD) + 1272);
    t11 = (t9 + 88U);
    *((char **)t11) = t10;
    t13 = (t9 + 56U);
    *((char **)t13) = t12;
    xsi_type_set_default_value(t10, t12, 0);
    t14 = (t9 + 80U);
    *((unsigned int *)t14) = 1U;
    t15 = (32 - 1);
    t16 = (0 - t15);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t17 = (t17 * 1U);
    t19 = (32 - 1);
    t20 = (t18 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t19;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - t19);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t4 + 132U);
    t24 = ((IEEE_P_2592010699) + 4000);
    t25 = (t21 + 88U);
    *((char **)t25) = t24;
    t26 = (char *)alloca(t17);
    t27 = (t21 + 56U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, t18);
    t28 = (t21 + 64U);
    *((char **)t28) = t18;
    t29 = (t21 + 80U);
    *((unsigned int *)t29) = t17;
    t30 = (t4 + 252U);
    t31 = ((STD_STANDARD) + 0);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    *((unsigned char *)t33) = (unsigned char)1;
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 1U;
    t36 = (t4 + 372U);
    t37 = ((STD_TEXTIO) + 3248);
    t38 = (t36 + 56U);
    *((char **)t38) = t37;
    t39 = (t36 + 40U);
    *((char **)t39) = 0;
    t40 = (t36 + 64U);
    *((int *)t40) = 1;
    t41 = (t36 + 48U);
    *((char **)t41) = 0;
    t42 = (t4 + 444U);
    t43 = ((STD_STANDARD) + 824);
    t44 = (t42 + 88U);
    *((char **)t44) = t43;
    t46 = (t42 + 56U);
    *((char **)t46) = t45;
    xsi_type_set_default_value(t43, t45, 0);
    t47 = (t42 + 80U);
    *((unsigned int *)t47) = 4U;
    t49 = (t48 + 0U);
    t50 = (t49 + 0U);
    *((int *)t50) = 1;
    t50 = (t49 + 4U);
    *((int *)t50) = 4096;
    t50 = (t49 + 8U);
    *((int *)t50) = 1;
    t51 = (4096 - 1);
    t23 = (t51 * 1);
    t23 = (t23 + 1);
    t50 = (t49 + 12U);
    *((unsigned int *)t50) = t23;
    t50 = (t4 + 564U);
    t52 = ((STD_STANDARD) + 984);
    t53 = (t50 + 88U);
    *((char **)t53) = t52;
    t54 = xsi_get_memory(4096U);
    t55 = (t50 + 56U);
    *((char **)t55) = t54;
    xsi_type_set_default_value(t52, t54, t48);
    t56 = (t50 + 64U);
    *((char **)t56) = t48;
    t57 = (t50 + 80U);
    *((unsigned int *)t57) = 4096U;
    t58 = (t50 + 128U);
    *((char **)t58) = t54;
    t59 = (t50 + 120U);
    *((int *)t59) = 0;
    t60 = (t50 + 124U);
    t61 = (t48 + 12U);
    t23 = *((unsigned int *)t61);
    t62 = (t23 - 1);
    *((int *)t60) = t62;
    t63 = (t50 + 116U);
    t65 = (4096U > 2147483644);
    if (t65 == 1)
        goto LAB2;

LAB3:    t66 = (4096U + 3);
    t67 = (t66 / 16);
    t64 = t67;

LAB4:    *((unsigned int *)t63) = t64;
    t68 = xsi_get_transient_memory(8192U);
    memset(t68, 0, 8192U);
    t69 = t68;
    t70 = (32U * 1U);
    t71 = t69;
    memset(t71, (unsigned char)2, t70);
    t72 = (t70 != 0);
    if (t72 == 1)
        goto LAB5;

LAB6:    t75 = (t74 + 0U);
    t76 = (t75 + 0U);
    *((int *)t76) = 0;
    t76 = (t75 + 4U);
    *((int *)t76) = 255;
    t76 = (t75 + 8U);
    *((int *)t76) = 1;
    t77 = (255 - 0);
    t78 = (t77 * 1);
    t78 = (t78 + 1);
    t76 = (t75 + 12U);
    *((unsigned int *)t76) = t78;
    t76 = (t74 + 16U);
    t79 = (t76 + 0U);
    *((int *)t79) = 31;
    t79 = (t76 + 4U);
    *((int *)t79) = 0;
    t79 = (t76 + 8U);
    *((int *)t79) = -1;
    t80 = (0 - 31);
    t78 = (t80 * -1);
    t78 = (t78 + 1);
    t79 = (t76 + 12U);
    *((unsigned int *)t79) = t78;
    t79 = (t4 + 700U);
    t81 = (t1 + 4032);
    t82 = (t79 + 88U);
    *((char **)t82) = t81;
    t84 = (t79 + 56U);
    *((char **)t84) = t83;
    memcpy(t83, t68, 8192U);
    t85 = (t79 + 64U);
    t86 = (t81 + 72U);
    t87 = *((char **)t86);
    *((char **)t85) = t87;
    t88 = (t79 + 80U);
    *((unsigned int *)t88) = 8192U;
    t89 = (t4 + 820U);
    t90 = ((STD_TEXTIO) + 3248);
    t91 = (t89 + 56U);
    *((char **)t91) = t90;
    t92 = (t89 + 40U);
    *((char **)t92) = 0;
    t93 = (t89 + 64U);
    *((int *)t93) = 1;
    t94 = (t89 + 48U);
    *((char **)t94) = 0;
    t95 = (t5 + 4U);
    t96 = (t2 != 0);
    if (t96 == 1)
        goto LAB8;

LAB7:    t97 = (t5 + 12U);
    *((char **)t97) = t3;
    t98 = (t3 + 12U);
    t78 = *((unsigned int *)t98);
    t78 = (t78 * 1U);
    t99 = (char *)alloca(t78);
    memcpy(t99, t2, t78);
    std_textio_write7(STD_TEXTIO, (char *)0, t89, t99, t3, (unsigned char)0, 0);
    t6 = (t9 + 56U);
    t7 = *((char **)t6);
    t6 = (t4 + 4U);
    t8 = *((char **)t6);
    t10 = xsi_access_variable_all(t89);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t11 = (t4 + 820U);
    t14 = xsi_access_variable_all(t11);
    t20 = (t14 + 64U);
    t20 = *((char **)t20);
    t72 = std_textio_file_open2(t8, t13, t20, (unsigned char)0);
    *((unsigned char *)t7) = t72;
    t6 = (t9 + 56U);
    t7 = *((char **)t6);
    t72 = *((unsigned char *)t7);
    t96 = (t72 != (unsigned char)0);
    if (t96 != 0)
        goto LAB9;

LAB11:    t6 = (t1 + 14795);
    t10 = ((STD_STANDARD) + 984);
    t11 = (t101 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 1;
    t13 = (t11 + 4U);
    *((int *)t13) = 25;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t15 = (25 - 1);
    t17 = (t15 * 1);
    t17 = (t17 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t17;
    t8 = xsi_base_array_concat(t8, t100, t10, (char)97, t6, t101, (char)97, t2, t3, (char)101);
    t13 = (t1 + 14820);
    t24 = ((STD_STANDARD) + 984);
    t25 = (t103 + 0U);
    t27 = (t25 + 0U);
    *((int *)t27) = 1;
    t27 = (t25 + 4U);
    *((int *)t27) = 1;
    t27 = (t25 + 8U);
    *((int *)t27) = 1;
    t16 = (1 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t27 = (t25 + 12U);
    *((unsigned int *)t27) = t17;
    t20 = xsi_base_array_concat(t20, t102, t24, (char)97, t8, t100, (char)97, t13, t103, (char)101);
    t27 = (t3 + 12U);
    t17 = *((unsigned int *)t27);
    t17 = (t17 * 1U);
    t23 = (25U + t17);
    t64 = (t23 + 1U);
    xsi_report(t20, t64, (unsigned char)0);

LAB10:    t15 = 0;
    t16 = 255;

LAB12:    if (t15 <= t16)
        goto LAB13;

LAB15:    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    std_textio_file_close(t7);
    t6 = (t79 + 56U);
    t7 = *((char **)t6);
    t72 = (8192U != 8192U);
    if (t72 == 1)
        goto LAB21;

LAB22:    t0 = xsi_get_transient_memory(8192U);
    memcpy(t0, t7, 8192U);

LAB1:    xsi_access_variable_delete(t89);
    t6 = (t50 + 80);
    t15 = *((int *)t6);
    t7 = (t50 + 128U);
    t8 = *((char **)t7);
    xsi_put_memory(t15, t8);
    xsi_access_variable_delete(t36);
    t10 = (t4 + 4U);
    t11 = *((char **)t10);
    xsi_delete_file_variable(t11);
    return t0;
LAB2:    t64 = 2147483647;
    goto LAB4;

LAB5:    t73 = (8192U / t70);
    xsi_mem_set_data(t69, t69, t70, t73);
    goto LAB6;

LAB8:    *((char **)t95) = t2;
    goto LAB7;

LAB9:    t6 = (t1 + 14768);
    t11 = ((STD_STANDARD) + 984);
    t13 = (t101 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 1;
    t14 = (t13 + 4U);
    *((int *)t14) = 26;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (26 - 1);
    t17 = (t15 * 1);
    t17 = (t17 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t17;
    t10 = xsi_base_array_concat(t10, t100, t11, (char)97, t6, t101, (char)97, t2, t3, (char)101);
    t14 = (t1 + 14794);
    t25 = ((STD_STANDARD) + 984);
    t27 = (t103 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 1;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t16 = (1 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t17;
    t24 = xsi_base_array_concat(t24, t102, t25, (char)97, t10, t100, (char)97, t14, t103, (char)101);
    t28 = (t3 + 12U);
    t17 = *((unsigned int *)t28);
    t17 = (t17 * 1U);
    t23 = (26U + t17);
    t64 = (t23 + 1U);
    xsi_report(t24, t64, (unsigned char)2);
    goto LAB10;

LAB13:    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    t72 = std_textio_endfile(t7);
    if (t72 != 0)
        goto LAB15;

LAB16:    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    std_textio_readline(STD_TEXTIO, (char *)0, t7, t36);
    t6 = (t21 + 56U);
    t7 = *((char **)t6);
    t6 = (t30 + 56U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    ieee_p_3564397177_sub_3261611579494183203_91900896(IEEE_P_3564397177, (char *)0, t36, t7, t18, t6);
    t6 = (t30 + 56U);
    t7 = *((char **)t6);
    t72 = *((unsigned char *)t7);
    t96 = (!(t72));
    if (t96 != 0)
        goto LAB17;

LAB19:
LAB18:    t6 = (t21 + 56U);
    t7 = *((char **)t6);
    t6 = (t79 + 56U);
    t8 = *((char **)t6);
    t19 = (t15 - 0);
    t17 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t15);
    t22 = (32 - 1);
    t51 = (0 - t22);
    t23 = (t51 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t64 = (t23 * t17);
    t65 = (0 + t64);
    t6 = (t8 + t65);
    t10 = (t18 + 12U);
    t66 = *((unsigned int *)t10);
    t66 = (t66 * 1U);
    memcpy(t6, t7, t66);

LAB14:    if (t15 == t16)
        goto LAB15;

LAB20:    t19 = (t15 + 1);
    t15 = t19;
    goto LAB12;

LAB17:    t6 = (t1 + 14821);
    t10 = ((STD_STANDARD) + 384);
    t11 = xsi_int_to_mem(t15);
    t13 = xsi_string_variable_get_image(t100, t10, t11);
    t20 = ((STD_STANDARD) + 984);
    t24 = (t102 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 1;
    t25 = (t24 + 4U);
    *((int *)t25) = 35;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t19 = (35 - 1);
    t17 = (t19 * 1);
    t17 = (t17 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t17;
    t14 = xsi_base_array_concat(t14, t101, t20, (char)97, t6, t102, (char)97, t13, t100, (char)101);
    t25 = (t100 + 12U);
    t17 = *((unsigned int *)t25);
    t23 = (35U + t17);
    xsi_report(t14, t23, (unsigned char)2);
    goto LAB18;

LAB21:    xsi_size_not_matching(8192U, 8192U, 0);
    goto LAB22;

LAB23:;
}

static void work_a_1330581807_1516540902_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(94, ng5);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3480);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(95, ng5);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(96, ng5);
    t3 = (t0 + 2048U);
    t7 = *((char **)t3);
    t3 = (t0 + 1352U);
    t8 = *((char **)t3);
    t3 = (t0 + 6472U);
    t9 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t8, t3);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t9);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t14 = (t7 + t13);
    t15 = (t0 + 3560);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t14, 32U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB6;

}


extern void work_a_1330581807_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1330581807_1516540902_p_0};
	static char *se[] = {(void *)work_a_1330581807_1516540902_sub_417864347629189775_2134189630};
	xsi_register_didat("work_a_1330581807_1516540902", "isim/cpuTestbench_isim_beh.exe.sim/work/a_1330581807_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
