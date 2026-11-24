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

// Function: sub_001B7C80
// Address: 0x1b7c80 - 0x1b8240
void sub_001B7C80_0x1b7c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7C80_0x1b7c80");
#endif

    switch (ctx->pc) {
        case 0x1b7cdcu: goto label_1b7cdc;
        case 0x1b7cf0u: goto label_1b7cf0;
        case 0x1b7d00u: goto label_1b7d00;
        case 0x1b7d10u: goto label_1b7d10;
        case 0x1b7d18u: goto label_1b7d18;
        case 0x1b7ec8u: goto label_1b7ec8;
        case 0x1b7f28u: goto label_1b7f28;
        case 0x1b7f3cu: goto label_1b7f3c;
        case 0x1b7f50u: goto label_1b7f50;
        case 0x1b7fd8u: goto label_1b7fd8;
        case 0x1b8014u: goto label_1b8014;
        case 0x1b8088u: goto label_1b8088;
        case 0x1b8098u: goto label_1b8098;
        case 0x1b80a8u: goto label_1b80a8;
        case 0x1b8120u: goto label_1b8120;
        case 0x1b815cu: goto label_1b815c;
        case 0x1b81d8u: goto label_1b81d8;
        case 0x1b81e8u: goto label_1b81e8;
        case 0x1b81f8u: goto label_1b81f8;
        default: break;
    }

    ctx->pc = 0x1b7c80u;

    // 0x1b7c80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b7c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b7c84: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b7c88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b7c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b7c8c: 0x2442f500  addiu       $v0, $v0, -0xB00
    ctx->pc = 0x1b7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
    // 0x1b7c90: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b7c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b7c94: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b7c98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b7c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b7c9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b7c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b7ca0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b7ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b7ca4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b7ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b7ca8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cac: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1b7cacu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b7cb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b7cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cb4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1b7cb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b7cb8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b7cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b7cbc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b7cbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b7cc0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1b7cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b7cc4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b7cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b7cc8: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1b7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1b7ccc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b7cccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F500u));
    // 0x1b7cd0: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x1b7cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1b7cd4: 0xc041442  jal         func_105108
    ctx->pc = 0x1B7CD4u;
    SET_GPR_U32(ctx, 31, 0x1B7CDCu);
    ctx->pc = 0x1B7CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CD4u;
    // 0x1b7cd8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B7CD4u, 0x1B7CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CDCu;
label_1b7cdc:
    // 0x1b7cdc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b7cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b7ce0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b7ce4: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1b7ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1b7ce8: 0xc041442  jal         func_105108
    ctx->pc = 0x1B7CE8u;
    SET_GPR_U32(ctx, 31, 0x1B7CF0u);
    ctx->pc = 0x1B7CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CE8u;
    // 0x1b7cec: 0x260600d0  addiu       $a2, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B7CE8u, 0x1B7CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CF0u;
label_1b7cf0:
    // 0x1b7cf0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b7cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b7cf4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7cf8: 0xc041494  jal         func_105250
    ctx->pc = 0x1B7CF8u;
    SET_GPR_U32(ctx, 31, 0x1B7D00u);
    ctx->pc = 0x1B7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CF8u;
    // 0x1b7cfc: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x1B7CF8u, 0x1B7D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D00u;
label_1b7d00:
    // 0x1b7d00: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x1b7d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1b7d04: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b7d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7d08: 0xc041442  jal         func_105108
    ctx->pc = 0x1B7D08u;
    SET_GPR_U32(ctx, 31, 0x1B7D10u);
    ctx->pc = 0x1B7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D08u;
    // 0x1b7d0c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B7D08u, 0x1B7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D10u;
label_1b7d10:
    // 0x1b7d10: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1B7D10u;
    SET_GPR_U32(ctx, 31, 0x1B7D18u);
    ctx->pc = 0x1B7D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D10u;
    // 0x1b7d14: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1B7D10u, 0x1B7D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D18u;
label_1b7d18:
    // 0x1b7d18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b7d1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7d20: 0x0  nop
    ctx->pc = 0x1b7d20u;
    // NOP
    // 0x1b7d24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b7d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7d28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7D28u;
    {
        const bool branch_taken_0x1b7d28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7d28) {
            ctx->pc = 0x1B7D40u;
            goto label_1b7d40;
        }
    }
    ctx->pc = 0x1B7D30u;
    // 0x1b7d30: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1b7d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1b7d34: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1b7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x1b7d38: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1b7d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1b7d3c: 0x0  nop
    ctx->pc = 0x1b7d3cu;
    // NOP
