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

// Function: sub_00100580
// Address: 0x100580 - 0x1005cc
void sub_00100580_0x100580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100580_0x100580");
#endif

    switch (ctx->pc) {
        case 0x1005b4u: goto label_1005b4;
        default: break;
    }

    ctx->pc = 0x100580u;

    // 0x100580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10058c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10058cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100590: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x100590u;
    {
        const bool branch_taken_0x100590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100590u;
        // 0x100594: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100590) {
            ctx->pc = 0x1005B8u;
            goto label_1005b8;
        }
    }
    ctx->pc = 0x100598u;
    // 0x100598: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x100598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x10059c: 0x24635fb0  addiu       $v1, $v1, 0x5FB0
    ctx->pc = 0x10059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24496));
    // 0x1005a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1005a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1005a4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1005A4u;
    {
        const bool branch_taken_0x1005a4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1005A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005A4u;
        // 0x1005a8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005a4) {
            ctx->pc = 0x1005B8u;
            goto label_1005b8;
        }
    }
    ctx->pc = 0x1005ACu;
    // 0x1005ac: 0xc040148  jal         func_100520
    ctx->pc = 0x1005ACu;
    SET_GPR_U32(ctx, 31, 0x1005B4u);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x1005ACu, 0x1005B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005B4u;
label_1005b4:
    // 0x1005b4: 0x0  nop
    ctx->pc = 0x1005b4u;
    // NOP
label_1005b8:
    // 0x1005b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1005b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1005bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1005c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1005c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1005c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1005C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1005C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005C4u;
        // 0x1005c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1005C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1005CCu;
}
