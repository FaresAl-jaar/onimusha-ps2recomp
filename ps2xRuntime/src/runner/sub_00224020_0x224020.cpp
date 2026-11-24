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

// Function: sub_00224020
// Address: 0x224020 - 0x22406c
void sub_00224020_0x224020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224020_0x224020");
#endif

    switch (ctx->pc) {
        case 0x224044u: goto label_224044;
        default: break;
    }

    ctx->pc = 0x224020u;

    // 0x224020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22402c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22402cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224034: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x224034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x224038: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x224038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22403c: 0xc088e5e  jal         func_223978
    ctx->pc = 0x22403Cu;
    SET_GPR_U32(ctx, 31, 0x224044u);
    ctx->pc = 0x224040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22403Cu;
    // 0x224040: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x22403Cu, 0x224044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224044u;
label_224044:
    // 0x224044: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x224044u;
    {
        const bool branch_taken_0x224044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224044) {
            ctx->pc = 0x224048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224044u;
            // 0x224048: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22405Cu;
            goto label_22405c;
        }
    }
    ctx->pc = 0x22404Cu;
    // 0x22404c: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x22404cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224054: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x224054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x224058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22405c:
    // 0x22405c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22405cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224064: 0x3e00008  jr          $ra
    ctx->pc = 0x224064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224064u;
        // 0x224068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22406Cu;
}
