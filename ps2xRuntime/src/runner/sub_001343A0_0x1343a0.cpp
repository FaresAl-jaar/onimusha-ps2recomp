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

// Function: sub_001343A0
// Address: 0x1343a0 - 0x134494
void sub_001343A0_0x1343a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001343A0_0x1343a0");
#endif

    switch (ctx->pc) {
        case 0x1343f4u: goto label_1343f4;
        case 0x13440cu: goto label_13440c;
        case 0x134420u: goto label_134420;
        case 0x134444u: goto label_134444;
        default: break;
    }

    ctx->pc = 0x1343a0u;

    // 0x1343a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1343a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1343a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1343a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1343a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1343a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1343ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1343acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1343b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1343b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1343b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1343b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1343b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1343bc: 0x26a80010  addiu       $t0, $s5, 0x10
    ctx->pc = 0x1343bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1343c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1343c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1343c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1343c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1343c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1343cc: 0x26920010  addiu       $s2, $s4, 0x10
    ctx->pc = 0x1343ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1343d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1343d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1343d4: 0x90a3000b  lbu         $v1, 0xB($a1)
    ctx->pc = 0x1343d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x1343d8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1343d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1343dc: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1343dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1343e0: 0x1079821  addu        $s3, $t0, $a3
    ctx->pc = 0x1343e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1343e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1343e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1343e8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1343e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1343ec: 0xc049522  jal         func_125488
    ctx->pc = 0x1343ECu;
    SET_GPR_U32(ctx, 31, 0x1343F4u);
    ctx->pc = 0x1343F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343ECu;
    // 0x1343f0: 0x478021  addu        $s0, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1343ECu, 0x1343F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1343F4u;
label_1343f4:
    // 0x1343f4: 0xa280000b  sb          $zero, 0xB($s4)
    ctx->pc = 0x1343f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x1343f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1343f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343fc: 0x92a2000c  lbu         $v0, 0xC($s5)
    ctx->pc = 0x1343fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x134400: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x134400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134404: 0xc049522  jal         func_125488
    ctx->pc = 0x134404u;
    SET_GPR_U32(ctx, 31, 0x13440Cu);
    ctx->pc = 0x134408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134404u;
    // 0x134408: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x134404u, 0x13440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13440Cu;
label_13440c:
    // 0x13440c: 0x92a2000c  lbu         $v0, 0xC($s5)
    ctx->pc = 0x13440cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x134410: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x134410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x134414: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x134414u;
    {
        const bool branch_taken_0x134414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x134418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134414u;
        // 0x134418: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134414) {
            ctx->pc = 0x134460u;
            goto label_134460;
        }
    }
    ctx->pc = 0x13441Cu;
    // 0x13441c: 0x0  nop
    ctx->pc = 0x13441cu;
    // NOP
label_134420:
    // 0x134420: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x134420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x134424: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x134424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x134428: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x134428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x13442c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x134430: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x134430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x134434: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x134434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x134438: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x134438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x13443c: 0xc049522  jal         func_125488
    ctx->pc = 0x13443Cu;
    SET_GPR_U32(ctx, 31, 0x134444u);
    ctx->pc = 0x134440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13443Cu;
    // 0x134440: 0x2a22821  addu        $a1, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x13443Cu, 0x134444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134444u;
label_134444:
    // 0x134444: 0x92a2000c  lbu         $v0, 0xC($s5)
    ctx->pc = 0x134444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x134448: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x134448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13444c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x13444cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x134450: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x134450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x134454: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x134454u;
    {
        const bool branch_taken_0x134454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134454u;
        // 0x134458: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134454) {
            ctx->pc = 0x134420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134420;
        }
    }
    ctx->pc = 0x13445Cu;
    // 0x13445c: 0x0  nop
    ctx->pc = 0x13445cu;
    // NOP
label_134460:
    // 0x134460: 0x8e43fff0  lw          $v1, -0x10($s2)
    ctx->pc = 0x134460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967280)));
    // 0x134464: 0x8e62fff4  lw          $v0, -0xC($s3)
    ctx->pc = 0x134464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967284)));
    // 0x134468: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x134468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13446c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13446cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134478: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x134478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x13447c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13447cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134480: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134484: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x134484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x134488: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13448c: 0x3e00008  jr          $ra
    ctx->pc = 0x13448Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13448Cu;
        // 0x134490: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13448Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134494u;
}
