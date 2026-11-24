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

// Function: sub_001C5F10
// Address: 0x1c5f10 - 0x1c6644
void sub_001C5F10_0x1c5f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5F10_0x1c5f10");
#endif

    switch (ctx->pc) {
        case 0x1c5f84u: goto label_1c5f84;
        case 0x1c5f98u: goto label_1c5f98;
        case 0x1c5facu: goto label_1c5fac;
        case 0x1c5fb4u: goto label_1c5fb4;
        case 0x1c629cu: goto label_1c629c;
        case 0x1c62e8u: goto label_1c62e8;
        case 0x1c62f4u: goto label_1c62f4;
        case 0x1c6318u: goto label_1c6318;
        case 0x1c632cu: goto label_1c632c;
        case 0x1c633cu: goto label_1c633c;
        case 0x1c635cu: goto label_1c635c;
        case 0x1c6370u: goto label_1c6370;
        case 0x1c6378u: goto label_1c6378;
        case 0x1c6384u: goto label_1c6384;
        case 0x1c6390u: goto label_1c6390;
        case 0x1c63f8u: goto label_1c63f8;
        case 0x1c640cu: goto label_1c640c;
        case 0x1c642cu: goto label_1c642c;
        case 0x1c6438u: goto label_1c6438;
        case 0x1c6444u: goto label_1c6444;
        case 0x1c64a0u: goto label_1c64a0;
        case 0x1c64b4u: goto label_1c64b4;
        case 0x1c64e0u: goto label_1c64e0;
        case 0x1c64ecu: goto label_1c64ec;
        case 0x1c6510u: goto label_1c6510;
        case 0x1c6524u: goto label_1c6524;
        case 0x1c6534u: goto label_1c6534;
        case 0x1c655cu: goto label_1c655c;
        case 0x1c6570u: goto label_1c6570;
        case 0x1c6598u: goto label_1c6598;
        case 0x1c65a4u: goto label_1c65a4;
        case 0x1c65c8u: goto label_1c65c8;
        case 0x1c65dcu: goto label_1c65dc;
        case 0x1c65ecu: goto label_1c65ec;
        case 0x1c6614u: goto label_1c6614;
        case 0x1c6628u: goto label_1c6628;
        default: break;
    }

    ctx->pc = 0x1c5f10u;

    // 0x1c5f10: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1c5f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1c5f14: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5f18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c5f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c5f1c: 0x2442f690  addiu       $v0, $v0, -0x970
    ctx->pc = 0x1c5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964880));
    // 0x1c5f20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c5f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c5f24: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x1c5f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c5f28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5f2c: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x1c5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c5f30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5f34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c5f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5f3c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c5f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f40: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1c5f40u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40F690u));
    // 0x1c5f44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c5f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f48: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1c5f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1c5f4c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1c5f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1c5f50: 0x24a5f6a0  addiu       $a1, $a1, -0x960
    ctx->pc = 0x1c5f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964896));
    // 0x1c5f54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c5f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f58: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1c5f58u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x1c5f5c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5f60: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1c5f60u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40F6A0u));
    // 0x1c5f64: 0x2442f6b0  addiu       $v0, $v0, -0x950
    ctx->pc = 0x1c5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964912));
    // 0x1c5f68: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1c5f68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1c5f6c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c5f6cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F6B0u));
    // 0x1c5f70: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c5f70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c5f74: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x1c5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1c5f78: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x1c5f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x1c5f7c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C5F84u);
    ctx->pc = 0x1C5F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F7Cu;
    // 0x1c5f80: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5F7Cu, 0x1C5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F84u;
label_1c5f84:
    // 0x1c5f84: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1c5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x1c5f88: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1c5f8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f90: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5F90u;
    SET_GPR_U32(ctx, 31, 0x1C5F98u);
    ctx->pc = 0x1C5F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F90u;
    // 0x1c5f94: 0x24450300  addiu       $a1, $v0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5F90u, 0x1C5F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F98u;
label_1c5f98:
    // 0x1c5f98: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1c5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x1c5f9c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c5f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c5fa0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fa4: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5FA4u;
    SET_GPR_U32(ctx, 31, 0x1C5FACu);
    ctx->pc = 0x1C5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FA4u;
    // 0x1c5fa8: 0x24450300  addiu       $a1, $v0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5FA4u, 0x1C5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FACu;
label_1c5fac:
    // 0x1c5fac: 0xc067378  jal         func_19CDE0
    ctx->pc = 0x1C5FACu;
    SET_GPR_U32(ctx, 31, 0x1C5FB4u);
    ctx->pc = 0x19CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDE0u, 0x1C5FACu, 0x1C5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FB4u;
