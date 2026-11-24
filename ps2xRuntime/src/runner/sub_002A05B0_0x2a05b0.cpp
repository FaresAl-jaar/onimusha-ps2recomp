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

// Function: sub_002A05B0
// Address: 0x2a05b0 - 0x2a07d8
void sub_002A05B0_0x2a05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A05B0_0x2a05b0");
#endif

    switch (ctx->pc) {
        case 0x2a0658u: goto label_2a0658;
        case 0x2a06a0u: goto label_2a06a0;
        case 0x2a06c8u: goto label_2a06c8;
        case 0x2a06d0u: goto label_2a06d0;
        case 0x2a0708u: goto label_2a0708;
        case 0x2a0748u: goto label_2a0748;
        default: break;
    }

    ctx->pc = 0x2a05b0u;

    // 0x2a05b0: 0x94870000  lhu         $a3, 0x0($a0)
    ctx->pc = 0x2a05b0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a05b4: 0x24890010  addiu       $t1, $a0, 0x10
    ctx->pc = 0x2a05b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2a05b8: 0x90850005  lbu         $a1, 0x5($a0)
    ctx->pc = 0x2a05b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2a05bc: 0x9086002a  lbu         $a2, 0x2A($a0)
    ctx->pc = 0x2a05bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x2a05c0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a05c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a05c8: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2a05c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a05cc: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2a05ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2a05d0: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x2A05D0u;
    {
        const bool branch_taken_0x2a05d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05D0u;
        // 0x2a05d4: 0x1274021  addu        $t0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a05d0) {
            ctx->pc = 0x2A07D0u;
            goto label_2a07d0;
        }
    }
    ctx->pc = 0x2A05D8u;
    // 0x2a05d8: 0x34a30080  ori         $v1, $a1, 0x80
    ctx->pc = 0x2a05d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x2a05dc: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x2a05dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a05e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a05e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A05E4u;
    {
        const bool branch_taken_0x2a05e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a05e4) {
            ctx->pc = 0x2A05F8u;
            goto label_2a05f8;
        }
    }
    ctx->pc = 0x2A05ECu;
    // 0x2a05ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a05f0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2a05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2a05f4: 0x0  nop
    ctx->pc = 0x2a05f4u;
    // NOP
label_2a05f8:
    // 0x2a05f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a05f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a05fc: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x2a05fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2a0600: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A0600u;
    {
        const bool branch_taken_0x2a0600 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0600u;
        // 0x2a0604: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0600) {
            ctx->pc = 0x2A0648u;
            goto label_2a0648;
        }
    }
    ctx->pc = 0x2A0608u;
    // 0x2a0608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a060c: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A060Cu;
    {
        const bool branch_taken_0x2a060c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A060Cu;
        // 0x2a0610: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a060c) {
            ctx->pc = 0x2A0628u;
            goto label_2a0628;
        }
    }
    ctx->pc = 0x2A0614u;
    // 0x2a0614: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2a0614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a0618: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a0618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a061c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0620: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2a0620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2a0624: 0x0  nop
    ctx->pc = 0x2a0624u;
    // NOP
label_2a0628:
    // 0x2a0628: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0628u;
    {
        const bool branch_taken_0x2a0628 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0628) {
            ctx->pc = 0x2A0650u;
            goto label_2a0650;
        }
    }
    ctx->pc = 0x2A0630u;
    // 0x2a0630: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2a0630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a0634: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2a0634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2a0638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a0638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a063c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A063Cu;
    {
        const bool branch_taken_0x2a063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A063Cu;
        // 0x2a0640: 0xaca30020  sw          $v1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a063c) {
            ctx->pc = 0x2A0650u;
            goto label_2a0650;
        }
    }
    ctx->pc = 0x2A0644u;
    // 0x2a0644: 0x0  nop
    ctx->pc = 0x2a0644u;
    // NOP
label_2a0648:
    // 0x2a0648: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a0648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a064c: 0x0  nop
    ctx->pc = 0x2a064cu;
    // NOP
label_2a0650:
    // 0x2a0650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a0650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0654: 0x0  nop
    ctx->pc = 0x2a0654u;
    // NOP
label_2a0658:
    // 0x2a0658: 0x8d250030  lw          $a1, 0x30($t1)
    ctx->pc = 0x2a0658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2a065c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A065Cu;
    {
        const bool branch_taken_0x2a065c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a065c) {
            ctx->pc = 0x2A0670u;
            goto label_2a0670;
        }
    }
    ctx->pc = 0x2A0664u;
    // 0x2a0664: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2a0664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a0668: 0xad250030  sw          $a1, 0x30($t1)
    ctx->pc = 0x2a0668u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 5));
    // 0x2a066c: 0x0  nop
    ctx->pc = 0x2a066cu;
    // NOP
