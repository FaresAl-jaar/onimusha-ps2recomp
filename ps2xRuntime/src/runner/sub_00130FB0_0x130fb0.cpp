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

// Function: sub_00130FB0
// Address: 0x130fb0 - 0x1311ec
void sub_00130FB0_0x130fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130FB0_0x130fb0");
#endif

    switch (ctx->pc) {
        case 0x130fdcu: goto label_130fdc;
        case 0x130ff4u: goto label_130ff4;
        case 0x131000u: goto label_131000;
        case 0x131038u: goto label_131038;
        case 0x131050u: goto label_131050;
        case 0x131060u: goto label_131060;
        case 0x1310e4u: goto label_1310e4;
        case 0x1310f8u: goto label_1310f8;
        case 0x131108u: goto label_131108;
        case 0x131190u: goto label_131190;
        case 0x1311a4u: goto label_1311a4;
        case 0x1311b0u: goto label_1311b0;
        case 0x1311bcu: goto label_1311bc;
        default: break;
    }

    ctx->pc = 0x130fb0u;

    // 0x130fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x130fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x130fb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x130fb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x130fbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x130fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x130fc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x130fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130fc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x130fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130fd0: 0x8cb10014  lw          $s1, 0x14($a1)
    ctx->pc = 0x130fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x130fd4: 0xc04da84  jal         func_136A10
    ctx->pc = 0x130FD4u;
    SET_GPR_U32(ctx, 31, 0x130FDCu);
    ctx->pc = 0x130FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FD4u;
    // 0x130fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A10u, 0x130FD4u, 0x130FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FDCu;
label_130fdc:
    // 0x130fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130fe0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x130FE0u;
    {
        const bool branch_taken_0x130fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x130FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FE0u;
        // 0x130fe4: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130fe0) {
            ctx->pc = 0x131000u;
            goto label_131000;
        }
    }
    ctx->pc = 0x130FE8u;
    // 0x130fe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fec: 0xc04c610  jal         func_131840
    ctx->pc = 0x130FECu;
    SET_GPR_U32(ctx, 31, 0x130FF4u);
    ctx->pc = 0x130FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FECu;
    // 0x130ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131840u, 0x130FECu, 0x130FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FF4u;
label_130ff4:
    // 0x130ff4: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x130ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x130ff8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x130FF8u;
    {
        const bool branch_taken_0x130ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FF8u;
        // 0x130ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ff8) {
            ctx->pc = 0x1311D0u;
            goto label_1311d0;
        }
    }
    ctx->pc = 0x131000u;
label_131000:
    // 0x131000: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x131000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x131004: 0x10430064  beq         $v0, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x131004u;
    {
        const bool branch_taken_0x131004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x131004) {
            ctx->pc = 0x131198u;
            goto label_131198;
        }
    }
    ctx->pc = 0x13100Cu;
    // 0x13100c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13100Cu;
    {
        const bool branch_taken_0x13100c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13100c) {
            ctx->pc = 0x131020u;
            goto label_131020;
        }
    }
    ctx->pc = 0x131014u;
    // 0x131014: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x131014u;
    {
        const bool branch_taken_0x131014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131014) {
            ctx->pc = 0x1311C8u;
            goto label_1311c8;
        }
    }
    ctx->pc = 0x13101Cu;
    // 0x13101c: 0x0  nop
    ctx->pc = 0x13101cu;
    // NOP
label_131020:
    // 0x131020: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x131020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x131024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131028: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x131028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x13102c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x13102cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x131030: 0xc04da50  jal         func_136940
    ctx->pc = 0x131030u;
    SET_GPR_U32(ctx, 31, 0x131038u);
    ctx->pc = 0x131034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131030u;
    // 0x131034: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136940u, 0x131030u, 0x131038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131038u;
label_131038:
    // 0x131038: 0x4400063  bltz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x131038u;
    {
        const bool branch_taken_0x131038 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x13103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131038u;
        // 0x13103c: 0x28410005  slti        $at, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131038) {
            ctx->pc = 0x1311C8u;
            goto label_1311c8;
        }
    }
    ctx->pc = 0x131040u;
    // 0x131040: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x131040u;
    {
        const bool branch_taken_0x131040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x131044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131040u;
        // 0x131044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131040) {
            ctx->pc = 0x1311C8u;
            goto label_1311c8;
        }
    }
    ctx->pc = 0x131048u;
    // 0x131048: 0x27858010  addiu       $a1, $gp, -0x7FF0
    ctx->pc = 0x131048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934544));
    // 0x13104c: 0x0  nop
    ctx->pc = 0x13104cu;
    // NOP
