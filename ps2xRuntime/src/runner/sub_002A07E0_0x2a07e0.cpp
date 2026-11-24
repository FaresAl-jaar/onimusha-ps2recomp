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

// Function: sub_002A07E0
// Address: 0x2a07e0 - 0x2a09c8
void sub_002A07E0_0x2a07e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A07E0_0x2a07e0");
#endif

    switch (ctx->pc) {
        case 0x2a0848u: goto label_2a0848;
        case 0x2a0890u: goto label_2a0890;
        case 0x2a0898u: goto label_2a0898;
        case 0x2a08d8u: goto label_2a08d8;
        case 0x2a08f8u: goto label_2a08f8;
        case 0x2a0938u: goto label_2a0938;
        default: break;
    }

    ctx->pc = 0x2a07e0u;

    // 0x2a07e0: 0x94870000  lhu         $a3, 0x0($a0)
    ctx->pc = 0x2a07e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a07e4: 0x24890010  addiu       $t1, $a0, 0x10
    ctx->pc = 0x2a07e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2a07e8: 0x90850005  lbu         $a1, 0x5($a0)
    ctx->pc = 0x2a07e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2a07ec: 0x9086002a  lbu         $a2, 0x2A($a0)
    ctx->pc = 0x2a07ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x2a07f0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a07f4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a07f8: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2a07f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a07fc: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2a07fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2a0800: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x2A0800u;
    {
        const bool branch_taken_0x2a0800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0800u;
        // 0x2a0804: 0x1274021  addu        $t0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0800) {
            ctx->pc = 0x2A09C0u;
            goto label_2a09c0;
        }
    }
    ctx->pc = 0x2A0808u;
    // 0x2a0808: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x2a0808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x2a080c: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x2a080cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a0810: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a0810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a0814: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0814u;
    {
        const bool branch_taken_0x2a0814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0814) {
            ctx->pc = 0x2A0828u;
            goto label_2a0828;
        }
    }
    ctx->pc = 0x2A081Cu;
    // 0x2a081c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a081cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0820: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2a0820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2a0824: 0x0  nop
    ctx->pc = 0x2a0824u;
    // NOP
label_2a0828:
    // 0x2a0828: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a0828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a082c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A082Cu;
    {
        const bool branch_taken_0x2a082c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a082c) {
            ctx->pc = 0x2A0840u;
            goto label_2a0840;
        }
    }
    ctx->pc = 0x2A0834u;
    // 0x2a0834: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a0834u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0838: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2a0838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2a083c: 0x0  nop
    ctx->pc = 0x2a083cu;
    // NOP
label_2a0840:
    // 0x2a0840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0844: 0x0  nop
    ctx->pc = 0x2a0844u;
    // NOP
label_2a0848:
    // 0x2a0848: 0x8d250030  lw          $a1, 0x30($t1)
    ctx->pc = 0x2a0848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2a084c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A084Cu;
    {
        const bool branch_taken_0x2a084c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a084c) {
            ctx->pc = 0x2A0860u;
            goto label_2a0860;
        }
    }
    ctx->pc = 0x2A0854u;
    // 0x2a0854: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x2a0854u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a0858: 0xad250030  sw          $a1, 0x30($t1)
    ctx->pc = 0x2a0858u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 5));
    // 0x2a085c: 0x0  nop
    ctx->pc = 0x2a085cu;
    // NOP
label_2a0860:
    // 0x2a0860: 0x8d270020  lw          $a3, 0x20($t1)
    ctx->pc = 0x2a0860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2a0864: 0xe42823  subu        $a1, $a3, $a0
    ctx->pc = 0x2a0864u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2a0868: 0xad250020  sw          $a1, 0x20($t1)
    ctx->pc = 0x2a0868u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 5));
    // 0x2a086c: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A086Cu;
    {
        const bool branch_taken_0x2a086c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A086Cu;
        // 0x2a0870: 0x91250024  lbu         $a1, 0x24($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a086c) {
            ctx->pc = 0x2A0880u;
            goto label_2a0880;
        }
    }
    ctx->pc = 0x2A0874u;
    // 0x2a0874: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2A0874u;
    {
        const bool branch_taken_0x2a0874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0874) {
            ctx->pc = 0x2A08F8u;
            goto label_2a08f8;
        }
    }
    ctx->pc = 0x2A087Cu;
    // 0x2a087c: 0x0  nop
    ctx->pc = 0x2a087cu;
    // NOP