label_2a0670:
    // 0x2a0670: 0x8d250020  lw          $a1, 0x20($t1)
    ctx->pc = 0x2a0670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2a0674: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2a0674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a0678: 0xad250020  sw          $a1, 0x20($t1)
    ctx->pc = 0x2a0678u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 5));
    // 0x2a067c: 0x8d270020  lw          $a3, 0x20($t1)
    ctx->pc = 0x2a067cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2a0680: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0680u;
    {
        const bool branch_taken_0x2a0680 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0680u;
        // 0x2a0684: 0x91250024  lbu         $a1, 0x24($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0680) {
            ctx->pc = 0x2A0690u;
            goto label_2a0690;
        }
    }
    ctx->pc = 0x2A0688u;
    // 0x2a0688: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A0688u;
    {
        const bool branch_taken_0x2a0688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0688) {
            ctx->pc = 0x2A0708u;
            goto label_2a0708;
        }
    }
    ctx->pc = 0x2A0690u;
label_2a0690:
    // 0x2a0690: 0x912a0039  lbu         $t2, 0x39($t1)
    ctx->pc = 0x2a0690u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 57)));
    // 0x2a0694: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A0694u;
    {
        const bool branch_taken_0x2a0694 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0694u;
        // 0x2a0698: 0xe0602d  daddu       $t4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0694) {
            ctx->pc = 0x2A0708u;
            goto label_2a0708;
        }
    }
    ctx->pc = 0x2A069Cu;
    // 0x2a069c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2a069cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a06a0:
    // 0x2a06a0: 0x8d8b0014  lw          $t3, 0x14($t4)
    ctx->pc = 0x2a06a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x2a06a4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2a06a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2a06a8: 0x1a5502b  sltu        $t2, $t5, $a1
    ctx->pc = 0x2a06a8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2a06ac: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x2a06acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2a06b0: 0xad8b0014  sw          $t3, 0x14($t4)
    ctx->pc = 0x2a06b0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 11));
    // 0x2a06b4: 0x1540fffa  bnez        $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A06B4u;
    {
        const bool branch_taken_0x2a06b4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06B4u;
        // 0x2a06b8: 0x258c001c  addiu       $t4, $t4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06b4) {
            ctx->pc = 0x2A06A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a06a0;
        }
    }
    ctx->pc = 0x2A06BCu;
    // 0x2a06bc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2a06bcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a06c0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2a06c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a06c4: 0x0  nop
    ctx->pc = 0x2a06c4u;
    // NOP
label_2a06c8:
    // 0x2a06c8: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2a06c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a06cc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2a06ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a06d0:
    // 0x2a06d0: 0x8dab0014  lw          $t3, 0x14($t5)
    ctx->pc = 0x2a06d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x2a06d4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2a06d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2a06d8: 0x185502b  sltu        $t2, $t4, $a1
    ctx->pc = 0x2a06d8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2a06dc: 0x1eb7021  addu        $t6, $t7, $t3
    ctx->pc = 0x2a06dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x2a06e0: 0x25ad001c  addiu       $t5, $t5, 0x1C
    ctx->pc = 0x2a06e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 28));
    // 0x2a06e4: 0x8dcb0000  lw          $t3, 0x0($t6)
    ctx->pc = 0x2a06e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2a06e8: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x2a06e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2a06ec: 0x1540fff8  bnez        $t2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A06ECu;
    {
        const bool branch_taken_0x2a06ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A06ECu;
        // 0x2a06f0: 0xadcb0000  sw          $t3, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06ec) {
            ctx->pc = 0x2A06D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a06d0;
        }
    }
    ctx->pc = 0x2A06F4u;
    // 0x2a06f4: 0x912a0039  lbu         $t2, 0x39($t1)
    ctx->pc = 0x2a06f4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 57)));
    // 0x2a06f8: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x2a06f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x2a06fc: 0x30a502b  sltu        $t2, $t8, $t2
    ctx->pc = 0x2a06fcu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2a0700: 0x1540fff1  bnez        $t2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A0700u;
    {
        const bool branch_taken_0x2a0700 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0700u;
        // 0x2a0704: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0700) {
            ctx->pc = 0x2A06C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a06c8;
        }
    }
    ctx->pc = 0x2A0708u;
