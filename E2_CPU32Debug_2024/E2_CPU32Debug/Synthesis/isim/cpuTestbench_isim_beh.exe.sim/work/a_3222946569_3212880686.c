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
static const char *ng0 = "/mnt/c/Users/aligo/Desktop/Developer/EEE40013-Project-2/E2_CPU32Debug_2024/E2_CPU32Debug/Source/Control.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_2061880176;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
char *work_p_2061880176_sub_16329847616903838115_975205998(char *, char *, char *, unsigned int , unsigned int );
char *work_p_2061880176_sub_16579511003128634659_975205998(char *, char *, char *, unsigned int , unsigned int );
char *work_p_2061880176_sub_3216562430884798585_975205998(char *, char *, char *, unsigned int , unsigned int );


static void work_a_3222946569_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5592);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5688);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3752U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 5688);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

unsigned char work_a_3222946569_3212880686_sub_8968133058474402515_1839023436(char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, unsigned int t6, unsigned int t7, char *t8, unsigned int t9, unsigned int t10, char *t11, unsigned int t12, unsigned int t13, char *t14, unsigned int t15, unsigned int t16)
{
    char t17[248];
    char t19[16];
    char t26[8];
    char t29[16];
    char t35[8];
    char t39[16];
    unsigned char t0;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    unsigned char t53;
    unsigned char t54;
    unsigned char t55;
    unsigned char t56;
    unsigned char t57;

LAB0:    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 31;
    t21 = (t20 + 4U);
    *((int *)t21) = 0;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t22 = (0 - 31);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t17 + 4U);
    t24 = ((IEEE_P_2592010699) + 3312);
    t25 = (t21 + 88U);
    *((char **)t25) = t24;
    t27 = (t21 + 56U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t21 + 80U);
    *((unsigned int *)t28) = 1U;
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 3;
    t31 = (t30 + 4U);
    *((int *)t31) = 0;
    t31 = (t30 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - 3);
    t23 = (t32 * -1);
    t23 = (t23 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t23;
    t31 = (t17 + 124U);
    t33 = ((IEEE_P_2592010699) + 4000);
    t34 = (t31 + 88U);
    *((char **)t34) = t33;
    t36 = (t31 + 56U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, t29);
    t37 = (t31 + 64U);
    *((char **)t37) = t29;
    t38 = (t31 + 80U);
    *((unsigned int *)t38) = 4U;
    t23 = (0U + t15);
    t40 = (0U + t16);
    t41 = work_p_2061880176_sub_3216562430884798585_975205998(WORK_P_2061880176, t39, t14, t23, t40);
    t42 = (t31 + 56U);
    t43 = *((char **)t42);
    t42 = (t43 + 0);
    t44 = (t39 + 12U);
    t45 = *((unsigned int *)t44);
    t45 = (t45 * 1U);
    memcpy(t42, t41, t45);
    t20 = (t31 + 56U);
    t24 = *((char **)t20);
    t20 = (t29 + 0U);
    t22 = *((int *)t20);
    t23 = (t22 - 3);
    t40 = (t23 * 1U);
    t45 = (0 + t40);
    t25 = (t24 + t45);
    t27 = ((WORK_P_2061880176) + 2368U);
    t28 = *((char **)t27);
    t32 = xsi_mem_cmp(t28, t25, 3U);
    if (t32 == 1)
        goto LAB3;

LAB12:    t27 = ((WORK_P_2061880176) + 2488U);
    t30 = *((char **)t27);
    t46 = xsi_mem_cmp(t30, t25, 3U);
    if (t46 == 1)
        goto LAB4;

LAB13:    t27 = ((WORK_P_2061880176) + 2608U);
    t33 = *((char **)t27);
    t47 = xsi_mem_cmp(t33, t25, 3U);
    if (t47 == 1)
        goto LAB5;

LAB14:    t27 = ((WORK_P_2061880176) + 2728U);
    t34 = *((char **)t27);
    t48 = xsi_mem_cmp(t34, t25, 3U);
    if (t48 == 1)
        goto LAB6;

LAB15:    t27 = ((WORK_P_2061880176) + 2848U);
    t36 = *((char **)t27);
    t49 = xsi_mem_cmp(t36, t25, 3U);
    if (t49 == 1)
        goto LAB7;

LAB16:    t27 = ((WORK_P_2061880176) + 2968U);
    t37 = *((char **)t27);
    t50 = xsi_mem_cmp(t37, t25, 3U);
    if (t50 == 1)
        goto LAB8;

LAB17:    t27 = ((WORK_P_2061880176) + 3088U);
    t38 = *((char **)t27);
    t51 = xsi_mem_cmp(t38, t25, 3U);
    if (t51 == 1)
        goto LAB9;

LAB18:    t27 = ((WORK_P_2061880176) + 3208U);
    t41 = *((char **)t27);
    t52 = xsi_mem_cmp(t41, t25, 3U);
    if (t52 == 1)
        goto LAB10;

LAB19:
LAB11:    t20 = (t21 + 56U);
    t24 = *((char **)t20);
    t20 = (t24 + 0);
    *((unsigned char *)t20) = (unsigned char)1;

LAB2:    t20 = (t31 + 56U);
    t24 = *((char **)t20);
    t20 = (t29 + 0U);
    t22 = *((int *)t20);
    t25 = (t29 + 8U);
    t32 = *((int *)t25);
    t46 = (0 - t22);
    t23 = (t46 * t32);
    t40 = (1U * t23);
    t45 = (0 + t40);
    t27 = (t24 + t45);
    t53 = *((unsigned char *)t27);
    t28 = (t21 + 56U);
    t30 = *((char **)t28);
    t54 = *((unsigned char *)t30);
    t55 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t53, t54);
    t56 = (t55 == (unsigned char)3);
    t0 = t56;

