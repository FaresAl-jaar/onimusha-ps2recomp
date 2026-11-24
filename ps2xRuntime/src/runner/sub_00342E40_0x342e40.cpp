#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00342E40
// Address: 0x342e40 - 0x3431dc
void sub_00342E40_0x342e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342E40_0x342e40");
#endif

    switch (ctx->pc) {
        case 0x342e40u: goto label_342e40;
        case 0x342e44u: goto label_342e44;
        case 0x342e48u: goto label_342e48;
        case 0x342e4cu: goto label_342e4c;
        case 0x342e50u: goto label_342e50;
        case 0x342e54u: goto label_342e54;
        case 0x342e58u: goto label_342e58;
        case 0x342e5cu: goto label_342e5c;
        case 0x342e60u: goto label_342e60;
        case 0x342e64u: goto label_342e64;
        case 0x342e68u: goto label_342e68;
        case 0x342e6cu: goto label_342e6c;
        case 0x342e70u: goto label_342e70;
        case 0x342e74u: goto label_342e74;
        case 0x342e78u: goto label_342e78;
        case 0x342e7cu: goto label_342e7c;
        case 0x342e80u: goto label_342e80;
        case 0x342e84u: goto label_342e84;
        case 0x342e88u: goto label_342e88;
        case 0x342e8cu: goto label_342e8c;
        case 0x342e90u: goto label_342e90;
        case 0x342e94u: goto label_342e94;
        case 0x342e98u: goto label_342e98;
        case 0x342e9cu: goto label_342e9c;
        case 0x342ea0u: goto label_342ea0;
        case 0x342ea4u: goto label_342ea4;
        case 0x342ea8u: goto label_342ea8;
        case 0x342eacu: goto label_342eac;
        case 0x342eb0u: goto label_342eb0;
        case 0x342eb4u: goto label_342eb4;
        case 0x342eb8u: goto label_342eb8;
        case 0x342ebcu: goto label_342ebc;
        case 0x342ec0u: goto label_342ec0;
        case 0x342ec4u: goto label_342ec4;
        case 0x342ec8u: goto label_342ec8;
        case 0x342eccu: goto label_342ecc;
        case 0x342ed0u: goto label_342ed0;
        case 0x342ed4u: goto label_342ed4;
        case 0x342ed8u: goto label_342ed8;
        case 0x342edcu: goto label_342edc;
        case 0x342ee0u: goto label_342ee0;
        case 0x342ee4u: goto label_342ee4;
        case 0x342ee8u: goto label_342ee8;
        case 0x342eecu: goto label_342eec;
        case 0x342ef0u: goto label_342ef0;
        case 0x342ef4u: goto label_342ef4;
        case 0x342ef8u: goto label_342ef8;
        case 0x342efcu: goto label_342efc;
        case 0x342f00u: goto label_342f00;
        case 0x342f04u: goto label_342f04;
        case 0x342f08u: goto label_342f08;
        case 0x342f0cu: goto label_342f0c;
        case 0x342f10u: goto label_342f10;
        case 0x342f14u: goto label_342f14;
        case 0x342f18u: goto label_342f18;
        case 0x342f1cu: goto label_342f1c;
        case 0x342f20u: goto label_342f20;
        case 0x342f24u: goto label_342f24;
        case 0x342f28u: goto label_342f28;
        case 0x342f2cu: goto label_342f2c;
        case 0x342f30u: goto label_342f30;
        case 0x342f34u: goto label_342f34;
        case 0x342f38u: goto label_342f38;
        case 0x342f3cu: goto label_342f3c;
        case 0x342f40u: goto label_342f40;
        case 0x342f44u: goto label_342f44;
        case 0x342f48u: goto label_342f48;
        case 0x342f4cu: goto label_342f4c;
        case 0x342f50u: goto label_342f50;
        case 0x342f54u: goto label_342f54;
        case 0x342f58u: goto label_342f58;
        case 0x342f5cu: goto label_342f5c;
        case 0x342f60u: goto label_342f60;
        case 0x342f64u: goto label_342f64;
        case 0x342f68u: goto label_342f68;
        case 0x342f6cu: goto label_342f6c;
        case 0x342f70u: goto label_342f70;
        case 0x342f74u: goto label_342f74;
        case 0x342f78u: goto label_342f78;
        case 0x342f7cu: goto label_342f7c;
        case 0x342f80u: goto label_342f80;
        case 0x342f84u: goto label_342f84;
        case 0x342f88u: goto label_342f88;
        case 0x342f8cu: goto label_342f8c;
        case 0x342f90u: goto label_342f90;
        case 0x342f94u: goto label_342f94;
        case 0x342f98u: goto label_342f98;
        case 0x342f9cu: goto label_342f9c;
        case 0x342fa0u: goto label_342fa0;
        case 0x342fa4u: goto label_342fa4;
        case 0x342fa8u: goto label_342fa8;
        case 0x342facu: goto label_342fac;
        case 0x342fb0u: goto label_342fb0;
        case 0x342fb4u: goto label_342fb4;
        case 0x342fb8u: goto label_342fb8;
        case 0x342fbcu: goto label_342fbc;
        case 0x342fc0u: goto label_342fc0;
        case 0x342fc4u: goto label_342fc4;
        case 0x342fc8u: goto label_342fc8;
        case 0x342fccu: goto label_342fcc;
        case 0x342fd0u: goto label_342fd0;
        case 0x342fd4u: goto label_342fd4;
        case 0x342fd8u: goto label_342fd8;
        case 0x342fdcu: goto label_342fdc;
        case 0x342fe0u: goto label_342fe0;
        case 0x342fe4u: goto label_342fe4;
        case 0x342fe8u: goto label_342fe8;
        case 0x342fecu: goto label_342fec;
        case 0x342ff0u: goto label_342ff0;
        case 0x342ff4u: goto label_342ff4;
        case 0x342ff8u: goto label_342ff8;
        case 0x342ffcu: goto label_342ffc;
        case 0x343000u: goto label_343000;
        case 0x343004u: goto label_343004;
        case 0x343008u: goto label_343008;
        case 0x34300cu: goto label_34300c;
        case 0x343010u: goto label_343010;
        case 0x343014u: goto label_343014;
        case 0x343018u: goto label_343018;
        case 0x34301cu: goto label_34301c;
        case 0x343020u: goto label_343020;
        case 0x343024u: goto label_343024;
        case 0x343028u: goto label_343028;
        case 0x34302cu: goto label_34302c;
        case 0x343030u: goto label_343030;
        case 0x343034u: goto label_343034;
        case 0x343038u: goto label_343038;
        case 0x34303cu: goto label_34303c;
        case 0x343040u: goto label_343040;
        case 0x343044u: goto label_343044;
        case 0x343048u: goto label_343048;
        case 0x34304cu: goto label_34304c;
        case 0x343050u: goto label_343050;
        case 0x343054u: goto label_343054;
        case 0x343058u: goto label_343058;
        case 0x34305cu: goto label_34305c;
        case 0x343060u: goto label_343060;
        case 0x343064u: goto label_343064;
        case 0x343068u: goto label_343068;
        case 0x34306cu: goto label_34306c;
        case 0x343070u: goto label_343070;
        case 0x343074u: goto label_343074;
        case 0x343078u: goto label_343078;
        case 0x34307cu: goto label_34307c;
        case 0x343080u: goto label_343080;
        case 0x343084u: goto label_343084;
        case 0x343088u: goto label_343088;
        case 0x34308cu: goto label_34308c;
        case 0x343090u: goto label_343090;
        case 0x343094u: goto label_343094;
        case 0x343098u: goto label_343098;
        case 0x34309cu: goto label_34309c;
        case 0x3430a0u: goto label_3430a0;
        case 0x3430a4u: goto label_3430a4;
        case 0x3430a8u: goto label_3430a8;
        case 0x3430acu: goto label_3430ac;
        case 0x3430b0u: goto label_3430b0;
        case 0x3430b4u: goto label_3430b4;
        case 0x3430b8u: goto label_3430b8;
        case 0x3430bcu: goto label_3430bc;
        case 0x3430c0u: goto label_3430c0;
        case 0x3430c4u: goto label_3430c4;
        case 0x3430c8u: goto label_3430c8;
        case 0x3430ccu: goto label_3430cc;
        case 0x3430d0u: goto label_3430d0;
        case 0x3430d4u: goto label_3430d4;
        case 0x3430d8u: goto label_3430d8;
        case 0x3430dcu: goto label_3430dc;
        case 0x3430e0u: goto label_3430e0;
        case 0x3430e4u: goto label_3430e4;
        case 0x3430e8u: goto label_3430e8;
        case 0x3430ecu: goto label_3430ec;
        case 0x3430f0u: goto label_3430f0;
        case 0x3430f4u: goto label_3430f4;
        case 0x3430f8u: goto label_3430f8;
        case 0x3430fcu: goto label_3430fc;
        case 0x343100u: goto label_343100;
        case 0x343104u: goto label_343104;
        case 0x343108u: goto label_343108;
        case 0x34310cu: goto label_34310c;
        case 0x343110u: goto label_343110;
        case 0x343114u: goto label_343114;
        case 0x343118u: goto label_343118;
        case 0x34311cu: goto label_34311c;
        case 0x343120u: goto label_343120;
        case 0x343124u: goto label_343124;
        case 0x343128u: goto label_343128;
        case 0x34312cu: goto label_34312c;
        case 0x343130u: goto label_343130;
        case 0x343134u: goto label_343134;
        case 0x343138u: goto label_343138;
        case 0x34313cu: goto label_34313c;
        case 0x343140u: goto label_343140;
        case 0x343144u: goto label_343144;
        case 0x343148u: goto label_343148;
        case 0x34314cu: goto label_34314c;
        case 0x343150u: goto label_343150;
        case 0x343154u: goto label_343154;
        case 0x343158u: goto label_343158;
        case 0x34315cu: goto label_34315c;
        case 0x343160u: goto label_343160;
        case 0x343164u: goto label_343164;
        case 0x343168u: goto label_343168;
        case 0x34316cu: goto label_34316c;
        case 0x343170u: goto label_343170;
        case 0x343174u: goto label_343174;
        case 0x343178u: goto label_343178;
        case 0x34317cu: goto label_34317c;
        case 0x343180u: goto label_343180;
        case 0x343184u: goto label_343184;
        case 0x343188u: goto label_343188;
        case 0x34318cu: goto label_34318c;
        case 0x343190u: goto label_343190;
        case 0x343194u: goto label_343194;
        case 0x343198u: goto label_343198;
        case 0x34319cu: goto label_34319c;
        case 0x3431a0u: goto label_3431a0;
        case 0x3431a4u: goto label_3431a4;
        case 0x3431a8u: goto label_3431a8;
        case 0x3431acu: goto label_3431ac;
        case 0x3431b0u: goto label_3431b0;
        case 0x3431b4u: goto label_3431b4;
        case 0x3431b8u: goto label_3431b8;
        case 0x3431bcu: goto label_3431bc;
        case 0x3431c0u: goto label_3431c0;
        case 0x3431c4u: goto label_3431c4;
        case 0x3431c8u: goto label_3431c8;
        case 0x3431ccu: goto label_3431cc;
        case 0x3431d0u: goto label_3431d0;
        case 0x3431d4u: goto label_3431d4;
        case 0x3431d8u: goto label_3431d8;
        default: break;
    }

    ctx->pc = 0x342e40u;

