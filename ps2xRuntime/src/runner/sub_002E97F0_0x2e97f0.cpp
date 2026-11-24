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

// Function: sub_002E97F0
// Address: 0x2e97f0 - 0x2ea1f8
void sub_002E97F0_0x2e97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E97F0_0x2e97f0");
#endif

    switch (ctx->pc) {
        case 0x2e9898u: goto label_2e9898;
        case 0x2e98bcu: goto label_2e98bc;
        case 0x2e98dcu: goto label_2e98dc;
        case 0x2e990cu: goto label_2e990c;
        case 0x2e9914u: goto label_2e9914;
        case 0x2e9928u: goto label_2e9928;
        case 0x2e9934u: goto label_2e9934;
        case 0x2e9948u: goto label_2e9948;
        case 0x2e9a08u: goto label_2e9a08;
        case 0x2e9a18u: goto label_2e9a18;
        case 0x2e9a28u: goto label_2e9a28;
        case 0x2e9a38u: goto label_2e9a38;
        case 0x2e9a44u: goto label_2e9a44;
        case 0x2e9a4cu: goto label_2e9a4c;
        case 0x2e9a60u: goto label_2e9a60;
        case 0x2e9aacu: goto label_2e9aac;
        case 0x2e9ae0u: goto label_2e9ae0;
        case 0x2e9ae8u: goto label_2e9ae8;
        case 0x2e9af0u: goto label_2e9af0;
        case 0x2e9b00u: goto label_2e9b00;
        case 0x2e9b08u: goto label_2e9b08;
        case 0x2e9b3cu: goto label_2e9b3c;
        case 0x2e9b50u: goto label_2e9b50;
        case 0x2e9c9cu: goto label_2e9c9c;
        case 0x2e9d40u: goto label_2e9d40;
        case 0x2e9d54u: goto label_2e9d54;
        case 0x2e9db4u: goto label_2e9db4;
        case 0x2e9dd4u: goto label_2e9dd4;
        case 0x2e9decu: goto label_2e9dec;
        case 0x2e9e04u: goto label_2e9e04;
        case 0x2e9f14u: goto label_2e9f14;
        case 0x2e9f4cu: goto label_2e9f4c;
        case 0x2e9f54u: goto label_2e9f54;
        case 0x2e9f6cu: goto label_2e9f6c;
        case 0x2e9f9cu: goto label_2e9f9c;
        case 0x2e9facu: goto label_2e9fac;
        case 0x2e9fb8u: goto label_2e9fb8;
        case 0x2e9fc0u: goto label_2e9fc0;
        case 0x2e9fd0u: goto label_2e9fd0;
        case 0x2ea100u: goto label_2ea100;
        case 0x2ea108u: goto label_2ea108;
        case 0x2ea11cu: goto label_2ea11c;
        case 0x2ea160u: goto label_2ea160;
        case 0x2ea17cu: goto label_2ea17c;
        case 0x2ea194u: goto label_2ea194;
        case 0x2ea1c4u: goto label_2ea1c4;
        case 0x2ea1e0u: goto label_2ea1e0;
        default: break;
    }

    ctx->pc = 0x2e97f0u;

    // 0x2e97f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e97f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e97f4: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x2e97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2e97f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e97f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e97fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e97fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e9800: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e9800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e9804: 0x80850232  lb          $a1, 0x232($a0)
    ctx->pc = 0x2e9804u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x2e9808: 0x10a30257  beq         $a1, $v1, . + 4 + (0x257 << 2)
    ctx->pc = 0x2E9808u;
    {
        const bool branch_taken_0x2e9808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9808u;
        // 0x2e980c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9808) {
            ctx->pc = 0x2EA168u;
            goto label_2ea168;
        }
    }
    ctx->pc = 0x2E9810u;
    // 0x2e9810: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2e9810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e9814: 0x10a20244  beq         $a1, $v0, . + 4 + (0x244 << 2)
    ctx->pc = 0x2E9814u;
    {
        const bool branch_taken_0x2e9814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9814u;
        // 0x2e9818: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9814) {
            ctx->pc = 0x2EA128u;
            goto label_2ea128;
        }
    }
    ctx->pc = 0x2E981Cu;
    // 0x2e981c: 0x10a20186  beq         $a1, $v0, . + 4 + (0x186 << 2)
    ctx->pc = 0x2E981Cu;
    {
        const bool branch_taken_0x2e981c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e981c) {
            ctx->pc = 0x2E9E38u;
            goto label_2e9e38;
        }
    }
    ctx->pc = 0x2E9824u;
    // 0x2e9824: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e9824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e9828: 0x10a2017f  beq         $a1, $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x2E9828u;
    {
        const bool branch_taken_0x2e9828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9828u;
        // 0x2e982c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9828) {
            ctx->pc = 0x2E9E28u;
            goto label_2e9e28;
        }
    }
    ctx->pc = 0x2E9830u;
    // 0x2e9830: 0x10a2016b  beq         $a1, $v0, . + 4 + (0x16B << 2)
    ctx->pc = 0x2E9830u;
    {
        const bool branch_taken_0x2e9830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9830) {
            ctx->pc = 0x2E9DE0u;
            goto label_2e9de0;
        }
    }
    ctx->pc = 0x2E9838u;
    // 0x2e9838: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e983c: 0x10a2014a  beq         $a1, $v0, . + 4 + (0x14A << 2)
    ctx->pc = 0x2E983Cu;
    {
        const bool branch_taken_0x2e983c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E983Cu;
        // 0x2e9840: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e983c) {
            ctx->pc = 0x2E9D68u;
            goto label_2e9d68;
        }
    }
    ctx->pc = 0x2E9844u;
    // 0x2e9844: 0x10a20140  beq         $a1, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x2E9844u;
    {
        const bool branch_taken_0x2e9844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9844) {
            ctx->pc = 0x2E9D48u;
            goto label_2e9d48;
        }
    }
    ctx->pc = 0x2E984Cu;
    // 0x2e984c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9850: 0x10a20089  beq         $a1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2E9850u;
    {
        const bool branch_taken_0x2e9850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9850u;
        // 0x2e9854: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9850) {
            ctx->pc = 0x2E9A78u;
            goto label_2e9a78;
        }
    }
    ctx->pc = 0x2E9858u;
    // 0x2e9858: 0x10a2007f  beq         $a1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2E9858u;
    {
        const bool branch_taken_0x2e9858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9858u;
        // 0x2e985c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9858) {
            ctx->pc = 0x2E9A58u;
            goto label_2e9a58;
        }
    }
    ctx->pc = 0x2E9860u;
    // 0x2e9860: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E9860u;
    {
        const bool branch_taken_0x2e9860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e9860) {
            ctx->pc = 0x2E98A8u;
            goto label_2e98a8;
        }
    }
    ctx->pc = 0x2E9868u;
    // 0x2e9868: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9868u;
    {
        const bool branch_taken_0x2e9868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9868) {
            ctx->pc = 0x2E9878u;
            goto label_2e9878;
        }
    }
    ctx->pc = 0x2E9870u;
    // 0x2e9870: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x2E9870u;
    {
        const bool branch_taken_0x2e9870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9870) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9878u;
