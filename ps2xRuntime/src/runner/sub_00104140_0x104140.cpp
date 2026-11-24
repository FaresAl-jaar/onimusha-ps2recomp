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

// Function: sub_00104140
// Address: 0x104140 - 0x1041b0
void sub_00104140_0x104140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104140_0x104140");
#endif

    switch (ctx->pc) {
        case 0x104170u: goto label_104170;
        case 0x104180u: goto label_104180;
        case 0x104188u: goto label_104188;
        default: break;
    }

    ctx->pc = 0x104140u;

    // 0x104140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x104140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x104144: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10414c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x10414cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x104150: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x104150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x104154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104158: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x104158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10415c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104160: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x104160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x104164: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104164u;
    {
        const bool branch_taken_0x104164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104164u;
        // 0x104168: 0x3c120066  lui         $s2, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104164) {
            ctx->pc = 0x104198u;
            goto label_104198;
        }
    }
    ctx->pc = 0x10416Cu;
    // 0x10416c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x10416cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_104170:
    // 0x104170: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x104170u;
    {
        const bool branch_taken_0x104170 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x104170) {
            ctx->pc = 0x104188u;
            goto label_104188;
        }
    }
    ctx->pc = 0x104178u;
    // 0x104178: 0xc044332  jal         func_110CC8
    ctx->pc = 0x104178u;
    SET_GPR_U32(ctx, 31, 0x104180u);
    ctx->pc = 0x10417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104178u;
    // 0x10417c: 0x26441da8  addiu       $a0, $s2, 0x1DA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x104178u, 0x104180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104180u;
label_104180:
    // 0x104180: 0xc041236  jal         func_1048D8
    ctx->pc = 0x104180u;
    SET_GPR_U32(ctx, 31, 0x104188u);
    ctx->pc = 0x104184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104180u;
    // 0x104184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048D8u, 0x104180u, 0x104188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104188u;
label_104188:
    // 0x104188: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x104188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10418c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10418cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x104190: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x104190u;
    {
        const bool branch_taken_0x104190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104190u;
        // 0x104194: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104190) {
            ctx->pc = 0x104170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104170;
        }
    }
    ctx->pc = 0x104198u;
label_104198:
    // 0x104198: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x104198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10419c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10419cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1041a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1041a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1041a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1041a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1041a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1041A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1041ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041A8u;
        // 0x1041ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1041A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1041B0u;
}
