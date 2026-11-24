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

// Function: sub_002BE4C0
// Address: 0x2be4c0 - 0x2be76c
void sub_002BE4C0_0x2be4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE4C0_0x2be4c0");
#endif

    switch (ctx->pc) {
        case 0x2be550u: goto label_2be550;
        case 0x2be568u: goto label_2be568;
        case 0x2be57cu: goto label_2be57c;
        case 0x2be5acu: goto label_2be5ac;
        case 0x2be5bcu: goto label_2be5bc;
        case 0x2be5d0u: goto label_2be5d0;
        case 0x2be6bcu: goto label_2be6bc;
        case 0x2be724u: goto label_2be724;
        case 0x2be73cu: goto label_2be73c;
        default: break;
    }

    ctx->pc = 0x2be4c0u;

    // 0x2be4c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2be4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2be4c4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2be4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2be4c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2be4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2be4cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2be4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2be4d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2be4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2be4d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2be4d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2be4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2be4dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2be4dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2be4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2be4e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2be4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2be4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2be4ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2be4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be4f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2be4f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2be4f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2be4f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2be4f8: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2be4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2be4fc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BE4FCu;
    {
        const bool branch_taken_0x2be4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4FCu;
        // 0x2be500: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4fc) {
            ctx->pc = 0x2BE558u;
            goto label_2be558;
        }
    }
    ctx->pc = 0x2BE504u;
    // 0x2be504: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2be504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2be508: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BE508u;
    {
        const bool branch_taken_0x2be508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE508u;
        // 0x2be50c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be508) {
            ctx->pc = 0x2BE540u;
            goto label_2be540;
        }
    }
    ctx->pc = 0x2BE510u;
    // 0x2be510: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE510u;
    {
        const bool branch_taken_0x2be510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be510) {
            ctx->pc = 0x2BE520u;
            goto label_2be520;
        }
    }
    ctx->pc = 0x2BE518u;
    // 0x2be518: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2BE518u;
    {
        const bool branch_taken_0x2be518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be518) {
            ctx->pc = 0x2BE570u;
            goto label_2be570;
        }
    }
    ctx->pc = 0x2BE520u;
label_2be520:
    // 0x2be520: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2be520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2be524: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2be524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2be528: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2be528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2be52c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2be52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be534: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BE534u;
    {
        const bool branch_taken_0x2be534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE534u;
        // 0x2be538: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be534) {
            ctx->pc = 0x2BE570u;
            goto label_2be570;
        }
    }
    ctx->pc = 0x2BE53Cu;
    // 0x2be53c: 0x0  nop
    ctx->pc = 0x2be53cu;
    // NOP
label_2be540:
    // 0x2be540: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2be540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2be544: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2be544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2be548: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2BE548u;
    SET_GPR_U32(ctx, 31, 0x2BE550u);
    ctx->pc = 0x2BE54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE548u;
    // 0x2be54c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2BE548u, 0x2BE550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE550u;
label_2be550:
    // 0x2be550: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE550u;
    {
        const bool branch_taken_0x2be550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE550u;
        // 0x2be554: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be550) {
            ctx->pc = 0x2BE570u;
            goto label_2be570;
        }
    }
    ctx->pc = 0x2BE558u;
label_2be558:
    // 0x2be558: 0x8e850090  lw          $a1, 0x90($s4)
    ctx->pc = 0x2be558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x2be55c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2be55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2be560: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2BE560u;
    SET_GPR_U32(ctx, 31, 0x2BE568u);
    ctx->pc = 0x2BE564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE560u;
    // 0x2be564: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2BE560u, 0x2BE568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE568u;
label_2be568:
    // 0x2be568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be56c: 0x0  nop
    ctx->pc = 0x2be56cu;
    // NOP
label_2be570:
    // 0x2be570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be574: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2BE574u;
    SET_GPR_U32(ctx, 31, 0x2BE57Cu);
    ctx->pc = 0x2BE578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE574u;
    // 0x2be578: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2BE574u, 0x2BE57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE57Cu;
label_2be57c:
    // 0x2be57c: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2BE57Cu;
    {
        const bool branch_taken_0x2be57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be57c) {
            ctx->pc = 0x2BE730u;
            goto label_2be730;
        }
    }
    ctx->pc = 0x2BE584u;
    // 0x2be584: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x2be584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2be588: 0xa282005e  sb          $v0, 0x5E($s4)
    ctx->pc = 0x2be588u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be58c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2be58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2be590: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BE590u;
    {
        const bool branch_taken_0x2be590 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE590u;
        // 0x2be594: 0xae820074  sw          $v0, 0x74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be590) {
            ctx->pc = 0x2BE5E8u;
            goto label_2be5e8;
        }
    }
    ctx->pc = 0x2BE598u;
    // 0x2be598: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x2be598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2be59c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE59Cu;
    {
        const bool branch_taken_0x2be59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE59Cu;
        // 0x2be5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be59c) {
            ctx->pc = 0x2BE5E8u;
            goto label_2be5e8;
        }
    }
    ctx->pc = 0x2BE5A4u;
    // 0x2be5a4: 0xc0ae944  jal         func_2BA510
    ctx->pc = 0x2BE5A4u;
    SET_GPR_U32(ctx, 31, 0x2BE5ACu);
    ctx->pc = 0x2BA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA510u, 0x2BE5A4u, 0x2BE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5ACu;
