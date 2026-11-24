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

// Function: sub_001870E0
// Address: 0x1870e0 - 0x18717c
void sub_001870E0_0x1870e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001870E0_0x1870e0");
#endif

    switch (ctx->pc) {
        case 0x187110u: goto label_187110;
        case 0x187118u: goto label_187118;
        default: break;
    }

    ctx->pc = 0x1870e0u;

    // 0x1870e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1870e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1870e4: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1870e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1870e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1870e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1870ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1870ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1870f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1870f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1870f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1870f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1870f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1870f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1870fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1870fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187100: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x187104: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x187108: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x187108u;
    SET_GPR_U32(ctx, 31, 0x187110u);
    ctx->pc = 0x18710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187108u;
    // 0x18710c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x187108u, 0x187110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187110u;
label_187110:
    // 0x187110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187114: 0x0  nop
    ctx->pc = 0x187114u;
    // NOP
label_187118:
    // 0x187118: 0xae300420  sw          $s0, 0x420($s1)
    ctx->pc = 0x187118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 16));
    // 0x18711c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x187120: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x187120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x187124: 0xae230424  sw          $v1, 0x424($s1)
    ctx->pc = 0x187124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1060), GPR_U32(ctx, 3));
    // 0x187128: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x187128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x18712c: 0xae240428  sw          $a0, 0x428($s1)
    ctx->pc = 0x18712cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 4));
    // 0x187130: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x187134: 0xae23042c  sw          $v1, 0x42C($s1)
    ctx->pc = 0x187134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1068), GPR_U32(ctx, 3));
    // 0x187138: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x187138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x18713c: 0xae240430  sw          $a0, 0x430($s1)
    ctx->pc = 0x18713cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 4));
    // 0x187140: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x187140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x187144: 0xae230434  sw          $v1, 0x434($s1)
    ctx->pc = 0x187144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1076), GPR_U32(ctx, 3));
    // 0x187148: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x187148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x18714c: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x18714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x187150: 0xae240438  sw          $a0, 0x438($s1)
    ctx->pc = 0x187150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1080), GPR_U32(ctx, 4));
    // 0x187154: 0xae23043c  sw          $v1, 0x43C($s1)
    ctx->pc = 0x187154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1084), GPR_U32(ctx, 3));
    // 0x187158: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x18715c: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x18715cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x187160: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x187160u;
    {
        const bool branch_taken_0x187160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187160u;
        // 0x187164: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187160) {
            ctx->pc = 0x187118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187118;
        }
    }
    ctx->pc = 0x187168u;
    // 0x187168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18716c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18716cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187174: 0x3e00008  jr          $ra
    ctx->pc = 0x187174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187174u;
        // 0x187178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18717Cu;
}
