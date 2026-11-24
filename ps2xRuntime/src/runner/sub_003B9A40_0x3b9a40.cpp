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

// Function: sub_003B9A40
// Address: 0x3b9a40 - 0x3b9af0
void sub_003B9A40_0x3b9a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9A40_0x3b9a40");
#endif

    switch (ctx->pc) {
        case 0x3b9a80u: goto label_3b9a80;
        case 0x3b9ac8u: goto label_3b9ac8;
        default: break;
    }

    ctx->pc = 0x3b9a40u;

    // 0x3b9a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b9a44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b9a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b9a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b9a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b9a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9a50: 0x90852b5b  lbu         $a1, 0x2B5B($a0)
    ctx->pc = 0x3b9a50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11099)));
    // 0x3b9a54: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3B9A54u;
    {
        const bool branch_taken_0x3b9a54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A54u;
        // 0x3b9a58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9a54) {
            ctx->pc = 0x3B9AE0u;
            goto label_3b9ae0;
        }
    }
    ctx->pc = 0x3B9A5Cu;
    // 0x3b9a5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9a60: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B9A60u;
    {
        const bool branch_taken_0x3b9a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b9a60) {
            ctx->pc = 0x3B9AA8u;
            goto label_3b9aa8;
        }
    }
    ctx->pc = 0x3B9A68u;
    // 0x3b9a68: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9A68u;
    {
        const bool branch_taken_0x3b9a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9a68) {
            ctx->pc = 0x3B9A78u;
            goto label_3b9a78;
        }
    }
    ctx->pc = 0x3B9A70u;
    // 0x3b9a70: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3B9A70u;
    {
        const bool branch_taken_0x3b9a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9a70) {
            ctx->pc = 0x3B9AE0u;
            goto label_3b9ae0;
        }
    }
    ctx->pc = 0x3B9A78u;
label_3b9a78:
    // 0x3b9a78: 0xc0ee6bc  jal         func_3B9AF0
    ctx->pc = 0x3B9A78u;
    SET_GPR_U32(ctx, 31, 0x3B9A80u);
    ctx->pc = 0x3B9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9AF0u, 0x3B9A78u, 0x3B9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9A80u;
label_3b9a80:
    // 0x3b9a80: 0xa2022b5d  sb          $v0, 0x2B5D($s0)
    ctx->pc = 0x3b9a80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11101), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b9a84: 0x92032b5d  lbu         $v1, 0x2B5D($s0)
    ctx->pc = 0x3b9a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11101)));
    // 0x3b9a88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9A88u;
    {
        const bool branch_taken_0x3b9a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A88u;
        // 0x3b9a8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9a88) {
            ctx->pc = 0x3B9A98u;
            goto label_3b9a98;
        }
    }
    ctx->pc = 0x3B9A90u;
    // 0x3b9a90: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B9A90u;
    {
        const bool branch_taken_0x3b9a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A90u;
        // 0x3b9a94: 0xa2032b5b  sb          $v1, 0x2B5B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11099), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9a90) {
            ctx->pc = 0x3B9AE0u;
            goto label_3b9ae0;
        }
    }
    ctx->pc = 0x3B9A98u;
label_3b9a98:
    // 0x3b9a98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b9a9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B9A9Cu;
    {
        const bool branch_taken_0x3b9a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9A9Cu;
        // 0x3b9aa0: 0xa2032b5b  sb          $v1, 0x2B5B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11099), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9a9c) {
            ctx->pc = 0x3B9AE0u;
            goto label_3b9ae0;
        }
    }
    ctx->pc = 0x3B9AA4u;
    // 0x3b9aa4: 0x0  nop
    ctx->pc = 0x3b9aa4u;
    // NOP
label_3b9aa8:
    // 0x3b9aa8: 0x92032b5d  lbu         $v1, 0x2B5D($s0)
    ctx->pc = 0x3b9aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11101)));
    // 0x3b9aac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9AACu;
    {
        const bool branch_taken_0x3b9aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9aac) {
            ctx->pc = 0x3B9AC0u;
            goto label_3b9ac0;
        }
    }
    ctx->pc = 0x3B9AB4u;
    // 0x3b9ab4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3b9ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3b9ab8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B9AB8u;
    {
        const bool branch_taken_0x3b9ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AB8u;
        // 0x3b9abc: 0xa2032b5d  sb          $v1, 0x2B5D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11101), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ab8) {
            ctx->pc = 0x3B9AE0u;
            goto label_3b9ae0;
        }
    }
    ctx->pc = 0x3B9AC0u;
label_3b9ac0:
    // 0x3b9ac0: 0xc0ee808  jal         func_3BA020
    ctx->pc = 0x3B9AC0u;
    SET_GPR_U32(ctx, 31, 0x3B9AC8u);
    ctx->pc = 0x3BA020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA020u, 0x3B9AC0u, 0x3B9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9AC8u;
label_3b9ac8:
    // 0x3b9ac8: 0xa2022b5d  sb          $v0, 0x2B5D($s0)
    ctx->pc = 0x3b9ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11101), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b9acc: 0x92032b5d  lbu         $v1, 0x2B5D($s0)
    ctx->pc = 0x3b9accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11101)));
    // 0x3b9ad0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9AD0u;
    {
        const bool branch_taken_0x3b9ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AD0u;
        // 0x3b9ad4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9ad0) {
            ctx->pc = 0x3B9AE0u;
            goto label_3b9ae0;
        }
    }
    ctx->pc = 0x3B9AD8u;
    // 0x3b9ad8: 0xa2032b5b  sb          $v1, 0x2B5B($s0)
    ctx->pc = 0x3b9ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11099), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b9adc: 0x0  nop
    ctx->pc = 0x3b9adcu;
    // NOP
label_3b9ae0:
    // 0x3b9ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b9ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9AE8u;
        // 0x3b9aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9AF0u;
}
