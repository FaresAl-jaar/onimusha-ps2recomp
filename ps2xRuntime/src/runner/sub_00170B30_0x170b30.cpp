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

// Function: sub_00170B30
// Address: 0x170b30 - 0x1715c0
void sub_00170B30_0x170b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170B30_0x170b30");
#endif

    switch (ctx->pc) {
        case 0x170b9cu: goto label_170b9c;
        case 0x170c28u: goto label_170c28;
        case 0x170c80u: goto label_170c80;
        case 0x170ce0u: goto label_170ce0;
        case 0x170d54u: goto label_170d54;
        case 0x170de8u: goto label_170de8;
        case 0x170e3cu: goto label_170e3c;
        case 0x170f18u: goto label_170f18;
        case 0x1710acu: goto label_1710ac;
        case 0x1710d0u: goto label_1710d0;
        case 0x171110u: goto label_171110;
        case 0x1713a0u: goto label_1713a0;
        case 0x171558u: goto label_171558;
        default: break;
    }

    ctx->pc = 0x170b30u;

    // 0x170b30: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x170b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x170b34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170b38: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x170b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x170b3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170b40: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x170b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x170b44: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x170b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x170b48: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x170b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x170b4c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x170b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x170b50: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x170b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x170b54: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x170b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x170b58: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x170b58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b5c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x170b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x170b60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x170b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x170b64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x170b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x170b68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170b6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x170b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x170b70: 0x8c940034  lw          $s4, 0x34($a0)
    ctx->pc = 0x170b70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x170b74: 0xac200008  sw          $zero, 0x8($at)
    ctx->pc = 0x170b74u;
    runtime->Store32(rdram, ctx, 0x70000008u, GPR_U32(ctx, 0)); // MMIO: 0x70000008
    // 0x170b78: 0x34a40200  ori         $a0, $a1, 0x200
    ctx->pc = 0x170b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x170b7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170b80: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x170b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x170b84: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x170b84u;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 0)); // MMIO: 0x70000000
    // 0x170b88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170b8c: 0xac22000c  sw          $v0, 0xC($at)
    ctx->pc = 0x170b8cu;
    runtime->Store32(rdram, ctx, 0x7000000Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000000c
    // 0x170b90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170b94: 0xc04d884  jal         func_136210
    ctx->pc = 0x170B94u;
    SET_GPR_U32(ctx, 31, 0x170B9Cu);
    ctx->pc = 0x170B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B94u;
    // 0x170b98: 0xac220004  sw          $v0, 0x4($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136210u, 0x170B94u, 0x170B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B9Cu;
label_170b9c:
    // 0x170b9c: 0x26a20050  addiu       $v0, $s5, 0x50
    ctx->pc = 0x170b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x170ba0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x170ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x170ba4: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x170ba4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170ba8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x170ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170bac: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x170bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x170bb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170bb8: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x170bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x170bbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x170bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bc0: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x170bc0u;
    runtime->Store128(rdram, ctx, 0x70000000u, GPR_VEC(ctx, 5));
    // 0x170bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170bc8: 0x928a0000  lbu         $t2, 0x0($s4)
    ctx->pc = 0x170bc8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170bcc: 0x92840001  lbu         $a0, 0x1($s4)
    ctx->pc = 0x170bccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x170bd0: 0x92890001  lbu         $t1, 0x1($s4)
    ctx->pc = 0x170bd0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x170bd4: 0x92870002  lbu         $a3, 0x2($s4)
    ctx->pc = 0x170bd4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x170bd8: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x170bd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170bdc: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x170bdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x170be0: 0x1421004  sllv        $v0, $v0, $t2
    ctx->pc = 0x170be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 10) & 0x1F));
    // 0x170be4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x170be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x170be8: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x170be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x170bec: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x170becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x170bf0: 0x481004  sllv        $v0, $t0, $v0
    ctx->pc = 0x170bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x170bf4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x170bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x170bf8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x170bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x170bfc: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x170bfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x170c00: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x170c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x170c04: 0x781c0  sll         $s0, $a3, 7
    ctx->pc = 0x170c04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x170c08: 0xd02823  subu        $a1, $a2, $s0
    ctx->pc = 0x170c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x170c0c: 0xe420001c  swc1        $f0, 0x1C($at)
    ctx->pc = 0x170c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 28), bits); }
    // 0x170c10: 0x451007  srav        $v0, $a1, $v0
    ctx->pc = 0x170c10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x170c14: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x170c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x170c18: 0x831007  srav        $v0, $v1, $a0
    ctx->pc = 0x170c18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x170c1c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x170C1Cu;
    {
        const bool branch_taken_0x170c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C1Cu;
        // 0x170c20: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c1c) {
            ctx->pc = 0x170DA0u;
            goto label_170da0;
        }
    }
    ctx->pc = 0x170C24u;
    // 0x170c24: 0x0  nop
    ctx->pc = 0x170c24u;
    // NOP
label_170c28:
    // 0x170c28: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x170c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x170c2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x170c2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x170c30: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x170c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x170c34: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x170c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x170c38: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x170c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x170c3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x170c40: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x170c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x170c44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x170c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170c48: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x170c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x170c4c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x170c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x170c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170c54: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x170c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170c5c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x170c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170c60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x170c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x170c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170c68: 0xe4200014  swc1        $f0, 0x14($at)
    ctx->pc = 0x170c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000014u, bits); }
    // 0x170c6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x170c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170c70: 0x86910004  lh          $s1, 0x4($s4)
    ctx->pc = 0x170c70u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x170c74: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x170c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c78: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x170C78u;
    {
        const bool branch_taken_0x170c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C78u;
        // 0x170c7c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c78) {
            ctx->pc = 0x170D80u;
            goto label_170d80;
        }
    }
    ctx->pc = 0x170C80u;
