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

// Function: sub_001A07F0
// Address: 0x1a07f0 - 0x1a0ba4
void sub_001A07F0_0x1a07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A07F0_0x1a07f0");
#endif

    switch (ctx->pc) {
        case 0x1a0888u: goto label_1a0888;
        case 0x1a0890u: goto label_1a0890;
        case 0x1a08b0u: goto label_1a08b0;
        case 0x1a08c8u: goto label_1a08c8;
        case 0x1a0958u: goto label_1a0958;
        case 0x1a09a8u: goto label_1a09a8;
        case 0x1a09f8u: goto label_1a09f8;
        case 0x1a0b10u: goto label_1a0b10;
        default: break;
    }

    ctx->pc = 0x1a07f0u;

    // 0x1a07f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a07f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a07f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a07f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a07f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a07f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a07fc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1a07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1a0800: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a0800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a0804: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a0804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a0808: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a0808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a080c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a080cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a0810: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a0814: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a081c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0824: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x1a0824u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1a0828: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a082c: 0x146000d2  bnez        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x1A082Cu;
    {
        const bool branch_taken_0x1a082c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A082Cu;
        // 0x1a0830: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a082c) {
            ctx->pc = 0x1A0B78u;
            goto label_1a0b78;
        }
    }
    ctx->pc = 0x1A0834u;
    // 0x1a0834: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0838: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x1a083c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a083cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0840: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A0840u;
    {
        const bool branch_taken_0x1a0840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0840u;
        // 0x1a0844: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0840) {
            ctx->pc = 0x1A08D0u;
            goto label_1a08d0;
        }
    }
    ctx->pc = 0x1A0848u;
    // 0x1a0848: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a084c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A084Cu;
    {
        const bool branch_taken_0x1a084c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a084c) {
            ctx->pc = 0x1A08D0u;
            goto label_1a08d0;
        }
    }
    ctx->pc = 0x1A0854u;
    // 0x1a0854: 0x8f8380c8  lw          $v1, -0x7F38($gp)
    ctx->pc = 0x1a0854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x1a0858: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A0858u;
    {
        const bool branch_taken_0x1a0858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0858u;
        // 0x1a085c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0858) {
            ctx->pc = 0x1A08D0u;
            goto label_1a08d0;
        }
    }
    ctx->pc = 0x1A0860u;
    // 0x1a0860: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1a0860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1a0864: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x1a0864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
    // 0x1a0868: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a0868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a086c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A086Cu;
    {
        const bool branch_taken_0x1a086c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A086Cu;
        // 0x1a0870: 0xaf8080c8  sw          $zero, -0x7F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a086c) {
            ctx->pc = 0x1A08B8u;
            goto label_1a08b8;
        }
    }
    ctx->pc = 0x1A0874u;
    // 0x1a0874: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1a0874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1a0878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a0878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a087c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A087Cu;
    {
        const bool branch_taken_0x1a087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A087Cu;
        // 0x1a0880: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a087c) {
            ctx->pc = 0x1A0898u;
            goto label_1a0898;
        }
    }
    ctx->pc = 0x1A0884u;
    // 0x1a0884: 0x0  nop
    ctx->pc = 0x1a0884u;
    // NOP
label_1a0888:
    // 0x1a0888: 0xc068090  jal         func_1A0240
    ctx->pc = 0x1A0888u;
    SET_GPR_U32(ctx, 31, 0x1A0890u);
    ctx->pc = 0x1A088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0888u;
    // 0x1a088c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0240u, 0x1A0888u, 0x1A0890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0890u;
label_1a0890:
    // 0x1a0890: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a0890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a0894: 0x0  nop
    ctx->pc = 0x1a0894u;
    // NOP
label_1a0898:
    // 0x1a0898: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x1a0898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1a089c: 0x0  nop
    ctx->pc = 0x1a089cu;
    // NOP
    // 0x1a08a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A08A0u;
    {
        const bool branch_taken_0x1a08a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a08a0) {
            ctx->pc = 0x1A0888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0888;
        }
    }
    ctx->pc = 0x1A08A8u;
    // 0x1a08a8: 0xc0682ec  jal         func_1A0BB0
    ctx->pc = 0x1A08A8u;
    SET_GPR_U32(ctx, 31, 0x1A08B0u);
    ctx->pc = 0x1A08ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08A8u;
    // 0x1a08ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0BB0u, 0x1A08A8u, 0x1A08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08B0u;
label_1a08b0:
    // 0x1a08b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A08B0u;
    {
        const bool branch_taken_0x1a08b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a08b0) {
            ctx->pc = 0x1A08C8u;
            goto label_1a08c8;
        }
    }
    ctx->pc = 0x1A08B8u;
