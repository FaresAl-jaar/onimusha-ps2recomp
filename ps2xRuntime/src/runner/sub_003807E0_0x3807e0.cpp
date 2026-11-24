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

// Function: sub_003807E0
// Address: 0x3807e0 - 0x380884
void sub_003807E0_0x3807e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003807E0_0x3807e0");
#endif

    switch (ctx->pc) {
        case 0x380800u: goto label_380800;
        case 0x380844u: goto label_380844;
        case 0x380860u: goto label_380860;
        default: break;
    }

    ctx->pc = 0x3807e0u;

    // 0x3807e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3807e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3807e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3807e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3807e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3807e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3807ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3807ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3807f0: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x3807f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3807f4: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3807f4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3807f8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3807F8u;
    SET_GPR_U32(ctx, 31, 0x380800u);
    ctx->pc = 0x3807FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3807F8u;
    // 0x3807fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3807F8u, 0x380800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380800u;
label_380800:
    // 0x380800: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x380800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x380804: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x380804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x380808: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x380808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x38080c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x38080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x380810: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x380810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x380814: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x380814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x380818: 0x0  nop
    ctx->pc = 0x380818u;
    // NOP
    // 0x38081c: 0x0  nop
    ctx->pc = 0x38081cu;
    // NOP
    // 0x380820: 0x1010  mfhi        $v0
    ctx->pc = 0x380820u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x380824: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x380824u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x380828: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x380828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38082c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x380830: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x380830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x380834: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x380834u;
    {
        const bool branch_taken_0x380834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380834) {
            ctx->pc = 0x380858u;
            goto label_380858;
        }
    }
    ctx->pc = 0x38083Cu;
    // 0x38083c: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x38083Cu;
    SET_GPR_U32(ctx, 31, 0x380844u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x38083Cu, 0x380844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380844u;
label_380844:
    // 0x380844: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x380844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x380848: 0x64630004  daddiu      $v1, $v1, 0x4
    ctx->pc = 0x380848u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4);
    // 0x38084c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38084Cu;
    {
        const bool branch_taken_0x38084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38084Cu;
        // 0x380850: 0xa2232b7a  sb          $v1, 0x2B7A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11130), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38084c) {
            ctx->pc = 0x380870u;
            goto label_380870;
        }
    }
    ctx->pc = 0x380854u;
    // 0x380854: 0x0  nop
    ctx->pc = 0x380854u;
    // NOP
label_380858:
    // 0x380858: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x380858u;
    SET_GPR_U32(ctx, 31, 0x380860u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x380858u, 0x380860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380860u;
label_380860:
    // 0x380860: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x380860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x380864: 0x64630002  daddiu      $v1, $v1, 0x2
    ctx->pc = 0x380864u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2);
    // 0x380868: 0xa2232b7a  sb          $v1, 0x2B7A($s1)
    ctx->pc = 0x380868u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11130), (uint8_t)GPR_U32(ctx, 3));
    // 0x38086c: 0x0  nop
    ctx->pc = 0x38086cu;
    // NOP
label_380870:
    // 0x380870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x380870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x380878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38087c: 0x3e00008  jr          $ra
    ctx->pc = 0x38087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38087Cu;
        // 0x380880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380884u;
}
