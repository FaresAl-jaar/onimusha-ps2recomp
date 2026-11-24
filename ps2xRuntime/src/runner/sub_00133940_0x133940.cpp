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

// Function: sub_00133940
// Address: 0x133940 - 0x133b6c
void sub_00133940_0x133940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133940_0x133940");
#endif

    switch (ctx->pc) {
        case 0x133a38u: goto label_133a38;
        case 0x133a70u: goto label_133a70;
        case 0x133abcu: goto label_133abc;
        case 0x133b38u: goto label_133b38;
        default: break;
    }

    ctx->pc = 0x133940u;

    // 0x133940: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x133940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x133944: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x133944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x133948: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x133948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x13394c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x133950: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x133950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x133954: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x133954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x133958: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x133958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13395c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x133960: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x133960u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133964: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x133968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13396c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133974: 0x90c8000b  lbu         $t0, 0xB($a2)
    ctx->pc = 0x133974u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
    // 0x133978: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x133978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13397c: 0x90c5000c  lbu         $a1, 0xC($a2)
    ctx->pc = 0x13397cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x133980: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133984: 0x90c3000a  lbu         $v1, 0xA($a2)
    ctx->pc = 0x133984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x133988: 0x94d30008  lhu         $s3, 0x8($a2)
    ctx->pc = 0x133988u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13398c: 0x1079004  sllv        $s2, $a3, $t0
    ctx->pc = 0x13398cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x133990: 0xa78804  sllv        $s1, $a3, $a1
    ctx->pc = 0x133990u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x133994: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x133994u;
    {
        const bool branch_taken_0x133994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x133998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133994u;
        // 0x133998: 0x2512818  mult        $a1, $s2, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133994) {
            ctx->pc = 0x133A10u;
            goto label_133a10;
        }
    }
    ctx->pc = 0x13399Cu;
    // 0x13399c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x13399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1339a0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1339A0u;
    {
        const bool branch_taken_0x1339a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1339A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339A0u;
        // 0x1339a4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339a0) {
            ctx->pc = 0x133A10u;
            goto label_133a10;
        }
    }
    ctx->pc = 0x1339A8u;
    // 0x1339a8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1339A8u;
    {
        const bool branch_taken_0x1339a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1339a8) {
            ctx->pc = 0x133A10u;
            goto label_133a10;
        }
    }
    ctx->pc = 0x1339B0u;
    // 0x1339b0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1339b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1339b4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1339B4u;
    {
        const bool branch_taken_0x1339b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1339B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339B4u;
        // 0x1339b8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339b4) {
            ctx->pc = 0x133A28u;
            goto label_133a28;
        }
    }
    ctx->pc = 0x1339BCu;
    // 0x1339bc: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1339BCu;
    {
        const bool branch_taken_0x1339bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1339bc) {
            ctx->pc = 0x133A28u;
            goto label_133a28;
        }
    }
    ctx->pc = 0x1339C4u;
    // 0x1339c4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1339c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1339c8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1339C8u;
    {
        const bool branch_taken_0x1339c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1339CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339C8u;
        // 0x1339cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339c8) {
            ctx->pc = 0x133A08u;
            goto label_133a08;
        }
    }
    ctx->pc = 0x1339D0u;
    // 0x1339d0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1339D0u;
    {
        const bool branch_taken_0x1339d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1339d0) {
            ctx->pc = 0x133A08u;
            goto label_133a08;
        }
    }
    ctx->pc = 0x1339D8u;
    // 0x1339d8: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1339D8u;
    {
        const bool branch_taken_0x1339d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1339d8) {
            ctx->pc = 0x1339F8u;
            goto label_1339f8;
        }
    }
    ctx->pc = 0x1339E0u;
    // 0x1339e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1339E0u;
    {
        const bool branch_taken_0x1339e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339e0) {
            ctx->pc = 0x1339F0u;
            goto label_1339f0;
        }
    }
    ctx->pc = 0x1339E8u;
    // 0x1339e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1339E8u;
    {
        const bool branch_taken_0x1339e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339e8) {
            ctx->pc = 0x133A20u;
            goto label_133a20;
        }
    }
    ctx->pc = 0x1339F0u;