label_2a0708:
    // 0x2a0708: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x2a0708u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2a070c: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2a070cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0710: 0xacea0004  sw          $t2, 0x4($a3)
    ctx->pc = 0x2a0710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
    // 0x2a0714: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x2a0714u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2a0718: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2a0718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a071c: 0xacea0008  sw          $t2, 0x8($a3)
    ctx->pc = 0x2a071cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 10));
    // 0x2a0720: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x2a0720u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2a0724: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2a0724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0728: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x2a0728u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    // 0x2a072c: 0x8cea0018  lw          $t2, 0x18($a3)
    ctx->pc = 0x2a072cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2a0730: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0730u;
    {
        const bool branch_taken_0x2a0730 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0730) {
            ctx->pc = 0x2A0768u;
            goto label_2a0768;
        }
    }
    ctx->pc = 0x2A0738u;
    // 0x2a0738: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2a0738u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a073c: 0xacea0018  sw          $t2, 0x18($a3)
    ctx->pc = 0x2a073cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 10));
    // 0x2a0740: 0x8ceb0018  lw          $t3, 0x18($a3)
    ctx->pc = 0x2a0740u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2a0744: 0x8d6cfff8  lw          $t4, -0x8($t3)
    ctx->pc = 0x2a0744u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294967288)));
label_2a0748:
    // 0x2a0748: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x2a0748u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2a074c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2a074cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2a0750: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2a0750u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0754: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x2a0754u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x2a0758: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a0758u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a075c: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A075Cu;
    {
        const bool branch_taken_0x2a075c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a075c) {
            ctx->pc = 0x2A0748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0748;
        }
    }
    ctx->pc = 0x2A0764u;
    // 0x2a0764: 0x0  nop
    ctx->pc = 0x2a0764u;
    // NOP
label_2a0768:
    // 0x2a0768: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0768u;
    {
        const bool branch_taken_0x2a0768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a0768) {
            ctx->pc = 0x2A07A0u;
            goto label_2a07a0;
        }
    }
    ctx->pc = 0x2A0770u;
    // 0x2a0770: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0770u;
    {
        const bool branch_taken_0x2a0770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0770) {
            ctx->pc = 0x2A0780u;
            goto label_2a0780;
        }
    }
    ctx->pc = 0x2A0778u;
    // 0x2a0778: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A0778u;
    {
        const bool branch_taken_0x2a0778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0778) {
            ctx->pc = 0x2A07B0u;
            goto label_2a07b0;
        }
    }
    ctx->pc = 0x2A0780u;
label_2a0780:
    // 0x2a0780: 0x8cea0010  lw          $t2, 0x10($a3)
    ctx->pc = 0x2a0780u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a0784: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2a0784u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0788: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x2a0788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x2a078c: 0x8cea0014  lw          $t2, 0x14($a3)
    ctx->pc = 0x2a078cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a0790: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2a0790u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a0794: 0xacea0014  sw          $t2, 0x14($a3)
    ctx->pc = 0x2a0794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 10));
    // 0x2a0798: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0798u;
    {
        const bool branch_taken_0x2a0798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0798u;
        // 0x2a079c: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0798) {
            ctx->pc = 0x2A07B0u;
            goto label_2a07b0;
        }
    }
    ctx->pc = 0x2A07A0u;
label_2a07a0:
    // 0x2a07a0: 0x8cea0010  lw          $t2, 0x10($a3)
    ctx->pc = 0x2a07a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a07a4: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2a07a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a07a8: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x2a07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x2a07ac: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x2a07acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
label_2a07b0:
    // 0x2a07b0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a07b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a07b4: 0x14a0ffd4  bnez        $a1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2A07B4u;
    {
        const bool branch_taken_0x2a07b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a07b4) {
            ctx->pc = 0x2A0708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0708;
        }
    }
    ctx->pc = 0x2A07BCu;
    // 0x2a07bc: 0x25290050  addiu       $t1, $t1, 0x50
    ctx->pc = 0x2a07bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x2a07c0: 0x128282b  sltu        $a1, $t1, $t0
    ctx->pc = 0x2a07c0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2a07c4: 0x14a0ffa4  bnez        $a1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2A07C4u;
    {
        const bool branch_taken_0x2a07c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a07c4) {
            ctx->pc = 0x2A0658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0658;
        }
    }
    ctx->pc = 0x2A07CCu;
    // 0x2a07cc: 0x0  nop
    ctx->pc = 0x2a07ccu;
    // NOP
label_2a07d0:
    // 0x2a07d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A07D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A07D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A07D8u;
}
