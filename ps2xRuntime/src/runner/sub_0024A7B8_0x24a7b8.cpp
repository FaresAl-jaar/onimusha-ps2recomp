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

// Function: sub_0024A7B8
// Address: 0x24a7b8 - 0x24a954
void sub_0024A7B8_0x24a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A7B8_0x24a7b8");
#endif

    switch (ctx->pc) {
        case 0x24a820u: goto label_24a820;
        case 0x24a8c0u: goto label_24a8c0;
        default: break;
    }

    ctx->pc = 0x24a7b8u;

    // 0x24a7b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24a7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24a7bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24a7c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24a7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x24a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x24a7c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24a7c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x24a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x24a7d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24a7d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x24a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x24a7d8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x24a7d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7dc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x24a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x24a7e0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x24a7e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a7e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24a7e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24a7ec: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x24a7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x24a7f0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x24a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x24a7f4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x24a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x24a7f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24a7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24a7fc: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x24a7fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24a800: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x24A800u;
    {
        const bool branch_taken_0x24a800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A800u;
        // 0x24a804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a800) {
            ctx->pc = 0x24A8F8u;
            goto label_24a8f8;
        }
    }
    ctx->pc = 0x24A808u;
    // 0x24a808: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x24a808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x24a80c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24a80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a810: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x24a810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x24a814: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x24a814u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24a818: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x24a818u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x24a81c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x24a81cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_24a820:
    // 0x24a820: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x24a820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x24a824: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A824u;
    {
        const bool branch_taken_0x24a824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x24A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A824u;
        // 0x24a828: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a824) {
            ctx->pc = 0x24A838u;
            goto label_24a838;
        }
    }
    ctx->pc = 0x24A82Cu;
    // 0x24a82c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x24a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x24a830: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x24a830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x24a834: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x24a834u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_24a838:
    // 0x24a838: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x24a838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x24a83c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x24a83cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x24a840: 0x50570006  beql        $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A840u;
    {
        const bool branch_taken_0x24a840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x24a840) {
            ctx->pc = 0x24A844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A840u;
            // 0x24a844: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A85Cu;
            goto label_24a85c;
        }
    }
    ctx->pc = 0x24A848u;
    // 0x24a848: 0x50560004  beql        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A848u;
    {
        const bool branch_taken_0x24a848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x24a848) {
            ctx->pc = 0x24A84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A848u;
            // 0x24a84c: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A85Cu;
            goto label_24a85c;
        }
    }
    ctx->pc = 0x24A850u;
    // 0x24a850: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x24A850u;
    {
        const bool branch_taken_0x24a850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A850u;
        // 0x24a854: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a850) {
            ctx->pc = 0x24A8E0u;
            goto label_24a8e0;
        }
    }
    ctx->pc = 0x24A858u;
    // 0x24a858: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x24a858u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_24a85c:
    // 0x24a85c: 0x50570006  beql        $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A85Cu;
    {
        const bool branch_taken_0x24a85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x24a85c) {
            ctx->pc = 0x24A860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A85Cu;
            // 0x24a860: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A878u;
            goto label_24a878;
        }
    }
    ctx->pc = 0x24A864u;
    // 0x24a864: 0x50560004  beql        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A864u;
    {
        const bool branch_taken_0x24a864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x24a864) {
            ctx->pc = 0x24A868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A864u;
            // 0x24a868: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A878u;
            goto label_24a878;
        }
    }
    ctx->pc = 0x24A86Cu;
    // 0x24a86c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A86Cu;
    {
        const bool branch_taken_0x24a86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A86Cu;
        // 0x24a870: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a86c) {
            ctx->pc = 0x24A880u;
            goto label_24a880;
        }
    }
    ctx->pc = 0x24A874u;
    // 0x24a874: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24a874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24a878:
    // 0x24a878: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x24a878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x24a87c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x24a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_24a880:
    // 0x24a880: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x24a880u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a884: 0x10770003  beq         $v1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A884u;
    {
        const bool branch_taken_0x24a884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x24A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A884u;
        // 0x24a888: 0x2458823  subu        $s1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a884) {
            ctx->pc = 0x24A894u;
            goto label_24a894;
        }
    }
    ctx->pc = 0x24A88Cu;
    // 0x24a88c: 0x54760003  bnel        $v1, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A88Cu;
    {
        const bool branch_taken_0x24a88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x24a88c) {
            ctx->pc = 0x24A890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A88Cu;
            // 0x24a890: 0x3d41018  mult        $v0, $fp, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A89Cu;
            goto label_24a89c;
        }
    }
    ctx->pc = 0x24A894u;
label_24a894:
    // 0x24a894: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x24a894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a898: 0x3d41018  mult        $v0, $fp, $s4
    ctx->pc = 0x24a898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24a89c:
    // 0x24a89c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x24a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24a8a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24a8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8a4: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x24a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x24a8a8: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x24a8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24a8ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a8b0: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x24a8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x24a8b4: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x24a8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24a8b8: 0xc049522  jal         func_125488
    ctx->pc = 0x24A8B8u;
    SET_GPR_U32(ctx, 31, 0x24A8C0u);
    ctx->pc = 0x24A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A8B8u;
    // 0x24a8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x24A8B8u, 0x24A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8C0u;
label_24a8c0:
    // 0x24a8c0: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x24a8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x24a8c4: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x24a8c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x24a8c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24A8C8u;
    {
        const bool branch_taken_0x24a8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a8c8) {
            ctx->pc = 0x24A8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A8C8u;
            // 0x24a8cc: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A8D0u;
            goto label_24a8d0;
        }
    }
    ctx->pc = 0x24A8D0u;
label_24a8d0:
    // 0x24a8d0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x24a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24a8d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x24a8d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x24a8d8: 0x12950007  beq         $s4, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A8D8u;
    {
        const bool branch_taken_0x24a8d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x24A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8D8u;
        // 0x24a8dc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8d8) {
            ctx->pc = 0x24A8F8u;
            goto label_24a8f8;
        }
    }
    ctx->pc = 0x24A8E0u;
label_24a8e0:
    // 0x24a8e0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x24a8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8e4: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x24a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x24a8e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8ec: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x24a8ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24a8f0: 0x5460ffcb  bnel        $v1, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x24A8F0u;
    {
        const bool branch_taken_0x24a8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a8f0) {
            ctx->pc = 0x24A8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A8F0u;
            // 0x24a8f4: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a820;
        }
    }
    ctx->pc = 0x24A8F8u;
label_24a8f8:
    // 0x24a8f8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24a8fc: 0x24421100  addiu       $v0, $v0, 0x1100
    ctx->pc = 0x24a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
    // 0x24a900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24a900u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D1100u));
    // 0x24a904: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A904u;
    {
        const bool branch_taken_0x24a904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a904) {
            ctx->pc = 0x24A908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A904u;
            // 0x24a908: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A924u;
            goto label_24a924;
        }
    }
    ctx->pc = 0x24A90Cu;
    // 0x24a90c: 0xac5e000c  sw          $fp, 0xC($v0)
    ctx->pc = 0x24a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 30));
    // 0x24a910: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x24a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a914: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x24a914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x24a918: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24a918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24a91c: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x24a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x24a920: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x24a920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24a924:
    // 0x24a924: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24a924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a928: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24a928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a92c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24a92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a930: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x24a930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24a934: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x24a934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a938: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x24a938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24a93c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x24a93cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a940: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x24a940u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24a944: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x24a944u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a948: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x24a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24a94c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A94Cu;
        // 0x24a950: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A954u;
}
