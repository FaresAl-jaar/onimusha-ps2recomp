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

// Function: sub_001097F8
// Address: 0x1097f8 - 0x109898
void sub_001097F8_0x1097f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001097F8_0x1097f8");
#endif

    switch (ctx->pc) {
        case 0x109814u: goto label_109814;
        default: break;
    }

    ctx->pc = 0x1097f8u;

    // 0x1097f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1097f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1097fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1097fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109804: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x109804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10980c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10980Cu;
    SET_GPR_U32(ctx, 31, 0x109814u);
    ctx->pc = 0x109810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10980Cu;
    // 0x109810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10980Cu, 0x109814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109814u;
label_109814:
    // 0x109814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109818: 0x101f02  srl         $v1, $s0, 28
    ctx->pc = 0x109818u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x10981c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x109820: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109820u;
    {
        const bool branch_taken_0x109820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x109824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109820u;
        // 0x109824: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109820) {
            ctx->pc = 0x10983Cu;
            goto label_10983c;
        }
    }
    ctx->pc = 0x109828u;
    // 0x109828: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x109828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x10982c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x109830: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x109830u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x109834: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x109834u;
    {
        const bool branch_taken_0x109834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109834u;
        // 0x109838: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109834) {
            ctx->pc = 0x109844u;
            goto label_109844;
        }
    }
    ctx->pc = 0x10983Cu;
label_10983c:
    // 0x10983c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x109840: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x109840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_109844:
    // 0x109844: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109848: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10984c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x10984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x109850: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x109850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x109854: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x109854u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 16)); // MMIO: 0x1000b010
    // 0x109858: 0x112103  sra         $a0, $s1, 4
    ctx->pc = 0x109858u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 4));
    // 0x10985c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10985cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x109860: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109864: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x109864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x109868: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x109868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10986c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10986cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3)); // MMIO: 0x1000b000
    // 0x109870: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x109870u;
    {
        const bool branch_taken_0x109870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109870u;
        // 0x109874: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109870) {
            ctx->pc = 0x109888u;
            goto label_109888;
        }
    }
    ctx->pc = 0x109878u;
    // 0x109878: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10987c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10987cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109880: 0x804603c  j           func_1180F0
    ctx->pc = 0x109880u;
    ctx->pc = 0x109884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109880u;
    // 0x109884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x109888u;
label_109888:
    // 0x109888: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10988c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10988cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109890: 0x3e00008  jr          $ra
    ctx->pc = 0x109890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109890u;
        // 0x109894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109898u;
}
