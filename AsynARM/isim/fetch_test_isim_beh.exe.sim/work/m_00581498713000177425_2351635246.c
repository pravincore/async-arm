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
static const char *ng0 = "/home/pravinkumar/Documents/Workspace/Xilinx/AsynARM/fetch.v";
static int ng1[] = {4, 0};
static const char *ng2 = "%h";
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {7, 0};
static const char *ng6 = "";
static int ng7[] = {15, 0};
static int ng8[] = {8, 0};
static int ng9[] = {23, 0};
static int ng10[] = {16, 0};
static int ng11[] = {31, 0};
static int ng12[] = {24, 0};



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

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5064);
    t3 = (t0 + 4568);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 5312);
    t5 = (t0 + 4568);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 5560);
    t7 = (t0 + 4568);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 5808);
    t9 = (t0 + 4568);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 6056);
    t11 = (t0 + 4568);
    xsi_add_process_toexecute(0, t10, t11);
    t12 = (t0 + 6304);
    t13 = (t0 + 4568);
    xsi_add_process_toexecute(0, t12, t13);
    t14 = (t0 + 3208);
    memset(t15, 0, 8);
    *((unsigned int *)t15) = 6;
    xsi_vlogvar_assign_value(t14, t15, 0, 0, 32);
    t16 = (t0 + 9544);
    *((int *)t16) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t17 = (t0 + 3208);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    if (*((int *)t19) > 0)
        goto LAB5;

LAB6:    t21 = (t0 + 4568);
    xsi_clean_active_fork_process_list(t21);
    goto LAB1;

LAB5:    t20 = (t0 + 9544);
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
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4816);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);

LAB6:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 9560);
    *((int *)t2) = 1;
    t3 = (t0 + 5040);
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
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1928);
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
    t24 = (t0 + 1928);
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

LAB17:    t4 = (t0 + 9576);
    *((int *)t4) = 1;
    t5 = (t0 + 5008U);
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

LAB18:    t7 = (t0 + 9576);
    *((int *)t7) = 0;
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6552);
    t3 = (t0 + 4816);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 6800);
    t5 = (t0 + 4816);
    xsi_add_process_toexecute(0, t4, t5);
    t7 = (t0 + 7048);
    t13 = (t0 + 4816);
    xsi_add_process_toexecute(0, t7, t13);
    t14 = (t0 + 3368);
    memset(t6, 0, 8);
    *((unsigned int *)t6) = 3;
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);
    t15 = (t0 + 9592);
    *((int *)t15) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    t24 = (t0 + 3368);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    if (*((int *)t26) > 0)
        goto LAB20;

LAB21:    t28 = (t0 + 4816);
    xsi_clean_active_fork_process_list(t28);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB20:    t27 = (t0 + 9592);
    *((int *)t27) = 1;
    goto LAB1;

LAB22:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1928);
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
    t24 = (t0 + 1928);
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

LAB30:    t4 = (t0 + 9608);
    *((int *)t4) = 1;
    t5 = (t0 + 5008U);
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

LAB31:    t7 = (t0 + 9608);
    *((int *)t7) = 0;
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 7296);
    t3 = (t0 + 4816);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 7544);
    t5 = (t0 + 4816);
    xsi_add_process_toexecute(0, t4, t5);
    t7 = (t0 + 7792);
    t13 = (t0 + 4816);
    xsi_add_process_toexecute(0, t7, t13);
    t14 = (t0 + 3528);
    memset(t6, 0, 8);
    *((unsigned int *)t6) = 3;
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);
    t15 = (t0 + 9624);
    *((int *)t15) = 1;
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    t24 = (t0 + 3528);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    if (*((int *)t26) > 0)
        goto LAB33;

LAB34:    t28 = (t0 + 4816);
    xsi_clean_active_fork_process_list(t28);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB33:    t27 = (t0 + 9624);
    *((int *)t27) = 1;
    goto LAB1;

LAB35:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1928);
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
    t24 = (t0 + 1928);
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

LAB43:    t4 = (t0 + 9640);
    *((int *)t4) = 1;
    t5 = (t0 + 5008U);
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

