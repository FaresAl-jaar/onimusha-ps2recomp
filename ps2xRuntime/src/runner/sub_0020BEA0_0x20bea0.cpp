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

// Function: sub_0020BEA0
// Address: 0x20bea0 - 0x20bf14
void sub_0020BEA0_0x20bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BEA0_0x20bea0");
#endif

    switch (ctx->pc) {
        case 0x20bee0u: goto label_20bee0;
        case 0x20bef0u: goto label_20bef0;
        case 0x20bef8u: goto label_20bef8;
        case 0x20bf00u: goto label_20bf00;
        default: break;
    }

    ctx->pc = 0x20bea0u;

    // 0x20bea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20bea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20bea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20beac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20beb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20beb4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20beb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x20beb8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20BEB8u;
    {
        const bool branch_taken_0x20beb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEB8u;
        // 0x20bebc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20beb8) {
            ctx->pc = 0x20BEF0u;
            goto label_20bef0;
        }
    }
    ctx->pc = 0x20BEC0u;
    // 0x20bec0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x20bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x20bec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20bec8: 0x8c6386b0  lw          $v1, -0x7950($v1)
    ctx->pc = 0x20bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936240)));
    // 0x20becc: 0x600008  jr          $v1
    ctx->pc = 0x20BECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BED8u: goto label_20bed8;
            case 0x20BEE8u: goto label_20bee8;
            case 0x20BEF0u: goto label_20bef0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BECCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20BED4u;
    // 0x20bed4: 0x0  nop
    ctx->pc = 0x20bed4u;
    // NOP
label_20bed8:
    // 0x20bed8: 0xc082ea8  jal         func_20BAA0
    ctx->pc = 0x20BED8u;
    SET_GPR_U32(ctx, 31, 0x20BEE0u);
    ctx->pc = 0x20BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BED8u;
    // 0x20bedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAA0u, 0x20BED8u, 0x20BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEE0u;
label_20bee0:
    // 0x20bee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20BEE0u;
    {
        const bool branch_taken_0x20bee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bee0) {
            ctx->pc = 0x20BEF0u;
            goto label_20bef0;
        }
    }
    ctx->pc = 0x20BEE8u;
label_20bee8:
    // 0x20bee8: 0xc082f7e  jal         func_20BDF8
    ctx->pc = 0x20BEE8u;
    SET_GPR_U32(ctx, 31, 0x20BEF0u);
    ctx->pc = 0x20BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEE8u;
    // 0x20beec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BDF8u, 0x20BEE8u, 0x20BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEF0u;
label_20bef0:
    // 0x20bef0: 0xc082fc6  jal         func_20BF18
    ctx->pc = 0x20BEF0u;
    SET_GPR_U32(ctx, 31, 0x20BEF8u);
    ctx->pc = 0x20BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEF0u;
    // 0x20bef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF18u, 0x20BEF0u, 0x20BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEF8u;
label_20bef8:
    // 0x20bef8: 0xc081bf0  jal         func_206FC0
    ctx->pc = 0x20BEF8u;
    SET_GPR_U32(ctx, 31, 0x20BF00u);
    ctx->pc = 0x20BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEF8u;
    // 0x20befc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206FC0u, 0x20BEF8u, 0x20BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF00u;
label_20bf00:
    // 0x20bf00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20bf00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bf08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20bf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x20BF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF0Cu;
        // 0x20bf10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BF14u;
}
