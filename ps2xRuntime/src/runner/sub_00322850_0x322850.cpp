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

// Function: sub_00322850
// Address: 0x322850 - 0x3228c8
void sub_00322850_0x322850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322850_0x322850");
#endif

    switch (ctx->pc) {
        case 0x322860u: goto label_322860;
        default: break;
    }

    ctx->pc = 0x322850u;

    // 0x322850: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x322850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322854: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x322854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322858: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x322858u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32285c: 0x0  nop
    ctx->pc = 0x32285cu;
    // NOP
label_322860:
    // 0x322860: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322864: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x322864u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x322868: 0x8c221038  lw          $v0, 0x1038($at)
    ctx->pc = 0x322868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4152)));
    // 0x32286c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32286Cu;
    {
        const bool branch_taken_0x32286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32286c) {
            ctx->pc = 0x3228A0u;
            goto label_3228a0;
        }
    }
    ctx->pc = 0x322874u;
    // 0x322874: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x322874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x322878: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x322878u;
    {
        const bool branch_taken_0x322878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x32287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322878u;
        // 0x32287c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322878) {
            ctx->pc = 0x3228A0u;
            goto label_3228a0;
        }
    }
    ctx->pc = 0x322880u;
    // 0x322880: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322884: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x322884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x322888: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x322888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x32288c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32288cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x322890: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x322890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x322894: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x322894u;
    {
        const bool branch_taken_0x322894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322894u;
        // 0x322898: 0x411021  addu        $v0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322894) {
            ctx->pc = 0x3228C0u;
            goto label_3228c0;
        }
    }
    ctx->pc = 0x32289Cu;
    // 0x32289c: 0x0  nop
    ctx->pc = 0x32289cu;
    // NOP
label_3228a0:
    // 0x3228a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3228a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3228a4: 0x28e20100  slti        $v0, $a3, 0x100
    ctx->pc = 0x3228a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3228a8: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x3228a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x3228ac: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3228ACu;
    {
        const bool branch_taken_0x3228ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3228B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228ACu;
        // 0x3228b0: 0x24630110  addiu       $v1, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228ac) {
            ctx->pc = 0x322860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322860;
        }
    }
    ctx->pc = 0x3228B4u;
    // 0x3228b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3228b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3228b8: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x3228b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x3228bc: 0x811021  addu        $v0, $a0, $at
    ctx->pc = 0x3228bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_3228c0:
    // 0x3228c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3228C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3228C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3228C8u;
}
