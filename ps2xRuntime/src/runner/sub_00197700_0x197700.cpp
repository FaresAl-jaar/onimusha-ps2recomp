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

// Function: sub_00197700
// Address: 0x197700 - 0x1979e4
void sub_00197700_0x197700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197700_0x197700");
#endif

    switch (ctx->pc) {
        case 0x197750u: goto label_197750;
        case 0x197778u: goto label_197778;
        case 0x197818u: goto label_197818;
        case 0x197878u: goto label_197878;
        case 0x1978d8u: goto label_1978d8;
        case 0x197938u: goto label_197938;
        case 0x1979d8u: goto label_1979d8;
        default: break;
    }

    ctx->pc = 0x197700u;

    // 0x197700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x197708: 0x80830049  lb          $v1, 0x49($a0)
    ctx->pc = 0x197708u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
    // 0x19770c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19770Cu;
    {
        const bool branch_taken_0x19770c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19770Cu;
        // 0x197710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19770c) {
            ctx->pc = 0x197728u;
            goto label_197728;
        }
    }
    ctx->pc = 0x197714u;
    // 0x197714: 0x808a004c  lb          $t2, 0x4C($a0)
    ctx->pc = 0x197714u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x197718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19771c: 0x8089004d  lb          $t1, 0x4D($a0)
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x197720: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197720u;
    {
        const bool branch_taken_0x197720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197720u;
        // 0x197724: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197720) {
            ctx->pc = 0x197738u;
            goto label_197738;
        }
    }
    ctx->pc = 0x197728u;
label_197728:
    // 0x197728: 0x8089004c  lb          $t1, 0x4C($a0)
    ctx->pc = 0x197728u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19772c: 0x808a004d  lb          $t2, 0x4D($a0)
    ctx->pc = 0x19772cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x197730: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197734: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x197734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_197738:
    // 0x197738: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x197738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x19773c: 0x10200092  beqz        $at, . + 4 + (0x92 << 2)
    ctx->pc = 0x19773Cu;
    {
        const bool branch_taken_0x19773c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19773Cu;
        // 0x197740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19773c) {
            ctx->pc = 0x197988u;
            goto label_197988;
        }
    }
    ctx->pc = 0x197744u;
    // 0x197744: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x197744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197748: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x197748u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x19774c: 0x0  nop
    ctx->pc = 0x19774cu;
    // NOP
label_197750:
    // 0x197750: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x197750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x197754: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x197754u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197758: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x197758u;
    {
        const bool branch_taken_0x197758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197758u;
        // 0x19775c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197758) {
            ctx->pc = 0x1977A0u;
            goto label_1977a0;
        }
    }
    ctx->pc = 0x197760u;
    // 0x197760: 0x8c8b00a0  lw          $t3, 0xA0($a0)
    ctx->pc = 0x197760u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x197764: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x197764u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197768: 0x836021  addu        $t4, $a0, $v1
    ctx->pc = 0x197768u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19776c: 0x1665821  addu        $t3, $t3, $a2
    ctx->pc = 0x19776cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x197770: 0x816e0002  lb          $t6, 0x2($t3)
    ctx->pc = 0x197770u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x197774: 0x0  nop
    ctx->pc = 0x197774u;
    // NOP
label_197778:
    // 0x197778: 0x18f5821  addu        $t3, $t4, $t7
    ctx->pc = 0x197778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x19777c: 0x816b004f  lb          $t3, 0x4F($t3)
    ctx->pc = 0x19777cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 79)));
    // 0x197780: 0x156e0003  bne         $t3, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x197780u;
    {
        const bool branch_taken_0x197780 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 14));
        if (branch_taken_0x197780) {
            ctx->pc = 0x197790u;
            goto label_197790;
        }
    }
    ctx->pc = 0x197788u;
    // 0x197788: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x197788u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x19778c: 0x0  nop
    ctx->pc = 0x19778cu;
    // NOP
label_197790:
    // 0x197790: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x197790u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x197794: 0x32a582a  slt         $t3, $t9, $t2
    ctx->pc = 0x197794u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x197798: 0x1560fff7  bnez        $t3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x197798u;
    {
        const bool branch_taken_0x197798 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x19779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197798u;
        // 0x19779c: 0x1e77821  addu        $t7, $t7, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197798) {
            ctx->pc = 0x197778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197778;
        }
    }
    ctx->pc = 0x1977A0u;
