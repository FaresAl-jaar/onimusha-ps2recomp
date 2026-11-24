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

// Function: sub_00130B60
// Address: 0x130b60 - 0x130c10
void sub_00130B60_0x130b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130B60_0x130b60");
#endif

    switch (ctx->pc) {
        case 0x130b7cu: goto label_130b7c;
        case 0x130b90u: goto label_130b90;
        case 0x130ba0u: goto label_130ba0;
        case 0x130bb0u: goto label_130bb0;
        case 0x130bc8u: goto label_130bc8;
        case 0x130bd4u: goto label_130bd4;
        default: break;
    }

    ctx->pc = 0x130b60u;

    // 0x130b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130b64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x130b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x130b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x130b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x130b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130b74: 0xc04dbdc  jal         func_136F70
    ctx->pc = 0x130B74u;
    SET_GPR_U32(ctx, 31, 0x130B7Cu);
    ctx->pc = 0x130B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B74u;
    // 0x130b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F70u, 0x130B74u, 0x130B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B7Cu;
label_130b7c:
    // 0x130b7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130b80: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x130B80u;
    {
        const bool branch_taken_0x130b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x130B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B80u;
        // 0x130b84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b80) {
            ctx->pc = 0x130BF8u;
            goto label_130bf8;
        }
    }
    ctx->pc = 0x130B88u;
    // 0x130b88: 0xc04d998  jal         func_136660
    ctx->pc = 0x130B88u;
    SET_GPR_U32(ctx, 31, 0x130B90u);
    ctx->pc = 0x136660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136660u, 0x130B88u, 0x130B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B90u;
label_130b90:
    // 0x130b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130b94: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x130B94u;
    {
        const bool branch_taken_0x130b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x130B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B94u;
        // 0x130b98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b94) {
            ctx->pc = 0x130BF8u;
            goto label_130bf8;
        }
    }
    ctx->pc = 0x130B9Cu;
    // 0x130b9c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x130b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130ba0:
    // 0x130ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ba8: 0xc049590  jal         func_125640
    ctx->pc = 0x130BA8u;
    SET_GPR_U32(ctx, 31, 0x130BB0u);
    ctx->pc = 0x130BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BA8u;
    // 0x130bac: 0x2406022c  addiu       $a2, $zero, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x130BA8u, 0x130BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BB0u;
label_130bb0:
    // 0x130bb0: 0xae32002c  sw          $s2, 0x2C($s1)
    ctx->pc = 0x130bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 18));
    // 0x130bb4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x130bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x130bb8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x130bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x130bbc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x130BBCu;
    {
        const bool branch_taken_0x130bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BBCu;
        // 0x130bc0: 0x2631022c  addiu       $s1, $s1, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bbc) {
            ctx->pc = 0x130BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130ba0;
        }
    }
    ctx->pc = 0x130BC4u;
    // 0x130bc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x130bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130bc8:
    // 0x130bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bcc: 0xc04c764  jal         func_131D90
    ctx->pc = 0x130BCCu;
    SET_GPR_U32(ctx, 31, 0x130BD4u);
    ctx->pc = 0x130BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BCCu;
    // 0x130bd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D90u, 0x130BCCu, 0x130BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BD4u;
label_130bd4:
    // 0x130bd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x130bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x130bd8: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x130bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x130bdc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130BDCu;
    {
        const bool branch_taken_0x130bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130bdc) {
            ctx->pc = 0x130BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130bc8;
        }
    }
    ctx->pc = 0x130BE4u;
    // 0x130be4: 0xa2000a18  sb          $zero, 0xA18($s0)
    ctx->pc = 0x130be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2584), (uint8_t)GPR_U32(ctx, 0));
    // 0x130be8: 0xa2000a19  sb          $zero, 0xA19($s0)
    ctx->pc = 0x130be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2585), (uint8_t)GPR_U32(ctx, 0));
    // 0x130bec: 0xa2000a1a  sb          $zero, 0xA1A($s0)
    ctx->pc = 0x130becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2586), (uint8_t)GPR_U32(ctx, 0));
    // 0x130bf0: 0xa2000a1b  sb          $zero, 0xA1B($s0)
    ctx->pc = 0x130bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2587), (uint8_t)GPR_U32(ctx, 0));
    // 0x130bf4: 0x0  nop
    ctx->pc = 0x130bf4u;
    // NOP
label_130bf8:
    // 0x130bf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x130bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130bfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130c08: 0x3e00008  jr          $ra
    ctx->pc = 0x130C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C08u;
        // 0x130c0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130C10u;
}
