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

// Function: sub_001E0960
// Address: 0x1e0960 - 0x1e09b4
void sub_001E0960_0x1e0960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0960_0x1e0960");
#endif

    switch (ctx->pc) {
        case 0x1e0960u: goto label_1e0960;
        case 0x1e0964u: goto label_1e0964;
        case 0x1e0968u: goto label_1e0968;
        case 0x1e096cu: goto label_1e096c;
        case 0x1e0970u: goto label_1e0970;
        case 0x1e0974u: goto label_1e0974;
        case 0x1e0978u: goto label_1e0978;
        case 0x1e097cu: goto label_1e097c;
        case 0x1e0980u: goto label_1e0980;
        case 0x1e0984u: goto label_1e0984;
        case 0x1e0988u: goto label_1e0988;
        case 0x1e098cu: goto label_1e098c;
        case 0x1e0990u: goto label_1e0990;
        case 0x1e0994u: goto label_1e0994;
        case 0x1e0998u: goto label_1e0998;
        case 0x1e099cu: goto label_1e099c;
        case 0x1e09a0u: goto label_1e09a0;
        case 0x1e09a4u: goto label_1e09a4;
        case 0x1e09a8u: goto label_1e09a8;
        case 0x1e09acu: goto label_1e09ac;
        case 0x1e09b0u: goto label_1e09b0;
        default: break;
    }

    ctx->pc = 0x1e0960u;

label_1e0960:
    // 0x1e0960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0964:
    // 0x1e0964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0968:
    // 0x1e0968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e096c:
    // 0x1e096c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e096cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0970:
    // 0x1e0970: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e0974:
    if (ctx->pc == 0x1E0974u) {
        ctx->pc = 0x1E0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0970u;
        // 0x1e0974: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0978u;
        goto label_1e0978;
    }
    ctx->pc = 0x1E0970u;
    {
        const bool branch_taken_0x1e0970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0970u;
        // 0x1e0974: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0970) {
            ctx->pc = 0x1E09A0u;
            goto label_1e09a0;
        }
    }
    ctx->pc = 0x1E0978u;
label_1e0978:
    // 0x1e0978: 0x24426630  addiu       $v0, $v0, 0x6630
    ctx->pc = 0x1e0978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26160));
label_1e097c:
    // 0x1e097c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e097cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0980:
    // 0x1e0980: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e0980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0984:
    // 0x1e0984: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e0988:
    // 0x1e0988: 0x320f809  jalr        $t9
label_1e098c:
    if (ctx->pc == 0x1E098Cu) {
        ctx->pc = 0x1E0990u;
        goto label_1e0990;
    }
    ctx->pc = 0x1E0988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0990u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0988u, 0x1E0990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0990u;
label_1e0990:
    // 0x1e0990: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e0994:
    if (ctx->pc == 0x1E0994u) {
        ctx->pc = 0x1E0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0990u;
        // 0x1e0994: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0998u;
        goto label_1e0998;
    }
    ctx->pc = 0x1E0990u;
    {
        const bool branch_taken_0x1e0990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0990u;
        // 0x1e0994: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0990) {
            ctx->pc = 0x1E09A0u;
            goto label_1e09a0;
        }
    }
    ctx->pc = 0x1E0998u;
label_1e0998:
    // 0x1e0998: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1e0998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1e099c:
    // 0x1e099c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e099cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e09a0:
    // 0x1e09a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e09a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e09a4:
    // 0x1e09a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e09a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e09a8:
    // 0x1e09a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e09a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e09ac:
    // 0x1e09ac: 0x3e00008  jr          $ra
label_1e09b0:
    if (ctx->pc == 0x1E09B0u) {
        ctx->pc = 0x1E09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09ACu;
        // 0x1e09b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E09B4u;
        goto label_fallthrough_0x1e09ac;
    }
    ctx->pc = 0x1E09ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09ACu;
        // 0x1e09b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E09ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e09ac:
    ctx->pc = 0x1E09B4u;
}
