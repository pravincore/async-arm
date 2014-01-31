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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/pravinkumar/Documents/GitHub/async-arm/AsynARM/fetch.v";
static int ng1[] = {4, 0};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {7, 0};
static int ng5[] = {15, 0};
static int ng6[] = {8, 0};
static int ng7[] = {23, 0};
static int ng8[] = {16, 0};
static int ng9[] = {31, 0};
static int ng10[] = {24, 0};



static void Initial_37_0(char *t0)
{
    char t15[8];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5072);
    t3 = (t0 + 4576);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 5320);
    t5 = (t0 + 4576);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 5568);
    t7 = (t0 + 4576);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 5816);
    t9 = (t0 + 4576);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 6064);
    t11 = (t0 + 4576);
    xsi_add_process_toexecute(0, t10, t11);
    t12 = (t0 + 6312);
    t13 = (t0 + 4576);
    xsi_add_process_toexecute(0, t12, t13);
    t14 = (t0 + 3208);
    memset(t15, 0, 8);
    *((unsigned int *)t15) = 6;
    xsi_vlogvar_assign_value(t14, t15, 0, 0, 32);
    t16 = (t0 + 8560);
    *((int *)t16) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t17 = (t0 + 3208);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    if (*((int *)t19) > 0)
        goto LAB5;

LAB6:    t21 = (t0 + 4576);
    xsi_clean_active_fork_process_list(t21);
    goto LAB1;

LAB5:    t20 = (t0 + 8560);
    *((int *)t20) = 1;
    goto LAB1;

}

static void Initial_46_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4824);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);

LAB6:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 8576);
    *((int *)t2) = 1;
    t3 = (t0 + 5048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(49, ng0);

LAB8:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4824);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t7) == 0)
        goto LAB10;

LAB12:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB13:    t14 = (t6 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB15;

LAB14:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2248);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 1);
    xsi_set_current_line(56, ng0);

LAB16:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB17:    t4 = (t0 + 8592);
    *((int *)t4) = 1;
    t5 = (t0 + 5016U);
    *((char **)t5) = &&LAB16;
    goto LAB1;

LAB10:    *((unsigned int *)t6) = 1;
    goto LAB13;

LAB15:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB14;

LAB18:    t7 = (t0 + 8592);
    *((int *)t7) = 0;
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6560);
    t3 = (t0 + 4824);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 6808);
    t5 = (t0 + 4824);
    xsi_add_process_toexecute(0, t4, t5);
    t7 = (t0 + 3368);
    memset(t6, 0, 8);
    *((unsigned int *)t6) = 2;
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t13 = (t0 + 8608);
    *((int *)t13) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    t14 = (t0 + 3368);
    t15 = (t14 + 56U);
    t24 = *((char **)t15);
    if (*((int *)t24) > 0)
        goto LAB20;

LAB21:    t26 = (t0 + 4824);
    xsi_clean_active_fork_process_list(t26);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4824);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB20:    t25 = (t0 + 8608);
    *((int *)t25) = 1;
    goto LAB1;

LAB22:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t7) == 0)
        goto LAB23;

LAB25:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB26:    t14 = (t6 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB28;

LAB27:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2248);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 1);
    xsi_set_current_line(65, ng0);

LAB29:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB31;

LAB30:    t4 = (t0 + 8624);
    *((int *)t4) = 1;
    t5 = (t0 + 5016U);
    *((char **)t5) = &&LAB29;
    goto LAB1;

LAB23:    *((unsigned int *)t6) = 1;
    goto LAB26;

LAB28:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB27;

LAB31:    t7 = (t0 + 8624);
    *((int *)t7) = 0;
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 7056);
    t3 = (t0 + 4824);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 7304);
    t5 = (t0 + 4824);
    xsi_add_process_toexecute(0, t4, t5);
    t7 = (t0 + 3528);
    memset(t6, 0, 8);
    *((unsigned int *)t6) = 2;
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t13 = (t0 + 8640);
    *((int *)t13) = 1;
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    t14 = (t0 + 3528);
    t15 = (t14 + 56U);
    t24 = *((char **)t15);
    if (*((int *)t24) > 0)
        goto LAB33;

LAB34:    t26 = (t0 + 4824);
    xsi_clean_active_fork_process_list(t26);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4824);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB33:    t25 = (t0 + 8640);
    *((int *)t25) = 1;
    goto LAB1;

LAB35:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t7) == 0)
        goto LAB36;

LAB38:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB39:    t14 = (t6 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB41;

LAB40:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2248);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 1);
    xsi_set_current_line(74, ng0);

LAB42:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB44;

LAB43:    t4 = (t0 + 8656);
    *((int *)t4) = 1;
    t5 = (t0 + 5016U);
    *((char **)t5) = &&LAB42;
    goto LAB1;

LAB36:    *((unsigned int *)t6) = 1;
    goto LAB39;

LAB41:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB40;