label_170c80:
    // 0x170c80: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x170c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x170c84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x170c84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x170c88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170c8c: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x170c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x170c90: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x170c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x170c94: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x170c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x170c98: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x170c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x170c9c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x170c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x170ca0: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x170ca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x170ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170ca8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x170ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170cac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x170cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170cb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170cb4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170cb8: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x170cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x170cbc: 0x34460010  ori         $a2, $v0, 0x10
    ctx->pc = 0x170cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x170cc0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x170cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x170cc4: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x170cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x170cc8: 0xe4200010  swc1        $f0, 0x10($at)
    ctx->pc = 0x170cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 16), bits); }
    // 0x170ccc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x170cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170cd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170cd4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x170cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x170cd8: 0xc041442  jal         func_105108
    ctx->pc = 0x170CD8u;
    SET_GPR_U32(ctx, 31, 0x170CE0u);
    ctx->pc = 0x170CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CD8u;
    // 0x170cdc: 0xe4200018  swc1        $f0, 0x18($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x170CD8u, 0x170CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CE0u;
label_170ce0:
    // 0x170ce0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x170ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170ce4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170ce8: 0x34640020  ori         $a0, $v1, 0x20
    ctx->pc = 0x170ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x170cec: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x170cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x170cf0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170cf4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x170cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000020u));
    // 0x170cf8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x170cf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000000u));
    // 0x170cfc: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x170cfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170d00: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x170d00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170d04: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170d08: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x170d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x170d0c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x170d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x170d10: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x170d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x170d14: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x170d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x170d18: 0x132240  sll         $a0, $s3, 9
    ctx->pc = 0x170d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x170d1c: 0x86a8002c  lh          $t0, 0x2C($s5)
    ctx->pc = 0x170d1cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x170d20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170d24: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x170d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170d28: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x170d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x170d2c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x170d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x170d30: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x170d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170d34: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170d38: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x170d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x170d3c: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x170d3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x170d40: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170d44: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x170d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x170d48: 0x34450020  ori         $a1, $v0, 0x20
    ctx->pc = 0x170d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x170d4c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x170D4Cu;
    SET_GPR_U32(ctx, 31, 0x170D54u);
    ctx->pc = 0x170D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D4Cu;
    // 0x170d50: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x170D4Cu, 0x170D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D54u;
label_170d54:
    // 0x170d54: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x170d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x170d58: 0x132240  sll         $a0, $s3, 9
    ctx->pc = 0x170d58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x170d5c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x170d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170d60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x170d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x170d64: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x170d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170d68: 0x34640400  ori         $a0, $v1, 0x400
    ctx->pc = 0x170d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x170d6c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x170d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x170d70: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x170d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x170d74: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x170d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170d78: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x170d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x170d7c: 0x0  nop
    ctx->pc = 0x170d7cu;
    // NOP
label_170d80:
    // 0x170d80: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x170d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x170d84: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x170d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170d88: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x170D88u;
    {
        const bool branch_taken_0x170d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170d88) {
            ctx->pc = 0x170C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170c80;
        }
    }
    ctx->pc = 0x170D90u;
    // 0x170d90: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x170d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x170d94: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x170d94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x170d98: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x170d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x170d9c: 0x0  nop
    ctx->pc = 0x170d9cu;
    // NOP
label_170da0:
    // 0x170da0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x170da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x170da4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x170da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170da8: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x170DA8u;
    {
        const bool branch_taken_0x170da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170da8) {
            ctx->pc = 0x170C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170c28;
        }
    }
    ctx->pc = 0x170DB0u;
    // 0x170db0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170db4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170db8: 0xac200010  sw          $zero, 0x10($at)
    ctx->pc = 0x170db8u;
    runtime->Store32(rdram, ctx, 0x70000010u, GPR_U32(ctx, 0)); // MMIO: 0x70000010
    // 0x170dbc: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x170dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x170dc0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x170dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170dc4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170dc8: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x170dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x170dcc: 0x34460010  ori         $a2, $v0, 0x10
    ctx->pc = 0x170dccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x170dd0: 0xe4200014  swc1        $f0, 0x14($at)
    ctx->pc = 0x170dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000014u, bits); }
    // 0x170dd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170dd8: 0xac200018  sw          $zero, 0x18($at)
    ctx->pc = 0x170dd8u;
    runtime->Store32(rdram, ctx, 0x70000018u, GPR_U32(ctx, 0)); // MMIO: 0x70000018
    // 0x170ddc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170de0: 0xc041442  jal         func_105108
    ctx->pc = 0x170DE0u;
    SET_GPR_U32(ctx, 31, 0x170DE8u);
    ctx->pc = 0x170DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170DE0u;
    // 0x170de4: 0xac20001c  sw          $zero, 0x1C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x170DE0u, 0x170DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170DE8u;
