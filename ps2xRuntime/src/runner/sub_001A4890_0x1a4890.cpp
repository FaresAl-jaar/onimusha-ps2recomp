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

// Function: sub_001A4890
// Address: 0x1a4890 - 0x1a4a08
void sub_001A4890_0x1a4890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4890_0x1a4890");
#endif

    switch (ctx->pc) {
        case 0x1a4908u: goto label_1a4908;
        case 0x1a4988u: goto label_1a4988;
        default: break;
    }

    ctx->pc = 0x1a4890u;

    // 0x1a4890: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4894: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1a4894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1a4898: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x1a4898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x1a489c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a48a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A48A0u;
    {
        const bool branch_taken_0x1a48a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48A0u;
        // 0x1a48a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48a0) {
            ctx->pc = 0x1A48B0u;
            goto label_1a48b0;
        }
    }
    ctx->pc = 0x1A48A8u;
    // 0x1a48a8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1A48A8u;
    {
        const bool branch_taken_0x1a48a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a48a8) {
            ctx->pc = 0x1A4A00u;
            goto label_1a4a00;
        }
    }
    ctx->pc = 0x1A48B0u;
label_1a48b0:
    // 0x1a48b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a48b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a48b4: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x1a48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1a48b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a48b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a48bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A48BCu;
    {
        const bool branch_taken_0x1a48bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48BCu;
        // 0x1a48c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48bc) {
            ctx->pc = 0x1A48D0u;
            goto label_1a48d0;
        }
    }
    ctx->pc = 0x1A48C4u;
    // 0x1a48c4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1A48C4u;
    {
        const bool branch_taken_0x1a48c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a48c4) {
            ctx->pc = 0x1A4A00u;
            goto label_1a4a00;
        }
    }
    ctx->pc = 0x1A48CCu;
    // 0x1a48cc: 0x0  nop
    ctx->pc = 0x1a48ccu;
    // NOP
label_1a48d0:
    // 0x1a48d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a48d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a48d4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x1a48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1a48d8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a48dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a48dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a48e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A48E0u;
    {
        const bool branch_taken_0x1a48e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48E0u;
        // 0x1a48e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48e0) {
            ctx->pc = 0x1A48F0u;
            goto label_1a48f0;
        }
    }
    ctx->pc = 0x1A48E8u;
    // 0x1a48e8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1A48E8u;
    {
        const bool branch_taken_0x1a48e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a48e8) {
            ctx->pc = 0x1A4A00u;
            goto label_1a4a00;
        }
    }
    ctx->pc = 0x1A48F0u;
label_1a48f0:
    // 0x1a48f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a48f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a48f4: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x1a48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x1a48f8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1a48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1a48fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a48fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a4900: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A4900u;
    {
        const bool branch_taken_0x1a4900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4900u;
        // 0x1a4904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4900) {
            ctx->pc = 0x1A4980u;
            goto label_1a4980;
        }
    }
    ctx->pc = 0x1A4908u;