label_342e40:
    // 0x342e40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x342e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_342e44:
    // 0x342e44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x342e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_342e48:
    // 0x342e48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x342e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_342e4c:
    // 0x342e4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x342e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_342e50:
    // 0x342e50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x342e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_342e54:
    // 0x342e54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x342e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_342e58:
    // 0x342e58: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x342e58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
label_342e5c:
    // 0x342e5c: 0x10a300a8  beq         $a1, $v1, . + 4 + (0xA8 << 2)
label_342e60:
    if (ctx->pc == 0x342E60u) {
        ctx->pc = 0x342E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E5Cu;
        // 0x342e60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E64u;
        goto label_342e64;
    }
    ctx->pc = 0x342E5Cu;
    {
        const bool branch_taken_0x342e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x342E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E5Cu;
        // 0x342e60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e5c) {
            ctx->pc = 0x343100u;
            goto label_343100;
        }
    }
    ctx->pc = 0x342E64u;
label_342e64:
    // 0x342e64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x342e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_342e68:
    // 0x342e68: 0x10a3007f  beq         $a1, $v1, . + 4 + (0x7F << 2)
label_342e6c:
    if (ctx->pc == 0x342E6Cu) {
        ctx->pc = 0x342E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E68u;
        // 0x342e6c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342E70u;
        goto label_342e70;
    }
    ctx->pc = 0x342E68u;
    {
        const bool branch_taken_0x342e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x342E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E68u;
        // 0x342e6c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e68) {
            ctx->pc = 0x343068u;
            goto label_343068;
        }
    }
    ctx->pc = 0x342E70u;