label_2e9878:
    // 0x2e9878: 0xa2040232  sb          $a0, 0x232($s0)
    ctx->pc = 0x2e9878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e987c: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x2e987cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x2e9880: 0xa2000234  sb          $zero, 0x234($s0)
    ctx->pc = 0x2e9880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9884: 0x82020235  lb          $v0, 0x235($s0)
    ctx->pc = 0x2e9884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 565)));
    // 0x2e9888: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9888u;
    {
        const bool branch_taken_0x2e9888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9888) {
            ctx->pc = 0x2E9898u;
            goto label_2e9898;
        }
    }
    ctx->pc = 0x2E9890u;
    // 0x2e9890: 0xc0b9db0  jal         func_2E76C0
    ctx->pc = 0x2E9890u;
    SET_GPR_U32(ctx, 31, 0x2E9898u);
    ctx->pc = 0x2E76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E76C0u, 0x2E9890u, 0x2E9898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9898u;
label_2e9898:
    // 0x2e9898: 0x82020235  lb          $v0, 0x235($s0)
    ctx->pc = 0x2e9898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 565)));
    // 0x2e989c: 0x1440024a  bnez        $v0, . + 4 + (0x24A << 2)
    ctx->pc = 0x2E989Cu;
    {
        const bool branch_taken_0x2e989c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e989c) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E98A4u;
    // 0x2e98a4: 0x0  nop
    ctx->pc = 0x2e98a4u;
    // NOP
label_2e98a8:
    // 0x2e98a8: 0x82020235  lb          $v0, 0x235($s0)
    ctx->pc = 0x2e98a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 565)));
    // 0x2e98ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E98ACu;
    {
        const bool branch_taken_0x2e98ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e98ac) {
            ctx->pc = 0x2E98C8u;
            goto label_2e98c8;
        }
    }
    ctx->pc = 0x2E98B4u;
    // 0x2e98b4: 0xc0b9db4  jal         func_2E76D0
    ctx->pc = 0x2E98B4u;
    SET_GPR_U32(ctx, 31, 0x2E98BCu);
    ctx->pc = 0x2E76D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E76D0u, 0x2E98B4u, 0x2E98BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E98BCu;
label_2e98bc:
    // 0x2e98bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E98BCu;
    {
        const bool branch_taken_0x2e98bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e98bc) {
            ctx->pc = 0x2E98E8u;
            goto label_2e98e8;
        }
    }
    ctx->pc = 0x2E98C4u;
    // 0x2e98c4: 0x0  nop
    ctx->pc = 0x2e98c4u;
    // NOP
label_2e98c8:
    // 0x2e98c8: 0x82020235  lb          $v0, 0x235($s0)
    ctx->pc = 0x2e98c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 565)));
    // 0x2e98cc: 0x1440023e  bnez        $v0, . + 4 + (0x23E << 2)
    ctx->pc = 0x2E98CCu;
    {
        const bool branch_taken_0x2e98cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E98D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98CCu;
        // 0x2e98d0: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98cc) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E98D4u;
    // 0x2e98d4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x2E98D4u;
    SET_GPR_U32(ctx, 31, 0x2E98DCu);
    ctx->pc = 0x2E98D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E98D4u;
    // 0x2e98d8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x2E98D4u, 0x2E98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E98DCu;
label_2e98dc:
    // 0x2e98dc: 0x1440023a  bnez        $v0, . + 4 + (0x23A << 2)
    ctx->pc = 0x2E98DCu;
    {
        const bool branch_taken_0x2e98dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e98dc) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E98E4u;
    // 0x2e98e4: 0x0  nop
    ctx->pc = 0x2e98e4u;
    // NOP
label_2e98e8:
    // 0x2e98e8: 0x82020235  lb          $v0, 0x235($s0)
    ctx->pc = 0x2e98e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 565)));
    // 0x2e98ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E98ECu;
    {
        const bool branch_taken_0x2e98ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98ECu;
        // 0x2e98f0: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98ec) {
            ctx->pc = 0x2E9918u;
            goto label_2e9918;
        }
    }
    ctx->pc = 0x2E98F4u;
    // 0x2e98f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e98f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98f8: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2e98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2e98fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e98fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9904: 0xc063d30  jal         func_18F4C0
    ctx->pc = 0x2E9904u;
    SET_GPR_U32(ctx, 31, 0x2E990Cu);
    ctx->pc = 0x2E9908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9904u;
    // 0x2e9908: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4C0u, 0x2E9904u, 0x2E990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E990Cu;
label_2e990c:
    // 0x2e990c: 0xc0b9db0  jal         func_2E76C0
    ctx->pc = 0x2E990Cu;
    SET_GPR_U32(ctx, 31, 0x2E9914u);
    ctx->pc = 0x2E9910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E990Cu;
    // 0x2e9910: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E76C0u, 0x2E990Cu, 0x2E9914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9914u;
label_2e9914:
    // 0x2e9914: 0x0  nop
    ctx->pc = 0x2e9914u;
    // NOP
label_2e9918:
    // 0x2e9918: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2e9918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2e991c: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x2e991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x2e9920: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x2E9920u;
    SET_GPR_U32(ctx, 31, 0x2E9928u);
    ctx->pc = 0x2E9924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9920u;
    // 0x2e9924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x2E9920u, 0x2E9928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9928u;
label_2e9928:
    // 0x2e9928: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2e9928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2e992c: 0xc052260  jal         func_148980
    ctx->pc = 0x2E992Cu;
    SET_GPR_U32(ctx, 31, 0x2E9934u);
    ctx->pc = 0x2E9930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E992Cu;
    // 0x2e9930: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x2E992Cu, 0x2E9934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9934u;
