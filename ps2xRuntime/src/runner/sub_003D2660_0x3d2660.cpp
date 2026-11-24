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

// Function: sub_003D2660
// Address: 0x3d2660 - 0x3d270c
void sub_003D2660_0x3d2660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2660_0x3d2660");
#endif

    switch (ctx->pc) {
        case 0x3d2674u: goto label_3d2674;
        case 0x3d2688u: goto label_3d2688;
        case 0x3d26ccu: goto label_3d26cc;
        default: break;
    }

    ctx->pc = 0x3d2660u;

    // 0x3d2660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d2660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d2664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d2664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d2668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d2668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d266c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3D266Cu;
    SET_GPR_U32(ctx, 31, 0x3D2674u);
    ctx->pc = 0x3D2670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D266Cu;
    // 0x3d2670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3D266Cu, 0x3D2674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2674u;
label_3d2674:
    // 0x3d2674: 0xae002b28  sw          $zero, 0x2B28($s0)
    ctx->pc = 0x3d2674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 0));
    // 0x3d2678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d2678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d267c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d267cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2680: 0xc0f48ac  jal         func_3D22B0
    ctx->pc = 0x3D2680u;
    SET_GPR_U32(ctx, 31, 0x3D2688u);
    ctx->pc = 0x3D2684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2680u;
    // 0x3d2684: 0xa2002b22  sb          $zero, 0x2B22($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11042), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D22B0u, 0x3D2680u, 0x3D2688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2688u;
label_3d2688:
    // 0x3d2688: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3d2688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3d268c: 0x24030541  addiu       $v1, $zero, 0x541
    ctx->pc = 0x3d268cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
    // 0x3d2690: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x3d2690u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3d2694: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D2694u;
    {
        const bool branch_taken_0x3d2694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2694u;
        // 0x3d2698: 0x24030c85  addiu       $v1, $zero, 0xC85 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2694) {
            ctx->pc = 0x3D26B8u;
            goto label_3d26b8;
        }
    }
    ctx->pc = 0x3D269Cu;
    // 0x3d269c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D269Cu;
    {
        const bool branch_taken_0x3d269c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d269c) {
            ctx->pc = 0x3D26B0u;
            goto label_3d26b0;
        }
    }
    ctx->pc = 0x3D26A4u;
    // 0x3d26a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3D26A4u;
    {
        const bool branch_taken_0x3d26a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d26a4) {
            ctx->pc = 0x3D26D0u;
            goto label_3d26d0;
        }
    }
    ctx->pc = 0x3D26ACu;
    // 0x3d26ac: 0x0  nop
    ctx->pc = 0x3d26acu;
    // NOP
label_3d26b0:
    // 0x3d26b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D26B0u;
    {
        const bool branch_taken_0x3d26b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26B0u;
        // 0x3d26b4: 0xa2002b21  sb          $zero, 0x2B21($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d26b0) {
            ctx->pc = 0x3D26D0u;
            goto label_3d26d0;
        }
    }
    ctx->pc = 0x3D26B8u;
label_3d26b8:
    // 0x3d26b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d26bc: 0xa2022b21  sb          $v0, 0x2B21($s0)
    ctx->pc = 0x3d26bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11041), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d26c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d26c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d26c4: 0xc097904  jal         func_25E410
    ctx->pc = 0x3D26C4u;
    SET_GPR_U32(ctx, 31, 0x3D26CCu);
    ctx->pc = 0x3D26C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D26C4u;
    // 0x3d26c8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E410u, 0x3D26C4u, 0x3D26CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D26CCu;
label_3d26cc:
    // 0x3d26cc: 0x0  nop
    ctx->pc = 0x3d26ccu;
    // NOP
label_3d26d0:
    // 0x3d26d0: 0x8e07085c  lw          $a3, 0x85C($s0)
    ctx->pc = 0x3d26d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x3d26d4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x3d26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x3d26d8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3d26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3d26dc: 0x8ce5004c  lw          $a1, 0x4C($a3)
    ctx->pc = 0x3d26dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x3d26e0: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x3d26e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x3d26e4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3d26e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3d26e8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x3d26e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3d26ec: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3d26ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x3d26f0: 0xace304c4  sw          $v1, 0x4C4($a3)
    ctx->pc = 0x3d26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1220), GPR_U32(ctx, 3));
    // 0x3d26f4: 0xace304c8  sw          $v1, 0x4C8($a3)
    ctx->pc = 0x3d26f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1224), GPR_U32(ctx, 3));
    // 0x3d26f8: 0xace304cc  sw          $v1, 0x4CC($a3)
    ctx->pc = 0x3d26f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1228), GPR_U32(ctx, 3));
    // 0x3d26fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d26fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d2700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2704: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2704u;
        // 0x3d2708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D270Cu;
}
