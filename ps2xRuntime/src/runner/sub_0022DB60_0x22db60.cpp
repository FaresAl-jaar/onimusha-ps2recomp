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

// Function: sub_0022DB60
// Address: 0x22db60 - 0x22ddc0
void sub_0022DB60_0x22db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DB60_0x22db60");
#endif

    switch (ctx->pc) {
        case 0x22dbb8u: goto label_22dbb8;
        default: break;
    }

    ctx->pc = 0x22db60u;

    // 0x22db60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22db64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22db68: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22db68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22db70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22db70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22db78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22db78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db7c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22db7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22db80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22db80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db84: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x22db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22db88: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x22db88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db8c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x22db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22db90: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x22db90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db94: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x22db94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x22db98: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x22db98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db9c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x22db9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x22dba0: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x22dba0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dba4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22dba8: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x22dba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x22dbac: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x22dbacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22dbb0: 0xc08b63a  jal         func_22D8E8
    ctx->pc = 0x22DBB0u;
    SET_GPR_U32(ctx, 31, 0x22DBB8u);
    ctx->pc = 0x22DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBB0u;
    // 0x22dbb4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8E8u, 0x22DBB0u, 0x22DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBB8u;
label_22dbb8:
    // 0x22dbb8: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x22DBB8u;
    {
        const bool branch_taken_0x22dbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dbb8) {
            ctx->pc = 0x22DBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DBB8u;
            // 0x22dbbc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DD98u;
            goto label_22dd98;
        }
    }
    ctx->pc = 0x22DBC0u;
    // 0x22dbc0: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x22dbc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dbc4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x22dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x22dbc8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x22dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22dbcc: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x22dbccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x22dbd0: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x22dbd0u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x22dbd4: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x22dbd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22dbd8: 0x5460006e  bnel        $v1, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x22DBD8u;
    {
        const bool branch_taken_0x22dbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dbd8) {
            ctx->pc = 0x22DBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DBD8u;
            // 0x22dbdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DD94u;
            goto label_22dd94;
        }
    }
    ctx->pc = 0x22DBE0u;
    // 0x22dbe0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x22dbe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22dbe4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22dbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22dbe8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x22dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22dbec: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x22dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x22dbf0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22dbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22dbf4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22dbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22dbf8: 0x14650027  bne         $v1, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x22DBF8u;
    {
        const bool branch_taken_0x22dbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x22DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBF8u;
        // 0x22dbfc: 0x240eff00  addiu       $t6, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbf8) {
            ctx->pc = 0x22DC98u;
            goto label_22dc98;
        }
    }
    ctx->pc = 0x22DC00u;
    // 0x22dc00: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x22dc00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x22dc04: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x22dc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x22dc08: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x22dc08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x22dc0c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22dc10: 0x6e1824  and         $v1, $v1, $t6
    ctx->pc = 0x22dc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x22dc14: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22dc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22dc18: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22dc1c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x22dc1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x22dc20: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x22dc20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22dc24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DC24u;
    {
        const bool branch_taken_0x22dc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC24u;
        // 0x22dc28: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc24) {
            ctx->pc = 0x22DC38u;
            goto label_22dc38;
        }
    }
    ctx->pc = 0x22DC2Cu;
    // 0x22dc2c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x22DC2Cu;
    {
        const bool branch_taken_0x22dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC2Cu;
        // 0x22dc30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc2c) {
            ctx->pc = 0x22DD94u;
            goto label_22dd94;
        }
    }
    ctx->pc = 0x22DC34u;
    // 0x22dc34: 0x0  nop
    ctx->pc = 0x22dc34u;
    // NOP