label_2e9934:
    // 0x2e9934: 0x82020233  lb          $v0, 0x233($s0)
    ctx->pc = 0x2e9934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x2e9938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9938u;
    {
        const bool branch_taken_0x2e9938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9938u;
        // 0x2e993c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9938) {
            ctx->pc = 0x2E9948u;
            goto label_2e9948;
        }
    }
    ctx->pc = 0x2E9940u;
    // 0x2e9940: 0xc0ba2f8  jal         func_2E8BE0
    ctx->pc = 0x2E9940u;
    SET_GPR_U32(ctx, 31, 0x2E9948u);
    ctx->pc = 0x2E8BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8BE0u, 0x2E9940u, 0x2E9948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9948u;
label_2e9948:
    // 0x2e9948: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e9948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e994c: 0xa2020232  sb          $v0, 0x232($s0)
    ctx->pc = 0x2e994cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9950: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e9950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e9954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9958: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e995c: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x2e995cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x2e9960: 0x3c0b0ff0  lui         $t3, 0xFF0
    ctx->pc = 0x2e9960u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4080 << 16));
    // 0x2e9964: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x2e9964u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9968: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x2e9968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x2e996c: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x2e996cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9970: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9974: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x2e9974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x2e9978: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2e9978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2e997c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e997cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2e9980: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9984: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x2e9984u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x2e9988: 0x8c29cec0  lw          $t1, -0x3140($at)
    ctx->pc = 0x2e9988u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2e998c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e998cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9990: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x2e9990u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x2e9994: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x2e9994u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2e9998: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e999c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2e999cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2e99a0: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2e99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e99a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e99a8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e99a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e99ac: 0xac2acec4  sw          $t2, -0x313C($at)
    ctx->pc = 0x2e99acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2e99b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e99b4: 0xac29cec0  sw          $t1, -0x3140($at)
    ctx->pc = 0x2e99b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2e99b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e99bc: 0xac27ceb8  sw          $a3, -0x3148($at)
    ctx->pc = 0x2e99bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x2e99c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e99c4: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2e99c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2e99c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e99cc: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x2e99ccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e99d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e99d4: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x2e99d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x2e99d8: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2e99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2e99dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e99e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e99e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e99e4: 0xac27cebc  sw          $a3, -0x3144($at)
    ctx->pc = 0x2e99e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 7));
    // 0x2e99e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e99ec: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x2e99ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x2e99f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e99f4: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2e99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e99f8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2e99f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e99fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e99fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9a00: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x2E9A00u;
    SET_GPR_U32(ctx, 31, 0x2E9A08u);
    ctx->pc = 0x2E9A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A00u;
    // 0x2e9a04: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x2E9A00u, 0x2E9A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A08u;
label_2e9a08:
    // 0x2e9a08: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e9a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e9a0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e9a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2e9a10: 0xc04ca14  jal         func_132850
    ctx->pc = 0x2E9A10u;
    SET_GPR_U32(ctx, 31, 0x2E9A18u);
    ctx->pc = 0x2E9A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A10u;
    // 0x2e9a14: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x2E9A10u, 0x2E9A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A18u;
label_2e9a18:
    // 0x2e9a18: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e9a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e9a1c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e9a20: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x2E9A20u;
    SET_GPR_U32(ctx, 31, 0x2E9A28u);
    ctx->pc = 0x2E9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A20u;
    // 0x2e9a24: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x2E9A20u, 0x2E9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A28u;
label_2e9a28:
    // 0x2e9a28: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e9a2c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e9a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e9a30: 0xc04ca14  jal         func_132850
    ctx->pc = 0x2E9A30u;
    SET_GPR_U32(ctx, 31, 0x2E9A38u);
    ctx->pc = 0x2E9A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A30u;
    // 0x2e9a34: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x2E9A30u, 0x2E9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A38u;
label_2e9a38:
    // 0x2e9a38: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x2e9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x2e9a3c: 0xc054d98  jal         func_153660
    ctx->pc = 0x2E9A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E9A44u);
    ctx->pc = 0x2E9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A3Cu;
    // 0x2e9a40: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153660u, 0x2E9A3Cu, 0x2E9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A44u;
label_2e9a44:
    // 0x2e9a44: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x2E9A44u;
    SET_GPR_U32(ctx, 31, 0x2E9A4Cu);
    ctx->pc = 0x2E9A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A44u;
    // 0x2e9a48: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x2E9A44u, 0x2E9A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A4Cu;
label_2e9a4c:
    // 0x2e9a4c: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x2E9A4Cu;
    {
        const bool branch_taken_0x2e9a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a4c) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9A54u;
    // 0x2e9a54: 0x0  nop
    ctx->pc = 0x2e9a54u;
    // NOP
label_2e9a58:
    // 0x2e9a58: 0xc05551c  jal         func_155470
    ctx->pc = 0x2E9A58u;
    SET_GPR_U32(ctx, 31, 0x2E9A60u);
    ctx->pc = 0x2E9A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A58u;
    // 0x2e9a5c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x2E9A58u, 0x2E9A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9A60u;
label_2e9a60:
    // 0x2e9a60: 0x144001d9  bnez        $v0, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x2E9A60u;
    {
        const bool branch_taken_0x2e9a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a60) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9A68u;
    // 0x2e9a68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9a6c: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x2E9A6Cu;
    {
        const bool branch_taken_0x2e9a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A6Cu;
        // 0x2e9a70: 0xa2020232  sb          $v0, 0x232($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a6c) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9A74u;
    // 0x2e9a74: 0x0  nop
    ctx->pc = 0x2e9a74u;
    // NOP
label_2e9a78:
    // 0x2e9a78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9a7c: 0x9031fc8d  lbu         $s1, -0x373($at)
    ctx->pc = 0x2e9a7cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x2e9a80: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9A80u;
    {
        const bool branch_taken_0x2e9a80 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2E9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A80u;
        // 0x2e9a84: 0x2a210009  slti        $at, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a80) {
            ctx->pc = 0x2E9A90u;
            goto label_2e9a90;
        }
    }
    ctx->pc = 0x2E9A88u;
    // 0x2e9a88: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9A88u;
    {
        const bool branch_taken_0x2e9a88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a88) {
            ctx->pc = 0x2E9A98u;
            goto label_2e9a98;
        }
    }
    ctx->pc = 0x2E9A90u;
