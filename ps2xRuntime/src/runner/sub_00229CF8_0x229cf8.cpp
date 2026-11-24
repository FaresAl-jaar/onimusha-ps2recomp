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

// Function: sub_00229CF8
// Address: 0x229cf8 - 0x22a084
void sub_00229CF8_0x229cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229CF8_0x229cf8");
#endif

    switch (ctx->pc) {
        case 0x229e28u: goto label_229e28;
        default: break;
    }

    ctx->pc = 0x229cf8u;

    // 0x229cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x229cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x229cfc: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x229cfcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x229d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x229d04: 0x3c104d52  lui         $s0, 0x4D52
    ctx->pc = 0x229d04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19794 << 16));
    // 0x229d08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x229d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x229d0c: 0x3c1100ff  lui         $s1, 0xFF
    ctx->pc = 0x229d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
    // 0x229d10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x229d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x229d14: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x229d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x229d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x229d1c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x229d1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x229d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x229d24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x229d24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d28: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x229d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x229d2c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x229d2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d30: 0x36104f46  ori         $s0, $s0, 0x4F46
    ctx->pc = 0x229d30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)20294);
    // 0x229d34: 0x930f0000  lbu         $t7, 0x0($t8)
    ctx->pc = 0x229d34u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229d38: 0x930e0003  lbu         $t6, 0x3($t8)
    ctx->pc = 0x229d38u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x229d3c: 0x930c0002  lbu         $t4, 0x2($t8)
    ctx->pc = 0x229d3cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x229d40: 0x930d0001  lbu         $t5, 0x1($t8)
    ctx->pc = 0x229d40u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229d44: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x229d44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x229d48: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x229d48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x229d4c: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x229d4cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x229d50: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x229d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x229d54: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x229d54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x229d58: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x229d58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229d5c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x229d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x229d60: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x229d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229d64: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x229d64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x229d68: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x229d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x229d6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x229d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x229d70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x229d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x229d74: 0x93050002  lbu         $a1, 0x2($t8)
    ctx->pc = 0x229d74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x229d78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x229d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x229d7c: 0x930b0003  lbu         $t3, 0x3($t8)
    ctx->pc = 0x229d7cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x229d80: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x229d80u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229d84: 0x930a0001  lbu         $t2, 0x1($t8)
    ctx->pc = 0x229d84u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229d88: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x229d88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x229d8c: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x229d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x229d90: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x229d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x229d94: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x229d94u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229d98: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x229d98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x229d9c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x229d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x229da0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x229da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x229da4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x229da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229da8: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x229da8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x229dac: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x229dacu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229db0: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x229db0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x229db4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x229db4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229db8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x229db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x229dbc: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x229dbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x229dc0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x229dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x229dc4: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x229dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x229dc8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x229dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x229dcc: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x229dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x229dd0: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x229dd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x229dd4: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x229dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x229dd8: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x229dd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x229ddc: 0x82c825  or          $t9, $a0, $v0
    ctx->pc = 0x229ddcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x229de0: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x229de0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x229de4: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x229de4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x229de8: 0x15f0009e  bne         $t7, $s0, . + 4 + (0x9E << 2)
    ctx->pc = 0x229DE8u;
    {
        const bool branch_taken_0x229de8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x229DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DE8u;
        // 0x229dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229de8) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x229DF0u;
    // 0x229df0: 0x3c024646  lui         $v0, 0x4646
    ctx->pc = 0x229df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17990 << 16));
    // 0x229df4: 0x34424941  ori         $v0, $v0, 0x4941
    ctx->pc = 0x229df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18753);
    // 0x229df8: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229DF8u;
    {
        const bool branch_taken_0x229df8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x229df8) {
            ctx->pc = 0x229DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229DF8u;
            // 0x229dfc: 0x3191021  addu        $v0, $t8, $t9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229E08u;
            goto label_229e08;
        }
    }
    ctx->pc = 0x229E00u;
    // 0x229e00: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x229E00u;
    {
        const bool branch_taken_0x229e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E00u;
        // 0x229e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e00) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x229E08u;
label_229e08:
    // 0x229e08: 0x244bfffc  addiu       $t3, $v0, -0x4
    ctx->pc = 0x229e08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x229e0c: 0x30b182b  sltu        $v1, $t8, $t3
    ctx->pc = 0x229e0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x229e10: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x229E10u;
    {
        const bool branch_taken_0x229e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E10u;
        // 0x229e14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e10) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x229E18u;
    // 0x229e18: 0x3c0c00ff  lui         $t4, 0xFF
    ctx->pc = 0x229e18u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)255 << 16));
    // 0x229e1c: 0x2410ff00  addiu       $s0, $zero, -0x100
    ctx->pc = 0x229e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x229e20: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x229e20u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229e24: 0x0  nop
    ctx->pc = 0x229e24u;
    // NOP
