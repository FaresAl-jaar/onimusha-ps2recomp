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

// Function: sub_0025D730
// Address: 0x25d730 - 0x25d8c8
void sub_0025D730_0x25d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D730_0x25d730");
#endif

    switch (ctx->pc) {
        case 0x25d750u: goto label_25d750;
        case 0x25d7b0u: goto label_25d7b0;
        case 0x25d870u: goto label_25d870;
        default: break;
    }

    ctx->pc = 0x25d730u;

    // 0x25d730: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x25d730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x25d734: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x25d734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25d738: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x25D738u;
    {
        const bool branch_taken_0x25d738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D738u;
        // 0x25d73c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d738) {
            ctx->pc = 0x25D7D0u;
            goto label_25d7d0;
        }
    }
    ctx->pc = 0x25D740u;
    // 0x25d740: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x25d740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25d744: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x25D744u;
    {
        const bool branch_taken_0x25d744 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D744u;
        // 0x25d748: 0x24a6fff8  addiu       $a2, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d744) {
            ctx->pc = 0x25D7A0u;
            goto label_25d7a0;
        }
    }
    ctx->pc = 0x25D74Cu;
    // 0x25d74c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x25d74cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d750:
    // 0x25d750: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x25d750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x25d754: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d758: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x25d758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x25d75c: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x25d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25d760: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x25d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25d764: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x25d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d768: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x25d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d76c: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x25d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d770: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x25d770u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x25d774: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x25d774u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x25d778: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x25d778u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x25d77c: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x25d77cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x25d780: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x25d780u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x25d784: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x25d784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d788: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x25d788u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x25d78c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x25d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d790: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x25d790u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x25d794: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x25d794u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x25d798: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x25D798u;
    {
        const bool branch_taken_0x25d798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D798u;
        // 0x25d79c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d798) {
            ctx->pc = 0x25D750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d750;
        }
    }
    ctx->pc = 0x25D7A0u;
label_25d7a0:
    // 0x25d7a0: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x25d7a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25d7a4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x25D7A4u;
    {
        const bool branch_taken_0x25d7a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7A4u;
        // 0x25d7a8: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7a4) {
            ctx->pc = 0x25D7D0u;
            goto label_25d7d0;
        }
    }
    ctx->pc = 0x25D7ACu;
    // 0x25d7ac: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25d7b0:
    // 0x25d7b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x25d7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x25d7b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d7b8: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x25d7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25d7bc: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x25d7bcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x25d7c0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25d7c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25D7C4u;
    {
        const bool branch_taken_0x25d7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d7c4) {
            ctx->pc = 0x25D7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d7b0;
        }
    }
    ctx->pc = 0x25D7CCu;
    // 0x25d7cc: 0x0  nop
    ctx->pc = 0x25d7ccu;
    // NOP
label_25d7d0:
    // 0x25d7d0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x25d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25d7d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x25d7d8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x25d7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x25d7dc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x25d7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25d7e0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x25d7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d7e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25d7e8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x25d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x25d7ec: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x25d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25d7f0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x25d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x25d7f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D7F4u;
    {
        const bool branch_taken_0x25d7f4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x25D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7F4u;
        // 0x25d7f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7f4) {
            ctx->pc = 0x25D808u;
            goto label_25d808;
        }
    }
    ctx->pc = 0x25D7FCu;
    // 0x25d7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d800: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25D800u;
    {
        const bool branch_taken_0x25d800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D800u;
        // 0x25d804: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d800) {
            ctx->pc = 0x25D820u;
            goto label_25d820;
        }
    }
    ctx->pc = 0x25D808u;
label_25d808:
    // 0x25d808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25d80c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25d80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25d810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d814: 0x0  nop
    ctx->pc = 0x25d814u;
    // NOP
    // 0x25d818: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25d818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25d81c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25d81cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25d820:
    // 0x25d820: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x25d820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x25d824: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x25d824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x25d828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d82c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25d82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d830: 0x0  nop
    ctx->pc = 0x25d830u;
    // NOP
    // 0x25d834: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x25d834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x25d838: 0x46003902  mul.s       $f4, $f7, $f0
    ctx->pc = 0x25d838u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x25d83c: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x25d83cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d840: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x25D840u;
    {
        const bool branch_taken_0x25d840 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d840) {
            ctx->pc = 0x25D860u;
            goto label_25d860;
        }
    }
    ctx->pc = 0x25D848u;
    // 0x25d848: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d84c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25d84cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d850: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D850u;
    {
        const bool branch_taken_0x25d850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D850u;
        // 0x25d854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d850) {
            ctx->pc = 0x25D860u;
            goto label_25d860;
        }
    }
    ctx->pc = 0x25D858u;
    // 0x25d858: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25D858u;
    {
        const bool branch_taken_0x25d858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d858) {
            ctx->pc = 0x25D8C0u;
            goto label_25d8c0;
        }
    }
    ctx->pc = 0x25D860u;
label_25d860:
    // 0x25d860: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x25d860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25d864: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x25D864u;
    {
        const bool branch_taken_0x25d864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D864u;
        // 0x25d868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d864) {
            ctx->pc = 0x25D8B8u;
            goto label_25d8b8;
        }
    }
    ctx->pc = 0x25D86Cu;
    // 0x25d86c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25d86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25d870:
    // 0x25d870: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x25d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d874: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x25d874u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d878: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x25D878u;
    {
        const bool branch_taken_0x25d878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d878) {
            ctx->pc = 0x25D8A8u;
            goto label_25d8a8;
        }
    }
    ctx->pc = 0x25D880u;
    // 0x25d880: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x25d880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d884: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25D884u;
    {
        const bool branch_taken_0x25d884 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D884u;
        // 0x25d888: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d884) {
            ctx->pc = 0x25D8A0u;
            goto label_25d8a0;
        }
    }
    ctx->pc = 0x25D88Cu;
    // 0x25d88c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x25d88cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d890: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D890u;
    {
        const bool branch_taken_0x25d890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d890) {
            ctx->pc = 0x25D8A0u;
            goto label_25d8a0;
        }
    }
    ctx->pc = 0x25D898u;
    // 0x25d898: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25D898u;
    {
        const bool branch_taken_0x25d898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d898) {
            ctx->pc = 0x25D8C0u;
            goto label_25d8c0;
        }
    }
    ctx->pc = 0x25D8A0u;
label_25d8a0:
    // 0x25d8a0: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x25d8a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x25d8a4: 0x0  nop
    ctx->pc = 0x25d8a4u;
    // NOP
label_25d8a8:
    // 0x25d8a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25d8ac: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x25d8acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25d8b0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x25D8B0u;
    {
        const bool branch_taken_0x25d8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8B0u;
        // 0x25d8b4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8b0) {
            ctx->pc = 0x25D870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d870;
        }
    }
    ctx->pc = 0x25D8B8u;
label_25d8b8:
    // 0x25d8b8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x25d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x25d8bc: 0x0  nop
    ctx->pc = 0x25d8bcu;
    // NOP
label_25d8c0:
    // 0x25d8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D8C8u;
}
