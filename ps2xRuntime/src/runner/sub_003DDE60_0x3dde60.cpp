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

// Function: sub_003DDE60
// Address: 0x3dde60 - 0x3ddec8
void sub_003DDE60_0x3dde60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDE60_0x3dde60");
#endif

    switch (ctx->pc) {
        case 0x3dde94u: goto label_3dde94;
        default: break;
    }

    ctx->pc = 0x3dde60u;

    // 0x3dde60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dde60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dde64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dde64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dde68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dde68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dde6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dde6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dde70: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DDE70u;
    {
        const bool branch_taken_0x3dde70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE70u;
        // 0x3dde74: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde70) {
            ctx->pc = 0x3DDEB8u;
            goto label_3ddeb8;
        }
    }
    ctx->pc = 0x3DDE78u;
    // 0x3dde78: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3dde78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3dde7c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3dde7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3dde80: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3dde80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3dde84: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3dde84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3dde88: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3dde88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3dde8c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3DDE8Cu;
    SET_GPR_U32(ctx, 31, 0x3DDE94u);
    ctx->pc = 0x3DDE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDE8Cu;
    // 0x3dde90: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3DDE8Cu, 0x3DDE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDE94u;
label_3dde94:
    // 0x3dde94: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3dde94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3dde98: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3dde98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3dde9c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3dde9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3ddea0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3ddea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3ddea4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3ddea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3ddea8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3ddea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3ddeac: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3ddeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3ddeb0: 0x2463aea0  addiu       $v1, $v1, -0x5160
    ctx->pc = 0x3ddeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946464));
    // 0x3ddeb4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3ddeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3ddeb8:
    // 0x3ddeb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ddeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ddebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ddebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ddec0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEC0u;
        // 0x3ddec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDEC8u;
}
