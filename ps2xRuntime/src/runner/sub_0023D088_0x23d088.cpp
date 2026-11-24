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

// Function: sub_0023D088
// Address: 0x23d088 - 0x23d0f0
void sub_0023D088_0x23d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D088_0x23d088");
#endif

    switch (ctx->pc) {
        case 0x23d0a0u: goto label_23d0a0;
        case 0x23d0d4u: goto label_23d0d4;
        default: break;
    }

    ctx->pc = 0x23d088u;

    // 0x23d088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d094: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23d094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23d098: 0xc08db08  jal         func_236C20
    ctx->pc = 0x23D098u;
    SET_GPR_U32(ctx, 31, 0x23D0A0u);
    ctx->pc = 0x23D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D098u;
    // 0x23d09c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C20u, 0x23D098u, 0x23D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0A0u;
label_23d0a0:
    // 0x23d0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d0a8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D0A8u;
    {
        const bool branch_taken_0x23d0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0A8u;
        // 0x23d0ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0a8) {
            ctx->pc = 0x23D0C8u;
            goto label_23d0c8;
        }
    }
    ctx->pc = 0x23D0B0u;
    // 0x23d0b0: 0x84860042  lh          $a2, 0x42($a0)
    ctx->pc = 0x23d0b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x23d0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d0b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23d0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d0bc: 0x808e9ae  j           func_23A6B8
    ctx->pc = 0x23D0BCu;
    ctx->pc = 0x23D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0BCu;
    // 0x23d0c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B8u;
    sub_0023A6B8_0x23a6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x23D0C4u;
    // 0x23d0c4: 0x0  nop
    ctx->pc = 0x23d0c4u;
    // NOP
label_23d0c8:
    // 0x23d0c8: 0x86060042  lh          $a2, 0x42($s0)
    ctx->pc = 0x23d0c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x23d0cc: 0xc08e9ae  jal         func_23A6B8
    ctx->pc = 0x23D0CCu;
    SET_GPR_U32(ctx, 31, 0x23D0D4u);
    ctx->pc = 0x23D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0CCu;
    // 0x23d0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B8u, 0x23D0CCu, 0x23D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0D4u;
label_23d0d4:
    // 0x23d0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0d8: 0x84860044  lh          $a2, 0x44($a0)
    ctx->pc = 0x23d0d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x23d0dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23d0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d0e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d0e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23d0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d0e8: 0x808e9ae  j           func_23A6B8
    ctx->pc = 0x23D0E8u;
    ctx->pc = 0x23D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0E8u;
    // 0x23d0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B8u;
    sub_0023A6B8_0x23a6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x23D0F0u;
}
