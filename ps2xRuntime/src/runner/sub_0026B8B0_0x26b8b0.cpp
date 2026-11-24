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

// Function: sub_0026B8B0
// Address: 0x26b8b0 - 0x26b960
void sub_0026B8B0_0x26b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B8B0_0x26b8b0");
#endif

    switch (ctx->pc) {
        case 0x26b8e8u: goto label_26b8e8;
        case 0x26b910u: goto label_26b910;
        default: break;
    }

    ctx->pc = 0x26b8b0u;

    // 0x26b8b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26b8b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26b8b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26b8bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26b8c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26b8c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26b8c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x26b8c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b8d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26b8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8d8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x26b8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26b8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8e0: 0xc09ae5c  jal         func_26B970
    ctx->pc = 0x26B8E0u;
    SET_GPR_U32(ctx, 31, 0x26B8E8u);
    ctx->pc = 0x26B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B8E0u;
    // 0x26b8e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B970u, 0x26B8E0u, 0x26B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8E8u;
label_26b8e8:
    // 0x26b8e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26b8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8ec: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x26B8ECu;
    {
        const bool branch_taken_0x26b8ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8ECu;
        // 0x26b8f0: 0x326400ff  andi        $a0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8ec) {
            ctx->pc = 0x26B918u;
            goto label_26b918;
        }
    }
    ctx->pc = 0x26B8F4u;
    // 0x26b8f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b8f8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B8F8u;
    {
        const bool branch_taken_0x26b8f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26b8f8) {
            ctx->pc = 0x26B918u;
            goto label_26b918;
        }
    }
    ctx->pc = 0x26B900u;
    // 0x26b900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b904: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b908: 0xc09ae5c  jal         func_26B970
    ctx->pc = 0x26B908u;
    SET_GPR_U32(ctx, 31, 0x26B910u);
    ctx->pc = 0x26B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B908u;
    // 0x26b90c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B970u, 0x26B908u, 0x26B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B910u;
label_26b910:
    // 0x26b910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26b910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b914: 0x0  nop
    ctx->pc = 0x26b914u;
    // NOP
label_26b918:
    // 0x26b918: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B918u;
    {
        const bool branch_taken_0x26b918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b918) {
            ctx->pc = 0x26B938u;
            goto label_26b938;
        }
    }
    ctx->pc = 0x26B920u;
    // 0x26b920: 0x90a4000a  lbu         $a0, 0xA($a1)
    ctx->pc = 0x26b920u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x26b924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b928: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B928u;
    {
        const bool branch_taken_0x26b928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b928) {
            ctx->pc = 0x26B938u;
            goto label_26b938;
        }
    }
    ctx->pc = 0x26B930u;
    // 0x26b930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b934: 0x0  nop
    ctx->pc = 0x26b934u;
    // NOP
label_26b938:
    // 0x26b938: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x26b938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26b93c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x26b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x26b940: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26b940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26b944: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26b944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b948: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26b948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b94c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26b94cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b958: 0x3e00008  jr          $ra
    ctx->pc = 0x26B958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B958u;
        // 0x26b95c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B960u;
}