label_1a08b8:
    // 0x1a08b8: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x1a08b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x1a08bc: 0x24843ad0  addiu       $a0, $a0, 0x3AD0
    ctx->pc = 0x1a08bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15056));
    // 0x1a08c0: 0xc068358  jal         func_1A0D60
    ctx->pc = 0x1A08C0u;
    SET_GPR_U32(ctx, 31, 0x1A08C8u);
    ctx->pc = 0x1A08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08C0u;
    // 0x1a08c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1A08C0u, 0x1A08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08C8u;
label_1a08c8:
    // 0x1a08c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a08c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a08cc: 0xaf8380c8  sw          $v1, -0x7F38($gp)
    ctx->pc = 0x1a08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934728), GPR_U32(ctx, 3));
label_1a08d0:
    // 0x1a08d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a08d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a08d4: 0x9035cea4  lbu         $s5, -0x315C($at)
    ctx->pc = 0x1a08d4u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1a08d8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1a08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1a08dc: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1a08dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1a08e0: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x1a08e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1a08e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a08e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a08e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a08e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a08ec: 0x8c24cef4  lw          $a0, -0x310C($at)
    ctx->pc = 0x1a08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEF4u));
    // 0x1a08f0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a08f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a08f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a08f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a08f8: 0x8cb40004  lw          $s4, 0x4($a1)
    ctx->pc = 0x1a08f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a08fc: 0x8cb60008  lw          $s6, 0x8($a1)
    ctx->pc = 0x1a08fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a0900: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A0900u;
    {
        const bool branch_taken_0x1a0900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0900u;
        // 0x1a0904: 0x8e130058  lw          $s3, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0900) {
            ctx->pc = 0x1A09F0u;
            goto label_1a09f0;
        }
    }
    ctx->pc = 0x1A0908u;
    // 0x1a0908: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x1a0908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1a090c: 0x10c00038  beqz        $a2, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A090Cu;
    {
        const bool branch_taken_0x1a090c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a090c) {
            ctx->pc = 0x1A09F0u;
            goto label_1a09f0;
        }
    }
    ctx->pc = 0x1A0914u;
    // 0x1a0914: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a0914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0918: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x1a0918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x1a091c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1a091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x1a0920: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a0920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0924: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a0924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a0928: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1a0928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a092c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1a092cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0930: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1a0930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a0934: 0xc59021  addu        $s2, $a2, $a1
    ctx->pc = 0x1a0934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a0938: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1a0938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a093c: 0x640019  multu       $v1, $a0
    ctx->pc = 0x1a093cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a0940: 0x0  nop
    ctx->pc = 0x1a0940u;
    // NOP
    // 0x1a0944: 0x0  nop
    ctx->pc = 0x1a0944u;
    // NOP
    // 0x1a0948: 0x1810  mfhi        $v1
    ctx->pc = 0x1a0948u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a094c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A094Cu;
    {
        const bool branch_taken_0x1a094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A094Cu;
        // 0x1a0950: 0x3b942  srl         $s7, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a094c) {
            ctx->pc = 0x1A09E0u;
            goto label_1a09e0;
        }
    }
    ctx->pc = 0x1A0954u;
    // 0x1a0954: 0x0  nop
    ctx->pc = 0x1a0954u;
    // NOP
label_1a0958:
    // 0x1a0958: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1a0958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a095c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1a095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a0960: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1a0960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a0964: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a0964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a0968: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a0968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a096c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a0970: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1a0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0974: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x1a0974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1a0978: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1a0978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a097c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1a097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0980: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1a0980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1a0984: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1a0984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0988: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1a0988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1a098c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1a098cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1a0990: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1a0990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0994: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1a0994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1a0998: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1a0998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1a099c: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x1a099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
    // 0x1a09a0: 0xc041442  jal         func_105108
    ctx->pc = 0x1A09A0u;
    SET_GPR_U32(ctx, 31, 0x1A09A8u);
    ctx->pc = 0x1A09A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09A0u;
    // 0x1a09a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A09A0u, 0x1A09A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09A8u;
label_1a09a8:
    // 0x1a09a8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1a09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a09ac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a09acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a09b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a09b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a09b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a09b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a09b8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a09bc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1a09bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a09c0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1a09c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a09c4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1a09c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a09c8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1a09c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1a09cc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1a09ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a09d0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1a09d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1a09d4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1a09d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a09d8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1a09d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1a09dc: 0x0  nop
    ctx->pc = 0x1a09dcu;
    // NOP
label_1a09e0:
    // 0x1a09e0: 0x237182b  sltu        $v1, $s1, $s7
    ctx->pc = 0x1a09e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1a09e4: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1A09E4u;
    {
        const bool branch_taken_0x1a09e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a09e4) {
            ctx->pc = 0x1A0958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0958;
        }
    }
    ctx->pc = 0x1A09ECu;
    // 0x1a09ec: 0x0  nop
    ctx->pc = 0x1a09ecu;
    // NOP
