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

// Function: sub_00322E10
// Address: 0x322e10 - 0x322ec0
void sub_00322E10_0x322e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322E10_0x322e10");
#endif

    switch (ctx->pc) {
        case 0x322e50u: goto label_322e50;
        case 0x322e58u: goto label_322e58;
        case 0x322e64u: goto label_322e64;
        case 0x322e80u: goto label_322e80;
        default: break;
    }

    ctx->pc = 0x322e10u;

    // 0x322e10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x322e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x322e14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x322e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x322e18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x322e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x322e1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x322e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x322e20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x322e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x322e24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x322e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x322e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x322e2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322e30: 0x24b20010  addiu       $s2, $a1, 0x10
    ctx->pc = 0x322e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x322e34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322e38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x322e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e3c: 0x8cb30004  lw          $s3, 0x4($a1)
    ctx->pc = 0x322e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x322e40: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x322e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x322e44: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x322E44u;
    {
        const bool branch_taken_0x322e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E44u;
        // 0x322e48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e44) {
            ctx->pc = 0x322E90u;
            goto label_322e90;
        }
    }
    ctx->pc = 0x322E4Cu;
    // 0x322e4c: 0x0  nop
    ctx->pc = 0x322e4cu;
    // NOP
label_322e50:
    // 0x322e50: 0xc0c8a00  jal         func_322800
    ctx->pc = 0x322E50u;
    SET_GPR_U32(ctx, 31, 0x322E58u);
    ctx->pc = 0x322E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E50u;
    // 0x322e54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322800u, 0x322E50u, 0x322E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E58u;
label_322e58:
    // 0x322e58: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x322e58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e5c: 0xc0c7fc0  jal         func_31FF00
    ctx->pc = 0x322E5Cu;
    SET_GPR_U32(ctx, 31, 0x322E64u);
    ctx->pc = 0x322E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E5Cu;
    // 0x322e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FF00u, 0x322E5Cu, 0x322E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E64u;
label_322e64:
    // 0x322e64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x322e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x322e68: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x322E68u;
    {
        const bool branch_taken_0x322e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E68u;
        // 0x322e6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e68) {
            ctx->pc = 0x322E80u;
            goto label_322e80;
        }
    }
    ctx->pc = 0x322E70u;
    // 0x322e70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x322e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x322e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322e78: 0xc0c89a4  jal         func_322690
    ctx->pc = 0x322E78u;
    SET_GPR_U32(ctx, 31, 0x322E80u);
    ctx->pc = 0x322E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E78u;
    // 0x322e7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322690u, 0x322E78u, 0x322E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E80u;
label_322e80:
    // 0x322e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x322e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x322e84: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x322e84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x322e88: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x322E88u;
    {
        const bool branch_taken_0x322e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E88u;
        // 0x322e8c: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e88) {
            ctx->pc = 0x322E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322e50;
        }
    }
    ctx->pc = 0x322E90u;
label_322e90:
    // 0x322e90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322e94: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x322e94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x322e98: 0xac316004  sw          $s1, 0x6004($at)
    ctx->pc = 0x322e98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24580), GPR_U32(ctx, 17));
    // 0x322e9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x322e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x322ea0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x322ea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x322ea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x322ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322ea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x322ea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322eac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x322EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EB8u;
        // 0x322ebc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322EC0u;
}
