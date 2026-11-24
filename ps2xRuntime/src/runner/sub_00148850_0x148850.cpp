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

// Function: sub_00148850
// Address: 0x148850 - 0x148980
void sub_00148850_0x148850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148850_0x148850");
#endif

    switch (ctx->pc) {
        case 0x148860u: goto label_148860;
        case 0x1488a8u: goto label_1488a8;
        default: break;
    }

    ctx->pc = 0x148850u;

    // 0x148850: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x148850u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148854: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x148854u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148858: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x148858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14885c: 0x0  nop
    ctx->pc = 0x14885cu;
    // NOP
label_148860:
    // 0x148860: 0x95230032  lhu         $v1, 0x32($t1)
    ctx->pc = 0x148860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 50)));
    // 0x148864: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x148864u;
    {
        const bool branch_taken_0x148864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x148864) {
            ctx->pc = 0x148878u;
            goto label_148878;
        }
    }
    ctx->pc = 0x14886Cu;
    // 0x14886c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14886Cu;
    {
        const bool branch_taken_0x14886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14886Cu;
        // 0x148870: 0x140682d  daddu       $t5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14886c) {
            ctx->pc = 0x148888u;
            goto label_148888;
        }
    }
    ctx->pc = 0x148874u;
    // 0x148874: 0x0  nop
    ctx->pc = 0x148874u;
    // NOP
label_148878:
    // 0x148878: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x148878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x14887c: 0x29430010  slti        $v1, $t2, 0x10
    ctx->pc = 0x14887cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x148880: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x148880u;
    {
        const bool branch_taken_0x148880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148880u;
        // 0x148884: 0x2529000a  addiu       $t1, $t1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148880) {
            ctx->pc = 0x148860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148860;
        }
    }
    ctx->pc = 0x148888u;
label_148888:
    // 0x148888: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x148888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14888c: 0x15a30014  bne         $t5, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14888Cu;
    {
        const bool branch_taken_0x14888c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        if (branch_taken_0x14888c) {
            ctx->pc = 0x1488E0u;
            goto label_1488e0;
        }
    }
    ctx->pc = 0x148894u;
    // 0x148894: 0x848c0038  lh          $t4, 0x38($a0)
    ctx->pc = 0x148894u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x148898: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x148898u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14889c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x14889cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1488a0: 0x248b000a  addiu       $t3, $a0, 0xA
    ctx->pc = 0x1488a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x1488a4: 0x0  nop
    ctx->pc = 0x1488a4u;
    // NOP
label_1488a8:
    // 0x1488a8: 0x85690038  lh          $t1, 0x38($t3)
    ctx->pc = 0x1488a8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x1488ac: 0x5200008  bltz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1488ACu;
    {
        const bool branch_taken_0x1488ac = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x1488B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488ACu;
        // 0x1488b0: 0xc1c3c  dsll32      $v1, $t4, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1488ac) {
            ctx->pc = 0x1488D0u;
            goto label_1488d0;
        }
    }
    ctx->pc = 0x1488B4u;
    // 0x1488b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1488b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1488b8: 0x123082a  slt         $at, $t1, $v1
    ctx->pc = 0x1488b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1488bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1488BCu;
    {
        const bool branch_taken_0x1488bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1488bc) {
            ctx->pc = 0x1488D0u;
            goto label_1488d0;
        }
    }
    ctx->pc = 0x1488C4u;
    // 0x1488c4: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x1488c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488c8: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x1488c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488cc: 0x0  nop
    ctx->pc = 0x1488ccu;
    // NOP
label_1488d0:
    // 0x1488d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1488d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1488d4: 0x29430010  slti        $v1, $t2, 0x10
    ctx->pc = 0x1488d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1488d8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1488D8u;
    {
        const bool branch_taken_0x1488d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1488DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1488D8u;
        // 0x1488dc: 0x256b000a  addiu       $t3, $t3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1488d8) {
            ctx->pc = 0x1488A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1488a8;
        }
    }
    ctx->pc = 0x1488E0u;
