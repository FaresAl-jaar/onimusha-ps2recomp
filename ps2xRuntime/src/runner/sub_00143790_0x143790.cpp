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

// Function: sub_00143790
// Address: 0x143790 - 0x1438ac
void sub_00143790_0x143790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143790_0x143790");
#endif

    switch (ctx->pc) {
        case 0x1437d8u: goto label_1437d8;
        case 0x143800u: goto label_143800;
        default: break;
    }

    ctx->pc = 0x143790u;

    // 0x143790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x143790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x143794: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x143794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x143798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x143798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14379c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1437a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1437a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1437a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1437a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1437a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1437acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1437b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1437b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1437b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1437b8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1437b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1437bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1437bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437c0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1437c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437c4: 0x2484cf04  addiu       $a0, $a0, -0x30FC
    ctx->pc = 0x1437c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954756));
    // 0x1437c8: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1437c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1437cc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1437ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1437d0: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x1437D0u;
    SET_GPR_U32(ctx, 31, 0x1437D8u);
    ctx->pc = 0x1437D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437D0u;
    // 0x1437d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x1437D0u, 0x1437D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437D8u;
label_1437d8:
    // 0x1437d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1437d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437dc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1437DCu;
    {
        const bool branch_taken_0x1437dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1437dc) {
            ctx->pc = 0x1437F0u;
            goto label_1437f0;
        }
    }
    ctx->pc = 0x1437E4u;
    // 0x1437e4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1437E4u;
    {
        const bool branch_taken_0x1437e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1437E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437E4u;
        // 0x1437e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437e4) {
            ctx->pc = 0x143888u;
            goto label_143888;
        }
    }
    ctx->pc = 0x1437ECu;
    // 0x1437ec: 0x0  nop
    ctx->pc = 0x1437ecu;
    // NOP
label_1437f0:
    // 0x1437f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1437f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1437f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1437f8: 0xc049590  jal         func_125640
    ctx->pc = 0x1437F8u;
    SET_GPR_U32(ctx, 31, 0x143800u);
    ctx->pc = 0x1437FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437F8u;
    // 0x1437fc: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1437F8u, 0x143800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143800u;
label_143800:
    // 0x143800: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x143800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143804: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143804u;
    {
        const bool branch_taken_0x143804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143804) {
            ctx->pc = 0x143818u;
            goto label_143818;
        }
    }
    ctx->pc = 0x14380Cu;
    // 0x14380c: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x14380cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x143810: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x143810u;
    {
        const bool branch_taken_0x143810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143810u;
        // 0x143814: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143810) {
            ctx->pc = 0x143828u;
            goto label_143828;
        }
    }
    ctx->pc = 0x143818u;
label_143818:
    // 0x143818: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x143818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14381c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x14381cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x143820: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x143820u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
    // 0x143824: 0x0  nop
    ctx->pc = 0x143824u;
    // NOP
label_143828:
    // 0x143828: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x143828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14382c: 0xa2140020  sb          $s4, 0x20($s0)
    ctx->pc = 0x14382cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 20));
    // 0x143830: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x143830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x143834: 0xa2130021  sb          $s3, 0x21($s0)
    ctx->pc = 0x143834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 19));
    // 0x143838: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x143838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14383c: 0xa2120022  sb          $s2, 0x22($s0)
    ctx->pc = 0x14383cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 18));
    // 0x143840: 0xa2110023  sb          $s1, 0x23($s0)
    ctx->pc = 0x143840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 17));
    // 0x143844: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x143844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x143848: 0xa2030024  sb          $v1, 0x24($s0)
    ctx->pc = 0x143848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x14384c: 0xa2030025  sb          $v1, 0x25($s0)
    ctx->pc = 0x14384cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x143850: 0xa2030026  sb          $v1, 0x26($s0)
    ctx->pc = 0x143850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x143854: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x143854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x143858: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x143858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14385c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x14385cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x143860: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x143860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x143864: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x143864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x143868: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x143868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x14386c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x14386cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x143870: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x143870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x143874: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x143874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x143878: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x143878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x14387c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x14387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x143880: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x143880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x143884: 0x0  nop
    ctx->pc = 0x143884u;
    // NOP
label_143888:
    // 0x143888: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x143888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14388c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14388cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143890: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143894: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143898: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14389c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14389cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1438a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1438a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1438a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1438A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1438A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438A4u;
        // 0x1438a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1438A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1438ACu;
}
