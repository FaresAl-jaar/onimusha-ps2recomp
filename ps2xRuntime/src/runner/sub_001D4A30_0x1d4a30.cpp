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

// Function: sub_001D4A30
// Address: 0x1d4a30 - 0x1d4e6c
void sub_001D4A30_0x1d4a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4A30_0x1d4a30");
#endif

    switch (ctx->pc) {
        case 0x1d4a8cu: goto label_1d4a8c;
        case 0x1d4ae8u: goto label_1d4ae8;
        case 0x1d4b10u: goto label_1d4b10;
        case 0x1d4b24u: goto label_1d4b24;
        case 0x1d4b58u: goto label_1d4b58;
        case 0x1d4b98u: goto label_1d4b98;
        case 0x1d4c48u: goto label_1d4c48;
        case 0x1d4c78u: goto label_1d4c78;
        case 0x1d4c98u: goto label_1d4c98;
        default: break;
    }

    ctx->pc = 0x1d4a30u;

    // 0x1d4a30: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1d4a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1d4a34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d4a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d4a38: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d4a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1d4a3c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d4a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1d4a40: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x1d4a40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a44: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d4a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d4a48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d4a4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d4a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d4a50: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1d4a50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d4a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d4a58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d4a5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d4a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d4a60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d4a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d4a68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d4a68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d4a6c: 0xafa4019c  sw          $a0, 0x19C($sp)
    ctx->pc = 0x1d4a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
    // 0x1d4a70: 0xafa50198  sw          $a1, 0x198($sp)
    ctx->pc = 0x1d4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 5));
    // 0x1d4a74: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1d4a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1d4a78: 0x8fb4019c  lw          $s4, 0x19C($sp)
    ctx->pc = 0x1d4a78u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1d4a7c: 0xafa70194  sw          $a3, 0x194($sp)
    ctx->pc = 0x1d4a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 7));
    // 0x1d4a80: 0xafa90190  sw          $t1, 0x190($sp)
    ctx->pc = 0x1d4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 9));
    // 0x1d4a84: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D4A84u;
    SET_GPR_U32(ctx, 31, 0x1D4A8Cu);
    ctx->pc = 0x1D4A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A84u;
    // 0x1d4a88: 0xafab018c  sw          $t3, 0x18C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D4A84u, 0x1D4A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A8Cu;
label_1d4a8c:
    // 0x1d4a8c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x1d4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1d4a90: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x1d4a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d4a94: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d4a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d4a98: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d4a9c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d4a9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4aa0: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x1D4AA0u;
    {
        const bool branch_taken_0x1d4aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AA0u;
        // 0x1d4aa4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aa0) {
            ctx->pc = 0x1D4BC8u;
            goto label_1d4bc8;
        }
    }
    ctx->pc = 0x1D4AA8u;
    // 0x1d4aa8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1d4aac: 0x3c110087  lui         $s1, 0x87
    ctx->pc = 0x1d4aacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)135 << 16));
    // 0x1d4ab0: 0x2631d190  addiu       $s1, $s1, -0x2E70
    ctx->pc = 0x1d4ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955408));
    // 0x1d4ab4: 0x3c100087  lui         $s0, 0x87
    ctx->pc = 0x1d4ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)135 << 16));
    // 0x1d4ab8: 0x8fb70194  lw          $s7, 0x194($sp)
    ctx->pc = 0x1d4ab8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1d4abc: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1d4abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ac0: 0xafb10100  sw          $s1, 0x100($sp)
    ctx->pc = 0x1d4ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 17));
    // 0x1d4ac4: 0x2610f190  addiu       $s0, $s0, -0xE70
    ctx->pc = 0x1d4ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963600));
    // 0x1d4ac8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d4ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d4acc: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1d4ad0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1d4ad4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d4ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d4ad8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d4ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1d4adc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1d4ae0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x1d4ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x1d4ae4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d4ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1d4ae8:
    // 0x1d4ae8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d4aec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4AECu;
    {
        const bool branch_taken_0x1d4aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4aec) {
            ctx->pc = 0x1D4B18u;
            goto label_1d4b18;
        }
    }
    ctx->pc = 0x1D4AF4u;
    // 0x1d4af4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1d4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4af8: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x1d4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d4afc: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x1d4afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d4b00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d4b00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d4b04: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d4b04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d4b08: 0xc075140  jal         func_1D4500
    ctx->pc = 0x1D4B08u;
    SET_GPR_U32(ctx, 31, 0x1D4B10u);
    ctx->pc = 0x1D4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B08u;
    // 0x1d4b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4500u, 0x1D4B08u, 0x1D4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B10u;
