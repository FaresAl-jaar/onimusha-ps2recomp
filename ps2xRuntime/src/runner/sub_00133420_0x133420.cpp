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

// Function: sub_00133420
// Address: 0x133420 - 0x1334a0
void sub_00133420_0x133420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133420_0x133420");
#endif

    switch (ctx->pc) {
        case 0x133440u: goto label_133440;
        case 0x13344cu: goto label_13344c;
        case 0x13345cu: goto label_13345c;
        default: break;
    }

    ctx->pc = 0x133420u;

    // 0x133420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x133424: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x133424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x133428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13342c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13342cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133430: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x133430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133438: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x133438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13343c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13343cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133440:
    // 0x133440: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x133440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x133444: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x133444u;
    SET_GPR_U32(ctx, 31, 0x13344Cu);
    ctx->pc = 0x133448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133444u;
    // 0x133448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x133444u, 0x13344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13344Cu;
label_13344c:
    // 0x13344c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133454: 0xc04cd94  jal         func_133650
    ctx->pc = 0x133454u;
    SET_GPR_U32(ctx, 31, 0x13345Cu);
    ctx->pc = 0x133458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133454u;
    // 0x133458: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x133454u, 0x13345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13345Cu;
label_13345c:
    // 0x13345c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13345cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x133460: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x133460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x133464: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133464u;
    {
        const bool branch_taken_0x133464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133464) {
            ctx->pc = 0x133478u;
            goto label_133478;
        }
    }
    ctx->pc = 0x13346Cu;
    // 0x13346c: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x13346cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x133470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x133470u;
    {
        const bool branch_taken_0x133470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133470u;
        // 0x133474: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133470) {
            ctx->pc = 0x133488u;
            goto label_133488;
        }
    }
    ctx->pc = 0x133478u;
label_133478:
    // 0x133478: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x133478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13347c: 0x2a020015  slti        $v0, $s0, 0x15
    ctx->pc = 0x13347cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x133480: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x133480u;
    {
        const bool branch_taken_0x133480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133480u;
        // 0x133484: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133480) {
            ctx->pc = 0x133440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133440;
        }
    }
    ctx->pc = 0x133488u;
label_133488:
    // 0x133488: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x133488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13348c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13348cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133498: 0x3e00008  jr          $ra
    ctx->pc = 0x133498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133498u;
        // 0x13349c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1334A0u;
}
