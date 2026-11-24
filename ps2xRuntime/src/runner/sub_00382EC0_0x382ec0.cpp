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

// Function: sub_00382EC0
// Address: 0x382ec0 - 0x382f50
void sub_00382EC0_0x382ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382EC0_0x382ec0");
#endif

    switch (ctx->pc) {
        case 0x382f08u: goto label_382f08;
        case 0x382f1cu: goto label_382f1c;
        default: break;
    }

    ctx->pc = 0x382ec0u;

    // 0x382ec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x382ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x382ec4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x382ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x382ec8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x382ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x382ecc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x382eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x382ed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x382ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x382ed4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x382ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x382edc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x382edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382ee4: 0x93838c28  lbu         $v1, -0x73D8($gp)
    ctx->pc = 0x382ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937640)));
    // 0x382ee8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x382EE8u;
    {
        const bool branch_taken_0x382ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382EE8u;
        // 0x382eec: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ee8) {
            ctx->pc = 0x382F30u;
            goto label_382f30;
        }
    }
    ctx->pc = 0x382EF0u;
    // 0x382ef0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x382ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x382ef4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x382ef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x382ef8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x382EF8u;
    {
        const bool branch_taken_0x382ef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x382EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382EF8u;
        // 0x382efc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ef8) {
            ctx->pc = 0x382F30u;
            goto label_382f30;
        }
    }
    ctx->pc = 0x382F00u;
    // 0x382f00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x382f00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f04: 0x0  nop
    ctx->pc = 0x382f04u;
    // NOP
label_382f08:
    // 0x382f08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x382f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x382f0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x382f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x382f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f14: 0xc0e0bd4  jal         func_382F50
    ctx->pc = 0x382F14u;
    SET_GPR_U32(ctx, 31, 0x382F1Cu);
    ctx->pc = 0x382F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382F14u;
    // 0x382f18: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382F50u, 0x382F14u, 0x382F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382F1Cu;
label_382f1c:
    // 0x382f1c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x382f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x382f20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x382f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x382f24: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x382f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x382f28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x382F28u;
    {
        const bool branch_taken_0x382f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F28u;
        // 0x382f2c: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f28) {
            ctx->pc = 0x382F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382f08;
        }
    }
    ctx->pc = 0x382F30u;
label_382f30:
    // 0x382f30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x382f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x382f34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x382f34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x382f38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x382f38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x382f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x382f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382f48: 0x3e00008  jr          $ra
    ctx->pc = 0x382F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F48u;
        // 0x382f4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382F50u;
}
