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

// Function: sub_002B43C0
// Address: 0x2b43c0 - 0x2b4430
void sub_002B43C0_0x2b43c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B43C0_0x2b43c0");
#endif

    switch (ctx->pc) {
        case 0x2b43e0u: goto label_2b43e0;
        case 0x2b4404u: goto label_2b4404;
        default: break;
    }

    ctx->pc = 0x2b43c0u;

    // 0x2b43c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b43c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b43c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b43c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b43c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b43c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b43cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b43ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b43d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b43d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b43d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b43d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b43d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b43d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b43dc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2b43dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b43e0:
    // 0x2b43e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2b43e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b43e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B43E4u;
    {
        const bool branch_taken_0x2b43e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b43e4) {
            ctx->pc = 0x2B4408u;
            goto label_2b4408;
        }
    }
    ctx->pc = 0x2B43ECu;
    // 0x2b43ec: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b43ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b43f0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2b43f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b43f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B43F4u;
    {
        const bool branch_taken_0x2b43f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43F4u;
        // 0x2b43f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43f4) {
            ctx->pc = 0x2B4408u;
            goto label_2b4408;
        }
    }
    ctx->pc = 0x2B43FCu;
    // 0x2b43fc: 0xc0ad128  jal         func_2B44A0
    ctx->pc = 0x2B43FCu;
    SET_GPR_U32(ctx, 31, 0x2B4404u);
    ctx->pc = 0x2B4400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43FCu;
    // 0x2b4400: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B44A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B44A0u, 0x2B43FCu, 0x2B4404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4404u;
label_2b4404:
    // 0x2b4404: 0x0  nop
    ctx->pc = 0x2b4404u;
    // NOP
label_2b4408:
    // 0x2b4408: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b4408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b440c: 0x2e230006  sltiu       $v1, $s1, 0x6
    ctx->pc = 0x2b440cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b4410: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B4410u;
    {
        const bool branch_taken_0x2b4410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4410u;
        // 0x2b4414: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4410) {
            ctx->pc = 0x2B43E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b43e0;
        }
    }
    ctx->pc = 0x2B4418u;
    // 0x2b4418: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b4418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b441c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b441cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4428: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4428u;
        // 0x2b442c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4430u;
}