label_2e9a90:
    // 0x2e9a90: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2e9a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9a94: 0x0  nop
    ctx->pc = 0x2e9a94u;
    // NOP
label_2e9a98:
    // 0x2e9a98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9a9c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x2e9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x2e9aa0: 0xa2020232  sb          $v0, 0x232($s0)
    ctx->pc = 0x2e9aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9aa4: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x2E9AA4u;
    SET_GPR_U32(ctx, 31, 0x2E9AACu);
    ctx->pc = 0x2E9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AA4u;
    // 0x2e9aa8: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x2E9AA4u, 0x2E9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AACu;
label_2e9aac:
    // 0x2e9aac: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x2e9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e9ab0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2e9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2e9ab4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2e9ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9ab8: 0x24427400  addiu       $v0, $v0, 0x7400
    ctx->pc = 0x2e9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29696));
    // 0x2e9abc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e9ac0: 0x82030233  lb          $v1, 0x233($s0)
    ctx->pc = 0x2e9ac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x2e9ac4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e9ac8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2e9ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2e9acc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e9accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e9ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9ad4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e9ad4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e9ad8: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x2E9AD8u;
    SET_GPR_U32(ctx, 31, 0x2E9AE0u);
    ctx->pc = 0x2E9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AD8u;
    // 0x2e9adc: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x2E9AD8u, 0x2E9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AE0u;
label_2e9ae0:
    // 0x2e9ae0: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x2E9AE0u;
    SET_GPR_U32(ctx, 31, 0x2E9AE8u);
    ctx->pc = 0x2E9AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AE0u;
    // 0x2e9ae4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x2E9AE0u, 0x2E9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9AE8u;
label_2e9ae8:
    // 0x2e9ae8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E9AE8u;
    {
        const bool branch_taken_0x2e9ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ae8) {
            ctx->pc = 0x2E9B10u;
            goto label_2e9b10;
        }
    }
    ctx->pc = 0x2E9AF0u;
label_2e9af0:
    // 0x2e9af0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e9af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e9af4: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x2e9af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x2e9af8: 0xc04c918  jal         func_132460
    ctx->pc = 0x2E9AF8u;
    SET_GPR_U32(ctx, 31, 0x2E9B00u);
    ctx->pc = 0x2E9AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AF8u;
    // 0x2e9afc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x2E9AF8u, 0x2E9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B00u;
label_2e9b00:
    // 0x2e9b00: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x2E9B00u;
    SET_GPR_U32(ctx, 31, 0x2E9B08u);
    ctx->pc = 0x2E9B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B00u;
    // 0x2e9b04: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x2E9B00u, 0x2E9B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B08u;
label_2e9b08:
    // 0x2e9b08: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E9B08u;
    {
        const bool branch_taken_0x2e9b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b08) {
            ctx->pc = 0x2E9AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9af0;
        }
    }
    ctx->pc = 0x2E9B10u;
label_2e9b10:
    // 0x2e9b10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9b14: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2e9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2e9b18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e9b1c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x2e9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x2e9b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b24: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x2e9b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x2e9b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b2c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9b30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9b34: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x2E9B34u;
    SET_GPR_U32(ctx, 31, 0x2E9B3Cu);
    ctx->pc = 0x2E9B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B34u;
    // 0x2e9b38: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x2E9B34u, 0x2E9B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B3Cu;
label_2e9b3c:
    // 0x2e9b3c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e9b40: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e9b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2e9b44: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2e9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2e9b48: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x2E9B48u;
    SET_GPR_U32(ctx, 31, 0x2E9B50u);
    ctx->pc = 0x2E9B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B48u;
    // 0x2e9b4c: 0x2406040e  addiu       $a2, $zero, 0x40E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x2E9B48u, 0x2E9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B50u;
label_2e9b50:
    // 0x2e9b50: 0xae020294  sw          $v0, 0x294($s0)
    ctx->pc = 0x2e9b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
    // 0x2e9b54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9b58: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x2e9b58u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e9b5c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2e9b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2e9b60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e9b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b68: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2e9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2e9b6c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9b70: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x2e9b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2e9b74: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x2e9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9b78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9b7c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2e9b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2e9b80: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2e9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2e9b84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9b88: 0xac26cebc  sw          $a2, -0x3144($at)
    ctx->pc = 0x2e9b88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2e9b8c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9b90: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x2e9b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2e9b94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9b98: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x2e9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9b9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9ba0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9ba4: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2e9ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2e9ba8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2e9ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2e9bac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9bb0: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x2e9bb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2e9bb4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9bb8: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2e9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2e9bbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9bc0: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x2e9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9bc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9bc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9bcc: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2e9bccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2e9bd0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2e9bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2e9bd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9bd8: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x2e9bd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2e9bdc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9be0: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2e9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2e9be4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9be8: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x2e9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9bec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9bf0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9bf4: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2e9bf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2e9bf8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2e9bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2e9bfc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c00: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x2e9c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2e9c04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c08: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2e9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2e9c0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c10: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x2e9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9c14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9c18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c1c: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2e9c1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2e9c20: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2e9c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2e9c24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c28: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x2e9c28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2e9c2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c30: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2e9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2e9c34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c38: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x2e9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9c3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9c40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c44: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2e9c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2e9c48: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2e9c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2e9c4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c50: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x2e9c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2e9c54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c58: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2e9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2e9c5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c60: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x2e9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9c64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9c68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c6c: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2e9c6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2e9c70: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e9c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2e9c74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c78: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x2e9c78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2e9c7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c80: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2e9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2e9c84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c88: 0x8c22cec4  lw          $v0, -0x313C($at)
    ctx->pc = 0x2e9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9c8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e9c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9c90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9c94: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x2E9C94u;
    SET_GPR_U32(ctx, 31, 0x2E9C9Cu);
    ctx->pc = 0x2E9C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C94u;
    // 0x2e9c98: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x2E9C94u, 0x2E9C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C9Cu;