label_170de8:
    // 0x170de8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x170de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170dec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170df0: 0x34640020  ori         $a0, $v1, 0x20
    ctx->pc = 0x170df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x170df4: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x170df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x170df8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170dfc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x170dfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000020u));
    // 0x170e00: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x170e00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000000u));
    // 0x170e04: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x170e04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170e08: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x170e08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170e0c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170e10: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x170e10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x170e14: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x170e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x170e18: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x170e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x170e1c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170e20: 0x34450020  ori         $a1, $v0, 0x20
    ctx->pc = 0x170e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x170e24: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x170e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x170e28: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x170e28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x170e2c: 0x86a2002c  lh          $v0, 0x2C($s5)
    ctx->pc = 0x170e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x170e30: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x170e30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x170e34: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x170E34u;
    SET_GPR_U32(ctx, 31, 0x170E3Cu);
    ctx->pc = 0x170E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E34u;
    // 0x170e38: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x170E34u, 0x170E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E3Cu;
label_170e3c:
    // 0x170e3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170e40: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x170e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x170e44: 0xac22010c  sw          $v0, 0x10C($at)
    ctx->pc = 0x170e44u;
    runtime->Store32(rdram, ctx, 0x7000010Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000010c
    // 0x170e48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x170e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x170e4c: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x170e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x170e50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x170e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x170e54: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x170e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x170e58: 0x8c23010c  lw          $v1, 0x10C($at)
    ctx->pc = 0x170e58u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000010Cu)); // MMIO: 0x7000010c
    // 0x170e5c: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x170E5Cu;
    {
        const bool branch_taken_0x170e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E5Cu;
        // 0x170e60: 0xa48824  and         $s1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e5c) {
            ctx->pc = 0x1710C8u;
            goto label_1710c8;
        }
    }
    ctx->pc = 0x170E64u;
    // 0x170e64: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x170e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x170e68: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x170E68u;
    {
        const bool branch_taken_0x170e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170e68) {
            ctx->pc = 0x170EA8u;
            goto label_170ea8;
        }
    }
    ctx->pc = 0x170E70u;
    // 0x170e70: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x170e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x170e74: 0x92a60023  lbu         $a2, 0x23($s5)
    ctx->pc = 0x170e74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x170e78: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x170e78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170e7c: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x170e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x170e80: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x170e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x170e84: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x170e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x170e88: 0x852006  srlv        $a0, $a1, $a0
    ctx->pc = 0x170e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x170e8c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x170e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x170e90: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x170e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x170e94: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x170e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x170e98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x170e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x170e9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x170E9Cu;
    {
        const bool branch_taken_0x170e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E9Cu;
        // 0x170ea0: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e9c) {
            ctx->pc = 0x170F00u;
            goto label_170f00;
        }
    }
    ctx->pc = 0x170EA4u;
    // 0x170ea4: 0x0  nop
    ctx->pc = 0x170ea4u;
    // NOP
label_170ea8:
    // 0x170ea8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x170ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x170eac: 0x92a40020  lbu         $a0, 0x20($s5)
    ctx->pc = 0x170eacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x170eb0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x170eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x170eb4: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x170eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170eb8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x170eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x170ebc: 0x641806  srlv        $v1, $a0, $v1
    ctx->pc = 0x170ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x170ec0: 0xa3a3012c  sb          $v1, 0x12C($sp)
    ctx->pc = 0x170ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 300), (uint8_t)GPR_U32(ctx, 3));
    // 0x170ec4: 0x92a40021  lbu         $a0, 0x21($s5)
    ctx->pc = 0x170ec4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 33)));
    // 0x170ec8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x170ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170ecc: 0x70852018  mult1       $a0, $a0, $a1
    ctx->pc = 0x170eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x170ed0: 0x641806  srlv        $v1, $a0, $v1
    ctx->pc = 0x170ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x170ed4: 0xa3a3012d  sb          $v1, 0x12D($sp)
    ctx->pc = 0x170ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 301), (uint8_t)GPR_U32(ctx, 3));
    // 0x170ed8: 0x92a40022  lbu         $a0, 0x22($s5)
    ctx->pc = 0x170ed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x170edc: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x170edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170ee0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x170ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x170ee4: 0x641806  srlv        $v1, $a0, $v1
    ctx->pc = 0x170ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x170ee8: 0xa3a3012e  sb          $v1, 0x12E($sp)
    ctx->pc = 0x170ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 302), (uint8_t)GPR_U32(ctx, 3));
    // 0x170eec: 0x92a30023  lbu         $v1, 0x23($s5)
    ctx->pc = 0x170eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x170ef0: 0xa3a3012f  sb          $v1, 0x12F($sp)
    ctx->pc = 0x170ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 3));
    // 0x170ef4: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x170ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x170ef8: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x170ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x170efc: 0x0  nop
    ctx->pc = 0x170efcu;
    // NOP
label_170f00:
    // 0x170f00: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x170f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x170f04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x170f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f08: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x170f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x170f0c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x170f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170f10: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x170F10u;
    {
        const bool branch_taken_0x170f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F10u;
        // 0x170f14: 0x347e0100  ori         $fp, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f10) {
            ctx->pc = 0x1710B8u;
            goto label_1710b8;
        }
    }
    ctx->pc = 0x170F18u;
