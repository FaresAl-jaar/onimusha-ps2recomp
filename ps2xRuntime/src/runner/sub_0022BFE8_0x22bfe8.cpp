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

// Function: sub_0022BFE8
// Address: 0x22bfe8 - 0x22c02c
void sub_0022BFE8_0x22bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BFE8_0x22bfe8");
#endif

    switch (ctx->pc) {
        case 0x22bfe8u: goto label_22bfe8;
        case 0x22bfecu: goto label_22bfec;
        case 0x22bff0u: goto label_22bff0;
        case 0x22bff4u: goto label_22bff4;
        case 0x22bff8u: goto label_22bff8;
        case 0x22bffcu: goto label_22bffc;
        case 0x22c000u: goto label_22c000;
        case 0x22c004u: goto label_22c004;
        case 0x22c008u: goto label_22c008;
        case 0x22c00cu: goto label_22c00c;
        case 0x22c010u: goto label_22c010;
        case 0x22c014u: goto label_22c014;
        case 0x22c018u: goto label_22c018;
        case 0x22c01cu: goto label_22c01c;
        case 0x22c020u: goto label_22c020;
        case 0x22c024u: goto label_22c024;
        case 0x22c028u: goto label_22c028;
        default: break;
    }

    ctx->pc = 0x22bfe8u;

label_22bfe8:
    // 0x22bfe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22bfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22bfec:
    // 0x22bfec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22bfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22bff0:
    // 0x22bff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22bff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22bff4:
    // 0x22bff4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_22bff8:
    // 0x22bff8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x22bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_22bffc:
    // 0x22bffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22c000:
    if (ctx->pc == 0x22C000u) {
        ctx->pc = 0x22C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFFCu;
        // 0x22c000: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C004u;
        goto label_22c004;
    }
    ctx->pc = 0x22BFFCu;
    {
        const bool branch_taken_0x22bffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFFCu;
        // 0x22c000: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bffc) {
            ctx->pc = 0x22C010u;
            goto label_22c010;
        }
    }
    ctx->pc = 0x22C004u;
label_22c004:
    // 0x22c004: 0x8c43b2f8  lw          $v1, -0x4D08($v0)
    ctx->pc = 0x22c004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947576)));
label_22c008:
    // 0x22c008: 0x60f809  jalr        $v1
label_22c00c:
    if (ctx->pc == 0x22C00Cu) {
        ctx->pc = 0x22C010u;
        goto label_22c010;
    }
    ctx->pc = 0x22C008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22C010u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C008u, 0x22C010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C010u;
label_22c010:
    // 0x22c010: 0xc08f952  jal         func_23E548
label_22c014:
    if (ctx->pc == 0x22C014u) {
        ctx->pc = 0x22C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C010u;
        // 0x22c014: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C018u;
        goto label_22c018;
    }
    ctx->pc = 0x22C010u;
    SET_GPR_U32(ctx, 31, 0x22C018u);
    ctx->pc = 0x22C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C010u;
    // 0x22c014: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E548u, 0x22C010u, 0x22C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C018u;
label_22c018:
    // 0x22c018: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x22c018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_22c01c:
    // 0x22c01c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22c01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22c020:
    // 0x22c020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c024:
    // 0x22c024: 0x3e00008  jr          $ra
label_22c028:
    if (ctx->pc == 0x22C028u) {
        ctx->pc = 0x22C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C024u;
        // 0x22c028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C02Cu;
        goto label_fallthrough_0x22c024;
    }
    ctx->pc = 0x22C024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C024u;
        // 0x22c028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22c024:
    ctx->pc = 0x22C02Cu;
}