label_2e9c9c:
    // 0x2e9c9c: 0x82030233  lb          $v1, 0x233($s0)
    ctx->pc = 0x2e9c9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x2e9ca0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9ca4: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E9CA4u;
    {
        const bool branch_taken_0x2e9ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CA4u;
        // 0x2e9ca8: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ca4) {
            ctx->pc = 0x2E9D18u;
            goto label_2e9d18;
        }
    }
    ctx->pc = 0x2E9CACu;
    // 0x2e9cac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e9cb0: 0xa2030232  sb          $v1, 0x232($s0)
    ctx->pc = 0x2e9cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9cb4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e9cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e9cb8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2e9cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9cbc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2e9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2e9cc0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2e9cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2e9cc4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e9cc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e9cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cd0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2e9cd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2e9cd4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e9cd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e9cd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e9cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9cdc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9CDCu;
    {
        const bool branch_taken_0x2e9cdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9cdc) {
            ctx->pc = 0x2E9CF4u;
            goto label_2e9cf4;
        }
    }
    ctx->pc = 0x2E9CE4u;
    // 0x2e9ce4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9ce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e9ce8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2e9ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e9cec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9CECu;
    {
        const bool branch_taken_0x2e9cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CECu;
        // 0x2e9cf0: 0xaf838abc  sw          $v1, -0x7544($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9cec) {
            ctx->pc = 0x2E9D10u;
            goto label_2e9d10;
        }
    }
    ctx->pc = 0x2E9CF4u;
label_2e9cf4:
    // 0x2e9cf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e9cf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e9cf8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e9cfc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9cfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e9d00: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2e9d00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e9d04: 0x0  nop
    ctx->pc = 0x2e9d04u;
    // NOP
    // 0x2e9d08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9d0c: 0xaf838abc  sw          $v1, -0x7544($gp)
    ctx->pc = 0x2e9d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937276), GPR_U32(ctx, 3));
label_2e9d10:
    // 0x2e9d10: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x2E9D10u;
    {
        const bool branch_taken_0x2e9d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d10) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9D18u;
label_2e9d18:
    // 0x2e9d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9d1c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e9d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e9d20: 0xa2020234  sb          $v0, 0x234($s0)
    ctx->pc = 0x2e9d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9d24: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2e9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2e9d28: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2e9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e9d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d38: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2E9D38u;
    SET_GPR_U32(ctx, 31, 0x2E9D40u);
    ctx->pc = 0x2E9D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D38u;
    // 0x2e9d3c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2E9D38u, 0x2E9D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D40u;
label_2e9d40:
    // 0x2e9d40: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x2E9D40u;
    {
        const bool branch_taken_0x2e9d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d40) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9D48u;
label_2e9d48:
    // 0x2e9d48: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e9d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e9d4c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x2E9D4Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D54u);
    ctx->pc = 0x2E9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D4Cu;
    // 0x2e9d50: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x2E9D4Cu, 0x2E9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D54u;
label_2e9d54:
    // 0x2e9d54: 0x1440011c  bnez        $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x2E9D54u;
    {
        const bool branch_taken_0x2e9d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d54) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9D5Cu;
    // 0x2e9d5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9d60: 0xa2020232  sb          $v0, 0x232($s0)
    ctx->pc = 0x2e9d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9d64: 0x0  nop
    ctx->pc = 0x2e9d64u;
    // NOP
label_2e9d68:
    // 0x2e9d68: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x2e9d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x2e9d6c: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x2e9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x2e9d70: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x2e9d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x2e9d74: 0x10400114  beqz        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x2E9D74u;
    {
        const bool branch_taken_0x2e9d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D74u;
        // 0x2e9d78: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d74) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9D7Cu;
    // 0x2e9d7c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e9d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e9d80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9d84: 0xa2030232  sb          $v1, 0x232($s0)
    ctx->pc = 0x2e9d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9d88: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2e9d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2e9d8c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2e9d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2e9d90: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x2e9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x2e9d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d98: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x2e9d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x2e9d9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9da0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9da4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9da4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9da8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e9da8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9dac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2E9DACu;
    SET_GPR_U32(ctx, 31, 0x2E9DB4u);
    ctx->pc = 0x2E9DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DACu;
    // 0x2e9db0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2E9DACu, 0x2E9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DB4u;
label_2e9db4:
    // 0x2e9db4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e9db8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2e9db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e9dbc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2e9dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2e9dc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9dc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9dc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9dc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9dcc: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x2E9DCCu;
    SET_GPR_U32(ctx, 31, 0x2E9DD4u);
    ctx->pc = 0x2E9DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DCCu;
    // 0x2e9dd0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x2E9DCCu, 0x2E9DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DD4u;
label_2e9dd4:
    // 0x2e9dd4: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x2E9DD4u;
    {
        const bool branch_taken_0x2e9dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9dd4) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9DDCu;
    // 0x2e9ddc: 0x0  nop
    ctx->pc = 0x2e9ddcu;
    // NOP
label_2e9de0:
    // 0x2e9de0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e9de4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x2E9DE4u;
    SET_GPR_U32(ctx, 31, 0x2E9DECu);
    ctx->pc = 0x2E9DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DE4u;
    // 0x2e9de8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x2E9DE4u, 0x2E9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DECu;
label_2e9dec:
    // 0x2e9dec: 0x144000f6  bnez        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2E9DECu;
    {
        const bool branch_taken_0x2e9dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DECu;
        // 0x2e9df0: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9dec) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9DF4u;
    // 0x2e9df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9df8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2e9df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2e9dfc: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x2E9DFCu;
    SET_GPR_U32(ctx, 31, 0x2E9E04u);
    ctx->pc = 0x2E9E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DFCu;
    // 0x2e9e00: 0xa2000234  sb          $zero, 0x234($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x2E9DFCu, 0x2E9E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9E04u;
label_2e9e04:
    // 0x2e9e04: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2e9e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2e9e08: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x2e9e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x2e9e0c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2e9e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x2e9e10: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2e9e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2e9e14: 0xa022feea  sb          $v0, -0x116($at)
    ctx->pc = 0x2e9e14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x2e9e18: 0x82020232  lb          $v0, 0x232($s0)
    ctx->pc = 0x2e9e18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x2e9e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e9e20: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2E9E20u;
    {
        const bool branch_taken_0x2e9e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E20u;
        // 0x2e9e24: 0xa2020232  sb          $v0, 0x232($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e20) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9E28u;
label_2e9e28:
    // 0x2e9e28: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2e9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e9e2c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x2E9E2Cu;
    {
        const bool branch_taken_0x2e9e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9E2Cu;
        // 0x2e9e30: 0xa2020232  sb          $v0, 0x232($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e2c) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2E9E34u;
    // 0x2e9e34: 0x0  nop
    ctx->pc = 0x2e9e34u;
    // NOP
label_2e9e38:
    // 0x2e9e38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9e3c: 0x8c27ceb8  lw          $a3, -0x3148($at)
    ctx->pc = 0x2e9e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2e9e40: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2e9e44: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x2e9e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9e48: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x2e9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2e9e4c: 0x3c02f00f  lui         $v0, 0xF00F
    ctx->pc = 0x2e9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61455 << 16));
    // 0x2e9e50: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e9e54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9e58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9e5c: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x2e9e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2e9e60: 0x8c24cec4  lw          $a0, -0x313C($at)
    ctx->pc = 0x2e9e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x2e9e64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9e68: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2e9e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2e9e6c: 0x8c2bcec8  lw          $t3, -0x3138($at)
    ctx->pc = 0x2e9e6cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x2e9e70: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2e9e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2e9e74: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2e9e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2e9e78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9e7c: 0x8c2acecc  lw          $t2, -0x3134($at)
    ctx->pc = 0x2e9e7cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2e9e80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9e84: 0x8c29ced0  lw          $t1, -0x3130($at)
    ctx->pc = 0x2e9e84u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2e9e88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9e8c: 0x8c28ced8  lw          $t0, -0x3128($at)
    ctx->pc = 0x2e9e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2e9e90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9e94: 0xac26ceb8  sw          $a2, -0x3148($at)
    ctx->pc = 0x2e9e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x2e9e98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9e9c: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x2e9e9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2e9ea0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9ea4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x2e9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x2e9ea8: 0x8c2ccec4  lw          $t4, -0x313C($at)
    ctx->pc = 0x2e9ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2e9eac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9eb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9eb4: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x2e9eb4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x2e9eb8: 0x8c27cedc  lw          $a3, -0x3124($at)
    ctx->pc = 0x2e9eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x2e9ebc: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x2e9ebcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x2e9ec0: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x2e9ec0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x2e9ec4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9ec8: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x2e9ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e9ecc: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2e9eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2e9ed0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9ed4: 0xac25cebc  sw          $a1, -0x3144($at)
    ctx->pc = 0x2e9ed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2e9ed8: 0x1093025  or          $a2, $t0, $t1
    ctx->pc = 0x2e9ed8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2e9edc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9ee0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x2e9ee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2e9ee4: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x2e9ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e9ee8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9eec: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e9eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e9ef0: 0xac26cec0  sw          $a2, -0x3140($at)
    ctx->pc = 0x2e9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 6));
    // 0x2e9ef4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9ef8: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2e9ef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2e9efc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9f00: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2e9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e9f04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e9f08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9f0c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x2E9F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E9F14u);
    ctx->pc = 0x2E9F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F0Cu;
    // 0x2e9f10: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x2E9F0Cu, 0x2E9F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F14u;
