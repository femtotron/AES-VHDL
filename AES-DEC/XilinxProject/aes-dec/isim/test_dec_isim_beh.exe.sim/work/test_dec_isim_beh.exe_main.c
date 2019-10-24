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

char *IEEE_P_2592010699;
char *IEEE_P_1242562249;
char *STD_STANDARD;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_a_2637877683_3212880686_init();
    work_a_2759626955_1516540902_init();
    work_a_2651726863_3212880686_init();
    work_a_2901959303_1516540902_init();
    work_a_1078913202_1516540902_init();
    work_a_1555705859_1516540902_init();
    work_a_0442548186_1516540902_init();
    work_a_1405650656_3212880686_init();
    work_a_0398179713_3212880686_init();
    work_a_3351589255_3212880686_init();
    work_a_4067371435_3212880686_init();
    work_a_3643414621_3212880686_init();
    work_a_1208337864_3212880686_init();
    work_a_2935734465_1516540902_init();
    work_a_3004435957_2372691052_init();


    xsi_register_tops("work_a_3004435957_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_STANDARD = xsi_get_engine_memory("std_standard");

    return xsi_run_simulation(argc, argv);

}