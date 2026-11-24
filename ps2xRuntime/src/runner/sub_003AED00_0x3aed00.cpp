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

// Function: sub_003AED00
// Address: 0x3aed00 - 0x3aed7c
void sub_003AED00_0x3aed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AED00_0x3aed00");
#endif

    switch (ctx->pc) {
        case 0x3aed40u: goto label_3aed40;
        case 0x3aed64u: goto label_3aed64;
        default: break;
    }

    ctx->pc = 0x3aed00u;

    // 0x3aed00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3aed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3aed04: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3aed04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3aed08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3aed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3aed0c: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x3aed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x3aed10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3aed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3aed14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3aed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aed18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3aed18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aed1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aed20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3aed20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3aed24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed28: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x3aed28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x3aed2c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3aed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x3aed30: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3aed30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3aed34: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x3aed34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x3aed38: 0xc0d04e4  jal         func_341390
    ctx->pc = 0x3AED38u;
    SET_GPR_U32(ctx, 31, 0x3AED40u);
    ctx->pc = 0x3AED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AED38u;
    // 0x3aed3c: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341390u, 0x3AED38u, 0x3AED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AED40u;
label_3aed40:
    // 0x3aed40: 0xa6512ad0  sh          $s1, 0x2AD0($s2)
    ctx->pc = 0x3aed40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10960), (uint16_t)GPR_U32(ctx, 17));
    // 0x3aed44: 0x26440194  addiu       $a0, $s2, 0x194
    ctx->pc = 0x3aed44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 404));
    // 0x3aed48: 0x8e420144  lw          $v0, 0x144($s2)
    ctx->pc = 0x3aed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x3aed4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aed4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed50: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3aed50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aed54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aed54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3aed58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed5c: 0xc09ae2c  jal         func_26B8B0
    ctx->pc = 0x3AED5Cu;
    SET_GPR_U32(ctx, 31, 0x3AED64u);
    ctx->pc = 0x3AED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AED5Cu;
    // 0x3aed60: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B8B0u, 0x3AED5Cu, 0x3AED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AED64u;
label_3aed64:
    // 0x3aed64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3aed64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aed68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3aed68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aed6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3aed6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aed70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aed70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aed74: 0x3e00008  jr          $ra
    ctx->pc = 0x3AED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED74u;
        // 0x3aed78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AED74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AED7Cu;
}