label_2e9f14:
    // 0x2e9f14: 0x82030233  lb          $v1, 0x233($s0)
    ctx->pc = 0x2e9f14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x2e9f18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e9f1c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E9F1Cu;
    {
        const bool branch_taken_0x2e9f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F1Cu;
        // 0x2e9f20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f1c) {
            ctx->pc = 0x2E9F60u;
            goto label_2e9f60;
        }
    }
    ctx->pc = 0x2E9F24u;
    // 0x2e9f24: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E9F24u;
    {
        const bool branch_taken_0x2e9f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9f24) {
            ctx->pc = 0x2E9F60u;
            goto label_2e9f60;
        }
    }
    ctx->pc = 0x2E9F2Cu;
    // 0x2e9f2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9F2Cu;
    {
        const bool branch_taken_0x2e9f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f2c) {
            ctx->pc = 0x2E9F40u;
            goto label_2e9f40;
        }
    }
    ctx->pc = 0x2E9F34u;
    // 0x2e9f34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E9F34u;
    {
        const bool branch_taken_0x2e9f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f34) {
            ctx->pc = 0x2E9F70u;
            goto label_2e9f70;
        }
    }
    ctx->pc = 0x2E9F3Cu;
    // 0x2e9f3c: 0x0  nop
    ctx->pc = 0x2e9f3cu;
    // NOP
label_2e9f40:
    // 0x2e9f40: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2e9f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2e9f44: 0xc095128  jal         func_2544A0
    ctx->pc = 0x2E9F44u;
    SET_GPR_U32(ctx, 31, 0x2E9F4Cu);
    ctx->pc = 0x2E9F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F44u;
    // 0x2e9f48: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2E9F44u, 0x2E9F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F4Cu;
label_2e9f4c:
    // 0x2e9f4c: 0xc0ba2f8  jal         func_2E8BE0
    ctx->pc = 0x2E9F4Cu;
    SET_GPR_U32(ctx, 31, 0x2E9F54u);
    ctx->pc = 0x2E9F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F4Cu;
    // 0x2e9f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8BE0u, 0x2E9F4Cu, 0x2E9F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F54u;
label_2e9f54:
    // 0x2e9f54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9F54u;
    {
        const bool branch_taken_0x2e9f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9f54) {
            ctx->pc = 0x2E9F70u;
            goto label_2e9f70;
        }
    }
    ctx->pc = 0x2E9F5Cu;
    // 0x2e9f5c: 0x0  nop
    ctx->pc = 0x2e9f5cu;
    // NOP
label_2e9f60:
    // 0x2e9f60: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2e9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2e9f64: 0xc095128  jal         func_2544A0
    ctx->pc = 0x2E9F64u;
    SET_GPR_U32(ctx, 31, 0x2E9F6Cu);
    ctx->pc = 0x2E9F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F64u;
    // 0x2e9f68: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2E9F64u, 0x2E9F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F6Cu;
label_2e9f6c:
    // 0x2e9f6c: 0x0  nop
    ctx->pc = 0x2e9f6cu;
    // NOP
label_2e9f70:
    // 0x2e9f70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9f74: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2e9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2e9f78: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x2e9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x2e9f7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9f80: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e9f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e9f84: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2e9f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2e9f88: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e9f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2e9f8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e9f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e9f90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9f94: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x2E9F94u;
    SET_GPR_U32(ctx, 31, 0x2E9F9Cu);
    ctx->pc = 0x2E9F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F94u;
    // 0x2e9f98: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x2E9F94u, 0x2E9F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F9Cu;