label_2be5ac:
    // 0x2be5ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BE5ACu;
    {
        const bool branch_taken_0x2be5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5ACu;
        // 0x2be5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5ac) {
            ctx->pc = 0x2BE5E8u;
            goto label_2be5e8;
        }
    }
    ctx->pc = 0x2BE5B4u;
    // 0x2be5b4: 0xc0ae944  jal         func_2BA510
    ctx->pc = 0x2BE5B4u;
    SET_GPR_U32(ctx, 31, 0x2BE5BCu);
    ctx->pc = 0x2BA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA510u, 0x2BE5B4u, 0x2BE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5BCu;
label_2be5bc:
    // 0x2be5bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE5BCu;
    {
        const bool branch_taken_0x2be5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5BCu;
        // 0x2be5c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5bc) {
            ctx->pc = 0x2BE5E8u;
            goto label_2be5e8;
        }
    }
    ctx->pc = 0x2BE5C4u;
    // 0x2be5c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5c8: 0xc0afdfc  jal         func_2BF7F0
    ctx->pc = 0x2BE5C8u;
    SET_GPR_U32(ctx, 31, 0x2BE5D0u);
    ctx->pc = 0x2BE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5C8u;
    // 0x2be5cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF7F0u, 0x2BE5C8u, 0x2BE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5D0u;
label_2be5d0:
    // 0x2be5d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE5D0u;
    {
        const bool branch_taken_0x2be5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5d0) {
            ctx->pc = 0x2BE5E8u;
            goto label_2be5e8;
        }
    }
    ctx->pc = 0x2BE5D8u;
    // 0x2be5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be5dc: 0xa2820035  sb          $v0, 0x35($s4)
    ctx->pc = 0x2be5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 53), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be5e0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2BE5E0u;
    {
        const bool branch_taken_0x2be5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5E0u;
        // 0x2be5e4: 0xae920028  sw          $s2, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5e0) {
            ctx->pc = 0x2BE700u;
            goto label_2be700;
        }
    }
    ctx->pc = 0x2BE5E8u;
label_2be5e8:
    // 0x2be5e8: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x2be5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2be5ec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2be5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2be5f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE5F0u;
    {
        const bool branch_taken_0x2be5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be5f0) {
            ctx->pc = 0x2BE600u;
            goto label_2be600;
        }
    }
    ctx->pc = 0x2BE5F8u;
    // 0x2be5f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE5F8u;
    {
        const bool branch_taken_0x2be5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5f8) {
            ctx->pc = 0x2BE620u;
            goto label_2be620;
        }
    }
    ctx->pc = 0x2BE600u;
label_2be600:
    // 0x2be600: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2be600u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2be604: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x2be604u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2be608: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2be608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2be60c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2be60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be610: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2be610u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2be614: 0x0  nop
    ctx->pc = 0x2be614u;
    // NOP
    // 0x2be618: 0x0  nop
    ctx->pc = 0x2be618u;
    // NOP
    // 0x2be61c: 0x1810  mfhi        $v1
    ctx->pc = 0x2be61cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2be620:
    // 0x2be620: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2be620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be624: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2be624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2be628: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE628u;
    {
        const bool branch_taken_0x2be628 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2be628) {
            ctx->pc = 0x2BE63Cu;
            goto label_2be63c;
        }
    }
    ctx->pc = 0x2BE630u;
    // 0x2be630: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2be630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2be634: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE634u;
    {
        const bool branch_taken_0x2be634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE634u;
        // 0x2be638: 0xa2840046  sb          $a0, 0x46($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 70), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be634) {
            ctx->pc = 0x2BE650u;
            goto label_2be650;
        }
    }
    ctx->pc = 0x2BE63Cu;
label_2be63c:
    // 0x2be63c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2be63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2be640: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2be640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be648: 0xc455fffc  lwc1        $f21, -0x4($v0)
    ctx->pc = 0x2be648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2be64c: 0xa2840046  sb          $a0, 0x46($s4)
    ctx->pc = 0x2be64cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 70), (uint8_t)GPR_U32(ctx, 4));
label_2be650:
    // 0x2be650: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x2be650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2be654: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BE654u;
    {
        const bool branch_taken_0x2be654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be654) {
            ctx->pc = 0x2BE690u;
            goto label_2be690;
        }
    }
    ctx->pc = 0x2BE65Cu;
    // 0x2be65c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE65Cu;
    {
        const bool branch_taken_0x2be65c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE65Cu;
        // 0x2be660: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be65c) {
            ctx->pc = 0x2BE670u;
            goto label_2be670;
        }
    }
    ctx->pc = 0x2BE664u;
    // 0x2be664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE668u;
    {
        const bool branch_taken_0x2be668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE668u;
        // 0x2be66c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be668) {
            ctx->pc = 0x2BE688u;
            goto label_2be688;
        }
    }
    ctx->pc = 0x2BE670u;
