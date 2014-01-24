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
static const char *ng0 = "/home/pravinkumar/Documents/Workspace/Xilinx/AsynARM/fetch_test.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};



static void Initial_55_0(char *t0)
{
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;
    int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3856);
    t3 = (t0 + 3608);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 4104);
    t5 = (t0 + 3608);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 4352);
    t7 = (t0 + 3608);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 4600);
    t9 = (t0 + 3608);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 2888);
    memset(t11, 0, 8);
    *((unsigned int *)t11) = 4;
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 32);
    t12 = (t0 + 5112);
    *((int *)t12) = 1;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    t13 = (t0 + 2888);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    if (*((int *)t15) > 0)
        goto LAB6;

LAB7:    t17 = (t0 + 3608);
    xsi_clean_active_fork_process_list(t17);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    t8 = (t7 + 64U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t11, t18, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t11 + 4);
    t19 = *((unsigned int *)t12);
    t20 = (!(t19));
    t13 = (t18 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (!(t21));
    t23 = (t20 && t22);
    if (t23 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    t8 = (t7 + 64U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t11, t18, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t11 + 4);
    t19 = *((unsigned int *)t12);
    t20 = (!(t19));
    t13 = (t18 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (!(t21));
    t23 = (t20 && t22);
    if (t23 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    t8 = (t7 + 64U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t11, t18, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t11 + 4);
    t19 = *((unsigned int *)t12);
    t20 = (!(t19));
    t13 = (t18 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (!(t21));
    t23 = (t20 && t22);
    if (t23 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    t8 = (t7 + 64U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t11, t18, t6, t9, 2, 1, t10, 32, 1);
    t12 = (t11 + 4);
    t19 = *((unsigned int *)t12);
    t20 = (!(t19));
    t13 = (t18 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (!(t21));
    t23 = (t20 && t22);
    if (t23 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB6:    t16 = (t0 + 5112);
    *((int *)t16) = 1;
    goto LAB1;

LAB8:    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t18);
    t26 = (t24 - t25);
    t27 = (t26 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t18), t27);
    goto LAB9;

LAB10:    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t18);
    t26 = (t24 - t25);
    t27 = (t26 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t18), t27);
    goto LAB11;

LAB12:    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t18);
    t26 = (t24 - t25);
    t27 = (t26 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t18), t27);
    goto LAB13;

LAB14:    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t18);
    t26 = (t24 - t25);
    t27 = (t26 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t18), t27);
    goto LAB15;

LAB16:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t19 = *((unsigned int *)t5);
    t21 = (~(t19));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t21);
    t28 = (t25 & 1U);
    if (t28 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t5) == 0)
        goto LAB17;

LAB19:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB20:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    *((unsigned int *)t11) = t30;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB22;

LAB21:    t35 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t35 & 1U);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & 1U);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB22:    t31 = *((unsigned int *)t11);
    t32 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t31 | t32);
    t33 = *((unsigned int *)t7);
    t34 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t33 | t34);
    goto LAB21;

LAB23:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t12 = *((char **)t10);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t11, 8, t5, t8, t12, 2, 1, t14, 32, 2);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 8);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5128);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t12 = *((char **)t10);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t11, 8, t5, t8, t12, 2, 1, t14, 32, 2);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 8);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5144);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t12 = *((char **)t10);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t11, 8, t5, t8, t12, 2, 1, t14, 32, 2);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5160);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t12 = *((char **)t10);
    t13 = (t0 + 1688U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t11, 8, t5, t8, t12, 2, 1, t14, 32, 2);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 8);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5176);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(97, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Forked_58_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3856);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_59_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4104);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_60_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4352);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_61_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 4792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4600);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}


extern void work_m_15775752703919839109_3904150842_init()
{
	static char *pe[] = {(void *)Initial_55_0,(void *)Forked_58_1,(void *)Forked_59_2,(void *)Forked_60_3,(void *)Forked_61_4};
	xsi_register_didat("work_m_15775752703919839109_3904150842", "isim/fetch_test_isim_beh.exe.sim/work/m_15775752703919839109_3904150842.didat");
	xsi_register_executes(pe);
}