label_22dc38:
    // 0x22dc38: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x22dc38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22dc3c: 0x67680a  movz        $t5, $v1, $a3
    ctx->pc = 0x22dc3cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x22dc40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22dc40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dc44: 0x20d3021  addu        $a2, $s0, $t5
    ctx->pc = 0x22dc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x22dc48: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x22dc48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x22dc4c: 0x20d3821  addu        $a3, $s0, $t5
    ctx->pc = 0x22dc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x22dc50: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x22dc50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x22dc54: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x22dc54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22dc58: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x22dc58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22dc5c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x22dc5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x22dc60: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x22dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x22dc64: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x22dc64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x22dc68: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x22dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22dc6c: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x22dc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x22dc70: 0xae2824  and         $a1, $a1, $t6
    ctx->pc = 0x22dc70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 14));
    // 0x22dc74: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x22dc74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x22dc78: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22dc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22dc7c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22dc80: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x22dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x22dc84: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x22dc84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x22dc88: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x22dc88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x22dc8c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x22dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x22dc90: 0x10880003  beq         $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DC90u;
    {
        const bool branch_taken_0x22dc90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x22DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC90u;
        // 0x22dc94: 0xa6460000  sh          $a2, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc90) {
            ctx->pc = 0x22DCA0u;
            goto label_22dca0;
        }
    }
    ctx->pc = 0x22DC98u;
label_22dc98:
    // 0x22dc98: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x22DC98u;
    {
        const bool branch_taken_0x22dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC98u;
        // 0x22dc9c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc98) {
            ctx->pc = 0x22DD94u;
            goto label_22dd94;
        }
    }
    ctx->pc = 0x22DCA0u;
label_22dca0:
    // 0x22dca0: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x22dca0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x22dca4: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x22dca4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
    // 0x22dca8: 0x20d5021  addu        $t2, $s0, $t5
    ctx->pc = 0x22dca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x22dcac: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x22dcacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x22dcb0: 0x20d1821  addu        $v1, $s0, $t5
    ctx->pc = 0x22dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x22dcb4: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x22dcb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x22dcb8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22dcbc: 0x20d5821  addu        $t3, $s0, $t5
    ctx->pc = 0x22dcbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x22dcc0: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x22dcc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x22dcc4: 0x95470000  lhu         $a3, 0x0($t2)
    ctx->pc = 0x22dcc4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x22dcc8: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x22dcc8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x22dccc: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x22dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x22dcd0: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x22dcd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x22dcd4: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x22dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x22dcd8: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x22dcd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x22dcdc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22dcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22dce0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x22dce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x22dce4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22dce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22dce8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22dce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22dcec: 0x20d6021  addu        $t4, $s0, $t5
    ctx->pc = 0x22dcecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x22dcf0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x22dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x22dcf4: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x22dcf4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x22dcf8: 0x91480001  lbu         $t0, 0x1($t2)
    ctx->pc = 0x22dcf8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x22dcfc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x22dcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x22dd00: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x22dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22dd04: 0xee3824  and         $a3, $a3, $t6
    ctx->pc = 0x22dd04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 14));
    // 0x22dd08: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x22dd08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x22dd0c: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x22dd0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x22dd10: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x22dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x22dd14: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x22dd14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x22dd18: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x22dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x22dd1c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x22dd1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x22dd20: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x22dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x22dd24: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x22dd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x22dd28: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22dd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22dd2c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22dd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22dd30: 0xa6c80000  sh          $t0, 0x0($s6)
    ctx->pc = 0x22dd30u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x22dd34: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x22dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x22dd38: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x22dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x22dd3c: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x22dd3cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x22dd40: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x22dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22dd44: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x22dd44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x22dd48: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x22dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x22dd4c: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x22dd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x22dd50: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x22dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x22dd54: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x22dd54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x22dd58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22dd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22dd5c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22dd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22dd60: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x22dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x22dd64: 0x8da40004  lw          $a0, 0x4($t5)
    ctx->pc = 0x22dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x22dd68: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x22dd68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x22dd6c: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x22dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22dd70: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x22dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x22dd74: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x22dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x22dd78: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x22dd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x22dd7c: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x22dd7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x22dd80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22dd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22dd84: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x22dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22dd88: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x22dd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x22dd8c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22dd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22dd90: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22dd94:
    // 0x22dd94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22dd94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22dd98:
    // 0x22dd98: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22dd98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22dd9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22dd9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dda0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22dda0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dda4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22dda4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22dda8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22dda8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22ddac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x22ddacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ddb0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x22ddb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ddb4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22ddb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ddb8: 0x3e00008  jr          $ra
    ctx->pc = 0x22DDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDB8u;
        // 0x22ddbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DDC0u;
}
