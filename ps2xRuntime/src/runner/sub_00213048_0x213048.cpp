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

// Function: sub_00213048
// Address: 0x213048 - 0x2130a8
void sub_00213048_0x213048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213048_0x213048");
#endif

    switch (ctx->pc) {
        case 0x21305cu: goto label_21305c;
        default: break;
    }

    ctx->pc = 0x213048u;

    // 0x213048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21304c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213054: 0xc084c2a  jal         func_2130A8
    ctx->pc = 0x213054u;
    SET_GPR_U32(ctx, 31, 0x21305Cu);
    ctx->pc = 0x213058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213054u;
    // 0x213058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2130A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2130A8u, 0x213054u, 0x21305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21305Cu;
label_21305c:
    // 0x21305c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213060: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x213060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213064: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x213064u;
    {
        const bool branch_taken_0x213064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213064) {
            ctx->pc = 0x213068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213064u;
            // 0x213068: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213088u;
            goto label_213088;
        }
    }
    ctx->pc = 0x21306Cu;
    // 0x21306c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x21306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x213070: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x213070u;
    {
        const bool branch_taken_0x213070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213070u;
        // 0x213074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213070) {
            ctx->pc = 0x213098u;
            goto label_213098;
        }
    }
    ctx->pc = 0x213078u;
    // 0x213078: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x213078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x21307c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21307Cu;
    {
        const bool branch_taken_0x21307c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21307Cu;
        // 0x213080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21307c) {
            ctx->pc = 0x213098u;
            goto label_213098;
        }
    }
    ctx->pc = 0x213084u;
    // 0x213084: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x213084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_213088:
    // 0x213088: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x213088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21308c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213090: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x213090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x213094: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x213094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_213098:
    // 0x213098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21309c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21309cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2130a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2130A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2130A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130A0u;
        // 0x2130a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2130A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2130A8u;
}