LAB1:    return t0;
LAB3:    t27 = (t21 + 56U);
    t42 = *((char **)t27);
    t27 = (t42 + 0);
    *((unsigned char *)t27) = (unsigned char)3;
    goto LAB2;

LAB4:    t20 = (t11 + 40U);
    t24 = *((char **)t20);
    t20 = (t24 + t13);
    t53 = *((unsigned char *)t20);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    *((unsigned char *)t24) = t53;
    goto LAB2;

LAB5:    t20 = (t2 + 40U);
    t24 = *((char **)t20);
    t20 = (t24 + t4);
    t53 = *((unsigned char *)t20);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    *((unsigned char *)t24) = t53;
    goto LAB2;

LAB6:    t20 = (t8 + 40U);
    t24 = *((char **)t20);
    t20 = (t24 + t10);
    t53 = *((unsigned char *)t20);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    *((unsigned char *)t24) = t53;
    goto LAB2;

LAB7:    t20 = (t5 + 40U);
    t24 = *((char **)t20);
    t20 = (t24 + t7);
    t53 = *((unsigned char *)t20);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    *((unsigned char *)t24) = t53;
    goto LAB2;

LAB8:    t20 = (t5 + 40U);
    t24 = *((char **)t20);
    t20 = (t24 + t7);
    t53 = *((unsigned char *)t20);
    t24 = (t8 + 40U);
    t25 = *((char **)t24);
    t24 = (t25 + t10);
    t54 = *((unsigned char *)t24);
    t55 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t53, t54);
    t25 = (t21 + 56U);
    t27 = *((char **)t25);
    t25 = (t27 + 0);
    *((unsigned char *)t25) = t55;
    goto LAB2;