label_342e70:
    // 0x342e70: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
label_342e74:
    if (ctx->pc == 0x342E74u) {
        ctx->pc = 0x342E78u;
        goto label_342e78;
    }
    ctx->pc = 0x342E70u;
    {
        const bool branch_taken_0x342e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x342e70) {
            ctx->pc = 0x342F10u;
            goto label_342f10;
        }
    }
    ctx->pc = 0x342E78u;
label_342e78:
    // 0x342e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x342e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_342e7c:
    // 0x342e7c: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
label_342e80:
    if (ctx->pc == 0x342E80u) {
        ctx->pc = 0x342E84u;
        goto label_342e84;
    }
    ctx->pc = 0x342E7Cu;
    {
        const bool branch_taken_0x342e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x342e7c) {
            ctx->pc = 0x342EF0u;
            goto label_342ef0;
        }
    }
    ctx->pc = 0x342E84u;
label_342e84:
    // 0x342e84: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_342e88:
    if (ctx->pc == 0x342E88u) {
        ctx->pc = 0x342E8Cu;
        goto label_342e8c;
    }
    ctx->pc = 0x342E84u;
    {
        const bool branch_taken_0x342e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x342e84) {
            ctx->pc = 0x342E98u;
            goto label_342e98;
        }
    }
    ctx->pc = 0x342E8Cu;
label_342e8c:
    // 0x342e8c: 0x100000ce  b           . + 4 + (0xCE << 2)
label_342e90:
    if (ctx->pc == 0x342E90u) {
        ctx->pc = 0x342E94u;
        goto label_342e94;
    }
    ctx->pc = 0x342E8Cu;
    {
        const bool branch_taken_0x342e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342e8c) {
            ctx->pc = 0x3431C8u;
            goto label_3431c8;
        }
    }
    ctx->pc = 0x342E94u;
label_342e94:
    // 0x342e94: 0x0  nop
    ctx->pc = 0x342e94u;
    // NOP
label_342e98:
    // 0x342e98: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_342e9c:
    if (ctx->pc == 0x342E9Cu) {
        ctx->pc = 0x342EA0u;
        goto label_342ea0;
    }
    ctx->pc = 0x342E98u;
    {
        const bool branch_taken_0x342e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x342e98) {
            ctx->pc = 0x342ED8u;
            goto label_342ed8;
        }
    }
    ctx->pc = 0x342EA0u;
label_342ea0:
    // 0x342ea0: 0x92270559  lbu         $a3, 0x559($s1)
    ctx->pc = 0x342ea0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_342ea4:
    // 0x342ea4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x342ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_342ea8:
    // 0x342ea8: 0x2442f370  addiu       $v0, $v0, -0xC90
    ctx->pc = 0x342ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964080));
