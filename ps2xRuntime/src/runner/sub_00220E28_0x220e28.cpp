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

// Function: sub_00220E28
// Address: 0x220e28 - 0x220eb0
void sub_00220E28_0x220e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220E28_0x220e28");
#endif

    switch (ctx->pc) {
        case 0x220e58u: goto label_220e58;
        case 0x220e6cu: goto label_220e6c;
        default: break;
    }

    ctx->pc = 0x220e28u;

    // 0x220e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220e30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220e34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x220e38: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x220E38u;
    {
        const bool branch_taken_0x220e38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x220E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E38u;
        // 0x220e3c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e38) {
            ctx->pc = 0x220E98u;
            goto label_220e98;
        }
    }
    ctx->pc = 0x220E40u;
    // 0x220e40: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x220e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x220e44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x220e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e48: 0x2451a1cc  addiu       $s1, $v0, -0x5E34
    ctx->pc = 0x220e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
    // 0x220e4c: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x220e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x220e50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x220e50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BA1CCu));
    // 0x220e54: 0x0  nop
    ctx->pc = 0x220e54u;
    // NOP
label_220e58:
    // 0x220e58: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x220e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x220e5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220E5Cu;
    {
        const bool branch_taken_0x220e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E5Cu;
        // 0x220e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e5c) {
            ctx->pc = 0x220E70u;
            goto label_220e70;
        }
    }
    ctx->pc = 0x220E64u;
    // 0x220e64: 0xc0883ac  jal         func_220EB0
    ctx->pc = 0x220E64u;
    SET_GPR_U32(ctx, 31, 0x220E6Cu);
    ctx->pc = 0x220EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EB0u, 0x220E64u, 0x220E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E6Cu;
label_220e6c:
    // 0x220e6c: 0x42900b  movn        $s2, $v0, $v0
    ctx->pc = 0x220e6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_220e70:
    // 0x220e70: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x220e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x220e74: 0x603fff8  bgezl       $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x220E74u;
    {
        const bool branch_taken_0x220e74 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x220e74) {
            ctx->pc = 0x220E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220E74u;
            // 0x220e78: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220e58;
        }
    }
    ctx->pc = 0x220E7Cu;
    // 0x220e7c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x220e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220e84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220e88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220e8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220e90: 0x3e00008  jr          $ra
    ctx->pc = 0x220E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E90u;
        // 0x220e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220E98u;
label_220e98:
    // 0x220e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220e9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220e9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220ea0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220ea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220ea4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220ea8: 0x80883ac  j           func_220EB0
    ctx->pc = 0x220EA8u;
    ctx->pc = 0x220EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220EA8u;
    // 0x220eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220EB0u;
    sub_00220EB0_0x220eb0(rdram, ctx, runtime); return;
    ctx->pc = 0x220EB0u;
}
