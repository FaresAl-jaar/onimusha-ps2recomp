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

// Function: sub_00206828
// Address: 0x206828 - 0x2068a0
void sub_00206828_0x206828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206828_0x206828");
#endif

    switch (ctx->pc) {
        case 0x206848u: goto label_206848;
        case 0x206868u: goto label_206868;
        default: break;
    }

    ctx->pc = 0x206828u;

    // 0x206828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20682c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206830: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x206830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20683c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206840: 0xc049f18  jal         func_127C60
    ctx->pc = 0x206840u;
    SET_GPR_U32(ctx, 31, 0x206848u);
    ctx->pc = 0x206844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206840u;
    // 0x206844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x206840u, 0x206848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206848u;
label_206848:
    // 0x206848: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x206848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20684c: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x20684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x206850: 0x24847498  addiu       $a0, $a0, 0x7498
    ctx->pc = 0x206850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29848));
    // 0x206854: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x206854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x206858: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x206858u;
    {
        const bool branch_taken_0x206858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206858u;
        // 0x20685c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206858) {
            ctx->pc = 0x206888u;
            goto label_206888;
        }
    }
    ctx->pc = 0x206860u;
    // 0x206860: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x206860u;
    SET_GPR_U32(ctx, 31, 0x206868u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x206860u, 0x206868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206868u;
label_206868:
    // 0x206868: 0x8e0601a8  lw          $a2, 0x1A8($s0)
    ctx->pc = 0x206868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x20686c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20686cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206874: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x206874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x206878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20687c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20687cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206880: 0x804a040  j           func_128100
    ctx->pc = 0x206880u;
    ctx->pc = 0x206884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206880u;
    // 0x206884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    sub_00128100_0x128100(rdram, ctx, runtime); return;
    ctx->pc = 0x206888u;
label_206888:
    // 0x206888: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x206888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x20688c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20688cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206898: 0x8049ed2  j           func_127B48
    ctx->pc = 0x206898u;
    ctx->pc = 0x20689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206898u;
    // 0x20689c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    sub_00127B48_0x127b48(rdram, ctx, runtime); return;
    ctx->pc = 0x2068A0u;
}