label_342eac:
    // 0x342eac: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x342eacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_342eb0:
    // 0x342eb0: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x342eb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_342eb4:
    // 0x342eb4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x342eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_342eb8:
    // 0x342eb8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x342eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_342ebc:
    // 0x342ebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x342ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_342ec0:
    // 0x342ec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_342ec4:
    // 0x342ec4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x342ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_342ec8:
    // 0x342ec8: 0x40f809  jalr        $v0
label_342ecc:
    if (ctx->pc == 0x342ECCu) {
        ctx->pc = 0x342ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EC8u;
        // 0x342ecc: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342ED0u;
        goto label_342ed0;
    }
    ctx->pc = 0x342EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342ED0u);
        ctx->pc = 0x342ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EC8u;
        // 0x342ecc: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342EC8u, 0x342ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342ED0u;
label_342ed0:
    // 0x342ed0: 0x10000003  b           . + 4 + (0x3 << 2)
label_342ed4:
    if (ctx->pc == 0x342ED4u) {
        ctx->pc = 0x342ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342ED0u;
        // 0x342ed4: 0xae220550  sw          $v0, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342ED8u;
        goto label_342ed8;
    }
    ctx->pc = 0x342ED0u;
    {
        const bool branch_taken_0x342ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342ED0u;
        // 0x342ed4: 0xae220550  sw          $v0, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ed0) {
            ctx->pc = 0x342EE0u;
            goto label_342ee0;
        }
    }
    ctx->pc = 0x342ED8u;
label_342ed8:
    // 0x342ed8: 0xc0c0830  jal         func_3020C0
label_342edc:
    if (ctx->pc == 0x342EDCu) {
        ctx->pc = 0x342EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342ED8u;
        // 0x342edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342EE0u;
        goto label_342ee0;
    }
    ctx->pc = 0x342ED8u;
    SET_GPR_U32(ctx, 31, 0x342EE0u);
    ctx->pc = 0x342EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342ED8u;
    // 0x342edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x342ED8u, 0x342EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342EE0u;
label_342ee0:
    // 0x342ee0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x342ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_342ee4:
    // 0x342ee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x342ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_342ee8:
    // 0x342ee8: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_342eec:
    if (ctx->pc == 0x342EECu) {
        ctx->pc = 0x342EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EE8u;
        // 0x342eec: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342EF0u;
        goto label_342ef0;
    }
    ctx->pc = 0x342EE8u;
    {
        const bool branch_taken_0x342ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342EE8u;
        // 0x342eec: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ee8) {
            ctx->pc = 0x3431C8u;
            goto label_3431c8;
        }
    }
    ctx->pc = 0x342EF0u;
label_342ef0:
    // 0x342ef0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x342ef0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_342ef4:
    // 0x342ef4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x342ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_342ef8:
    // 0x342ef8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x342ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_342efc:
    // 0x342efc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x342efcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_342f00:
    // 0x342f00: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x342f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_342f04:
    // 0x342f04: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x342f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_342f08:
    // 0x342f08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x342f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_342f0c:
    // 0x342f0c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x342f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_342f10:
    // 0x342f10: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x342f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_342f14:
    // 0x342f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342f18:
    // 0x342f18: 0xc0c08b4  jal         func_3022D0
label_342f1c:
    if (ctx->pc == 0x342F1Cu) {
        ctx->pc = 0x342F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F18u;
        // 0x342f1c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F20u;
        goto label_342f20;
    }
    ctx->pc = 0x342F18u;
    SET_GPR_U32(ctx, 31, 0x342F20u);
    ctx->pc = 0x342F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342F18u;
    // 0x342f1c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x342F18u, 0x342F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342F20u;
label_342f20:
    // 0x342f20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_342f24:
    if (ctx->pc == 0x342F24u) {
        ctx->pc = 0x342F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F20u;
        // 0x342f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F28u;
        goto label_342f28;
    }
    ctx->pc = 0x342F20u;
    {
        const bool branch_taken_0x342f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F20u;
        // 0x342f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f20) {
            ctx->pc = 0x342F30u;
            goto label_342f30;
        }
    }
    ctx->pc = 0x342F28u;
label_342f28:
    // 0x342f28: 0xc0c0830  jal         func_3020C0
label_342f2c:
    if (ctx->pc == 0x342F2Cu) {
        ctx->pc = 0x342F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F28u;
        // 0x342f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F30u;
        goto label_342f30;
    }
    ctx->pc = 0x342F28u;
    SET_GPR_U32(ctx, 31, 0x342F30u);
    ctx->pc = 0x342F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342F28u;
    // 0x342f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x342F28u, 0x342F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342F30u;
label_342f30:
    // 0x342f30: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x342f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_342f34:
    // 0x342f34: 0x4600020  bltz        $v1, . + 4 + (0x20 << 2)
label_342f38:
    if (ctx->pc == 0x342F38u) {
        ctx->pc = 0x342F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F34u;
        // 0x342f38: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F3Cu;
        goto label_342f3c;
    }
    ctx->pc = 0x342F34u;
    {
        const bool branch_taken_0x342f34 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x342F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F34u;
        // 0x342f38: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f34) {
            ctx->pc = 0x342FB8u;
            goto label_342fb8;
        }
    }
    ctx->pc = 0x342F3Cu;
