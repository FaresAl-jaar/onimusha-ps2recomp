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

// Function: sub_001022D0
// Address: 0x1022d0 - 0x102320
void sub_001022D0_0x1022d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001022D0_0x1022d0");
#endif

    switch (ctx->pc) {
        case 0x1022f0u: goto label_1022f0;
        case 0x1022fcu: goto label_1022fc;
        case 0x10230cu: goto label_10230c;
        default: break;
    }

    ctx->pc = 0x1022d0u;

    // 0x1022d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1022d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1022d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1022d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1022d8: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1022d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1022dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1022dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1022e0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1022e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1022e4: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x1022e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1022e8: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x1022E8u;
    SET_GPR_U32(ctx, 31, 0x1022F0u);
    ctx->pc = 0x1022ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022E8u;
    // 0x1022ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x1022E8u, 0x1022F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022F0u;
label_1022f0:
    // 0x1022f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1022f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022f4: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x1022F4u;
    SET_GPR_U32(ctx, 31, 0x1022FCu);
    ctx->pc = 0x1022F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022F4u;
    // 0x1022f8: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x1022F4u, 0x1022FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022FCu;
label_1022fc:
    // 0x1022fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1022FCu;
    {
        const bool branch_taken_0x1022fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x102300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022FCu;
        // 0x102300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022fc) {
            ctx->pc = 0x102310u;
            goto label_102310;
        }
    }
    ctx->pc = 0x102304u;
    // 0x102304: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x102304u;
    SET_GPR_U32(ctx, 31, 0x10230Cu);
    ctx->pc = 0x102308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102304u;
    // 0x102308: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x102304u, 0x10230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10230Cu;
label_10230c:
    // 0x10230c: 0x0  nop
    ctx->pc = 0x10230cu;
    // NOP
label_102310:
    // 0x102310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x102310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102318: 0x3e00008  jr          $ra
    ctx->pc = 0x102318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102318u;
        // 0x10231c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102320u;
}
