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
static const char *ng0 = "/home/pravinkumar/Documents/Workspace/Xilinx/AsynARM/rom.v";
static const char *ng1 = "test.bin";
static int ng2[] = {0, 0};
static int ng3[] = {12, 0};
static const char *ng4 = "%h";
static int ng5[] = {1, 0};



static void Initial_34_0(char *t0)
{
    char t5[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1928);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB6:    xsi_set_current_line(39, ng0);
    t12 = (t0 + 1928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 1928);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 1928);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t15, 8, t14, t18, t21, 2, 1, t24, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t15, 8);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

}

static void Initial_43_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3056);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);

LAB6:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3568);
    *((int *)t2) = 1;
    t3 = (t0 + 3280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(46, ng0);

LAB8:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1928);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t11, 2, 1, t13, 32, 2);
    t12 = (t0 + 1608);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3056);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB6;

LAB10:    goto LAB1;

}


extern void work_m_03503505436707181035_2220189930_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Initial_43_1};
	xsi_register_didat("work_m_03503505436707181035_2220189930", "isim/rom_test_isim_beh.exe.sim/work/m_03503505436707181035_2220189930.didat");
	xsi_register_executes(pe);
}
