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

// Function: sub_00247838
// Address: 0x247838 - 0x24789c
void sub_00247838_0x247838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247838_0x247838");
#endif

    switch (ctx->pc) {
        case 0x247860u: goto label_247860;
        case 0x247868u: goto label_247868;
        case 0x24787cu: goto label_24787c;
        default: break;
    }

    ctx->pc = 0x247838u;

    // 0x247838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24783c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24784c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247850: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x247850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247854: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x247854u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x247858: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x247858u;
    {
        const bool branch_taken_0x247858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247858u;
        // 0x24785c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247858) {
            ctx->pc = 0x247874u;
            goto label_247874;
        }
    }
    ctx->pc = 0x247860u;
label_247860:
    // 0x247860: 0xc091f28  jal         func_247CA0
    ctx->pc = 0x247860u;
    SET_GPR_U32(ctx, 31, 0x247868u);
    ctx->pc = 0x247CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247CA0u, 0x247860u, 0x247868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247868u;
label_247868:
    // 0x247868: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x247868u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x24786c: 0x1051fffc  beq         $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x24786Cu;
    {
        const bool branch_taken_0x24786c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x24786c) {
            ctx->pc = 0x247860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247860;
        }
    }
    ctx->pc = 0x247874u;
label_247874:
    // 0x247874: 0xc091d60  jal         func_247580
    ctx->pc = 0x247874u;
    SET_GPR_U32(ctx, 31, 0x24787Cu);
    ctx->pc = 0x247878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247874u;
    // 0x247878: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247580u, 0x247874u, 0x24787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24787Cu;
label_24787c:
    // 0x24787c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24788c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x24788cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x247890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247894: 0x8049590  j           func_125640
    ctx->pc = 0x247894u;
    ctx->pc = 0x247898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247894u;
    // 0x247898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x24789Cu;
}
