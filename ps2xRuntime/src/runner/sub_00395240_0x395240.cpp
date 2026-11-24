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

// Function: sub_00395240
// Address: 0x395240 - 0x395310
void sub_00395240_0x395240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395240_0x395240");
#endif

    switch (ctx->pc) {
        case 0x395240u: goto label_395240;
        case 0x395244u: goto label_395244;
        case 0x395248u: goto label_395248;
        case 0x39524cu: goto label_39524c;
        case 0x395250u: goto label_395250;
        case 0x395254u: goto label_395254;
        case 0x395258u: goto label_395258;
        case 0x39525cu: goto label_39525c;
        case 0x395260u: goto label_395260;
        case 0x395264u: goto label_395264;
        case 0x395268u: goto label_395268;
        case 0x39526cu: goto label_39526c;
        case 0x395270u: goto label_395270;
        case 0x395274u: goto label_395274;
        case 0x395278u: goto label_395278;
        case 0x39527cu: goto label_39527c;
        case 0x395280u: goto label_395280;
        case 0x395284u: goto label_395284;
        case 0x395288u: goto label_395288;
        case 0x39528cu: goto label_39528c;
        case 0x395290u: goto label_395290;
        case 0x395294u: goto label_395294;
        case 0x395298u: goto label_395298;
        case 0x39529cu: goto label_39529c;
        case 0x3952a0u: goto label_3952a0;
        case 0x3952a4u: goto label_3952a4;
        case 0x3952a8u: goto label_3952a8;
        case 0x3952acu: goto label_3952ac;
        case 0x3952b0u: goto label_3952b0;
        case 0x3952b4u: goto label_3952b4;
        case 0x3952b8u: goto label_3952b8;
        case 0x3952bcu: goto label_3952bc;
        case 0x3952c0u: goto label_3952c0;
        case 0x3952c4u: goto label_3952c4;
        case 0x3952c8u: goto label_3952c8;
        case 0x3952ccu: goto label_3952cc;
        case 0x3952d0u: goto label_3952d0;
        case 0x3952d4u: goto label_3952d4;
        case 0x3952d8u: goto label_3952d8;
        case 0x3952dcu: goto label_3952dc;
        case 0x3952e0u: goto label_3952e0;
        case 0x3952e4u: goto label_3952e4;
        case 0x3952e8u: goto label_3952e8;
        case 0x3952ecu: goto label_3952ec;
        case 0x3952f0u: goto label_3952f0;
        case 0x3952f4u: goto label_3952f4;
        case 0x3952f8u: goto label_3952f8;
        case 0x3952fcu: goto label_3952fc;
        case 0x395300u: goto label_395300;
        case 0x395304u: goto label_395304;
        case 0x395308u: goto label_395308;
        case 0x39530cu: goto label_39530c;
        default: break;
    }

    ctx->pc = 0x395240u;

label_395240:
    // 0x395240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x395240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_395244:
    // 0x395244: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x395244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_395248:
    // 0x395248: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x395248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39524c:
    // 0x39524c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_395250:
    // 0x395250: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x395250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_395254:
    // 0x395254: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x395254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_395258:
    // 0x395258: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x395258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39525c:
    // 0x39525c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_395260:
    // 0x395260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x395260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_395264:
    // 0x395264: 0xc0e54c4  jal         func_395310
label_395268:
    if (ctx->pc == 0x395268u) {
        ctx->pc = 0x395268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395264u;
        // 0x395268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39526Cu;
        goto label_39526c;
    }
    ctx->pc = 0x395264u;
    SET_GPR_U32(ctx, 31, 0x39526Cu);
    ctx->pc = 0x395268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395264u;
    // 0x395268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395310u, 0x395264u, 0x39526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39526Cu;
label_39526c:
    // 0x39526c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x39526cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_395270:
    // 0x395270: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x395270u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_395274:
    // 0x395274: 0x2a21ffff  slti        $at, $s1, -0x1
    ctx->pc = 0x395274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_395278:
    // 0x395278: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_39527c:
    if (ctx->pc == 0x39527Cu) {
        ctx->pc = 0x395280u;
        goto label_395280;
    }
    ctx->pc = 0x395278u;
    {
        const bool branch_taken_0x395278 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x395278) {
            ctx->pc = 0x395288u;
            goto label_395288;
        }
    }
    ctx->pc = 0x395280u;
label_395280:
    // 0x395280: 0x1000001b  b           . + 4 + (0x1B << 2)
