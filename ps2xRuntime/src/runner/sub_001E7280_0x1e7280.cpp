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

// Function: sub_001E7280
// Address: 0x1e7280 - 0x1e7428
void sub_001E7280_0x1e7280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7280_0x1e7280");
#endif

    switch (ctx->pc) {
        case 0x1e7334u: goto label_1e7334;
        case 0x1e7404u: goto label_1e7404;
        default: break;
    }

    ctx->pc = 0x1e7280u;

    // 0x1e7280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7284: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e7284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e7288: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e728c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e728cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7294: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e7294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e729c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e729cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e72a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E72A0u;
    {
        const bool branch_taken_0x1e72a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E72A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72A0u;
        // 0x1e72a4: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72a0) {
            ctx->pc = 0x1E72B0u;
            goto label_1e72b0;
        }
    }
    ctx->pc = 0x1E72A8u;
    // 0x1e72a8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1E72A8u;
    {
        const bool branch_taken_0x1e72a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72A8u;
        // 0x1e72ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72a8) {
            ctx->pc = 0x1E7410u;
            goto label_1e7410;
        }
    }
    ctx->pc = 0x1E72B0u;
label_1e72b0:
    // 0x1e72b0: 0x8e480070  lw          $t0, 0x70($s2)
    ctx->pc = 0x1e72b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1e72b4: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x1e72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1e72b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e72b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e72bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E72BCu;
    {
        const bool branch_taken_0x1e72bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72BCu;
        // 0x1e72c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72bc) {
            ctx->pc = 0x1E72F8u;
            goto label_1e72f8;
        }
    }
    ctx->pc = 0x1E72C4u;
    // 0x1e72c4: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x1e72c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1e72c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1e72c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e72cc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1e72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e72d0: 0x3c02008e  lui         $v0, 0x8E
    ctx->pc = 0x1e72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)142 << 16));
    // 0x1e72d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e72d8: 0x2442e0e2  addiu       $v0, $v0, -0x1F1E
    ctx->pc = 0x1e72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959330));
    // 0x1e72dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e72e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e72e4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1e72e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e72e8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E72E8u;
    {
        const bool branch_taken_0x1e72e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e72e8) {
            ctx->pc = 0x1E72F8u;
            goto label_1e72f8;
        }
    }
    ctx->pc = 0x1E72F0u;
    // 0x1e72f0: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x1e72f0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1e72f4: 0x0  nop
    ctx->pc = 0x1e72f4u;
    // NOP
label_1e72f8:
    // 0x1e72f8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x1e72f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1e72fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E72FCu;
    {
        const bool branch_taken_0x1e72fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72FCu;
        // 0x1e7300: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72fc) {
            ctx->pc = 0x1E7320u;
            goto label_1e7320;
        }
    }
    ctx->pc = 0x1E7304u;
    // 0x1e7304: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x1e7304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1e7308: 0x3c02008e  lui         $v0, 0x8E
    ctx->pc = 0x1e7308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)142 << 16));
    // 0x1e730c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1e730cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e7310: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x1e7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
    // 0x1e7314: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e7314u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7318: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e731c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1e731cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7320:
    // 0x1e7320: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1E7320u;
    {
        const bool branch_taken_0x1e7320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7320u;
        // 0x1e7324: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7320) {
            ctx->pc = 0x1E7408u;
            goto label_1e7408;
        }
    }
    ctx->pc = 0x1E7328u;
    // 0x1e7328: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1e7328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1e732c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E732Cu;
    SET_GPR_U32(ctx, 31, 0x1E7334u);
    ctx->pc = 0x1E7330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E732Cu;
    // 0x1e7330: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E732Cu, 0x1E7334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7334u;
label_1e7334:
    // 0x1e7334: 0x96430036  lhu         $v1, 0x36($s2)
    ctx->pc = 0x1e7334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x1e7338: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e7338u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e733c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1e733cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1e7340: 0x3c047f00  lui         $a0, 0x7F00
    ctx->pc = 0x1e7340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32512 << 16));
    // 0x1e7344: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e7344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e7348: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1e7348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e734c: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x1e734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7354: 0x0  nop
    ctx->pc = 0x1e7354u;
    // NOP
    // 0x1e7358: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e7358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e735c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e735cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e7360: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1e7360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1e7364: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x1e7364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1e7368: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1e736c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1e736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1e7370: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1e7370u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1e7374: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1e7374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e7378: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1e7378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1e737c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e737cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e7380: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e7380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e7384: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e7384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1e7388: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x1e7388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e738c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1e738cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1e7390: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e7390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7394: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1e7394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1e7398: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1e7398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e739c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e739cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e73a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E73A0u;
    {
        const bool branch_taken_0x1e73a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73A0u;
        // 0x1e73a4: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73a0) {
            ctx->pc = 0x1E73B8u;
            goto label_1e73b8;
        }
    }
    ctx->pc = 0x1E73A8u;
    // 0x1e73a8: 0x3442f972  ori         $v0, $v0, 0xF972
    ctx->pc = 0x1e73a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63858);
    // 0x1e73ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E73ACu;
    {
        const bool branch_taken_0x1e73ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73ACu;
        // 0x1e73b0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73ac) {
            ctx->pc = 0x1E73E8u;
            goto label_1e73e8;
        }
    }
    ctx->pc = 0x1E73B4u;
    // 0x1e73b4: 0x0  nop
    ctx->pc = 0x1e73b4u;
    // NOP
label_1e73b8:
    // 0x1e73b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e73b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e73bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e73bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e73c0: 0x0  nop
    ctx->pc = 0x1e73c0u;
    // NOP
    // 0x1e73c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e73c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e73c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E73C8u;
    {
        const bool branch_taken_0x1e73c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e73c8) {
            ctx->pc = 0x1E73D4u;
            goto label_1e73d4;
        }
    }
    ctx->pc = 0x1E73D0u;
    // 0x1e73d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1e73d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1e73d4:
    // 0x1e73d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e73d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e73d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e73dc: 0x0  nop
    ctx->pc = 0x1e73dcu;
    // NOP
    // 0x1e73e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e73e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e73e4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1e73e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1e73e8:
    // 0x1e73e8: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1e73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x1e73ec: 0x3443b717  ori         $v1, $v0, 0xB717
    ctx->pc = 0x1e73ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x1e73f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e73f4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1e73f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e73f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1e73f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1e73fc: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x1E73FCu;
    SET_GPR_U32(ctx, 31, 0x1E7404u);
    ctx->pc = 0x1E7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E73FCu;
    // 0x1e7400: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x1E73FCu, 0x1E7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7404u;
label_1e7404:
    // 0x1e7404: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1e7404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1e7408:
    // 0x1e7408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e740c: 0x0  nop
    ctx->pc = 0x1e740cu;
    // NOP
label_1e7410:
    // 0x1e7410: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e7410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e741c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e741cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7420: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7420u;
        // 0x1e7424: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7428u;
}
