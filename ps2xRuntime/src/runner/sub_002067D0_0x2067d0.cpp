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

// Function: sub_002067D0
// Address: 0x2067d0 - 0x206828
void sub_002067D0_0x2067d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002067D0_0x2067d0");
#endif

    switch (ctx->pc) {
        case 0x2067f4u: goto label_2067f4;
        default: break;
    }

    ctx->pc = 0x2067d0u;

    // 0x2067d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2067d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2067d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2067d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2067d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2067d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2067dc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2067dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2067e0: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x2067e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2067e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2067E4u;
    {
        const bool branch_taken_0x2067e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067E4u;
        // 0x2067e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067e4) {
            ctx->pc = 0x206818u;
            goto label_206818;
        }
    }
    ctx->pc = 0x2067ECu;
    // 0x2067ec: 0xc0832ca  jal         func_20CB28
    ctx->pc = 0x2067ECu;
    SET_GPR_U32(ctx, 31, 0x2067F4u);
    ctx->pc = 0x20CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB28u, 0x2067ECu, 0x2067F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067F4u;
label_2067f4:
    // 0x2067f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2067f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2067f8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2067F8u;
    {
        const bool branch_taken_0x2067f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2067f8) {
            ctx->pc = 0x2067FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2067F8u;
            // 0x2067fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20681Cu;
            goto label_20681c;
        }
    }
    ctx->pc = 0x206800u;
    // 0x206800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206808: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x206808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20680c: 0x8087828  j           func_21E0A0
    ctx->pc = 0x20680Cu;
    ctx->pc = 0x206810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20680Cu;
    // 0x206810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E0A0u;
    sub_0021E0A0_0x21e0a0(rdram, ctx, runtime); return;
    ctx->pc = 0x206814u;
    // 0x206814: 0x0  nop
    ctx->pc = 0x206814u;
    // NOP
label_206818:
    // 0x206818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20681c:
    // 0x20681c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206820: 0x3e00008  jr          $ra
    ctx->pc = 0x206820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206820u;
        // 0x206824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206828u;
}