label_1c5fb4:
    // 0x1c5fb4: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1C5FB4u;
    {
        const bool branch_taken_0x1c5fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB4u;
        // 0x1c5fb8: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fb4) {
            ctx->pc = 0x1C6248u;
            goto label_1c6248;
        }
    }
    ctx->pc = 0x1C5FBCu;
    // 0x1c5fbc: 0x902229e2  lbu         $v0, 0x29E2($at)
    ctx->pc = 0x1c5fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 10722)));
    // 0x1c5fc0: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1C5FC0u;
    {
        const bool branch_taken_0x1c5fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5fc0) {
            ctx->pc = 0x1C6248u;
            goto label_1c6248;
        }
    }
    ctx->pc = 0x1C5FC8u;
    // 0x1c5fc8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1c5fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1c5fcc: 0x2403080c  addiu       $v1, $zero, 0x80C
    ctx->pc = 0x1c5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1c5fd0: 0x942229e8  lhu         $v0, 0x29E8($at)
    ctx->pc = 0x1c5fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8129E8u));
    // 0x1c5fd4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c5fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c5fd8: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1c5fd8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c5fdc: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C5FDCu;
    {
        const bool branch_taken_0x1c5fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FDCu;
        // 0x1c5fe0: 0x24030203  addiu       $v1, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fdc) {
            ctx->pc = 0x1C6050u;
            goto label_1c6050;
        }
    }
    ctx->pc = 0x1C5FE4u;
    // 0x1c5fe4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5FE4u;
    {
        const bool branch_taken_0x1c5fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5fe4) {
            ctx->pc = 0x1C5FF8u;
            goto label_1c5ff8;
        }
    }
    ctx->pc = 0x1C5FECu;
    // 0x1c5fec: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1C5FECu;
    {
        const bool branch_taken_0x1c5fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5fec) {
            ctx->pc = 0x1C6248u;
            goto label_1c6248;
        }
    }
    ctx->pc = 0x1C5FF4u;
    // 0x1c5ff4: 0x0  nop
    ctx->pc = 0x1c5ff4u;
    // NOP
label_1c5ff8:
    // 0x1c5ff8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1c5ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1c5ffc: 0x902429e3  lbu         $a0, 0x29E3($at)
    ctx->pc = 0x1c5ffcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8129E3u));
    // 0x1c6000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6004: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6004u;
    {
        const bool branch_taken_0x1c6004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c6004) {
            ctx->pc = 0x1C6018u;
            goto label_1c6018;
        }
    }
    ctx->pc = 0x1C600Cu;
    // 0x1c600c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1C600Cu;
    {
        const bool branch_taken_0x1c600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c600c) {
            ctx->pc = 0x1C6248u;
            goto label_1c6248;
        }
    }
    ctx->pc = 0x1C6014u;
    // 0x1c6014: 0x0  nop
    ctx->pc = 0x1c6014u;
    // NOP
label_1c6018:
    // 0x1c6018: 0x2c410096  sltiu       $at, $v0, 0x96
    ctx->pc = 0x1c6018u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)150) ? 1 : 0);
    // 0x1c601c: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x1C601Cu;
    {
        const bool branch_taken_0x1c601c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c601c) {
            ctx->pc = 0x1C6248u;
            goto label_1c6248;
        }
    }
    ctx->pc = 0x1C6024u;
    // 0x1c6024: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1c6024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6028: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x1c6028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x1c602c: 0x3442404f  ori         $v0, $v0, 0x404F
    ctx->pc = 0x1c602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16463);
    // 0x1c6030: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1c6030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c6034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6038: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1c6038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c603c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1c603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6040: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c6040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c6044: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1C6044u;
    {
        const bool branch_taken_0x1c6044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6044u;
        // 0x1c6048: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6044) {
            ctx->pc = 0x1C6248u;
            goto label_1c6248;
        }
    }
    ctx->pc = 0x1C604Cu;
    // 0x1c604c: 0x0  nop
    ctx->pc = 0x1c604cu;
    // NOP
label_1c6050:
    // 0x1c6050: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1c6050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1c6054: 0x902329e3  lbu         $v1, 0x29E3($at)
    ctx->pc = 0x1c6054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8129E3u));
    // 0x1c6058: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6058u;
    {
        const bool branch_taken_0x1c6058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6058) {
            ctx->pc = 0x1C6068u;
            goto label_1c6068;
        }
    }
    ctx->pc = 0x1C6060u;
    // 0x1c6060: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1C6060u;
    {
        const bool branch_taken_0x1c6060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6060) {
            ctx->pc = 0x1C6248u;
            goto label_1c6248;
        }
    }
    ctx->pc = 0x1C6068u;
