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

// Function: sub_003D3400
// Address: 0x3d3400 - 0x3d3490
void sub_003D3400_0x3d3400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3400_0x3d3400");
#endif

    ctx->pc = 0x3d3400u;

    // 0x3d3400: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d3400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d3404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d3404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3408: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3d3408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3d340c: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d340cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d3410: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d3410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d3414: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x3d3414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x3d3418: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d3418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d341c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d3420: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3d3420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3d3424: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d3424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d3428: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d3428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d342c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3d342cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3d3430: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d3430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d3434: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d3434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d3438: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3d3438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3d343c: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d343cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d3440: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d3440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d3444: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D3444u;
    {
        const bool branch_taken_0x3d3444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3d3444) {
            ctx->pc = 0x3D3488u;
            goto label_3d3488;
        }
    }
    ctx->pc = 0x3D344Cu;
    // 0x3d344c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D344Cu;
    {
        const bool branch_taken_0x3d344c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d344c) {
            ctx->pc = 0x3D3460u;
            goto label_3d3460;
        }
    }
    ctx->pc = 0x3D3454u;
    // 0x3d3454: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D3454u;
    {
        const bool branch_taken_0x3d3454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3454) {
            ctx->pc = 0x3D3488u;
            goto label_3d3488;
        }
    }
    ctx->pc = 0x3D345Cu;
    // 0x3d345c: 0x0  nop
    ctx->pc = 0x3d345cu;
    // NOP
label_3d3460:
    // 0x3d3460: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3d3460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3464: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3d3464u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3468: 0x2403009b  addiu       $v1, $zero, 0x9B
    ctx->pc = 0x3d3468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x3d346c: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3d346cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d3470: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d3470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d3474: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x3d3474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3478: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d3478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d347c: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3d347cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3d3480: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x3d3480u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d3484: 0x0  nop
    ctx->pc = 0x3d3484u;
    // NOP
label_3d3488:
    // 0x3d3488: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3490u;
}
