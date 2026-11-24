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

// Function: sub_00245EE0
// Address: 0x245ee0 - 0x245f48
void sub_00245EE0_0x245ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245EE0_0x245ee0");
#endif

    switch (ctx->pc) {
        case 0x245ef4u: goto label_245ef4;
        case 0x245f0cu: goto label_245f0c;
        case 0x245f30u: goto label_245f30;
        default: break;
    }

    ctx->pc = 0x245ee0u;

    // 0x245ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x245ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245ee8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x245ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x245eec: 0xc094bb4  jal         func_252ED0
    ctx->pc = 0x245EECu;
    SET_GPR_U32(ctx, 31, 0x245EF4u);
    ctx->pc = 0x245EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245EECu;
    // 0x245ef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252ED0u, 0x245EECu, 0x245EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EF4u;
label_245ef4:
    // 0x245ef4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x245ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245efc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x245EFCu;
    {
        const bool branch_taken_0x245efc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x245F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EFCu;
        // 0x245f00: 0x2484c8f0  addiu       $a0, $a0, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245efc) {
            ctx->pc = 0x245F18u;
            goto label_245f18;
        }
    }
    ctx->pc = 0x245F04u;
    // 0x245f04: 0xc044332  jal         func_110CC8
    ctx->pc = 0x245F04u;
    SET_GPR_U32(ctx, 31, 0x245F0Cu);
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x245F04u, 0x245F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F0Cu;
label_245f0c:
    // 0x245f0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x245F0Cu;
    {
        const bool branch_taken_0x245f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F0Cu;
        // 0x245f10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f0c) {
            ctx->pc = 0x245F3Cu;
            goto label_245f3c;
        }
    }
    ctx->pc = 0x245F14u;
    // 0x245f14: 0x0  nop
    ctx->pc = 0x245f14u;
    // NOP
label_245f18:
    // 0x245f18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x245f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x245f1c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x245F1Cu;
    {
        const bool branch_taken_0x245f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x245f1c) {
            ctx->pc = 0x245F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245F1Cu;
            // 0x245f20: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245F38u;
            goto label_245f38;
        }
    }
    ctx->pc = 0x245F24u;
    // 0x245f24: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x245f28: 0xc044332  jal         func_110CC8
    ctx->pc = 0x245F28u;
    SET_GPR_U32(ctx, 31, 0x245F30u);
    ctx->pc = 0x245F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F28u;
    // 0x245f2c: 0x2484c910  addiu       $a0, $a0, -0x36F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x245F28u, 0x245F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F30u;
label_245f30:
    // 0x245f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245F30u;
    {
        const bool branch_taken_0x245f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F30u;
        // 0x245f34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f30) {
            ctx->pc = 0x245F3Cu;
            goto label_245f3c;
        }
    }
    ctx->pc = 0x245F38u;
label_245f38:
    // 0x245f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245f3c:
    // 0x245f3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x245f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245f40: 0x8094bd2  j           func_252F48
    ctx->pc = 0x245F40u;
    ctx->pc = 0x245F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245F40u;
    // 0x245f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252F48u;
    sub_00252F48_0x252f48(rdram, ctx, runtime); return;
    ctx->pc = 0x245F48u;
}