label_1339f0:
    // 0x1339f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1339F0u;
    {
        const bool branch_taken_0x1339f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339F0u;
        // 0x1339f4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339f0) {
            ctx->pc = 0x133A28u;
            goto label_133a28;
        }
    }
    ctx->pc = 0x1339F8u;
label_1339f8:
    // 0x1339f8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1339f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1339fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1339FCu;
    {
        const bool branch_taken_0x1339fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339FCu;
        // 0x133a00: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339fc) {
            ctx->pc = 0x133A28u;
            goto label_133a28;
        }
    }
    ctx->pc = 0x133A04u;
    // 0x133a04: 0x0  nop
    ctx->pc = 0x133a04u;
    // NOP
label_133a08:
    // 0x133a08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133A08u;
    {
        const bool branch_taken_0x133a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A08u;
        // 0x133a0c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a08) {
            ctx->pc = 0x133A28u;
            goto label_133a28;
        }
    }
    ctx->pc = 0x133A10u;
label_133a10:
    // 0x133a10: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x133a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x133a14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x133A14u;
    {
        const bool branch_taken_0x133a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A14u;
        // 0x133a18: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a14) {
            ctx->pc = 0x133A28u;
            goto label_133a28;
        }
    }
    ctx->pc = 0x133A1Cu;
    // 0x133a1c: 0x0  nop
    ctx->pc = 0x133a1cu;
    // NOP
label_133a20:
    // 0x133a20: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x133A20u;
    {
        const bool branch_taken_0x133a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A20u;
        // 0x133a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a20) {
            ctx->pc = 0x133B40u;
            goto label_133b40;
        }
    }
    ctx->pc = 0x133A28u;
label_133a28:
    // 0x133a28: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x133a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x133a2c: 0x2b902  srl         $s7, $v0, 4
    ctx->pc = 0x133a2cu;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x133a30: 0xc04cda8  jal         func_1336A0
    ctx->pc = 0x133A30u;
    SET_GPR_U32(ctx, 31, 0x133A38u);
    ctx->pc = 0x133A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A30u;
    // 0x133a34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1336A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1336A0u, 0x133A30u, 0x133A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A38u;
label_133a38:
    // 0x133a38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133A38u;
    {
        const bool branch_taken_0x133a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A38u;
        // 0x133a3c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a38) {
            ctx->pc = 0x133A48u;
            goto label_133a48;
        }
    }
    ctx->pc = 0x133A40u;
    // 0x133a40: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x133A40u;
    {
        const bool branch_taken_0x133a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133A40u;
        // 0x133a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a40) {
            ctx->pc = 0x133B40u;
            goto label_133b40;
        }
    }
    ctx->pc = 0x133A48u;
label_133a48:
    // 0x133a48: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x133a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x133a4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x133a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a50: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x133a50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x133a54: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x133a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x133a58: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x133a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x133a5c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x133a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133a60: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x133a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x133a64: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x133a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x133a68: 0xc04cdc4  jal         func_133710
    ctx->pc = 0x133A68u;
    SET_GPR_U32(ctx, 31, 0x133A70u);
    ctx->pc = 0x133A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A68u;
    // 0x133a6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133710u, 0x133A68u, 0x133A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A70u;