label_1b7d40:
    // 0x1b7d40: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1b7d40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b7d44: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b7d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b7d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7D48u;
    {
        const bool branch_taken_0x1b7d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d48) {
            ctx->pc = 0x1B7D60u;
            goto label_1b7d60;
        }
    }
    ctx->pc = 0x1B7D50u;
    // 0x1b7d50: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1b7d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1b7d54: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1b7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1b7d58: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1b7d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1b7d5c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1b7d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1b7d60:
    // 0x1b7d60: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1b7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x1b7d64: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1b7d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x1b7d68: 0x3c034680  lui         $v1, 0x4680
    ctx->pc = 0x1b7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18048 << 16));
    // 0x1b7d6c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1b7d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b7d70: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1b7d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b7d74: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x1b7d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7d78: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b7d78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7d7c: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x1b7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b7d80: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
    // 0x1b7d84: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1b7d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x1b7d88: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x1b7d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b7d8c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1b7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d90: 0xc60700a4  lwc1        $f7, 0xA4($s0)
    ctx->pc = 0x1b7d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b7d94: 0x3c023880  lui         $v0, 0x3880
    ctx->pc = 0x1b7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14464 << 16));
    // 0x1b7d98: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1b7d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7d9c: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x1b7d9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1b7da0: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1b7da0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1b7da4: 0x46071a1c  madd.s      $f8, $f3, $f7
    ctx->pc = 0x1b7da4u;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x1b7da8: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x1b7da8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x1b7dac: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1b7dacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1b7db0: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x1b7db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7db4: 0x4607085c  madd.s      $f1, $f1, $f7
    ctx->pc = 0x1b7db4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[7]));
    // 0x1b7db8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b7db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7dbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b7dc0: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1b7dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1b7dc4: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x1b7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b7dc8: 0xc60400a4  lwc1        $f4, 0xA4($s0)
    ctx->pc = 0x1b7dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b7dcc: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x1b7dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7dd0: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x1b7dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7dd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7dd8: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x1b7dd8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1b7ddc: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1b7ddcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1b7de0: 0x460330dc  madd.s      $f3, $f6, $f3
    ctx->pc = 0x1b7de0u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x1b7de4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b7de4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b7de8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1b7de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1b7dec: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x1b7decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7df0: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x1b7df0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x1b7df4: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1b7df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1b7df8: 0xc60000cc  lwc1        $f0, 0xCC($s0)
    ctx->pc = 0x1b7df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7dfc: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x1b7dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x1b7e00: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x1b7e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x1b7e04: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x1b7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e08: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7e0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7e10: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b7e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b7e14: 0x0  nop
    ctx->pc = 0x1b7e14u;
    // NOP
    // 0x1b7e18: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1b7e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b7e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7e20: 0x0  nop
    ctx->pc = 0x1b7e20u;
    // NOP
    // 0x1b7e24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7e28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7e2c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1b7e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1b7e30: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x1b7e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e34: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7e38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7e38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7e3c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b7e3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b7e40: 0x0  nop
    ctx->pc = 0x1b7e40u;
    // NOP
    // 0x1b7e44: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1b7e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b7e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7e4c: 0x0  nop
    ctx->pc = 0x1b7e4cu;
    // NOP
    // 0x1b7e50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7e54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7e58: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1b7e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1b7e5c: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x1b7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7e64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7e64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7e68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b7e68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b7e6c: 0x0  nop
    ctx->pc = 0x1b7e6cu;
    // NOP
    // 0x1b7e70: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1b7e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b7e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7e78: 0x0  nop
    ctx->pc = 0x1b7e78u;
    // NOP
    // 0x1b7e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7e80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7e84: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1b7e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1b7e88: 0xc60000cc  lwc1        $f0, 0xCC($s0)
    ctx->pc = 0x1b7e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e8c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7e90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7e90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7e94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b7e94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b7e98: 0x0  nop
    ctx->pc = 0x1b7e98u;
    // NOP
    // 0x1b7e9c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1b7e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1b7ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7ea4: 0x0  nop
    ctx->pc = 0x1b7ea4u;
    // NOP
    // 0x1b7ea8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7eac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7eb0: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x1b7eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x1b7eb4: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x1b7eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1b7eb8: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1b7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1b7ebc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1B7EBCu;
    {
        const bool branch_taken_0x1b7ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EBCu;
        // 0x1b7ec0: 0x641804  sllv        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ebc) {
            ctx->pc = 0x1B7F78u;
            goto label_1b7f78;
        }
    }
    ctx->pc = 0x1B7EC4u;
    // 0x1b7ec4: 0x39182  srl         $s2, $v1, 6
    ctx->pc = 0x1b7ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_1b7ec8:
    // 0x1b7ec8: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7EC8u;
    {
        const bool branch_taken_0x1b7ec8 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x1B7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EC8u;
        // 0x1b7ecc: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ec8) {
            ctx->pc = 0x1B7EDCu;
            goto label_1b7edc;
        }
    }
    ctx->pc = 0x1B7ED0u;
    // 0x1b7ed0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1b7ed0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7ed4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7ED4u;
    {
        const bool branch_taken_0x1b7ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7ED4u;
        // 0x1b7ed8: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ed4) {
            ctx->pc = 0x1B7EF4u;
            goto label_1b7ef4;
        }
    }
    ctx->pc = 0x1B7EDCu;
