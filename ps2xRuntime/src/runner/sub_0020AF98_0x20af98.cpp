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

// Function: sub_0020AF98
// Address: 0x20af98 - 0x20aff0
void sub_0020AF98_0x20af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AF98_0x20af98");
#endif

    switch (ctx->pc) {
        case 0x20af98u: goto label_20af98;
        case 0x20af9cu: goto label_20af9c;
        case 0x20afa0u: goto label_20afa0;
        case 0x20afa4u: goto label_20afa4;
        case 0x20afa8u: goto label_20afa8;
        case 0x20afacu: goto label_20afac;
        case 0x20afb0u: goto label_20afb0;
        case 0x20afb4u: goto label_20afb4;
        case 0x20afb8u: goto label_20afb8;
        case 0x20afbcu: goto label_20afbc;
        case 0x20afc0u: goto label_20afc0;
        case 0x20afc4u: goto label_20afc4;
        case 0x20afc8u: goto label_20afc8;
        case 0x20afccu: goto label_20afcc;
        case 0x20afd0u: goto label_20afd0;
        case 0x20afd4u: goto label_20afd4;
        case 0x20afd8u: goto label_20afd8;
        case 0x20afdcu: goto label_20afdc;
        case 0x20afe0u: goto label_20afe0;
        case 0x20afe4u: goto label_20afe4;
        case 0x20afe8u: goto label_20afe8;
        case 0x20afecu: goto label_20afec;
        default: break;
    }

    ctx->pc = 0x20af98u;

label_20af98:
    // 0x20af98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20af98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20af9c:
    // 0x20af9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20afa0:
    // 0x20afa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20afa4:
    // 0x20afa4: 0xc082d4c  jal         func_20B530
label_20afa8:
    if (ctx->pc == 0x20AFA8u) {
        ctx->pc = 0x20AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFA4u;
        // 0x20afa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFACu;
        goto label_20afac;
    }
    ctx->pc = 0x20AFA4u;
    SET_GPR_U32(ctx, 31, 0x20AFACu);
    ctx->pc = 0x20AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AFA4u;
    // 0x20afa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20AFA4u, 0x20AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFACu;
label_20afac:
    // 0x20afac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20afb0:
    // 0x20afb0: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_20afb4:
    if (ctx->pc == 0x20AFB4u) {
        ctx->pc = 0x20AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFB0u;
        // 0x20afb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFB8u;
        goto label_20afb8;
    }
    ctx->pc = 0x20AFB0u;
    {
        const bool branch_taken_0x20afb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20afb0) {
            ctx->pc = 0x20AFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AFB0u;
            // 0x20afb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AFE4u;
            goto label_20afe4;
        }
    }
    ctx->pc = 0x20AFB8u;
label_20afb8:
    // 0x20afb8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x20afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_20afbc:
    // 0x20afbc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_20afc0:
    if (ctx->pc == 0x20AFC0u) {
        ctx->pc = 0x20AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFBCu;
        // 0x20afc0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFC4u;
        goto label_20afc4;
    }
    ctx->pc = 0x20AFBCu;
    {
        const bool branch_taken_0x20afbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFBCu;
        // 0x20afc0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afbc) {
            ctx->pc = 0x20AFE0u;
            goto label_20afe0;
        }
    }
    ctx->pc = 0x20AFC4u;
label_20afc4:
    // 0x20afc4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_20afc8:
    if (ctx->pc == 0x20AFC8u) {
        ctx->pc = 0x20AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFC4u;
        // 0x20afc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFCCu;
        goto label_20afcc;
    }
    ctx->pc = 0x20AFC4u;
    {
        const bool branch_taken_0x20afc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20afc4) {
            ctx->pc = 0x20AFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AFC4u;
            // 0x20afc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AFE4u;
            goto label_20afe4;
        }
    }
    ctx->pc = 0x20AFCCu;
label_20afcc:
    // 0x20afcc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x20afccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_20afd0:
    // 0x20afd0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20afd4:
    if (ctx->pc == 0x20AFD4u) {
        ctx->pc = 0x20AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFD0u;
        // 0x20afd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFD8u;
        goto label_20afd8;
    }
    ctx->pc = 0x20AFD0u;
    {
        const bool branch_taken_0x20afd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20afd0) {
            ctx->pc = 0x20AFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AFD0u;
            // 0x20afd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AFE4u;
            goto label_20afe4;
        }
    }
    ctx->pc = 0x20AFD8u;
label_20afd8:
    // 0x20afd8: 0x40f809  jalr        $v0
label_20afdc:
    if (ctx->pc == 0x20AFDCu) {
        ctx->pc = 0x20AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFD8u;
        // 0x20afdc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFE0u;
        goto label_20afe0;
    }
    ctx->pc = 0x20AFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AFE0u);
        ctx->pc = 0x20AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFD8u;
        // 0x20afdc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFD8u, 0x20AFE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AFE0u;
label_20afe0:
    // 0x20afe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20afe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20afe4:
    // 0x20afe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20afe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20afe8:
    // 0x20afe8: 0x3e00008  jr          $ra
label_20afec:
    if (ctx->pc == 0x20AFECu) {
        ctx->pc = 0x20AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFE8u;
        // 0x20afec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFF0u;
        goto label_fallthrough_0x20afe8;
    }
    ctx->pc = 0x20AFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFE8u;
        // 0x20afec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20afe8:
    ctx->pc = 0x20AFF0u;
}
