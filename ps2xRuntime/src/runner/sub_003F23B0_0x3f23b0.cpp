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

// Function: sub_003F23B0
// Address: 0x3f23b0 - 0x3f248c
void sub_003F23B0_0x3f23b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F23B0_0x3f23b0");
#endif

    switch (ctx->pc) {
        case 0x3f2454u: goto label_3f2454;
        default: break;
    }

    ctx->pc = 0x3f23b0u;

    // 0x3f23b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f23b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f23b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f23b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f23b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f23b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f23bc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3f23bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3f23c0: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3f23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3f23c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f23c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f23c8: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F23C8u;
    {
        const bool branch_taken_0x3f23c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23C8u;
        // 0x3f23cc: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f23c8) {
            ctx->pc = 0x3F2480u;
            goto label_3f2480;
        }
    }
    ctx->pc = 0x3F23D0u;
    // 0x3f23d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f23d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f23d4: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3F23D4u;
    {
        const bool branch_taken_0x3f23d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f23d4) {
            ctx->pc = 0x3F2480u;
            goto label_3f2480;
        }
    }
    ctx->pc = 0x3F23DCu;
    // 0x3f23dc: 0x8f858d30  lw          $a1, -0x72D0($gp)
    ctx->pc = 0x3f23dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f23e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f23e4: 0x80a401d0  lb          $a0, 0x1D0($a1)
    ctx->pc = 0x3f23e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x3f23e8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F23E8u;
    {
        const bool branch_taken_0x3f23e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23E8u;
        // 0x3f23ec: 0x24a601d0  addiu       $a2, $a1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f23e8) {
            ctx->pc = 0x3F2410u;
            goto label_3f2410;
        }
    }
    ctx->pc = 0x3F23F0u;
    // 0x3f23f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f23f4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F23F4u;
    {
        const bool branch_taken_0x3f23f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f23f4) {
            ctx->pc = 0x3F2410u;
            goto label_3f2410;
        }
    }
    ctx->pc = 0x3F23FCu;
    // 0x3f23fc: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F23FCu;
    {
        const bool branch_taken_0x3f23fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f23fc) {
            ctx->pc = 0x3F2480u;
            goto label_3f2480;
        }
    }
    ctx->pc = 0x3F2404u;
    // 0x3f2404: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3F2404u;
    {
        const bool branch_taken_0x3f2404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2404) {
            ctx->pc = 0x3F2480u;
            goto label_3f2480;
        }
    }
    ctx->pc = 0x3F240Cu;
    // 0x3f240c: 0x0  nop
    ctx->pc = 0x3f240cu;
    // NOP
label_3f2410:
    // 0x3f2410: 0x80a401d1  lb          $a0, 0x1D1($a1)
    ctx->pc = 0x3f2410u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 465)));
    // 0x3f2414: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f2414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f2418: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F2418u;
    {
        const bool branch_taken_0x3f2418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2418u;
        // 0x3f241c: 0x24a701d1  addiu       $a3, $a1, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2418) {
            ctx->pc = 0x3F2478u;
            goto label_3f2478;
        }
    }
    ctx->pc = 0x3F2420u;
    // 0x3f2420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f2420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2424: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2424u;
    {
        const bool branch_taken_0x3f2424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f2424) {
            ctx->pc = 0x3F2448u;
            goto label_3f2448;
        }
    }
    ctx->pc = 0x3F242Cu;
    // 0x3f242c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F242Cu;
    {
        const bool branch_taken_0x3f242c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f242c) {
            ctx->pc = 0x3F2440u;
            goto label_3f2440;
        }
    }
    ctx->pc = 0x3F2434u;
    // 0x3f2434: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3F2434u;
    {
        const bool branch_taken_0x3f2434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2434) {
            ctx->pc = 0x3F2480u;
            goto label_3f2480;
        }
    }
    ctx->pc = 0x3F243Cu;
    // 0x3f243c: 0x0  nop
    ctx->pc = 0x3f243cu;
    // NOP
label_3f2440:
    // 0x3f2440: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3f2440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f2444: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f2444u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_3f2448:
    // 0x3f2448: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f244c: 0xc0fc714  jal         func_3F1C50
    ctx->pc = 0x3F244Cu;
    SET_GPR_U32(ctx, 31, 0x3F2454u);
    ctx->pc = 0x3F2450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F244Cu;
    // 0x3f2450: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C50u, 0x3F244Cu, 0x3F2454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2454u;
label_3f2454:
    // 0x3f2454: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f2454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f2458: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F2458u;
    {
        const bool branch_taken_0x3f2458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2458) {
            ctx->pc = 0x3F2480u;
            goto label_3f2480;
        }
    }
    ctx->pc = 0x3F2460u;
    // 0x3f2460: 0x8f848d30  lw          $a0, -0x72D0($gp)
    ctx->pc = 0x3f2460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2464: 0x808301d1  lb          $v1, 0x1D1($a0)
    ctx->pc = 0x3f2464u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 465)));
    // 0x3f2468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f2468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f246c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F246Cu;
    {
        const bool branch_taken_0x3f246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F246Cu;
        // 0x3f2470: 0xa08301d1  sb          $v1, 0x1D1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 465), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f246c) {
            ctx->pc = 0x3F2480u;
            goto label_3f2480;
        }
    }
    ctx->pc = 0x3F2474u;
    // 0x3f2474: 0x0  nop
    ctx->pc = 0x3f2474u;
    // NOP
label_3f2478:
    // 0x3f2478: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3f2478u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f247c: 0x0  nop
    ctx->pc = 0x3f247cu;
    // NOP
label_3f2480:
    // 0x3f2480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2484: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2484u;
        // 0x3f2488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F248Cu;
}