label_131050:
    // 0x131050: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x131050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x131054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x131054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131058: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x131058u;
    {
        const bool branch_taken_0x131058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131058u;
        // 0x13105c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131058) {
            ctx->pc = 0x131090u;
            goto label_131090;
        }
    }
    ctx->pc = 0x131060u;
label_131060:
    // 0x131060: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x131060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x131064: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x131064u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131068: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x131068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x13106c: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x13106cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x131070: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x131070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x131074: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x131074u;
    {
        const bool branch_taken_0x131074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x131074) {
            ctx->pc = 0x131090u;
            goto label_131090;
        }
    }
    ctx->pc = 0x13107Cu;
    // 0x13107c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13107cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x131080: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x131080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x131084: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x131084u;
    {
        const bool branch_taken_0x131084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131084u;
        // 0x131088: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131084) {
            ctx->pc = 0x131060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131060;
        }
    }
    ctx->pc = 0x13108Cu;
    // 0x13108c: 0x0  nop
    ctx->pc = 0x13108cu;
    // NOP
label_131090:
    // 0x131090: 0x1502000d  bne         $t0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x131090u;
    {
        const bool branch_taken_0x131090 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x131090) {
            ctx->pc = 0x1310C8u;
            goto label_1310c8;
        }
    }
    ctx->pc = 0x131098u;
    // 0x131098: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x131098u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13109c: 0x27848528  addiu       $a0, $gp, -0x7AD8
    ctx->pc = 0x13109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935848));
    // 0x1310a0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1310a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1310a4: 0x27828014  addiu       $v0, $gp, -0x7FEC
    ctx->pc = 0x1310a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934548));
    // 0x1310a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1310a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1310ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1310acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1310b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1310b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1310b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1310b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1310b8: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1310b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1310bc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1310bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1310c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1310C0u;
    {
        const bool branch_taken_0x1310c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1310C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310C0u;
        // 0x1310c4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310c0) {
            ctx->pc = 0x1310D8u;
            goto label_1310d8;
        }
    }
    ctx->pc = 0x1310C8u;
label_1310c8:
    // 0x1310c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1310c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1310cc: 0x18e0ffe0  blez        $a3, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1310CCu;
    {
        const bool branch_taken_0x1310cc = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x1310D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310CCu;
        // 0x1310d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310cc) {
            ctx->pc = 0x131050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131050;
        }
    }
    ctx->pc = 0x1310D4u;
    // 0x1310d4: 0x0  nop
    ctx->pc = 0x1310d4u;
    // NOP
label_1310d8:
    // 0x1310d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1310d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310dc: 0xc04d93c  jal         func_1364F0
    ctx->pc = 0x1310DCu;
    SET_GPR_U32(ctx, 31, 0x1310E4u);
    ctx->pc = 0x1310E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310DCu;
    // 0x1310e0: 0x26450024  addiu       $a1, $s2, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364F0u, 0x1310DCu, 0x1310E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310E4u;
label_1310e4:
    // 0x1310e4: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1310E4u;
    {
        const bool branch_taken_0x1310e4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1310E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310E4u;
        // 0x1310e8: 0x28410005  slti        $at, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310e4) {
            ctx->pc = 0x1311C8u;
            goto label_1311c8;
        }
    }
    ctx->pc = 0x1310ECu;
    // 0x1310ec: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1310ECu;
    {
        const bool branch_taken_0x1310ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1310F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310ECu;
        // 0x1310f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310ec) {
            ctx->pc = 0x1311C8u;
            goto label_1311c8;
        }
    }
    ctx->pc = 0x1310F4u;
    // 0x1310f4: 0x27888018  addiu       $t0, $gp, -0x7FE8
    ctx->pc = 0x1310f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934552));
label_1310f8:
    // 0x1310f8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1310f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1310fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1310fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131100: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x131100u;
    {
        const bool branch_taken_0x131100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x131104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131100u;
        // 0x131104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131100) {
            ctx->pc = 0x131138u;
            goto label_131138;
        }
    }
    ctx->pc = 0x131108u;
