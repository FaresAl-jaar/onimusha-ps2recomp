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

// Function: sub_00218F60
// Address: 0x218f60 - 0x218fb8
void sub_00218F60_0x218f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218F60_0x218f60");
#endif

    switch (ctx->pc) {
        case 0x218f7cu: goto label_218f7c;
        case 0x218f98u: goto label_218f98;
        case 0x218fa4u: goto label_218fa4;
        default: break;
    }

    ctx->pc = 0x218f60u;

    // 0x218f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218f64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x218f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x218f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x218f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x218f70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x218f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218f74: 0xc083eb8  jal         func_20FAE0
    ctx->pc = 0x218F74u;
    SET_GPR_U32(ctx, 31, 0x218F7Cu);
    ctx->pc = 0x218F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F74u;
    // 0x218f78: 0x8e051fc8  lw          $a1, 0x1FC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FAE0u, 0x218F74u, 0x218F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F7Cu;
label_218f7c:
    // 0x218f7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x218f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218f80: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x218f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x218f84: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x218f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x218f88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x218F88u;
    {
        const bool branch_taken_0x218f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218F88u;
        // 0x218f8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f88) {
            ctx->pc = 0x218FA8u;
            goto label_218fa8;
        }
    }
    ctx->pc = 0x218F90u;
    // 0x218f90: 0xc0840b0  jal         func_2102C0
    ctx->pc = 0x218F90u;
    SET_GPR_U32(ctx, 31, 0x218F98u);
    ctx->pc = 0x2102C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2102C0u, 0x218F90u, 0x218F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F98u;
label_218f98:
    // 0x218f98: 0xde0409a0  ld          $a0, 0x9A0($s0)
    ctx->pc = 0x218f98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2464)));
    // 0x218f9c: 0xc08411e  jal         func_210478
    ctx->pc = 0x218F9Cu;
    SET_GPR_U32(ctx, 31, 0x218FA4u);
    ctx->pc = 0x218FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218F9Cu;
    // 0x218fa0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210478u, 0x218F9Cu, 0x218FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FA4u;
label_218fa4:
    // 0x218fa4: 0xfe0209a0  sd          $v0, 0x9A0($s0)
    ctx->pc = 0x218fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2464), GPR_U64(ctx, 2));
label_218fa8:
    // 0x218fa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x218fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218fac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x218facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x218FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FB0u;
        // 0x218fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218FB8u;
}
