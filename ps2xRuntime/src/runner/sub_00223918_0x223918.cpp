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

// Function: sub_00223918
// Address: 0x223918 - 0x223968
void sub_00223918_0x223918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223918_0x223918");
#endif

    switch (ctx->pc) {
        case 0x223940u: goto label_223940;
        case 0x22394cu: goto label_22394c;
        default: break;
    }

    ctx->pc = 0x223918u;

    // 0x223918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22391c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22391cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223924: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x223924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223928: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22392c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22392Cu;
    {
        const bool branch_taken_0x22392c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x223930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22392Cu;
        // 0x223930: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22392c) {
            ctx->pc = 0x223954u;
            goto label_223954;
        }
    }
    ctx->pc = 0x223934u;
    // 0x223934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22393c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22393cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223940:
    // 0x223940: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x223940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x223944: 0xc088e3a  jal         func_2238E8
    ctx->pc = 0x223944u;
    SET_GPR_U32(ctx, 31, 0x22394Cu);
    ctx->pc = 0x223948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223944u;
    // 0x223948: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E8u, 0x223944u, 0x22394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22394Cu;
label_22394c:
    // 0x22394c: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x22394Cu;
    {
        const bool branch_taken_0x22394c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x223950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22394Cu;
        // 0x223950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22394c) {
            ctx->pc = 0x223940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223940;
        }
    }
    ctx->pc = 0x223954u;
label_223954:
    // 0x223954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223958: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22395c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22395cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223960: 0x3e00008  jr          $ra
    ctx->pc = 0x223960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223960u;
        // 0x223964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223968u;
}