label_1a4908:
    // 0x1a4908: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1a4908u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a490c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1a490cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1a4910: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x1a4910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4914: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a4914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a4918: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x1a4918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a491c: 0x94830204  lhu         $v1, 0x204($a0)
    ctx->pc = 0x1a491cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x1a4920: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a4920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a4924: 0xa4830204  sh          $v1, 0x204($a0)
    ctx->pc = 0x1a4924u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 516), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a4928: 0x94830404  lhu         $v1, 0x404($a0)
    ctx->pc = 0x1a4928u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1028)));
    // 0x1a492c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a492cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a4930: 0xa4830404  sh          $v1, 0x404($a0)
    ctx->pc = 0x1a4930u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1028), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a4934: 0x94830604  lhu         $v1, 0x604($a0)
    ctx->pc = 0x1a4934u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1a4938: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a4938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a493c: 0xa4830604  sh          $v1, 0x604($a0)
    ctx->pc = 0x1a493cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1540), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a4940: 0x94830804  lhu         $v1, 0x804($a0)
    ctx->pc = 0x1a4940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a4944: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a4944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a4948: 0xa4830804  sh          $v1, 0x804($a0)
    ctx->pc = 0x1a4948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2052), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a494c: 0x94830a04  lhu         $v1, 0xA04($a0)
    ctx->pc = 0x1a494cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2564)));
    // 0x1a4950: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a4950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a4954: 0xa4830a04  sh          $v1, 0xA04($a0)
    ctx->pc = 0x1a4954u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2564), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a4958: 0x94830c04  lhu         $v1, 0xC04($a0)
    ctx->pc = 0x1a4958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x1a495c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a495cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a4960: 0xa4830c04  sh          $v1, 0xC04($a0)
    ctx->pc = 0x1a4960u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3076), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a4964: 0x94830e04  lhu         $v1, 0xE04($a0)
    ctx->pc = 0x1a4964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3588)));
    // 0x1a4968: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a4968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a496c: 0xa4830e04  sh          $v1, 0xE04($a0)
    ctx->pc = 0x1a496cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3588), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a4970: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1A4970u;
    {
        const bool branch_taken_0x1a4970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4970u;
        // 0x1a4974: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4970) {
            ctx->pc = 0x1A4908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4908;
        }
    }
    ctx->pc = 0x1A4978u;
    // 0x1a4978: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A4978u;
    {
        const bool branch_taken_0x1a4978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4978) {
            ctx->pc = 0x1A49F8u;
            goto label_1a49f8;
        }
    }
    ctx->pc = 0x1A4980u;
label_1a4980:
    // 0x1a4980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4984: 0x0  nop
    ctx->pc = 0x1a4984u;
    // NOP
label_1a4988:
    // 0x1a4988: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1a4988u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a498c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1a498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1a4990: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x1a4990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4994: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x1a4994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x1a4998: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x1a4998u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a499c: 0x94830204  lhu         $v1, 0x204($a0)
    ctx->pc = 0x1a499cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x1a49a0: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x1a49a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x1a49a4: 0xa4830204  sh          $v1, 0x204($a0)
    ctx->pc = 0x1a49a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 516), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a49a8: 0x94830404  lhu         $v1, 0x404($a0)
    ctx->pc = 0x1a49a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1028)));
    // 0x1a49ac: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x1a49acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x1a49b0: 0xa4830404  sh          $v1, 0x404($a0)
    ctx->pc = 0x1a49b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1028), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a49b4: 0x94830604  lhu         $v1, 0x604($a0)
    ctx->pc = 0x1a49b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1a49b8: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x1a49b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x1a49bc: 0xa4830604  sh          $v1, 0x604($a0)
    ctx->pc = 0x1a49bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1540), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a49c0: 0x94830804  lhu         $v1, 0x804($a0)
    ctx->pc = 0x1a49c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a49c4: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x1a49c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x1a49c8: 0xa4830804  sh          $v1, 0x804($a0)
    ctx->pc = 0x1a49c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2052), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a49cc: 0x94830a04  lhu         $v1, 0xA04($a0)
    ctx->pc = 0x1a49ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2564)));
    // 0x1a49d0: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x1a49d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x1a49d4: 0xa4830a04  sh          $v1, 0xA04($a0)
    ctx->pc = 0x1a49d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2564), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a49d8: 0x94830c04  lhu         $v1, 0xC04($a0)
    ctx->pc = 0x1a49d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x1a49dc: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x1a49dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x1a49e0: 0xa4830c04  sh          $v1, 0xC04($a0)
    ctx->pc = 0x1a49e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3076), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a49e4: 0x94830e04  lhu         $v1, 0xE04($a0)
    ctx->pc = 0x1a49e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3588)));
    // 0x1a49e8: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x1a49e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x1a49ec: 0xa4830e04  sh          $v1, 0xE04($a0)
    ctx->pc = 0x1a49ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3588), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a49f0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1A49F0u;
    {
        const bool branch_taken_0x1a49f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49F0u;
        // 0x1a49f4: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49f0) {
            ctx->pc = 0x1A4988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4988;
        }
    }
    ctx->pc = 0x1A49F8u;
label_1a49f8:
    // 0x1a49f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a49fc: 0x0  nop
    ctx->pc = 0x1a49fcu;
    // NOP
label_1a4a00:
    // 0x1a4a00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A08u;
}
