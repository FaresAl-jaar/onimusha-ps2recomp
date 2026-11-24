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

// Function: sub_002F3050
// Address: 0x2f3050 - 0x2f30a8
void sub_002F3050_0x2f3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3050_0x2f3050");
#endif

    switch (ctx->pc) {
        case 0x2f3080u: goto label_2f3080;
        default: break;
    }

    ctx->pc = 0x2f3050u;

    // 0x2f3050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f3050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f3054: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f3054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f3058: 0x24020515  addiu       $v0, $zero, 0x515
    ctx->pc = 0x2f3058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x2f305c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F305Cu;
    {
        const bool branch_taken_0x2f305c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F305Cu;
        // 0x2f3060: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f305c) {
            ctx->pc = 0x2F3078u;
            goto label_2f3078;
        }
    }
    ctx->pc = 0x2F3064u;
    // 0x2f3064: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x2f3064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x2f3068: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3068u;
    {
        const bool branch_taken_0x2f3068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f3068) {
            ctx->pc = 0x2F3078u;
            goto label_2f3078;
        }
    }
    ctx->pc = 0x2F3070u;
    // 0x2f3070: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3070u;
    {
        const bool branch_taken_0x2f3070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3070) {
            ctx->pc = 0x2F3098u;
            goto label_2f3098;
        }
    }
    ctx->pc = 0x2F3078u;
label_2f3078:
    // 0x2f3078: 0xc0d8fa0  jal         func_363E80
    ctx->pc = 0x2F3078u;
    SET_GPR_U32(ctx, 31, 0x2F3080u);
    ctx->pc = 0x363E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E80u, 0x2F3078u, 0x2F3080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3080u;
label_2f3080:
    // 0x2f3080: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3080u;
    {
        const bool branch_taken_0x2f3080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3080u;
        // 0x2f3084: 0x64040515  daddiu      $a0, $zero, 0x515 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1301);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3080) {
            ctx->pc = 0x2F3090u;
            goto label_2f3090;
        }
    }
    ctx->pc = 0x2F3088u;
    // 0x2f3088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3088u;
    {
        const bool branch_taken_0x2f3088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3088) {
            ctx->pc = 0x2F3098u;
            goto label_2f3098;
        }
    }
    ctx->pc = 0x2F3090u;
label_2f3090:
    // 0x2f3090: 0x64040512  daddiu      $a0, $zero, 0x512
    ctx->pc = 0x2f3090u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1298);
    // 0x2f3094: 0x0  nop
    ctx->pc = 0x2f3094u;
    // NOP
label_2f3098:
    // 0x2f3098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f309c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f309cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f30a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F30A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F30A0u;
        // 0x2f30a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F30A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F30A8u;
}