label_2e9f9c:
    // 0x2e9f9c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e9f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e9fa0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e9fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e9fa4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x2E9FA4u;
    SET_GPR_U32(ctx, 31, 0x2E9FACu);
    ctx->pc = 0x2E9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FA4u;
    // 0x2e9fa8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x2E9FA4u, 0x2E9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FACu;
label_2e9fac:
    // 0x2e9fac: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x2e9facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x2e9fb0: 0xc054ddc  jal         func_153770
    ctx->pc = 0x2E9FB0u;
    SET_GPR_U32(ctx, 31, 0x2E9FB8u);
    ctx->pc = 0x2E9FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FB0u;
    // 0x2e9fb4: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153770u, 0x2E9FB0u, 0x2E9FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FB8u;
label_2e9fb8:
    // 0x2e9fb8: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x2E9FB8u;
    SET_GPR_U32(ctx, 31, 0x2E9FC0u);
    ctx->pc = 0x2E9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FB8u;
    // 0x2e9fbc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x2E9FB8u, 0x2E9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FC0u;
label_2e9fc0:
    // 0x2e9fc0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e9fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e9fc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9fc8: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2E9FC8u;
    SET_GPR_U32(ctx, 31, 0x2E9FD0u);
    ctx->pc = 0x2E9FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FC8u;
    // 0x2e9fcc: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2E9FC8u, 0x2E9FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FD0u;
label_2e9fd0:
    // 0x2e9fd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9fd4: 0x2407f7ff  addiu       $a3, $zero, -0x801
    ctx->pc = 0x2e9fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2e9fd8: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2e9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e9fdc: 0x240dfbff  addiu       $t5, $zero, -0x401
    ctx->pc = 0x2e9fdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x2e9fe0: 0x240cfdff  addiu       $t4, $zero, -0x201
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2e9fe4: 0x240bff7f  addiu       $t3, $zero, -0x81
    ctx->pc = 0x2e9fe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2e9fe8: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x2e9fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2e9fec: 0x2409ffdf  addiu       $t1, $zero, -0x21
    ctx->pc = 0x2e9fecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2e9ff0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e9ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e9ff4: 0x2707c  dsll32      $t6, $v0, 1
    ctx->pc = 0x2e9ff4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 1));
    // 0x2e9ff8: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x2e9ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x2e9ffc: 0xe707e  dsrl32      $t6, $t6, 1
    ctx->pc = 0x2e9ffcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 1));
    // 0x2ea000: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea004: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x2ea004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x2ea008: 0x8c26cec8  lw          $a2, -0x3138($at)
    ctx->pc = 0x2ea008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x2ea00c: 0x2408ffef  addiu       $t0, $zero, -0x11
    ctx->pc = 0x2ea00cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2ea010: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea014: 0x8c25cecc  lw          $a1, -0x3134($at)
    ctx->pc = 0x2ea014u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2ea018: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea01c: 0x8c24ced0  lw          $a0, -0x3130($at)
    ctx->pc = 0x2ea01cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2ea020: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea024: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x2ea024u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2ea028: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea02c: 0x8c22cedc  lw          $v0, -0x3124($at)
    ctx->pc = 0x2ea02cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x2ea030: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea034: 0xac2ecebc  sw          $t6, -0x3144($at)
    ctx->pc = 0x2ea034u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2ea038: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea03c: 0xac27cec4  sw          $a3, -0x313C($at)
    ctx->pc = 0x2ea03cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2ea040: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ea044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea048: 0x8c2ecec4  lw          $t6, -0x313C($at)
    ctx->pc = 0x2ea048u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2ea04c: 0x1cd6824  and         $t5, $t6, $t5
    ctx->pc = 0x2ea04cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x2ea050: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea054: 0xac2dcec4  sw          $t5, -0x313C($at)
    ctx->pc = 0x2ea054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2ea058: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea05c: 0x8c2dcec4  lw          $t5, -0x313C($at)
    ctx->pc = 0x2ea05cu;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2ea060: 0x1ac6024  and         $t4, $t5, $t4
    ctx->pc = 0x2ea060u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x2ea064: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea068: 0xac2ccec4  sw          $t4, -0x313C($at)
    ctx->pc = 0x2ea068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2ea06c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea070: 0x8c2ccec4  lw          $t4, -0x313C($at)
    ctx->pc = 0x2ea070u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2ea074: 0x18b5824  and         $t3, $t4, $t3
    ctx->pc = 0x2ea074u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x2ea078: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea07c: 0xac2bcec4  sw          $t3, -0x313C($at)
    ctx->pc = 0x2ea07cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2ea080: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea084: 0x8c2bcec4  lw          $t3, -0x313C($at)
    ctx->pc = 0x2ea084u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2ea088: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x2ea088u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x2ea08c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea090: 0xac2acec4  sw          $t2, -0x313C($at)
    ctx->pc = 0x2ea090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2ea094: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea098: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x2ea098u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2ea09c: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x2ea09cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x2ea0a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea0a4: 0xac29cec4  sw          $t1, -0x313C($at)
    ctx->pc = 0x2ea0a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2ea0a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea0ac: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x2ea0acu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2ea0b0: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x2ea0b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x2ea0b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea0b8: 0xac28cec4  sw          $t0, -0x313C($at)
    ctx->pc = 0x2ea0b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x2ea0bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea0c0: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x2ea0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2ea0c4: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x2ea0c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x2ea0c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea0cc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2ea0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2ea0d0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2ea0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2ea0d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ea0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ea0d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ea0dc: 0xac22cec0  sw          $v0, -0x3140($at)
    ctx->pc = 0x2ea0dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2ea0e0: 0x82030233  lb          $v1, 0x233($s0)
    ctx->pc = 0x2ea0e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x2ea0e4: 0x10670004  beq         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA0E4u;
    {
        const bool branch_taken_0x2ea0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2EA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0E4u;
        // 0x2ea0e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0e4) {
            ctx->pc = 0x2EA0F8u;
            goto label_2ea0f8;
        }
    }
    ctx->pc = 0x2EA0ECu;
    // 0x2ea0ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA0ECu;
    {
        const bool branch_taken_0x2ea0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea0ec) {
            ctx->pc = 0x2EA108u;
            goto label_2ea108;
        }
    }
    ctx->pc = 0x2EA0F4u;
    // 0x2ea0f4: 0x0  nop
    ctx->pc = 0x2ea0f4u;
    // NOP
