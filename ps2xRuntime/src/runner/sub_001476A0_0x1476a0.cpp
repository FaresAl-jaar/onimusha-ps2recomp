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

// Function: sub_001476A0
// Address: 0x1476a0 - 0x148520
void sub_001476A0_0x1476a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001476A0_0x1476a0");
#endif

    switch (ctx->pc) {
        case 0x147730u: goto label_147730;
        case 0x147740u: goto label_147740;
        case 0x147754u: goto label_147754;
        case 0x147788u: goto label_147788;
        case 0x147940u: goto label_147940;
        case 0x147a60u: goto label_147a60;
        case 0x147af0u: goto label_147af0;
        case 0x147dc8u: goto label_147dc8;
        case 0x147e60u: goto label_147e60;
        case 0x147e74u: goto label_147e74;
        case 0x147e84u: goto label_147e84;
        case 0x147ea8u: goto label_147ea8;
        case 0x147f48u: goto label_147f48;
        case 0x147f5cu: goto label_147f5c;
        case 0x147f6cu: goto label_147f6c;
        case 0x147f90u: goto label_147f90;
        case 0x1481d8u: goto label_1481d8;
        case 0x1481e8u: goto label_1481e8;
        case 0x148350u: goto label_148350;
        case 0x148360u: goto label_148360;
        case 0x14848cu: goto label_14848c;
        case 0x1484a8u: goto label_1484a8;
        default: break;
    }

    ctx->pc = 0x1476a0u;

    // 0x1476a0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1476a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1476a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1476a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1476a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1476a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1476ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1476acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1476b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1476b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1476b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1476b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1476b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1476b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1476bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1476bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1476c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1476c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1476c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1476c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1476c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1476c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1476cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1476ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1476d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1476d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1476d4: 0x9422f238  lhu         $v0, -0xDC8($at)
    ctx->pc = 0x1476d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x81F238u));
    // 0x1476d8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1476d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1476dc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1476dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1476e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1476E0u;
    {
        const bool branch_taken_0x1476e0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1476E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1476E0u;
        // 0x1476e4: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476e0) {
            ctx->pc = 0x1476F0u;
            goto label_1476f0;
        }
    }
    ctx->pc = 0x1476E8u;
    // 0x1476e8: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x1476e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1476ec: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1476ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1476f0:
    // 0x1476f0: 0xa3a200e0  sb          $v0, 0xE0($sp)
    ctx->pc = 0x1476f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 2));
    // 0x1476f4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1476f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1476f8: 0x92830028  lbu         $v1, 0x28($s4)
    ctx->pc = 0x1476f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1476fc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1476fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x147700: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x147700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x147704: 0x2442aab0  addiu       $v0, $v0, -0x5550
    ctx->pc = 0x147704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945456));
    // 0x147708: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x147708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x14770c: 0x24a56cb0  addiu       $a1, $a1, 0x6CB0
    ctx->pc = 0x14770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27824));
    // 0x147710: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x147710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x147714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x147714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x147718: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x147718u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14771c: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x147720: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x147720u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147724: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x147724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x147728: 0xc0414d0  jal         func_105340
    ctx->pc = 0x147728u;
    SET_GPR_U32(ctx, 31, 0x147730u);
    ctx->pc = 0x14772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147728u;
    // 0x14772c: 0x24c66ca0  addiu       $a2, $a2, 0x6CA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x147728u, 0x147730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147730u;
label_147730:
    // 0x147730: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x147730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x147734: 0xafa002bc  sw          $zero, 0x2BC($sp)
    ctx->pc = 0x147734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 0));
    // 0x147738: 0xc041472  jal         func_1051C8
    ctx->pc = 0x147738u;
    SET_GPR_U32(ctx, 31, 0x147740u);
    ctx->pc = 0x14773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147738u;
    // 0x14773c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x147738u, 0x147740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147740u;
label_147740:
    // 0x147740: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x147740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x147744: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x147744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x147748: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x147748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x14774c: 0xc041442  jal         func_105108
    ctx->pc = 0x14774Cu;
    SET_GPR_U32(ctx, 31, 0x147754u);
    ctx->pc = 0x147750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14774Cu;
    // 0x147750: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x14774Cu, 0x147754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147754u;
label_147754:
    // 0x147754: 0x13082b  sltu        $at, $zero, $s3
    ctx->pc = 0x147754u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x147758: 0x102000d9  beqz        $at, . + 4 + (0xD9 << 2)
    ctx->pc = 0x147758u;
    {
        const bool branch_taken_0x147758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147758u;
        // 0x14775c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147758) {
            ctx->pc = 0x147AC0u;
            goto label_147ac0;
        }
    }
    ctx->pc = 0x147760u;
    // 0x147760: 0x2e610009  sltiu       $at, $s3, 0x9
    ctx->pc = 0x147760u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x147764: 0x142000b4  bnez        $at, . + 4 + (0xB4 << 2)
    ctx->pc = 0x147764u;
    {
        const bool branch_taken_0x147764 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x147768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147764u;
        // 0x147768: 0x2665fff8  addiu       $a1, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147764) {
            ctx->pc = 0x147A38u;
            goto label_147a38;
        }
    }
    ctx->pc = 0x14776Cu;
    // 0x14776c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x147770: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x147770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x147774: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x147774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x147778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14777c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14777cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147780: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x147780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x147784: 0x0  nop
    ctx->pc = 0x147784u;
    // NOP
label_147788:
    // 0x147788: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x147788u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14778c: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14778Cu;
    {
        const bool branch_taken_0x14778c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14778Cu;
        // 0x147790: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14778c) {
            ctx->pc = 0x14779Cu;
            goto label_14779c;
        }
    }
    ctx->pc = 0x147794u;
    // 0x147794: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147794u;
    {
        const bool branch_taken_0x147794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147794u;
        // 0x147798: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147794) {
            ctx->pc = 0x1477B4u;
            goto label_1477b4;
        }
    }
    ctx->pc = 0x14779Cu;
label_14779c:
    // 0x14779c: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x14779cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1477a0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1477a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1477a4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1477a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1477a8: 0x0  nop
    ctx->pc = 0x1477a8u;
    // NOP
    // 0x1477ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1477acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1477b0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1477b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1477b4:
    // 0x1477b4: 0x0  nop
    ctx->pc = 0x1477b4u;
    // NOP
    // 0x1477b8: 0x0  nop
    ctx->pc = 0x1477b8u;
    // NOP
    // 0x1477bc: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x1477bcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1477c0: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1477c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1477c4: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x1477c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1477c8: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x1477c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1477cc: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1477ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1477d0: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x1477d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1477d4: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x1477d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1477d8: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1477d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1477dc: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1477dcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1477e0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1477E0u;
    {
        const bool branch_taken_0x1477e0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1477E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477E0u;
        // 0x1477e4: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477e0) {
            ctx->pc = 0x1477F0u;
            goto label_1477f0;
        }
    }
    ctx->pc = 0x1477E8u;
    // 0x1477e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1477E8u;
    {
        const bool branch_taken_0x1477e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1477ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1477E8u;
        // 0x1477ec: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477e8) {
            ctx->pc = 0x147808u;
            goto label_147808;
        }
    }
    ctx->pc = 0x1477F0u;
label_1477f0:
    // 0x1477f0: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x1477f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1477f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1477f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1477f8: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1477f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1477fc: 0x0  nop
    ctx->pc = 0x1477fcu;
    // NOP
    // 0x147800: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147804: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147804u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147808:
    // 0x147808: 0x0  nop
    ctx->pc = 0x147808u;
    // NOP
    // 0x14780c: 0x0  nop
    ctx->pc = 0x14780cu;
    // NOP
    // 0x147810: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147810u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147814: 0x24c70002  addiu       $a3, $a2, 0x2
    ctx->pc = 0x147814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x147818: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x147818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14781c: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x14781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147820: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147820u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147824: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147824u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147828: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147828u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14782c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x14782cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x147830: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147830u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147834: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147834u;
    {
        const bool branch_taken_0x147834 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147834u;
        // 0x147838: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147834) {
            ctx->pc = 0x147844u;
            goto label_147844;
        }
    }
    ctx->pc = 0x14783Cu;
    // 0x14783c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14783Cu;
    {
        const bool branch_taken_0x14783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14783Cu;
        // 0x147840: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14783c) {
            ctx->pc = 0x14785Cu;
            goto label_14785c;
        }
    }
    ctx->pc = 0x147844u;
