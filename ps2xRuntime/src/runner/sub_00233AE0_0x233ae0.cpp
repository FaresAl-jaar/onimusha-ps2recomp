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

// Function: sub_00233AE0
// Address: 0x233ae0 - 0x233b30
void sub_00233AE0_0x233ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233AE0_0x233ae0");
#endif

    switch (ctx->pc) {
        case 0x233afcu: goto label_233afc;
        case 0x233b20u: goto label_233b20;
        default: break;
    }

    ctx->pc = 0x233ae0u;

    // 0x233ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233ae4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233ae8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233aec: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x233AECu;
    {
        const bool branch_taken_0x233aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AECu;
        // 0x233af0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233aec) {
            ctx->pc = 0x233B20u;
            goto label_233b20;
        }
    }
    ctx->pc = 0x233AF4u;
    // 0x233af4: 0xc0437b8  jal         func_10DEE0
    ctx->pc = 0x233AF4u;
    SET_GPR_U32(ctx, 31, 0x233AFCu);
    ctx->pc = 0x233AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AF4u;
    // 0x233af8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DEE0u, 0x233AF4u, 0x233AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AFCu;
label_233afc:
    // 0x233afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x233b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233b04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x233b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x233b08: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233B08u;
    {
        const bool branch_taken_0x233b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B08u;
        // 0x233b0c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b08) {
            ctx->pc = 0x233B18u;
            goto label_233b18;
        }
    }
    ctx->pc = 0x233B10u;
    // 0x233b10: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x233B10u;
    {
        const bool branch_taken_0x233b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x233B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B10u;
        // 0x233b14: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b10) {
            ctx->pc = 0x233B24u;
            goto label_233b24;
        }
    }
    ctx->pc = 0x233B18u;
label_233b18:
    // 0x233b18: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x233B18u;
    SET_GPR_U32(ctx, 31, 0x233B20u);
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x233B18u, 0x233B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B20u;
label_233b20:
    // 0x233b20: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233b24:
    // 0x233b24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x233b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233b28: 0x3e00008  jr          $ra
    ctx->pc = 0x233B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B28u;
        // 0x233b2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B30u;
}
