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

// Function: sub_0028A750
// Address: 0x28a750 - 0x28a964
void sub_0028A750_0x28a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A750_0x28a750");
#endif

    switch (ctx->pc) {
        case 0x28a7b8u: goto label_28a7b8;
        case 0x28a7c8u: goto label_28a7c8;
        default: break;
    }

    ctx->pc = 0x28a750u;

    // 0x28a750: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28a750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28a754: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28a758: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28a758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28a75c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28a75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28a760: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x28a760u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a764: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28a764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28a768: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x28a768u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a76c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28a770: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28a770u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a774: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28a774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28a778: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x28a778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a77c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28a77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28a780: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x28a780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28a784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28a788: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x28a788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28a790: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x28a790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a794: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x28a794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a798: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28a798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a79c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28a79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28a7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28a7a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7a8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28a7a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x28a7acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7b0: 0xc0a2a5c  jal         func_28A970
    ctx->pc = 0x28A7B0u;
    SET_GPR_U32(ctx, 31, 0x28A7B8u);
    ctx->pc = 0x28A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7B0u;
    // 0x28a7b4: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A970u, 0x28A7B0u, 0x28A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7B8u;
label_28a7b8:
    // 0x28a7b8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x28A7B8u;
    {
        const bool branch_taken_0x28a7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7B8u;
        // 0x28a7bc: 0x3c05008d  lui         $a1, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7b8) {
            ctx->pc = 0x28A890u;
            goto label_28a890;
        }
    }
    ctx->pc = 0x28A7C0u;
    // 0x28a7c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7c4: 0x24a594b0  addiu       $a1, $a1, -0x6B50
    ctx->pc = 0x28a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939824));
label_28a7c8:
    // 0x28a7c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a7cc: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x28A7CCu;
    {
        const bool branch_taken_0x28a7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7CCu;
        // 0x28a7d0: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7cc) {
            ctx->pc = 0x28A878u;
            goto label_28a878;
        }
    }
    ctx->pc = 0x28A7D4u;
    // 0x28a7d4: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x28a7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x28a7d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28a7dc: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x28a7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x28a7e0: 0x24e794b4  addiu       $a3, $a3, -0x6B4C
    ctx->pc = 0x28a7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939828));
    // 0x28a7e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28a7e8: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a7ec: 0xe34021  addu        $t0, $a3, $v1
    ctx->pc = 0x28a7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x28a7f0: 0x24c694b5  addiu       $a2, $a2, -0x6B4B
    ctx->pc = 0x28a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939829));
    // 0x28a7f4: 0x24a594b6  addiu       $a1, $a1, -0x6B4A
    ctx->pc = 0x28a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939830));
    // 0x28a7f8: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x28a7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x28a7fc: 0xa1150000  sb          $s5, 0x0($t0)
    ctx->pc = 0x28a7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x28a800: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x28a800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a804: 0xa0f40000  sb          $s4, 0x0($a3)
    ctx->pc = 0x28a804u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x28a808: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a80c: 0xa0d30000  sb          $s3, 0x0($a2)
    ctx->pc = 0x28a80cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x28a810: 0x24a594b7  addiu       $a1, $a1, -0x6B49
    ctx->pc = 0x28a810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939831));
    // 0x28a814: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x28a814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x28a818: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x28a818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a81c: 0x24c694b0  addiu       $a2, $a2, -0x6B50
    ctx->pc = 0x28a81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939824));
    // 0x28a820: 0xa0b20000  sb          $s2, 0x0($a1)
    ctx->pc = 0x28a820u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x28a824: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x28a824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x28a828: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a82c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28a82cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a830: 0x24a594b1  addiu       $a1, $a1, -0x6B4F
    ctx->pc = 0x28a830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939825));
    // 0x28a834: 0xa0e80000  sb          $t0, 0x0($a3)
    ctx->pc = 0x28a834u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x28a838: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x28a838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a83c: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a840: 0xa0d10000  sb          $s1, 0x0($a2)
    ctx->pc = 0x28a840u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x28a844: 0x24a594b2  addiu       $a1, $a1, -0x6B4E
    ctx->pc = 0x28a844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939826));
    // 0x28a848: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x28a848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a84c: 0xa0b00000  sb          $s0, 0x0($a1)
    ctx->pc = 0x28a84cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a850: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a854: 0x24a594b3  addiu       $a1, $a1, -0x6B4D
    ctx->pc = 0x28a854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939827));
    // 0x28a858: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x28a858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a85c: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x28a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x28a860: 0xa0b60000  sb          $s6, 0x0($a1)
    ctx->pc = 0x28a860u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 22));
    // 0x28a864: 0x2463a0b0  addiu       $v1, $v1, -0x5F50
    ctx->pc = 0x28a864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942896));
    // 0x28a868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28a868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28a86c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x28A86Cu;
    {
        const bool branch_taken_0x28a86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A86Cu;
        // 0x28a870: 0xa0770000  sb          $s7, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a86c) {
            ctx->pc = 0x28A938u;
            goto label_28a938;
        }
    }
    ctx->pc = 0x28A874u;
    // 0x28a874: 0x0  nop
    ctx->pc = 0x28a874u;
    // NOP