label_147844:
    // 0x147844: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147844u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147848: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x14784c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x14784cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147850: 0x0  nop
    ctx->pc = 0x147850u;
    // NOP
    // 0x147854: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147858: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_14785c:
    // 0x14785c: 0x0  nop
    ctx->pc = 0x14785cu;
    // NOP
    // 0x147860: 0x0  nop
    ctx->pc = 0x147860u;
    // NOP
    // 0x147864: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147864u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147868: 0x24c70003  addiu       $a3, $a2, 0x3
    ctx->pc = 0x147868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x14786c: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x14786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147870: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x147870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147874: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147874u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147878: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147878u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x14787c: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x14787cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147880: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x147880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x147884: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147884u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147888: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147888u;
    {
        const bool branch_taken_0x147888 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x14788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147888u;
        // 0x14788c: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147888) {
            ctx->pc = 0x147898u;
            goto label_147898;
        }
    }
    ctx->pc = 0x147890u;
    // 0x147890: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147890u;
    {
        const bool branch_taken_0x147890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147890u;
        // 0x147894: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147890) {
            ctx->pc = 0x1478B0u;
            goto label_1478b0;
        }
    }
    ctx->pc = 0x147898u;
label_147898:
    // 0x147898: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147898u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x14789c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x14789cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1478a0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1478a0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1478a4: 0x0  nop
    ctx->pc = 0x1478a4u;
    // NOP
    // 0x1478a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1478a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1478ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1478acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1478b0:
    // 0x1478b0: 0x0  nop
    ctx->pc = 0x1478b0u;
    // NOP
    // 0x1478b4: 0x0  nop
    ctx->pc = 0x1478b4u;
    // NOP
    // 0x1478b8: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x1478b8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1478bc: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x1478bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1478c0: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x1478c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1478c4: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x1478c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1478c8: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1478c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1478cc: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x1478ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1478d0: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x1478d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1478d4: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1478d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1478d8: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1478d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1478dc: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1478DCu;
    {
        const bool branch_taken_0x1478dc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1478E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478DCu;
        // 0x1478e0: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478dc) {
            ctx->pc = 0x1478ECu;
            goto label_1478ec;
        }
    }
    ctx->pc = 0x1478E4u;
    // 0x1478e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1478E4u;
    {
        const bool branch_taken_0x1478e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478E4u;
        // 0x1478e8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478e4) {
            ctx->pc = 0x147904u;
            goto label_147904;
        }
    }
    ctx->pc = 0x1478ECu;
label_1478ec:
    // 0x1478ec: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x1478ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1478f0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1478f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1478f4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1478f4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1478f8: 0x0  nop
    ctx->pc = 0x1478f8u;
    // NOP
    // 0x1478fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1478fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147900: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147900u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147904:
    // 0x147904: 0x0  nop
    ctx->pc = 0x147904u;
    // NOP
    // 0x147908: 0x0  nop
    ctx->pc = 0x147908u;
    // NOP
    // 0x14790c: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x14790cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147910: 0x24c70005  addiu       $a3, $a2, 0x5
    ctx->pc = 0x147910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x147914: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x147914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147918: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x147918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14791c: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x14791cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147920: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147920u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147924: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147924u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147928: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x147928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14792c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x14792cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147930: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147930u;
    {
        const bool branch_taken_0x147930 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147930u;
        // 0x147934: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147930) {
            ctx->pc = 0x147940u;
            goto label_147940;
        }
    }
    ctx->pc = 0x147938u;
    // 0x147938: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147938u;
    {
        const bool branch_taken_0x147938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147938u;
        // 0x14793c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147938) {
            ctx->pc = 0x147958u;
            goto label_147958;
        }
    }
    ctx->pc = 0x147940u;
label_147940:
    // 0x147940: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147940u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147944: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147944u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x147948: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147948u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14794c: 0x0  nop
    ctx->pc = 0x14794cu;
    // NOP
    // 0x147950: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147954: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147954u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147958:
    // 0x147958: 0x0  nop
    ctx->pc = 0x147958u;
    // NOP
    // 0x14795c: 0x0  nop
    ctx->pc = 0x14795cu;
    // NOP
    // 0x147960: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147960u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147964: 0x24c70006  addiu       $a3, $a2, 0x6
    ctx->pc = 0x147964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x147968: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x147968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14796c: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x14796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147970: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147970u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147974: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147974u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147978: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147978u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14797c: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x14797cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x147980: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147980u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147984: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147984u;
    {
        const bool branch_taken_0x147984 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147984u;
        // 0x147988: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147984) {
            ctx->pc = 0x147994u;
            goto label_147994;
        }
    }
    ctx->pc = 0x14798Cu;
    // 0x14798c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14798Cu;
    {
        const bool branch_taken_0x14798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14798Cu;
        // 0x147990: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14798c) {
            ctx->pc = 0x1479ACu;
            goto label_1479ac;
        }
    }
    ctx->pc = 0x147994u;
label_147994:
    // 0x147994: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147994u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147998: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x14799c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x14799cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1479a0: 0x0  nop
    ctx->pc = 0x1479a0u;
    // NOP
    // 0x1479a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1479a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1479a8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1479a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1479ac:
    // 0x1479ac: 0x0  nop
    ctx->pc = 0x1479acu;
    // NOP
    // 0x1479b0: 0x0  nop
    ctx->pc = 0x1479b0u;
    // NOP
    // 0x1479b4: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x1479b4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1479b8: 0x24c70007  addiu       $a3, $a2, 0x7
    ctx->pc = 0x1479b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1479bc: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x1479bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1479c0: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x1479c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1479c4: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x1479c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1479c8: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x1479c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1479cc: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x1479ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1479d0: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x1479d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1479d4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1479d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1479d8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1479D8u;
    {
        const bool branch_taken_0x1479d8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1479DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479D8u;
        // 0x1479dc: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479d8) {
            ctx->pc = 0x1479E8u;
            goto label_1479e8;
        }
    }
    ctx->pc = 0x1479E0u;
    // 0x1479e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1479E0u;
    {
        const bool branch_taken_0x1479e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1479E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479E0u;
        // 0x1479e4: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479e0) {
            ctx->pc = 0x147A00u;
            goto label_147a00;
        }
    }
    ctx->pc = 0x1479E8u;
label_1479e8:
    // 0x1479e8: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x1479e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1479ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1479ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1479f0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1479f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1479f4: 0x0  nop
    ctx->pc = 0x1479f4u;
    // NOP
    // 0x1479f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1479f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1479fc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1479fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147a00:
    // 0x147a00: 0x0  nop
    ctx->pc = 0x147a00u;
    // NOP
    // 0x147a04: 0x0  nop
    ctx->pc = 0x147a04u;
    // NOP
    // 0x147a08: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147a08u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147a0c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x147a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x147a10: 0xc5382b  sltu        $a3, $a2, $a1
    ctx->pc = 0x147a10u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x147a14: 0xc6830018  lwc1        $f3, 0x18($s4)
    ctx->pc = 0x147a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147a18: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x147a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147a1c: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147a1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147a20: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147a20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147a24: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147a24u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147a28: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x147a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x147a2c: 0x14e0ff56  bnez        $a3, . + 4 + (-0xAA << 2)
    ctx->pc = 0x147A2Cu;
    {
        const bool branch_taken_0x147a2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x147A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A2Cu;
        // 0x147a30: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a2c) {
            ctx->pc = 0x147788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147788;
        }
    }
    ctx->pc = 0x147A34u;
    // 0x147a34: 0x0  nop
    ctx->pc = 0x147a34u;
    // NOP
