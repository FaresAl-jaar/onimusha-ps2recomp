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

// Function: sub_003BE590
// Address: 0x3be590 - 0x3be610
void sub_003BE590_0x3be590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE590_0x3be590");
#endif

    switch (ctx->pc) {
        case 0x3be5c4u: goto label_3be5c4;
        case 0x3be5ecu: goto label_3be5ec;
        default: break;
    }

    ctx->pc = 0x3be590u;

    // 0x3be590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3be590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3be594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3be594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3be598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3be598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3be59c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3be59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3be5a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3be5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be5a4: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3be5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be5a8: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE5A8u;
    {
        const bool branch_taken_0x3be5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE5A8u;
        // 0x3be5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be5a8) {
            ctx->pc = 0x3BE5D0u;
            goto label_3be5d0;
        }
    }
    ctx->pc = 0x3BE5B0u;
    // 0x3be5b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be5b4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3be5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3be5b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be5bc: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BE5BCu;
    SET_GPR_U32(ctx, 31, 0x3BE5C4u);
    ctx->pc = 0x3BE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE5BCu;
    // 0x3be5c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BE5BCu, 0x3BE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE5C4u;
label_3be5c4:
    // 0x3be5c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BE5C4u;
    {
        const bool branch_taken_0x3be5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be5c4) {
            ctx->pc = 0x3BE5F0u;
            goto label_3be5f0;
        }
    }
    ctx->pc = 0x3BE5CCu;
    // 0x3be5cc: 0x0  nop
    ctx->pc = 0x3be5ccu;
    // NOP
label_3be5d0:
    // 0x3be5d0: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3be5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3be5d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3be5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be5d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be5dc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3be5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3be5e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be5e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be5e4: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BE5E4u;
    SET_GPR_U32(ctx, 31, 0x3BE5ECu);
    ctx->pc = 0x3BE5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE5E4u;
    // 0x3be5e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BE5E4u, 0x3BE5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE5ECu;
label_3be5ec:
    // 0x3be5ec: 0x0  nop
    ctx->pc = 0x3be5ecu;
    // NOP
label_3be5f0:
    // 0x3be5f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3be5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3be5f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3be5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3be5f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3be5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3be5fc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3be5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3be600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3be600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3be604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3be604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be608: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE608u;
        // 0x3be60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE610u;
}
