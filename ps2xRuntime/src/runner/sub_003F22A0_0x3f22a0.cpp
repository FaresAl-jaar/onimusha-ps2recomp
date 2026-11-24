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

// Function: sub_003F22A0
// Address: 0x3f22a0 - 0x3f235c
void sub_003F22A0_0x3f22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F22A0_0x3f22a0");
#endif

    switch (ctx->pc) {
        case 0x3f22b8u: goto label_3f22b8;
        case 0x3f22e4u: goto label_3f22e4;
        case 0x3f22f8u: goto label_3f22f8;
        case 0x3f2310u: goto label_3f2310;
        case 0x3f2328u: goto label_3f2328;
        default: break;
    }

    ctx->pc = 0x3f22a0u;

    // 0x3f22a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f22a4: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x3f22a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x3f22a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f22a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f22ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f22acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f22b0: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3F22B0u;
    SET_GPR_U32(ctx, 31, 0x3F22B8u);
    ctx->pc = 0x3F22B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22B0u;
    // 0x3f22b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3F22B0u, 0x3F22B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F22B8u;
label_3f22b8:
    // 0x3f22b8: 0xaf828d30  sw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937904), GPR_U32(ctx, 2));
    // 0x3f22bc: 0x8f838d30  lw          $v1, -0x72D0($gp)
    ctx->pc = 0x3f22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f22c0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3F22C0u;
    {
        const bool branch_taken_0x3f22c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F22C0u;
        // 0x3f22c4: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f22c0) {
            ctx->pc = 0x3F2348u;
            goto label_3f2348;
        }
    }
    ctx->pc = 0x3F22C8u;
    // 0x3f22c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f22c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f22cc: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3f22ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x3f22d0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3f22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3f22d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f22d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f22d8: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f22dc: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3F22DCu;
    SET_GPR_U32(ctx, 31, 0x3F22E4u);
    ctx->pc = 0x3F22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F22DCu;
    // 0x3f22e0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3F22DCu, 0x3F22E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F22E4u;
label_3f22e4:
    // 0x3f22e4: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f22e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f22e8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f22e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f22ec: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x3F22ECu;
    {
        const bool branch_taken_0x3f22ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F22ECu;
        // 0x3f22f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f22ec) {
            ctx->pc = 0x3F2340u;
            goto label_3f2340;
        }
    }
    ctx->pc = 0x3F22F4u;
    // 0x3f22f4: 0x0  nop
    ctx->pc = 0x3f22f4u;
    // NOP
label_3f22f8:
    // 0x3f22f8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F22F8u;
    {
        const bool branch_taken_0x3f22f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F22F8u;
        // 0x3f22fc: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f22f8) {
            ctx->pc = 0x3F2310u;
            goto label_3f2310;
        }
    }
    ctx->pc = 0x3F2300u;
    // 0x3f2300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f2304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2308: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F2308u;
    SET_GPR_U32(ctx, 31, 0x3F2310u);
    ctx->pc = 0x3F230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2308u;
    // 0x3f230c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F2308u, 0x3F2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2310u;
label_3f2310:
    // 0x3f2310: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f2310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2314: 0x16250004  bne         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2314u;
    {
        const bool branch_taken_0x3f2314 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x3F2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2314u;
        // 0x3f2318: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2314) {
            ctx->pc = 0x3F2328u;
            goto label_3f2328;
        }
    }
    ctx->pc = 0x3F231Cu;
    // 0x3f231c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2320: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F2320u;
    SET_GPR_U32(ctx, 31, 0x3F2328u);
    ctx->pc = 0x3F2324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2320u;
    // 0x3f2324: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F2320u, 0x3F2328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2328u;
label_3f2328:
    // 0x3f2328: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f2328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f232c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f232cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f2330: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f2330u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f2334: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3F2334u;
    {
        const bool branch_taken_0x3f2334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2334) {
            ctx->pc = 0x3F22F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f22f8;
        }
    }
    ctx->pc = 0x3F233Cu;
    // 0x3f233c: 0x0  nop
    ctx->pc = 0x3f233cu;
    // NOP
label_3f2340:
    // 0x3f2340: 0x8f838d30  lw          $v1, -0x72D0($gp)
    ctx->pc = 0x3f2340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2344: 0xa06001d0  sb          $zero, 0x1D0($v1)
    ctx->pc = 0x3f2344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 464), (uint8_t)GPR_U32(ctx, 0));
label_3f2348:
    // 0x3f2348: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f2348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f234c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f234cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2354: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2354u;
        // 0x3f2358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F235Cu;
}