label_170f18:
    // 0x170f18: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x170f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x170f1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x170f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x170f20: 0x1643000b  bne         $s2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x170F20u;
    {
        const bool branch_taken_0x170f20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x170f20) {
            ctx->pc = 0x170F50u;
            goto label_170f50;
        }
    }
    ctx->pc = 0x170F28u;
    // 0x170f28: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x170f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x170f2c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x170f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x170f30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x170f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x170f34: 0x32a40  sll         $a1, $v1, 9
    ctx->pc = 0x170f34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x170f38: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x170f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170f3c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x170f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170f40: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x170f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x170f44: 0x83b021  addu        $s6, $a0, $v1
    ctx->pc = 0x170f44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170f48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x170F48u;
    {
        const bool branch_taken_0x170f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F48u;
        // 0x170f4c: 0xa3b821  addu        $s7, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f48) {
            ctx->pc = 0x170F80u;
            goto label_170f80;
        }
    }
    ctx->pc = 0x170F50u;
label_170f50:
    // 0x170f50: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x170f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x170f54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x170f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x170f58: 0x33240  sll         $a2, $v1, 9
    ctx->pc = 0x170f58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x170f5c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x170f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x170f60: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x170f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x170f64: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x170f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x170f68: 0x34640400  ori         $a0, $v1, 0x400
    ctx->pc = 0x170f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x170f6c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x170f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x170f70: 0xa4b021  addu        $s6, $a1, $a0
    ctx->pc = 0x170f70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170f74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x170f78: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x170f7c: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_170f80:
    // 0x170f80: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x170f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x170f84: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x170F84u;
    {
        const bool branch_taken_0x170f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f84) {
            ctx->pc = 0x1710B0u;
            goto label_1710b0;
        }
    }
    ctx->pc = 0x170F8Cu;
    // 0x170f8c: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x170f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x170f90: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x170F90u;
    {
        const bool branch_taken_0x170f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f90) {
            ctx->pc = 0x1710B0u;
            goto label_1710b0;
        }
    }
    ctx->pc = 0x170F98u;
    // 0x170f98: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x170f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x170f9c: 0x3c024c28  lui         $v0, 0x4C28
    ctx->pc = 0x170f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19496 << 16));
    // 0x170fa0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x170fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x170fa4: 0x3442004b  ori         $v0, $v0, 0x4B
    ctx->pc = 0x170fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)75);
    // 0x170fa8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x170fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x170fac: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x170facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170fb0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x170fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x170fb4: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x170fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x170fb8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x170fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x170fbc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x170fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x170fc0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x170fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x170fc4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x170fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x170fc8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x170fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x170fcc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x170fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x170fd0: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x170fd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x170fd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x170fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x170fd8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x170fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x170fdc: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x170fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x170fe0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x170fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x170fe4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x170fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x170fe8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x170fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x170fec: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x170fecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x170ff0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x170ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x170ff4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x170ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x170ff8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x170ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x170ffc: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x170ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x171000: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x171000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x171004: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x171004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x171008: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x171008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x17100c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17100cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x171010: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x171010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x171014: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x171014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x171018: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x171018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x17101c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x17101cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x171020: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x171020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x171024: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x171024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171028: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17102c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171030: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x171030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171034: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x171034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x171038: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x171038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17103c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x17103cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x171040: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x171040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x171044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171048: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x171048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17104c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171050: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x171050u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x171054: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x171054u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x171058: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x171058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x17105c: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x17105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x171060: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x171060u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x171064: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x171064u;
    {
        const bool branch_taken_0x171064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x171064) {
            ctx->pc = 0x171078u;
            goto label_171078;
        }
    }
    ctx->pc = 0x17106Cu;
    // 0x17106c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17106Cu;
    {
        const bool branch_taken_0x17106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17106c) {
            ctx->pc = 0x171080u;
            goto label_171080;
        }
    }
    ctx->pc = 0x171074u;
    // 0x171074: 0x0  nop
    ctx->pc = 0x171074u;
    // NOP
label_171078:
    // 0x171078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17107c: 0x0  nop
    ctx->pc = 0x17107cu;
    // NOP
label_171080:
    // 0x171080: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x171080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x171084: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x171084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171088: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x171088u;
    {
        const bool branch_taken_0x171088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x171088) {
            ctx->pc = 0x171098u;
            goto label_171098;
        }
    }
    ctx->pc = 0x171090u;
    // 0x171090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171094: 0x0  nop
    ctx->pc = 0x171094u;
    // NOP
label_171098:
    // 0x171098: 0x53183  sra         $a2, $a1, 6
    ctx->pc = 0x171098u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 6));
    // 0x17109c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x17109cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1710a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1710a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710a4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1710A4u;
    SET_GPR_U32(ctx, 31, 0x1710ACu);
    ctx->pc = 0x1710A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710A4u;
    // 0x1710a8: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1710A4u, 0x1710ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710ACu;
label_1710ac:
    // 0x1710ac: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1710acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1710b0:
    // 0x1710b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1710b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1710b4: 0x0  nop
    ctx->pc = 0x1710b4u;
    // NOP
label_1710b8:
    // 0x1710b8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1710b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1710bc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1710bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1710c0: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x1710C0u;
    {
        const bool branch_taken_0x1710c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1710c0) {
            ctx->pc = 0x170F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170f18;
        }
    }
    ctx->pc = 0x1710C8u;
label_1710c8:
    // 0x1710c8: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x1710C8u;
    {
        const bool branch_taken_0x1710c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710C8u;
        // 0x1710cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710c8) {
            ctx->pc = 0x171568u;
            goto label_171568;
        }
    }
    ctx->pc = 0x1710D0u;
