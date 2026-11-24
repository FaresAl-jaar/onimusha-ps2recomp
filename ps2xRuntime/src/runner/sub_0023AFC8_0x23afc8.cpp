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

// Function: sub_0023AFC8
// Address: 0x23afc8 - 0x23b020
void sub_0023AFC8_0x23afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AFC8_0x23afc8");
#endif

    switch (ctx->pc) {
        case 0x23b014u: goto label_23b014;
        default: break;
    }

    ctx->pc = 0x23afc8u;

    // 0x23afc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23afcc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23afccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afd0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23AFD0u;
    {
        const bool branch_taken_0x23afd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFD0u;
        // 0x23afd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23afd0) {
            ctx->pc = 0x23AFF0u;
            goto label_23aff0;
        }
    }
    ctx->pc = 0x23AFD8u;
    // 0x23afd8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23afdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23afdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23afe0: 0x2484b3c8  addiu       $a0, $a0, -0x4C38
    ctx->pc = 0x23afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947784));
    // 0x23afe4: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23AFE4u;
    ctx->pc = 0x23AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFE4u;
    // 0x23afe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23AFECu;
    // 0x23afec: 0x0  nop
    ctx->pc = 0x23afecu;
    // NOP
label_23aff0:
    // 0x23aff0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23aff4: 0xa465003e  sh          $a1, 0x3E($v1)
    ctx->pc = 0x23aff4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 5));
    // 0x23aff8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AFF8u;
    {
        const bool branch_taken_0x23aff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFF8u;
        // 0x23affc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aff8) {
            ctx->pc = 0x23B014u;
            goto label_23b014;
        }
    }
    ctx->pc = 0x23B000u;
    // 0x23b000: 0x8466003c  lh          $a2, 0x3C($v1)
    ctx->pc = 0x23b000u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x23b004: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x23b004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x23b008: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x23b008u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x23b00c: 0xc08e0c6  jal         func_238318
    ctx->pc = 0x23B00Cu;
    SET_GPR_U32(ctx, 31, 0x23B014u);
    ctx->pc = 0x23B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B00Cu;
    // 0x23b010: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238318u, 0x23B00Cu, 0x23B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B014u;
label_23b014:
    // 0x23b014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b018: 0x3e00008  jr          $ra
    ctx->pc = 0x23B018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B018u;
        // 0x23b01c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B020u;
}
