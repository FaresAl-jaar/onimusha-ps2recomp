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

// Function: sub_00337260
// Address: 0x337260 - 0x3372f0
void sub_00337260_0x337260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337260_0x337260");
#endif

    switch (ctx->pc) {
        case 0x33728cu: goto label_33728c;
        case 0x3372a0u: goto label_3372a0;
        case 0x3372d4u: goto label_3372d4;
        default: break;
    }

    ctx->pc = 0x337260u;

    // 0x337260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x337260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x337264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x337264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x337268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33726c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x337270: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x337270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337274: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x337274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337278: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x337278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33727c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x33727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x337280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x337280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337284: 0xc0bd174  jal         func_2F45D0
    ctx->pc = 0x337284u;
    SET_GPR_U32(ctx, 31, 0x33728Cu);
    ctx->pc = 0x337288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337284u;
    // 0x337288: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45D0u, 0x337284u, 0x33728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33728Cu;
label_33728c:
    // 0x33728c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33728cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x337290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x337290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337294: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x337294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x337298: 0xc0bd174  jal         func_2F45D0
    ctx->pc = 0x337298u;
    SET_GPR_U32(ctx, 31, 0x3372A0u);
    ctx->pc = 0x33729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337298u;
    // 0x33729c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45D0u, 0x337298u, 0x3372A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372A0u;
label_3372a0:
    // 0x3372a0: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x3372a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3372a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3372A4u;
    {
        const bool branch_taken_0x3372a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372a4) {
            ctx->pc = 0x3372B8u;
            goto label_3372b8;
        }
    }
    ctx->pc = 0x3372ACu;
    // 0x3372ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3372ACu;
    {
        const bool branch_taken_0x3372ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3372B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372ACu;
        // 0x3372b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372ac) {
            ctx->pc = 0x3372D8u;
            goto label_3372d8;
        }
    }
    ctx->pc = 0x3372B4u;
    // 0x3372b4: 0x0  nop
    ctx->pc = 0x3372b4u;
    // NOP
label_3372b8:
    // 0x3372b8: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x3372b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3372bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3372BCu;
    {
        const bool branch_taken_0x3372bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3372C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372BCu;
        // 0x3372c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372bc) {
            ctx->pc = 0x3372CCu;
            goto label_3372cc;
        }
    }
    ctx->pc = 0x3372C4u;
    // 0x3372c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3372C4u;
    {
        const bool branch_taken_0x3372c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3372C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372C4u;
        // 0x3372c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372c4) {
            ctx->pc = 0x3372D4u;
            goto label_3372d4;
        }
    }
    ctx->pc = 0x3372CCu;
label_3372cc:
    // 0x3372cc: 0xc0cdc4c  jal         func_337130
    ctx->pc = 0x3372CCu;
    SET_GPR_U32(ctx, 31, 0x3372D4u);
    ctx->pc = 0x3372D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3372CCu;
    // 0x3372d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337130u, 0x3372CCu, 0x3372D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372D4u;
label_3372d4:
    // 0x3372d4: 0x0  nop
    ctx->pc = 0x3372d4u;
    // NOP
label_3372d8:
    // 0x3372d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3372d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3372dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3372dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3372e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3372e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3372e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3372e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3372e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3372E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3372ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372E8u;
        // 0x3372ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3372E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3372F0u;
}