label_147a38:
    // 0x147a38: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x147a38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x147a3c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x147A3Cu;
    {
        const bool branch_taken_0x147a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A3Cu;
        // 0x147a40: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a3c) {
            ctx->pc = 0x147AC0u;
            goto label_147ac0;
        }
    }
    ctx->pc = 0x147A44u;
    // 0x147a44: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x147a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x147a48: 0x24450240  addiu       $a1, $v0, 0x240
    ctx->pc = 0x147a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x147a4c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x147a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x147a50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x147a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x147a54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x147a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147a58: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x147a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x147a5c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x147a5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_147a60:
    // 0x147a60: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x147a60u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147a64: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147A64u;
    {
        const bool branch_taken_0x147a64 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x147A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A64u;
        // 0x147a68: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a64) {
            ctx->pc = 0x147A74u;
            goto label_147a74;
        }
    }
    ctx->pc = 0x147A6Cu;
    // 0x147a6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147A6Cu;
    {
        const bool branch_taken_0x147a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A6Cu;
        // 0x147a70: 0x46801820  cvt.s.w     $f0, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a6c) {
            ctx->pc = 0x147A8Cu;
            goto label_147a8c;
        }
    }
    ctx->pc = 0x147A74u;
label_147a74:
    // 0x147a74: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x147a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x147a78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x147a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x147a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147a80: 0x0  nop
    ctx->pc = 0x147a80u;
    // NOP
    // 0x147a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x147a88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x147a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_147a8c:
    // 0x147a8c: 0x0  nop
    ctx->pc = 0x147a8cu;
    // NOP
    // 0x147a90: 0x0  nop
    ctx->pc = 0x147a90u;
    // NOP
    // 0x147a94: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x147a94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x147a98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x147a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x147a9c: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x147a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x147aa0: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x147aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147aa4: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x147aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147aa8: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x147aa8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x147aac: 0x46041041  sub.s       $f1, $f2, $f4
    ctx->pc = 0x147aacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x147ab0: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x147ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x147ab4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x147ab8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x147AB8u;
    {
        const bool branch_taken_0x147ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AB8u;
        // 0x147abc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ab8) {
            ctx->pc = 0x147A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147a60;
        }
    }
    ctx->pc = 0x147AC0u;
label_147ac0:
    // 0x147ac0: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x147ac0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x147ac4: 0x102000d8  beqz        $at, . + 4 + (0xD8 << 2)
    ctx->pc = 0x147AC4u;
    {
        const bool branch_taken_0x147ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AC4u;
        // 0x147ac8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ac4) {
            ctx->pc = 0x147E28u;
            goto label_147e28;
        }
    }
    ctx->pc = 0x147ACCu;
    // 0x147acc: 0x2e410009  sltiu       $at, $s2, 0x9
    ctx->pc = 0x147accu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x147ad0: 0x142000b3  bnez        $at, . + 4 + (0xB3 << 2)
    ctx->pc = 0x147AD0u;
    {
        const bool branch_taken_0x147ad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x147AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AD0u;
        // 0x147ad4: 0x2646fff8  addiu       $a2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ad0) {
            ctx->pc = 0x147DA0u;
            goto label_147da0;
        }
    }
    ctx->pc = 0x147AD8u;
    // 0x147ad8: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x147ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x147adc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x147adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x147ae0: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x147ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x147ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147ae8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x147ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147aec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x147aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_147af0:
    // 0x147af0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x147af0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147af4: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147AF4u;
    {
        const bool branch_taken_0x147af4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AF4u;
        // 0x147af8: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147af4) {
            ctx->pc = 0x147B04u;
            goto label_147b04;
        }
    }
    ctx->pc = 0x147AFCu;
    // 0x147afc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147AFCu;
    {
        const bool branch_taken_0x147afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AFCu;
        // 0x147b00: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147afc) {
            ctx->pc = 0x147B1Cu;
            goto label_147b1c;
        }
    }
    ctx->pc = 0x147B04u;
label_147b04:
    // 0x147b04: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147b04u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147b08: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147b08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x147b0c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147b0cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147b10: 0x0  nop
    ctx->pc = 0x147b10u;
    // NOP
    // 0x147b14: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147b18: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147b18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147b1c:
    // 0x147b1c: 0x0  nop
    ctx->pc = 0x147b1cu;
    // NOP
    // 0x147b20: 0x0  nop
    ctx->pc = 0x147b20u;
    // NOP
    // 0x147b24: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147b24u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147b28: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x147b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x147b2c: 0xc6830020  lwc1        $f3, 0x20($s4)
    ctx->pc = 0x147b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147b30: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x147b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147b34: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147b34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147b38: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147b38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147b3c: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147b3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147b40: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x147b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x147b44: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147b44u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147b48: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147B48u;
    {
        const bool branch_taken_0x147b48 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B48u;
        // 0x147b4c: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b48) {
            ctx->pc = 0x147B58u;
            goto label_147b58;
        }
    }
    ctx->pc = 0x147B50u;
    // 0x147b50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147B50u;
    {
        const bool branch_taken_0x147b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B50u;
        // 0x147b54: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b50) {
            ctx->pc = 0x147B70u;
            goto label_147b70;
        }
    }
    ctx->pc = 0x147B58u;
label_147b58:
    // 0x147b58: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147b58u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147b5c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x147b60: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147b60u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147b64: 0x0  nop
    ctx->pc = 0x147b64u;
    // NOP
    // 0x147b68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147b6c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147b6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147b70:
    // 0x147b70: 0x0  nop
    ctx->pc = 0x147b70u;
    // NOP
    // 0x147b74: 0x0  nop
    ctx->pc = 0x147b74u;
    // NOP
    // 0x147b78: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147b78u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147b7c: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x147b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x147b80: 0xc6830020  lwc1        $f3, 0x20($s4)
    ctx->pc = 0x147b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147b84: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x147b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147b88: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147b88u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147b8c: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147b8cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147b90: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147b90u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147b94: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x147b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x147b98: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147b98u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147b9c: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147B9Cu;
    {
        const bool branch_taken_0x147b9c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B9Cu;
        // 0x147ba0: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b9c) {
            ctx->pc = 0x147BACu;
            goto label_147bac;
        }
    }
    ctx->pc = 0x147BA4u;
    // 0x147ba4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147BA4u;
    {
        const bool branch_taken_0x147ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BA4u;
        // 0x147ba8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ba4) {
            ctx->pc = 0x147BC4u;
            goto label_147bc4;
        }
    }
    ctx->pc = 0x147BACu;
label_147bac:
    // 0x147bac: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147bacu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147bb0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147bb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x147bb4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147bb4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147bb8: 0x0  nop
    ctx->pc = 0x147bb8u;
    // NOP
    // 0x147bbc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147bc0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147bc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147bc4:
    // 0x147bc4: 0x0  nop
    ctx->pc = 0x147bc4u;
    // NOP
    // 0x147bc8: 0x0  nop
    ctx->pc = 0x147bc8u;
    // NOP
    // 0x147bcc: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147bccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147bd0: 0x24870003  addiu       $a3, $a0, 0x3
    ctx->pc = 0x147bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x147bd4: 0xc6830020  lwc1        $f3, 0x20($s4)
    ctx->pc = 0x147bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147bd8: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x147bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147bdc: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147bdcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147be0: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147be0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147be4: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147be4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147be8: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x147be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x147bec: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147becu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147bf0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147BF0u;
    {
        const bool branch_taken_0x147bf0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BF0u;
        // 0x147bf4: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bf0) {
            ctx->pc = 0x147C00u;
            goto label_147c00;
        }
    }
    ctx->pc = 0x147BF8u;
    // 0x147bf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147BF8u;
    {
        const bool branch_taken_0x147bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BF8u;
        // 0x147bfc: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bf8) {
            ctx->pc = 0x147C18u;
            goto label_147c18;
        }
    }
    ctx->pc = 0x147C00u;
label_147c00:
    // 0x147c00: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147c00u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147c04: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x147c08: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147c08u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147c0c: 0x0  nop
    ctx->pc = 0x147c0cu;
    // NOP
    // 0x147c10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147c14: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147c14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147c18:
    // 0x147c18: 0x0  nop
    ctx->pc = 0x147c18u;
    // NOP
    // 0x147c1c: 0x0  nop
    ctx->pc = 0x147c1cu;
    // NOP
    // 0x147c20: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147c20u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147c24: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x147c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x147c28: 0xc6830020  lwc1        $f3, 0x20($s4)
    ctx->pc = 0x147c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147c2c: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x147c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147c30: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147c30u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147c34: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147c34u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147c38: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147c38u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147c3c: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x147c3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x147c40: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147c40u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147c44: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147C44u;
    {
        const bool branch_taken_0x147c44 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C44u;
        // 0x147c48: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c44) {
            ctx->pc = 0x147C54u;
            goto label_147c54;
        }
    }
    ctx->pc = 0x147C4Cu;
    // 0x147c4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147C4Cu;
    {
        const bool branch_taken_0x147c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C4Cu;
        // 0x147c50: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c4c) {
            ctx->pc = 0x147C6Cu;
            goto label_147c6c;
        }
    }
    ctx->pc = 0x147C54u;