label_1c6068:
    // 0x1c6068: 0x240300de  addiu       $v1, $zero, 0xDE
    ctx->pc = 0x1c6068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x1c606c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C606Cu;
    {
        const bool branch_taken_0x1c606c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c606c) {
            ctx->pc = 0x1C6098u;
            goto label_1c6098;
        }
    }
    ctx->pc = 0x1C6074u;
    // 0x1c6074: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c6074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6078: 0x3c033f97  lui         $v1, 0x3F97
    ctx->pc = 0x1c6078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16279 << 16));
    // 0x1c607c: 0x3463a0f9  ori         $v1, $v1, 0xA0F9
    ctx->pc = 0x1c607cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41209);
    // 0x1c6080: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c6080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c6084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6088: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c6088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c608c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6090: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c6090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c6094: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c6098:
    // 0x1c6098: 0x24030143  addiu       $v1, $zero, 0x143
    ctx->pc = 0x1c6098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
    // 0x1c609c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C609Cu;
    {
        const bool branch_taken_0x1c609c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c609c) {
            ctx->pc = 0x1C60C8u;
            goto label_1c60c8;
        }
    }
    ctx->pc = 0x1C60A4u;
    // 0x1c60a4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c60a8: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1c60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1c60ac: 0x34636dc6  ori         $v1, $v1, 0x6DC6
    ctx->pc = 0x1c60acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28102);
    // 0x1c60b0: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c60b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c60b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c60b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c60b8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c60bc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c60bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c60c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c60c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c60c4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c60c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c60c8:
    // 0x1c60c8: 0x24030182  addiu       $v1, $zero, 0x182
    ctx->pc = 0x1c60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    // 0x1c60cc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C60CCu;
    {
        const bool branch_taken_0x1c60cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c60cc) {
            ctx->pc = 0x1C60F8u;
            goto label_1c60f8;
        }
    }
    ctx->pc = 0x1C60D4u;
    // 0x1c60d4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c60d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c60d8: 0x3c033f3d  lui         $v1, 0x3F3D
    ctx->pc = 0x1c60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16189 << 16));
    // 0x1c60dc: 0x3463bf48  ori         $v1, $v1, 0xBF48
    ctx->pc = 0x1c60dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48968);
    // 0x1c60e0: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c60e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c60e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c60e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c60e8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c60ec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c60ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c60f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c60f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c60f4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c60f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c60f8:
    // 0x1c60f8: 0x240301e7  addiu       $v1, $zero, 0x1E7
    ctx->pc = 0x1c60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 487));
    // 0x1c60fc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C60FCu;
    {
        const bool branch_taken_0x1c60fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c60fc) {
            ctx->pc = 0x1C6128u;
            goto label_1c6128;
        }
    }
    ctx->pc = 0x1C6104u;
    // 0x1c6104: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c6104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6108: 0x3c033f08  lui         $v1, 0x3F08
    ctx->pc = 0x1c6108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16136 << 16));
    // 0x1c610c: 0x346337b5  ori         $v1, $v1, 0x37B5
    ctx->pc = 0x1c610cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14261);
    // 0x1c6110: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c6110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c6114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6118: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c6118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c611c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6120: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c6120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c6124: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c6128:
    // 0x1c6128: 0x24030484  addiu       $v1, $zero, 0x484
    ctx->pc = 0x1c6128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
    // 0x1c612c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C612Cu;
    {
        const bool branch_taken_0x1c612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c612c) {
            ctx->pc = 0x1C6158u;
            goto label_1c6158;
        }
    }
    ctx->pc = 0x1C6134u;
    // 0x1c6134: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6138: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x1c6138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
    // 0x1c613c: 0x346389a0  ori         $v1, $v1, 0x89A0
    ctx->pc = 0x1c613cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35232);
    // 0x1c6140: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c6140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c6144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6148: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c6148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c614c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6150: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c6150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c6154: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c6158:
    // 0x1c6158: 0x2403053b  addiu       $v1, $zero, 0x53B
    ctx->pc = 0x1c6158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1339));
    // 0x1c615c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C615Cu;
    {
        const bool branch_taken_0x1c615c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c615c) {
            ctx->pc = 0x1C6188u;
            goto label_1c6188;
        }
    }
    ctx->pc = 0x1C6164u;
    // 0x1c6164: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c6164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6168: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x1c6168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
    // 0x1c616c: 0x346389a0  ori         $v1, $v1, 0x89A0
    ctx->pc = 0x1c616cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35232);
    // 0x1c6170: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c6170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c6174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6178: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c6178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c617c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6180: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c6180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c6184: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c6188:
    // 0x1c6188: 0x24030659  addiu       $v1, $zero, 0x659
    ctx->pc = 0x1c6188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1625));
    // 0x1c618c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C618Cu;
    {
        const bool branch_taken_0x1c618c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c618c) {
            ctx->pc = 0x1C61B8u;
            goto label_1c61b8;
        }
    }
    ctx->pc = 0x1C6194u;
    // 0x1c6194: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c6194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6198: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x1c6198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
    // 0x1c619c: 0x346389a0  ori         $v1, $v1, 0x89A0
    ctx->pc = 0x1c619cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35232);
    // 0x1c61a0: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c61a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c61a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c61a8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c61ac: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c61acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c61b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c61b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c61b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c61b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c61b8:
    // 0x1c61b8: 0x2403069e  addiu       $v1, $zero, 0x69E
    ctx->pc = 0x1c61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1694));
    // 0x1c61bc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C61BCu;
    {
        const bool branch_taken_0x1c61bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c61bc) {
            ctx->pc = 0x1C61E8u;
            goto label_1c61e8;
        }
    }
    ctx->pc = 0x1C61C4u;
    // 0x1c61c4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c61c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c61c8: 0x3c033f6f  lui         $v1, 0x3F6F
    ctx->pc = 0x1c61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16239 << 16));
    // 0x1c61cc: 0x34637cee  ori         $v1, $v1, 0x7CEE
    ctx->pc = 0x1c61ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31982);
    // 0x1c61d0: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c61d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c61d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c61d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c61d8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c61dc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c61e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c61e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c61e4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c61e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c61e8:
    // 0x1c61e8: 0x24030adb  addiu       $v1, $zero, 0xADB
    ctx->pc = 0x1c61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2779));
    // 0x1c61ec: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C61ECu;
    {
        const bool branch_taken_0x1c61ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c61ec) {
            ctx->pc = 0x1C6218u;
            goto label_1c6218;
        }
    }
    ctx->pc = 0x1C61F4u;
    // 0x1c61f4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1c61f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c61f8: 0x3c033f36  lui         $v1, 0x3F36
    ctx->pc = 0x1c61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16182 << 16));
    // 0x1c61fc: 0x34639ad4  ori         $v1, $v1, 0x9AD4
    ctx->pc = 0x1c61fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39636);
    // 0x1c6200: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c6200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c6204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6208: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c6208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c620c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6210: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c6210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c6214: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c6218:
    // 0x1c6218: 0x24030c66  addiu       $v1, $zero, 0xC66
    ctx->pc = 0x1c6218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3174));
    // 0x1c621c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C621Cu;
    {
        const bool branch_taken_0x1c621c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c621c) {
            ctx->pc = 0x1C6248u;
            goto label_1c6248;
        }
    }
    ctx->pc = 0x1C6224u;
    // 0x1c6224: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1c6224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6228: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x1c6228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x1c622c: 0x34428e8a  ori         $v0, $v0, 0x8E8A
    ctx->pc = 0x1c622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36490);
    // 0x1c6230: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1c6230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c6234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6238: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1c6238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c623c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1c623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6240: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c6240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c6244: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c6248:
    // 0x1c6248: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c6248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c624c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x1c624cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c6250: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x1c6250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x1c6254: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6254u;
    {
        const bool branch_taken_0x1c6254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6254) {
            ctx->pc = 0x1C6268u;
            goto label_1c6268;
        }
    }
    ctx->pc = 0x1C625Cu;
    // 0x1c625c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C625Cu;
    {
        const bool branch_taken_0x1c625c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c625c) {
            ctx->pc = 0x1C6290u;
            goto label_1c6290;
        }
    }
    ctx->pc = 0x1C6264u;
    // 0x1c6264: 0x0  nop
    ctx->pc = 0x1c6264u;
    // NOP