label_28a878:
    // 0x28a878: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28a878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28a87c: 0x28830100  slti        $v1, $a0, 0x100
    ctx->pc = 0x28a87cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x28a880: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x28A880u;
    {
        const bool branch_taken_0x28a880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A880u;
        // 0x28a884: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a880) {
            ctx->pc = 0x28A7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a7c8;
        }
    }
    ctx->pc = 0x28A888u;
    // 0x28a888: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x28A888u;
    {
        const bool branch_taken_0x28a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a888) {
            ctx->pc = 0x28A938u;
            goto label_28a938;
        }
    }
    ctx->pc = 0x28A890u;
label_28a890:
    // 0x28a890: 0x8f8e8940  lw          $t6, -0x76C0($gp)
    ctx->pc = 0x28a890u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x28a894: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x28a894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x28a898: 0x3c0d008d  lui         $t5, 0x8D
    ctx->pc = 0x28a898u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)141 << 16));
    // 0x28a89c: 0x2463a0b0  addiu       $v1, $v1, -0x5F50
    ctx->pc = 0x28a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942896));
    // 0x28a8a0: 0x3c0c008d  lui         $t4, 0x8D
    ctx->pc = 0x28a8a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)141 << 16));
    // 0x28a8a4: 0x3c0b008d  lui         $t3, 0x8D
    ctx->pc = 0x28a8a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)141 << 16));
    // 0x28a8a8: 0x3c0a008d  lui         $t2, 0x8D
    ctx->pc = 0x28a8a8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)141 << 16));
    // 0x28a8ac: 0x3c08008d  lui         $t0, 0x8D
    ctx->pc = 0x28a8acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)141 << 16));
    // 0x28a8b0: 0x3c07008d  lui         $a3, 0x8D
    ctx->pc = 0x28a8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)141 << 16));
    // 0x28a8b4: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x28a8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x28a8b8: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x28a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x28a8bc: 0x6e2021  addu        $a0, $v1, $t6
    ctx->pc = 0x28a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x28a8c0: 0x25ad94b4  addiu       $t5, $t5, -0x6B4C
    ctx->pc = 0x28a8c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294939828));
    // 0x28a8c4: 0xe1840  sll         $v1, $t6, 1
    ctx->pc = 0x28a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x28a8c8: 0x258c94b5  addiu       $t4, $t4, -0x6B4B
    ctx->pc = 0x28a8c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294939829));
    // 0x28a8cc: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x28a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x28a8d0: 0x256b94b6  addiu       $t3, $t3, -0x6B4A
    ctx->pc = 0x28a8d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294939830));
    // 0x28a8d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28a8d8: 0x254a94b7  addiu       $t2, $t2, -0x6B49
    ctx->pc = 0x28a8d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294939831));
    // 0x28a8dc: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x28a8dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x28a8e0: 0x250894b0  addiu       $t0, $t0, -0x6B50
    ctx->pc = 0x28a8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939824));
    // 0x28a8e4: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x28a8e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x28a8e8: 0xa1b50000  sb          $s5, 0x0($t5)
    ctx->pc = 0x28a8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x28a8ec: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x28a8f0: 0xa1940000  sb          $s4, 0x0($t4)
    ctx->pc = 0x28a8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x28a8f4: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x28a8f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x28a8f8: 0xa1730000  sb          $s3, 0x0($t3)
    ctx->pc = 0x28a8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x28a8fc: 0x24e794b1  addiu       $a3, $a3, -0x6B4F
    ctx->pc = 0x28a8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939825));
    // 0x28a900: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28a900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a904: 0x24c694b2  addiu       $a2, $a2, -0x6B4E
    ctx->pc = 0x28a904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939826));
    // 0x28a908: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x28a908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x28a90c: 0xa1520000  sb          $s2, 0x0($t2)
    ctx->pc = 0x28a90cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x28a910: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x28a910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x28a914: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x28a914u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x28a918: 0x24a594b3  addiu       $a1, $a1, -0x6B4D
    ctx->pc = 0x28a918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939827));
    // 0x28a91c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x28a91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x28a920: 0xa0f10000  sb          $s1, 0x0($a3)
    ctx->pc = 0x28a920u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x28a924: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28a928: 0xa0d00000  sb          $s0, 0x0($a2)
    ctx->pc = 0x28a928u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a92c: 0xa0760000  sb          $s6, 0x0($v1)
    ctx->pc = 0x28a92cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 22));
    // 0x28a930: 0xa0970000  sb          $s7, 0x0($a0)
    ctx->pc = 0x28a930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 23));
    // 0x28a934: 0x0  nop
    ctx->pc = 0x28a934u;
    // NOP
label_28a938:
    // 0x28a938: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28a938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a93c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28a93cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a940: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28a940u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a944: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28a944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a948: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28a948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a94c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28a94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a950: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28a950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28a954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28a958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a95c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A95Cu;
        // 0x28a960: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A964u;
}
