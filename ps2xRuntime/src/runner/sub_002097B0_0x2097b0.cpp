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

// Function: sub_002097B0
// Address: 0x2097b0 - 0x209810
void sub_002097B0_0x2097b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002097B0_0x2097b0");
#endif

    switch (ctx->pc) {
        case 0x2097c4u: goto label_2097c4;
        case 0x2097f4u: goto label_2097f4;
        default: break;
    }

    ctx->pc = 0x2097b0u;

    // 0x2097b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2097b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2097b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2097b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2097b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2097bc: 0xc0824d0  jal         func_209340
    ctx->pc = 0x2097BCu;
    SET_GPR_U32(ctx, 31, 0x2097C4u);
    ctx->pc = 0x2097C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097BCu;
    // 0x2097c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209340u, 0x2097BCu, 0x2097C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097C4u;
label_2097c4:
    // 0x2097c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2097c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2097c8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2097C8u;
    {
        const bool branch_taken_0x2097c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2097c8) {
            ctx->pc = 0x2097CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2097C8u;
            // 0x2097cc: 0x8e03017c  lw          $v1, 0x17C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2097D8u;
            goto label_2097d8;
        }
    }
    ctx->pc = 0x2097D0u;
    // 0x2097d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2097D0u;
    {
        const bool branch_taken_0x2097d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2097D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097D0u;
        // 0x2097d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097d0) {
            ctx->pc = 0x209800u;
            goto label_209800;
        }
    }
    ctx->pc = 0x2097D8u;
label_2097d8:
    // 0x2097d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2097D8u;
    {
        const bool branch_taken_0x2097d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2097DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097D8u;
        // 0x2097dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097d8) {
            ctx->pc = 0x209800u;
            goto label_209800;
        }
    }
    ctx->pc = 0x2097E0u;
    // 0x2097e0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2097e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2097e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2097e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2097e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2097e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097ec: 0xc088c06  jal         func_223018
    ctx->pc = 0x2097ECu;
    SET_GPR_U32(ctx, 31, 0x2097F4u);
    ctx->pc = 0x2097F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097ECu;
    // 0x2097f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223018u, 0x2097ECu, 0x2097F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097F4u;
label_2097f4:
    // 0x2097f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2097f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2097f8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2097f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2097fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2097fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209800:
    // 0x209800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209804: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209808: 0x3e00008  jr          $ra
    ctx->pc = 0x209808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209808u;
        // 0x20980c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209810u;
}