label_147c54:
    // 0x147c54: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147c54u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147c58: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x147c5c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147c5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147c60: 0x0  nop
    ctx->pc = 0x147c60u;
    // NOP
    // 0x147c64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147c68: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147c68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147c6c:
    // 0x147c6c: 0x0  nop
    ctx->pc = 0x147c6cu;
    // NOP
    // 0x147c70: 0x0  nop
    ctx->pc = 0x147c70u;
    // NOP
    // 0x147c74: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147c74u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147c78: 0x24870005  addiu       $a3, $a0, 0x5
    ctx->pc = 0x147c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x147c7c: 0xc6830020  lwc1        $f3, 0x20($s4)
    ctx->pc = 0x147c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147c80: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x147c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147c84: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147c84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147c88: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147c88u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147c8c: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147c8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147c90: 0xe4a20010  swc1        $f2, 0x10($a1)
    ctx->pc = 0x147c90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x147c94: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147c94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147c98: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147C98u;
    {
        const bool branch_taken_0x147c98 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C98u;
        // 0x147c9c: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c98) {
            ctx->pc = 0x147CA8u;
            goto label_147ca8;
        }
    }
    ctx->pc = 0x147CA0u;
    // 0x147ca0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147CA0u;
    {
        const bool branch_taken_0x147ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CA0u;
        // 0x147ca4: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ca0) {
            ctx->pc = 0x147CC0u;
            goto label_147cc0;
        }
    }
    ctx->pc = 0x147CA8u;
label_147ca8:
    // 0x147ca8: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147cac: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147cacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x147cb0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147cb0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147cb4: 0x0  nop
    ctx->pc = 0x147cb4u;
    // NOP
    // 0x147cb8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147cbc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147cbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147cc0:
    // 0x147cc0: 0x0  nop
    ctx->pc = 0x147cc0u;
    // NOP
    // 0x147cc4: 0x0  nop
    ctx->pc = 0x147cc4u;
    // NOP
    // 0x147cc8: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147cc8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147ccc: 0x24870006  addiu       $a3, $a0, 0x6
    ctx->pc = 0x147cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x147cd0: 0xc6830020  lwc1        $f3, 0x20($s4)
    ctx->pc = 0x147cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147cd4: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x147cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147cd8: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147cd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147cdc: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147cdcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147ce0: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147ce0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147ce4: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x147ce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x147ce8: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147ce8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147cec: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147CECu;
    {
        const bool branch_taken_0x147cec = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CECu;
        // 0x147cf0: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cec) {
            ctx->pc = 0x147CFCu;
            goto label_147cfc;
        }
    }
    ctx->pc = 0x147CF4u;
    // 0x147cf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147CF4u;
    {
        const bool branch_taken_0x147cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CF4u;
        // 0x147cf8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cf4) {
            ctx->pc = 0x147D14u;
            goto label_147d14;
        }
    }
    ctx->pc = 0x147CFCu;
label_147cfc:
    // 0x147cfc: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147d00: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147d00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x147d04: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147d04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147d08: 0x0  nop
    ctx->pc = 0x147d08u;
    // NOP
    // 0x147d0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147d10: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147d10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147d14:
    // 0x147d14: 0x0  nop
    ctx->pc = 0x147d14u;
    // NOP
    // 0x147d18: 0x0  nop
    ctx->pc = 0x147d18u;
    // NOP
    // 0x147d1c: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147d1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147d20: 0x24870007  addiu       $a3, $a0, 0x7
    ctx->pc = 0x147d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x147d24: 0xc6830020  lwc1        $f3, 0x20($s4)
    ctx->pc = 0x147d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147d28: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x147d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147d2c: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147d2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147d30: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147d30u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147d34: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147d34u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147d38: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x147d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x147d3c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147d3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147d40: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147D40u;
    {
        const bool branch_taken_0x147d40 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x147D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D40u;
        // 0x147d44: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d40) {
            ctx->pc = 0x147D50u;
            goto label_147d50;
        }
    }
    ctx->pc = 0x147D48u;
    // 0x147d48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147D48u;
    {
        const bool branch_taken_0x147d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D48u;
        // 0x147d4c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d48) {
            ctx->pc = 0x147D68u;
            goto label_147d68;
        }
    }
    ctx->pc = 0x147D50u;
label_147d50:
    // 0x147d50: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x147d50u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x147d54: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x147d54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x147d58: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x147d58u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147d5c: 0x0  nop
    ctx->pc = 0x147d5cu;
    // NOP
    // 0x147d60: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x147d60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x147d64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x147d64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_147d68:
    // 0x147d68: 0x0  nop
    ctx->pc = 0x147d68u;
    // NOP
    // 0x147d6c: 0x0  nop
    ctx->pc = 0x147d6cu;
    // NOP
    // 0x147d70: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x147d70u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x147d74: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x147d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x147d78: 0x86382b  sltu        $a3, $a0, $a2
    ctx->pc = 0x147d78u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x147d7c: 0xc6830020  lwc1        $f3, 0x20($s4)
    ctx->pc = 0x147d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147d80: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x147d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147d84: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x147d84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x147d88: 0x460400c1  sub.s       $f3, $f0, $f4
    ctx->pc = 0x147d88u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x147d8c: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x147d8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x147d90: 0xe4a2001c  swc1        $f2, 0x1C($a1)
    ctx->pc = 0x147d90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x147d94: 0x14e0ff56  bnez        $a3, . + 4 + (-0xAA << 2)
    ctx->pc = 0x147D94u;
    {
        const bool branch_taken_0x147d94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x147D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D94u;
        // 0x147d98: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d94) {
            ctx->pc = 0x147AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147af0;
        }
    }
    ctx->pc = 0x147D9Cu;
    // 0x147d9c: 0x0  nop
    ctx->pc = 0x147d9cu;
    // NOP
label_147da0:
    // 0x147da0: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x147da0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x147da4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x147DA4u;
    {
        const bool branch_taken_0x147da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DA4u;
        // 0x147da8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147da4) {
            ctx->pc = 0x147E28u;
            goto label_147e28;
        }
    }
    ctx->pc = 0x147DACu;
    // 0x147dac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x147dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x147db0: 0x24460200  addiu       $a2, $v0, 0x200
    ctx->pc = 0x147db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x147db4: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x147db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x147db8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x147db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x147dbc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x147dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147dc0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x147dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x147dc4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x147dc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_147dc8:
    // 0x147dc8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x147dc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147dcc: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147DCCu;
    {
        const bool branch_taken_0x147dcc = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x147DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DCCu;
        // 0x147dd0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dcc) {
            ctx->pc = 0x147DDCu;
            goto label_147ddc;
        }
    }
    ctx->pc = 0x147DD4u;
    // 0x147dd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147DD4u;
    {
        const bool branch_taken_0x147dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DD4u;
        // 0x147dd8: 0x46801820  cvt.s.w     $f0, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dd4) {
            ctx->pc = 0x147DF4u;
            goto label_147df4;
        }
    }
    ctx->pc = 0x147DDCu;
label_147ddc:
    // 0x147ddc: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x147ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x147de0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x147de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x147de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147de8: 0x0  nop
    ctx->pc = 0x147de8u;
    // NOP
    // 0x147dec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x147df0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x147df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_147df4:
    // 0x147df4: 0x0  nop
    ctx->pc = 0x147df4u;
    // NOP
    // 0x147df8: 0x0  nop
    ctx->pc = 0x147df8u;
    // NOP
    // 0x147dfc: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x147dfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x147e00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x147e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x147e04: 0x92102b  sltu        $v0, $a0, $s2
    ctx->pc = 0x147e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x147e08: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x147e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147e0c: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x147e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147e10: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x147e10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x147e14: 0x46041041  sub.s       $f1, $f2, $f4
    ctx->pc = 0x147e14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x147e18: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x147e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x147e1c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x147e20: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x147E20u;
    {
        const bool branch_taken_0x147e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E20u;
        // 0x147e24: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e20) {
            ctx->pc = 0x147DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147dc8;
        }
    }
    ctx->pc = 0x147E28u;