label_342f3c:
    // 0x342f3c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_342f40:
    if (ctx->pc == 0x342F40u) {
        ctx->pc = 0x342F44u;
        goto label_342f44;
    }
    ctx->pc = 0x342F3Cu;
    {
        const bool branch_taken_0x342f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342f3c) {
            ctx->pc = 0x342FB8u;
            goto label_342fb8;
        }
    }
    ctx->pc = 0x342F44u;
label_342f44:
    // 0x342f44: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x342f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_342f48:
    // 0x342f48: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x342f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_342f4c:
    // 0x342f4c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x342f4cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_342f50:
    // 0x342f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342f54:
    // 0x342f54: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x342f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_342f58:
    // 0x342f58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x342f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342f5c:
    // 0x342f5c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x342f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_342f60:
    // 0x342f60: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x342f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_342f64:
    // 0x342f64: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x342f64u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_342f68:
    // 0x342f68: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x342f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_342f6c:
    // 0x342f6c: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x342f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
label_342f70:
    // 0x342f70: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x342f70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_342f74:
    // 0x342f74: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x342f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_342f78:
    // 0x342f78: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x342f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_342f7c:
    // 0x342f7c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x342f7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_342f80:
    // 0x342f80: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x342f80u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_342f84:
    // 0x342f84: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x342f84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_342f88:
    // 0x342f88: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x342f88u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_342f8c:
    // 0x342f8c: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x342f8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
label_342f90:
    // 0x342f90: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x342f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_342f94:
    // 0x342f94: 0xc0c0900  jal         func_302400
label_342f98:
    if (ctx->pc == 0x342F98u) {
        ctx->pc = 0x342F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F94u;
        // 0x342f98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342F9Cu;
        goto label_342f9c;
    }
    ctx->pc = 0x342F94u;
    SET_GPR_U32(ctx, 31, 0x342F9Cu);
    ctx->pc = 0x342F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342F94u;
    // 0x342f98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x342F94u, 0x342F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342F9Cu;
label_342f9c:
    // 0x342f9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342fa0:
    if (ctx->pc == 0x342FA0u) {
        ctx->pc = 0x342FA4u;
        goto label_342fa4;
    }
    ctx->pc = 0x342F9Cu;
    {
        const bool branch_taken_0x342f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342f9c) {
            ctx->pc = 0x342FB8u;
            goto label_342fb8;
        }
    }
    ctx->pc = 0x342FA4u;
label_342fa4:
    // 0x342fa4: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x342fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_342fa8:
    // 0x342fa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x342fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_342fac:
    // 0x342fac: 0x10000086  b           . + 4 + (0x86 << 2)
label_342fb0:
    if (ctx->pc == 0x342FB0u) {
        ctx->pc = 0x342FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FACu;
        // 0x342fb0: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FB4u;
        goto label_342fb4;
    }
    ctx->pc = 0x342FACu;
    {
        const bool branch_taken_0x342fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FACu;
        // 0x342fb0: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342fac) {
            ctx->pc = 0x3431C8u;
            goto label_3431c8;
        }
    }
    ctx->pc = 0x342FB4u;
label_342fb4:
    // 0x342fb4: 0x0  nop
    ctx->pc = 0x342fb4u;
    // NOP
label_342fb8:
    // 0x342fb8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x342fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_342fbc:
    // 0x342fbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_342fc0:
    if (ctx->pc == 0x342FC0u) {
        ctx->pc = 0x342FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FBCu;
        // 0x342fc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FC4u;
        goto label_342fc4;
    }
    ctx->pc = 0x342FBCu;
    {
        const bool branch_taken_0x342fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x342FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FBCu;
        // 0x342fc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342fbc) {
            ctx->pc = 0x342FD0u;
            goto label_342fd0;
        }
    }
    ctx->pc = 0x342FC4u;
label_342fc4:
    // 0x342fc4: 0x10000022  b           . + 4 + (0x22 << 2)
label_342fc8:
    if (ctx->pc == 0x342FC8u) {
        ctx->pc = 0x342FCCu;
        goto label_342fcc;
    }
    ctx->pc = 0x342FC4u;
    {
        const bool branch_taken_0x342fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342fc4) {
            ctx->pc = 0x343050u;
            goto label_343050;
        }
    }
    ctx->pc = 0x342FCCu;
label_342fcc:
    // 0x342fcc: 0x0  nop
    ctx->pc = 0x342fccu;
    // NOP
label_342fd0:
    // 0x342fd0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x342fd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_342fd4:
    // 0x342fd4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x342fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_342fd8:
    // 0x342fd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x342fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_342fdc:
    // 0x342fdc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x342fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_342fe0:
    // 0x342fe0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x342fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_342fe4:
    // 0x342fe4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_342fe8:
    if (ctx->pc == 0x342FE8u) {
        ctx->pc = 0x342FECu;
        goto label_342fec;
    }
    ctx->pc = 0x342FE4u;
    {
        const bool branch_taken_0x342fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x342fe4) {
            ctx->pc = 0x343020u;
            goto label_343020;
        }
    }
    ctx->pc = 0x342FECu;
