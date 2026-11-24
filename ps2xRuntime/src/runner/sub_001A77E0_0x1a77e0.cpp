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

// Function: sub_001A77E0
// Address: 0x1a77e0 - 0x1a78d4
void sub_001A77E0_0x1a77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A77E0_0x1a77e0");
#endif

    switch (ctx->pc) {
        case 0x1a7810u: goto label_1a7810;
        case 0x1a7830u: goto label_1a7830;
        case 0x1a7838u: goto label_1a7838;
        case 0x1a7878u: goto label_1a7878;
        case 0x1a78b8u: goto label_1a78b8;
        default: break;
    }

    ctx->pc = 0x1a77e0u;

    // 0x1a77e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a77e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a77e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a77e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a77e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a77e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a77ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a77ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a77f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a77f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a77f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a77f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a77f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a77f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77fc: 0xc4ac0010  lwc1        $f12, 0x10($a1)
    ctx->pc = 0x1a77fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a7800: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1a7800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x1a7804: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7808: 0xc070604  jal         func_1C1810
    ctx->pc = 0x1A7808u;
    SET_GPR_U32(ctx, 31, 0x1A7810u);
    ctx->pc = 0x1A780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7808u;
    // 0x1a780c: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1810u, 0x1A7808u, 0x1A7810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7810u;
label_1a7810:
    // 0x1a7810: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1a7810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1a7814: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x1a7814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x1a7818: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1a7818u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a781c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1A781Cu;
    {
        const bool branch_taken_0x1a781c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A781Cu;
        // 0x1a7820: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a781c) {
            ctx->pc = 0x1A7850u;
            goto label_1a7850;
        }
    }
    ctx->pc = 0x1A7824u;
    // 0x1a7824: 0x3c120081  lui         $s2, 0x81
    ctx->pc = 0x1a7824u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)129 << 16));
    // 0x1a7828: 0x265295a0  addiu       $s2, $s2, -0x6A60
    ctx->pc = 0x1a7828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294940064));
    // 0x1a782c: 0x0  nop
    ctx->pc = 0x1a782cu;
    // NOP
label_1a7830:
    // 0x1a7830: 0xc059ccc  jal         func_167330
    ctx->pc = 0x1A7830u;
    SET_GPR_U32(ctx, 31, 0x1A7838u);
    ctx->pc = 0x1A7834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7830u;
    // 0x1a7834: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167330u, 0x1A7830u, 0x1A7838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7838u;
label_1a7838:
    // 0x1a7838: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1a7838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1a783c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a783cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a7840: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x1a7840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x1a7844: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1a7844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a7848: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A7848u;
    {
        const bool branch_taken_0x1a7848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7848u;
        // 0x1a784c: 0x265222b0  addiu       $s2, $s2, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7848) {
            ctx->pc = 0x1A7830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7830;
        }
    }
    ctx->pc = 0x1A7850u;
label_1a7850:
    // 0x1a7850: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a7850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a7854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7858: 0xae2278b4  sw          $v0, 0x78B4($s1)
    ctx->pc = 0x1a7858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30900), GPR_U32(ctx, 2));
    // 0x1a785c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1a785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1a7860: 0xae2278b8  sw          $v0, 0x78B8($s1)
    ctx->pc = 0x1a7860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30904), GPR_U32(ctx, 2));
    // 0x1a7864: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1a7864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a7868: 0xae2278bc  sw          $v0, 0x78BC($s1)
    ctx->pc = 0x1a7868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30908), GPR_U32(ctx, 2));
    // 0x1a786c: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1a786cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7870: 0xc069630  jal         func_1A58C0
    ctx->pc = 0x1A7870u;
    SET_GPR_U32(ctx, 31, 0x1A7878u);
    ctx->pc = 0x1A7874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7870u;
    // 0x1a7874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A58C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A58C0u, 0x1A7870u, 0x1A7878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7878u;
label_1a7878:
    // 0x1a7878: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A7878u;
    {
        const bool branch_taken_0x1a7878 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7878) {
            ctx->pc = 0x1A78B8u;
            goto label_1a78b8;
        }
    }
    ctx->pc = 0x1A7880u;
    // 0x1a7880: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1a7880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1a7884: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7884u;
    {
        const bool branch_taken_0x1a7884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7884u;
        // 0x1a7888: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7884) {
            ctx->pc = 0x1A78A0u;
            goto label_1a78a0;
        }
    }
    ctx->pc = 0x1A788Cu;
    // 0x1a788c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1a788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a7890: 0xae2378c0  sw          $v1, 0x78C0($s1)
    ctx->pc = 0x1a7890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30912), GPR_U32(ctx, 3));
    // 0x1a7894: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7894u;
    {
        const bool branch_taken_0x1a7894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7894u;
        // 0x1a7898: 0xae2278c4  sw          $v0, 0x78C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 30916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7894) {
            ctx->pc = 0x1A78B0u;
            goto label_1a78b0;
        }
    }
    ctx->pc = 0x1A789Cu;
    // 0x1a789c: 0x0  nop
    ctx->pc = 0x1a789cu;
    // NOP
label_1a78a0:
    // 0x1a78a0: 0xae2078c0  sw          $zero, 0x78C0($s1)
    ctx->pc = 0x1a78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30912), GPR_U32(ctx, 0));
    // 0x1a78a4: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x1a78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a78a8: 0xae2278c4  sw          $v0, 0x78C4($s1)
    ctx->pc = 0x1a78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30916), GPR_U32(ctx, 2));
    // 0x1a78ac: 0x0  nop
    ctx->pc = 0x1a78acu;
    // NOP
label_1a78b0:
    // 0x1a78b0: 0xc069d34  jal         func_1A74D0
    ctx->pc = 0x1A78B0u;
    SET_GPR_U32(ctx, 31, 0x1A78B8u);
    ctx->pc = 0x1A78B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78B0u;
    // 0x1a78b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A74D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A74D0u, 0x1A78B0u, 0x1A78B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A78B8u;
label_1a78b8:
    // 0x1a78b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a78b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a78bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a78bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a78c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a78c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a78c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a78c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a78c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a78c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a78cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A78CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78CCu;
        // 0x1a78d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A78CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A78D4u;
}