label_1710d0:
    // 0x1710d0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1710d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1710d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1710d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1710d8: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1710D8u;
    {
        const bool branch_taken_0x1710d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1710d8) {
            ctx->pc = 0x1710E8u;
            goto label_1710e8;
        }
    }
    ctx->pc = 0x1710E0u;
    // 0x1710e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1710E0u;
    {
        const bool branch_taken_0x1710e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710E0u;
        // 0x1710e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710e0) {
            ctx->pc = 0x1710F0u;
            goto label_1710f0;
        }
    }
    ctx->pc = 0x1710E8u;
label_1710e8:
    // 0x1710e8: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x1710e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1710ec: 0x0  nop
    ctx->pc = 0x1710ecu;
    // NOP
label_1710f0:
    // 0x1710f0: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1710f4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1710f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1710f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1710f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710fc: 0x34640400  ori         $a0, $v1, 0x400
    ctx->pc = 0x1710fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x171100: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x171100u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x171104: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x171104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x171108: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x171108u;
    {
        const bool branch_taken_0x171108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171108u;
        // 0x17110c: 0x24c8ffff  addiu       $t0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171108) {
            ctx->pc = 0x171178u;
            goto label_171178;
        }
    }
    ctx->pc = 0x171110u;
label_171110:
    // 0x171110: 0x133240  sll         $a2, $s3, 9
    ctx->pc = 0x171110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x171114: 0xc54821  addu        $t1, $a2, $a1
    ctx->pc = 0x171114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x171118: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x171118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17111c: 0x124b021  addu        $s6, $t1, $a0
    ctx->pc = 0x17111cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x171120: 0xc4b821  addu        $s7, $a2, $a0
    ctx->pc = 0x171120u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x171124: 0x8ec9000c  lw          $t1, 0xC($s6)
    ctx->pc = 0x171124u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x171128: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x171128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17112c: 0x63240  sll         $a2, $a2, 9
    ctx->pc = 0x17112cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x171130: 0xc55021  addu        $t2, $a2, $a1
    ctx->pc = 0x171130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x171134: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x171134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x171138: 0x144f021  addu        $fp, $t2, $a0
    ctx->pc = 0x171138u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x17113c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x17113cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x171140: 0x1120000b  beqz        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x171140u;
    {
        const bool branch_taken_0x171140 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x171144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171140u;
        // 0x171144: 0xafa600b0  sw          $a2, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171140) {
            ctx->pc = 0x171170u;
            goto label_171170;
        }
    }
    ctx->pc = 0x171148u;
    // 0x171148: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x171148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x17114c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17114Cu;
    {
        const bool branch_taken_0x17114c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x17114c) {
            ctx->pc = 0x171170u;
            goto label_171170;
        }
    }
    ctx->pc = 0x171154u;
    // 0x171154: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x171154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x171158: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x171158u;
    {
        const bool branch_taken_0x171158 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x171158) {
            ctx->pc = 0x171170u;
            goto label_171170;
        }
    }
    ctx->pc = 0x171160u;
    // 0x171160: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x171160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x171164: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x171164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x171168: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x171168u;
    {
        const bool branch_taken_0x171168 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x171168) {
            ctx->pc = 0x171188u;
            goto label_171188;
        }
    }
    ctx->pc = 0x171170u;
label_171170:
    // 0x171170: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x171170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x171174: 0x0  nop
    ctx->pc = 0x171174u;
    // NOP
label_171178:
    // 0x171178: 0x268302b  sltu        $a2, $s3, $t0
    ctx->pc = 0x171178u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x17117c: 0x14c0ffe4  bnez        $a2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x17117Cu;
    {
        const bool branch_taken_0x17117c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17117c) {
            ctx->pc = 0x171110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171110;
        }
    }
    ctx->pc = 0x171184u;
    // 0x171184: 0x0  nop
    ctx->pc = 0x171184u;
    // NOP
label_171188:
    // 0x171188: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x171188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17118c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x171190: 0x126300f3  beq         $s3, $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x171190u;
    {
        const bool branch_taken_0x171190 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x171190) {
            ctx->pc = 0x171560u;
            goto label_171560;
        }
    }
    ctx->pc = 0x171198u;
    // 0x171198: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x171198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17119c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1711a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1711a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1711a4: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x1711a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x1711a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1711a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1711ac: 0x92820003  lbu         $v0, 0x3($s4)
    ctx->pc = 0x1711acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x1711b0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1711B0u;
    {
        const bool branch_taken_0x1711b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1711B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711B0u;
        // 0x1711b4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711b0) {
            ctx->pc = 0x171200u;
            goto label_171200;
        }
    }
    ctx->pc = 0x1711B8u;
    // 0x1711b8: 0x92a50023  lbu         $a1, 0x23($s5)
    ctx->pc = 0x1711b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x1711bc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1711bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1711c0: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x1711c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1711c4: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x1711c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1711c8: 0x70a21018  mult1       $v0, $a1, $v0
    ctx->pc = 0x1711c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1711cc: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1711ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1711d0: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x1711d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1711d4: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1711d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1711d8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1711d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1711dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1711dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1711e0: 0xb32818  mult        $a1, $a1, $s3
    ctx->pc = 0x1711e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1711e4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1711e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1711e8: 0x851006  srlv        $v0, $a1, $a0
    ctx->pc = 0x1711e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x1711ec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1711ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1711f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1711f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1711f4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1711F4u;
    {
        const bool branch_taken_0x1711f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711F4u;
        // 0x1711f8: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711f4) {
            ctx->pc = 0x171298u;
            goto label_171298;
        }
    }
    ctx->pc = 0x1711FCu;
    // 0x1711fc: 0x0  nop
    ctx->pc = 0x1711fcu;
    // NOP
