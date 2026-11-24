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

// Function: sub_00685E40
// Address: 0x685e40 - 0x685ed8
void sub_00685E40_0x685e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685E40_0x685e40");
#endif

    switch (ctx->pc) {
        case 0x685e58u: goto label_685e58;
        case 0x685e60u: goto label_685e60;
        case 0x685e88u: goto label_685e88;
        case 0x685eb4u: goto label_685eb4;
        default: break;
    }

    ctx->pc = 0x685e40u;

    // 0x685e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x685e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x685e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x685e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x685e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x685e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x685e4c: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x685e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x685e50: 0x2610ea90  addiu       $s0, $s0, -0x1570
    ctx->pc = 0x685e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961808));
    // 0x685e54: 0x0  nop
    ctx->pc = 0x685e54u;
    // NOP
label_685e58:
    // 0x685e58: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x685e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x685e5c: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x685e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_685e60:
    // 0x685e60: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x685e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x685e64: 0x0  nop
    ctx->pc = 0x685e64u;
    // NOP
    // 0x685e68: 0x0  nop
    ctx->pc = 0x685e68u;
    // NOP
    // 0x685e6c: 0x0  nop
    ctx->pc = 0x685e6cu;
    // NOP
    // 0x685e70: 0x0  nop
    ctx->pc = 0x685e70u;
    // NOP
    // 0x685e74: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x685E74u;
    {
        const bool branch_taken_0x685e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x685e74) {
            ctx->pc = 0x685E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_685e60;
        }
    }
    ctx->pc = 0x685E7Cu;
    // 0x685e7c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x685e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x685e80: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x685e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x685e84: 0x0  nop
    ctx->pc = 0x685e84u;
    // NOP
label_685e88:
    // 0x685e88: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x685e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x685e8c: 0x0  nop
    ctx->pc = 0x685e8cu;
    // NOP
    // 0x685e90: 0x0  nop
    ctx->pc = 0x685e90u;
    // NOP
    // 0x685e94: 0x0  nop
    ctx->pc = 0x685e94u;
    // NOP
    // 0x685e98: 0x0  nop
    ctx->pc = 0x685e98u;
    // NOP
    // 0x685e9c: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x685E9Cu;
    {
        const bool branch_taken_0x685e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x685e9c) {
            ctx->pc = 0x685E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_685e88;
        }
    }
    ctx->pc = 0x685EA4u;
    // 0x685ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x685ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x685ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x685ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x685eac: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x685EACu;
    SET_GPR_U32(ctx, 31, 0x685EB4u);
    ctx->pc = 0x685EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685EACu;
    // 0x685eb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x685EACu, 0x685EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685EB4u;
label_685eb4:
    // 0x685eb4: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x685eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x685eb8: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x685eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x685ebc: 0x2463fa90  addiu       $v1, $v1, -0x570
    ctx->pc = 0x685ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965904));
    // 0x685ec0: 0x1603ffe5  bne         $s0, $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x685EC0u;
    {
        const bool branch_taken_0x685ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x685ec0) {
            ctx->pc = 0x685E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_685e58;
        }
    }
    ctx->pc = 0x685EC8u;
    // 0x685ec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x685ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x685ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x685eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x685ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x685ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x685ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x685ED0u;
        // 0x685ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685ED8u;
}
