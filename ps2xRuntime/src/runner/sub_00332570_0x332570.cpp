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

// Function: sub_00332570
// Address: 0x332570 - 0x3325d0
void sub_00332570_0x332570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332570_0x332570");
#endif

    switch (ctx->pc) {
        case 0x332590u: goto label_332590;
        case 0x3325a8u: goto label_3325a8;
        default: break;
    }

    ctx->pc = 0x332570u;

    // 0x332570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332574: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x332574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x332578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x332578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33257c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33257cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x332580: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x332580u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x332584: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x332584u;
    {
        const bool branch_taken_0x332584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x332588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332584u;
        // 0x332588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332584) {
            ctx->pc = 0x3325C0u;
            goto label_3325c0;
        }
    }
    ctx->pc = 0x33258Cu;
    // 0x33258c: 0x0  nop
    ctx->pc = 0x33258cu;
    // NOP
label_332590:
    // 0x332590: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x332590u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x332594: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x332594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x332598: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x332598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33259c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x33259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3325a0: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x3325A0u;
    SET_GPR_U32(ctx, 31, 0x3325A8u);
    ctx->pc = 0x3325A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325A0u;
    // 0x3325a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x3325A0u, 0x3325A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325A8u;
label_3325a8:
    // 0x3325a8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3325a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3325ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3325acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3325b0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x3325b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3325b4: 0x14a3fff6  bne         $a1, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3325B4u;
    {
        const bool branch_taken_0x3325b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3325b4) {
            ctx->pc = 0x332590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332590;
        }
    }
    ctx->pc = 0x3325BCu;
    // 0x3325bc: 0x0  nop
    ctx->pc = 0x3325bcu;
    // NOP
label_3325c0:
    // 0x3325c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3325c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3325c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3325c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3325c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3325C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3325CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3325C8u;
        // 0x3325cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3325C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3325D0u;
}
