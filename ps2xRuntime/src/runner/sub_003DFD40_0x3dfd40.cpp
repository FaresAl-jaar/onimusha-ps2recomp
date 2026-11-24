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

// Function: sub_003DFD40
// Address: 0x3dfd40 - 0x3dfdbc
void sub_003DFD40_0x3dfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFD40_0x3dfd40");
#endif

    switch (ctx->pc) {
        case 0x3dfd80u: goto label_3dfd80;
        case 0x3dfd90u: goto label_3dfd90;
        case 0x3dfda0u: goto label_3dfda0;
        default: break;
    }

    ctx->pc = 0x3dfd40u;

    // 0x3dfd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dfd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dfd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dfd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dfd48: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3dfd48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3dfd4c: 0x2463ff7e  addiu       $v1, $v1, -0x82
    ctx->pc = 0x3dfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967166));
    // 0x3dfd50: 0x2c61001d  sltiu       $at, $v1, 0x1D
    ctx->pc = 0x3dfd50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x3dfd54: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DFD54u;
    {
        const bool branch_taken_0x3dfd54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD54u;
        // 0x3dfd58: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfd54) {
            ctx->pc = 0x3DFDB0u;
            goto label_3dfdb0;
        }
    }
    ctx->pc = 0x3DFD5Cu;
    // 0x3dfd5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3dfd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3dfd60: 0x24a54860  addiu       $a1, $a1, 0x4860
    ctx->pc = 0x3dfd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18528));
    // 0x3dfd64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3dfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dfd68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3dfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dfd6c: 0x600008  jr          $v1
    ctx->pc = 0x3DFD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DFD78u: goto label_3dfd78;
            case 0x3DFD88u: goto label_3dfd88;
            case 0x3DFD98u: goto label_3dfd98;
            case 0x3DFDA8u: goto label_3dfda8;
            case 0x3DFDB0u: goto label_3dfdb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFD6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3DFD74u;
    // 0x3dfd74: 0x0  nop
    ctx->pc = 0x3dfd74u;
    // NOP
label_3dfd78:
    // 0x3dfd78: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3DFD78u;
    SET_GPR_U32(ctx, 31, 0x3DFD80u);
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3DFD78u, 0x3DFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD80u;
label_3dfd80:
    // 0x3dfd80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3DFD80u;
    {
        const bool branch_taken_0x3dfd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfd80) {
            ctx->pc = 0x3DFDB0u;
            goto label_3dfdb0;
        }
    }
    ctx->pc = 0x3DFD88u;
label_3dfd88:
    // 0x3dfd88: 0xc0f7f04  jal         func_3DFC10
    ctx->pc = 0x3DFD88u;
    SET_GPR_U32(ctx, 31, 0x3DFD90u);
    ctx->pc = 0x3DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFC10u, 0x3DFD88u, 0x3DFD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD90u;
label_3dfd90:
    // 0x3dfd90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DFD90u;
    {
        const bool branch_taken_0x3dfd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfd90) {
            ctx->pc = 0x3DFDB0u;
            goto label_3dfdb0;
        }
    }
    ctx->pc = 0x3DFD98u;
label_3dfd98:
    // 0x3dfd98: 0xc0f7e88  jal         func_3DFA20
    ctx->pc = 0x3DFD98u;
    SET_GPR_U32(ctx, 31, 0x3DFDA0u);
    ctx->pc = 0x3DFA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFA20u, 0x3DFD98u, 0x3DFDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFDA0u;
label_3dfda0:
    // 0x3dfda0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFDA0u;
    {
        const bool branch_taken_0x3dfda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfda0) {
            ctx->pc = 0x3DFDB0u;
            goto label_3dfdb0;
        }
    }
    ctx->pc = 0x3DFDA8u;
label_3dfda8:
    // 0x3dfda8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dfda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dfdac: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3dfdacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3dfdb0:
    // 0x3dfdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dfdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dfdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFDB4u;
        // 0x3dfdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFDBCu;
}
