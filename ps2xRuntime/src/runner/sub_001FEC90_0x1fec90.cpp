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

// Function: sub_001FEC90
// Address: 0x1fec90 - 0x1fecec
void sub_001FEC90_0x1fec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEC90_0x1fec90");
#endif

    switch (ctx->pc) {
        case 0x1fecacu: goto label_1fecac;
        default: break;
    }

    ctx->pc = 0x1fec90u;

    // 0x1fec90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fec94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fec98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fec98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1feca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1feca4: 0xc080496  jal         func_201258
    ctx->pc = 0x1FECA4u;
    SET_GPR_U32(ctx, 31, 0x1FECACu);
    ctx->pc = 0x1FECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECA4u;
    // 0x1feca8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FECA4u, 0x1FECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECACu;
label_1fecac:
    // 0x1fecac: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1fecacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1fecb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FECB0u;
    {
        const bool branch_taken_0x1fecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECB0u;
        // 0x1fecb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecb0) {
            ctx->pc = 0x1FECD0u;
            goto label_1fecd0;
        }
    }
    ctx->pc = 0x1FECB8u;
    // 0x1fecb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fecb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fecbc: 0x34a5020d  ori         $a1, $a1, 0x20D
    ctx->pc = 0x1fecbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)525);
    // 0x1fecc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fecc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fecc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fecc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fecc8: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FECC8u;
    ctx->pc = 0x1FECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECC8u;
    // 0x1feccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FECD0u;
label_1fecd0:
    // 0x1fecd0: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1fecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1fecd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fecd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fecd8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1fecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1fecdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fecdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fece0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fece0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fece4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FECE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECE4u;
        // 0x1fece8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FECE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FECECu;
}
