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

// Function: sub_002710E0
// Address: 0x2710e0 - 0x271138
void sub_002710E0_0x2710e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002710E0_0x2710e0");
#endif

    switch (ctx->pc) {
        case 0x271104u: goto label_271104;
        case 0x271114u: goto label_271114;
        default: break;
    }

    ctx->pc = 0x2710e0u;

    // 0x2710e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2710e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2710e4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2710e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2710e8: 0x3c030d00  lui         $v1, 0xD00
    ctx->pc = 0x2710e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3328 << 16));
    // 0x2710ec: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x2710ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x2710f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2710f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2710f4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2710f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2710f8: 0x3465030f  ori         $a1, $v1, 0x30F
    ctx->pc = 0x2710f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)783);
    // 0x2710fc: 0xc05ea18  jal         func_17A860
    ctx->pc = 0x2710FCu;
    SET_GPR_U32(ctx, 31, 0x271104u);
    ctx->pc = 0x271100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710FCu;
    // 0x271100: 0x34468888  ori         $a2, $v0, 0x8888 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34952);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x2710FCu, 0x271104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271104u;
label_271104:
    // 0x271104: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x271104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271108: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27110c: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x27110Cu;
    SET_GPR_U32(ctx, 31, 0x271114u);
    ctx->pc = 0x271110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27110Cu;
    // 0x271110: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x27110Cu, 0x271114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271114u;
label_271114:
    // 0x271114: 0x8f838894  lw          $v1, -0x776C($gp)
    ctx->pc = 0x271114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936724)));
    // 0x271118: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x271118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27111c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x27111cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x271120: 0xa024e000  sb          $a0, -0x2000($at)
    ctx->pc = 0x271120u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x271124: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x271124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x271128: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x271128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x27112c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271130: 0x3e00008  jr          $ra
    ctx->pc = 0x271130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271130u;
        // 0x271134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271138u;
}