label_1d4b10:
    // 0x1d4b10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4B10u;
    {
        const bool branch_taken_0x1d4b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b10) {
            ctx->pc = 0x1D4B28u;
            goto label_1d4b28;
        }
    }
    ctx->pc = 0x1D4B18u;
label_1d4b18:
    // 0x1d4b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b1c: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B24u);
    ctx->pc = 0x1D4B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B1Cu;
    // 0x1d4b20: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D4B1Cu, 0x1D4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B24u;
label_1d4b24:
    // 0x1d4b24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d4b24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d4b28:
    // 0x1d4b28: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d4b2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D4B2Cu;
    {
        const bool branch_taken_0x1d4b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b2c) {
            ctx->pc = 0x1D4B60u;
            goto label_1d4b60;
        }
    }
    ctx->pc = 0x1D4B34u;
    // 0x1d4b34: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x1d4b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d4b38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b3c: 0x8fa80198  lw          $t0, 0x198($sp)
    ctx->pc = 0x1d4b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1d4b40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d4b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b44: 0x8fa901a8  lw          $t1, 0x1A8($sp)
    ctx->pc = 0x1d4b44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d4b48: 0x8faa01a0  lw          $t2, 0x1A0($sp)
    ctx->pc = 0x1d4b48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1d4b4c: 0x8fab01b0  lw          $t3, 0x1B0($sp)
    ctx->pc = 0x1d4b4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1d4b50: 0xc075154  jal         func_1D4550
    ctx->pc = 0x1D4B50u;
    SET_GPR_U32(ctx, 31, 0x1D4B58u);
    ctx->pc = 0x1D4B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B50u;
    // 0x1d4b54: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4550u, 0x1D4B50u, 0x1D4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B58u;
label_1d4b58:
    // 0x1d4b58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D4B58u;
    {
        const bool branch_taken_0x1d4b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b58) {
            ctx->pc = 0x1D4B98u;
            goto label_1d4b98;
        }
    }
    ctx->pc = 0x1D4B60u;
label_1d4b60:
    // 0x1d4b60: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x1d4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1d4b64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D4B64u;
    {
        const bool branch_taken_0x1d4b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b64) {
            ctx->pc = 0x1D4B98u;
            goto label_1d4b98;
        }
    }
    ctx->pc = 0x1D4B6Cu;
    // 0x1d4b6c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d4b70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4B70u;
    {
        const bool branch_taken_0x1d4b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b70) {
            ctx->pc = 0x1D4B88u;
            goto label_1d4b88;
        }
    }
    ctx->pc = 0x1D4B78u;
    // 0x1d4b78: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x1d4b78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d4b7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4B7Cu;
    {
        const bool branch_taken_0x1d4b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B7Cu;
        // 0x1d4b80: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b7c) {
            ctx->pc = 0x1D4B98u;
            goto label_1d4b98;
        }
    }
    ctx->pc = 0x1D4B84u;
    // 0x1d4b84: 0x0  nop
    ctx->pc = 0x1d4b84u;
    // NOP
label_1d4b88:
    // 0x1d4b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d4b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b90: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D4B90u;
    SET_GPR_U32(ctx, 31, 0x1D4B98u);
    ctx->pc = 0x1D4B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B90u;
    // 0x1d4b94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D4B90u, 0x1D4B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B98u;
label_1d4b98:
    // 0x1d4b98: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d4b9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d4ba0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1d4ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d4ba4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4ba8: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1d4bac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1d4bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d4bb0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d4bb4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1d4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1d4bb8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d4bbc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d4bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4bc0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1D4BC0u;
    {
        const bool branch_taken_0x1d4bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BC0u;
        // 0x1d4bc4: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bc0) {
            ctx->pc = 0x1D4AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4ae8;
        }
    }
    ctx->pc = 0x1D4BC8u;
