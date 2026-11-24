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

// Function: sub_003730B0
// Address: 0x3730b0 - 0x3730f0
void sub_003730B0_0x3730b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003730B0_0x3730b0");
#endif

    switch (ctx->pc) {
        case 0x3730ccu: goto label_3730cc;
        case 0x3730dcu: goto label_3730dc;
        default: break;
    }

    ctx->pc = 0x3730b0u;

    // 0x3730b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3730b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3730b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3730b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3730b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3730b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3730bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3730bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730c0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3730c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3730c4: 0xc095150  jal         func_254540
    ctx->pc = 0x3730C4u;
    SET_GPR_U32(ctx, 31, 0x3730CCu);
    ctx->pc = 0x3730C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730C4u;
    // 0x3730c8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3730C4u, 0x3730CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730CCu;
label_3730cc:
    // 0x3730cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3730CCu;
    {
        const bool branch_taken_0x3730cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3730D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730CCu;
        // 0x3730d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3730cc) {
            ctx->pc = 0x3730E0u;
            goto label_3730e0;
        }
    }
    ctx->pc = 0x3730D4u;
    // 0x3730d4: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x3730D4u;
    SET_GPR_U32(ctx, 31, 0x3730DCu);
    ctx->pc = 0x3730D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730D4u;
    // 0x3730d8: 0xa200001e  sb          $zero, 0x1E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x3730D4u, 0x3730DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730DCu;
label_3730dc:
    // 0x3730dc: 0x0  nop
    ctx->pc = 0x3730dcu;
    // NOP
label_3730e0:
    // 0x3730e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3730e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3730e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3730e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3730e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3730E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730E8u;
        // 0x3730ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3730E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3730F0u;
}