label_1c6268:
    // 0x1c6268: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1c6268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c626c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1c626cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1c6270: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1c6270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c6274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6278: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1c6278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c627c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6280: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6284: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6284u;
    {
        const bool branch_taken_0x1c6284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6284u;
        // 0x1c6288: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6284) {
            ctx->pc = 0x1C6290u;
            goto label_1c6290;
        }
    }
    ctx->pc = 0x1C628Cu;
    // 0x1c628c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c628cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1c6290:
    // 0x1c6290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6294: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x1C6294u;
    SET_GPR_U32(ctx, 31, 0x1C629Cu);
    ctx->pc = 0x1C6298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6294u;
    // 0x1c6298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x1C6294u, 0x1C629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C629Cu;
label_1c629c:
    // 0x1c629c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1c629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c62a0: 0x104300b5  beq         $v0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1C62A0u;
    {
        const bool branch_taken_0x1c62a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62A0u;
        // 0x1c62a4: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c62a0) {
            ctx->pc = 0x1C6578u;
            goto label_1c6578;
        }
    }
    ctx->pc = 0x1C62A8u;
    // 0x1c62a8: 0x10430085  beq         $v0, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x1C62A8u;
    {
        const bool branch_taken_0x1c62a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c62a8) {
            ctx->pc = 0x1C64C0u;
            goto label_1c64c0;
        }
    }
    ctx->pc = 0x1C62B0u;
    // 0x1c62b0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c62b4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C62B4u;
    {
        const bool branch_taken_0x1c62b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c62b4) {
            ctx->pc = 0x1C62C8u;
            goto label_1c62c8;
        }
    }
    ctx->pc = 0x1C62BCu;
    // 0x1c62bc: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1C62BCu;
    {
        const bool branch_taken_0x1c62bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c62bc) {
            ctx->pc = 0x1C6628u;
            goto label_1c6628;
        }
    }
    ctx->pc = 0x1C62C4u;
    // 0x1c62c4: 0x0  nop
    ctx->pc = 0x1c62c4u;
    // NOP