label_1d4bc8:
    // 0x1d4bc8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1d4bcc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d4bccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d4bd0: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x1d4bd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1d4bd4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d4bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1d4bd8: 0x30440010  andi        $a0, $v0, 0x10
    ctx->pc = 0x1d4bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d4bdc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4BDCu;
    {
        const bool branch_taken_0x1d4bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BDCu;
        // 0x1d4be0: 0x27c2ffff  addiu       $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bdc) {
            ctx->pc = 0x1D4BECu;
            goto label_1d4bec;
        }
    }
    ctx->pc = 0x1D4BE4u;
    // 0x1d4be4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4BE4u;
    {
        const bool branch_taken_0x1d4be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BE4u;
        // 0x1d4be8: 0xafbe0170  sw          $fp, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4be4) {
            ctx->pc = 0x1D4BF0u;
            goto label_1d4bf0;
        }
    }
    ctx->pc = 0x1D4BECu;
label_1d4bec:
    // 0x1d4bec: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1d4becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_1d4bf0:
    // 0x1d4bf0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1d4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d4bf4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d4bf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4bf8: 0x10200089  beqz        $at, . + 4 + (0x89 << 2)
    ctx->pc = 0x1D4BF8u;
    {
        const bool branch_taken_0x1d4bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BF8u;
        // 0x1d4bfc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bf8) {
            ctx->pc = 0x1D4E20u;
            goto label_1d4e20;
        }
    }
    ctx->pc = 0x1D4C00u;
    // 0x1d4c00: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1d4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1d4c04: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1d4c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d4c08: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x1d4c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d4c0c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d4c0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d4c10: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1d4c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1d4c14: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1d4c18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4c1c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1d4c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1d4c20: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x1d4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1d4c24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d4c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d4c28: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1d4c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1d4c2c: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x1d4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x1d4c30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d4c34: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1d4c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1d4c38: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x1d4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d4c3c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d4c40: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1d4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1d4c44: 0x0  nop
    ctx->pc = 0x1d4c44u;
    // NOP
label_1d4c48:
    // 0x1d4c48: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d4c4c: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x1d4c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c50: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d4c50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c54: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d4c54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4c58: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
    ctx->pc = 0x1D4C58u;
    {
        const bool branch_taken_0x1d4c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C58u;
        // 0x1d4c5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c58) {
            ctx->pc = 0x1D4E08u;
            goto label_1d4e08;
        }
    }
    ctx->pc = 0x1D4C60u;
    // 0x1d4c60: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x1d4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d4c64: 0x2e21826  xor         $v1, $s7, $v0
    ctx->pc = 0x1d4c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x1d4c68: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1d4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d4c6c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4c6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d4c70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4c74: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1d4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1d4c78:
    // 0x1d4c78: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1d4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x1d4c7c: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x1d4c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d4c80: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1d4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x1d4c84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d4c88: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1d4c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1d4c8c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1d4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d4c90: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D4C90u;
    SET_GPR_U32(ctx, 31, 0x1D4C98u);
    ctx->pc = 0x1D4C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C90u;
    // 0x1d4c94: 0x16b040  sll         $s6, $s6, 1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D4C90u, 0x1D4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C98u;
label_1d4c98:
    // 0x1d4c98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d4c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d4c9c: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x1d4c9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x1d4ca0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1d4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1d4ca4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4CA4u;
    {
        const bool branch_taken_0x1d4ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ca4) {
            ctx->pc = 0x1D4CC0u;
            goto label_1d4cc0;
        }
    }
    ctx->pc = 0x1D4CACu;
    // 0x1d4cac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d4cb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d4cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4cb4: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1d4cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1d4cb8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1d4cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d4cbc: 0x0  nop
    ctx->pc = 0x1d4cbcu;
    // NOP
