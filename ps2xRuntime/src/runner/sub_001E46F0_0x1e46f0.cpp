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

// Function: sub_001E46F0
// Address: 0x1e46f0 - 0x1e4938
void sub_001E46F0_0x1e46f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E46F0_0x1e46f0");
#endif

    switch (ctx->pc) {
        case 0x1e4758u: goto label_1e4758;
        case 0x1e4770u: goto label_1e4770;
        case 0x1e4784u: goto label_1e4784;
        case 0x1e4798u: goto label_1e4798;
        case 0x1e47c0u: goto label_1e47c0;
        case 0x1e4884u: goto label_1e4884;
        case 0x1e48a8u: goto label_1e48a8;
        case 0x1e48dcu: goto label_1e48dc;
        case 0x1e48e8u: goto label_1e48e8;
        case 0x1e4900u: goto label_1e4900;
        default: break;
    }

    ctx->pc = 0x1e46f0u;

    // 0x1e46f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1e46f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1e46f4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e46f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e46f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e46fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e46fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e4700: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e4700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e4704: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1e4704u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4708: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e4708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e470c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e4710: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e4710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e4714: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e4714u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4718: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e471c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e4720: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4724: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4728: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e4728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e472c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e472cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4730: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4730u;
    {
        const bool branch_taken_0x1e4730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4730u;
        // 0x1e4734: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4730) {
            ctx->pc = 0x1E4740u;
            goto label_1e4740;
        }
    }
    ctx->pc = 0x1E4738u;
    // 0x1e4738: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1E4738u;
    {
        const bool branch_taken_0x1e4738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4738u;
        // 0x1e473c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4738) {
            ctx->pc = 0x1E4908u;
            goto label_1e4908;
        }
    }
    ctx->pc = 0x1E4740u;
label_1e4740:
    // 0x1e4740: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4740u;
    {
        const bool branch_taken_0x1e4740 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4740u;
        // 0x1e4744: 0x3c0b82d  daddu       $s7, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4740) {
            ctx->pc = 0x1E4750u;
            goto label_1e4750;
        }
    }
    ctx->pc = 0x1E4748u;
    // 0x1e4748: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4748u;
    {
        const bool branch_taken_0x1e4748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4748u;
        // 0x1e474c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4748) {
            ctx->pc = 0x1E4760u;
            goto label_1e4760;
        }
    }
    ctx->pc = 0x1E4750u;
label_1e4750:
    // 0x1e4750: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1E4750u;
    SET_GPR_U32(ctx, 31, 0x1E4758u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1E4750u, 0x1E4758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4758u;
label_1e4758:
    // 0x1e4758: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e4758u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e475c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e475cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4760:
    // 0x1e4760: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4764: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e4764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e4768: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E4768u;
    SET_GPR_U32(ctx, 31, 0x1E4770u);
    ctx->pc = 0x1E476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4768u;
    // 0x1e476c: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E4768u, 0x1E4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4770u;
label_1e4770:
    // 0x1e4770: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1e4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e4774: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x1e4774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1e4778: 0x9045000f  lbu         $a1, 0xF($v0)
    ctx->pc = 0x1e4778u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x1e477c: 0xc0785f0  jal         func_1E17C0
    ctx->pc = 0x1E477Cu;
    SET_GPR_U32(ctx, 31, 0x1E4784u);
    ctx->pc = 0x1E4780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E477Cu;
    // 0x1e4780: 0x2e32021  addu        $a0, $s7, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E17C0u, 0x1E477Cu, 0x1E4784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4784u;
label_1e4784:
    // 0x1e4784: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1e4784u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1e4788: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1e4788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1e478c: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x1e478cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1e4790: 0xc07573c  jal         func_1D5CF0
    ctx->pc = 0x1E4790u;
    SET_GPR_U32(ctx, 31, 0x1E4798u);
    ctx->pc = 0x1E4794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4790u;
    // 0x1e4794: 0x2e22021  addu        $a0, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CF0u, 0x1E4790u, 0x1E4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4798u;
label_1e4798:
    // 0x1e4798: 0x8ea50030  lw          $a1, 0x30($s5)
    ctx->pc = 0x1e4798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e479c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1e479cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1e47a0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e47a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e47a4: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E47A4u;
    {
        const bool branch_taken_0x1e47a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47A4u;
        // 0x1e47a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47a4) {
            ctx->pc = 0x1E48A0u;
            goto label_1e48a0;
        }
    }
    ctx->pc = 0x1E47ACu;
    // 0x1e47ac: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x1e47acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e47b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e47b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47b4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1e47b4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1e47b8: 0x27b200bc  addiu       $s2, $sp, 0xBC
    ctx->pc = 0x1e47b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1e47bc: 0x27b100cc  addiu       $s1, $sp, 0xCC
    ctx->pc = 0x1e47bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_1e47c0:
    // 0x1e47c0: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x1e47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e47c4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e47c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e47cc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e47ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e47d0: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1E47D0u;
    {
        const bool branch_taken_0x1e47d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e47d0) {
            ctx->pc = 0x1E4888u;
            goto label_1e4888;
        }
    }
    ctx->pc = 0x1E47D8u;
    // 0x1e47d8: 0x78a30050  lq          $v1, 0x50($a1)
    ctx->pc = 0x1e47d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1e47dc: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1e47dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1e47e0: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1e47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e47e4: 0x78640060  lq          $a0, 0x60($v1)
    ctx->pc = 0x1e47e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1e47e8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1e47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e47ec: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1e47ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1e47f0: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x1e47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e47f4: 0x9083000e  lbu         $v1, 0xE($a0)
    ctx->pc = 0x1e47f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1e47f8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e47f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e47fc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E47FCu;
    {
        const bool branch_taken_0x1e47fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e47fc) {
            ctx->pc = 0x1E4848u;
            goto label_1e4848;
        }
    }
    ctx->pc = 0x1E4804u;
    // 0x1e4804: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x1e4804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4808: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x1e4808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e480c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e480cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e4810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e4810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e4814: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e4814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e4818: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e4818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e481c: 0x0  nop
    ctx->pc = 0x1e481cu;
    // NOP
    // 0x1e4820: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e4820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1e4824: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1e4824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e4828: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x1e4828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e482c: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x1e482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4830: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e4830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e4834: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e4834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e4838: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e4838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e483c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e483cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e4840: 0x0  nop
    ctx->pc = 0x1e4840u;
    // NOP
    // 0x1e4844: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e4844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1e4848:
    // 0x1e4848: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e4848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e484c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1e484cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1e4850: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e4850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e4854: 0x24846a20  addiu       $a0, $a0, 0x6A20
    ctx->pc = 0x1e4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    // 0x1e4858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e485c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x1e485cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e4860: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e4860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e4864: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e4864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1e4868: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e4868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e486c: 0x70701818  mult1       $v1, $v1, $s0
    ctx->pc = 0x1e486cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e4870: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e4870u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e4874: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e4874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1e4878: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x1e4878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1e487c: 0xc07575c  jal         func_1D5D70
    ctx->pc = 0x1E487Cu;
    SET_GPR_U32(ctx, 31, 0x1E4884u);
    ctx->pc = 0x1E4880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E487Cu;
    // 0x1e4880: 0x24480038  addiu       $t0, $v0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D70u, 0x1E487Cu, 0x1E4884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4884u;