label_171200:
    // 0x171200: 0x92a30020  lbu         $v1, 0x20($s5)
    ctx->pc = 0x171200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x171204: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x171204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171208: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x171208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17120c: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x17120cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x171210: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x171210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x171214: 0xa3a2012c  sb          $v0, 0x12C($sp)
    ctx->pc = 0x171214u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 300), (uint8_t)GPR_U32(ctx, 2));
    // 0x171218: 0x92a30021  lbu         $v1, 0x21($s5)
    ctx->pc = 0x171218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 33)));
    // 0x17121c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x17121cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171220: 0x70731818  mult1       $v1, $v1, $s3
    ctx->pc = 0x171220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x171224: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x171224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x171228: 0xa3a2012d  sb          $v0, 0x12D($sp)
    ctx->pc = 0x171228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 301), (uint8_t)GPR_U32(ctx, 2));
    // 0x17122c: 0x92a30022  lbu         $v1, 0x22($s5)
    ctx->pc = 0x17122cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x171230: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x171230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171234: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x171234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x171238: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x171238u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x17123c: 0xa3a2012e  sb          $v0, 0x12E($sp)
    ctx->pc = 0x17123cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 302), (uint8_t)GPR_U32(ctx, 2));
    // 0x171240: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x171240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x171244: 0xa3a2012f  sb          $v0, 0x12F($sp)
    ctx->pc = 0x171244u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 2));
    // 0x171248: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x171248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x17124c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x17124cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x171250: 0x92a30020  lbu         $v1, 0x20($s5)
    ctx->pc = 0x171250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x171254: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x171254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171258: 0x70641818  mult1       $v1, $v1, $a0
    ctx->pc = 0x171258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17125c: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x17125cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x171260: 0xa3a2012c  sb          $v0, 0x12C($sp)
    ctx->pc = 0x171260u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 300), (uint8_t)GPR_U32(ctx, 2));
    // 0x171264: 0x92a30021  lbu         $v1, 0x21($s5)
    ctx->pc = 0x171264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 33)));
    // 0x171268: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x171268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17126c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x17126cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x171270: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x171270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x171274: 0xa3a2012d  sb          $v0, 0x12D($sp)
    ctx->pc = 0x171274u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 301), (uint8_t)GPR_U32(ctx, 2));
    // 0x171278: 0x92a30022  lbu         $v1, 0x22($s5)
    ctx->pc = 0x171278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x17127c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x17127cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171280: 0x70641818  mult1       $v1, $v1, $a0
    ctx->pc = 0x171280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x171284: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x171284u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x171288: 0xa3a2012e  sb          $v0, 0x12E($sp)
    ctx->pc = 0x171288u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 302), (uint8_t)GPR_U32(ctx, 2));
    // 0x17128c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x17128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x171290: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x171290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x171294: 0x0  nop
    ctx->pc = 0x171294u;
    // NOP
label_171298:
    // 0x171298: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x171298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x17129c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17129cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1712a0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1712a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1712a4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1712a8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1712a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1712ac: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1712acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1712b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1712b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1712b4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1712b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1712b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1712b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1712bc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1712bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1712c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1712c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1712c4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1712c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1712c8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1712c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1712cc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1712ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1712d0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x1712d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1712d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1712d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1712d8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1712d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1712dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1712dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1712e0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1712e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1712e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1712e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1712e8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1712e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1712ec: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1712ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1712f0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1712f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1712f4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x1712f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1712f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1712f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1712fc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1712fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x171300: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x171300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x171304: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x171304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x171308: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x171308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17130c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171310: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x171310u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x171314: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x171314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x171318: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17131c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x17131cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x171320: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x171320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x171324: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x171324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x171328: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x171328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17132c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x17132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x171330: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x171330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x171334: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x171334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x171338: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x171338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x17133c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x17133cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x171340: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x171340u;
    {
        const bool branch_taken_0x171340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171340u;
        // 0x171344: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171340) {
            ctx->pc = 0x171350u;
            goto label_171350;
        }
    }
    ctx->pc = 0x171348u;
    // 0x171348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171348u;
    {
        const bool branch_taken_0x171348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171348) {
            ctx->pc = 0x171358u;
            goto label_171358;
        }
    }
    ctx->pc = 0x171350u;
label_171350:
    // 0x171350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171354: 0x0  nop
    ctx->pc = 0x171354u;
    // NOP
label_171358:
    // 0x171358: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x171358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x17135c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x17135cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171360: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x171360u;
    {
        const bool branch_taken_0x171360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x171360) {
            ctx->pc = 0x171370u;
            goto label_171370;
        }
    }
    ctx->pc = 0x171368u;
    // 0x171368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17136c: 0x0  nop
    ctx->pc = 0x17136cu;
    // NOP
label_171370:
    // 0x171370: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x171370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x171374: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x171374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x171378: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x171378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17137c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17137Cu;
    {
        const bool branch_taken_0x17137c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17137c) {
            ctx->pc = 0x171388u;
            goto label_171388;
        }
    }
    ctx->pc = 0x171384u;
    // 0x171384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171388:
    // 0x171388: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x171388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x17138c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x17138cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x171390: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x171390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x171394: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x171394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x171398: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x171398u;
    {
        const bool branch_taken_0x171398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171398u;
        // 0x17139c: 0x34630400  ori         $v1, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171398) {
            ctx->pc = 0x1714D8u;
            goto label_1714d8;
        }
    }
    ctx->pc = 0x1713A0u;
