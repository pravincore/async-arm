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
static const char *ng0 = "E:/PESIT/Final year project/AsynARM/register_bank.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {0U, 4294967295U};



static void Initial_33_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

}

static void Always_40_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t21[8];
    char t35[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    int t44;
    char *t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    t30 = *((unsigned int *)t5);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t28, 8);

LAB18:    t34 = (t0 + 1928);
    xsi_vlogvar_assign_value(t34, t4, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t2) != 0)
        goto LAB21;

LAB22:    t7 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB23;

LAB24:    t30 = *((unsigned int *)t5);
    t31 = (~(t30));
    t32 = *((unsigned int *)t7);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t7) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t5) > 0)
        goto LAB29;

LAB30:    memcpy(t4, t28, 8);

LAB31:    t26 = (t0 + 2088);
    t29 = (t0 + 2088);
    t34 = (t29 + 72U);
    t37 = *((char **)t34);
    t38 = (t0 + 2088);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = (t0 + 1048U);
    t42 = *((char **)t41);
    xsi_vlog_generic_convert_array_indices(t35, t36, t37, t40, 2, 1, t42, 4, 2);
    t41 = (t35 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (!(t43));
    t45 = (t36 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t44 && t47);
    if (t48 == 1)
        goto LAB32;

LAB33:    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 2088);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 2088);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2088);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t21, 32, t20, t24, t27, 2, 1, t29, 4, 2);
    goto LAB11;

LAB12:    t28 = ((char*)((ng5)));
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 32, t21, 32, t28, 32);
    goto LAB18;

LAB16:    memcpy(t4, t21, 8);
    goto LAB18;

LAB19:    *((unsigned int *)t5) = 1;
    goto LAB22;

LAB21:    t6 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB22;

LAB23:    t13 = (t0 + 2088);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    t19 = (t0 + 2088);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = (t0 + 2088);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t21, 32, t18, t22, t25, 2, 1, t27, 4, 2);
    goto LAB24;

LAB25:    t26 = (t0 + 1208U);
    t28 = *((char **)t26);
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t4, 32, t21, 32, t28, 32);
    goto LAB31;

LAB29:    memcpy(t4, t21, 8);
    goto LAB31;

LAB32:    t49 = *((unsigned int *)t35);
    t50 = *((unsigned int *)t36);
    t51 = (t49 - t50);
    t52 = (t51 + 1);
    xsi_vlogvar_assign_value(t26, t4, 0, *((unsigned int *)t36), t52);
    goto LAB33;

}


extern void work_m_00000000001967703543_1147111718_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_40_1};
	xsi_register_didat("work_m_00000000001967703543_1147111718", "isim/register_bank_test_isim_beh.exe.sim/work/m_00000000001967703543_1147111718.didat");
	xsi_register_executes(pe);
}