label_1e4884:
    // 0x1e4884: 0x0  nop
    ctx->pc = 0x1e4884u;
    // NOP
label_1e4888:
    // 0x1e4888: 0x8ea50030  lw          $a1, 0x30($s5)
    ctx->pc = 0x1e4888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e488c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e4890: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1e4890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1e4894: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e4894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e4898: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1E4898u;
    {
        const bool branch_taken_0x1e4898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4898u;
        // 0x1e489c: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4898) {
            ctx->pc = 0x1E47C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e47c0;
        }
    }
    ctx->pc = 0x1E48A0u;
label_1e48a0:
    // 0x1e48a0: 0xc075740  jal         func_1D5D00
    ctx->pc = 0x1E48A0u;
    SET_GPR_U32(ctx, 31, 0x1E48A8u);
    ctx->pc = 0x1D5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D00u, 0x1E48A0u, 0x1E48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E48A8u;
label_1e48a8:
    // 0x1e48a8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e48a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e48ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e48acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e48b0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1e48b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1e48b4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e48b8: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E48B8u;
    {
        const bool branch_taken_0x1e48b8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48B8u;
        // 0x1e48bc: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48b8) {
            ctx->pc = 0x1E48C8u;
            goto label_1e48c8;
        }
    }
    ctx->pc = 0x1E48C0u;
    // 0x1e48c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E48C0u;
    {
        const bool branch_taken_0x1e48c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48C0u;
        // 0x1e48c4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48c0) {
            ctx->pc = 0x1E4908u;
            goto label_1e4908;
        }
    }
    ctx->pc = 0x1E48C8u;
label_1e48c8:
    // 0x1e48c8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e48c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e48cc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e48d0: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e48d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e48d4: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1E48D4u;
    SET_GPR_U32(ctx, 31, 0x1E48DCu);
    ctx->pc = 0x1E48D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E48D4u;
    // 0x1e48d8: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1E48D4u, 0x1E48DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E48DCu;
label_1e48dc:
    // 0x1e48dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e48dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e48e0: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1E48E0u;
    SET_GPR_U32(ctx, 31, 0x1E48E8u);
    ctx->pc = 0x1E48E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E48E0u;
    // 0x1e48e4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1E48E0u, 0x1E48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E48E8u;
label_1e48e8:
    // 0x1e48e8: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1e48e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1e48ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e48ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e48f0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e48f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e48f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e48f8: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1E48F8u;
    SET_GPR_U32(ctx, 31, 0x1E4900u);
    ctx->pc = 0x1E48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E48F8u;
    // 0x1e48fc: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1E48F8u, 0x1E4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4900u;
label_1e4900:
    // 0x1e4900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e4900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4904: 0x0  nop
    ctx->pc = 0x1e4904u;
    // NOP
label_1e4908:
    // 0x1e4908: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e4908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e490c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e490cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e4910: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e4910u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4914: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e4914u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4918: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4918u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e491c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e491cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4920: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e492c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e492cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4930: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4930u;
        // 0x1e4934: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4938u;
}
