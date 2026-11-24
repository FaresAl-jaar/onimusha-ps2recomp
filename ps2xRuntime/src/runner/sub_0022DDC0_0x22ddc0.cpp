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

// Function: sub_0022DDC0
// Address: 0x22ddc0 - 0x22dfdc
void sub_0022DDC0_0x22ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DDC0_0x22ddc0");
#endif

    switch (ctx->pc) {
        case 0x22de08u: goto label_22de08;
        default: break;
    }

    ctx->pc = 0x22ddc0u;

    // 0x22ddc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22ddc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22ddc8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22ddc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddcc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22ddd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ddd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddd4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22ddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22ddd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22ddd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dddc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22dddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22dde0: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x22dde0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dde4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x22dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22dde8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x22dde8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddec: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x22ddecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22ddf0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x22ddf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22ddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22ddf8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22ddf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddfc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x22de00: 0xc08b63a  jal         func_22D8E8
    ctx->pc = 0x22DE00u;
    SET_GPR_U32(ctx, 31, 0x22DE08u);
    ctx->pc = 0x22DE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE00u;
    // 0x22de04: 0x27a70001  addiu       $a3, $sp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8E8u, 0x22DE00u, 0x22DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE08u;
label_22de08:
    // 0x22de08: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x22DE08u;
    {
        const bool branch_taken_0x22de08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22de08) {
            ctx->pc = 0x22DE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE08u;
            // 0x22de0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DFBCu;
            goto label_22dfbc;
        }
    }
    ctx->pc = 0x22DE10u;
    // 0x22de10: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x22de10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22de14: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x22de14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22de18: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x22de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x22de1c: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x22de1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x22de20: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x22de20u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x22de24: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x22de24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22de28: 0x54600063  bnel        $v1, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x22DE28u;
    {
        const bool branch_taken_0x22de28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22de28) {
            ctx->pc = 0x22DE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE28u;
            // 0x22de2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DFB8u;
            goto label_22dfb8;
        }
    }
    ctx->pc = 0x22DE30u;
    // 0x22de30: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x22de30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22de34: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22de34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22de38: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x22de38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22de3c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x22de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x22de40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22de40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22de44: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22de44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22de48: 0x1465002b  bne         $v1, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x22DE48u;
    {
        const bool branch_taken_0x22de48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x22DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE48u;
        // 0x22de4c: 0x240aff00  addiu       $t2, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de48) {
            ctx->pc = 0x22DEF8u;
            goto label_22def8;
        }
    }
    ctx->pc = 0x22DE50u;
    // 0x22de50: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x22de50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x22de54: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x22de54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x22de58: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x22de58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x22de5c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22de60: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x22de60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x22de64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22de64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22de68: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22de68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22de6c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x22de6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x22de70: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x22de70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22de74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DE74u;
    {
        const bool branch_taken_0x22de74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE74u;
        // 0x22de78: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de74) {
            ctx->pc = 0x22DE88u;
            goto label_22de88;
        }
    }
    ctx->pc = 0x22DE7Cu;
    // 0x22de7c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x22DE7Cu;
    {
        const bool branch_taken_0x22de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE7Cu;
        // 0x22de80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de7c) {
            ctx->pc = 0x22DFB8u;
            goto label_22dfb8;
        }
    }
    ctx->pc = 0x22DE84u;
    // 0x22de84: 0x0  nop
    ctx->pc = 0x22de84u;
    // NOP
label_22de88:
    // 0x22de88: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x22de88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22de8c: 0x67480a  movz        $t1, $v1, $a3
    ctx->pc = 0x22de8cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x22de90: 0x3c084149  lui         $t0, 0x4149
    ctx->pc = 0x22de90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16713 << 16));
    // 0x22de94: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x22de94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x22de98: 0x35084e46  ori         $t0, $t0, 0x4E46
    ctx->pc = 0x22de98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20038);
    // 0x22de9c: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x22de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x22dea0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x22dea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x22dea4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x22dea4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22dea8: 0x25260014  addiu       $a2, $t1, 0x14
    ctx->pc = 0x22dea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x22deac: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x22deacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x22deb0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22deb4: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x22deb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x22deb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22deb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22debc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22debcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22dec0: 0xc4480b  movn        $t1, $a2, $a0
    ctx->pc = 0x22dec0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x22dec4: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x22dec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x22dec8: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x22dec8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x22decc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x22deccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22ded0: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x22ded0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22ded4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x22ded4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x22ded8: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x22ded8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x22dedc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x22dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x22dee0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x22dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22dee4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x22dee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x22dee8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x22dee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x22deec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22deecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22def0: 0x10680003  beq         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DEF0u;
    {
        const bool branch_taken_0x22def0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x22DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEF0u;
        // 0x22def4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22def0) {
            ctx->pc = 0x22DF00u;
            goto label_22df00;
        }
    }
    ctx->pc = 0x22DEF8u;
label_22def8:
    // 0x22def8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x22DEF8u;
    {
        const bool branch_taken_0x22def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEF8u;
        // 0x22defc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22def8) {
            ctx->pc = 0x22DFB8u;
            goto label_22dfb8;
        }
    }
    ctx->pc = 0x22DF00u;
label_22df00:
    // 0x22df00: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x22df00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x22df04: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x22df04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x22df08: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22df08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22df0c: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x22df0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x22df10: 0x2094021  addu        $t0, $s0, $t1
    ctx->pc = 0x22df10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x22df14: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x22df14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x22df18: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x22df18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x22df1c: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x22df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x22df20: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x22df20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x22df24: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x22df24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x22df28: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x22df28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x22df2c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22df30: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x22df30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x22df34: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22df34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22df38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22df38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22df3c: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x22df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x22df40: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x22df40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x22df44: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x22df44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x22df48: 0x2093021  addu        $a2, $s0, $t1
    ctx->pc = 0x22df48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x22df4c: 0x1303821  addu        $a3, $t1, $s0
    ctx->pc = 0x22df4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x22df50: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x22df50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22df54: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x22df54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22df58: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x22df58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22df5c: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x22df5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22df60: 0xb2830007  sdl         $v1, 0x7($s4)
    ctx->pc = 0x22df60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22df64: 0xb6830000  sdr         $v1, 0x0($s4)
    ctx->pc = 0x22df64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22df68: 0xb284000f  sdl         $a0, 0xF($s4)
    ctx->pc = 0x22df68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22df6c: 0xb6840008  sdr         $a0, 0x8($s4)
    ctx->pc = 0x22df6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22df70: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x22df70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22df74: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x22df74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x22df78: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22df78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22df7c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x22df7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x22df80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22df80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22df84: 0xa6a40000  sh          $a0, 0x0($s5)
    ctx->pc = 0x22df84u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x22df88: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x22df88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22df8c: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x22df8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x22df90: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22df90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22df94: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x22df94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x22df98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22df98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22df9c: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x22df9cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x22dfa0: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x22dfa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x22dfa4: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x22dfa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x22dfa8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22dfac: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x22dfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x22dfb0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22dfb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22dfb4: 0xa6640002  sh          $a0, 0x2($s3)
    ctx->pc = 0x22dfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 4));
label_22dfb8:
    // 0x22dfb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22dfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22dfbc:
    // 0x22dfbc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22dfbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22dfc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22dfc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dfc4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22dfc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dfc8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22dfc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22dfcc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22dfccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22dfd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22dfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22dfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x22DFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFD4u;
        // 0x22dfd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DFDCu;
}