label_1977a0:
    // 0x1977a0: 0x170a0075  bne         $t8, $t2, . + 4 + (0x75 << 2)
    ctx->pc = 0x1977A0u;
    {
        const bool branch_taken_0x1977a0 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 10));
        if (branch_taken_0x1977a0) {
            ctx->pc = 0x197978u;
            goto label_197978;
        }
    }
    ctx->pc = 0x1977A8u;
    // 0x1977a8: 0x808c0049  lb          $t4, 0x49($a0)
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
    // 0x1977ac: 0x15800008  bnez        $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1977ACu;
    {
        const bool branch_taken_0x1977ac = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1977B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977ACu;
        // 0x1977b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977ac) {
            ctx->pc = 0x1977D0u;
            goto label_1977d0;
        }
    }
    ctx->pc = 0x1977B4u;
    // 0x1977b4: 0x808b004b  lb          $t3, 0x4B($a0)
    ctx->pc = 0x1977b4u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x1977b8: 0x10cb000d  beq         $a2, $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x1977B8u;
    {
        const bool branch_taken_0x1977b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x1977b8) {
            ctx->pc = 0x1977F0u;
            goto label_1977f0;
        }
    }
    ctx->pc = 0x1977C0u;
    // 0x1977c0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1977c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1977c4: 0x10cb000a  beq         $a2, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x1977C4u;
    {
        const bool branch_taken_0x1977c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x1977c4) {
            ctx->pc = 0x1977F0u;
            goto label_1977f0;
        }
    }
    ctx->pc = 0x1977CCu;
    // 0x1977cc: 0x0  nop
    ctx->pc = 0x1977ccu;
    // NOP
label_1977d0:
    // 0x1977d0: 0x11800069  beqz        $t4, . + 4 + (0x69 << 2)
    ctx->pc = 0x1977D0u;
    {
        const bool branch_taken_0x1977d0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977d0) {
            ctx->pc = 0x197978u;
            goto label_197978;
        }
    }
    ctx->pc = 0x1977D8u;
    // 0x1977d8: 0x808b004a  lb          $t3, 0x4A($a0)
    ctx->pc = 0x1977d8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 74)));
    // 0x1977dc: 0x10cb0004  beq         $a2, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1977DCu;
    {
        const bool branch_taken_0x1977dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x1977dc) {
            ctx->pc = 0x1977F0u;
            goto label_1977f0;
        }
    }
    ctx->pc = 0x1977E4u;
    // 0x1977e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1977e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1977e8: 0x14cb0063  bne         $a2, $t3, . + 4 + (0x63 << 2)
    ctx->pc = 0x1977E8u;
    {
        const bool branch_taken_0x1977e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        if (branch_taken_0x1977e8) {
            ctx->pc = 0x197978u;
            goto label_197978;
        }
    }
    ctx->pc = 0x1977F0u;
label_1977f0:
    // 0x1977f0: 0x1580002f  bnez        $t4, . + 4 + (0x2F << 2)
    ctx->pc = 0x1977F0u;
    {
        const bool branch_taken_0x1977f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1977f0) {
            ctx->pc = 0x1978B0u;
            goto label_1978b0;
        }
    }
    ctx->pc = 0x1977F8u;
    // 0x1977f8: 0x808e004c  lb          $t6, 0x4C($a0)
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1977fc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1977fcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197800: 0xe082a  slt         $at, $zero, $t6
    ctx->pc = 0x197800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x197804: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x197804u;
    {
        const bool branch_taken_0x197804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197804u;
        // 0x197808: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197804) {
            ctx->pc = 0x197898u;
            goto label_197898;
        }
    }
    ctx->pc = 0x19780Cu;
    // 0x19780c: 0x29c10009  slti        $at, $t6, 0x9
    ctx->pc = 0x19780cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x197810: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x197810u;
    {
        const bool branch_taken_0x197810 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197810u;
        // 0x197814: 0x25cffff8  addiu       $t7, $t6, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197810) {
            ctx->pc = 0x197868u;
            goto label_197868;
        }
    }
    ctx->pc = 0x197818u;
label_197818:
    // 0x197818: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x197818u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x19781c: 0x37180001  ori         $t8, $t8, 0x1
    ctx->pc = 0x19781cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
    // 0x197820: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x197820u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x197824: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x197824u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x197828: 0x18f582a  slt         $t3, $t4, $t7
    ctx->pc = 0x197828u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x19782c: 0x37180001  ori         $t8, $t8, 0x1
    ctx->pc = 0x19782cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
    // 0x197830: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x197830u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x197834: 0x37180001  ori         $t8, $t8, 0x1
    ctx->pc = 0x197834u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
    // 0x197838: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x197838u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x19783c: 0x37180001  ori         $t8, $t8, 0x1
    ctx->pc = 0x19783cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
    // 0x197840: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x197840u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x197844: 0x37180001  ori         $t8, $t8, 0x1
    ctx->pc = 0x197844u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
    // 0x197848: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x197848u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x19784c: 0x37180001  ori         $t8, $t8, 0x1
    ctx->pc = 0x19784cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
    // 0x197850: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x197854: 0x37180001  ori         $t8, $t8, 0x1
    ctx->pc = 0x197854u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
    // 0x197858: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x197858u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x19785c: 0x1560ffee  bnez        $t3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19785Cu;
    {
        const bool branch_taken_0x19785c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x197860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19785Cu;
        // 0x197860: 0x37180001  ori         $t8, $t8, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19785c) {
            ctx->pc = 0x197818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197818;
        }
    }
    ctx->pc = 0x197864u;
    // 0x197864: 0x0  nop
    ctx->pc = 0x197864u;
    // NOP
