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

// Function: sub_0023F268
// Address: 0x23f268 - 0x23f330
void sub_0023F268_0x23f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F268_0x23f268");
#endif

    switch (ctx->pc) {
        case 0x23f290u: goto label_23f290;
        case 0x23f2a0u: goto label_23f2a0;
        case 0x23f2b0u: goto label_23f2b0;
        case 0x23f2c0u: goto label_23f2c0;
        case 0x23f2d0u: goto label_23f2d0;
        case 0x23f2e0u: goto label_23f2e0;
        case 0x23f2f0u: goto label_23f2f0;
        case 0x23f30cu: goto label_23f30c;
        case 0x23f318u: goto label_23f318;
        default: break;
    }

    ctx->pc = 0x23f268u;

    // 0x23f268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f27c: 0x260401b4  addiu       $a0, $s0, 0x1B4
    ctx->pc = 0x23f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x23f280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f284: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x23f284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x23f288: 0xc049590  jal         func_125640
    ctx->pc = 0x23F288u;
    SET_GPR_U32(ctx, 31, 0x23F290u);
    ctx->pc = 0x23F28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F288u;
    // 0x23f28c: 0x8e1101b0  lw          $s1, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F288u, 0x23F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F290u;
label_23f290:
    // 0x23f290: 0x260401e4  addiu       $a0, $s0, 0x1E4
    ctx->pc = 0x23f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x23f294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f298: 0xc049590  jal         func_125640
    ctx->pc = 0x23F298u;
    SET_GPR_U32(ctx, 31, 0x23F2A0u);
    ctx->pc = 0x23F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F298u;
    // 0x23f29c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F298u, 0x23F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2A0u;
label_23f2a0:
    // 0x23f2a0: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x23f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x23f2a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2a8: 0xc049590  jal         func_125640
    ctx->pc = 0x23F2A8u;
    SET_GPR_U32(ctx, 31, 0x23F2B0u);
    ctx->pc = 0x23F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2A8u;
    // 0x23f2ac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F2A8u, 0x23F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2B0u;
label_23f2b0:
    // 0x23f2b0: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x23f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x23f2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2b8: 0xc049590  jal         func_125640
    ctx->pc = 0x23F2B8u;
    SET_GPR_U32(ctx, 31, 0x23F2C0u);
    ctx->pc = 0x23F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2B8u;
    // 0x23f2bc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F2B8u, 0x23F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2C0u;
label_23f2c0:
    // 0x23f2c0: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x23f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x23f2c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2c8: 0xc049590  jal         func_125640
    ctx->pc = 0x23F2C8u;
    SET_GPR_U32(ctx, 31, 0x23F2D0u);
    ctx->pc = 0x23F2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2C8u;
    // 0x23f2cc: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F2C8u, 0x23F2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2D0u;
label_23f2d0:
    // 0x23f2d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f2d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2d8: 0xc049590  jal         func_125640
    ctx->pc = 0x23F2D8u;
    SET_GPR_U32(ctx, 31, 0x23F2E0u);
    ctx->pc = 0x23F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2D8u;
    // 0x23f2dc: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F2D8u, 0x23F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2E0u;
label_23f2e0:
    // 0x23f2e0: 0x26040720  addiu       $a0, $s0, 0x720
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x23f2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2e8: 0xc049590  jal         func_125640
    ctx->pc = 0x23F2E8u;
    SET_GPR_U32(ctx, 31, 0x23F2F0u);
    ctx->pc = 0x23F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2E8u;
    // 0x23f2ec: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F2E8u, 0x23F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2F0u;
label_23f2f0:
    // 0x23f2f0: 0xa20001a5  sb          $zero, 0x1A5($s0)
    ctx->pc = 0x23f2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 421), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f2f4: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x23f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x23f2f8: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x23f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x23f2fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F2FCu;
    {
        const bool branch_taken_0x23f2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2FCu;
        // 0x23f300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2fc) {
            ctx->pc = 0x23F31Cu;
            goto label_23f31c;
        }
    }
    ctx->pc = 0x23F304u;
    // 0x23f304: 0xc090aa8  jal         func_242AA0
    ctx->pc = 0x23F304u;
    SET_GPR_U32(ctx, 31, 0x23F30Cu);
    ctx->pc = 0x23F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F304u;
    // 0x23f308: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242AA0u, 0x23F304u, 0x23F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F30Cu;
label_23f30c:
    // 0x23f30c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f310: 0xc090a90  jal         func_242A40
    ctx->pc = 0x23F310u;
    SET_GPR_U32(ctx, 31, 0x23F318u);
    ctx->pc = 0x23F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F310u;
    // 0x23f314: 0x2405101c  addiu       $a1, $zero, 0x101C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242A40u, 0x23F310u, 0x23F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F318u;
label_23f318:
    // 0x23f318: 0xae0201b0  sw          $v0, 0x1B0($s0)
    ctx->pc = 0x23f318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 2));
label_23f31c:
    // 0x23f31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f328: 0x3e00008  jr          $ra
    ctx->pc = 0x23F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F328u;
        // 0x23f32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F330u;
}