label_1488e0:
    // 0x1488e0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1488e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1488e4: 0x28614001  slti        $at, $v1, 0x4001
    ctx->pc = 0x1488e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16385) ? 1 : 0);
    // 0x1488e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1488E8u;
    {
        const bool branch_taken_0x1488e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1488e8) {
            ctx->pc = 0x1488F8u;
            goto label_1488f8;
        }
    }
    ctx->pc = 0x1488F0u;
    // 0x1488f0: 0x64064000  daddiu      $a2, $zero, 0x4000
    ctx->pc = 0x1488f0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16384);
    // 0x1488f4: 0x0  nop
    ctx->pc = 0x1488f4u;
    // NOP
label_1488f8:
    // 0x1488f8: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1488f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1488fc: 0x28614001  slti        $at, $v1, 0x4001
    ctx->pc = 0x1488fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16385) ? 1 : 0);
    // 0x148900: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x148900u;
    {
        const bool branch_taken_0x148900 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x148900) {
            ctx->pc = 0x148910u;
            goto label_148910;
        }
    }
    ctx->pc = 0x148908u;
    // 0x148908: 0x64074000  daddiu      $a3, $zero, 0x4000
    ctx->pc = 0x148908u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16384);
    // 0x14890c: 0x0  nop
    ctx->pc = 0x14890cu;
    // NOP
label_148910:
    // 0x148910: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x148910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x148914: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x148914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x148918: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x148918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14891c: 0x35040  sll         $t2, $v1, 1
    ctx->pc = 0x14891cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x148920: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x148920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x148924: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x148924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x148928: 0xa5490032  sh          $t1, 0x32($t2)
    ctx->pc = 0x148928u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 50), (uint16_t)GPR_U32(ctx, 9));
    // 0x14892c: 0xa5460034  sh          $a2, 0x34($t2)
    ctx->pc = 0x14892cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 52), (uint16_t)GPR_U32(ctx, 6));
    // 0x148930: 0x25490032  addiu       $t1, $t2, 0x32
    ctx->pc = 0x148930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 50));
    // 0x148934: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x148934u;
    {
        const bool branch_taken_0x148934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148934u;
        // 0x148938: 0xa5470036  sh          $a3, 0x36($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 54), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148934) {
            ctx->pc = 0x148950u;
            goto label_148950;
        }
    }
    ctx->pc = 0x14893Cu;
    // 0x14893c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148940: 0xa5230006  sh          $v1, 0x6($t1)
    ctx->pc = 0x148940u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x148944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x148944u;
    {
        const bool branch_taken_0x148944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148944u;
        // 0x148948: 0xa5230008  sh          $v1, 0x8($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148944) {
            ctx->pc = 0x148958u;
            goto label_148958;
        }
    }
    ctx->pc = 0x14894Cu;
    // 0x14894c: 0x0  nop
    ctx->pc = 0x14894cu;
    // NOP
label_148950:
    // 0x148950: 0xa5280006  sh          $t0, 0x6($t1)
    ctx->pc = 0x148950u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x148954: 0xa5280008  sh          $t0, 0x8($t1)
    ctx->pc = 0x148954u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 8));
label_148958:
    // 0x148958: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x148958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14895c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x14895cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x148960: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148960u;
    {
        const bool branch_taken_0x148960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148960) {
            ctx->pc = 0x148970u;
            goto label_148970;
        }
    }
    ctx->pc = 0x148968u;
    // 0x148968: 0xa08500d2  sb          $a1, 0xD2($a0)
    ctx->pc = 0x148968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 210), (uint8_t)GPR_U32(ctx, 5));
    // 0x14896c: 0x0  nop
    ctx->pc = 0x14896cu;
    // NOP
label_148970:
    // 0x148970: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x148970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148974: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x148974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x148978: 0x3e00008  jr          $ra
    ctx->pc = 0x148978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148978u;
        // 0x14897c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148980u;
}
