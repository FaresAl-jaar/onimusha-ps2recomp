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

// Function: sub_0022C7E8
// Address: 0x22c7e8 - 0x22c908
void sub_0022C7E8_0x22c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C7E8_0x22c7e8");
#endif

    ctx->pc = 0x22c7e8u;

    // 0x22c7e8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x22c7e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c7ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x22c7ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c7f0: 0x91820007  lbu         $v0, 0x7($t4)
    ctx->pc = 0x22c7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x22c7f4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22c7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c7f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22c7fc: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x22c7fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c800: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x22c800u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22c804: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x22c804u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c808: 0x91820009  lbu         $v0, 0x9($t4)
    ctx->pc = 0x22c808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x22c80c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22c80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22c810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c814: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x22c814u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c818: 0x9583002a  lhu         $v1, 0x2A($t4)
    ctx->pc = 0x22c818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 42)));
    // 0x22c81c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x22c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x22c820: 0x91840008  lbu         $a0, 0x8($t4)
    ctx->pc = 0x22c820u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x22c824: 0x108f0018  beq         $a0, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x22C824u;
    {
        const bool branch_taken_0x22c824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x22C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C824u;
        // 0x22c828: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c824) {
            ctx->pc = 0x22C888u;
            goto label_22c888;
        }
    }
    ctx->pc = 0x22C82Cu;
    // 0x22c82c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C82Cu;
    {
        const bool branch_taken_0x22c82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c82c) {
            ctx->pc = 0x22C830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C82Cu;
            // 0x22c830: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C848u;
            goto label_22c848;
        }
    }
    ctx->pc = 0x22C834u;
    // 0x22c834: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22C834u;
    {
        const bool branch_taken_0x22c834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c834) {
            ctx->pc = 0x22C838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C834u;
            // 0x22c838: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C858u;
            goto label_22c858;
        }
    }
    ctx->pc = 0x22C83Cu;
    // 0x22c83c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x22C83Cu;
    {
        const bool branch_taken_0x22c83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C83Cu;
        // 0x22c840: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c83c) {
            ctx->pc = 0x22C8D0u;
            goto label_22c8d0;
        }
    }
    ctx->pc = 0x22C844u;
    // 0x22c844: 0x0  nop
    ctx->pc = 0x22c844u;
    // NOP
label_22c848:
    // 0x22c848: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x22C848u;
    {
        const bool branch_taken_0x22c848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c848) {
            ctx->pc = 0x22C84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C848u;
            // 0x22c84c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C8D0u;
            goto label_22c8d0;
        }
    }
    ctx->pc = 0x22C850u;
    // 0x22c850: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22C850u;
    {
        const bool branch_taken_0x22c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C850u;
        // 0x22c854: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c850) {
            ctx->pc = 0x22C8A8u;
            goto label_22c8a8;
        }
    }
    ctx->pc = 0x22C858u;
label_22c858:
    // 0x22c858: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x22c858u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c85c: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x22c85cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x22c860: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22c860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22c864: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x22c864u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c868: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x22c868u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x22c86c: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x22c86cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22c870: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x22c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x22c874: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x22c874u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x22c878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c87c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22C87Cu;
    {
        const bool branch_taken_0x22c87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C87Cu;
        // 0x22c880: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c87c) {
            ctx->pc = 0x22C8C8u;
            goto label_22c8c8;
        }
    }
    ctx->pc = 0x22C884u;
    // 0x22c884: 0x0  nop
    ctx->pc = 0x22c884u;
    // NOP
label_22c888:
    // 0x22c888: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22c88c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x22c88cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c890: 0x81430000  lb          $v1, 0x0($t2)
    ctx->pc = 0x22c890u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x22c894: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x22c894u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c898: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x22c898u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x22c89c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x22c89cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x22c8a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22C8A0u;
    {
        const bool branch_taken_0x22c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8A0u;
        // 0x22c8a4: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8a0) {
            ctx->pc = 0x22C8C8u;
            goto label_22c8c8;
        }
    }
    ctx->pc = 0x22C8A8u;
label_22c8a8:
    // 0x22c8a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c8ac: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x22c8acu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c8b0: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x22c8b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x22c8b4: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x22c8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c8b8: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x22c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x22c8bc: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x22c8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x22c8c0: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x22c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x22c8c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22c8c8:
    // 0x22c8c8: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x22c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x22c8cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22c8d0:
    // 0x22c8d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c8d4: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x22c8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c8d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x22c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22c8dc: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x22c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x22c8e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22c8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22c8e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22c8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c8e8: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x22c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x22c8ec: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x22c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x22c8f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22c8f4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x22c8f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22c8f8: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x22c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x22c8fc: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x22c8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x22c900: 0x3e00008  jr          $ra
    ctx->pc = 0x22C900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C900u;
        // 0x22c904: 0xa0e60000  sb          $a2, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C908u;
}
