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

// Function: sub_00284890
// Address: 0x284890 - 0x2848e0
void sub_00284890_0x284890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284890_0x284890");
#endif

    switch (ctx->pc) {
        case 0x2848b0u: goto label_2848b0;
        default: break;
    }

    ctx->pc = 0x284890u;

    // 0x284890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284894: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x284894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x284898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x284898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28489c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2848a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2848a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848a4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2848a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2848a8: 0xc09bcc8  jal         func_26F320
    ctx->pc = 0x2848A8u;
    SET_GPR_U32(ctx, 31, 0x2848B0u);
    ctx->pc = 0x2848ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848A8u;
    // 0x2848ac: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F320u, 0x2848A8u, 0x2848B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848B0u;
label_2848b0:
    // 0x2848b0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2848b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2848b4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2848b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2848b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2848b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2848bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2848bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2848c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2848c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2848c4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2848c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2848c8: 0x24426470  addiu       $v0, $v0, 0x6470
    ctx->pc = 0x2848c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25712));
    // 0x2848cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2848ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2848d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2848d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2848d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2848d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2848d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2848D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2848DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848D8u;
        // 0x2848dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2848D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2848E0u;
}