label_2a0880:
    // 0x2a0880: 0x912a0039  lbu         $t2, 0x39($t1)
    ctx->pc = 0x2a0880u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 57)));
    // 0x2a0884: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A0884u;
    {
        const bool branch_taken_0x2a0884 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0884u;
        // 0x2a0888: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0884) {
            ctx->pc = 0x2A08F8u;
            goto label_2a08f8;
        }
    }
    ctx->pc = 0x2A088Cu;
    // 0x2a088c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2a088cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0890:
    // 0x2a0890: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x2a0890u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0894: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2a0894u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0898:
    // 0x2a0898: 0x8dcb0014  lw          $t3, 0x14($t6)
    ctx->pc = 0x2a0898u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x2a089c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2a089cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2a08a0: 0x1e5502b  sltu        $t2, $t7, $a1
    ctx->pc = 0x2a08a0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2a08a4: 0x1ab6021  addu        $t4, $t5, $t3
    ctx->pc = 0x2a08a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2a08a8: 0x25ce001c  addiu       $t6, $t6, 0x1C
    ctx->pc = 0x2a08a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 28));
    // 0x2a08ac: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x2a08acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2a08b0: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x2a08b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2a08b4: 0x1540fff8  bnez        $t2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A08B4u;
    {
        const bool branch_taken_0x2a08b4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A08B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08B4u;
        // 0x2a08b8: 0xad8b0000  sw          $t3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08b4) {
            ctx->pc = 0x2A0898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0898;
        }
    }
    ctx->pc = 0x2A08BCu;
    // 0x2a08bc: 0x912a0039  lbu         $t2, 0x39($t1)
    ctx->pc = 0x2a08bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 57)));
    // 0x2a08c0: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x2a08c0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x2a08c4: 0x30a502b  sltu        $t2, $t8, $t2
    ctx->pc = 0x2a08c4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2a08c8: 0x1540fff1  bnez        $t2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A08C8u;
    {
        const bool branch_taken_0x2a08c8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08C8u;
        // 0x2a08cc: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08c8) {
            ctx->pc = 0x2A0890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0890;
        }
    }
    ctx->pc = 0x2A08D0u;
    // 0x2a08d0: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2a08d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08d4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2a08d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a08d8:
    // 0x2a08d8: 0x8dab0014  lw          $t3, 0x14($t5)
    ctx->pc = 0x2a08d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x2a08dc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2a08dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2a08e0: 0x185502b  sltu        $t2, $t4, $a1
    ctx->pc = 0x2a08e0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2a08e4: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x2a08e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2a08e8: 0xadab0014  sw          $t3, 0x14($t5)
    ctx->pc = 0x2a08e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 11));
    // 0x2a08ec: 0x1540fffa  bnez        $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A08ECu;
    {
        const bool branch_taken_0x2a08ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08ECu;
        // 0x2a08f0: 0x25ad001c  addiu       $t5, $t5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08ec) {
            ctx->pc = 0x2A08D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a08d8;
        }
    }
    ctx->pc = 0x2A08F4u;
    // 0x2a08f4: 0x0  nop
    ctx->pc = 0x2a08f4u;
    // NOP
label_2a08f8:
    // 0x2a08f8: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x2a08f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2a08fc: 0x1445023  subu        $t2, $t2, $a0
    ctx->pc = 0x2a08fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0900: 0xacea0004  sw          $t2, 0x4($a3)
    ctx->pc = 0x2a0900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
    // 0x2a0904: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x2a0904u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a0908: 0x1445023  subu        $t2, $t2, $a0
    ctx->pc = 0x2a0908u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a090c: 0xacea0008  sw          $t2, 0x8($a3)
    ctx->pc = 0x2a090cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 10));
    // 0x2a0910: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x2a0910u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2a0914: 0x1445023  subu        $t2, $t2, $a0
    ctx->pc = 0x2a0914u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0918: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x2a0918u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    // 0x2a091c: 0x8ceb0018  lw          $t3, 0x18($a3)
    ctx->pc = 0x2a091cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2a0920: 0x1160000d  beqz        $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0920u;
    {
        const bool branch_taken_0x2a0920 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0920) {
            ctx->pc = 0x2A0958u;
            goto label_2a0958;
        }
    }
    ctx->pc = 0x2A0928u;
    // 0x2a0928: 0x8d6cfff8  lw          $t4, -0x8($t3)
    ctx->pc = 0x2a0928u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294967288)));
    // 0x2a092c: 0x1645023  subu        $t2, $t3, $a0
    ctx->pc = 0x2a092cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2a0930: 0xacea0018  sw          $t2, 0x18($a3)
    ctx->pc = 0x2a0930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 10));
    // 0x2a0934: 0x0  nop
    ctx->pc = 0x2a0934u;
    // NOP
