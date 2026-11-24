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

// Function: sub_00112658
// Address: 0x112658 - 0x1126c8
void sub_00112658_0x112658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112658_0x112658");
#endif

    switch (ctx->pc) {
        case 0x112698u: goto label_112698;
        case 0x1126b0u: goto label_1126b0;
        default: break;
    }

    ctx->pc = 0x112658u;

    // 0x112658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11265c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112660: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x112660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x112664: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x112664u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x112668: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x112668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11266c: 0x8e022b48  lw          $v0, 0x2B48($s0)
    ctx->pc = 0x11266cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B48u));
    // 0x112670: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x112670u;
    {
        const bool branch_taken_0x112670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x112674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112670u;
        // 0x112674: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112670) {
            ctx->pc = 0x1126BCu;
            goto label_1126bc;
        }
    }
    ctx->pc = 0x112678u;
    // 0x112678: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x112678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x11267c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11267cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112680: 0x24422680  addiu       $v0, $v0, 0x2680
    ctx->pc = 0x112680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
    // 0x112684: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x112684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x112688: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x112688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11268c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11268cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112690: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x112690u;
    SET_GPR_U32(ctx, 31, 0x112698u);
    ctx->pc = 0x112694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112690u;
    // 0x112694: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x112690u, 0x112698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112698u;
label_112698:
    // 0x112698: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x112698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x11269c: 0xae022b48  sw          $v0, 0x2B48($s0)
    ctx->pc = 0x11269cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11080), GPR_U32(ctx, 2));
    // 0x1126a0: 0x24632690  addiu       $v1, $v1, 0x2690
    ctx->pc = 0x1126a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9872));
    // 0x1126a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1126a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126a8: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x1126A8u;
    SET_GPR_U32(ctx, 31, 0x1126B0u);
    ctx->pc = 0x1126ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126A8u;
    // 0x1126ac: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x1126A8u, 0x1126B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126B0u;
label_1126b0:
    // 0x1126b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1126b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1126b4: 0xac622b4c  sw          $v0, 0x2B4C($v1)
    ctx->pc = 0x1126b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x402B4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x402B4Cu, _value); } while (0);
    // 0x1126b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1126b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1126bc:
    // 0x1126bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1126bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1126c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1126C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1126C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126C0u;
        // 0x1126c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1126C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1126C8u;
}