label_342fec:
    // 0x342fec: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x342fecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_342ff0:
    // 0x342ff0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x342ff0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_342ff4:
    // 0x342ff4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_342ff8:
    if (ctx->pc == 0x342FF8u) {
        ctx->pc = 0x342FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FF4u;
        // 0x342ff8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342FFCu;
        goto label_342ffc;
    }
    ctx->pc = 0x342FF4u;
    {
        const bool branch_taken_0x342ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x342FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FF4u;
        // 0x342ff8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ff4) {
            ctx->pc = 0x343048u;
            goto label_343048;
        }
    }
    ctx->pc = 0x342FFCu;
label_342ffc:
    // 0x342ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x342ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343000:
    // 0x343000: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x343000u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_343004:
    // 0x343004: 0x0  nop
    ctx->pc = 0x343004u;
    // NOP
label_343008:
    // 0x343008: 0x0  nop
    ctx->pc = 0x343008u;
    // NOP
label_34300c:
    // 0x34300c: 0x2010  mfhi        $a0
    ctx->pc = 0x34300cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_343010:
    // 0x343010: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343010u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_343014:
    // 0x343014: 0x1000000c  b           . + 4 + (0xC << 2)
label_343018:
    if (ctx->pc == 0x343018u) {
        ctx->pc = 0x343018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343014u;
        // 0x343018: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34301Cu;
        goto label_34301c;
    }
    ctx->pc = 0x343014u;
    {
        const bool branch_taken_0x343014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343014u;
        // 0x343018: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343014) {
            ctx->pc = 0x343048u;
            goto label_343048;
        }
    }
    ctx->pc = 0x34301Cu;
label_34301c:
    // 0x34301c: 0x0  nop
    ctx->pc = 0x34301cu;
    // NOP
label_343020:
    // 0x343020: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x343020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_343024:
    // 0x343024: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x343024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_343028:
    // 0x343028: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_34302c:
    if (ctx->pc == 0x34302Cu) {
        ctx->pc = 0x343030u;
        goto label_343030;
    }
    ctx->pc = 0x343028u;
    {
        const bool branch_taken_0x343028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343028) {
            ctx->pc = 0x343048u;
            goto label_343048;
        }
    }
    ctx->pc = 0x343030u;
label_343030:
    // 0x343030: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_343034:
    // 0x343034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343038:
    // 0x343038: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x343038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_34303c:
    // 0x34303c: 0x10000004  b           . + 4 + (0x4 << 2)
label_343040:
    if (ctx->pc == 0x343040u) {
        ctx->pc = 0x343040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34303Cu;
        // 0x343040: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343044u;
        goto label_343044;
    }
    ctx->pc = 0x34303Cu;
    {
        const bool branch_taken_0x34303c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34303Cu;
        // 0x343040: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34303c) {
            ctx->pc = 0x343050u;
            goto label_343050;
        }
    }
    ctx->pc = 0x343044u;
label_343044:
    // 0x343044: 0x0  nop
    ctx->pc = 0x343044u;
    // NOP
label_343048:
    // 0x343048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34304c:
    // 0x34304c: 0x0  nop
    ctx->pc = 0x34304cu;
    // NOP
label_343050:
    // 0x343050: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
label_343054:
    if (ctx->pc == 0x343054u) {
        ctx->pc = 0x343054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343050u;
        // 0x343054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343058u;
        goto label_343058;
    }
    ctx->pc = 0x343050u;
    {
        const bool branch_taken_0x343050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x343054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343050u;
        // 0x343054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343050) {
            ctx->pc = 0x3431C8u;
            goto label_3431c8;
        }
    }
    ctx->pc = 0x343058u;
label_343058:
    // 0x343058: 0xc0c0830  jal         func_3020C0
label_34305c:
    if (ctx->pc == 0x34305Cu) {
        ctx->pc = 0x34305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343058u;
        // 0x34305c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343060u;
        goto label_343060;
    }
    ctx->pc = 0x343058u;
    SET_GPR_U32(ctx, 31, 0x343060u);
    ctx->pc = 0x34305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343058u;
    // 0x34305c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343058u, 0x343060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343060u;
label_343060:
    // 0x343060: 0x10000059  b           . + 4 + (0x59 << 2)
label_343064:
    if (ctx->pc == 0x343064u) {
        ctx->pc = 0x343068u;
        goto label_343068;
    }
    ctx->pc = 0x343060u;
    {
        const bool branch_taken_0x343060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343060) {
            ctx->pc = 0x3431C8u;
            goto label_3431c8;
        }
    }
    ctx->pc = 0x343068u;
label_343068:
    // 0x343068: 0xc096c4c  jal         func_25B130
label_34306c:
    if (ctx->pc == 0x34306Cu) {
        ctx->pc = 0x34306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343068u;
        // 0x34306c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343070u;
        goto label_343070;
    }
    ctx->pc = 0x343068u;
    SET_GPR_U32(ctx, 31, 0x343070u);
    ctx->pc = 0x34306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343068u;
    // 0x34306c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x343068u, 0x343070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343070u;
label_343070:
    // 0x343070: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_343074:
    if (ctx->pc == 0x343074u) {
        ctx->pc = 0x343074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343070u;
        // 0x343074: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343078u;
        goto label_343078;
    }
    ctx->pc = 0x343070u;
    {
        const bool branch_taken_0x343070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x343074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343070u;
        // 0x343074: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343070) {
            ctx->pc = 0x3430E0u;
            goto label_3430e0;
        }
    }
    ctx->pc = 0x343078u;
label_343078:
    // 0x343078: 0x92270559  lbu         $a3, 0x559($s1)
    ctx->pc = 0x343078u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