label_1c62c8:
    // 0x1c62c8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c62cc: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c62d0: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c62d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c62d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c62d8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c62dc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c62dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c62e0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C62E0u;
    SET_GPR_U32(ctx, 31, 0x1C62E8u);
    ctx->pc = 0x1C62E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C62E0u;
    // 0x1c62e4: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C62E0u, 0x1C62E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62E8u;
label_1c62e8:
    // 0x1c62e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c62e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c62ec: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C62ECu;
    SET_GPR_U32(ctx, 31, 0x1C62F4u);
    ctx->pc = 0x1C62F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C62ECu;
    // 0x1c62f0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C62ECu, 0x1C62F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62F4u;
label_1c62f4:
    // 0x1c62f4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c62f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c62f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c62fc: 0x0  nop
    ctx->pc = 0x1c62fcu;
    // NOP
    // 0x1c6300: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6304: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C6304u;
    {
        const bool branch_taken_0x1c6304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6304u;
        // 0x1c6308: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6304) {
            ctx->pc = 0x1C6330u;
            goto label_1c6330;
        }
    }
    ctx->pc = 0x1C630Cu;
    // 0x1c630c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c6310: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6310u;
    SET_GPR_U32(ctx, 31, 0x1C6318u);
    ctx->pc = 0x1C6314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6310u;
    // 0x1c6314: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6310u, 0x1C6318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6318u;
label_1c6318:
    // 0x1c6318: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c6318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c631c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1c631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c6320: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6324: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6324u;
    SET_GPR_U32(ctx, 31, 0x1C632Cu);
    ctx->pc = 0x1C6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6324u;
    // 0x1c6328: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6324u, 0x1C632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C632Cu;
label_1c632c:
    // 0x1c632c: 0x0  nop
    ctx->pc = 0x1c632cu;
    // NOP
label_1c6330:
    // 0x1c6330: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c6330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c6334: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6334u;
    SET_GPR_U32(ctx, 31, 0x1C633Cu);
    ctx->pc = 0x1C6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6334u;
    // 0x1c6338: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6334u, 0x1C633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C633Cu;
label_1c633c:
    // 0x1c633c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c633cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6340: 0x0  nop
    ctx->pc = 0x1c6340u;
    // NOP
    // 0x1c6344: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6348: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6348u;
    {
        const bool branch_taken_0x1c6348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6348u;
        // 0x1c634c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6348) {
            ctx->pc = 0x1C6370u;
            goto label_1c6370;
        }
    }
    ctx->pc = 0x1C6350u;
    // 0x1c6350: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c6350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c6354: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6354u;
    SET_GPR_U32(ctx, 31, 0x1C635Cu);
    ctx->pc = 0x1C6358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6354u;
    // 0x1c6358: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6354u, 0x1C635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C635Cu;
label_1c635c:
    // 0x1c635c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6360: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1c6360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c6364: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6368: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6368u;
    SET_GPR_U32(ctx, 31, 0x1C6370u);
    ctx->pc = 0x1C636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6368u;
    // 0x1c636c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6368u, 0x1C6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6370u;