label_2a0938:
    // 0x2a0938: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x2a0938u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a093c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2a093cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2a0940: 0x1445023  subu        $t2, $t2, $a0
    ctx->pc = 0x2a0940u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0944: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x2a0944u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x2a0948: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a0948u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a094c: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A094Cu;
    {
        const bool branch_taken_0x2a094c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a094c) {
            ctx->pc = 0x2A0938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0938;
        }
    }
    ctx->pc = 0x2A0954u;
    // 0x2a0954: 0x0  nop
    ctx->pc = 0x2a0954u;
    // NOP
label_2a0958:
    // 0x2a0958: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0958u;
    {
        const bool branch_taken_0x2a0958 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a0958) {
            ctx->pc = 0x2A0990u;
            goto label_2a0990;
        }
    }
    ctx->pc = 0x2A0960u;
    // 0x2a0960: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0960u;
    {
        const bool branch_taken_0x2a0960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0960) {
            ctx->pc = 0x2A0970u;
            goto label_2a0970;
        }
    }
    ctx->pc = 0x2A0968u;
    // 0x2a0968: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A0968u;
    {
        const bool branch_taken_0x2a0968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0968) {
            ctx->pc = 0x2A09A0u;
            goto label_2a09a0;
        }
    }
    ctx->pc = 0x2A0970u;
label_2a0970:
    // 0x2a0970: 0x8cea0010  lw          $t2, 0x10($a3)
    ctx->pc = 0x2a0970u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a0974: 0x1445023  subu        $t2, $t2, $a0
    ctx->pc = 0x2a0974u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0978: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x2a0978u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x2a097c: 0x8cea0014  lw          $t2, 0x14($a3)
    ctx->pc = 0x2a097cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a0980: 0x1445023  subu        $t2, $t2, $a0
    ctx->pc = 0x2a0980u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0984: 0xacea0014  sw          $t2, 0x14($a3)
    ctx->pc = 0x2a0984u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 10));
    // 0x2a0988: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0988u;
    {
        const bool branch_taken_0x2a0988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0988u;
        // 0x2a098c: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0988) {
            ctx->pc = 0x2A09A0u;
            goto label_2a09a0;
        }
    }
    ctx->pc = 0x2A0990u;
label_2a0990:
    // 0x2a0990: 0x8cea0010  lw          $t2, 0x10($a3)
    ctx->pc = 0x2a0990u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a0994: 0x1445023  subu        $t2, $t2, $a0
    ctx->pc = 0x2a0994u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0998: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x2a0998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x2a099c: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x2a099cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
label_2a09a0:
    // 0x2a09a0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a09a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a09a4: 0x14a0ffd4  bnez        $a1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2A09A4u;
    {
        const bool branch_taken_0x2a09a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a09a4) {
            ctx->pc = 0x2A08F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a08f8;
        }
    }
    ctx->pc = 0x2A09ACu;
    // 0x2a09ac: 0x25290050  addiu       $t1, $t1, 0x50
    ctx->pc = 0x2a09acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x2a09b0: 0x128282b  sltu        $a1, $t1, $t0
    ctx->pc = 0x2a09b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2a09b4: 0x14a0ffa4  bnez        $a1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2A09B4u;
    {
        const bool branch_taken_0x2a09b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a09b4) {
            ctx->pc = 0x2A0848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0848;
        }
    }
    ctx->pc = 0x2A09BCu;
    // 0x2a09bc: 0x0  nop
    ctx->pc = 0x2a09bcu;
    // NOP
label_2a09c0:
    // 0x2a09c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A09C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A09C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A09C8u;
}
