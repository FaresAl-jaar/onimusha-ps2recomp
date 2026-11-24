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

// Function: sub_0020E950
// Address: 0x20e950 - 0x20e9bc
void sub_0020E950_0x20e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E950_0x20e950");
#endif

    switch (ctx->pc) {
        case 0x20e970u: goto label_20e970;
        case 0x20e980u: goto label_20e980;
        default: break;
    }

    ctx->pc = 0x20e950u;

    // 0x20e950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e954: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20e954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20e958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20e964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e968: 0xc0888f0  jal         func_2223C0
    ctx->pc = 0x20E968u;
    SET_GPR_U32(ctx, 31, 0x20E970u);
    ctx->pc = 0x20E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E968u;
    // 0x20e96c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223C0u, 0x20E968u, 0x20E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E970u;
label_20e970:
    // 0x20e970: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x20E970u;
    {
        const bool branch_taken_0x20e970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x20E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E970u;
        // 0x20e974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e970) {
            ctx->pc = 0x20E9A8u;
            goto label_20e9a8;
        }
    }
    ctx->pc = 0x20E978u;
    // 0x20e978: 0xc084074  jal         func_2101D0
    ctx->pc = 0x20E978u;
    SET_GPR_U32(ctx, 31, 0x20E980u);
    ctx->pc = 0x20E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E978u;
    // 0x20e97c: 0x8e05211c  lw          $a1, 0x211C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x20E978u, 0x20E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E980u;
label_20e980:
    // 0x20e980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e984: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20e984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20e988: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E988u;
    {
        const bool branch_taken_0x20e988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x20E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E988u;
        // 0x20e98c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e988) {
            ctx->pc = 0x20E9A8u;
            goto label_20e9a8;
        }
    }
    ctx->pc = 0x20E990u;
    // 0x20e990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e99c: 0x80888ea  j           func_2223A8
    ctx->pc = 0x20E99Cu;
    ctx->pc = 0x20E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E99Cu;
    // 0x20e9a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223A8u;
    sub_002223A8_0x2223a8(rdram, ctx, runtime); return;
    ctx->pc = 0x20E9A4u;
    // 0x20e9a4: 0x0  nop
    ctx->pc = 0x20e9a4u;
    // NOP
label_20e9a8:
    // 0x20e9a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e9ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e9b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x20E9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9B4u;
        // 0x20e9b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E9BCu;
}