label_1c6370:
    // 0x1c6370: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C6370u;
    SET_GPR_U32(ctx, 31, 0x1C6378u);
    ctx->pc = 0x1C6374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6370u;
    // 0x1c6374: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C6370u, 0x1C6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6378u;
label_1c6378:
    // 0x1c6378: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c6378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c637c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C637Cu;
    SET_GPR_U32(ctx, 31, 0x1C6384u);
    ctx->pc = 0x1C6380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C637Cu;
    // 0x1c6380: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C637Cu, 0x1C6384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6384u;
label_1c6384:
    // 0x1c6384: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c6384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c6388: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C6388u;
    SET_GPR_U32(ctx, 31, 0x1C6390u);
    ctx->pc = 0x1C638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6388u;
    // 0x1c638c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C6388u, 0x1C6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6390u;
label_1c6390:
    // 0x1c6390: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6394: 0x0  nop
    ctx->pc = 0x1c6394u;
    // NOP
    // 0x1c6398: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c639c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C639Cu;
    {
        const bool branch_taken_0x1c639c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C639Cu;
        // 0x1c63a0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c639c) {
            ctx->pc = 0x1C63A8u;
            goto label_1c63a8;
        }
    }
    ctx->pc = 0x1C63A4u;
    // 0x1c63a4: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c63a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c63a8:
    // 0x1c63a8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1c63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1c63ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c63acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c63b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c63b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c63b4: 0x0  nop
    ctx->pc = 0x1c63b4u;
    // NOP
    // 0x1c63b8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c63b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c63bc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1C63BCu;
    {
        const bool branch_taken_0x1c63bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c63bc) {
            ctx->pc = 0x1C6410u;
            goto label_1c6410;
        }
    }
    ctx->pc = 0x1C63C4u;
    // 0x1c63c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c63c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c63c8: 0x0  nop
    ctx->pc = 0x1c63c8u;
    // NOP
    // 0x1c63cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c63ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c63d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C63D0u;
    {
        const bool branch_taken_0x1c63d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c63d0) {
            ctx->pc = 0x1C63E0u;
            goto label_1c63e0;
        }
    }
    ctx->pc = 0x1C63D8u;
    // 0x1c63d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C63D8u;
    {
        const bool branch_taken_0x1c63d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63D8u;
        // 0x1c63dc: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63d8) {
            ctx->pc = 0x1C63E8u;
            goto label_1c63e8;
        }
    }
    ctx->pc = 0x1C63E0u;
label_1c63e0:
    // 0x1c63e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c63e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c63e4: 0x0  nop
    ctx->pc = 0x1c63e4u;
    // NOP
label_1c63e8:
    // 0x1c63e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c63ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c63ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1c63f0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C63F0u;
    SET_GPR_U32(ctx, 31, 0x1C63F8u);
    ctx->pc = 0x1C63F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C63F0u;
    // 0x1c63f4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C63F0u, 0x1C63F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C63F8u;
label_1c63f8:
    // 0x1c63f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c63fc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c63fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c6400: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6404: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6404u;
    SET_GPR_U32(ctx, 31, 0x1C640Cu);
    ctx->pc = 0x1C6408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6404u;
    // 0x1c6408: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6404u, 0x1C640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C640Cu;
label_1c640c:
    // 0x1c640c: 0x0  nop
    ctx->pc = 0x1c640cu;
    // NOP
label_1c6410:
    // 0x1c6410: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c6410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c6414: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1c6414u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c6418: 0x24030203  addiu       $v1, $zero, 0x203
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x1c641c: 0x14830082  bne         $a0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1C641Cu;
    {
        const bool branch_taken_0x1c641c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C641Cu;
        // 0x1c6420: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c641c) {
            ctx->pc = 0x1C6628u;
            goto label_1c6628;
        }
    }
    ctx->pc = 0x1C6424u;
    // 0x1c6424: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C6424u;
    SET_GPR_U32(ctx, 31, 0x1C642Cu);
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C6424u, 0x1C642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C642Cu;
label_1c642c:
    // 0x1c642c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c642cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c6430: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C6430u;
    SET_GPR_U32(ctx, 31, 0x1C6438u);
    ctx->pc = 0x1C6434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6430u;
    // 0x1c6434: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C6430u, 0x1C6438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6438u;
label_1c6438:
    // 0x1c6438: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c643c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C643Cu;
    SET_GPR_U32(ctx, 31, 0x1C6444u);
    ctx->pc = 0x1C6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C643Cu;
    // 0x1c6440: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C643Cu, 0x1C6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6444u;
