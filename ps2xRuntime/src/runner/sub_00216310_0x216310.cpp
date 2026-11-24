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

// Function: sub_00216310
// Address: 0x216310 - 0x21636c
void sub_00216310_0x216310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216310_0x216310");
#endif

    switch (ctx->pc) {
        case 0x21633cu: goto label_21633c;
        case 0x216350u: goto label_216350;
        default: break;
    }

    ctx->pc = 0x216310u;

    // 0x216310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x216310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x216314: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x216314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216318: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x216318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x21631c: 0x24700d6c  addiu       $s0, $v1, 0xD6C
    ctx->pc = 0x21631cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3436));
    // 0x216320: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x216320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x216324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216328: 0x8c650d98  lw          $a1, 0xD98($v1)
    ctx->pc = 0x216328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
    // 0x21632c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x21632Cu;
    {
        const bool branch_taken_0x21632c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x216330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21632Cu;
        // 0x216330: 0x24640d9c  addiu       $a0, $v1, 0xD9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21632c) {
            ctx->pc = 0x21635Cu;
            goto label_21635c;
        }
    }
    ctx->pc = 0x216334u;
    // 0x216334: 0xc085d02  jal         func_217408
    ctx->pc = 0x216334u;
    SET_GPR_U32(ctx, 31, 0x21633Cu);
    ctx->pc = 0x216338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216334u;
    // 0x216338: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217408u, 0x216334u, 0x21633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21633Cu;
label_21633c:
    // 0x21633c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21633cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216340: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x216340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x216344: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x216344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x216348: 0xc0883ea  jal         func_220FA8
    ctx->pc = 0x216348u;
    SET_GPR_U32(ctx, 31, 0x216350u);
    ctx->pc = 0x21634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216348u;
    // 0x21634c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220FA8u, 0x216348u, 0x216350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216350u;
label_216350:
    // 0x216350: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x216350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x216354: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x216354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216358: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x216358u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21635c:
    // 0x21635c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x21635cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216360: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x216360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x216364: 0x3e00008  jr          $ra
    ctx->pc = 0x216364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216364u;
        // 0x216368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21636Cu;
}