label_131108:
    // 0x131108: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x131108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x13110c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x13110cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131110: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x131110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x131114: 0x90630024  lbu         $v1, 0x24($v1)
    ctx->pc = 0x131114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x131118: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x131118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13111c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13111Cu;
    {
        const bool branch_taken_0x13111c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13111c) {
            ctx->pc = 0x131138u;
            goto label_131138;
        }
    }
    ctx->pc = 0x131124u;
    // 0x131124: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x131124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x131128: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x131128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13112c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x13112Cu;
    {
        const bool branch_taken_0x13112c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13112Cu;
        // 0x131130: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13112c) {
            ctx->pc = 0x131108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131108;
        }
    }
    ctx->pc = 0x131134u;
    // 0x131134: 0x0  nop
    ctx->pc = 0x131134u;
    // NOP
label_131138:
    // 0x131138: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x131138u;
    {
        const bool branch_taken_0x131138 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x13113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131138u;
        // 0x13113c: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131138) {
            ctx->pc = 0x131160u;
            goto label_131160;
        }
    }
    ctx->pc = 0x131140u;
    // 0x131140: 0x2782801c  addiu       $v0, $gp, -0x7FE4
    ctx->pc = 0x131140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934556));
    // 0x131144: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x131144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131148: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x131148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13114c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x13114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x131150: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x131150u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x131154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x131158: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131158u;
    {
        const bool branch_taken_0x131158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131158u;
        // 0x13115c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131158) {
            ctx->pc = 0x131170u;
            goto label_131170;
        }
    }
    ctx->pc = 0x131160u;
label_131160:
    // 0x131160: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x131160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x131164: 0x18e0ffe4  blez        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x131164u;
    {
        const bool branch_taken_0x131164 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x131168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131164u;
        // 0x131168: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131164) {
            ctx->pc = 0x1310F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1310f8;
        }
    }
    ctx->pc = 0x13116Cu;
    // 0x13116c: 0x0  nop
    ctx->pc = 0x13116cu;
    // NOP
label_131170:
    // 0x131170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131174: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x131174u;
    {
        const bool branch_taken_0x131174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x131178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131174u;
        // 0x131178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131174) {
            ctx->pc = 0x1311C8u;
            goto label_1311c8;
        }
    }
    ctx->pc = 0x13117Cu;
    // 0x13117c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131180: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x131180u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131184: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131188: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x131188u;
    SET_GPR_U32(ctx, 31, 0x131190u);
    ctx->pc = 0x13118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131188u;
    // 0x13118c: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x131188u, 0x131190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131190u;
label_131190:
    // 0x131190: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x131190u;
    {
        const bool branch_taken_0x131190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131190) {
            ctx->pc = 0x1311C8u;
            goto label_1311c8;
        }
    }
    ctx->pc = 0x131198u;
label_131198:
    // 0x131198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x131198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13119c: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x13119Cu;
    SET_GPR_U32(ctx, 31, 0x1311A4u);
    ctx->pc = 0x1311A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13119Cu;
    // 0x1311a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x13119Cu, 0x1311A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311A4u;
label_1311a4:
    // 0x1311a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1311a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311a8: 0xc04c5a0  jal         func_131680
    ctx->pc = 0x1311A8u;
    SET_GPR_U32(ctx, 31, 0x1311B0u);
    ctx->pc = 0x1311ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1311A8u;
    // 0x1311ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131680u, 0x1311A8u, 0x1311B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311B0u;
label_1311b0:
    // 0x1311b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1311b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311b4: 0xc04c5c8  jal         func_131720
    ctx->pc = 0x1311B4u;
    SET_GPR_U32(ctx, 31, 0x1311BCu);
    ctx->pc = 0x1311B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1311B4u;
    // 0x1311b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131720u, 0x1311B4u, 0x1311BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311BCu;
label_1311bc:
    // 0x1311bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1311BCu;
    {
        const bool branch_taken_0x1311bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311BCu;
        // 0x1311c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311bc) {
            ctx->pc = 0x1311D0u;
            goto label_1311d0;
        }
    }
    ctx->pc = 0x1311C4u;
    // 0x1311c4: 0x0  nop
    ctx->pc = 0x1311c4u;
    // NOP
label_1311c8:
    // 0x1311c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1311c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311cc: 0x0  nop
    ctx->pc = 0x1311ccu;
    // NOP
label_1311d0:
    // 0x1311d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1311d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1311d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1311d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1311d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1311d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1311dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1311dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1311e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1311e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1311e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1311E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1311E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311E4u;
        // 0x1311e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1311E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1311ECu;
}