label_147e28:
    // 0x147e28: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x147e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x147e2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x147e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x147e30: 0x13082b  sltu        $at, $zero, $s3
    ctx->pc = 0x147e30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x147e34: 0x9042fffe  lbu         $v0, -0x2($v0)
    ctx->pc = 0x147e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x147e38: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x147e38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e3c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x147e3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e40: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x147E40u;
    {
        const bool branch_taken_0x147e40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E40u;
        // 0x147e44: 0xa3a200f0  sb          $v0, 0xF0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e40) {
            ctx->pc = 0x147F20u;
            goto label_147f20;
        }
    }
    ctx->pc = 0x147E48u;
    // 0x147e48: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x147e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x147e4c: 0x27b50140  addiu       $s5, $sp, 0x140
    ctx->pc = 0x147e4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x147e50: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x147e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x147e54: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x147e54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e58: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x147e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x147e5c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x147e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_147e60:
    // 0x147e60: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x147e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x147e64: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x147e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x147e68: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x147e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147e6c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x147E6Cu;
    SET_GPR_U32(ctx, 31, 0x147E74u);
    ctx->pc = 0x147E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E6Cu;
    // 0x147e70: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x147E6Cu, 0x147E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E74u;
label_147e74:
    // 0x147e74: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x147e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x147e78: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x147e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x147e7c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x147E7Cu;
    SET_GPR_U32(ctx, 31, 0x147E84u);
    ctx->pc = 0x147E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E7Cu;
    // 0x147e80: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x147E7Cu, 0x147E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E84u;
label_147e84:
    // 0x147e84: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x147e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x147e88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x147e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x147e8c: 0x27a2029c  addiu       $v0, $sp, 0x29C
    ctx->pc = 0x147e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
    // 0x147e90: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x147e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x147e94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x147e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x147e98: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x147e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x147e9c: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x147e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x147ea0: 0xc041702  jal         func_105C08
    ctx->pc = 0x147EA0u;
    SET_GPR_U32(ctx, 31, 0x147EA8u);
    ctx->pc = 0x147EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147EA0u;
    // 0x147ea4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C08u, 0x147EA0u, 0x147EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147EA8u;
label_147ea8:
    // 0x147ea8: 0x27a20288  addiu       $v0, $sp, 0x288
    ctx->pc = 0x147ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x147eac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147eb0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x147eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x147eb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x147eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x147eb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147EB8u;
    {
        const bool branch_taken_0x147eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147eb8) {
            ctx->pc = 0x147EC8u;
            goto label_147ec8;
        }
    }
    ctx->pc = 0x147EC0u;
    // 0x147ec0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x147EC0u;
    {
        const bool branch_taken_0x147ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EC0u;
        // 0x147ec4: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ec0) {
            ctx->pc = 0x147EF0u;
            goto label_147ef0;
        }
    }
    ctx->pc = 0x147EC8u;
label_147ec8:
    // 0x147ec8: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x147EC8u;
    {
        const bool branch_taken_0x147ec8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x147ec8) {
            ctx->pc = 0x147EE0u;
            goto label_147ee0;
        }
    }
    ctx->pc = 0x147ED0u;
    // 0x147ed0: 0x93c20001  lbu         $v0, 0x1($fp)
    ctx->pc = 0x147ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x147ed4: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x147ed4u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x147ed8: 0xa3a200f0  sb          $v0, 0xF0($sp)
    ctx->pc = 0x147ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
    // 0x147edc: 0x0  nop
    ctx->pc = 0x147edcu;
    // NOP
label_147ee0:
    // 0x147ee0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x147ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x147ee4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x147ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x147ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147eec: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x147eecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_147ef0:
    // 0x147ef0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x147ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x147ef4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x147ef4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x147ef8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x147ef8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x147efc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x147efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x147f00: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x147f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x147f04: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x147f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x147f08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x147f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x147f0c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x147f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x147f10: 0x2f3102b  sltu        $v0, $s7, $s3
    ctx->pc = 0x147f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x147f14: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x147F14u;
    {
        const bool branch_taken_0x147f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F14u;
        // 0x147f18: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f14) {
            ctx->pc = 0x147E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147e60;
        }
    }
    ctx->pc = 0x147F1Cu;
    // 0x147f1c: 0x0  nop
    ctx->pc = 0x147f1cu;
    // NOP
label_147f20:
    // 0x147f20: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x147f20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x147f24: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x147F24u;
    {
        const bool branch_taken_0x147f24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F24u;
        // 0x147f28: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f24) {
            ctx->pc = 0x148008u;
            goto label_148008;
        }
    }
    ctx->pc = 0x147F2Cu;
    // 0x147f2c: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x147f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x147f30: 0x27b50100  addiu       $s5, $sp, 0x100
    ctx->pc = 0x147f30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x147f34: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x147f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x147f38: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x147f38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f3c: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x147f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x147f40: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x147f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x147f44: 0x0  nop
    ctx->pc = 0x147f44u;
    // NOP
label_147f48:
    // 0x147f48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x147f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x147f4c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x147f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x147f50: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x147f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147f54: 0xc0414dc  jal         func_105370
    ctx->pc = 0x147F54u;
    SET_GPR_U32(ctx, 31, 0x147F5Cu);
    ctx->pc = 0x147F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F54u;
    // 0x147f58: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x147F54u, 0x147F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F5Cu;
label_147f5c:
    // 0x147f5c: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x147f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x147f60: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x147f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x147f64: 0xc0414ca  jal         func_105328
    ctx->pc = 0x147F64u;
    SET_GPR_U32(ctx, 31, 0x147F6Cu);
    ctx->pc = 0x147F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F64u;
    // 0x147f68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x147F64u, 0x147F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F6Cu;
label_147f6c:
    // 0x147f6c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x147f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x147f70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x147f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x147f74: 0x27a2029c  addiu       $v0, $sp, 0x29C
    ctx->pc = 0x147f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
    // 0x147f78: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x147f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x147f7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x147f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x147f80: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x147f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x147f84: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x147f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x147f88: 0xc041702  jal         func_105C08
    ctx->pc = 0x147F88u;
    SET_GPR_U32(ctx, 31, 0x147F90u);
    ctx->pc = 0x147F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F88u;
    // 0x147f8c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C08u, 0x147F88u, 0x147F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F90u;
label_147f90:
    // 0x147f90: 0x27a20288  addiu       $v0, $sp, 0x288
    ctx->pc = 0x147f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x147f94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147f98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x147f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x147f9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x147f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x147fa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147FA0u;
    {
        const bool branch_taken_0x147fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147fa0) {
            ctx->pc = 0x147FB0u;
            goto label_147fb0;
        }
    }
    ctx->pc = 0x147FA8u;
    // 0x147fa8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x147FA8u;
    {
        const bool branch_taken_0x147fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FA8u;
        // 0x147fac: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fa8) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147FB0u;
label_147fb0:
    // 0x147fb0: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x147FB0u;
    {
        const bool branch_taken_0x147fb0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x147fb0) {
            ctx->pc = 0x147FC8u;
            goto label_147fc8;
        }
    }
    ctx->pc = 0x147FB8u;
    // 0x147fb8: 0x93c20001  lbu         $v0, 0x1($fp)
    ctx->pc = 0x147fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x147fbc: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x147fbcu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x147fc0: 0xa3a200f0  sb          $v0, 0xF0($sp)
    ctx->pc = 0x147fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
    // 0x147fc4: 0x0  nop
    ctx->pc = 0x147fc4u;
    // NOP
