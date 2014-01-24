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
static const char *ng0 = "E:/PESIT/Final year project/AsynARM/reg_bank.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {31, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {15, 0};
static unsigned int ng7[] = {0U, 4294967295U};



static void Initial_41_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    int t22;
    char *t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2840);
    t5 = (t0 + 2840);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2840);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t15 = (t0 + 2840);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng3)));
    t19 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t12, t13, t14, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t22 && t25);
    t27 = (t12 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t31 = (t13 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    t35 = (t14 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2840);
    t5 = (t0 + 2840);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 2840);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t15 = (t0 + 2840);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng3)));
    t19 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t12, t13, t14, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t22 && t25);
    t27 = (t12 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t31 = (t13 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    t35 = (t14 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB5;

LAB6:
LAB1:    return;
LAB3:    t39 = *((unsigned int *)t14);
    t40 = (t39 + 0);
    t41 = *((unsigned int *)t4);
    t42 = *((unsigned int *)t13);
    t43 = (t41 + t42);
    t44 = *((unsigned int *)t12);
    t45 = *((unsigned int *)t13);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t2, t1, t40, t43, t47);
    goto LAB4;

LAB5:    t39 = *((unsigned int *)t14);
    t40 = (t39 + 0);
    t41 = *((unsigned int *)t4);
    t42 = *((unsigned int *)t13);
    t43 = (t41 + t42);
    t44 = *((unsigned int *)t12);
    t45 = *((unsigned int *)t13);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t2, t1, t40, t43, t47);
    goto LAB6;

}

static void Cont_52_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t17[8];
    char t26[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2120U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t34, t6, 8);

LAB10:    memset(t4, 0, 8);
    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t66) != 0)
        goto LAB24;

LAB25:    t73 = (t4 + 4);
    t74 = *((unsigned int *)t4);
    t75 = *((unsigned int *)t73);
    t76 = (t74 || t75);
    if (t76 > 0)
        goto LAB26;

LAB27:    t80 = *((unsigned int *)t4);
    t81 = (~(t80));
    t82 = *((unsigned int *)t73);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t73) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t84, 8);

LAB34:    t85 = (t0 + 5096);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memcpy(t89, t3, 8);
    xsi_driver_vfirst_trans(t85, 0, 31);
    t90 = (t0 + 4984);
    *((int *)t90) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1960U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t18) == 0)
        goto LAB11;

LAB13:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB14:    memset(t26, 0, 8);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t27) != 0)
        goto LAB17;

LAB18:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t6 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB11:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB17:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB18;

LAB19:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t72 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB25;

LAB26:    t77 = (t0 + 2680);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    goto LAB27;

LAB28:    t84 = ((char*)((ng7)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 32, t79, 32, t84, 32);
    goto LAB34;

LAB32:    memcpy(t3, t79, 8);
    goto LAB34;

}

static void Always_56_2(char *t0)
{
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;

LAB0:    t1 = (t0 + 4416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5000);
    *((int *)t2) = 1;
    t3 = (t0 + 4448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4224);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(58, ng0);
    t6 = (t0 + 1960U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:
LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 4224);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(58, ng0);

LAB11:    xsi_set_current_line(59, ng0);
    t13 = (t0 + 2280U);
    t14 = *((char **)t13);
    t13 = (t0 + 2840);
    t17 = (t0 + 2840);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2840);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 1800U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t24, 4, 2);
    t23 = (t15 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (!(t25));
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB12;

LAB13:    goto LAB10;

LAB12:    t31 = *((unsigned int *)t15);
    t32 = *((unsigned int *)t16);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t13, t14, 0, *((unsigned int *)t16), t34);
    goto LAB13;

}

static void Always_65_3(char *t0)
{
    char t6[8];
    char t15[8];
    char t29[8];
    char t36[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;

LAB0:    t1 = (t0 + 4664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 4472);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 1960U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;

LAB11:    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t6);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t16) != 0)
        goto LAB14;

LAB15:    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB16;

LAB17:    memcpy(t36, t15, 8);

LAB18:    t68 = (t36 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(70, ng0);

LAB30:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB28:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 4472);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB12:    *((unsigned int *)t15) = 1;
    goto LAB15;

LAB14:    t22 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB15;

LAB16:    t27 = (t0 + 2120U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t28 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t27) != 0)
        goto LAB21;

LAB22:    t37 = *((unsigned int *)t15);
    t38 = *((unsigned int *)t29);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t15 + 4);
    t41 = (t29 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t29) = 1;
    goto LAB22;

LAB21:    t35 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB22;

LAB23:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t15 + 4);
    t51 = (t29 + 4);
    t52 = *((unsigned int *)t15);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t29);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB25;

LAB26:    xsi_set_current_line(67, ng0);

LAB29:    xsi_set_current_line(68, ng0);
    t74 = (t0 + 2840);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t78 = (t0 + 2840);
    t79 = (t78 + 72U);
    t80 = *((char **)t79);
    t81 = (t0 + 2840);
    t82 = (t81 + 64U);
    t83 = *((char **)t82);
    t84 = (t0 + 1800U);
    t85 = *((char **)t84);
    xsi_vlog_generic_get_array_select_value(t77, 32, t76, t80, t83, 2, 1, t85, 4, 2);
    t84 = (t0 + 2680);
    xsi_vlogvar_assign_value(t84, t77, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB28;

}


extern void work_m_00000000000244385425_2995317124_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Cont_52_1,(void *)Always_56_2,(void *)Always_65_3};
	xsi_register_didat("work_m_00000000000244385425_2995317124", "isim/reg_bank_isim_beh.exe.sim/work/m_00000000000244385425_2995317124.didat");
	xsi_register_executes(pe);
}
