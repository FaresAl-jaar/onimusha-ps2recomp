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

// Function: sub_001376C8
// Address: 0x1376c8 - 0x137738
void sub_001376C8_0x1376c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001376C8_0x1376c8");
#endif

    switch (ctx->pc) {
        case 0x137710u: goto label_137710;
        case 0x137724u: goto label_137724;
        default: break;
    }

    ctx->pc = 0x1376c8u;

    // 0x1376c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1376c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1376cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1376ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1376d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1376d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1376d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1376d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1376d8: 0x24504340  addiu       $s0, $v0, 0x4340
    ctx->pc = 0x1376d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17216));
    // 0x1376dc: 0xac444340  sw          $a0, 0x4340($v0)
    ctx->pc = 0x1376dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B4340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4340u, _value); } while (0);
    // 0x1376e0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1376e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1376e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1376e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1376e8: 0x24644248  addiu       $a0, $v1, 0x4248
    ctx->pc = 0x1376e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16968));
    // 0x1376ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1376ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1376f0: 0x34a51315  ori         $a1, $a1, 0x1315
    ctx->pc = 0x1376f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4885);
    // 0x1376f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1376f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1376f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1376f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1376fc: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x1376fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137700: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x137700u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137704: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x137704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137708: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x137708u;
    SET_GPR_U32(ctx, 31, 0x137710u);
    ctx->pc = 0x13770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137708u;
    // 0x13770c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x137708u, 0x137710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137710u;
label_137710:
    // 0x137710: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137710u;
    {
        const bool branch_taken_0x137710 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x137710) {
            ctx->pc = 0x137714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137710u;
            // 0x137714: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137728u;
            goto label_137728;
        }
    }
    ctx->pc = 0x137718u;
    // 0x137718: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x13771c: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x13771Cu;
    SET_GPR_U32(ctx, 31, 0x137724u);
    ctx->pc = 0x137720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13771Cu;
    // 0x137720: 0x24844760  addiu       $a0, $a0, 0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x13771Cu, 0x137724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137724u;
label_137724:
    // 0x137724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137728:
    // 0x137728: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13772c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13772cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137730: 0x3e00008  jr          $ra
    ctx->pc = 0x137730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137730u;
        // 0x137734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137738u;
}
