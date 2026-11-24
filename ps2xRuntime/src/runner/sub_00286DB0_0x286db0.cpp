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

// Function: sub_00286DB0
// Address: 0x286db0 - 0x286ff0
void sub_00286DB0_0x286db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286DB0_0x286db0");
#endif

    switch (ctx->pc) {
        case 0x286e20u: goto label_286e20;
        case 0x286e50u: goto label_286e50;
        case 0x286e94u: goto label_286e94;
        case 0x286eecu: goto label_286eec;
        case 0x286f70u: goto label_286f70;
        default: break;
    }

    ctx->pc = 0x286db0u;

    // 0x286db0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x286db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x286db4: 0x3c024475  lui         $v0, 0x4475
    ctx->pc = 0x286db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17525 << 16));
    // 0x286db8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x286db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x286dbc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x286dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x286dc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x286dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x286dc4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x286dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x286dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x286dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x286dcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x286dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x286dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x286dd4: 0x24636450  addiu       $v1, $v1, 0x6450
    ctx->pc = 0x286dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25680));
    // 0x286dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x286dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x286ddc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x286ddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286de0: 0x78245c10  lq          $a0, 0x5C10($at)
    ctx->pc = 0x286de0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x665C10u));
    // 0x286de4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x286de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286de8: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x286de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x286dec: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x286decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x286df0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286df4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x286df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286df8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286dfc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x286dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286e00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x286e00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x286e04: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x286e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x286e08: 0x90c2001c  lbu         $v0, 0x1C($a2)
    ctx->pc = 0x286e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x286e0c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x286e0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286e10: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x286E10u;
    {
        const bool branch_taken_0x286e10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E10u;
        // 0x286e14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e10) {
            ctx->pc = 0x286FD0u;
            goto label_286fd0;
        }
    }
    ctx->pc = 0x286E18u;
    // 0x286e18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x286e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e1c: 0x0  nop
    ctx->pc = 0x286e1cu;
    // NOP
label_286e20:
    // 0x286e20: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x286e20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286e24: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x286e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x286e28: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x286E28u;
    {
        const bool branch_taken_0x286e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286e28) {
            ctx->pc = 0x286FB8u;
            goto label_286fb8;
        }
    }
    ctx->pc = 0x286E30u;
    // 0x286e30: 0xc66d0044  lwc1        $f13, 0x44($s3)
    ctx->pc = 0x286e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x286e34: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x286e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x286e38: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x286e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x286e3c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x286e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x286e40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x286e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286e44: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x286e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x286e48: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x286E48u;
    SET_GPR_U32(ctx, 31, 0x286E50u);
    ctx->pc = 0x286E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E48u;
    // 0x286e4c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x286E48u, 0x286E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E50u;
label_286e50:
    // 0x286e50: 0x9262001f  lbu         $v0, 0x1F($s3)
    ctx->pc = 0x286e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 31)));
    // 0x286e54: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x286e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x286e58: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x286E58u;
    {
        const bool branch_taken_0x286e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286e58) {
            ctx->pc = 0x286F18u;
            goto label_286f18;
        }
    }
    ctx->pc = 0x286E60u;
    // 0x286e60: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x286e60u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x286e64: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x286e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286e68: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x286e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x286e6c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x286E6Cu;
    {
        const bool branch_taken_0x286e6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x286e6c) {
            ctx->pc = 0x286EB8u;
            goto label_286eb8;
        }
    }
    ctx->pc = 0x286E74u;
    // 0x286e74: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x286E74u;
    {
        const bool branch_taken_0x286e74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E74u;
        // 0x286e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e74) {
            ctx->pc = 0x286E8Cu;
            goto label_286e8c;
        }
    }
    ctx->pc = 0x286E7Cu;
    // 0x286e7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x286e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x286e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286E84u;
    {
        const bool branch_taken_0x286e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E84u;
        // 0x286e88: 0x3c024380  lui         $v0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e84) {
            ctx->pc = 0x286E98u;
            goto label_286e98;
        }
    }
    ctx->pc = 0x286E8Cu;
label_286e8c:
    // 0x286e8c: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x286E8Cu;
    SET_GPR_U32(ctx, 31, 0x286E94u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x286E8Cu, 0x286E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E94u;
label_286e94:
    // 0x286e94: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x286e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_286e98:
    // 0x286e98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x286e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286e9c: 0x0  nop
    ctx->pc = 0x286e9cu;
    // NOP
    // 0x286ea0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x286ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286ea4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x286ea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x286ea8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x286ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x286eac: 0x0  nop
    ctx->pc = 0x286eacu;
    // NOP
    // 0x286eb0: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x286eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x286eb4: 0x0  nop
    ctx->pc = 0x286eb4u;
    // NOP
label_286eb8:
    // 0x286eb8: 0x8605000a  lh          $a1, 0xA($s0)
    ctx->pc = 0x286eb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x286ebc: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x286ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286ec0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x286ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x286ec4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x286EC4u;
    {
        const bool branch_taken_0x286ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286ec4) {
            ctx->pc = 0x286F18u;
            goto label_286f18;
        }
    }
    ctx->pc = 0x286ECCu;
    // 0x286ecc: 0x8606000c  lh          $a2, 0xC($s0)
    ctx->pc = 0x286eccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x286ed0: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x286ED0u;
    {
        const bool branch_taken_0x286ed0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x286ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286ED0u;
        // 0x286ed4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ed0) {
            ctx->pc = 0x286EE4u;
            goto label_286ee4;
        }
    }
    ctx->pc = 0x286ED8u;
    // 0x286ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286edc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286EDCu;
    {
        const bool branch_taken_0x286edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EDCu;
        // 0x286ee0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286edc) {
            ctx->pc = 0x286EF0u;
            goto label_286ef0;
        }
    }
    ctx->pc = 0x286EE4u;
