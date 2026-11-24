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

// Function: sub_0029A770
// Address: 0x29a770 - 0x29a8dc
void sub_0029A770_0x29a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A770_0x29a770");
#endif

    switch (ctx->pc) {
        case 0x29a82cu: goto label_29a82c;
        case 0x29a8ccu: goto label_29a8cc;
        default: break;
    }

    ctx->pc = 0x29a770u;

    // 0x29a770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a774: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x29a774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a77c: 0x10a70030  beq         $a1, $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x29A77Cu;
    {
        const bool branch_taken_0x29a77c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x29A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A77Cu;
        // 0x29a780: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a77c) {
            ctx->pc = 0x29A840u;
            goto label_29a840;
        }
    }
    ctx->pc = 0x29A784u;
    // 0x29a784: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29a784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a788: 0x10a4002b  beq         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x29A788u;
    {
        const bool branch_taken_0x29a788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x29a788) {
            ctx->pc = 0x29A838u;
            goto label_29a838;
        }
    }
    ctx->pc = 0x29A790u;
    // 0x29a790: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A790u;
    {
        const bool branch_taken_0x29a790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a790) {
            ctx->pc = 0x29A7A0u;
            goto label_29a7a0;
        }
    }
    ctx->pc = 0x29A798u;
    // 0x29a798: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x29A798u;
    {
        const bool branch_taken_0x29a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a798) {
            ctx->pc = 0x29A848u;
            goto label_29a848;
        }
    }
    ctx->pc = 0x29A7A0u;
label_29a7a0:
    // 0x29a7a0: 0x906808e8  lbu         $t0, 0x8E8($v1)
    ctx->pc = 0x29a7a0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2280)));
    // 0x29a7a4: 0x1507000a  bne         $t0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x29A7A4u;
    {
        const bool branch_taken_0x29a7a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x29A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7A4u;
        // 0x29a7a8: 0x62e00  sll         $a1, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7a4) {
            ctx->pc = 0x29A7D0u;
            goto label_29a7d0;
        }
    }
    ctx->pc = 0x29A7ACu;
    // 0x29a7ac: 0x906404d2  lbu         $a0, 0x4D2($v1)
    ctx->pc = 0x29a7acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1234)));
    // 0x29a7b0: 0x906604d3  lbu         $a2, 0x4D3($v1)
    ctx->pc = 0x29a7b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1235)));
    // 0x29a7b4: 0x906204d1  lbu         $v0, 0x4D1($v1)
    ctx->pc = 0x29a7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1233)));
    // 0x29a7b8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x29a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x29a7bc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x29a7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x29a7c0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x29a7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x29a7c4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x29a7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x29a7c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29A7C8u;
    {
        const bool branch_taken_0x29a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7C8u;
        // 0x29a7cc: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7c8) {
            ctx->pc = 0x29A800u;
            goto label_29a800;
        }
    }
    ctx->pc = 0x29A7D0u;
label_29a7d0:
    // 0x29a7d0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x29a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x29a7d4: 0x24a56fa8  addiu       $a1, $a1, 0x6FA8
    ctx->pc = 0x29a7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28584));
    // 0x29a7d8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x29a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x29a7dc: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x29a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x29a7e0: 0x24426fb8  addiu       $v0, $v0, 0x6FB8
    ctx->pc = 0x29a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28600));
    // 0x29a7e4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x29a7e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29a7e8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x29a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29a7ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x29a7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a7f0: 0x62600  sll         $a0, $a2, 24
    ctx->pc = 0x29a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x29a7f4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x29a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x29a7f8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x29a7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x29a7fc: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x29a7fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_29a800:
    // 0x29a800: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x29a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x29a804: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x29a804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x29a808: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x29a808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x29a80c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x29a80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29a810: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x29a810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x29a814: 0x24670020  addiu       $a3, $v1, 0x20
    ctx->pc = 0x29a814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x29a818: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29a818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a81c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29a81cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a820: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29a820u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a824: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x29A824u;
    SET_GPR_U32(ctx, 31, 0x29A82Cu);
    ctx->pc = 0x29A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A824u;
    // 0x29a828: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x29A824u, 0x29A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A82Cu;
label_29a82c:
    // 0x29a82c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x29A82Cu;
    {
        const bool branch_taken_0x29a82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a82c) {
            ctx->pc = 0x29A8D0u;
            goto label_29a8d0;
        }
    }
    ctx->pc = 0x29A834u;
    // 0x29a834: 0x0  nop
    ctx->pc = 0x29a834u;
    // NOP
label_29a838:
    // 0x29a838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29A838u;
    {
        const bool branch_taken_0x29a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A838u;
        // 0x29a83c: 0x8c62085c  lw          $v0, 0x85C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a838) {
            ctx->pc = 0x29A848u;
            goto label_29a848;
        }
    }
    ctx->pc = 0x29A840u;
label_29a840:
    // 0x29a840: 0x8c620860  lw          $v0, 0x860($v1)
    ctx->pc = 0x29a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2144)));
    // 0x29a844: 0x0  nop
    ctx->pc = 0x29a844u;
    // NOP
label_29a848:
    // 0x29a848: 0x906408e8  lbu         $a0, 0x8E8($v1)
    ctx->pc = 0x29a848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2280)));
    // 0x29a84c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a850: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29A850u;
    {
        const bool branch_taken_0x29a850 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x29A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A850u;
        // 0x29a854: 0xffa40000  sd          $a0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a850) {
            ctx->pc = 0x29A880u;
            goto label_29a880;
        }
    }
    ctx->pc = 0x29A858u;
    // 0x29a858: 0x62e00  sll         $a1, $a2, 24
    ctx->pc = 0x29a858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x29a85c: 0x904404d2  lbu         $a0, 0x4D2($v0)
    ctx->pc = 0x29a85cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1234)));
    // 0x29a860: 0x904604d3  lbu         $a2, 0x4D3($v0)
    ctx->pc = 0x29a860u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1235)));
    // 0x29a864: 0x904304d1  lbu         $v1, 0x4D1($v0)
    ctx->pc = 0x29a864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1233)));
    // 0x29a868: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x29a868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x29a86c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x29a86cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x29a870: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x29a870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x29a874: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x29a874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x29a878: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29A878u;
    {
        const bool branch_taken_0x29a878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A878u;
        // 0x29a87c: 0x642825  or          $a1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a878) {
            ctx->pc = 0x29A8A0u;
            goto label_29a8a0;
        }
    }
    ctx->pc = 0x29A880u;
label_29a880:
    // 0x29a880: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x29a880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x29a884: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x29a884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x29a888: 0x24846fb0  addiu       $a0, $a0, 0x6FB0
    ctx->pc = 0x29a888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28592));
    // 0x29a88c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29a890: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x29a890u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29a894: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x29a894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x29a898: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29a898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29a89c: 0x34650004  ori         $a1, $v1, 0x4
    ctx->pc = 0x29a89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_29a8a0:
    // 0x29a8a0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x29a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x29a8a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x29a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x29a8a8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x29a8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a8ac: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x29a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x29a8b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29a8b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29a8b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29a8b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x29a8bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8c0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x29a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x29a8c4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x29A8C4u;
    SET_GPR_U32(ctx, 31, 0x29A8CCu);
    ctx->pc = 0x29A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A8C4u;
    // 0x29a8c8: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x29A8C4u, 0x29A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A8CCu;
label_29a8cc:
    // 0x29a8cc: 0x0  nop
    ctx->pc = 0x29a8ccu;
    // NOP
label_29a8d0:
    // 0x29a8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8D4u;
        // 0x29a8d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A8DCu;
}
