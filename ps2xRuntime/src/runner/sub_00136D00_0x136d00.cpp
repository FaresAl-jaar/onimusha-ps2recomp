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

// Function: sub_00136D00
// Address: 0x136d00 - 0x136d64
void sub_00136D00_0x136d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136D00_0x136d00");
#endif

    switch (ctx->pc) {
        case 0x136d38u: goto label_136d38;
        default: break;
    }

    ctx->pc = 0x136d00u;

    // 0x136d00: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x136d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x136d04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136d08: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x136d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x136d0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x136d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x136d10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136d14: 0x24420ed0  addiu       $v0, $v0, 0xED0
    ctx->pc = 0x136d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3792));
    // 0x136d18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x136d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x136d1c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x136d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136d20: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x136d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d24: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x136d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x136d28: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x136d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x136d2c: 0x248500ff  addiu       $a1, $a0, 0xFF
    ctx->pc = 0x136d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x136d30: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x136D30u;
    SET_GPR_U32(ctx, 31, 0x136D38u);
    ctx->pc = 0x136D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D30u;
    // 0x136d34: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x136D30u, 0x136D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D38u;
label_136d38:
    // 0x136d38: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x136d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136d3c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x136d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x136d40: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x136d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x136d44: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x136d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x136d48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136d4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x136d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x136d50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136d54: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x136d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x136d58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x136d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x136D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D5Cu;
        // 0x136d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136D64u;
}