label_1b7edc:
    // 0x1b7edc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1b7edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1b7ee0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b7ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b7ee4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7ee8: 0x0  nop
    ctx->pc = 0x1b7ee8u;
    // NOP
    // 0x1b7eec: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1b7eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b7ef0: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1b7ef0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1b7ef4:
    // 0x1b7ef4: 0xc60300c0  lwc1        $f3, 0xC0($s0)
    ctx->pc = 0x1b7ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7ef8: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1b7ef8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1b7efc: 0xc60200c4  lwc1        $f2, 0xC4($s0)
    ctx->pc = 0x1b7efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7f00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b7f00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f04: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x1b7f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7f08: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x1b7f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7f0c: 0x46041dc2  mul.s       $f23, $f3, $f4
    ctx->pc = 0x1b7f0cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1b7f10: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1b7f10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1b7f14: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b7f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b7f18: 0x46012542  mul.s       $f21, $f4, $f1
    ctx->pc = 0x1b7f18u;
    ctx->f[21] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b7f1c: 0x46041582  mul.s       $f22, $f2, $f4
    ctx->pc = 0x1b7f1cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1b7f20: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1B7F20u;
    {
        const bool branch_taken_0x1b7f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F20u;
        // 0x1b7f24: 0x46002502  mul.s       $f20, $f4, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f20) {
            ctx->pc = 0x1B7F60u;
            goto label_1b7f60;
        }
    }
    ctx->pc = 0x1B7F28u;
label_1b7f28:
    // 0x1b7f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b7f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7f30: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1b7f30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1b7f34: 0xc070818  jal         func_1C2060
    ctx->pc = 0x1B7F34u;
    SET_GPR_U32(ctx, 31, 0x1B7F3Cu);
    ctx->pc = 0x1B7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F34u;
    // 0x1b7f38: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2060u, 0x1B7F34u, 0x1B7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F3Cu;
label_1b7f3c:
    // 0x1b7f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b7f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7f44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b7f44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1b7f48: 0xc070818  jal         func_1C2060
    ctx->pc = 0x1B7F48u;
    SET_GPR_U32(ctx, 31, 0x1B7F50u);
    ctx->pc = 0x1B7F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F48u;
    // 0x1b7f4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2060u, 0x1B7F48u, 0x1B7F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F50u;
label_1b7f50:
    // 0x1b7f50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b7f50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b7f54: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1b7f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1b7f58: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B7F58u;
    {
        const bool branch_taken_0x1b7f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f58) {
            ctx->pc = 0x1B7F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7f28;
        }
    }
    ctx->pc = 0x1B7F60u;
label_1b7f60:
    // 0x1b7f60: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1b7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1b7f64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b7f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b7f68: 0x53082b  sltu        $at, $v0, $s3
    ctx->pc = 0x1b7f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1b7f6c: 0x1020ffd6  beqz        $at, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1B7F6Cu;
    {
        const bool branch_taken_0x1b7f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f6c) {
            ctx->pc = 0x1B7EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7ec8;
        }
    }
    ctx->pc = 0x1B7F74u;
    // 0x1b7f74: 0x0  nop
    ctx->pc = 0x1b7f74u;
    // NOP