label_1c6444:
    // 0x1c6444: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6448: 0x0  nop
    ctx->pc = 0x1c6448u;
    // NOP
    // 0x1c644c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c644cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6450: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6450u;
    {
        const bool branch_taken_0x1c6450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6450u;
        // 0x1c6454: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6450) {
            ctx->pc = 0x1C645Cu;
            goto label_1c645c;
        }
    }
    ctx->pc = 0x1C6458u;
    // 0x1c6458: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c6458u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c645c:
    // 0x1c645c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c645cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c6460: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c6460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c6464: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c6464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6468: 0x0  nop
    ctx->pc = 0x1c6468u;
    // NOP
    // 0x1c646c: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x1c646cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6470: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x1C6470u;
    {
        const bool branch_taken_0x1c6470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6470) {
            ctx->pc = 0x1C6628u;
            goto label_1c6628;
        }
    }
    ctx->pc = 0x1C6478u;
    // 0x1c6478: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c647c: 0x0  nop
    ctx->pc = 0x1c647cu;
    // NOP
    // 0x1c6480: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6484: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6484u;
    {
        const bool branch_taken_0x1c6484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6484u;
        // 0x1c6488: 0x3c02bdcc  lui         $v0, 0xBDCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6484) {
            ctx->pc = 0x1C6494u;
            goto label_1c6494;
        }
    }
    ctx->pc = 0x1C648Cu;
    // 0x1c648c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c6490: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c6490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c6494:
    // 0x1c6494: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c6498: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6498u;
    SET_GPR_U32(ctx, 31, 0x1C64A0u);
    ctx->pc = 0x1C649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6498u;
    // 0x1c649c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6498u, 0x1C64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64A0u;
label_1c64a0:
    // 0x1c64a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c64a4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1c64a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c64a8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c64ac: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C64ACu;
    SET_GPR_U32(ctx, 31, 0x1C64B4u);
    ctx->pc = 0x1C64B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64ACu;
    // 0x1c64b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C64ACu, 0x1C64B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64B4u;
label_1c64b4:
    // 0x1c64b4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1C64B4u;
    {
        const bool branch_taken_0x1c64b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c64b4) {
            ctx->pc = 0x1C6628u;
            goto label_1c6628;
        }
    }
    ctx->pc = 0x1C64BCu;
    // 0x1c64bc: 0x0  nop
    ctx->pc = 0x1c64bcu;
    // NOP
label_1c64c0:
    // 0x1c64c0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c64c4: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c64c8: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c64c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c64cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c64d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c64d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c64d4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c64d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c64d8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C64D8u;
    SET_GPR_U32(ctx, 31, 0x1C64E0u);
    ctx->pc = 0x1C64DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64D8u;
    // 0x1c64dc: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C64D8u, 0x1C64E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64E0u;
label_1c64e0:
    // 0x1c64e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c64e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c64e4: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C64E4u;
    SET_GPR_U32(ctx, 31, 0x1C64ECu);
    ctx->pc = 0x1C64E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64E4u;
    // 0x1c64e8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C64E4u, 0x1C64ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64ECu;
label_1c64ec:
    // 0x1c64ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c64f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c64f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c64f4: 0x0  nop
    ctx->pc = 0x1c64f4u;
    // NOP
    // 0x1c64f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c64f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c64fc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C64FCu;
    {
        const bool branch_taken_0x1c64fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64FCu;
        // 0x1c6500: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64fc) {
            ctx->pc = 0x1C6528u;
            goto label_1c6528;
        }
    }
    ctx->pc = 0x1C6504u;
    // 0x1c6504: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c6504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c6508: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6508u;
    SET_GPR_U32(ctx, 31, 0x1C6510u);
    ctx->pc = 0x1C650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6508u;
    // 0x1c650c: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6508u, 0x1C6510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6510u;
label_1c6510:
    // 0x1c6510: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6514: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1c6514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c6518: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c651c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C651Cu;
    SET_GPR_U32(ctx, 31, 0x1C6524u);
    ctx->pc = 0x1C6520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C651Cu;
    // 0x1c6520: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C651Cu, 0x1C6524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6524u;
label_1c6524:
    // 0x1c6524: 0x0  nop
    ctx->pc = 0x1c6524u;
    // NOP
label_1c6528:
    // 0x1c6528: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c652c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C652Cu;
    SET_GPR_U32(ctx, 31, 0x1C6534u);
    ctx->pc = 0x1C6530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C652Cu;
    // 0x1c6530: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C652Cu, 0x1C6534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6534u;