label_1d4cc0:
    // 0x1d4cc0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d4cc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4CC4u;
    {
        const bool branch_taken_0x1d4cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CC4u;
        // 0x1d4cc8: 0x3c020087  lui         $v0, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cc4) {
            ctx->pc = 0x1D4CE0u;
            goto label_1d4ce0;
        }
    }
    ctx->pc = 0x1D4CCCu;
    // 0x1d4ccc: 0x2442f190  addiu       $v0, $v0, -0xE70
    ctx->pc = 0x1d4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963600));
    // 0x1d4cd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d4cd4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d4cd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4cd8: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1d4cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1d4cdc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1d4cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1d4ce0:
    // 0x1d4ce0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4ce4: 0x12220016  beq         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D4CE4u;
    {
        const bool branch_taken_0x1d4ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE4u;
        // 0x1d4ce8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ce4) {
            ctx->pc = 0x1D4D40u;
            goto label_1d4d40;
        }
    }
    ctx->pc = 0x1D4CECu;
    // 0x1d4cec: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4CECu;
    {
        const bool branch_taken_0x1d4cec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d4cec) {
            ctx->pc = 0x1D4D18u;
            goto label_1d4d18;
        }
    }
    ctx->pc = 0x1D4CF4u;
    // 0x1d4cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4cf8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4CF8u;
    {
        const bool branch_taken_0x1d4cf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d4cf8) {
            ctx->pc = 0x1D4D08u;
            goto label_1d4d08;
        }
    }
    ctx->pc = 0x1D4D00u;
    // 0x1d4d00: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4D00u;
    {
        const bool branch_taken_0x1d4d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d00) {
            ctx->pc = 0x1D4D58u;
            goto label_1d4d58;
        }
    }
    ctx->pc = 0x1D4D08u;
label_1d4d08:
    // 0x1d4d08: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1d4d08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d4d0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D4D0Cu;
    {
        const bool branch_taken_0x1d4d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D0Cu;
        // 0x1d4d10: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d0c) {
            ctx->pc = 0x1D4D68u;
            goto label_1d4d68;
        }
    }
    ctx->pc = 0x1D4D14u;
    // 0x1d4d14: 0x0  nop
    ctx->pc = 0x1d4d14u;
    // NOP
label_1d4d18:
    // 0x1d4d18: 0x25e001a  div         $zero, $s2, $fp
    ctx->pc = 0x1d4d18u;
    { int32_t divisor = GPR_S32(ctx, 30);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d4d1c: 0x0  nop
    ctx->pc = 0x1d4d1cu;
    // NOP
    // 0x1d4d20: 0x0  nop
    ctx->pc = 0x1d4d20u;
    // NOP
    // 0x1d4d24: 0x1010  mfhi        $v0
    ctx->pc = 0x1d4d24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d4d28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4d2c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d4d30: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d4d30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4d34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D4D34u;
    {
        const bool branch_taken_0x1d4d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D34u;
        // 0x1d4d38: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d34) {
            ctx->pc = 0x1D4D68u;
            goto label_1d4d68;
        }
    }
    ctx->pc = 0x1D4D3Cu;
    // 0x1d4d3c: 0x0  nop
    ctx->pc = 0x1d4d3cu;
    // NOP
label_1d4d40:
    // 0x1d4d40: 0x131043  sra         $v0, $s3, 1
    ctx->pc = 0x1d4d40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
    // 0x1d4d44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4d48: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d4d4c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d4d4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4d50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4D50u;
    {
        const bool branch_taken_0x1d4d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D50u;
        // 0x1d4d54: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d50) {
            ctx->pc = 0x1D4D68u;
            goto label_1d4d68;
        }
    }
    ctx->pc = 0x1D4D58u;
label_1d4d58:
    // 0x1d4d58: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x1d4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1d4d5c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d4d5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4d60: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1d4d60u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1d4d64: 0x0  nop
    ctx->pc = 0x1d4d64u;
    // NOP