label_2be670:
    // 0x2be670: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be674: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2be674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2be678: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be67c: 0x0  nop
    ctx->pc = 0x2be67cu;
    // NOP
    // 0x2be680: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2be680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2be684: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2be684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2be688:
    // 0x2be688: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE688u;
    {
        const bool branch_taken_0x2be688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE688u;
        // 0x2be68c: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be688) {
            ctx->pc = 0x2BE6A0u;
            goto label_2be6a0;
        }
    }
    ctx->pc = 0x2BE690u;
label_2be690:
    // 0x2be690: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2be690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x2be694: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2be694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2be698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be69c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2be69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2be6a0:
    // 0x2be6a0: 0xe6800070  swc1        $f0, 0x70($s4)
    ctx->pc = 0x2be6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 112), bits); }
    // 0x2be6a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2be6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be6a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2be6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2be6ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be6b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2be6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be6b4: 0xc04d4c0  jal         func_135300
    ctx->pc = 0x2BE6B4u;
    SET_GPR_U32(ctx, 31, 0x2BE6BCu);
    ctx->pc = 0x2BE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6B4u;
    // 0x2be6b8: 0x46150501  sub.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135300u, 0x2BE6B4u, 0x2BE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6BCu;
label_2be6bc:
    // 0x2be6bc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2be6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2be6c0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2be6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2be6c4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2be6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2be6c8: 0x244250c8  addiu       $v0, $v0, 0x50C8
    ctx->pc = 0x2be6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20680));
    // 0x2be6cc: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2be6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2be6d0: 0xe68000a0  swc1        $f0, 0xA0($s4)
    ctx->pc = 0x2be6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 160), bits); }
    // 0x2be6d4: 0xae83009c  sw          $v1, 0x9C($s4)
    ctx->pc = 0x2be6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
    // 0x2be6d8: 0x96830080  lhu         $v1, 0x80($s4)
    ctx->pc = 0x2be6d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2be6dc: 0xa6830022  sh          $v1, 0x22($s4)
    ctx->pc = 0x2be6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2be6e0: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x2be6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x2be6e4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2be6e4u;
    { uint32_t bits = FAST_READ32(0x4E50C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be6e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2be6e8u;
    { uint32_t bits = FAST_READ32(0x4E50CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be6ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2be6ecu;
    { uint32_t bits = FAST_READ32(0x4E50D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be6f0: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2be6f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2be6f4: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x2be6f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2be6f8: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x2be6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x2be6fc: 0x0  nop
    ctx->pc = 0x2be6fcu;
    // NOP
label_2be700:
    // 0x2be700: 0xa6800058  sh          $zero, 0x58($s4)
    ctx->pc = 0x2be700u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2be704: 0xa6800056  sh          $zero, 0x56($s4)
    ctx->pc = 0x2be704u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2be708: 0x26420006  addiu       $v0, $s2, 0x6
    ctx->pc = 0x2be708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x2be70c: 0xa2800107  sb          $zero, 0x107($s4)
    ctx->pc = 0x2be70cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 263), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be710: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2be710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be718: 0x26990008  addiu       $t9, $s4, 0x8
    ctx->pc = 0x2be718u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2be71c: 0xc040250  jal         func_100940
    ctx->pc = 0x2BE71Cu;
    SET_GPR_U32(ctx, 31, 0x2BE724u);
    ctx->pc = 0x2BE720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE71Cu;
    // 0x2be720: 0xae82002c  sw          $v0, 0x2C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2BE71Cu, 0x2BE724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE724u;
label_2be724:
    // 0x2be724: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE724u;
    {
        const bool branch_taken_0x2be724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be724) {
            ctx->pc = 0x2BE740u;
            goto label_2be740;
        }
    }
    ctx->pc = 0x2BE72Cu;
    // 0x2be72c: 0x0  nop
    ctx->pc = 0x2be72cu;
    // NOP
label_2be730:
    // 0x2be730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be734: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BE734u;
    SET_GPR_U32(ctx, 31, 0x2BE73Cu);
    ctx->pc = 0x2BE738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE734u;
    // 0x2be738: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BE734u, 0x2BE73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE73Cu;
label_2be73c:
    // 0x2be73c: 0x0  nop
    ctx->pc = 0x2be73cu;
    // NOP
label_2be740:
    // 0x2be740: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2be740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2be744: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2be744u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be748: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2be748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2be74c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2be74cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be750: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2be750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be754: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2be754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2be758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be75c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2be75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2be760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be764: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE764u;
        // 0x2be768: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE76Cu;
}