label_197868:
    // 0x197868: 0x18e082a  slt         $at, $t4, $t6
    ctx->pc = 0x197868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x19786c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19786Cu;
    {
        const bool branch_taken_0x19786c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19786c) {
            ctx->pc = 0x197898u;
            goto label_197898;
        }
    }
    ctx->pc = 0x197874u;
    // 0x197874: 0x0  nop
    ctx->pc = 0x197874u;
    // NOP
label_197878:
    // 0x197878: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x197878u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x19787c: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x19787cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x197880: 0x18e582a  slt         $t3, $t4, $t6
    ctx->pc = 0x197880u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x197884: 0x37180001  ori         $t8, $t8, 0x1
    ctx->pc = 0x197884u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)1);
    // 0x197888: 0x0  nop
    ctx->pc = 0x197888u;
    // NOP
    // 0x19788c: 0x1560fffa  bnez        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19788Cu;
    {
        const bool branch_taken_0x19788c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x19788c) {
            ctx->pc = 0x197878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197878;
        }
    }
    ctx->pc = 0x197894u;
    // 0x197894: 0x0  nop
    ctx->pc = 0x197894u;
    // NOP
label_197898:
    // 0x197898: 0x8c8b0098  lw          $t3, 0x98($a0)
    ctx->pc = 0x197898u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x19789c: 0xce6018  mult        $t4, $a2, $t6
    ctx->pc = 0x19789cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1978a0: 0x1986004  sllv        $t4, $t8, $t4
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 12) & 0x1F));
    // 0x1978a4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1978a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1978a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1978A8u;
    {
        const bool branch_taken_0x1978a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978A8u;
        // 0x1978ac: 0xac8b0098  sw          $t3, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978a8) {
            ctx->pc = 0x197968u;
            goto label_197968;
        }
    }
    ctx->pc = 0x1978B0u;
label_1978b0:
    // 0x1978b0: 0x808f004d  lb          $t7, 0x4D($a0)
    ctx->pc = 0x1978b0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
    // 0x1978b4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1978b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978b8: 0xf082a  slt         $at, $zero, $t7
    ctx->pc = 0x1978b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1978bc: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1978BCu;
    {
        const bool branch_taken_0x1978bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978BCu;
        // 0x1978c0: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978bc) {
            ctx->pc = 0x197958u;
            goto label_197958;
        }
    }
    ctx->pc = 0x1978C4u;
    // 0x1978c4: 0x29e10009  slti        $at, $t7, 0x9
    ctx->pc = 0x1978c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1978c8: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1978C8u;
    {
        const bool branch_taken_0x1978c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1978CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978C8u;
        // 0x1978cc: 0x25f9fff8  addiu       $t9, $t7, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978c8) {
            ctx->pc = 0x197928u;
            goto label_197928;
        }
    }
    ctx->pc = 0x1978D0u;
    // 0x1978d0: 0x8098004c  lb          $t8, 0x4C($a0)
    ctx->pc = 0x1978d0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1978d4: 0x0  nop
    ctx->pc = 0x1978d4u;
    // NOP
label_1978d8:
    // 0x1978d8: 0x30c6004  sllv        $t4, $t4, $t8
    ctx->pc = 0x1978d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 24) & 0x1F));
    // 0x1978dc: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x1978dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x1978e0: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x1978e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x1978e4: 0x30c6004  sllv        $t4, $t4, $t8
    ctx->pc = 0x1978e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 24) & 0x1F));
    // 0x1978e8: 0x1d9582a  slt         $t3, $t6, $t9
    ctx->pc = 0x1978e8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1978ec: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x1978ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x1978f0: 0x30c6004  sllv        $t4, $t4, $t8
    ctx->pc = 0x1978f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 24) & 0x1F));
    // 0x1978f4: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x1978f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x1978f8: 0x30c6004  sllv        $t4, $t4, $t8
    ctx->pc = 0x1978f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 24) & 0x1F));
    // 0x1978fc: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x1978fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x197900: 0x30c6004  sllv        $t4, $t4, $t8
    ctx->pc = 0x197900u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 24) & 0x1F));
    // 0x197904: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x197904u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x197908: 0x30c6004  sllv        $t4, $t4, $t8
    ctx->pc = 0x197908u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 24) & 0x1F));
    // 0x19790c: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x19790cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x197910: 0x30c6004  sllv        $t4, $t4, $t8
    ctx->pc = 0x197910u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 24) & 0x1F));
    // 0x197914: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x197914u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x197918: 0x30c6004  sllv        $t4, $t4, $t8
    ctx->pc = 0x197918u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 24) & 0x1F));
    // 0x19791c: 0x1560ffee  bnez        $t3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19791Cu;
    {
        const bool branch_taken_0x19791c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x197920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19791Cu;
        // 0x197920: 0x358c0001  ori         $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19791c) {
            ctx->pc = 0x1978D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1978d8;
        }
    }
    ctx->pc = 0x197924u;
    // 0x197924: 0x0  nop
    ctx->pc = 0x197924u;
    // NOP