label_133a70:
    // 0x133a70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x133a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x133a74: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x133a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x133a78: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x133a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x133a7c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x133a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x133a80: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x133a80u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x133a84: 0x132c3c  dsll32      $a1, $s3, 16
    ctx->pc = 0x133a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 16));
    // 0x133a88: 0xfe800018  sd          $zero, 0x18($s4)
    ctx->pc = 0x133a88u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 0));
    // 0x133a8c: 0x115c3c  dsll32      $t3, $s1, 16
    ctx->pc = 0x133a8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) << (32 + 16));
    // 0x133a90: 0x92a7000a  lbu         $a3, 0xA($s5)
    ctx->pc = 0x133a90u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x133a94: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x133a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x133a98: 0x12543c  dsll32      $t2, $s2, 16
    ctx->pc = 0x133a98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) << (32 + 16));
    // 0x133a9c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x133a9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x133aa0: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x133aa0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x133aa4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x133aa4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x133aa8: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x133aa8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x133aac: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x133aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x133ab0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x133ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ab4: 0xc040df4  jal         func_1037D0
    ctx->pc = 0x133AB4u;
    SET_GPR_U32(ctx, 31, 0x133ABCu);
    ctx->pc = 0x133AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AB4u;
    // 0x133ab8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1037D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1037D0u, 0x133AB4u, 0x133ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133ABCu;
label_133abc:
    // 0x133abc: 0x10113c  dsll32      $v0, $s0, 4
    ctx->pc = 0x133abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 4));
    // 0x133ac0: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x133ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x133ac4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x133ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x133ac8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x133ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x133acc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x133accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x133ad0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x133ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x133ad4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133ad8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x133ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x133adc: 0xfe820080  sd          $v0, 0x80($s4)
    ctx->pc = 0x133adcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 128), GPR_U64(ctx, 2));
    // 0x133ae0: 0xfe800088  sd          $zero, 0x88($s4)
    ctx->pc = 0x133ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 136), GPR_U64(ctx, 0));
    // 0x133ae4: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x133ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x133ae8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x133ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x133aec: 0xaed40034  sw          $s4, 0x34($s6)
    ctx->pc = 0x133aecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 20));
    // 0x133af0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x133af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x133af4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x133AF4u;
    {
        const bool branch_taken_0x133af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133af4) {
            ctx->pc = 0x133B10u;
            goto label_133b10;
        }
    }
    ctx->pc = 0x133AFCu;
    // 0x133afc: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x133afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x133b00: 0xfe820090  sd          $v0, 0x90($s4)
    ctx->pc = 0x133b00u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 144), GPR_U64(ctx, 2));
    // 0x133b04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x133B04u;
    {
        const bool branch_taken_0x133b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B04u;
        // 0x133b08: 0xfe800098  sd          $zero, 0x98($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 152), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b04) {
            ctx->pc = 0x133B30u;
            goto label_133b30;
        }
    }
    ctx->pc = 0x133B0Cu;
    // 0x133b0c: 0x0  nop
    ctx->pc = 0x133b0cu;
    // NOP
label_133b10:
    // 0x133b10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x133b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x133b14: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x133b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x133b18: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x133b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x133b1c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x133b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x133b20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x133b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x133b24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133b28: 0xfe820090  sd          $v0, 0x90($s4)
    ctx->pc = 0x133b28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 144), GPR_U64(ctx, 2));
    // 0x133b2c: 0xfe800098  sd          $zero, 0x98($s4)
    ctx->pc = 0x133b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 152), GPR_U64(ctx, 0));
label_133b30:
    // 0x133b30: 0xc043898  jal         func_10E260
    ctx->pc = 0x133B30u;
    SET_GPR_U32(ctx, 31, 0x133B38u);
    ctx->pc = 0x133B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B30u;
    // 0x133b34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x133B30u, 0x133B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B38u;
label_133b38:
    // 0x133b38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133b3c: 0x0  nop
    ctx->pc = 0x133b3cu;
    // NOP
label_133b40:
    // 0x133b40: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x133b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133b44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x133b44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x133b48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x133b48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x133b4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x133b4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133b50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133b50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133b54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133b58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133b64: 0x3e00008  jr          $ra
    ctx->pc = 0x133B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B64u;
        // 0x133b68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133B6Cu;
}