label_395284:
    if (ctx->pc == 0x395284u) {
        ctx->pc = 0x395284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395280u;
        // 0x395284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395288u;
        goto label_395288;
    }
    ctx->pc = 0x395280u;
    {
        const bool branch_taken_0x395280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395280u;
        // 0x395284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395280) {
            ctx->pc = 0x3952F0u;
            goto label_3952f0;
        }
    }
    ctx->pc = 0x395288u;
label_395288:
    // 0x395288: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x395288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_39528c:
    // 0x39528c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39528cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395290:
    // 0x395290: 0xc0b2ebc  jal         func_2CBAF0
label_395294:
    if (ctx->pc == 0x395294u) {
        ctx->pc = 0x395294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395290u;
        // 0x395294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395298u;
        goto label_395298;
    }
    ctx->pc = 0x395290u;
    SET_GPR_U32(ctx, 31, 0x395298u);
    ctx->pc = 0x395294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395290u;
    // 0x395294: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x395290u, 0x395298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395298u;
label_395298:
    // 0x395298: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x395298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39529c:
    // 0x39529c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_3952a0:
    if (ctx->pc == 0x3952A0u) {
        ctx->pc = 0x3952A4u;
        goto label_3952a4;
    }
    ctx->pc = 0x39529Cu;
    {
        const bool branch_taken_0x39529c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x39529c) {
            ctx->pc = 0x3952B0u;
            goto label_3952b0;
        }
    }
    ctx->pc = 0x3952A4u;
label_3952a4:
    // 0x3952a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_3952a8:
    if (ctx->pc == 0x3952A8u) {
        ctx->pc = 0x3952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952A4u;
        // 0x3952a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952ACu;
        goto label_3952ac;
    }
    ctx->pc = 0x3952A4u;
    {
        const bool branch_taken_0x3952a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952A4u;
        // 0x3952a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952a4) {
            ctx->pc = 0x3952F0u;
            goto label_3952f0;
        }
    }
    ctx->pc = 0x3952ACu;
label_3952ac:
    // 0x3952ac: 0x0  nop
    ctx->pc = 0x3952acu;
    // NOP
label_3952b0:
    // 0x3952b0: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x3952b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_3952b4:
    // 0x3952b4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3952b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3952b8:
    // 0x3952b8: 0x320f809  jalr        $t9
label_3952bc:
    if (ctx->pc == 0x3952BCu) {
        ctx->pc = 0x3952BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952B8u;
        // 0x3952bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952C0u;
        goto label_3952c0;
    }
    ctx->pc = 0x3952B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3952C0u);
        ctx->pc = 0x3952BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952B8u;
        // 0x3952bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3952B8u, 0x3952C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3952C0u;
label_3952c0:
    // 0x3952c0: 0x7a840000  lq          $a0, 0x0($s4)
    ctx->pc = 0x3952c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_3952c4:
    // 0x3952c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3952c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3952c8:
    // 0x3952c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3952c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3952cc:
    // 0x3952cc: 0x7e440020  sq          $a0, 0x20($s2)
    ctx->pc = 0x3952ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 4));
label_3952d0:
    // 0x3952d0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x3952d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_3952d4:
    // 0x3952d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3952d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3952d8:
    // 0x3952d8: 0xae432b20  sw          $v1, 0x2B20($s2)
    ctx->pc = 0x3952d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11040), GPR_U32(ctx, 3));
label_3952dc:
    // 0x3952dc: 0xae532b28  sw          $s3, 0x2B28($s2)
    ctx->pc = 0x3952dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11048), GPR_U32(ctx, 19));
label_3952e0:
    // 0x3952e0: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x3952e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_3952e4:
    // 0x3952e4: 0xa2432b2c  sb          $v1, 0x2B2C($s2)
    ctx->pc = 0x3952e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11052), (uint8_t)GPR_U32(ctx, 3));
label_3952e8:
    // 0x3952e8: 0xa6512b24  sh          $s1, 0x2B24($s2)
    ctx->pc = 0x3952e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11044), (uint16_t)GPR_U32(ctx, 17));
label_3952ec:
    // 0x3952ec: 0x0  nop
    ctx->pc = 0x3952ecu;
    // NOP
label_3952f0:
    // 0x3952f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3952f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3952f4:
    // 0x3952f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3952f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3952f8:
    // 0x3952f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3952f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3952fc:
    // 0x3952fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3952fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_395300:
    // 0x395300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x395300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_395304:
    // 0x395304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x395304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_395308:
    // 0x395308: 0x3e00008  jr          $ra
label_39530c:
    if (ctx->pc == 0x39530Cu) {
        ctx->pc = 0x39530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395308u;
        // 0x39530c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395310u;
        goto label_fallthrough_0x395308;
    }
    ctx->pc = 0x395308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395308u;
        // 0x39530c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x395308:
    ctx->pc = 0x395310u;
}
