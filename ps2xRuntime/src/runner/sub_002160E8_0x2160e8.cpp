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

// Function: sub_002160E8
// Address: 0x2160e8 - 0x216134
void sub_002160E8_0x2160e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002160E8_0x2160e8");
#endif

    switch (ctx->pc) {
        case 0x216104u: goto label_216104;
        default: break;
    }

    ctx->pc = 0x2160e8u;

    // 0x2160e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2160e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2160ec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2160ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2160f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2160f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2160f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2160f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2160f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2160f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2160fc: 0xc083d42  jal         func_20F508
    ctx->pc = 0x2160FCu;
    SET_GPR_U32(ctx, 31, 0x216104u);
    ctx->pc = 0x216100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160FCu;
    // 0x216100: 0x8c851fc8  lw          $a1, 0x1FC8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F508u, 0x2160FCu, 0x216104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216104u;
label_216104:
    // 0x216104: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216104u;
    {
        const bool branch_taken_0x216104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216104u;
        // 0x216108: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216104) {
            ctx->pc = 0x216118u;
            goto label_216118;
        }
    }
    ctx->pc = 0x21610Cu;
    // 0x21610c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21610cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x216110: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x216110u;
    {
        const bool branch_taken_0x216110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216110u;
        // 0x216114: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216110) {
            ctx->pc = 0x216124u;
            goto label_216124;
        }
    }
    ctx->pc = 0x216118u;
label_216118:
    // 0x216118: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x216118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21611c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x21611cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x216120: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x216120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_216124:
    // 0x216124: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x216124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216128: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21612c: 0x3e00008  jr          $ra
    ctx->pc = 0x21612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21612Cu;
        // 0x216130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21612Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216134u;
}
