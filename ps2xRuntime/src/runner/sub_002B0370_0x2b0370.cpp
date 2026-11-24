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

// Function: sub_002B0370
// Address: 0x2b0370 - 0x2b03c0
void sub_002B0370_0x2b0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0370_0x2b0370");
#endif

    switch (ctx->pc) {
        case 0x2b039cu: goto label_2b039c;
        case 0x2b03a8u: goto label_2b03a8;
        default: break;
    }

    ctx->pc = 0x2b0370u;

    // 0x2b0370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b0378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b037c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b037cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b0380: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B0380u;
    {
        const bool branch_taken_0x2b0380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0380u;
        // 0x2b0384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0380) {
            ctx->pc = 0x2B03B0u;
            goto label_2b03b0;
        }
    }
    ctx->pc = 0x2B0388u;
    // 0x2b0388: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2b0388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2b038c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B038Cu;
    {
        const bool branch_taken_0x2b038c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b038c) {
            ctx->pc = 0x2B03A0u;
            goto label_2b03a0;
        }
    }
    ctx->pc = 0x2B0394u;
    // 0x2b0394: 0xc0805e0  jal         func_201780
    ctx->pc = 0x2B0394u;
    SET_GPR_U32(ctx, 31, 0x2B039Cu);
    ctx->pc = 0x2B0398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0394u;
    // 0x2b0398: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201780u, 0x2B0394u, 0x2B039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B039Cu;
label_2b039c:
    // 0x2b039c: 0x0  nop
    ctx->pc = 0x2b039cu;
    // NOP
label_2b03a0:
    // 0x2b03a0: 0xc080e42  jal         func_203908
    ctx->pc = 0x2B03A0u;
    SET_GPR_U32(ctx, 31, 0x2B03A8u);
    ctx->pc = 0x2B03A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B03A0u;
    // 0x2b03a4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203908u, 0x2B03A0u, 0x2B03A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03A8u;
label_2b03a8:
    // 0x2b03a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b03ac: 0x0  nop
    ctx->pc = 0x2b03acu;
    // NOP
label_2b03b0:
    // 0x2b03b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b03b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b03b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b03b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b03b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B03B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03B8u;
        // 0x2b03bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B03B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B03C0u;
}