LAB44:    t7 = (t0 + 9640);
    *((int *)t7) = 0;
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 8040);
    t3 = (t0 + 4816);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 8288);
    t5 = (t0 + 4816);
    xsi_add_process_toexecute(0, t4, t5);
    t7 = (t0 + 8536);
    t13 = (t0 + 4816);
    xsi_add_process_toexecute(0, t7, t13);
    t14 = (t0 + 3688);
    memset(t6, 0, 8);
    *((unsigned int *)t6) = 3;
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 32);
    t15 = (t0 + 9656);
    *((int *)t15) = 1;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    t24 = (t0 + 3688);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    if (*((int *)t26) > 0)
        goto LAB46;

LAB47:    t28 = (t0 + 4816);
    xsi_clean_active_fork_process_list(t28);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4816);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB46:    t27 = (t0 + 9656);
    *((int *)t27) = 1;
    goto LAB1;

LAB48:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1928);
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
    t24 = (t0 + 1928);
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

LAB56:    t4 = (t0 + 9672);
    *((int *)t4) = 1;
    t5 = (t0 + 5008U);
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

LAB57:    t7 = (t0 + 9672);
    *((int *)t7) = 0;
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8784);
    t3 = (t0 + 4816);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 9032);
    t5 = (t0 + 4816);
    xsi_add_process_toexecute(0, t4, t5);
    t7 = (t0 + 3848);
    memset(t6, 0, 8);
    *((unsigned int *)t6) = 2;
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t13 = (t0 + 9688);
    *((int *)t13) = 1;
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    t14 = (t0 + 3848);
    t15 = (t14 + 56U);
    t24 = *((char **)t15);
    if (*((int *)t24) > 0)
        goto LAB59;

LAB60:    t26 = (t0 + 4816);
    xsi_clean_active_fork_process_list(t26);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t0, (char)118, t4, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB6;

LAB59:    t25 = (t0 + 9688);
    *((int *)t25) = 1;
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

LAB0:    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5064);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1928);
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

LAB0:    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5312);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2088);
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

LAB0:    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5560);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng4)));
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

static void Forked_41_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 6000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5808);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng4)));
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

LAB0:    t1 = (t0 + 6248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6056);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng4)));
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

static void Forked_43_7(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;

LAB0:    t1 = (t0 + 6496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6304);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng4)));
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

LAB0:    t1 = (t0 + 6744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6552);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    t12 = ((char*)((ng4)));
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

static void Monitor_59_9(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 6992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6800);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 8);

LAB5:    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memcpy(t3, t5, 8);
    t9 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB2;

}

static void Forked_60_10(char *t0)
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

LAB0:    t1 = (t0 + 7240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7048);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
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

static void Forked_67_11(char *t0)
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

LAB0:    t1 = (t0 + 7488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7296);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(67, ng0);
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

static void Monitor_68_12(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 7736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7544);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 8);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 8);

LAB5:    t2 = (t0 + 3528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memcpy(t3, t5, 8);
    t9 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB2;

}

static void Forked_69_13(char *t0)
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

LAB0:    t1 = (t0 + 7984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7792);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
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

static void Forked_76_14(char *t0)
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

LAB0:    t1 = (t0 + 8232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8040);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(76, ng0);
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

static void Monitor_77_15(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 8480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8288);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(77, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 16);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 16);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 8);

LAB5:    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memcpy(t3, t5, 8);
    t9 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB2;

}

static void Forked_78_16(char *t0)
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

LAB0:    t1 = (t0 + 8728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8536);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
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

static void Forked_85_17(char *t0)
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

LAB0:    t1 = (t0 + 8976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8784);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng11)));
    t12 = ((char*)((ng12)));
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

static void Monitor_86_18(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 9224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9032);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(86, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 24);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 24);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 8);

LAB5:    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memcpy(t3, t5, 8);
    t9 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00581498713000177425_2351635246_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Initial_46_1,(void *)Forked_38_2,(void *)Forked_39_3,(void *)Forked_40_4,(void *)Forked_41_5,(void *)Forked_42_6,(void *)Forked_43_7,(void *)Forked_58_8,(void *)Monitor_59_9,(void *)Forked_60_10,(void *)Forked_67_11,(void *)Monitor_68_12,(void *)Forked_69_13,(void *)Forked_76_14,(void *)Monitor_77_15,(void *)Forked_78_16,(void *)Forked_85_17,(void *)Monitor_86_18};
	xsi_register_didat("work_m_00581498713000177425_2351635246", "isim/fetch_test_isim_beh.exe.sim/work/m_00581498713000177425_2351635246.didat");
	xsi_register_executes(pe);
}