label_1c6534:
    // 0x1c6534: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c6534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c6538: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c6538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c653c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c653cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6540: 0x0  nop
    ctx->pc = 0x1c6540u;
    // NOP
    // 0x1c6544: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6548: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x1C6548u;
    {
        const bool branch_taken_0x1c6548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6548u;
        // 0x1c654c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6548) {
            ctx->pc = 0x1C6628u;
            goto label_1c6628;
        }
    }
    ctx->pc = 0x1C6550u;
    // 0x1c6550: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c6550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c6554: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C6554u;
    SET_GPR_U32(ctx, 31, 0x1C655Cu);
    ctx->pc = 0x1C6558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6554u;
    // 0x1c6558: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C6554u, 0x1C655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C655Cu;
label_1c655c:
    // 0x1c655c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6560: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1c6560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c6564: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c6564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6568: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6568u;
    SET_GPR_U32(ctx, 31, 0x1C6570u);
    ctx->pc = 0x1C656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6568u;
    // 0x1c656c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6568u, 0x1C6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6570u;
label_1c6570:
    // 0x1c6570: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1C6570u;
    {
        const bool branch_taken_0x1c6570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6570) {
            ctx->pc = 0x1C6628u;
            goto label_1c6628;
        }
    }
    ctx->pc = 0x1C6578u;
label_1c6578:
    // 0x1c6578: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c6578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c657c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c6580: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c6580u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c6584: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c6588: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c6588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c658c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6590: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C6590u;
    SET_GPR_U32(ctx, 31, 0x1C6598u);
    ctx->pc = 0x1C6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6590u;
    // 0x1c6594: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C6590u, 0x1C6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6598u;
label_1c6598:
    // 0x1c6598: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c6598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c659c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C659Cu;
    SET_GPR_U32(ctx, 31, 0x1C65A4u);
    ctx->pc = 0x1C65A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C659Cu;
    // 0x1c65a0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C659Cu, 0x1C65A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65A4u;
label_1c65a4:
    // 0x1c65a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c65a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c65a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c65ac: 0x0  nop
    ctx->pc = 0x1c65acu;
    // NOP
    // 0x1c65b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c65b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c65b4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C65B4u;
    {
        const bool branch_taken_0x1c65b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65B4u;
        // 0x1c65b8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65b4) {
            ctx->pc = 0x1C65E0u;
            goto label_1c65e0;
        }
    }
    ctx->pc = 0x1C65BCu;
    // 0x1c65bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c65bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c65c0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C65C0u;
    SET_GPR_U32(ctx, 31, 0x1C65C8u);
    ctx->pc = 0x1C65C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65C0u;
    // 0x1c65c4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C65C0u, 0x1C65C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65C8u;
label_1c65c8:
    // 0x1c65c8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c65cc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c65ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c65d0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c65d4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C65D4u;
    SET_GPR_U32(ctx, 31, 0x1C65DCu);
    ctx->pc = 0x1C65D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65D4u;
    // 0x1c65d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C65D4u, 0x1C65DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65DCu;
label_1c65dc:
    // 0x1c65dc: 0x0  nop
    ctx->pc = 0x1c65dcu;
    // NOP
label_1c65e0:
    // 0x1c65e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c65e4: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C65E4u;
    SET_GPR_U32(ctx, 31, 0x1C65ECu);
    ctx->pc = 0x1C65E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65E4u;
    // 0x1c65e8: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C65E4u, 0x1C65ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65ECu;
label_1c65ec:
    // 0x1c65ec: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x1c65ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x1c65f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c65f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c65f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c65f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c65f8: 0x0  nop
    ctx->pc = 0x1c65f8u;
    // NOP
    // 0x1c65fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c65fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6600: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6600u;
    {
        const bool branch_taken_0x1c6600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6600u;
        // 0x1c6604: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6600) {
            ctx->pc = 0x1C6628u;
            goto label_1c6628;
        }
    }
    ctx->pc = 0x1C6608u;
    // 0x1c6608: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c6608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c660c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C660Cu;
    SET_GPR_U32(ctx, 31, 0x1C6614u);
    ctx->pc = 0x1C6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C660Cu;
    // 0x1c6610: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C660Cu, 0x1C6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6614u;
label_1c6614:
    // 0x1c6614: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c6614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6618: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c6618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c661c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c6620: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C6620u;
    SET_GPR_U32(ctx, 31, 0x1C6628u);
    ctx->pc = 0x1C6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6620u;
    // 0x1c6624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C6620u, 0x1C6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6628u;
label_1c6628:
    // 0x1c6628: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c6628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c662c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c662cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6630: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c6630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c663c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C663Cu;
        // 0x1c6640: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6644u;
}