label_34307c:
    // 0x34307c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34307cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_343080:
    // 0x343080: 0x2442f374  addiu       $v0, $v0, -0xC8C
    ctx->pc = 0x343080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964084));
label_343084:
    // 0x343084: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x343084u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_343088:
    // 0x343088: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x343088u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_34308c:
    // 0x34308c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x34308cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_343090:
    // 0x343090: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x343090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_343094:
    // 0x343094: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x343094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_343098:
    // 0x343098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x343098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34309c:
    // 0x34309c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3430a0:
    // 0x3430a0: 0x40f809  jalr        $v0
label_3430a4:
    if (ctx->pc == 0x3430A4u) {
        ctx->pc = 0x3430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430A0u;
        // 0x3430a4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3430A8u;
        goto label_3430a8;
    }
    ctx->pc = 0x3430A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3430A8u);
        ctx->pc = 0x3430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430A0u;
        // 0x3430a4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3430A0u, 0x3430A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3430A8u;
label_3430a8:
    // 0x3430a8: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3430a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
label_3430ac:
    // 0x3430ac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3430acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3430b0:
    // 0x3430b0: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3430b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3430b4:
    // 0x3430b4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3430b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_3430b8:
    // 0x3430b8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3430b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3430bc:
    // 0x3430bc: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3430bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
label_3430c0:
    // 0x3430c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3430c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3430c4:
    // 0x3430c4: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3430c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3430c8:
    // 0x3430c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3430c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3430cc:
    // 0x3430cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3430ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3430d0:
    // 0x3430d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3430d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3430d4:
    // 0x3430d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3430d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3430d8:
    // 0x3430d8: 0xc05e9e8  jal         func_17A7A0
label_3430dc:
    if (ctx->pc == 0x3430DCu) {
        ctx->pc = 0x3430DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430D8u;
        // 0x3430dc: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3430E0u;
        goto label_3430e0;
    }
    ctx->pc = 0x3430D8u;
    SET_GPR_U32(ctx, 31, 0x3430E0u);
    ctx->pc = 0x3430DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3430D8u;
    // 0x3430dc: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3430D8u, 0x3430E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430E0u;
label_3430e0:
    // 0x3430e0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3430e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
label_3430e4:
    // 0x3430e4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3430e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3430e8:
    // 0x3430e8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3430e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3430ec:
    // 0x3430ec: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3430ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3430f0:
    // 0x3430f0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3430f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3430f4:
    // 0x3430f4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3430f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3430f8:
    // 0x3430f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3430f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3430fc:
    // 0x3430fc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3430fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_343100:
    // 0x343100: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x343100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_343104:
    // 0x343104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_343108:
    // 0x343108: 0xc0c08b4  jal         func_3022D0
label_34310c:
    if (ctx->pc == 0x34310Cu) {
        ctx->pc = 0x34310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343108u;
        // 0x34310c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343110u;
        goto label_343110;
    }
    ctx->pc = 0x343108u;
    SET_GPR_U32(ctx, 31, 0x343110u);
    ctx->pc = 0x34310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343108u;
    // 0x34310c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x343108u, 0x343110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343110u;
label_343110:
    // 0x343110: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_343114:
    if (ctx->pc == 0x343114u) {
        ctx->pc = 0x343114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343110u;
        // 0x343114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343118u;
        goto label_343118;
    }
    ctx->pc = 0x343110u;
    {
        const bool branch_taken_0x343110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343110u;
        // 0x343114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343110) {
            ctx->pc = 0x343120u;
            goto label_343120;
        }
    }
    ctx->pc = 0x343118u;
label_343118:
    // 0x343118: 0xc0c0830  jal         func_3020C0
label_34311c:
    if (ctx->pc == 0x34311Cu) {
        ctx->pc = 0x34311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343118u;
        // 0x34311c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343120u;
        goto label_343120;
    }
    ctx->pc = 0x343118u;
    SET_GPR_U32(ctx, 31, 0x343120u);
    ctx->pc = 0x34311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343118u;
    // 0x34311c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343118u, 0x343120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343120u;
label_343120:
    // 0x343120: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x343120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_343124:
    // 0x343124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_343128:
    if (ctx->pc == 0x343128u) {
        ctx->pc = 0x343128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343124u;
        // 0x343128: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34312Cu;
        goto label_34312c;
    }
    ctx->pc = 0x343124u;
    {
        const bool branch_taken_0x343124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343124u;
        // 0x343128: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343124) {
            ctx->pc = 0x343138u;
            goto label_343138;
        }
    }
    ctx->pc = 0x34312Cu;
label_34312c:
    // 0x34312c: 0x10000022  b           . + 4 + (0x22 << 2)
label_343130:
    if (ctx->pc == 0x343130u) {
        ctx->pc = 0x343134u;
        goto label_343134;
    }
    ctx->pc = 0x34312Cu;
    {
        const bool branch_taken_0x34312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34312c) {
            ctx->pc = 0x3431B8u;
            goto label_3431b8;
        }
    }
    ctx->pc = 0x343134u;
label_343134:
    // 0x343134: 0x0  nop
    ctx->pc = 0x343134u;
    // NOP
