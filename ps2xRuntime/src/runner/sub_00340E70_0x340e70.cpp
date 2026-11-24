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

// Function: sub_00340E70
// Address: 0x340e70 - 0x340ee8
void sub_00340E70_0x340e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340E70_0x340e70");
#endif

    switch (ctx->pc) {
        case 0x340e98u: goto label_340e98;
        default: break;
    }

    ctx->pc = 0x340e70u;

    // 0x340e70: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x340e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x340e74: 0x3c080065  lui         $t0, 0x65
    ctx->pc = 0x340e74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)101 << 16));
    // 0x340e78: 0x94276ac4  lhu         $a3, 0x6AC4($at)
    ctx->pc = 0x340e78u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x340e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x340e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e80: 0x25087740  addiu       $t0, $t0, 0x7740
    ctx->pc = 0x340e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30528));
    // 0x340e84: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x340e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x340e88: 0x90266ac8  lbu         $a2, 0x6AC8($at)
    ctx->pc = 0x340e88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x340e8c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x340e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340e90: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x340e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x340e94: 0x0  nop
    ctx->pc = 0x340e94u;
    // NOP
label_340e98:
    // 0x340e98: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x340e98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x340e9c: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x340E9Cu;
    {
        const bool branch_taken_0x340e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x340e9c) {
            ctx->pc = 0x340EC8u;
            goto label_340ec8;
        }
    }
    ctx->pc = 0x340EA4u;
    // 0x340ea4: 0x14e30008  bne         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x340EA4u;
    {
        const bool branch_taken_0x340ea4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x340ea4) {
            ctx->pc = 0x340EC8u;
            goto label_340ec8;
        }
    }
    ctx->pc = 0x340EACu;
    // 0x340eac: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x340eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x340eb0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x340EB0u;
    {
        const bool branch_taken_0x340eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x340eb0) {
            ctx->pc = 0x340EC0u;
            goto label_340ec0;
        }
    }
    ctx->pc = 0x340EB8u;
    // 0x340eb8: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x340EB8u;
    {
        const bool branch_taken_0x340eb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x340eb8) {
            ctx->pc = 0x340EC8u;
            goto label_340ec8;
        }
    }
    ctx->pc = 0x340EC0u;
label_340ec0:
    // 0x340ec0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340EC0u;
    {
        const bool branch_taken_0x340ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ec0) {
            ctx->pc = 0x340EE0u;
            goto label_340ee0;
        }
    }
    ctx->pc = 0x340EC8u;
label_340ec8:
    // 0x340ec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x340ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x340ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x340eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x340ed0: 0x2c430019  sltiu       $v1, $v0, 0x19
    ctx->pc = 0x340ed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x340ed4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x340ED4u;
    {
        const bool branch_taken_0x340ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340ED4u;
        // 0x340ed8: 0x2508000a  addiu       $t0, $t0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ed4) {
            ctx->pc = 0x340E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340e98;
        }
    }
    ctx->pc = 0x340EDCu;
    // 0x340edc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x340edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340ee0:
    // 0x340ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x340EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340EE8u;
}
