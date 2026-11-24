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

// Function: sub_0033A950
// Address: 0x33a950 - 0x33a9bc
void sub_0033A950_0x33a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A950_0x33a950");
#endif

    switch (ctx->pc) {
        case 0x33a970u: goto label_33a970;
        case 0x33a988u: goto label_33a988;
        default: break;
    }

    ctx->pc = 0x33a950u;

    // 0x33a950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33a958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a964: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x33a964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33a968: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33a968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a96c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a970:
    // 0x33a970: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33a974: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A974u;
    {
        const bool branch_taken_0x33a974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33a974) {
            ctx->pc = 0x33A998u;
            goto label_33a998;
        }
    }
    ctx->pc = 0x33A97Cu;
    // 0x33a97c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33a97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a980: 0xc0ce7a8  jal         func_339EA0
    ctx->pc = 0x33A980u;
    SET_GPR_U32(ctx, 31, 0x33A988u);
    ctx->pc = 0x33A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A980u;
    // 0x33a984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339EA0u, 0x33A980u, 0x33A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A988u;
label_33a988:
    // 0x33a988: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x33a988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x33a98c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33a990: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33A990u;
    {
        const bool branch_taken_0x33a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A990u;
        // 0x33a994: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a990) {
            ctx->pc = 0x33A9A8u;
            goto label_33a9a8;
        }
    }
    ctx->pc = 0x33A998u;
label_33a998:
    // 0x33a998: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33a998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x33a99c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x33a99cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33a9a0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x33A9A0u;
    {
        const bool branch_taken_0x33a9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9A0u;
        // 0x33a9a4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9a0) {
            ctx->pc = 0x33A970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a970;
        }
    }
    ctx->pc = 0x33A9A8u;
label_33a9a8:
    // 0x33a9a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x33A9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9B4u;
        // 0x33a9b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A9BCu;
}