label_2ea0f8:
    // 0x2ea0f8: 0xc09cfd8  jal         func_273F60
    ctx->pc = 0x2EA0F8u;
    SET_GPR_U32(ctx, 31, 0x2EA100u);
    ctx->pc = 0x273F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273F60u, 0x2EA0F8u, 0x2EA100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA100u;
label_2ea100:
    // 0x2ea100: 0xc0bb10c  jal         func_2EC430
    ctx->pc = 0x2EA100u;
    SET_GPR_U32(ctx, 31, 0x2EA108u);
    ctx->pc = 0x2EC430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC430u, 0x2EA100u, 0x2EA108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA108u;
label_2ea108:
    // 0x2ea108: 0x82020233  lb          $v0, 0x233($s0)
    ctx->pc = 0x2ea108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x2ea10c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2EA10Cu;
    {
        const bool branch_taken_0x2ea10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA10Cu;
        // 0x2ea110: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea10c) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2EA114u;
    // 0x2ea114: 0xc0d0428  jal         func_3410A0
    ctx->pc = 0x2EA114u;
    SET_GPR_U32(ctx, 31, 0x2EA11Cu);
    ctx->pc = 0x2EA118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA114u;
    // 0x2ea118: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410A0u, 0x2EA114u, 0x2EA11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA11Cu;
label_2ea11c:
    // 0x2ea11c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2EA11Cu;
    {
        const bool branch_taken_0x2ea11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea11c) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2EA124u;
    // 0x2ea124: 0x0  nop
    ctx->pc = 0x2ea124u;
    // NOP
label_2ea128:
    // 0x2ea128: 0x8f828abc  lw          $v0, -0x7544($gp)
    ctx->pc = 0x2ea128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937276)));
    // 0x2ea12c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ea12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ea130: 0x4410025  bgez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2EA130u;
    {
        const bool branch_taken_0x2ea130 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2EA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA130u;
        // 0x2ea134: 0xaf828abc  sw          $v0, -0x7544($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea130) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2EA138u;
    // 0x2ea138: 0xa2030232  sb          $v1, 0x232($s0)
    ctx->pc = 0x2ea138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea13c: 0x240619ea  addiu       $a2, $zero, 0x19EA
    ctx->pc = 0x2ea13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6634));
    // 0x2ea140: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2ea140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2ea144: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ea144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ea148: 0xac2640b4  sw          $a2, 0x40B4($at)
    ctx->pc = 0x2ea148u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x2ea14c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x2ea14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x2ea150: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2ea150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2ea154: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x2ea154u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x2ea158: 0xc0ce400  jal         func_339000
    ctx->pc = 0x2EA158u;
    SET_GPR_U32(ctx, 31, 0x2EA160u);
    ctx->pc = 0x2EA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA158u;
    // 0x2ea15c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339000u, 0x2EA158u, 0x2EA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA160u;
label_2ea160:
    // 0x2ea160: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2EA160u;
    {
        const bool branch_taken_0x2ea160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea160) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2EA168u;
label_2ea168:
    // 0x2ea168: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2ea168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2ea16c: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x2ea16cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x2ea170: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ea170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ea174: 0xc0ce31c  jal         func_338C70
    ctx->pc = 0x2EA174u;
    SET_GPR_U32(ctx, 31, 0x2EA17Cu);
    ctx->pc = 0x2EA178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA174u;
    // 0x2ea178: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x2EA174u, 0x2EA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA17Cu;
label_2ea17c:
    // 0x2ea17c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EA17Cu;
    {
        const bool branch_taken_0x2ea17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA17Cu;
        // 0x2ea180: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea17c) {
            ctx->pc = 0x2EA1C8u;
            goto label_2ea1c8;
        }
    }
    ctx->pc = 0x2EA184u;
    // 0x2ea184: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ea184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ea188: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x2ea188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16568)));
    // 0x2ea18c: 0xc0ce3f8  jal         func_338FE0
    ctx->pc = 0x2EA18Cu;
    SET_GPR_U32(ctx, 31, 0x2EA194u);
    ctx->pc = 0x2EA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA18Cu;
    // 0x2ea190: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FE0u, 0x2EA18Cu, 0x2EA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA194u;
label_2ea194:
    // 0x2ea194: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ea194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ea198: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2ea198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2ea19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea1a0: 0xa2030232  sb          $v1, 0x232($s0)
    ctx->pc = 0x2ea1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea1a4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2ea1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2ea1a8: 0xa2020234  sb          $v0, 0x234($s0)
    ctx->pc = 0x2ea1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ea1ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ea1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ea1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea1b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ea1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea1b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea1b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea1bc: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2EA1BCu;
    SET_GPR_U32(ctx, 31, 0x2EA1C4u);
    ctx->pc = 0x2EA1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1BCu;
    // 0x2ea1c0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2EA1BCu, 0x2EA1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1C4u;
label_2ea1c4:
    // 0x2ea1c4: 0x0  nop
    ctx->pc = 0x2ea1c4u;
    // NOP
label_2ea1c8:
    // 0x2ea1c8: 0x82020234  lb          $v0, 0x234($s0)
    ctx->pc = 0x2ea1c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x2ea1cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA1CCu;
    {
        const bool branch_taken_0x2ea1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea1cc) {
            ctx->pc = 0x2EA1E0u;
            goto label_2ea1e0;
        }
    }
    ctx->pc = 0x2EA1D4u;
    // 0x2ea1d4: 0x82050233  lb          $a1, 0x233($s0)
    ctx->pc = 0x2ea1d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x2ea1d8: 0xc0ba880  jal         func_2EA200
    ctx->pc = 0x2EA1D8u;
    SET_GPR_U32(ctx, 31, 0x2EA1E0u);
    ctx->pc = 0x2EA1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1D8u;
    // 0x2ea1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA200u, 0x2EA1D8u, 0x2EA1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA1E0u;
label_2ea1e0:
    // 0x2ea1e0: 0x8e02022c  lw          $v0, 0x22C($s0)
    ctx->pc = 0x2ea1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x2ea1e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ea1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea1e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ea1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea1ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ea1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1F0u;
        // 0x2ea1f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA1F8u;
}
