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

// Function: sub_003CD590
// Address: 0x3cd590 - 0x3cd640
void sub_003CD590_0x3cd590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD590_0x3cd590");
#endif

    switch (ctx->pc) {
        case 0x3cd5b8u: goto label_3cd5b8;
        case 0x3cd5c0u: goto label_3cd5c0;
        case 0x3cd5d0u: goto label_3cd5d0;
        case 0x3cd5e0u: goto label_3cd5e0;
        case 0x3cd61cu: goto label_3cd61c;
        default: break;
    }

    ctx->pc = 0x3cd590u;

    // 0x3cd590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3cd590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3cd594: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3cd594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3cd598: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3cd598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3cd59c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3cd59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3cd5a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3cd5a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd5a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cd5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3cd5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cd5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cd5ac: 0x249201c4  addiu       $s2, $a0, 0x1C4
    ctx->pc = 0x3cd5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 452));
    // 0x3cd5b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cd5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cd5b4: 0x0  nop
    ctx->pc = 0x3cd5b4u;
    // NOP
label_3cd5b8:
    // 0x3cd5b8: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x3CD5B8u;
    SET_GPR_U32(ctx, 31, 0x3CD5C0u);
    ctx->pc = 0x3CD5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD5B8u;
    // 0x3cd5bc: 0x3284ffff  andi        $a0, $s4, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x3CD5B8u, 0x3CD5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD5C0u;
label_3cd5c0:
    // 0x3cd5c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cd5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd5c4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CD5C4u;
    {
        const bool branch_taken_0x3cd5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5C4u;
        // 0x3cd5c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd5c4) {
            ctx->pc = 0x3CD5F0u;
            goto label_3cd5f0;
        }
    }
    ctx->pc = 0x3CD5CCu;
    // 0x3cd5cc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3cd5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cd5d0:
    // 0x3cd5d0: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x3cd5d0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3cd5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd5d8: 0xc0d264c  jal         func_349930
    ctx->pc = 0x3CD5D8u;
    SET_GPR_U32(ctx, 31, 0x3CD5E0u);
    ctx->pc = 0x3CD5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD5D8u;
    // 0x3cd5dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349930u, 0x3CD5D8u, 0x3CD5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD5E0u;
label_3cd5e0:
    // 0x3cd5e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3cd5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3cd5e4: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x3cd5e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd5e8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3CD5E8u;
    {
        const bool branch_taken_0x3cd5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5E8u;
        // 0x3cd5ec: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd5e8) {
            ctx->pc = 0x3CD5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd5d0;
        }
    }
    ctx->pc = 0x3CD5F0u;
label_3cd5f0:
    // 0x3cd5f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3cd5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3cd5f4: 0x2e830005  sltiu       $v1, $s4, 0x5
    ctx->pc = 0x3cd5f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd5f8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3CD5F8u;
    {
        const bool branch_taken_0x3cd5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD5F8u;
        // 0x3cd5fc: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd5f8) {
            ctx->pc = 0x3CD5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd5b8;
        }
    }
    ctx->pc = 0x3CD600u;
    // 0x3cd600: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3cd600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3cd604: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3cd604u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3cd608: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3cd608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3cd60c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CD60Cu;
    {
        const bool branch_taken_0x3cd60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd60c) {
            ctx->pc = 0x3CD620u;
            goto label_3cd620;
        }
    }
    ctx->pc = 0x3CD614u;
    // 0x3cd614: 0xc0d2818  jal         func_34A060
    ctx->pc = 0x3CD614u;
    SET_GPR_U32(ctx, 31, 0x3CD61Cu);
    ctx->pc = 0x34A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A060u, 0x3CD614u, 0x3CD61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD61Cu;
label_3cd61c:
    // 0x3cd61c: 0x0  nop
    ctx->pc = 0x3cd61cu;
    // NOP
label_3cd620:
    // 0x3cd620: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3cd620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cd624: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3cd624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cd628: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cd628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cd62c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cd62cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd638: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD638u;
        // 0x3cd63c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD640u;
}