label_1d4d68:
    // 0x1d4d68: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d4d6c: 0x32c30007  andi        $v1, $s6, 0x7
    ctx->pc = 0x1d4d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
    // 0x1d4d70: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d4d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d4d74: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1d4d74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4d78: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1d4d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d4d7c: 0x7e840010  sq          $a0, 0x10($s4)
    ctx->pc = 0x1d4d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 4));
    // 0x1d4d80: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d4d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d4d84: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1d4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1d4d88: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d4d8c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d4d8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d4d90: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x1d4d90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
    // 0x1d4d94: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x1d4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x1d4d98: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d4d9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4D9Cu;
    {
        const bool branch_taken_0x1d4d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D9Cu;
        // 0x1d4da0: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d9c) {
            ctx->pc = 0x1D4DC8u;
            goto label_1d4dc8;
        }
    }
    ctx->pc = 0x1D4DA4u;
    // 0x1d4da4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1d4da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1d4da8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4DA8u;
    {
        const bool branch_taken_0x1d4da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4da8) {
            ctx->pc = 0x1D4DB8u;
            goto label_1d4db8;
        }
    }
    ctx->pc = 0x1D4DB0u;
    // 0x1d4db0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4DB0u;
    {
        const bool branch_taken_0x1d4db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DB0u;
        // 0x1d4db4: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4db0) {
            ctx->pc = 0x1D4DC0u;
            goto label_1d4dc0;
        }
    }
    ctx->pc = 0x1D4DB8u;
label_1d4db8:
    // 0x1d4db8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1d4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d4dbc: 0x0  nop
    ctx->pc = 0x1d4dbcu;
    // NOP
label_1d4dc0:
    // 0x1d4dc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D4DC0u;
    {
        const bool branch_taken_0x1d4dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DC0u;
        // 0x1d4dc4: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dc0) {
            ctx->pc = 0x1D4DF0u;
            goto label_1d4df0;
        }
    }
    ctx->pc = 0x1D4DC8u;
label_1d4dc8:
    // 0x1d4dc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1d4dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1d4dcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4DCCu;
    {
        const bool branch_taken_0x1d4dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DCCu;
        // 0x1d4dd0: 0x27c2ffff  addiu       $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dcc) {
            ctx->pc = 0x1D4DE0u;
            goto label_1d4de0;
        }
    }
    ctx->pc = 0x1D4DD4u;
    // 0x1d4dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4DD4u;
    {
        const bool branch_taken_0x1d4dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4dd4) {
            ctx->pc = 0x1D4DE8u;
            goto label_1d4de8;
        }
    }
    ctx->pc = 0x1D4DDCu;
    // 0x1d4ddc: 0x0  nop
    ctx->pc = 0x1d4ddcu;
    // NOP
label_1d4de0:
    // 0x1d4de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4de4: 0x0  nop
    ctx->pc = 0x1d4de4u;
    // NOP
label_1d4de8:
    // 0x1d4de8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1d4de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d4dec: 0x0  nop
    ctx->pc = 0x1d4decu;
    // NOP
label_1d4df0:
    // 0x1d4df0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1d4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d4df4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4df4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d4df8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d4df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4dfc: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1D4DFCu;
    {
        const bool branch_taken_0x1d4dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4dfc) {
            ctx->pc = 0x1D4C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4c78;
        }
    }
    ctx->pc = 0x1D4E04u;
    // 0x1d4e04: 0x0  nop
    ctx->pc = 0x1d4e04u;
    // NOP
label_1d4e08:
    // 0x1d4e08: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d4e0c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1d4e0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d4e10: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x1d4e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4e14: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x1D4E14u;
    {
        const bool branch_taken_0x1d4e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e14) {
            ctx->pc = 0x1D4C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4c48;
        }
    }
    ctx->pc = 0x1D4E1Cu;
    // 0x1d4e1c: 0x0  nop
    ctx->pc = 0x1d4e1cu;
    // NOP
label_1d4e20:
    // 0x1d4e20: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1d4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1d4e24: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x1d4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d4e28: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4E28u;
    {
        const bool branch_taken_0x1d4e28 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E28u;
        // 0x1d4e2c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e28) {
            ctx->pc = 0x1D4E38u;
            goto label_1d4e38;
        }
    }
    ctx->pc = 0x1D4E30u;
    // 0x1d4e30: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d4e34: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d4e34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d4e38:
    // 0x1d4e38: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d4e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d4e3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d4e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d4e40: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d4e40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4e44: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d4e44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4e48: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d4e48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4e4c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d4e4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4e50: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d4e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4e54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d4e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4e58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d4e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4e5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d4e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4e60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4e64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E64u;
        // 0x1d4e68: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4E6Cu;
}
