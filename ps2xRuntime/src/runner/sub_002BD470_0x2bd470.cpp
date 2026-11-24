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

// Function: sub_002BD470
// Address: 0x2bd470 - 0x2bd4d8
void sub_002BD470_0x2bd470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD470_0x2bd470");
#endif

    switch (ctx->pc) {
        case 0x2bd498u: goto label_2bd498;
        case 0x2bd4bcu: goto label_2bd4bc;
        default: break;
    }

    ctx->pc = 0x2bd470u;

    // 0x2bd470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bd470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bd474: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bd474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bd478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bd478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bd47c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd480: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd488: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bd488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd48c: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x2bd48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2bd490: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2BD490u;
    SET_GPR_U32(ctx, 31, 0x2BD498u);
    ctx->pc = 0x2BD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD490u;
    // 0x2bd494: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2BD490u, 0x2BD498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD498u;
label_2bd498:
    // 0x2bd498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD498u;
    {
        const bool branch_taken_0x2bd498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd498) {
            ctx->pc = 0x2BD4A8u;
            goto label_2bd4a8;
        }
    }
    ctx->pc = 0x2BD4A0u;
    // 0x2bd4a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD4A0u;
    {
        const bool branch_taken_0x2bd4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4A0u;
        // 0x2bd4a4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4a0) {
            ctx->pc = 0x2BD4ACu;
            goto label_2bd4ac;
        }
    }
    ctx->pc = 0x2BD4A8u;
label_2bd4a8:
    // 0x2bd4a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bd4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd4ac:
    // 0x2bd4ac: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x2bd4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    // 0x2bd4b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4b4: 0xc0b226c  jal         func_2C89B0
    ctx->pc = 0x2BD4B4u;
    SET_GPR_U32(ctx, 31, 0x2BD4BCu);
    ctx->pc = 0x2BD4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4B4u;
    // 0x2bd4b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C89B0u, 0x2BD4B4u, 0x2BD4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4BCu;
label_2bd4bc:
    // 0x2bd4bc: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2bd4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2bd4c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bd4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd4c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bd4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd4cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4D0u;
        // 0x2bd4d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD4D8u;
}
