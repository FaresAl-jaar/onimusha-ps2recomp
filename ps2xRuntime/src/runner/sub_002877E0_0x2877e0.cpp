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

// Function: sub_002877E0
// Address: 0x2877e0 - 0x287a20
void sub_002877E0_0x2877e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002877E0_0x2877e0");
#endif

    switch (ctx->pc) {
        case 0x287850u: goto label_287850;
        case 0x287880u: goto label_287880;
        case 0x2878c4u: goto label_2878c4;
        case 0x28791cu: goto label_28791c;
        case 0x2879a0u: goto label_2879a0;
        default: break;
    }

    ctx->pc = 0x2877e0u;

    // 0x2877e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2877e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2877e4: 0x3c024475  lui         $v0, 0x4475
    ctx->pc = 0x2877e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17525 << 16));
    // 0x2877e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2877e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2877ec: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2877ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2877f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2877f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2877f4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2877f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2877f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2877f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2877fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2877fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x287800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x287804: 0x24636450  addiu       $v1, $v1, 0x6450
    ctx->pc = 0x287804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25680));
    // 0x287808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x287808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28780c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28780cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287810: 0x78245c10  lq          $a0, 0x5C10($at)
    ctx->pc = 0x287810u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x665C10u));
    // 0x287814: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x287814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287818: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x287818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x28781c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x28781cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x287820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x287820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x287824: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x287824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x287828: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x287828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28782c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28782cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x287830: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x287830u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x287834: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x287834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x287838: 0x90c2001c  lbu         $v0, 0x1C($a2)
    ctx->pc = 0x287838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x28783c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28783cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x287840: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x287840u;
    {
        const bool branch_taken_0x287840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x287844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287840u;
        // 0x287844: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287840) {
            ctx->pc = 0x287A00u;
            goto label_287a00;
        }
    }
    ctx->pc = 0x287848u;
    // 0x287848: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x287848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28784c: 0x0  nop
    ctx->pc = 0x28784cu;
    // NOP
label_287850:
    // 0x287850: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x287850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x287854: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x287854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x287858: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x287858u;
    {
        const bool branch_taken_0x287858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x287858) {
            ctx->pc = 0x2879E8u;
            goto label_2879e8;
        }
    }
    ctx->pc = 0x287860u;
    // 0x287860: 0xc66d003c  lwc1        $f13, 0x3C($s3)
    ctx->pc = 0x287860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x287864: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x287864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x287868: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x287868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x28786c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x28786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x287870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x287870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287874: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x287874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x287878: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x287878u;
    SET_GPR_U32(ctx, 31, 0x287880u);
    ctx->pc = 0x28787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287878u;
    // 0x28787c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x287878u, 0x287880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287880u;
label_287880:
    // 0x287880: 0x9262001f  lbu         $v0, 0x1F($s3)
    ctx->pc = 0x287880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 31)));
    // 0x287884: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x287884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x287888: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x287888u;
    {
        const bool branch_taken_0x287888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287888) {
            ctx->pc = 0x287948u;
            goto label_287948;
        }
    }
    ctx->pc = 0x287890u;
    // 0x287890: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x287890u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x287894: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x287894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x287898: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x287898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28789c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x28789Cu;
    {
        const bool branch_taken_0x28789c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28789c) {
            ctx->pc = 0x2878E8u;
            goto label_2878e8;
        }
    }
    ctx->pc = 0x2878A4u;
    // 0x2878a4: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2878A4u;
    {
        const bool branch_taken_0x2878a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2878A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878A4u;
        // 0x2878a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878a4) {
            ctx->pc = 0x2878BCu;
            goto label_2878bc;
        }
    }
    ctx->pc = 0x2878ACu;
    // 0x2878ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2878acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2878b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2878b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2878b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2878B4u;
    {
        const bool branch_taken_0x2878b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878B4u;
        // 0x2878b8: 0x3c024380  lui         $v0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878b4) {
            ctx->pc = 0x2878C8u;
            goto label_2878c8;
        }
    }
    ctx->pc = 0x2878BCu;
label_2878bc:
    // 0x2878bc: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x2878BCu;
    SET_GPR_U32(ctx, 31, 0x2878C4u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x2878BCu, 0x2878C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878C4u;
label_2878c4:
    // 0x2878c4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2878c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_2878c8:
    // 0x2878c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2878c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2878cc: 0x0  nop
    ctx->pc = 0x2878ccu;
    // NOP
    // 0x2878d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2878d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2878d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2878d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2878d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2878d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2878dc: 0x0  nop
    ctx->pc = 0x2878dcu;
    // NOP
    // 0x2878e0: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x2878e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2878e4: 0x0  nop
    ctx->pc = 0x2878e4u;
    // NOP
label_2878e8:
    // 0x2878e8: 0x8605000a  lh          $a1, 0xA($s0)
    ctx->pc = 0x2878e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2878ec: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x2878ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2878f0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2878f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2878f4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2878F4u;
    {
        const bool branch_taken_0x2878f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2878f4) {
            ctx->pc = 0x287948u;
            goto label_287948;
        }
    }
    ctx->pc = 0x2878FCu;
    // 0x2878fc: 0x8606000c  lh          $a2, 0xC($s0)
    ctx->pc = 0x2878fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x287900: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x287900u;
    {
        const bool branch_taken_0x287900 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x287904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287900u;
        // 0x287904: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287900) {
            ctx->pc = 0x287914u;
            goto label_287914;
        }
    }
    ctx->pc = 0x287908u;
    // 0x287908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28790c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28790Cu;
    {
        const bool branch_taken_0x28790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28790Cu;
        // 0x287910: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28790c) {
            ctx->pc = 0x287920u;
            goto label_287920;
        }
    }
    ctx->pc = 0x287914u;