label_343138:
    // 0x343138: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x343138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_34313c:
    // 0x34313c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_343140:
    // 0x343140: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x343140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_343144:
    // 0x343144: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343144u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_343148:
    // 0x343148: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x343148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_34314c:
    // 0x34314c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_343150:
    if (ctx->pc == 0x343150u) {
        ctx->pc = 0x343154u;
        goto label_343154;
    }
    ctx->pc = 0x34314Cu;
    {
        const bool branch_taken_0x34314c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34314c) {
            ctx->pc = 0x343188u;
            goto label_343188;
        }
    }
    ctx->pc = 0x343154u;
label_343154:
    // 0x343154: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x343154u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_343158:
    // 0x343158: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x343158u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_34315c:
    // 0x34315c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_343160:
    if (ctx->pc == 0x343160u) {
        ctx->pc = 0x343160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34315Cu;
        // 0x343160: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343164u;
        goto label_343164;
    }
    ctx->pc = 0x34315Cu;
    {
        const bool branch_taken_0x34315c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x343160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34315Cu;
        // 0x343160: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34315c) {
            ctx->pc = 0x3431B0u;
            goto label_3431b0;
        }
    }
    ctx->pc = 0x343164u;
label_343164:
    // 0x343164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343168:
    // 0x343168: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x343168u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_34316c:
    // 0x34316c: 0x0  nop
    ctx->pc = 0x34316cu;
    // NOP
label_343170:
    // 0x343170: 0x0  nop
    ctx->pc = 0x343170u;
    // NOP
label_343174:
    // 0x343174: 0x2010  mfhi        $a0
    ctx->pc = 0x343174u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_343178:
    // 0x343178: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343178u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_34317c:
    // 0x34317c: 0x1000000c  b           . + 4 + (0xC << 2)
label_343180:
    if (ctx->pc == 0x343180u) {
        ctx->pc = 0x343180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34317Cu;
        // 0x343180: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343184u;
        goto label_343184;
    }
    ctx->pc = 0x34317Cu;
    {
        const bool branch_taken_0x34317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34317Cu;
        // 0x343180: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34317c) {
            ctx->pc = 0x3431B0u;
            goto label_3431b0;
        }
    }
    ctx->pc = 0x343184u;
label_343184:
    // 0x343184: 0x0  nop
    ctx->pc = 0x343184u;
    // NOP
label_343188:
    // 0x343188: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x343188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_34318c:
    // 0x34318c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34318cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_343190:
    // 0x343190: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_343194:
    if (ctx->pc == 0x343194u) {
        ctx->pc = 0x343198u;
        goto label_343198;
    }
    ctx->pc = 0x343190u;
    {
        const bool branch_taken_0x343190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343190) {
            ctx->pc = 0x3431B0u;
            goto label_3431b0;
        }
    }
    ctx->pc = 0x343198u;
label_343198:
    // 0x343198: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343198u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_34319c:
    // 0x34319c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3431a0:
    // 0x3431a0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3431a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3431a4:
    // 0x3431a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3431a8:
    if (ctx->pc == 0x3431A8u) {
        ctx->pc = 0x3431A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431A4u;
        // 0x3431a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431ACu;
        goto label_3431ac;
    }
    ctx->pc = 0x3431A4u;
    {
        const bool branch_taken_0x3431a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3431A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431A4u;
        // 0x3431a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3431a4) {
            ctx->pc = 0x3431B8u;
            goto label_3431b8;
        }
    }
    ctx->pc = 0x3431ACu;
label_3431ac:
    // 0x3431ac: 0x0  nop
    ctx->pc = 0x3431acu;
    // NOP
label_3431b0:
    // 0x3431b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3431b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3431b4:
    // 0x3431b4: 0x0  nop
    ctx->pc = 0x3431b4u;
    // NOP
label_3431b8:
    // 0x3431b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3431bc:
    if (ctx->pc == 0x3431BCu) {
        ctx->pc = 0x3431BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431B8u;
        // 0x3431bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431C0u;
        goto label_3431c0;
    }
    ctx->pc = 0x3431B8u;
    {
        const bool branch_taken_0x3431b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3431BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431B8u;
        // 0x3431bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3431b8) {
            ctx->pc = 0x3431C8u;
            goto label_3431c8;
        }
    }
    ctx->pc = 0x3431C0u;
label_3431c0:
    // 0x3431c0: 0xc0c0830  jal         func_3020C0
label_3431c4:
    if (ctx->pc == 0x3431C4u) {
        ctx->pc = 0x3431C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431C0u;
        // 0x3431c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431C8u;
        goto label_3431c8;
    }
    ctx->pc = 0x3431C0u;
    SET_GPR_U32(ctx, 31, 0x3431C8u);
    ctx->pc = 0x3431C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3431C0u;
    // 0x3431c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3431C0u, 0x3431C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3431C8u;
label_3431c8:
    // 0x3431c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3431c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3431cc:
    // 0x3431cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3431ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3431d0:
    // 0x3431d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3431d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3431d4:
    // 0x3431d4: 0x3e00008  jr          $ra
label_3431d8:
    if (ctx->pc == 0x3431D8u) {
        ctx->pc = 0x3431D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431D4u;
        // 0x3431d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3431DCu;
        goto label_fallthrough_0x3431d4;
    }
    ctx->pc = 0x3431D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3431D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431D4u;
        // 0x3431d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3431D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3431d4:
    ctx->pc = 0x3431DCu;
}
