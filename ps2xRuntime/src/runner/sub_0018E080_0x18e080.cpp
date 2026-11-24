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

// Function: sub_0018E080
// Address: 0x18e080 - 0x18e0b4
void sub_0018E080_0x18e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E080_0x18e080");
#endif

    switch (ctx->pc) {
        case 0x18e0a4u: goto label_18e0a4;
        default: break;
    }

    ctx->pc = 0x18e080u;

    // 0x18e080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e084: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x18e084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18e088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e08c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18e090: 0xac820300  sw          $v0, 0x300($a0)
    ctx->pc = 0x18e090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 2));
    // 0x18e094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e098: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x18e098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x18e09c: 0xc0692bc  jal         func_1A4AF0
    ctx->pc = 0x18E09Cu;
    SET_GPR_U32(ctx, 31, 0x18E0A4u);
    ctx->pc = 0x18E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E09Cu;
    // 0x18e0a0: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x18E09Cu, 0x18E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E0A4u;
label_18e0a4:
    // 0x18e0a4: 0x0  nop
    ctx->pc = 0x18e0a4u;
    // NOP
    // 0x18e0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18E0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0ACu;
        // 0x18e0b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E0B4u;
}