label_1b7f78:
    // 0x1b7f78: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1b7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1b7f7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b7f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7f80: 0xc60400c8  lwc1        $f4, 0xC8($s0)
    ctx->pc = 0x1b7f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b7f84: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1b7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1b7f88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7f8c: 0xc60500ac  lwc1        $f5, 0xAC($s0)
    ctx->pc = 0x1b7f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b7f90: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x1b7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x1b7f94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7f98: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1b7f98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1b7f9c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b7fa0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b7fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b7fa4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b7fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b7fa8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b7fa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b7fac: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1b7facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b7fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7fb4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1b7fb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1b7fb8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7fb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b7fbc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1b7fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1b7fc0: 0x46040302  mul.s       $f12, $f0, $f4
    ctx->pc = 0x1b7fc0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b7fc4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7fc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7fc8: 0x44131000  mfc1        $s3, $f2
    ctx->pc = 0x1b7fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1b7fcc: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x1b7fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1b7fd0: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1B7FD0u;
    SET_GPR_U32(ctx, 31, 0x1B7FD8u);
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1B7FD0u, 0x1B7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FD8u;
label_1b7fd8:
    // 0x1b7fd8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b7fdc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b7fe0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7fe4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b7fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b7fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7fec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b7fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7ff0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7ff4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7ff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b7ff8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b7ff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b7ffc: 0x0  nop
    ctx->pc = 0x1b7ffcu;
    // NOP
    // 0x1b8000: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8004: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b8004u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b8008: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b8008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b800c: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B800Cu;
    SET_GPR_U32(ctx, 31, 0x1B8014u);
    ctx->pc = 0x1B8010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B800Cu;
    // 0x1b8010: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B800Cu, 0x1B8014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8014u;
label_1b8014:
    // 0x1b8014: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b8014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b8018: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b8018u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b801c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1b801cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b8020: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B8020u;
    {
        const bool branch_taken_0x1b8020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8020u;
        // 0x1b8024: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8020) {
            ctx->pc = 0x1B80C0u;
            goto label_1b80c0;
        }
    }
    ctx->pc = 0x1B8028u;
    // 0x1b8028: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1b8028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1b802c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1b802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1b8030: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1b8030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b8034: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x1b8034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1b8038: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b8038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b803c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b803cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8040: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b8040u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b8044: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b8044u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b8048: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b8048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b804c: 0x26627fff  addiu       $v0, $s3, 0x7FFF
    ctx->pc = 0x1b804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32767));
    // 0x1b8050: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1b8050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b8054: 0x24421001  addiu       $v0, $v0, 0x1001
    ctx->pc = 0x1b8054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4097));
    // 0x1b8058: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1b8058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b805c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b805cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8060: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b8060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b8064: 0x26427fff  addiu       $v0, $s2, 0x7FFF
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32767));
    // 0x1b8068: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b8068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b806c: 0x24420701  addiu       $v0, $v0, 0x701
    ctx->pc = 0x1b806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1793));
    // 0x1b8070: 0xa49825  or          $s3, $a1, $a0
    ctx->pc = 0x1b8070u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1b8074: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b8074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8078: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b8078u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b807c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b8080: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b8080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8084: 0x449025  or          $s2, $v0, $a0
    ctx->pc = 0x1b8084u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1b8088:
    // 0x1b8088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b808c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b808cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b8090: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B8090u;
    SET_GPR_U32(ctx, 31, 0x1B8098u);
    ctx->pc = 0x1B8094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8090u;
    // 0x1b8094: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B8090u, 0x1B8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8098u;
label_1b8098:
    // 0x1b8098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b809c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b80a0: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B80A0u;
    SET_GPR_U32(ctx, 31, 0x1B80A8u);
    ctx->pc = 0x1B80A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80A0u;
    // 0x1b80a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B80A0u, 0x1B80A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80A8u;
label_1b80a8:
    // 0x1b80a8: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1b80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b80ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b80acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b80b0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1b80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1b80b4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b80b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b80b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B80B8u;
    {
        const bool branch_taken_0x1b80b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b80b8) {
            ctx->pc = 0x1B8088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8088;
        }
    }
    ctx->pc = 0x1B80C0u;