label_147fc8:
    // 0x147fc8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x147fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x147fcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x147fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x147fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147fd4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x147fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_147fd8:
    // 0x147fd8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x147fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x147fdc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x147fdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x147fe0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x147fe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x147fe4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x147fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x147fe8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x147fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x147fec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x147fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x147ff0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x147ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x147ff4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x147ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x147ff8: 0x2f2102b  sltu        $v0, $s7, $s2
    ctx->pc = 0x147ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x147ffc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x147FFCu;
    {
        const bool branch_taken_0x147ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FFCu;
        // 0x148000: 0x27de0002  addiu       $fp, $fp, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ffc) {
            ctx->pc = 0x147F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147f48;
        }
    }
    ctx->pc = 0x148004u;
    // 0x148004: 0x0  nop
    ctx->pc = 0x148004u;
    // NOP
label_148008:
    // 0x148008: 0x93a200e0  lbu         $v0, 0xE0($sp)
    ctx->pc = 0x148008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14800c: 0x3c087900  lui         $t0, 0x7900
    ctx->pc = 0x14800cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30976 << 16));
    // 0x148010: 0x8f878554  lw          $a3, -0x7AAC($gp)
    ctx->pc = 0x148010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148014: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x148014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x148018: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x148018u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x14801c: 0x35097000  ori         $t1, $t0, 0x7000
    ctx->pc = 0x14801cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)28672);
    // 0x148020: 0x240e0048  addiu       $t6, $zero, 0x48
    ctx->pc = 0x148020u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x148024: 0x240c004f  addiu       $t4, $zero, 0x4F
    ctx->pc = 0x148024u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x148028: 0x240b0206  addiu       $t3, $zero, 0x206
    ctx->pc = 0x148028u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x14802c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x14802cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148030: 0x13082b  sltu        $at, $zero, $s3
    ctx->pc = 0x148030u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x148034: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x148034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148038: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x148038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14803c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x14803cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148040: 0x22e38  dsll        $a1, $v0, 24
    ctx->pc = 0x148040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 24);
    // 0x148044: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x148044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x148048: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x148048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14804c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x14804cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x148050: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x148050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x148054: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x148054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x148058: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x148058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x14805c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x14805cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x148060: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x148060u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x148064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148068: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x148068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x14806c: 0x8f868554  lw          $a2, -0x7AAC($gp)
    ctx->pc = 0x14806cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148070: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x148070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x148074: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x148074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x148078: 0x446825  or          $t5, $v0, $a0
    ctx->pc = 0x148078u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14807c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x14807cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x148080: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x148080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x148084: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x148084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x148088: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x148088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x14808c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x14808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x148090: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x148090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x148094: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x148094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x148098: 0xa25025  or          $t2, $a1, $v0
    ctx->pc = 0x148098u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x14809c: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x14809cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x1480a0: 0x34058700  ori         $a1, $zero, 0x8700
    ctx->pc = 0x1480a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1480a4: 0x8f968554  lw          $s6, -0x7AAC($gp)
    ctx->pc = 0x1480a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1480a8: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x1480a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1480ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1480acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1480b0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1480b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1480b4: 0x1243025  or          $a2, $t1, $a0
    ctx->pc = 0x1480b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x1480b8: 0x34b79000  ori         $s7, $a1, 0x9000
    ctx->pc = 0x1480b8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
    // 0x1480bc: 0x2e42025  or          $a0, $s7, $a0
    ctx->pc = 0x1480bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
    // 0x1480c0: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x1480c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x1480c4: 0x70063389  pcpyld      $a2, $zero, $a2
    ctx->pc = 0x1480c4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1480c8: 0xfed50000  sd          $s5, 0x0($s6)
    ctx->pc = 0x1480c8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 21));
    // 0x1480cc: 0xfece0008  sd          $t6, 0x8($s6)
    ctx->pc = 0x1480ccu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 14));
    // 0x1480d0: 0x24150203  addiu       $s5, $zero, 0x203
    ctx->pc = 0x1480d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x1480d4: 0x8f978554  lw          $s7, -0x7AAC($gp)
    ctx->pc = 0x1480d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1480d8: 0x7004b389  pcpyld      $s6, $zero, $a0
    ctx->pc = 0x1480d8u;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x1480dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1480dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480e0: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1480e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1480e4: 0xaf978554  sw          $s7, -0x7AAC($gp)
    ctx->pc = 0x1480e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 23));
    // 0x1480e8: 0x8f978554  lw          $s7, -0x7AAC($gp)
    ctx->pc = 0x1480e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1480ec: 0xfeed0000  sd          $t5, 0x0($s7)
    ctx->pc = 0x1480ecu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 13));
    // 0x1480f0: 0xfeec0008  sd          $t4, 0x8($s7)
    ctx->pc = 0x1480f0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 12));
    // 0x1480f4: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x1480f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1480f8: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x1480f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x1480fc: 0xaf8c8554  sw          $t4, -0x7AAC($gp)
    ctx->pc = 0x1480fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 12));
    // 0x148100: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x148100u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148104: 0xfd8b0000  sd          $t3, 0x0($t4)
    ctx->pc = 0x148104u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 11));
    // 0x148108: 0xfd800008  sd          $zero, 0x8($t4)
    ctx->pc = 0x148108u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 0));
    // 0x14810c: 0x8f8b8554  lw          $t3, -0x7AAC($gp)
    ctx->pc = 0x14810cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148110: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148110u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148114: 0xaf8b8554  sw          $t3, -0x7AAC($gp)
    ctx->pc = 0x148114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 11));
    // 0x148118: 0x8f8b8554  lw          $t3, -0x7AAC($gp)
    ctx->pc = 0x148118u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14811c: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x14811cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
    // 0x148120: 0xfd630008  sd          $v1, 0x8($t3)
    ctx->pc = 0x148120u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 3));
    // 0x148124: 0x8f8a8554  lw          $t2, -0x7AAC($gp)
    ctx->pc = 0x148124u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148128: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x148128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x14812c: 0xaf8a8554  sw          $t2, -0x7AAC($gp)
    ctx->pc = 0x14812cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 10));
    // 0x148130: 0x8f8a8554  lw          $t2, -0x7AAC($gp)
    ctx->pc = 0x148130u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148134: 0xfd460000  sd          $a2, 0x0($t2)
    ctx->pc = 0x148134u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 6));
    // 0x148138: 0xfd4f0008  sd          $t7, 0x8($t2)
    ctx->pc = 0x148138u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 15));
    // 0x14813c: 0x8f868554  lw          $a2, -0x7AAC($gp)
    ctx->pc = 0x14813cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148140: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x148140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x148144: 0xaf868554  sw          $a2, -0x7AAC($gp)
    ctx->pc = 0x148144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 6));
    // 0x148148: 0x8f868554  lw          $a2, -0x7AAC($gp)
    ctx->pc = 0x148148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14814c: 0xfcd60000  sd          $s6, 0x0($a2)
    ctx->pc = 0x14814cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 22));
    // 0x148150: 0xfccf0008  sd          $t7, 0x8($a2)
    ctx->pc = 0x148150u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 15));
    // 0x148154: 0x8f868554  lw          $a2, -0x7AAC($gp)
    ctx->pc = 0x148154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148158: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14815c: 0xaf868554  sw          $a2, -0x7AAC($gp)
    ctx->pc = 0x14815cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 6));
    // 0x148160: 0x8f868554  lw          $a2, -0x7AAC($gp)
    ctx->pc = 0x148160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148164: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x148164u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x148168: 0xfcce0008  sd          $t6, 0x8($a2)
    ctx->pc = 0x148168u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 14));
    // 0x14816c: 0x8f858554  lw          $a1, -0x7AAC($gp)
    ctx->pc = 0x14816cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148170: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x148170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x148174: 0xaf858554  sw          $a1, -0x7AAC($gp)
    ctx->pc = 0x148174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 5));
    // 0x148178: 0x8f858554  lw          $a1, -0x7AAC($gp)
    ctx->pc = 0x148178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14817c: 0xfcb50000  sd          $s5, 0x0($a1)
    ctx->pc = 0x14817cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 21));
    // 0x148180: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x148180u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x148184: 0x8f858554  lw          $a1, -0x7AAC($gp)
    ctx->pc = 0x148184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148188: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x148188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14818c: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x14818Cu;
    {
        const bool branch_taken_0x14818c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x148190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14818Cu;
        // 0x148190: 0xaf858554  sw          $a1, -0x7AAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14818c) {
            ctx->pc = 0x1482D8u;
            goto label_1482d8;
        }
    }
    ctx->pc = 0x148194u;
    // 0x148194: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x148194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x148198: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x148198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x14819c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x14819cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1481a0: 0x3508c000  ori         $t0, $t0, 0xC000
    ctx->pc = 0x1481a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)49152);
    // 0x1481a4: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1481a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1481a8: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x1481a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x1481ac: 0x70085b89  pcpyld      $t3, $zero, $t0
    ctx->pc = 0x1481acu;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1481b0: 0x3c0800df  lui         $t0, 0xDF
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)223 << 16));
    // 0x1481b4: 0x240d0041  addiu       $t5, $zero, 0x41
    ctx->pc = 0x1481b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1481b8: 0x8703c  dsll32      $t6, $t0, 0
    ctx->pc = 0x1481b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1481bc: 0x34089c00  ori         $t0, $zero, 0x9C00
    ctx->pc = 0x1481bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39936);
    // 0x1481c0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x1481c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x1481c4: 0x35087000  ori         $t0, $t0, 0x7000
    ctx->pc = 0x1481c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)28672);
    // 0x1481c8: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x1481c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1481cc: 0x70096389  pcpyld      $t4, $zero, $t1
    ctx->pc = 0x1481ccu;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x1481d0: 0x70075389  pcpyld      $t2, $zero, $a3
    ctx->pc = 0x1481d0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x1481d4: 0x0  nop
    ctx->pc = 0x1481d4u;
    // NOP