label_1713a0:
    // 0x1713a0: 0x133a40  sll         $a3, $s3, 9
    ctx->pc = 0x1713a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x1713a4: 0xe44021  addu        $t0, $a3, $a0
    ctx->pc = 0x1713a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1713a8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1713a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1713ac: 0x103b021  addu        $s6, $t0, $v1
    ctx->pc = 0x1713acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1713b0: 0xe3b821  addu        $s7, $a3, $v1
    ctx->pc = 0x1713b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1713b4: 0x8ec7000c  lw          $a3, 0xC($s6)
    ctx->pc = 0x1713b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1713b8: 0x10e0004b  beqz        $a3, . + 4 + (0x4B << 2)
    ctx->pc = 0x1713B8u;
    {
        const bool branch_taken_0x1713b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1713b8) {
            ctx->pc = 0x1714E8u;
            goto label_1714e8;
        }
    }
    ctx->pc = 0x1713C0u;
    // 0x1713c0: 0x8ee7000c  lw          $a3, 0xC($s7)
    ctx->pc = 0x1713c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x1713c4: 0x10e00048  beqz        $a3, . + 4 + (0x48 << 2)
    ctx->pc = 0x1713C4u;
    {
        const bool branch_taken_0x1713c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1713c4) {
            ctx->pc = 0x1714E8u;
            goto label_1714e8;
        }
    }
    ctx->pc = 0x1713CCu;
    // 0x1713cc: 0x92870003  lbu         $a3, 0x3($s4)
    ctx->pc = 0x1713ccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x1713d0: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1713D0u;
    {
        const bool branch_taken_0x1713d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1713d0) {
            ctx->pc = 0x171408u;
            goto label_171408;
        }
    }
    ctx->pc = 0x1713D8u;
    // 0x1713d8: 0x92a90023  lbu         $t1, 0x23($s5)
    ctx->pc = 0x1713d8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x1713dc: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x1713dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1713e0: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x1713e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1713e4: 0x1334818  mult        $t1, $t1, $s3
    ctx->pc = 0x1713e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1713e8: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x1713e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x1713ec: 0x73a3e  dsrl32      $a3, $a3, 8
    ctx->pc = 0x1713ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 8));
    // 0x1713f0: 0x1094006  srlv        $t0, $t1, $t0
    ctx->pc = 0x1713f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 8) & 0x1F));
    // 0x1713f4: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1713f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1713f8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1713f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1713fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1713FCu;
    {
        const bool branch_taken_0x1713fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713FCu;
        // 0x171400: 0xafa700f0  sw          $a3, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713fc) {
            ctx->pc = 0x171458u;
            goto label_171458;
        }
    }
    ctx->pc = 0x171404u;
    // 0x171404: 0x0  nop
    ctx->pc = 0x171404u;
    // NOP
label_171408:
    // 0x171408: 0x92a80020  lbu         $t0, 0x20($s5)
    ctx->pc = 0x171408u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x17140c: 0x92870000  lbu         $a3, 0x0($s4)
    ctx->pc = 0x17140cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171410: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x171410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x171414: 0xe83806  srlv        $a3, $t0, $a3
    ctx->pc = 0x171414u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x171418: 0xa3a7012c  sb          $a3, 0x12C($sp)
    ctx->pc = 0x171418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 300), (uint8_t)GPR_U32(ctx, 7));
    // 0x17141c: 0x92a80021  lbu         $t0, 0x21($s5)
    ctx->pc = 0x17141cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 33)));
    // 0x171420: 0x92870000  lbu         $a3, 0x0($s4)
    ctx->pc = 0x171420u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171424: 0x71134018  mult1       $t0, $t0, $s3
    ctx->pc = 0x171424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x171428: 0xe83806  srlv        $a3, $t0, $a3
    ctx->pc = 0x171428u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x17142c: 0xa3a7012d  sb          $a3, 0x12D($sp)
    ctx->pc = 0x17142cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 301), (uint8_t)GPR_U32(ctx, 7));
    // 0x171430: 0x92a80022  lbu         $t0, 0x22($s5)
    ctx->pc = 0x171430u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x171434: 0x92870000  lbu         $a3, 0x0($s4)
    ctx->pc = 0x171434u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171438: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x171438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x17143c: 0xe83806  srlv        $a3, $t0, $a3
    ctx->pc = 0x17143cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x171440: 0xa3a7012e  sb          $a3, 0x12E($sp)
    ctx->pc = 0x171440u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 302), (uint8_t)GPR_U32(ctx, 7));
    // 0x171444: 0x92a70023  lbu         $a3, 0x23($s5)
    ctx->pc = 0x171444u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x171448: 0xa3a7012f  sb          $a3, 0x12F($sp)
    ctx->pc = 0x171448u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 7));
    // 0x17144c: 0x8fa7012c  lw          $a3, 0x12C($sp)
    ctx->pc = 0x17144cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x171450: 0xafa700f0  sw          $a3, 0xF0($sp)
    ctx->pc = 0x171450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
    // 0x171454: 0x0  nop
    ctx->pc = 0x171454u;
    // NOP
