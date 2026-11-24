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

// Function: sub_002F3920
// Address: 0x2f3920 - 0x2f3950
void sub_002F3920_0x2f3920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3920_0x2f3920");
#endif

    ctx->pc = 0x2f3920u;

    // 0x2f3920: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3920u;
    {
        const bool branch_taken_0x2f3920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3920u;
        // 0x2f3924: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3920) {
            ctx->pc = 0x2F3948u;
            goto label_2f3948;
        }
    }
    ctx->pc = 0x2F3928u;
    // 0x2f3928: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f392c: 0x2442009c  addiu       $v0, $v0, 0x9C
    ctx->pc = 0x2f392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x2f3930: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x2f3930u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f3934: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3934u;
    {
        const bool branch_taken_0x2f3934 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2F3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3934u;
        // 0x2f3938: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3934) {
            ctx->pc = 0x2F3944u;
            goto label_2f3944;
        }
    }
    ctx->pc = 0x2F393Cu;
    // 0x2f393c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2f393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2f3940: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2f3940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2f3944:
    // 0x2f3944: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f3944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2f3948:
    // 0x2f3948: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3950u;
}