label_1481d8:
    // 0x1481d8: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1481d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1481dc: 0x10e00038  beqz        $a3, . + 4 + (0x38 << 2)
    ctx->pc = 0x1481DCu;
    {
        const bool branch_taken_0x1481dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1481E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1481DCu;
        // 0x1481e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1481dc) {
            ctx->pc = 0x1482C0u;
            goto label_1482c0;
        }
    }
    ctx->pc = 0x1481E4u;
    // 0x1481e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1481e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1481e8:
    // 0x1481e8: 0x24f6003f  addiu       $s6, $a3, 0x3F
    ctx->pc = 0x1481e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x1481ec: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x1481ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1481f0: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x1481f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1481f4: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x1481f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1481f8: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x1481f8u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1481fc: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1481fcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x148200: 0x16b438  dsll        $s6, $s6, 16
    ctx->pc = 0x148200u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << 16);
    // 0x148204: 0x136b025  or          $s6, $t1, $s6
    ctx->pc = 0x148204u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) | GPR_U64(ctx, 22));
    // 0x148208: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x148208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14820c: 0x2ceb025  or          $s6, $s6, $t6
    ctx->pc = 0x14820cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 14));
    // 0x148210: 0x29090008  slti        $t1, $t0, 0x8
    ctx->pc = 0x148210u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x148214: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x148214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x148218: 0xfeb60000  sd          $s6, 0x0($s5)
    ctx->pc = 0x148218u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 22));
    // 0x14821c: 0xfead0008  sd          $t5, 0x8($s5)
    ctx->pc = 0x14821cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 13));
    // 0x148220: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x148220u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148224: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x148224u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x148228: 0xaf958554  sw          $s5, -0x7AAC($gp)
    ctx->pc = 0x148228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 21));
    // 0x14822c: 0x92360000  lbu         $s6, 0x0($s1)
    ctx->pc = 0x14822cu;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148230: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x148230u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148234: 0x16b638  dsll        $s6, $s6, 24
    ctx->pc = 0x148234u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << 24);
    // 0x148238: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x148238u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x14823c: 0xfeb60000  sd          $s6, 0x0($s5)
    ctx->pc = 0x14823cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 22));
    // 0x148240: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x148240u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x148244: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x148244u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148248: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x148248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x14824c: 0xaf958554  sw          $s5, -0x7AAC($gp)
    ctx->pc = 0x14824cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 21));
    // 0x148250: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x148250u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148254: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x148254u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148258: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x148258u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x14825c: 0x2ccb025  or          $s6, $s6, $t4
    ctx->pc = 0x14825cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 12));
    // 0x148260: 0xfeb60000  sd          $s6, 0x0($s5)
    ctx->pc = 0x148260u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 22));
    // 0x148264: 0xfeaf0008  sd          $t7, 0x8($s5)
    ctx->pc = 0x148264u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 15));
    // 0x148268: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x148268u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14826c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x14826cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x148270: 0xaf958554  sw          $s5, -0x7AAC($gp)
    ctx->pc = 0x148270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 21));
    // 0x148274: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x148274u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148278: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x148278u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14827c: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x14827cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x148280: 0x2cbb025  or          $s6, $s6, $t3
    ctx->pc = 0x148280u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 11));
    // 0x148284: 0xfeb60000  sd          $s6, 0x0($s5)
    ctx->pc = 0x148284u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 22));
    // 0x148288: 0xfeaf0008  sd          $t7, 0x8($s5)
    ctx->pc = 0x148288u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 15));
    // 0x14828c: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x14828cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148290: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x148290u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x148294: 0xaf958554  sw          $s5, -0x7AAC($gp)
    ctx->pc = 0x148294u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 21));
    // 0x148298: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x148298u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14829c: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x14829cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1482a0: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x1482a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1482a4: 0x2cab025  or          $s6, $s6, $t2
    ctx->pc = 0x1482a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 10));
    // 0x1482a8: 0xfeb60000  sd          $s6, 0x0($s5)
    ctx->pc = 0x1482a8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 22));
    // 0x1482ac: 0xfeaf0008  sd          $t7, 0x8($s5)
    ctx->pc = 0x1482acu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 15));
    // 0x1482b0: 0x8f958554  lw          $s5, -0x7AAC($gp)
    ctx->pc = 0x1482b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1482b4: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1482b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1482b8: 0x1520ffcb  bnez        $t1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1482B8u;
    {
        const bool branch_taken_0x1482b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1482BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482B8u;
        // 0x1482bc: 0xaf958554  sw          $s5, -0x7AAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482b8) {
            ctx->pc = 0x1481E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1481e8;
        }
    }
    ctx->pc = 0x1482C0u;
label_1482c0:
    // 0x1482c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1482c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1482c4: 0x93382b  sltu        $a3, $a0, $s3
    ctx->pc = 0x1482c4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1482c8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1482cc: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1482ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1482d0: 0x14e0ffc1  bnez        $a3, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1482D0u;
    {
        const bool branch_taken_0x1482d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1482D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482D0u;
        // 0x1482d4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482d0) {
            ctx->pc = 0x1481D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1481d8;
        }
    }
    ctx->pc = 0x1482D8u;
label_1482d8:
    // 0x1482d8: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1482d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1482dc: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x1482DCu;
    {
        const bool branch_taken_0x1482dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1482E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482DCu;
        // 0x1482e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482dc) {
            ctx->pc = 0x148450u;
            goto label_148450;
        }
    }
    ctx->pc = 0x1482E4u;
    // 0x1482e4: 0x27ae0100  addiu       $t6, $sp, 0x100
    ctx->pc = 0x1482e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1482e8: 0x27ad0180  addiu       $t5, $sp, 0x180
    ctx->pc = 0x1482e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1482ec: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1482ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1482f0: 0x34099c00  ori         $t1, $zero, 0x9C00
    ctx->pc = 0x1482f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39936);
    // 0x1482f4: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x1482f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1482f8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1482f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1482fc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1482fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x148300: 0x35297000  ori         $t1, $t1, 0x7000
    ctx->pc = 0x148300u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)28672);
    // 0x148304: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x148304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x148308: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x148308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14830c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x14830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x148310: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148314: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x148314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x148318: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x148318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14831c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x148320: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x148320u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x148324: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x148324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x148328: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x148328u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x14832c: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x14832cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x148330: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x148330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x148334: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x148334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x148338: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x148338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x14833c: 0x70032389  pcpyld      $a0, $zero, $v1
    ctx->pc = 0x14833cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x148340: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x148340u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x148344: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x148344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148348: 0x70098b89  pcpyld      $s1, $zero, $t1
    ctx->pc = 0x148348u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x14834c: 0x0  nop
    ctx->pc = 0x14834cu;
    // NOP
