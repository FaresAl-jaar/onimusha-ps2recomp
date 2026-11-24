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

// Function: sub_0030CC40
// Address: 0x30cc40 - 0x30ccc0
void sub_0030CC40_0x30cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CC40_0x30cc40");
#endif

    ctx->pc = 0x30cc40u;

    // 0x30cc40: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x30cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x30cc44: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x30cc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x30cc48: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x30cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x30cc4c: 0xac22bb3c  sw          $v0, -0x44C4($at)
    ctx->pc = 0x30cc4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DBB3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DBB3Cu, _value); } while (0);
    // 0x30cc50: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x30cc50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30cc54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30CC54u;
    {
        const bool branch_taken_0x30cc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cc54) {
            ctx->pc = 0x30CC70u;
            goto label_30cc70;
        }
    }
    ctx->pc = 0x30CC5Cu;
    // 0x30cc5c: 0x90a20040  lbu         $v0, 0x40($a1)
    ctx->pc = 0x30cc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x30cc60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CC60u;
    {
        const bool branch_taken_0x30cc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC60u;
        // 0x30cc64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc60) {
            ctx->pc = 0x30CC70u;
            goto label_30cc70;
        }
    }
    ctx->pc = 0x30CC68u;
    // 0x30cc68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30CC68u;
    {
        const bool branch_taken_0x30cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cc68) {
            ctx->pc = 0x30CCB8u;
            goto label_30ccb8;
        }
    }
    ctx->pc = 0x30CC70u;
label_30cc70:
    // 0x30cc70: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x30cc70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x30cc74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30CC74u;
    {
        const bool branch_taken_0x30cc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cc74) {
            ctx->pc = 0x30CC90u;
            goto label_30cc90;
        }
    }
    ctx->pc = 0x30CC7Cu;
    // 0x30cc7c: 0x90a20041  lbu         $v0, 0x41($a1)
    ctx->pc = 0x30cc7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 65)));
    // 0x30cc80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CC80u;
    {
        const bool branch_taken_0x30cc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC80u;
        // 0x30cc84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc80) {
            ctx->pc = 0x30CC90u;
            goto label_30cc90;
        }
    }
    ctx->pc = 0x30CC88u;
    // 0x30cc88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30CC88u;
    {
        const bool branch_taken_0x30cc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cc88) {
            ctx->pc = 0x30CCB8u;
            goto label_30ccb8;
        }
    }
    ctx->pc = 0x30CC90u;
label_30cc90:
    // 0x30cc90: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x30cc90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30cc94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30CC94u;
    {
        const bool branch_taken_0x30cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cc94) {
            ctx->pc = 0x30CCB0u;
            goto label_30ccb0;
        }
    }
    ctx->pc = 0x30CC9Cu;
    // 0x30cc9c: 0x90a20042  lbu         $v0, 0x42($a1)
    ctx->pc = 0x30cc9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 66)));
    // 0x30cca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CCA0u;
    {
        const bool branch_taken_0x30cca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCA0u;
        // 0x30cca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cca0) {
            ctx->pc = 0x30CCB0u;
            goto label_30ccb0;
        }
    }
    ctx->pc = 0x30CCA8u;
    // 0x30cca8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30CCA8u;
    {
        const bool branch_taken_0x30cca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cca8) {
            ctx->pc = 0x30CCB8u;
            goto label_30ccb8;
        }
    }
    ctx->pc = 0x30CCB0u;
label_30ccb0:
    // 0x30ccb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30ccb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ccb4: 0x0  nop
    ctx->pc = 0x30ccb4u;
    // NOP
label_30ccb8:
    // 0x30ccb8: 0x3e00008  jr          $ra
    ctx->pc = 0x30CCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CCC0u;
}
