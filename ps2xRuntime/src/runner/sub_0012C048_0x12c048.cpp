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

// Function: sub_0012C048
// Address: 0x12c048 - 0x12c09c
void sub_0012C048_0x12c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C048_0x12c048");
#endif

    switch (ctx->pc) {
        case 0x12c088u: goto label_12c088;
        default: break;
    }

    ctx->pc = 0x12c048u;

    // 0x12c048: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12c04c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x12c04cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x12c050: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12c054: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x12c054u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x12c058: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x12c058u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c05c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12c05cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12c060: 0x8dec6048  lw          $t4, 0x6048($t7)
    ctx->pc = 0x12c060u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x406048u));
    // 0x12c064: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c068: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x12c068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x12c06c: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x12c06cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12c070: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x12c070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x12c074: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12c074u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12c078: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x12c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x12c07c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x12c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x12c080: 0xc04a672  jal         func_1299C8
    ctx->pc = 0x12C080u;
    SET_GPR_U32(ctx, 31, 0x12C088u);
    ctx->pc = 0x12C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C080u;
    // 0x12c084: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299C8u, 0x12C080u, 0x12C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C088u;
label_12c088:
    // 0x12c088: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12c088u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c08c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12c08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c090: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x12c090u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c094: 0x3e00008  jr          $ra
    ctx->pc = 0x12C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C094u;
        // 0x12c098: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C09Cu;
}