label_1b80c0:
    // 0x1b80c0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1b80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1b80c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b80c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b80c8: 0xc60400cc  lwc1        $f4, 0xCC($s0)
    ctx->pc = 0x1b80c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b80cc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1b80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1b80d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b80d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b80d4: 0xc60500ac  lwc1        $f5, 0xAC($s0)
    ctx->pc = 0x1b80d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b80d8: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x1b80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x1b80dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b80dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b80e0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1b80e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1b80e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b80e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b80e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b80ec: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b80ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b80f0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b80f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b80f4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1b80f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b80f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b80f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b80fc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1b80fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1b8100: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b8100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b8104: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1b8104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1b8108: 0x46040302  mul.s       $f12, $f0, $f4
    ctx->pc = 0x1b8108u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b810c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b810cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b8110: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x1b8110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1b8114: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1b8114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1b8118: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1B8118u;
    SET_GPR_U32(ctx, 31, 0x1B8120u);
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1B8118u, 0x1B8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8120u;
label_1b8120:
    // 0x1b8120: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1b8120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1b8124: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b8124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b8128: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b8128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b812c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b8130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8138: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b8138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b813c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b813cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b8140: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b8140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b8144: 0x0  nop
    ctx->pc = 0x1b8144u;
    // NOP
    // 0x1b8148: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b814c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b814cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b8150: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b8150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b8154: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B8154u;
    SET_GPR_U32(ctx, 31, 0x1B815Cu);
    ctx->pc = 0x1B8158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8154u;
    // 0x1b8158: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B8154u, 0x1B815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B815Cu;
label_1b815c:
    // 0x1b815c: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1b815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b8160: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1b8164: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1b8164u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b8168: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B8168u;
    {
        const bool branch_taken_0x1b8168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8168u;
        // 0x1b816c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8168) {
            ctx->pc = 0x1B8210u;
            goto label_1b8210;
        }
    }
    ctx->pc = 0x1B8170u;
    // 0x1b8170: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1b8170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1b8174: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1b8174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1b8178: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1b8178u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b817c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1b817cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b8180: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b8180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8184: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b8184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8188: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b8188u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b818c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b818cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b8190: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b8190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b8194: 0x26427fff  addiu       $v0, $s2, 0x7FFF
    ctx->pc = 0x1b8194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32767));
    // 0x1b8198: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1b8198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b819c: 0x24421001  addiu       $v0, $v0, 0x1001
    ctx->pc = 0x1b819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4097));
    // 0x1b81a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b81a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b81a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b81a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b81a8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b81a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b81ac: 0x26027fff  addiu       $v0, $s0, 0x7FFF
    ctx->pc = 0x1b81acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32767));
    // 0x1b81b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b81b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b81b4: 0x24420701  addiu       $v0, $v0, 0x701
    ctx->pc = 0x1b81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1793));
    // 0x1b81b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b81b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b81bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b81bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b81c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b81c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b81c4: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x1b81c4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x1b81c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b81c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b81cc: 0xa48025  or          $s0, $a1, $a0
    ctx->pc = 0x1b81ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1b81d0: 0x449025  or          $s2, $v0, $a0
    ctx->pc = 0x1b81d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b81d4: 0x0  nop
    ctx->pc = 0x1b81d4u;
    // NOP
label_1b81d8:
    // 0x1b81d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b81d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81dc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b81dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b81e0: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B81E0u;
    SET_GPR_U32(ctx, 31, 0x1B81E8u);
    ctx->pc = 0x1B81E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81E0u;
    // 0x1b81e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B81E0u, 0x1B81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81E8u;
label_1b81e8:
    // 0x1b81e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b81e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b81ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b81f0: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B81F0u;
    SET_GPR_U32(ctx, 31, 0x1B81F8u);
    ctx->pc = 0x1B81F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81F0u;
    // 0x1b81f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B81F0u, 0x1B81F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81F8u;
label_1b81f8:
    // 0x1b81f8: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1b81f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1b81fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b81fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b8200: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1b8200u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1b8204: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1b8204u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b8208: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B8208u;
    {
        const bool branch_taken_0x1b8208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8208) {
            ctx->pc = 0x1B81D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b81d8;
        }
    }
    ctx->pc = 0x1B8210u;
label_1b8210:
    // 0x1b8210: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b8210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8214: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b8214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8218: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1b8218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b821c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b821cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8220: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1b8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b8224: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b8224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8228: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b822c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b822cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8230: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b8230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b8234: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b8234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8238: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8238u;
        // 0x1b823c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8240u;
}
