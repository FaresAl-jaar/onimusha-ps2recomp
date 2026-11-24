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

// Function: sub_002E7620
// Address: 0x2e7620 - 0x2e7668
void sub_002E7620_0x2e7620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7620_0x2e7620");
#endif

    switch (ctx->pc) {
        case 0x2e7634u: goto label_2e7634;
        case 0x2e7640u: goto label_2e7640;
        default: break;
    }

    ctx->pc = 0x2e7620u;

    // 0x2e7620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e7620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e7624: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e7624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e7628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e762c: 0xc0b9dd0  jal         func_2E7740
    ctx->pc = 0x2E762Cu;
    SET_GPR_U32(ctx, 31, 0x2E7634u);
    ctx->pc = 0x2E7630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E762Cu;
    // 0x2e7630: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7740u, 0x2E762Cu, 0x2E7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7634u;
label_2e7634:
    // 0x2e7634: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2e7634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2e7638: 0xc0caf68  jal         func_32BDA0
    ctx->pc = 0x2E7638u;
    SET_GPR_U32(ctx, 31, 0x2E7640u);
    ctx->pc = 0x2E763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7638u;
    // 0x2e763c: 0x24841150  addiu       $a0, $a0, 0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BDA0u, 0x2E7638u, 0x2E7640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7640u;
label_2e7640:
    // 0x2e7640: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e7640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e7644: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x2e7644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x2e7648: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2e7648u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e764c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e764cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e7650: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e7650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e7654: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e7654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e7658: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2e7658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2e765c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e765cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7660: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7660u;
        // 0x2e7664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7668u;
}