label_171458:
    // 0x171458: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x171458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x17145c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x17145cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x171460: 0xa6070000  sh          $a3, 0x0($s0)
    ctx->pc = 0x171460u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x171464: 0x8ec70004  lw          $a3, 0x4($s6)
    ctx->pc = 0x171464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x171468: 0xa6070002  sh          $a3, 0x2($s0)
    ctx->pc = 0x171468u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x17146c: 0x8ec70008  lw          $a3, 0x8($s6)
    ctx->pc = 0x17146cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x171470: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x171470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x171474: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x171474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x171478: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x171478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x17147c: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x17147cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x171480: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x171480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x171484: 0xa6070000  sh          $a3, 0x0($s0)
    ctx->pc = 0x171484u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x171488: 0x8ee70004  lw          $a3, 0x4($s7)
    ctx->pc = 0x171488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x17148c: 0xa6070002  sh          $a3, 0x2($s0)
    ctx->pc = 0x17148cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x171490: 0x8ee70008  lw          $a3, 0x8($s7)
    ctx->pc = 0x171490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x171494: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x171494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x171498: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x171498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17149c: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x17149cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1714a0: 0x8ec70008  lw          $a3, 0x8($s6)
    ctx->pc = 0x1714a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1714a4: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1714a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1714A8u;
    {
        const bool branch_taken_0x1714a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714A8u;
        // 0x1714ac: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714a8) {
            ctx->pc = 0x1714B8u;
            goto label_1714b8;
        }
    }
    ctx->pc = 0x1714B0u;
    // 0x1714b0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1714b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714b4: 0x0  nop
    ctx->pc = 0x1714b4u;
    // NOP
label_1714b8:
    // 0x1714b8: 0x8ee70008  lw          $a3, 0x8($s7)
    ctx->pc = 0x1714b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1714bc: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x1714bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1714c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1714C0u;
    {
        const bool branch_taken_0x1714c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1714c0) {
            ctx->pc = 0x1714D0u;
            goto label_1714d0;
        }
    }
    ctx->pc = 0x1714C8u;
    // 0x1714c8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1714c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714cc: 0x0  nop
    ctx->pc = 0x1714ccu;
    // NOP
label_1714d0:
    // 0x1714d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1714d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1714d4: 0x0  nop
    ctx->pc = 0x1714d4u;
    // NOP
label_1714d8:
    // 0x1714d8: 0x8fa70110  lw          $a3, 0x110($sp)
    ctx->pc = 0x1714d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1714dc: 0x267382b  sltu        $a3, $s3, $a3
    ctx->pc = 0x1714dcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1714e0: 0x14e0ffaf  bnez        $a3, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1714E0u;
    {
        const bool branch_taken_0x1714e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1714e0) {
            ctx->pc = 0x1713A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1713a0;
        }
    }
    ctx->pc = 0x1714E8u;
label_1714e8:
    // 0x1714e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1714ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1714ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1714f0: 0x61cc0  sll         $v1, $a2, 19
    ctx->pc = 0x1714f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
    // 0x1714f4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1714f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1714f8: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1714f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1714fc: 0x3442004c  ori         $v0, $v0, 0x4C
    ctx->pc = 0x1714fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x171500: 0x53183  sra         $a2, $a1, 6
    ctx->pc = 0x171500u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 6));
    // 0x171504: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x171504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x171508: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x17150c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x17150cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x171510: 0x24e7aed0  addiu       $a3, $a3, -0x5130
    ctx->pc = 0x171510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946512));
    // 0x171514: 0x92a30012  lbu         $v1, 0x12($s5)
    ctx->pc = 0x171514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x171518: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x171518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x17151c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171520: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x171520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171524: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x171528: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x171528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17152c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17152cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171530: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x171530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x171534: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x171534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x171538: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x171538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x17153c: 0x92a20012  lbu         $v0, 0x12($s5)
    ctx->pc = 0x17153cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x171540: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171544: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x171544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x171548: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x171548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17154c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x17154cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x171550: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x171550u;
    SET_GPR_U32(ctx, 31, 0x171558u);
    ctx->pc = 0x171554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171550u;
    // 0x171554: 0xa222000f  sb          $v0, 0xF($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x171550u, 0x171558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171558u;
label_171558:
    // 0x171558: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x171558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17155c: 0x0  nop
    ctx->pc = 0x17155cu;
    // NOP
label_171560:
    // 0x171560: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x171560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x171564: 0x0  nop
    ctx->pc = 0x171564u;
    // NOP
label_171568:
    // 0x171568: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x171568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17156c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x17156cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171570: 0x1460fed7  bnez        $v1, . + 4 + (-0x129 << 2)
    ctx->pc = 0x171570u;
    {
        const bool branch_taken_0x171570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171570) {
            ctx->pc = 0x1710D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1710d0;
        }
    }
    ctx->pc = 0x171578u;
    // 0x171578: 0x2624000f  addiu       $a0, $s1, 0xF
    ctx->pc = 0x171578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x17157c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x17157cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x171580: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x171580u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x171584: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x171584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x171588: 0xac31fc90  sw          $s1, -0x370($at)
    ctx->pc = 0x171588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x17158c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x17158cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x171590: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x171590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171594: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x171594u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x171598: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x171598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17159c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17159cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1715a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1715a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1715a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1715a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1715a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1715a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1715ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1715acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1715b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1715b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1715b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1715b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1715b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1715B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1715BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715B8u;
        // 0x1715bc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1715B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1715C0u;
}