label_148350:
    // 0x148350: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x148350u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148354: 0x11200038  beqz        $t1, . + 4 + (0x38 << 2)
    ctx->pc = 0x148354u;
    {
        const bool branch_taken_0x148354 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x148358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148354u;
        // 0x148358: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148354) {
            ctx->pc = 0x148438u;
            goto label_148438;
        }
    }
    ctx->pc = 0x14835Cu;
    // 0x14835c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14835cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148360:
    // 0x148360: 0x2553003f  addiu       $s3, $t2, 0x3F
    ctx->pc = 0x148360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 63));
    // 0x148364: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x148364u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x148368: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x148368u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14836c: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x14836cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x148370: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x148370u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x148374: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x148374u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x148378: 0x139c38  dsll        $s3, $s3, 16
    ctx->pc = 0x148378u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 16);
    // 0x14837c: 0x1f39825  or          $s3, $t7, $s3
    ctx->pc = 0x14837cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
    // 0x148380: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x148380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x148384: 0x2689825  or          $s3, $s3, $t0
    ctx->pc = 0x148384u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 8));
    // 0x148388: 0x292f0008  slti        $t7, $t1, 0x8
    ctx->pc = 0x148388u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x14838c: 0x254a0040  addiu       $t2, $t2, 0x40
    ctx->pc = 0x14838cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x148390: 0xfd930000  sd          $s3, 0x0($t4)
    ctx->pc = 0x148390u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 19));
    // 0x148394: 0xfd870008  sd          $a3, 0x8($t4)
    ctx->pc = 0x148394u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 7));
    // 0x148398: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x148398u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14839c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x14839cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x1483a0: 0xaf8c8554  sw          $t4, -0x7AAC($gp)
    ctx->pc = 0x1483a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 12));
    // 0x1483a4: 0x920c0000  lbu         $t4, 0x0($s0)
    ctx->pc = 0x1483a4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1483a8: 0x8f938554  lw          $s3, -0x7AAC($gp)
    ctx->pc = 0x1483a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1483ac: 0xc6638  dsll        $t4, $t4, 24
    ctx->pc = 0x1483acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 24);
    // 0x1483b0: 0x1866025  or          $t4, $t4, $a2
    ctx->pc = 0x1483b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x1483b4: 0xfe6c0000  sd          $t4, 0x0($s3)
    ctx->pc = 0x1483b4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 12));
    // 0x1483b8: 0xfe650008  sd          $a1, 0x8($s3)
    ctx->pc = 0x1483b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 5));
    // 0x1483bc: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x1483bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1483c0: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x1483c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x1483c4: 0xaf8c8554  sw          $t4, -0x7AAC($gp)
    ctx->pc = 0x1483c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 12));
    // 0x1483c8: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x1483c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1483cc: 0x8f938554  lw          $s3, -0x7AAC($gp)
    ctx->pc = 0x1483ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1483d0: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x1483d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1483d4: 0x1846025  or          $t4, $t4, $a0
    ctx->pc = 0x1483d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 4));
    // 0x1483d8: 0xfe6c0000  sd          $t4, 0x0($s3)
    ctx->pc = 0x1483d8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 12));
    // 0x1483dc: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x1483dcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
    // 0x1483e0: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x1483e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1483e4: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x1483e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x1483e8: 0xaf8c8554  sw          $t4, -0x7AAC($gp)
    ctx->pc = 0x1483e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 12));
    // 0x1483ec: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x1483ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1483f0: 0x8f938554  lw          $s3, -0x7AAC($gp)
    ctx->pc = 0x1483f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1483f4: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x1483f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1483f8: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x1483f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x1483fc: 0xfe6c0000  sd          $t4, 0x0($s3)
    ctx->pc = 0x1483fcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 12));
    // 0x148400: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x148400u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
    // 0x148404: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x148404u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148408: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x148408u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x14840c: 0xaf8c8554  sw          $t4, -0x7AAC($gp)
    ctx->pc = 0x14840cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 12));
    // 0x148410: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x148410u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x148414: 0x8f938554  lw          $s3, -0x7AAC($gp)
    ctx->pc = 0x148414u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148418: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x148418u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x14841c: 0x1916025  or          $t4, $t4, $s1
    ctx->pc = 0x14841cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 17));
    // 0x148420: 0xfe6c0000  sd          $t4, 0x0($s3)
    ctx->pc = 0x148420u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 12));
    // 0x148424: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x148424u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
    // 0x148428: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x148428u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14842c: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x14842cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x148430: 0x15e0ffcb  bnez        $t7, . + 4 + (-0x35 << 2)
    ctx->pc = 0x148430u;
    {
        const bool branch_taken_0x148430 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x148434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148430u;
        // 0x148434: 0xaf8c8554  sw          $t4, -0x7AAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148430) {
            ctx->pc = 0x148360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148360;
        }
    }
    ctx->pc = 0x148438u;
label_148438:
    // 0x148438: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x148438u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x14843c: 0x172482b  sltu        $t1, $t3, $s2
    ctx->pc = 0x14843cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x148440: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x148440u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x148444: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x148444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x148448: 0x1520ffc1  bnez        $t1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x148448u;
    {
        const bool branch_taken_0x148448 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x14844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148448u;
        // 0x14844c: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148448) {
            ctx->pc = 0x148350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148350;
        }
    }
    ctx->pc = 0x148450u;
label_148450:
    // 0x148450: 0x8f858554  lw          $a1, -0x7AAC($gp)
    ctx->pc = 0x148450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148454: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x148454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x148458: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x148458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x14845c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x14845cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x148460: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x148460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x148464: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x148464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x148468: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x148468u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x14846c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x14846cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x148470: 0x8f828554  lw          $v0, -0x7AAC($gp)
    ctx->pc = 0x148470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148474: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x148474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x148478: 0xaf828554  sw          $v0, -0x7AAC($gp)
    ctx->pc = 0x148478u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 2));
    // 0x14847c: 0x96850024  lhu         $a1, 0x24($s4)
    ctx->pc = 0x14847cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x148480: 0x96860026  lhu         $a2, 0x26($s4)
    ctx->pc = 0x148480u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 38)));
    // 0x148484: 0xc05239c  jal         func_148E70
    ctx->pc = 0x148484u;
    SET_GPR_U32(ctx, 31, 0x14848Cu);
    ctx->pc = 0x148488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148484u;
    // 0x148488: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E70u, 0x148484u, 0x14848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14848Cu;
label_14848c:
    // 0x14848c: 0x96850024  lhu         $a1, 0x24($s4)
    ctx->pc = 0x14848cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x148490: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x148490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x148494: 0x96860026  lhu         $a2, 0x26($s4)
    ctx->pc = 0x148494u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 38)));
    // 0x148498: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x148498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x14849c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x14849cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484a0: 0xc05243c  jal         func_1490F0
    ctx->pc = 0x1484A0u;
    SET_GPR_U32(ctx, 31, 0x1484A8u);
    ctx->pc = 0x1484A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1484A0u;
    // 0x1484a4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490F0u, 0x1484A0u, 0x1484A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484A8u;
label_1484a8:
    // 0x1484a8: 0x8f878554  lw          $a3, -0x7AAC($gp)
    ctx->pc = 0x1484a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1484ac: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x1484acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x1484b0: 0x346600c0  ori         $a2, $v1, 0xC0
    ctx->pc = 0x1484b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x1484b4: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x1484b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x1484b8: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1484b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1484bc: 0x3484020b  ori         $a0, $a0, 0x20B
    ctx->pc = 0x1484bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)523);
    // 0x1484c0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1484c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1484c4: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1484c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x1484c8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x1484c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x1484cc: 0x8f858554  lw          $a1, -0x7AAC($gp)
    ctx->pc = 0x1484ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1484d0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1484d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1484d4: 0xaf858554  sw          $a1, -0x7AAC($gp)
    ctx->pc = 0x1484d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 5));
    // 0x1484d8: 0x8f858554  lw          $a1, -0x7AAC($gp)
    ctx->pc = 0x1484d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1484dc: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1484dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x1484e0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1484e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1484e4: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1484e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1484e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1484e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1484ec: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1484ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x1484f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1484f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1484f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1484f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1484f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1484f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1484fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1484fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148500: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x148500u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148504: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x148504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14850c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14850cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148518: 0x3e00008  jr          $ra
    ctx->pc = 0x148518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148518u;
        // 0x14851c: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148520u;
}