LAB9:    t20 = (t2 + 40U);
    t24 = *((char **)t20);
    t20 = (t24 + t4);
    t53 = *((unsigned char *)t20);
    t24 = (t5 + 40U);
    t25 = *((char **)t24);
    t24 = (t25 + t7);
    t54 = *((unsigned char *)t24);
    t25 = (t8 + 40U);
    t27 = *((char **)t25);
    t25 = (t27 + t10);
    t55 = *((unsigned char *)t25);
    t56 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t54, t55);
    t57 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t53, t56);
    t27 = (t21 + 56U);
    t28 = *((char **)t27);
    t27 = (t28 + 0);
    *((unsigned char *)t27) = t57;
    goto LAB2;

LAB10:    t20 = (t11 + 40U);
    t24 = *((char **)t20);
    t20 = (t24 + t13);
    t53 = *((unsigned char *)t20);
    t24 = (t2 + 40U);
    t25 = *((char **)t24);
    t24 = (t25 + t4);
    t54 = *((unsigned char *)t24);
    t55 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t53, t54);
    t25 = (t21 + 56U);
    t27 = *((char **)t25);
    t25 = (t27 + 0);
    *((unsigned char *)t25) = t55;
    goto LAB2;

LAB20:;
LAB21:;
}

static void work_a_3222946569_3212880686_p_1(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned char t26;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB7, &&LAB6};

LAB0:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 5752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 5816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 5880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 5944);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 6008);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 6072);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 1312U);
    t2 = work_p_2061880176_sub_16329847616903838115_975205998(WORK_P_2061880176, t6, t1, 0U, 0U);
    t3 = (t0 + 4048U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    t5 = (t6 + 12U);
    t7 = *((unsigned int *)t5);
    t7 = (t7 * 1U);
    memcpy(t3, t2, t7);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 6200);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 6264);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t8);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5608);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 6136);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 5816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 5752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 10660);
    t11 = xsi_mem_cmp(t1, t2, 3U);
    if (t11 == 1)
        goto LAB9;

LAB15:    t4 = (t0 + 10663);
    t12 = xsi_mem_cmp(t4, t2, 3U);
    if (t12 == 1)
        goto LAB10;

LAB16:    t9 = (t0 + 10666);
    t13 = xsi_mem_cmp(t9, t2, 3U);
    if (t13 == 1)
        goto LAB11;

LAB17:    t14 = (t0 + 10669);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB12;

LAB18:    t17 = (t0 + 10672);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB13;

LAB19:
LAB14:    xsi_set_current_line(195, ng0);

LAB8:    goto LAB2;

LAB5:    xsi_set_current_line(199, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 10683);
    t11 = xsi_mem_cmp(t1, t2, 3U);
    if (t11 == 1)
        goto LAB42;

LAB46:    t4 = (t0 + 10686);
    t12 = xsi_mem_cmp(t4, t2, 3U);
    if (t12 == 1)
        goto LAB42;

LAB47:    t9 = (t0 + 10689);
    t13 = xsi_mem_cmp(t9, t2, 3U);
    if (t13 == 1)
        goto LAB43;

LAB48:    t14 = (t0 + 10692);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB44;

LAB49:
LAB45:    xsi_set_current_line(219, ng0);

LAB41:    goto LAB2;

LAB6:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 6072);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(224, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(227, ng0);
    t1 = (t0 + 6008);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(228, ng0);
    t1 = (t0 + 5944);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(229, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(232, ng0);
    goto LAB2;

LAB9:    xsi_set_current_line(166, ng0);
    t20 = (t0 + 6136);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(167, ng0);
    t1 = (t0 + 6264);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 6264);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB12:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB13:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 1312U);
    t2 = work_p_2061880176_sub_3216562430884798585_975205998(WORK_P_2061880176, t6, t1, 0U, 0U);
    t3 = (t6 + 12U);
    t7 = *((unsigned int *)t3);
    t7 = (t7 * 1U);
    t4 = (t0 + 10675);
    t8 = 1;
    if (t7 == 4U)
        goto LAB24;

LAB25:    t8 = 0;

LAB26:    if (t8 != 0)
        goto LAB21;

