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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_3564397177;
char *WORK_P_2061880176;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *STD_TEXTIO;
char *IEEE_P_1242562249;
char *WORK_P_1650933706;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_p_2061880176_init();
    std_textio_init();
    ieee_p_3564397177_init();
    work_p_1650933706_init();
    work_a_1330581807_1516540902_init();
    work_a_2351413600_2314527202_init();
    work_a_0660606562_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_1494959872_1516540902_init();
    work_a_3222946569_3212880686_init();
    work_a_0773670415_3212880686_init();
    work_a_1812546057_2372691052_init();


    xsi_register_tops("work_a_1812546057_2372691052");

    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    WORK_P_2061880176 = xsi_get_engine_memory("work_p_2061880176");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    WORK_P_1650933706 = xsi_get_engine_memory("work_p_1650933706");

    return xsi_run_simulation(argc, argv);

}