label_229e28:
    // 0x229e28: 0x3c0a444e  lui         $t2, 0x444E
    ctx->pc = 0x229e28u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17486 << 16));
    // 0x229e2c: 0x93080003  lbu         $t0, 0x3($t8)
    ctx->pc = 0x229e2cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x229e30: 0x354a5353  ori         $t2, $t2, 0x5353
    ctx->pc = 0x229e30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21331);
    // 0x229e34: 0x93060002  lbu         $a2, 0x2($t8)
    ctx->pc = 0x229e34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x229e38: 0x93070001  lbu         $a3, 0x1($t8)
    ctx->pc = 0x229e38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229e3c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x229e3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x229e40: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x229e40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x229e44: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x229e44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x229e48: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x229e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x229e4c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x229e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x229e50: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x229e50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229e54: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x229e54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x229e58: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x229e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229e5c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x229e5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x229e60: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x229e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x229e64: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x229e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x229e68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x229e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x229e6c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x229e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x229e70: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x229e70u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229e74: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x229e74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x229e78: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x229e78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x229e7c: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x229e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x229e80: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x229e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x229e84: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x229e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x229e88: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x229e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x229e8c: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x229e8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x229e90: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x229e90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x229e94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x229e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x229e98: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x229e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x229e9c: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x229e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x229ea0: 0x1267825  or          $t7, $t1, $a2
    ctx->pc = 0x229ea0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x229ea4: 0x11ea004c  beq         $t7, $t2, . + 4 + (0x4C << 2)
    ctx->pc = 0x229EA4u;
    {
        const bool branch_taken_0x229ea4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        ctx->pc = 0x229EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EA4u;
        // 0x229ea8: 0x82c825  or          $t9, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ea4) {
            ctx->pc = 0x229FD8u;
            goto label_229fd8;
        }
    }
    ctx->pc = 0x229EACu;
    // 0x229eac: 0x3c024d4d  lui         $v0, 0x4D4D
    ctx->pc = 0x229eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19789 << 16));
    // 0x229eb0: 0x34424f43  ori         $v0, $v0, 0x4F43
    ctx->pc = 0x229eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20291);
    // 0x229eb4: 0x15e20064  bne         $t7, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x229EB4u;
    {
        const bool branch_taken_0x229eb4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x229EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EB4u;
        // 0x229eb8: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229eb4) {
            ctx->pc = 0x22A048u;
            goto label_22a048;
        }
    }
    ctx->pc = 0x229EBCu;
    // 0x229ebc: 0x15a00066  bnez        $t5, . + 4 + (0x66 << 2)
    ctx->pc = 0x229EBCu;
    {
        const bool branch_taken_0x229ebc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x229EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EBCu;
        // 0x229ec0: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ebc) {
            ctx->pc = 0x22A058u;
            goto label_22a058;
        }
    }
    ctx->pc = 0x229EC4u;
    // 0x229ec4: 0x2b220012  slti        $v0, $t9, 0x12
    ctx->pc = 0x229ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x229ec8: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x229EC8u;
    {
        const bool branch_taken_0x229ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229EC8u;
        // 0x229ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ec8) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x229ED0u;
    // 0x229ed0: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x229ed0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229ed4: 0x2406400e  addiu       $a2, $zero, 0x400E
    ctx->pc = 0x229ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16398));
    // 0x229ed8: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x229ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229edc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x229edcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x229ee0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x229ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x229ee4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x229ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229ee8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x229ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x229eec: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x229eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x229ef0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x229ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x229ef4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x229ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x229ef8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x229ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229efc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x229efcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x229f00: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x229f00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x229f04: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x229f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x229f08: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x229f08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229f0c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x229f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x229f10: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x229f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229f14: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x229f14u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x229f18: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x229f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x229f1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x229f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x229f20: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x229f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x229f24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x229f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x229f28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x229f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x229f2c: 0x32a03  sra         $a1, $v1, 8
    ctx->pc = 0x229f2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x229f30: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x229f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x229f34: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x229f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x229f38: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x229f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x229f3c: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x229f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x229f40: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x229f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x229f44: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x229f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x229f48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x229f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229f4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x229f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x229f50: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x229f50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x229f54: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x229f54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229f58: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x229f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229f5c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x229f5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x229f60: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x229f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x229f64: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x229f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x229f68: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x229f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x229f6c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x229f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x229f70: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x229f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x229f74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x229f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229f78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x229f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x229f7c: 0x93050000  lbu         $a1, 0x0($t8)
    ctx->pc = 0x229f7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229f80: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x229f80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229f84: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x229f84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x229f88: 0x93030001  lbu         $v1, 0x1($t8)
    ctx->pc = 0x229f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229f8c: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x229f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229f90: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x229f90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x229f94: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x229f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x229f98: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x229f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x229f9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x229f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229fa0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x229fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x229fa4: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x229fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x229fa8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x229fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x229fac: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x229facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x229fb0: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x229fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x229fb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x229fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x229fb8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x229fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x229fbc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x229fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x229fc0: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x229fc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x229fc4: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x229FC4u;
    {
        const bool branch_taken_0x229fc4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x229FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FC4u;
        // 0x229fc8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fc4) {
            ctx->pc = 0x22A054u;
            goto label_22a054;
        }
    }
    ctx->pc = 0x229FCCu;
    // 0x229fcc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x229FCCu;
    {
        const bool branch_taken_0x229fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FCCu;
        // 0x229fd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fcc) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x229FD4u;
    // 0x229fd4: 0x0  nop
    ctx->pc = 0x229fd4u;
    // NOP
label_229fd8:
    // 0x229fd8: 0x15c0001f  bnez        $t6, . + 4 + (0x1F << 2)
    ctx->pc = 0x229FD8u;
    {
        const bool branch_taken_0x229fd8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x229FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FD8u;
        // 0x229fdc: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fd8) {
            ctx->pc = 0x22A058u;
            goto label_22a058;
        }
    }
    ctx->pc = 0x229FE0u;
    // 0x229fe0: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x229fe0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x229fe4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x229fe4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229fe8: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x229fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x229fec: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x229fecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x229ff0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x229ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x229ff4: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x229ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x229ff8: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x229ff8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x229ffc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x229ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22a000: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x22a000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22a004: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x22a004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x22a008: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22a008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22a00c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22a00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22a010: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x22a010u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x22a014: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x22a014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22a018: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x22a018u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x22a01c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x22a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22a020: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x22a020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x22a024: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x22a024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x22a028: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22a028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22a02c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x22a02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x22a030: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x22a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22a034: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A034u;
    {
        const bool branch_taken_0x22a034 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A034u;
        // 0x22a038: 0x3028821  addu        $s1, $t8, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a034) {
            ctx->pc = 0x22A054u;
            goto label_22a054;
        }
    }
    ctx->pc = 0x22A03Cu;
    // 0x22a03c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22A03Cu;
    {
        const bool branch_taken_0x22a03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A03Cu;
        // 0x22a040: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a03c) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x22A044u;
    // 0x22a044: 0x0  nop
    ctx->pc = 0x22a044u;
    // NOP
label_22a048:
    // 0x22a048: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x22a048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x22a04c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22a04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22a050: 0x302c021  addu        $t8, $t8, $v0
    ctx->pc = 0x22a050u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_22a054:
    // 0x22a054: 0x30b102b  sltu        $v0, $t8, $t3
    ctx->pc = 0x22a054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_22a058:
    // 0x22a058: 0x5440ff73  bnel        $v0, $zero, . + 4 + (-0x8D << 2)
    ctx->pc = 0x22A058u;
    {
        const bool branch_taken_0x22a058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a058) {
            ctx->pc = 0x22A05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A058u;
            // 0x22a05c: 0x93090000  lbu         $t1, 0x0($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229e28;
        }
    }
    ctx->pc = 0x22A060u;
    // 0x22a060: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a064:
    // 0x22a064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a06c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22a06cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a070: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22a070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22a074: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22a074u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a078: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22a078u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a07c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A07Cu;
        // 0x22a080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A084u;
}
