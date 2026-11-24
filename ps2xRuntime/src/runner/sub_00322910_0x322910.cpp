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

// Function: sub_00322910
// Address: 0x322910 - 0x3229a4
void sub_00322910_0x322910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322910_0x322910");
#endif

    switch (ctx->pc) {
        case 0x322938u: goto label_322938;
        case 0x322958u: goto label_322958;
        case 0x322970u: goto label_322970;
        default: break;
    }

    ctx->pc = 0x322910u;

    // 0x322910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x322914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x322914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x322918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x322918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32291c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x322920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x322924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32292c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32292cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322930: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x322930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322934: 0x0  nop
    ctx->pc = 0x322934u;
    // NOP
label_322938:
    // 0x322938: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32293c: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x32293cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x322940: 0x2219821  addu        $s3, $s1, $at
    ctx->pc = 0x322940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x322944: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x322944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x322948: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x322948u;
    {
        const bool branch_taken_0x322948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322948u;
        // 0x32294c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322948) {
            ctx->pc = 0x322970u;
            goto label_322970;
        }
    }
    ctx->pc = 0x322950u;
    // 0x322950: 0xc0cfd30  jal         func_33F4C0
    ctx->pc = 0x322950u;
    SET_GPR_U32(ctx, 31, 0x322958u);
    ctx->pc = 0x33F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F4C0u, 0x322950u, 0x322958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322958u;
label_322958:
    // 0x322958: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x322958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x32295c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322960: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x322960u;
    {
        const bool branch_taken_0x322960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x322964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322960u;
        // 0x322964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322960) {
            ctx->pc = 0x322970u;
            goto label_322970;
        }
    }
    ctx->pc = 0x322968u;
    // 0x322968: 0xc0cfb94  jal         func_33EE50
    ctx->pc = 0x322968u;
    SET_GPR_U32(ctx, 31, 0x322970u);
    ctx->pc = 0x33EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE50u, 0x322968u, 0x322970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322970u;
label_322970:
    // 0x322970: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x322970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x322974: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x322974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x322978: 0x26520110  addiu       $s2, $s2, 0x110
    ctx->pc = 0x322978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x32297c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x32297Cu;
    {
        const bool branch_taken_0x32297c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32297Cu;
        // 0x322980: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32297c) {
            ctx->pc = 0x322938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322938;
        }
    }
    ctx->pc = 0x322984u;
    // 0x322984: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x322984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32298c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32298cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322990: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322994: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32299c: 0x3e00008  jr          $ra
    ctx->pc = 0x32299Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3229A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32299Cu;
        // 0x3229a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32299Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3229A4u;
}