label_286ee4:
    // 0x286ee4: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x286EE4u;
    SET_GPR_U32(ctx, 31, 0x286EECu);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x286EE4u, 0x286EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EECu;
label_286eec:
    // 0x286eec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x286eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_286ef0:
    // 0x286ef0: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x286ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x286ef4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x286ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286ef8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x286ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x286efc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x286efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x286f00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x286f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x286f04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x286f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x286f08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x286f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x286f0c: 0x0  nop
    ctx->pc = 0x286f0cu;
    // NOP
    // 0x286f10: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x286f10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x286f14: 0x0  nop
    ctx->pc = 0x286f14u;
    // NOP
label_286f18:
    // 0x286f18: 0xc6620024  lwc1        $f2, 0x24($s3)
    ctx->pc = 0x286f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286f1c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x286f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286f20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x286f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286f24: 0x0  nop
    ctx->pc = 0x286f24u;
    // NOP
    // 0x286f28: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x286f28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x286f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286f30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x286F30u;
    {
        const bool branch_taken_0x286f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F30u;
        // 0x286f34: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f30) {
            ctx->pc = 0x286F40u;
            goto label_286f40;
        }
    }
    ctx->pc = 0x286F38u;
    // 0x286f38: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x286f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x286f3c: 0x0  nop
    ctx->pc = 0x286f3cu;
    // NOP
label_286f40:
    // 0x286f40: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x286f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286f44: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x286f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286f48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x286f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286f4c: 0x0  nop
    ctx->pc = 0x286f4cu;
    // NOP
    // 0x286f50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x286f50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x286f54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286f58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x286F58u;
    {
        const bool branch_taken_0x286f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F58u;
        // 0x286f5c: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f58) {
            ctx->pc = 0x286F68u;
            goto label_286f68;
        }
    }
    ctx->pc = 0x286F60u;
    // 0x286f60: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x286f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x286f64: 0x0  nop
    ctx->pc = 0x286f64u;
    // NOP
label_286f68:
    // 0x286f68: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x286F68u;
    SET_GPR_U32(ctx, 31, 0x286F70u);
    ctx->pc = 0x286F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F68u;
    // 0x286f6c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x286F68u, 0x286F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F70u;
label_286f70:
    // 0x286f70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286F70u;
    {
        const bool branch_taken_0x286f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286f70) {
            ctx->pc = 0x286F88u;
            goto label_286f88;
        }
    }
    ctx->pc = 0x286F78u;
    // 0x286f78: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x286f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x286f7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x286F7Cu;
    {
        const bool branch_taken_0x286f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F7Cu;
        // 0x286f80: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f7c) {
            ctx->pc = 0x286FB8u;
            goto label_286fb8;
        }
    }
    ctx->pc = 0x286F84u;
    // 0x286f84: 0x0  nop
    ctx->pc = 0x286f84u;
    // NOP
label_286f88:
    // 0x286f88: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x286f88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286f8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286f90: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x286f90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x286f94: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x286f94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286f98: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x286f98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x286f9c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x286f9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x286fa0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x286FA0u;
    {
        const bool branch_taken_0x286fa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FA0u;
        // 0x286fa4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fa0) {
            ctx->pc = 0x286FB0u;
            goto label_286fb0;
        }
    }
    ctx->pc = 0x286FA8u;
    // 0x286fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286FA8u;
    {
        const bool branch_taken_0x286fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FA8u;
        // 0x286fac: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fa8) {
            ctx->pc = 0x286FB8u;
            goto label_286fb8;
        }
    }
    ctx->pc = 0x286FB0u;
label_286fb0:
    // 0x286fb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x286fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x286fb4: 0x0  nop
    ctx->pc = 0x286fb4u;
    // NOP
label_286fb8:
    // 0x286fb8: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x286fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x286fbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x286fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x286fc0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x286fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286fc4: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x286FC4u;
    {
        const bool branch_taken_0x286fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FC4u;
        // 0x286fc8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fc4) {
            ctx->pc = 0x286E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286e20;
        }
    }
    ctx->pc = 0x286FCCu;
    // 0x286fcc: 0x0  nop
    ctx->pc = 0x286fccu;
    // NOP
label_286fd0:
    // 0x286fd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x286fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x286fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286fd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x286fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286fdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x286fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x286fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x286fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x286FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FE8u;
        // 0x286fec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286FF0u;
}
