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

// Function: sub_003F44D0
// Address: 0x3f44d0 - 0x3f457c
void sub_003F44D0_0x3f44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F44D0_0x3f44d0");
#endif

    switch (ctx->pc) {
        case 0x3f44e8u: goto label_3f44e8;
        case 0x3f4514u: goto label_3f4514;
        case 0x3f4528u: goto label_3f4528;
        case 0x3f4544u: goto label_3f4544;
        default: break;
    }

    ctx->pc = 0x3f44d0u;

    // 0x3f44d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f44d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f44d4: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x3f44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x3f44d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f44d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f44dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f44dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f44e0: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3F44E0u;
    SET_GPR_U32(ctx, 31, 0x3F44E8u);
    ctx->pc = 0x3F44E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F44E0u;
    // 0x3f44e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3F44E0u, 0x3F44E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F44E8u;
label_3f44e8:
    // 0x3f44e8: 0xaf828d48  sw          $v0, -0x72B8($gp)
    ctx->pc = 0x3f44e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 2));
    // 0x3f44ec: 0x8f838d48  lw          $v1, -0x72B8($gp)
    ctx->pc = 0x3f44ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f44f0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F44F0u;
    {
        const bool branch_taken_0x3f44f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F44F0u;
        // 0x3f44f4: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f44f0) {
            ctx->pc = 0x3F4568u;
            goto label_3f4568;
        }
    }
    ctx->pc = 0x3F44F8u;
    // 0x3f44f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f44f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f44fc: 0x8c30b870  lw          $s0, -0x4790($at)
    ctx->pc = 0x3f44fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948976)));
    // 0x3f4500: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3f4500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3f4504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4508: 0x8f828d48  lw          $v0, -0x72B8($gp)
    ctx->pc = 0x3f4508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f450c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3F450Cu;
    SET_GPR_U32(ctx, 31, 0x3F4514u);
    ctx->pc = 0x3F4510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F450Cu;
    // 0x3f4510: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3F450Cu, 0x3F4514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4514u;
label_3f4514:
    // 0x3f4514: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f4514u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f4518: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f4518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f451c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F451Cu;
    {
        const bool branch_taken_0x3f451c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F451Cu;
        // 0x3f4520: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f451c) {
            ctx->pc = 0x3F4560u;
            goto label_3f4560;
        }
    }
    ctx->pc = 0x3F4524u;
    // 0x3f4524: 0x0  nop
    ctx->pc = 0x3f4524u;
    // NOP
label_3f4528:
    // 0x3f4528: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f4528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f452c: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F452Cu;
    {
        const bool branch_taken_0x3f452c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F452Cu;
        // 0x3f4530: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f452c) {
            ctx->pc = 0x3F4548u;
            goto label_3f4548;
        }
    }
    ctx->pc = 0x3F4534u;
    // 0x3f4534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f4538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f453c: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F453Cu;
    SET_GPR_U32(ctx, 31, 0x3F4544u);
    ctx->pc = 0x3F4540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F453Cu;
    // 0x3f4540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F453Cu, 0x3F4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4544u;
label_3f4544:
    // 0x3f4544: 0x0  nop
    ctx->pc = 0x3f4544u;
    // NOP
label_3f4548:
    // 0x3f4548: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f4548u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f454c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f454cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f4550: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f4550u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f4554: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F4554u;
    {
        const bool branch_taken_0x3f4554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4554) {
            ctx->pc = 0x3F4528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4528;
        }
    }
    ctx->pc = 0x3F455Cu;
    // 0x3f455c: 0x0  nop
    ctx->pc = 0x3f455cu;
    // NOP
label_3f4560:
    // 0x3f4560: 0x8f838d48  lw          $v1, -0x72B8($gp)
    ctx->pc = 0x3f4560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f4564: 0xa06001d0  sb          $zero, 0x1D0($v1)
    ctx->pc = 0x3f4564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 464), (uint8_t)GPR_U32(ctx, 0));
label_3f4568:
    // 0x3f4568: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f4568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f456c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f456cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f4570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f4574: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4574u;
        // 0x3f4578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F457Cu;
}