LAB23:    t1 = (t0 + 1312U);
    t2 = work_p_2061880176_sub_3216562430884798585_975205998(WORK_P_2061880176, t6, t1, 0U, 0U);
    t3 = (t6 + 12U);
    t7 = *((unsigned int *)t3);
    t7 = (t7 * 1U);
    t4 = (t0 + 10679);
    t8 = 1;
    if (t7 == 4U)
        goto LAB32;

LAB33:    t8 = 0;

LAB34:    if (t8 != 0)
        goto LAB30;

LAB31:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 1472U);
    t2 = (t0 + 1632U);
    t3 = (t0 + 1792U);
    t4 = (t0 + 1952U);
    t5 = (t0 + 1312U);
    t8 = work_a_3222946569_3212880686_sub_8968133058474402515_1839023436(t0, t1, 0U, 0U, t2, 0U, 0U, t3, 0U, 0U, t4, 0U, 0U, t5, 0U, 0U);
    if (t8 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 5880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);

LAB39:
LAB22:    goto LAB8;

LAB20:;
LAB21:    xsi_set_current_line(179, ng0);
    t14 = (t0 + 5816);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(180, ng0);
    t1 = (t0 + 5880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB22;

LAB24:    t25 = 0;

LAB27:    if (t25 < t7)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t9 = (t2 + t25);
    t10 = (t4 + t25);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB25;

LAB29:    t25 = (t25 + 1);
    goto LAB27;

LAB30:    xsi_set_current_line(182, ng0);
    t14 = (t0 + 5816);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 5880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 6008);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 5944);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB22;

LAB32:    t25 = 0;

LAB35:    if (t25 < t7)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t9 = (t2 + t25);
    t10 = (t4 + t25);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB33;

LAB37:    t25 = (t25 + 1);
    goto LAB35;

LAB38:    xsi_set_current_line(188, ng0);
    t9 = (t0 + 5816);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 5880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB39;

LAB42:    xsi_set_current_line(201, ng0);
    t17 = (t0 + 3432U);
    t18 = *((char **)t17);
    t8 = *((unsigned char *)t18);
    t26 = (t8 == (unsigned char)3);
    if (t26 != 0)
        goto LAB51;

LAB53:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB52:    goto LAB41;

LAB43:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 1312U);
    t2 = work_p_2061880176_sub_16579511003128634659_975205998(WORK_P_2061880176, t6, t1, 0U, 0U);
    t3 = (t6 + 12U);
    t7 = *((unsigned int *)t3);
    t7 = (t7 * 1U);
    t4 = (t0 + 10695);
    t8 = 1;
    if (t7 == 5U)
        goto LAB57;

LAB58:    t8 = 0;

LAB59:    if ((!(t8)) != 0)
        goto LAB54;

LAB56:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 5880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 5816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(214, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB55:    goto LAB41;

LAB44:    xsi_set_current_line(217, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB41;

LAB50:;
LAB51:    xsi_set_current_line(202, ng0);
    t17 = (t0 + 5944);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 6136);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 6200);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB52;

LAB54:    xsi_set_current_line(210, ng0);
    t14 = (t0 + 6136);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t14);
    goto LAB55;

LAB57:    t25 = 0;

LAB60:    if (t25 < t7)
        goto LAB61;
    else
        goto LAB59;

LAB61:    t9 = (t2 + t25);
    t10 = (t4 + t25);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB58;

LAB62:    t25 = (t25 + 1);
    goto LAB60;

}


extern void work_a_3222946569_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3222946569_3212880686_p_0,(void *)work_a_3222946569_3212880686_p_1};
	static char *se[] = {(void *)work_a_3222946569_3212880686_sub_8968133058474402515_1839023436};
	xsi_register_didat("work_a_3222946569_3212880686", "isim/cpuTestbench_isim_beh.exe.sim/work/a_3222946569_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
