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

// Function: sub_00136D68
// Address: 0x136d68 - 0x136dcc
void sub_00136D68_0x136d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136D68_0x136d68");
#endif

    switch (ctx->pc) {
        case 0x136da0u: goto label_136da0;
        default: break;
    }

    ctx->pc = 0x136d68u;

    // 0x136d68: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x136d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x136d6c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136d70: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x136d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x136d74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x136d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x136d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136d7c: 0x24420ed0  addiu       $v0, $v0, 0xED0
    ctx->pc = 0x136d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3792));
    // 0x136d80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x136d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x136d84: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x136d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136d88: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x136d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d8c: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x136d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x136d90: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x136d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x136d94: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x136d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x136d98: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x136D98u;
    SET_GPR_U32(ctx, 31, 0x136DA0u);
    ctx->pc = 0x136D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D98u;
    // 0x136d9c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x136D98u, 0x136DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DA0u;
label_136da0:
    // 0x136da0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x136da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136da4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x136da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x136da8: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x136da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x136dac: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x136dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x136db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136db4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x136db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x136db8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136dbc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x136dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x136dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x136dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x136DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DC4u;
        // 0x136dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136DCCu;
}
