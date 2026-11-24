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

// Function: sub_003DCA80
// Address: 0x3dca80 - 0x3dcabc
void sub_003DCA80_0x3dca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCA80_0x3dca80");
#endif

    switch (ctx->pc) {
        case 0x3dcaa8u: goto label_3dcaa8;
        default: break;
    }

    ctx->pc = 0x3dca80u;

    // 0x3dca80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dca84: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3dca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3dca88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dca8c: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3dca8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3dca90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dca94: 0xa4802bee  sh          $zero, 0x2BEE($a0)
    ctx->pc = 0x3dca94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11246), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dca98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dca98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dca9c: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x3dca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x3dcaa0: 0xc0c9640  jal         func_325900
    ctx->pc = 0x3DCAA0u;
    SET_GPR_U32(ctx, 31, 0x3DCAA8u);
    ctx->pc = 0x3DCAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCAA0u;
    // 0x3dcaa4: 0x24844aa0  addiu       $a0, $a0, 0x4AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325900u, 0x3DCAA0u, 0x3DCAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCAA8u;
label_3dcaa8:
    // 0x3dcaa8: 0xae022bf0  sw          $v0, 0x2BF0($s0)
    ctx->pc = 0x3dcaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11248), GPR_U32(ctx, 2));
    // 0x3dcaac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dcaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dcab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dcab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dcab4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCAB4u;
        // 0x3dcab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCABCu;
}
