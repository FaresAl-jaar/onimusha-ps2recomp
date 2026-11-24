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

// Function: sub_0028EF40
// Address: 0x28ef40 - 0x28ef84
void sub_0028EF40_0x28ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EF40_0x28ef40");
#endif

    switch (ctx->pc) {
        case 0x28ef60u: goto label_28ef60;
        case 0x28ef70u: goto label_28ef70;
        default: break;
    }

    ctx->pc = 0x28ef40u;

    // 0x28ef40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ef44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ef44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ef4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28ef50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ef50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef54: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x28ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x28ef58: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x28EF58u;
    SET_GPR_U32(ctx, 31, 0x28EF60u);
    ctx->pc = 0x28EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF58u;
    // 0x28ef5c: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x28EF58u, 0x28EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF60u;
label_28ef60:
    // 0x28ef60: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x28ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x28ef64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28ef64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ef68: 0xc07cc2c  jal         func_1F30B0
    ctx->pc = 0x28EF68u;
    SET_GPR_U32(ctx, 31, 0x28EF70u);
    ctx->pc = 0x28EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EF68u;
    // 0x28ef6c: 0x2484f820  addiu       $a0, $a0, -0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B0u, 0x28EF68u, 0x28EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF70u;
label_28ef70:
    // 0x28ef70: 0xac500094  sw          $s0, 0x94($v0)
    ctx->pc = 0x28ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 16));
    // 0x28ef74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ef74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ef78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ef78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ef7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28EF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF7Cu;
        // 0x28ef80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EF84u;
}