label_287914:
    // 0x287914: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x287914u;
    SET_GPR_U32(ctx, 31, 0x28791Cu);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x287914u, 0x28791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28791Cu;
label_28791c:
    // 0x28791c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_287920:
    // 0x287920: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x287920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x287924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x287924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287928: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x287928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28792c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28792cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x287930: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x287930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x287934: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x287938: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x287938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28793c: 0x0  nop
    ctx->pc = 0x28793cu;
    // NOP
    // 0x287940: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x287940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x287944: 0x0  nop
    ctx->pc = 0x287944u;
    // NOP
label_287948:
    // 0x287948: 0xc6620024  lwc1        $f2, 0x24($s3)
    ctx->pc = 0x287948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28794c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x28794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287954: 0x0  nop
    ctx->pc = 0x287954u;
    // NOP
    // 0x287958: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x287958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28795c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28795cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287960: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x287960u;
    {
        const bool branch_taken_0x287960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287960u;
        // 0x287964: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287960) {
            ctx->pc = 0x287970u;
            goto label_287970;
        }
    }
    ctx->pc = 0x287968u;
    // 0x287968: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x287968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x28796c: 0x0  nop
    ctx->pc = 0x28796cu;
    // NOP
label_287970:
    // 0x287970: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x287970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287974: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x287974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28797c: 0x0  nop
    ctx->pc = 0x28797cu;
    // NOP
    // 0x287980: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x287980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x287984: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x287984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287988: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x287988u;
    {
        const bool branch_taken_0x287988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287988u;
        // 0x28798c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287988) {
            ctx->pc = 0x287998u;
            goto label_287998;
        }
    }
    ctx->pc = 0x287990u;
    // 0x287990: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x287990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x287994: 0x0  nop
    ctx->pc = 0x287994u;
    // NOP
label_287998:
    // 0x287998: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x287998u;
    SET_GPR_U32(ctx, 31, 0x2879A0u);
    ctx->pc = 0x28799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287998u;
    // 0x28799c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x287998u, 0x2879A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879A0u;
label_2879a0:
    // 0x2879a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2879A0u;
    {
        const bool branch_taken_0x2879a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2879a0) {
            ctx->pc = 0x2879B8u;
            goto label_2879b8;
        }
    }
    ctx->pc = 0x2879A8u;
    // 0x2879a8: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x2879a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2879ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2879ACu;
    {
        const bool branch_taken_0x2879ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879ACu;
        // 0x2879b0: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879ac) {
            ctx->pc = 0x2879E8u;
            goto label_2879e8;
        }
    }
    ctx->pc = 0x2879B4u;
    // 0x2879b4: 0x0  nop
    ctx->pc = 0x2879b4u;
    // NOP
label_2879b8:
    // 0x2879b8: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2879bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2879bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2879c0: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2879c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2879c4: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x2879c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2879c8: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x2879c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2879cc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2879ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2879d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2879D0u;
    {
        const bool branch_taken_0x2879d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879D0u;
        // 0x2879d4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879d0) {
            ctx->pc = 0x2879E0u;
            goto label_2879e0;
        }
    }
    ctx->pc = 0x2879D8u;
    // 0x2879d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2879D8u;
    {
        const bool branch_taken_0x2879d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879D8u;
        // 0x2879dc: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879d8) {
            ctx->pc = 0x2879E8u;
            goto label_2879e8;
        }
    }
    ctx->pc = 0x2879E0u;
label_2879e0:
    // 0x2879e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2879e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2879e4: 0x0  nop
    ctx->pc = 0x2879e4u;
    // NOP
label_2879e8:
    // 0x2879e8: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x2879e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2879ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2879ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2879f0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2879f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2879f4: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2879F4u;
    {
        const bool branch_taken_0x2879f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2879F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879F4u;
        // 0x2879f8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879f4) {
            ctx->pc = 0x287850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287850;
        }
    }
    ctx->pc = 0x2879FCu;
    // 0x2879fc: 0x0  nop
    ctx->pc = 0x2879fcu;
    // NOP
label_287a00:
    // 0x287a00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x287a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x287a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287a08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x287a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x287a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x287a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x287a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287a18: 0x3e00008  jr          $ra
    ctx->pc = 0x287A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A18u;
        // 0x287a1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287A20u;
}