label_1a09f0:
    // 0x1a09f0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1A09F0u;
    {
        const bool branch_taken_0x1a09f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09F0u;
        // 0x1a09f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09f0) {
            ctx->pc = 0x1A0AD8u;
            goto label_1a0ad8;
        }
    }
    ctx->pc = 0x1A09F8u;
label_1a09f8:
    // 0x1a09f8: 0x8e090050  lw          $t1, 0x50($s0)
    ctx->pc = 0x1a09f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1a09fc: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1a09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a0a00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a0a04: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1a0a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a0a08: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1a0a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a0a0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a0a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a0a10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a0a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a0a14: 0x2854021  addu        $t0, $s4, $a1
    ctx->pc = 0x1a0a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1a0a18: 0x2c53821  addu        $a3, $s6, $a1
    ctx->pc = 0x1a0a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1a0a1c: 0x1232821  addu        $a1, $t1, $v1
    ctx->pc = 0x1a0a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1a0a20: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a0a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0a24: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1a0a24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a0a28: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1a0a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a0a2c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1a0a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0a30: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1a0a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1a0a34: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x1a0a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1a0a38: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1a0a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a0a3c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1a0a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0a40: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a0a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0a44: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1a0a44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a0a48: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1a0a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a0a4c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a0a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0a50: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x1a0a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1a0a54: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x1a0a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1a0a58: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1a0a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a0a5c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1a0a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0a60: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a0a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0a64: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a0a68: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1a0a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a0a6c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a0a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0a70: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1a0a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1a0a74: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x1a0a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1a0a78: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a0a7c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1a0a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0a80: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a0a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0a84: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1a0a84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a0a88: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a0a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a0a8c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1a0a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0a90: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1a0a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1a0a94: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x1a0a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1a0a98: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a0a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a0a9c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0aa0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a0aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0aa4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1a0aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a0aa8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1a0aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a0aac: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a0aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0ab0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1a0ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1a0ab4: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x1a0ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1a0ab8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a0ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a0abc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a0abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0ac0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a0ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0ac4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a0ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a0ac8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a0ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a0acc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1a0accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0ad0: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1a0ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1a0ad4: 0x0  nop
    ctx->pc = 0x1a0ad4u;
    // NOP
label_1a0ad8:
    // 0x1a0ad8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1a0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1a0adc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a0adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0ae0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0ae0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0ae4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1a0ae4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a0ae8: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1A0AE8u;
    {
        const bool branch_taken_0x1a0ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AE8u;
        // 0x1a0aec: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ae8) {
            ctx->pc = 0x1A09F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a09f8;
        }
    }
    ctx->pc = 0x1A0AF0u;
    // 0x1a0af0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1a0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1a0af4: 0x8c24cef4  lw          $a0, -0x310C($at)
    ctx->pc = 0x1a0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954740)));
    // 0x1a0af8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0afc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A0AFCu;
    {
        const bool branch_taken_0x1a0afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AFCu;
        // 0x1a0b00: 0x152880  sll         $a1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0afc) {
            ctx->pc = 0x1A0B78u;
            goto label_1a0b78;
        }
    }
    ctx->pc = 0x1A0B04u;
    // 0x1a0b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A0B08u;
    {
        const bool branch_taken_0x1a0b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B08u;
        // 0x1a0b0c: 0x3c097000  lui         $t1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b08) {
            ctx->pc = 0x1A0B58u;
            goto label_1a0b58;
        }
    }
    ctx->pc = 0x1A0B10u;
label_1a0b10:
    // 0x1a0b10: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x1a0b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1a0b14: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x1a0b14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a0b18: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a0b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a0b1c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a0b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a0b20: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a0b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a0b24: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1a0b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a0b28: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1a0b28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1a0b2c: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x1a0b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a0b30: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1a0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a0b34: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1a0b34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0b38: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1a0b38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a0b3c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1a0b3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1a0b40: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1a0b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a0b44: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1a0b44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0b48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a0b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a0b4c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a0b4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0b50: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x1a0b50u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x1a0b54: 0x0  nop
    ctx->pc = 0x1a0b54u;
    // NOP
label_1a0b58:
    // 0x1a0b58: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1a0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1a0b5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a0b60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0b64: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0b64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0b68: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1a0b68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a0b6c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1A0B6Cu;
    {
        const bool branch_taken_0x1a0b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b6c) {
            ctx->pc = 0x1A0B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0b10;
        }
    }
    ctx->pc = 0x1A0B74u;
    // 0x1a0b74: 0x0  nop
    ctx->pc = 0x1a0b74u;
    // NOP
label_1a0b78:
    // 0x1a0b78: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a0b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a0b7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a0b7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0b80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a0b80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0b84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a0b84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0b88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a0b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0b8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a0b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0b90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B9Cu;
        // 0x1a0ba0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0BA4u;
}
