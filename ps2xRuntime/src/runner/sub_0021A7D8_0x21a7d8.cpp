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

// Function: sub_0021A7D8
// Address: 0x21a7d8 - 0x21a914
void sub_0021A7D8_0x21a7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A7D8_0x21a7d8");
#endif

    switch (ctx->pc) {
        case 0x21a820u: goto label_21a820;
        case 0x21a860u: goto label_21a860;
        case 0x21a888u: goto label_21a888;
        case 0x21a8bcu: goto label_21a8bc;
        case 0x21a8f8u: goto label_21a8f8;
        default: break;
    }

    ctx->pc = 0x21a7d8u;

    // 0x21a7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a7dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a7e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a7e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21a7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a7ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21a7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a7f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a7f8: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x21a7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x21a7fc: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x21a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x21a800: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x21a800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x21a804: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x21a804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x21a808: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x21a808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x21a80c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x21a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x21a810: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21A810u;
    {
        const bool branch_taken_0x21a810 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x21A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A810u;
        // 0x21a814: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a810) {
            ctx->pc = 0x21A844u;
            goto label_21a844;
        }
    }
    ctx->pc = 0x21A818u;
    // 0x21a818: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x21a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x21a81c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21a820:
    // 0x21a820: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x21a820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x21a824: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21a824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21a828: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x21a828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x21a82c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x21a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x21a830: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x21a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x21a834: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x21a834u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x21a838: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x21a838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a83c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21A83Cu;
    {
        const bool branch_taken_0x21a83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A83Cu;
        // 0x21a840: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a83c) {
            ctx->pc = 0x21A820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a820;
        }
    }
    ctx->pc = 0x21A844u;
label_21a844:
    // 0x21a844: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x21a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21a848: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21A848u;
    {
        const bool branch_taken_0x21a848 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A848u;
        // 0x21a84c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a848) {
            ctx->pc = 0x21A898u;
            goto label_21a898;
        }
    }
    ctx->pc = 0x21A850u;
    // 0x21a850: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x21a850u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x21a854: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x21a854u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x21a858: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a85c: 0x0  nop
    ctx->pc = 0x21a85cu;
    // NOP
label_21a860:
    // 0x21a860: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x21a860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x21a864: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21a868: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x21a86c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a870: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21a870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a874: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x21a874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a878: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x21a878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x21a87c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x21a87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21a880: 0xc0869ce  jal         func_21A738
    ctx->pc = 0x21A880u;
    SET_GPR_U32(ctx, 31, 0x21A888u);
    ctx->pc = 0x21A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A880u;
    // 0x21a884: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A738u, 0x21A880u, 0x21A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A888u;
label_21a888:
    // 0x21a888: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x21a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21a88c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x21a88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a890: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x21A890u;
    {
        const bool branch_taken_0x21a890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a890) {
            ctx->pc = 0x21A894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A890u;
            // 0x21a894: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a860;
        }
    }
    ctx->pc = 0x21A898u;
label_21a898:
    // 0x21a898: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x21a898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21a89c: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x21a89cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x21a8a0: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x21a8a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x21a8a4: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x21a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x21a8a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x21a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21a8ac: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x21a8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x21a8b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8b4: 0xc0869ce  jal         func_21A738
    ctx->pc = 0x21A8B4u;
    SET_GPR_U32(ctx, 31, 0x21A8BCu);
    ctx->pc = 0x21A8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A8B4u;
    // 0x21a8b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A738u, 0x21A8B4u, 0x21A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8BCu;
label_21a8bc:
    // 0x21a8bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x21a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x21a8c0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x21a8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21a8c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x21a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x21a8c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a8cc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x21a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x21a8d0: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x21a8d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x21a8d4: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x21a8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x21a8d8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x21a8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x21a8dc: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x21a8dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x21a8e0: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x21a8e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x21a8e4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x21a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x21a8e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21a8ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x21a8f0: 0xc0869b4  jal         func_21A6D0
    ctx->pc = 0x21A8F0u;
    SET_GPR_U32(ctx, 31, 0x21A8F8u);
    ctx->pc = 0x21A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A8F0u;
    // 0x21a8f4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A6D0u, 0x21A8F0u, 0x21A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8F8u;
label_21a8f8:
    // 0x21a8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a908: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a90c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A90Cu;
        // 0x21a910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A914u;
}
