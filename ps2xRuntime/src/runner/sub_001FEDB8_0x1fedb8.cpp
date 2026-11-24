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

// Function: sub_001FEDB8
// Address: 0x1fedb8 - 0x1fee30
void sub_001FEDB8_0x1fedb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEDB8_0x1fedb8");
#endif

    switch (ctx->pc) {
        case 0x1feddcu: goto label_1feddc;
        default: break;
    }

    ctx->pc = 0x1fedb8u;

    // 0x1fedb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fedb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fedbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fedbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fedc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fedc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fedc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fedc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fedc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fedc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fedcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fedccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fedd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fedd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fedd4: 0xc080496  jal         func_201258
    ctx->pc = 0x1FEDD4u;
    SET_GPR_U32(ctx, 31, 0x1FEDDCu);
    ctx->pc = 0x1FEDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEDD4u;
    // 0x1fedd8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FEDD4u, 0x1FEDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEDDCu;
label_1feddc:
    // 0x1feddc: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1feddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1fede0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fede4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEDE4u;
    {
        const bool branch_taken_0x1fede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDE4u;
        // 0x1fede8: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fede4) {
            ctx->pc = 0x1FEE08u;
            goto label_1fee08;
        }
    }
    ctx->pc = 0x1FEDECu;
    // 0x1fedec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fedecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fedf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fedf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fedf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fedf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fedf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fedf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fedfc: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FEDFCu;
    ctx->pc = 0x1FEE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEDFCu;
    // 0x1fee00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEE04u;
    // 0x1fee04: 0x0  nop
    ctx->pc = 0x1fee04u;
    // NOP
label_1fee08:
    // 0x1fee08: 0x8e0302b4  lw          $v1, 0x2B4($s0)
    ctx->pc = 0x1fee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1fee0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fee0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fee10: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1fee10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1fee14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fee14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fee18: 0x8e0402b8  lw          $a0, 0x2B8($s0)
    ctx->pc = 0x1fee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x1fee1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fee1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fee20: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1fee20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1fee24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fee24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fee28: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE28u;
        // 0x1fee2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEE30u;
}