label_197928:
    // 0x197928: 0x1cf082a  slt         $at, $t6, $t7
    ctx->pc = 0x197928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x19792c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19792Cu;
    {
        const bool branch_taken_0x19792c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19792c) {
            ctx->pc = 0x197958u;
            goto label_197958;
        }
    }
    ctx->pc = 0x197934u;
    // 0x197934: 0x8098004c  lb          $t8, 0x4C($a0)
    ctx->pc = 0x197934u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
label_197938:
    // 0x197938: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x197938u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x19793c: 0x30c6004  sllv        $t4, $t4, $t8
    ctx->pc = 0x19793cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 24) & 0x1F));
    // 0x197940: 0x1cf582a  slt         $t3, $t6, $t7
    ctx->pc = 0x197940u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x197944: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x197944u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x197948: 0x0  nop
    ctx->pc = 0x197948u;
    // NOP
    // 0x19794c: 0x1560fffa  bnez        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19794Cu;
    {
        const bool branch_taken_0x19794c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x19794c) {
            ctx->pc = 0x197938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197938;
        }
    }
    ctx->pc = 0x197954u;
    // 0x197954: 0x0  nop
    ctx->pc = 0x197954u;
    // NOP
label_197958:
    // 0x197958: 0x8c8b0098  lw          $t3, 0x98($a0)
    ctx->pc = 0x197958u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x19795c: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x19795cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x197960: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x197960u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x197964: 0xac8b0098  sw          $t3, 0x98($a0)
    ctx->pc = 0x197964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 11));
label_197968:
    // 0x197968: 0x8c8b0098  lw          $t3, 0x98($a0)
    ctx->pc = 0x197968u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x19796c: 0xcd6006  srlv        $t4, $t5, $a2
    ctx->pc = 0x19796cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x197970: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x197970u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x197974: 0xac8b0098  sw          $t3, 0x98($a0)
    ctx->pc = 0x197974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 11));
label_197978:
    // 0x197978: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x197978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19797c: 0xc9582a  slt         $t3, $a2, $t1
    ctx->pc = 0x19797cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x197980: 0x1560ff73  bnez        $t3, . + 4 + (-0x8D << 2)
    ctx->pc = 0x197980u;
    {
        const bool branch_taken_0x197980 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x197984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197980u;
        // 0x197984: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197980) {
            ctx->pc = 0x197750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197750;
        }
    }
    ctx->pc = 0x197988u;
label_197988:
    // 0x197988: 0x14a90013  bne         $a1, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x197988u;
    {
        const bool branch_taken_0x197988 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        if (branch_taken_0x197988) {
            ctx->pc = 0x1979D8u;
            goto label_1979d8;
        }
    }
    ctx->pc = 0x197990u;
    // 0x197990: 0x8c8d009c  lw          $t5, 0x9C($a0)
    ctx->pc = 0x197990u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x197994: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x197994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x197998: 0x34456424  ori         $a1, $v0, 0x6424
    ctx->pc = 0x197998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25636);
    // 0x19799c: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x19799cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1979a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1979a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1979a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1979a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1979a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1979acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1979b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1979b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1979b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979bc: 0x35a20002  ori         $v0, $t5, 0x2
    ctx->pc = 0x1979bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)2);
    // 0x1979c0: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x1979c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
    // 0x1979c4: 0xac8c0098  sw          $t4, 0x98($a0)
    ctx->pc = 0x1979c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 12));
    // 0x1979c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1979c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1979cc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1979ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1979d0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x1979D0u;
    SET_GPR_U32(ctx, 31, 0x1979D8u);
    ctx->pc = 0x1979D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979D0u;
    // 0x1979d4: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x1979D0u, 0x1979D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979D8u;
label_1979d8:
    // 0x1979d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1979d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1979dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1979DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1979E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979DCu;
        // 0x1979e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1979DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1979E4u;
}