LAB44:    t7 = (t0 + 8656);
    *((int *)t7) = 0;
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 7552);
    t3 = (t0 + 4824);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 7800);
    t5 = (t0 + 4824);
    xsi_add_process_toexecute(0, t4, t5);
    t7 = (t0 + 3688);
    memset(t6, 0, 8);
    *((unsigned int *)t6) = 2;
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t13 = (t0 + 8672);
    *((int *)t13) = 1;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    t14 = (t0 + 3688);
    t15 = (t14 + 56U);
    t24 = *((char **)t15);
    if (*((int *)t24) > 0)
        goto LAB46;

LAB47:    t26 = (t0 + 4824);
    xsi_clean_active_fork_process_list(t26);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4824);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB46:    t25 = (t0 + 8672);
    *((int *)t25) = 1;
    goto LAB1;

LAB48:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t7) == 0)
        goto LAB49;

LAB51:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB52:    t14 = (t6 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB54;

LAB53:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2248);
    xsi_vlogvar_assign_value(t24, t6, 0, 0, 1);
    xsi_set_current_line(83, ng0);

LAB55:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB57;

LAB56:    t4 = (t0 + 8688);
    *((int *)t4) = 1;
    t5 = (t0 + 5016U);
    *((char **)t5) = &&LAB55;
    goto LAB1;

LAB49:    *((unsigned int *)t6) = 1;
    goto LAB52;

LAB54:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB53;

LAB57:    t7 = (t0 + 8688);
    *((int *)t7) = 0;
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8048);
    t3 = (t0 + 4824);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 3848);
    memset(t6, 0, 8);
    *((unsigned int *)t6) = 1;
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);
    t5 = (t0 + 8704);
    *((int *)t5) = 1;
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    t7 = (t0 + 3848);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    if (*((int *)t14) > 0)
        goto LAB59;

LAB60:    t24 = (t0 + 4824);
    xsi_clean_active_fork_process_list(t24);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB6;

LAB59:    t15 = (t0 + 8704);
    *((int *)t15) = 1;
    goto LAB1;

LAB61:    goto LAB1;

}

static void Forked_38_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5072);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_39_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5320);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_40_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5568);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB5:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_41_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 6008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5816);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_42_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 6256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6064);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_43_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 6504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6312);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB5:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t6 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t6 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

}

static void Forked_58_8(char *t0)
{
    char t5[8];
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;

LAB0:    t1 = (t0 + 6752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6560);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    t12 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t5, t6, t7, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t6 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    t20 = (t7 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB6;

LAB7:
LAB5:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

LAB6:    t24 = *((unsigned int *)t7);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t6);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t3, t4, t25, *((unsigned int *)t6), t29);
    goto LAB7;

}

static void Forked_60_9(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;

LAB0:    t1 = (t0 + 7000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6808);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 32, t6, 32);
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);

LAB5:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t7, t4, 8);
    t9 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);
    goto LAB2;

}

static void Forked_67_10(char *t0)
{
    char t5[8];
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;

LAB0:    t1 = (t0 + 7248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7056);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    t12 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t5, t6, t7, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t6 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    t20 = (t7 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB6;

LAB7:
LAB5:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

LAB6:    t24 = *((unsigned int *)t7);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t6);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t3, t4, t25, *((unsigned int *)t6), t29);
    goto LAB7;

}

static void Forked_69_11(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;

LAB0:    t1 = (t0 + 7496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7304);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 32, t6, 32);
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);

LAB5:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t7, t4, 8);
    t9 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);
    goto LAB2;

}

static void Forked_76_12(char *t0)
{
    char t5[8];
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;

LAB0:    t1 = (t0 + 7744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7552);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    t12 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t5, t6, t7, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t6 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    t20 = (t7 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB6;

LAB7:
LAB5:    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

LAB6:    t24 = *((unsigned int *)t7);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t6);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t3, t4, t25, *((unsigned int *)t6), t29);
    goto LAB7;

}

static void Forked_78_13(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;

LAB0:    t1 = (t0 + 7992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7800);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 32, t6, 32);
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);

LAB5:    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t7, t4, 8);
    t9 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);
    goto LAB2;

}

static void Forked_85_14(char *t0)
{
    char t5[8];
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;

LAB0:    t1 = (t0 + 8240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8048);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    t12 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t5, t6, t7, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t6 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    t20 = (t7 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB6;

LAB7:
LAB5:    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t5, t4, 8);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 - 1);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB2;

LAB6:    t24 = *((unsigned int *)t7);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t6);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t3, t4, t25, *((unsigned int *)t6), t29);
    goto LAB7;

}


extern void work_m_00000000002822546929_2351635246_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Initial_46_1,(void *)Forked_38_2,(void *)Forked_39_3,(void *)Forked_40_4,(void *)Forked_41_5,(void *)Forked_42_6,(void *)Forked_43_7,(void *)Forked_58_8,(void *)Forked_60_9,(void *)Forked_67_10,(void *)Forked_69_11,(void *)Forked_76_12,(void *)Forked_78_13,(void *)Forked_85_14};
	xsi_register_didat("work_m_00000000002822546929_2351635246", "isim/cpu_test_isim_beh.exe.sim/work/m_00000000002822546929_2351635246.didat");
	xsi_register_executes(pe);
}
