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

// Function: sub_00290F50
// Address: 0x290f50 - 0x290fec
void sub_00290F50_0x290f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290F50_0x290f50");
#endif

    switch (ctx->pc) {
        case 0x290f64u: goto label_290f64;
        case 0x290f70u: goto label_290f70;
        case 0x290f80u: goto label_290f80;
        case 0x290fbcu: goto label_290fbc;
        case 0x290fc8u: goto label_290fc8;
        case 0x290fd4u: goto label_290fd4;
        case 0x290fe0u: goto label_290fe0;
        default: break;
    }

    ctx->pc = 0x290f50u;

    // 0x290f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290f54: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x290f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x290f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290f5c: 0xc0e2770  jal         func_389DC0
    ctx->pc = 0x290F5Cu;
    SET_GPR_U32(ctx, 31, 0x290F64u);
    ctx->pc = 0x290F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F5Cu;
    // 0x290f60: 0x248422b0  addiu       $a0, $a0, 0x22B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389DC0u, 0x290F5Cu, 0x290F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F64u;
label_290f64:
    // 0x290f64: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x290f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x290f68: 0xc0e36e4  jal         func_38DB90
    ctx->pc = 0x290F68u;
    SET_GPR_U32(ctx, 31, 0x290F70u);
    ctx->pc = 0x290F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F68u;
    // 0x290f6c: 0x24842e70  addiu       $a0, $a0, 0x2E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DB90u, 0x290F68u, 0x290F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F70u;
label_290f70:
    // 0x290f70: 0x3c030091  lui         $v1, 0x91
    ctx->pc = 0x290f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)145 << 16));
    // 0x290f74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f78: 0x24634c30  addiu       $v1, $v1, 0x4C30
    ctx->pc = 0x290f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19504));
    // 0x290f7c: 0x0  nop
    ctx->pc = 0x290f7cu;
    // NOP
label_290f80:
    // 0x290f80: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x290f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x290f84: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x290f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x290f88: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x290f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x290f8c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x290f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x290f90: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x290f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x290f94: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x290f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x290f98: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x290f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x290f9c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x290f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x290fa0: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x290fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x290fa4: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x290fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x290fa8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x290FA8u;
    {
        const bool branch_taken_0x290fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FA8u;
        // 0x290fac: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fa8) {
            ctx->pc = 0x290F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290f80;
        }
    }
    ctx->pc = 0x290FB0u;
    // 0x290fb0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x290fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x290fb4: 0xc0e3650  jal         func_38D940
    ctx->pc = 0x290FB4u;
    SET_GPR_U32(ctx, 31, 0x290FBCu);
    ctx->pc = 0x290FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290FB4u;
    // 0x290fb8: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D940u, 0x290FB4u, 0x290FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FBCu;
label_290fbc:
    // 0x290fbc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x290fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x290fc0: 0xc0d0a0c  jal         func_342830
    ctx->pc = 0x290FC0u;
    SET_GPR_U32(ctx, 31, 0x290FC8u);
    ctx->pc = 0x290FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290FC0u;
    // 0x290fc4: 0x24844100  addiu       $a0, $a0, 0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342830u, 0x290FC0u, 0x290FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FC8u;
label_290fc8:
    // 0x290fc8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x290fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x290fcc: 0xc0d0b10  jal         func_342C40
    ctx->pc = 0x290FCCu;
    SET_GPR_U32(ctx, 31, 0x290FD4u);
    ctx->pc = 0x290FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290FCCu;
    // 0x290fd0: 0x24842270  addiu       $a0, $a0, 0x2270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C40u, 0x290FCCu, 0x290FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FD4u;
label_290fd4:
    // 0x290fd4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x290fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x290fd8: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x290FD8u;
    SET_GPR_U32(ctx, 31, 0x290FE0u);
    ctx->pc = 0x290FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290FD8u;
    // 0x290fdc: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429B0u, 0x290FD8u, 0x290FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FE0u;
label_290fe0:
    // 0x290fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x290FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FE4u;
        // 0x290fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290FECu;
}
