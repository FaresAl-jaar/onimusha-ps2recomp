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

// Function: sub_00315A40
// Address: 0x315a40 - 0x3179f0
void sub_00315A40_0x315a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315A40_0x315a40");
#endif

    switch (ctx->pc) {
        case 0x315b58u: goto label_315b58;
        case 0x315b64u: goto label_315b64;
        case 0x315b88u: goto label_315b88;
        case 0x315b94u: goto label_315b94;
        case 0x315bc8u: goto label_315bc8;
        case 0x315c84u: goto label_315c84;
        case 0x315c9cu: goto label_315c9c;
        case 0x315cacu: goto label_315cac;
        case 0x315cc0u: goto label_315cc0;
        case 0x315ce4u: goto label_315ce4;
        case 0x315f04u: goto label_315f04;
        case 0x315f18u: goto label_315f18;
        case 0x315f84u: goto label_315f84;
        case 0x31600cu: goto label_31600c;
        case 0x316028u: goto label_316028;
        case 0x31606cu: goto label_31606c;
        case 0x316418u: goto label_316418;
        case 0x316604u: goto label_316604;
        case 0x316634u: goto label_316634;
        case 0x316780u: goto label_316780;
        case 0x316790u: goto label_316790;
        case 0x3167fcu: goto label_3167fc;
        case 0x316850u: goto label_316850;
        case 0x316880u: goto label_316880;
        case 0x3169a8u: goto label_3169a8;
        case 0x316c30u: goto label_316c30;
        case 0x316df0u: goto label_316df0;
        case 0x3170f0u: goto label_3170f0;
        case 0x317298u: goto label_317298;
        case 0x317500u: goto label_317500;
        case 0x3178d8u: goto label_3178d8;
        case 0x3179b4u: goto label_3179b4;
        default: break;
    }

    ctx->pc = 0x315a40u;

    // 0x315a40: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x315a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x315a44: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x315a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x315a48: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x315a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x315a4c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x315a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x315a50: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x315a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x315a54: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x315a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x315a58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x315a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x315a5c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x315a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x315a60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x315a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x315a64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x315a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x315a68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315a6c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x315a6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x315a70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x315a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x315a74: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x315a74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x315a78: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x315a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x315a7c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x315a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x315a80: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x315A80u;
    {
        const bool branch_taken_0x315a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A80u;
        // 0x315a84: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a80) {
            ctx->pc = 0x315AB8u;
            goto label_315ab8;
        }
    }
    ctx->pc = 0x315A88u;
    // 0x315a88: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x315a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x315a8c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x315a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x315a90: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x315a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x315a94: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x315a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x315a98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315a9c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x315a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x315aa0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x315aa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x315aa4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x315aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x315aa8: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x315aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x315aac: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x315aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x315ab0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x315AB0u;
    {
        const bool branch_taken_0x315ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AB0u;
        // 0x315ab4: 0xc475001c  lwc1        $f21, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ab0) {
            ctx->pc = 0x315AF0u;
            goto label_315af0;
        }
    }
    ctx->pc = 0x315AB8u;
label_315ab8:
    // 0x315ab8: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x315ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x315abc: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x315abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x315ac0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x315ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x315ac4: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x315ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x315ac8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x315ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315acc: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x315accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x315ad0: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x315ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x315ad4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x315ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315ad8: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x315ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x315adc: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x315adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x315ae0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x315ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315ae4: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x315ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x315ae8: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x315ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
    // 0x315aec: 0x0  nop
    ctx->pc = 0x315aecu;
    // NOP
label_315af0:
    // 0x315af0: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x315af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x315af4: 0x246392b0  addiu       $v1, $v1, -0x6D50
    ctx->pc = 0x315af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939312));
    // 0x315af8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x315af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315afc: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x315afcu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x4E92B0u));
    // 0x315b00: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x315b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x315b04: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x315b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x315b08: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x315b08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315b0c: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x315b0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x315b10: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x315b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315b14: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x315b14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x315b18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x315b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315b1c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x315b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x315b20: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x315B20u;
    {
        const bool branch_taken_0x315b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x315B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B20u;
        // 0x315b24: 0x641e0080  daddiu      $fp, $zero, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b20) {
            ctx->pc = 0x315B70u;
            goto label_315b70;
        }
    }
    ctx->pc = 0x315B28u;
    // 0x315b28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x315b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315b2c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x315B2Cu;
    {
        const bool branch_taken_0x315b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x315b2c) {
            ctx->pc = 0x315B40u;
            goto label_315b40;
        }
    }
    ctx->pc = 0x315B34u;
    // 0x315b34: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x315B34u;
    {
        const bool branch_taken_0x315b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315b34) {
            ctx->pc = 0x315B98u;
            goto label_315b98;
        }
    }
    ctx->pc = 0x315B3Cu;
    // 0x315b3c: 0x0  nop
    ctx->pc = 0x315b3cu;
    // NOP
label_315b40:
    // 0x315b40: 0x92910010  lbu         $s1, 0x10($s4)
    ctx->pc = 0x315b40u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x315b44: 0x92970011  lbu         $s7, 0x11($s4)
    ctx->pc = 0x315b44u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x315b48: 0x92900013  lbu         $s0, 0x13($s4)
    ctx->pc = 0x315b48u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x315b4c: 0x929e0012  lbu         $fp, 0x12($s4)
    ctx->pc = 0x315b4cu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x315b50: 0xc041714  jal         func_105C50
    ctx->pc = 0x315B50u;
    SET_GPR_U32(ctx, 31, 0x315B58u);
    ctx->pc = 0x315B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B50u;
    // 0x315b54: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C50u, 0x315B50u, 0x315B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B58u;
label_315b58:
    // 0x315b58: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x315b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x315b5c: 0xc041714  jal         func_105C50
    ctx->pc = 0x315B5Cu;
    SET_GPR_U32(ctx, 31, 0x315B64u);
    ctx->pc = 0x315B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B5Cu;
    // 0x315b60: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C50u, 0x315B5Cu, 0x315B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B64u;
label_315b64:
    // 0x315b64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x315B64u;
    {
        const bool branch_taken_0x315b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B64u;
        // 0x315b68: 0xc6940030  lwc1        $f20, 0x30($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b64) {
            ctx->pc = 0x315B98u;
            goto label_315b98;
        }
    }
    ctx->pc = 0x315B6Cu;
    // 0x315b6c: 0x0  nop
    ctx->pc = 0x315b6cu;
    // NOP
label_315b70:
    // 0x315b70: 0x92910010  lbu         $s1, 0x10($s4)
    ctx->pc = 0x315b70u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x315b74: 0x92970011  lbu         $s7, 0x11($s4)
    ctx->pc = 0x315b74u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x315b78: 0x92900013  lbu         $s0, 0x13($s4)
    ctx->pc = 0x315b78u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x315b7c: 0x929e0012  lbu         $fp, 0x12($s4)
    ctx->pc = 0x315b7cu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x315b80: 0xc041714  jal         func_105C50
    ctx->pc = 0x315B80u;
    SET_GPR_U32(ctx, 31, 0x315B88u);
    ctx->pc = 0x315B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B80u;
    // 0x315b84: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C50u, 0x315B80u, 0x315B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B88u;
label_315b88:
    // 0x315b88: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x315b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x315b8c: 0xc041714  jal         func_105C50
    ctx->pc = 0x315B8Cu;
    SET_GPR_U32(ctx, 31, 0x315B94u);
    ctx->pc = 0x315B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B8Cu;
    // 0x315b90: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C50u, 0x315B8Cu, 0x315B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B94u;
label_315b94:
    // 0x315b94: 0xc6940030  lwc1        $f20, 0x30($s4)
    ctx->pc = 0x315b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_315b98:
    // 0x315b98: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x315b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x315b9c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x315B9Cu;
    {
        const bool branch_taken_0x315b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x315b9c) {
            ctx->pc = 0x315BB0u;
            goto label_315bb0;
        }
    }
    ctx->pc = 0x315BA4u;
    // 0x315ba4: 0x10000784  b           . + 4 + (0x784 << 2)
    ctx->pc = 0x315BA4u;
    {
        const bool branch_taken_0x315ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315ba4) {
            ctx->pc = 0x3179B8u;
            goto label_3179b8;
        }
    }
    ctx->pc = 0x315BACu;
    // 0x315bac: 0x0  nop
    ctx->pc = 0x315bacu;
    // NOP
label_315bb0:
    // 0x315bb0: 0x96460068  lhu         $a2, 0x68($s2)
    ctx->pc = 0x315bb0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x315bb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x315bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315bb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x315bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315bbc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x315BBCu;
    {
        const bool branch_taken_0x315bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BBCu;
        // 0x315bc0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bbc) {
            ctx->pc = 0x315C20u;
            goto label_315c20;
        }
    }
    ctx->pc = 0x315BC4u;
    // 0x315bc4: 0x0  nop
    ctx->pc = 0x315bc4u;
    // NOP
label_315bc8:
    // 0x315bc8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x315bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315bcc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x315bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x315bd0: 0x8e480078  lw          $t0, 0x78($s2)
    ctx->pc = 0x315bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x315bd4: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x315bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x315bd8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x315bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x315bdc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x315bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x315be0: 0x14a70007  bne         $a1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x315BE0u;
    {
        const bool branch_taken_0x315be0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x315BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BE0u;
        // 0x315be4: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315be0) {
            ctx->pc = 0x315C00u;
            goto label_315c00;
        }
    }
    ctx->pc = 0x315BE8u;
    // 0x315be8: 0x91050018  lbu         $a1, 0x18($t0)
    ctx->pc = 0x315be8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x315bec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x315becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x315bf0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x315BF0u;
    {
        const bool branch_taken_0x315bf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x315bf0) {
            ctx->pc = 0x315C18u;
            goto label_315c18;
        }
    }
    ctx->pc = 0x315BF8u;
    // 0x315bf8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x315BF8u;
    {
        const bool branch_taken_0x315bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BF8u;
        // 0x315bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bf8) {
            ctx->pc = 0x315C30u;
            goto label_315c30;
        }
    }
    ctx->pc = 0x315C00u;
label_315c00:
    // 0x315c00: 0x91050018  lbu         $a1, 0x18($t0)
    ctx->pc = 0x315c00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x315c04: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x315c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x315c08: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x315C08u;
    {
        const bool branch_taken_0x315c08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x315c08) {
            ctx->pc = 0x315C18u;
            goto label_315c18;
        }
    }
    ctx->pc = 0x315C10u;
    // 0x315c10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x315C10u;
    {
        const bool branch_taken_0x315c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C10u;
        // 0x315c14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c10) {
            ctx->pc = 0x315C30u;
            goto label_315c30;
        }
    }
    ctx->pc = 0x315C18u;
label_315c18:
    // 0x315c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x315c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x315c1c: 0x0  nop
    ctx->pc = 0x315c1cu;
    // NOP
label_315c20:
    // 0x315c20: 0x66282b  sltu        $a1, $v1, $a2
    ctx->pc = 0x315c20u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x315c24: 0x14a0ffe8  bnez        $a1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x315C24u;
    {
        const bool branch_taken_0x315c24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x315c24) {
            ctx->pc = 0x315BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315bc8;
        }
    }
    ctx->pc = 0x315C2Cu;
    // 0x315c2c: 0x0  nop
    ctx->pc = 0x315c2cu;
    // NOP
label_315c30:
    // 0x315c30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x315C30u;
    {
        const bool branch_taken_0x315c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315c30) {
            ctx->pc = 0x315C40u;
            goto label_315c40;
        }
    }
    ctx->pc = 0x315C38u;
    // 0x315c38: 0x1000075f  b           . + 4 + (0x75F << 2)
    ctx->pc = 0x315C38u;
    {
        const bool branch_taken_0x315c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315c38) {
            ctx->pc = 0x3179B8u;
            goto label_3179b8;
        }
    }
    ctx->pc = 0x315C40u;
label_315c40:
    // 0x315c40: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x315c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x315c44: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x315C44u;
    {
        const bool branch_taken_0x315c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315c44) {
            ctx->pc = 0x315C50u;
            goto label_315c50;
        }
    }
    ctx->pc = 0x315C4Cu;
    // 0x315c4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x315c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315c50:
    // 0x315c50: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x315c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x315c54: 0x278382bc  addiu       $v1, $gp, -0x7D44
    ctx->pc = 0x315c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935228));
    // 0x315c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315c5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315c60: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x315C60u;
    {
        const bool branch_taken_0x315c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x315C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C60u;
        // 0x315c64: 0x94750000  lhu         $s5, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c60) {
            ctx->pc = 0x315C78u;
            goto label_315c78;
        }
    }
    ctx->pc = 0x315C68u;
    // 0x315c68: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x315C68u;
    {
        const bool branch_taken_0x315c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x315c68) {
            ctx->pc = 0x315CB0u;
            goto label_315cb0;
        }
    }
    ctx->pc = 0x315C70u;
    // 0x315c70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x315C70u;
    {
        const bool branch_taken_0x315c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315c70) {
            ctx->pc = 0x315CB0u;
            goto label_315cb0;
        }
    }
    ctx->pc = 0x315C78u;
label_315c78:
    // 0x315c78: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x315c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x315c7c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x315C7Cu;
    SET_GPR_U32(ctx, 31, 0x315C84u);
    ctx->pc = 0x315C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C7Cu;
    // 0x315c80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x315C7Cu, 0x315C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C84u;
label_315c84:
    // 0x315c84: 0x3c02c580  lui         $v0, 0xC580
    ctx->pc = 0x315c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50560 << 16));
    // 0x315c88: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x315c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x315c8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x315c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x315c90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x315c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315c94: 0xc0414dc  jal         func_105370
    ctx->pc = 0x315C94u;
    SET_GPR_U32(ctx, 31, 0x315C9Cu);
    ctx->pc = 0x315C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C94u;
    // 0x315c98: 0xafa0016c  sw          $zero, 0x16C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x315C94u, 0x315C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C9Cu;
label_315c9c:
    // 0x315c9c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x315c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x315ca0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x315ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x315ca4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x315CA4u;
    SET_GPR_U32(ctx, 31, 0x315CACu);
    ctx->pc = 0x315CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315CA4u;
    // 0x315ca8: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x315CA4u, 0x315CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CACu;
label_315cac:
    // 0x315cac: 0x0  nop
    ctx->pc = 0x315cacu;
    // NOP
label_315cb0:
    // 0x315cb0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x315cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x315cb4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x315cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x315cb8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x315CB8u;
    SET_GPR_U32(ctx, 31, 0x315CC0u);
    ctx->pc = 0x315CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315CB8u;
    // 0x315cbc: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x315CB8u, 0x315CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CC0u;
label_315cc0:
    // 0x315cc0: 0x92880000  lbu         $t0, 0x0($s4)
    ctx->pc = 0x315cc0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x315cc4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x315cc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315cc8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x315cc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x315ccc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x315cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315cd0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x315cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x315cd4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x315cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x315cd8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x315cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315cdc: 0xc0c4108  jal         func_310420
    ctx->pc = 0x315CDCu;
    SET_GPR_U32(ctx, 31, 0x315CE4u);
    ctx->pc = 0x315CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315CDCu;
    // 0x315ce0: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310420u, 0x315CDCu, 0x315CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CE4u;
label_315ce4:
    // 0x315ce4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x315ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x315ce8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x315ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x315cec: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x315cecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x315cf0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x315cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x315cf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x315cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315cf8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x315cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x315cfc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x315cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x315d00: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x315d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x315d04: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x315d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x315d08: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x315d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x315d0c: 0x8f838b0c  lw          $v1, -0x74F4($gp)
    ctx->pc = 0x315d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937356)));
    // 0x315d10: 0xafa5015c  sw          $a1, 0x15C($sp)
    ctx->pc = 0x315d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 5));
    // 0x315d14: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x315d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x315d18: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x315d18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x315d1c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x315d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x315d20: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x315d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x315d24: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x315d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x315d28: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x315D28u;
    {
        const bool branch_taken_0x315d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x315D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D28u;
        // 0x315d2c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d28) {
            ctx->pc = 0x315D60u;
            goto label_315d60;
        }
    }
    ctx->pc = 0x315D30u;
    // 0x315d30: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x315d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x315d34: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x315d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x315d38: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x315d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x315d3c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x315d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x315d40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315d44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x315d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x315d48: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x315d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x315d4c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x315d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x315d50: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x315d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x315d54: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x315d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x315d58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x315D58u;
    {
        const bool branch_taken_0x315d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D58u;
        // 0x315d5c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d58) {
            ctx->pc = 0x315D90u;
            goto label_315d90;
        }
    }
    ctx->pc = 0x315D60u;
label_315d60:
    // 0x315d60: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x315d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x315d64: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x315d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x315d68: 0x2442dbc4  addiu       $v0, $v0, -0x243C
    ctx->pc = 0x315d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958020));
    // 0x315d6c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x315d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x315d70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315d74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x315d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x315d78: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x315d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x315d7c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x315d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x315d80: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x315d80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x315d84: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x315d84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x315d88: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x315d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x315d8c: 0x0  nop
    ctx->pc = 0x315d8cu;
    // NOP
label_315d90:
    // 0x315d90: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x315d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x315d94: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x315d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x315d98: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x315d98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x315d9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x315d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x315da0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x315da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x315da4: 0x3c036c10  lui         $v1, 0x6C10
    ctx->pc = 0x315da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27664 << 16));
    // 0x315da8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x315da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x315dac: 0xacb60004  sw          $s6, 0x4($a1)
    ctx->pc = 0x315dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 22));
    // 0x315db0: 0x346303f0  ori         $v1, $v1, 0x3F0
    ctx->pc = 0x315db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1008);
    // 0x315db4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x315db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x315db8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x315db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x315dbc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x315dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x315dc0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x315dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x315dc4: 0x8c2b6710  lw          $t3, 0x6710($at)
    ctx->pc = 0x315dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x696710u));
    // 0x315dc8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x315dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x315dcc: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x315dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x315dd0: 0xa403c  dsll32      $t0, $t2, 0
    ctx->pc = 0x315dd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 0));
    // 0x315dd4: 0x346903ec  ori         $t1, $v1, 0x3EC
    ctx->pc = 0x315dd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1004);
    // 0x315dd8: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x315dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x315ddc: 0x3c032002  lui         $v1, 0x2002
    ctx->pc = 0x315ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8194 << 16));
    // 0x315de0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x315de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x315de4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x315de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x315de8: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x315de8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x315dec: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x315decu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x315df0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x315df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x315df4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x315df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x315df8: 0x316a03ff  andi        $t2, $t3, 0x3FF
    ctx->pc = 0x315df8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1023);
    // 0x315dfc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x315dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x315e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315e04: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x315e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x315e08: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x315e08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x315e0c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x315e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x315e10: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x315e10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x315e14: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x315e14u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x315e18: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x315e18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x315e1c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x315e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x315e20: 0xacaafffc  sw          $t2, -0x4($a1)
    ctx->pc = 0x315e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 10));
    // 0x315e24: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x315e24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x315e28: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x315e28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x315e2c: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x315e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x315e30: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x315e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x315e34: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x315e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x315e38: 0x22682  srl         $a0, $v0, 26
    ctx->pc = 0x315e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 26));
    // 0x315e3c: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x315e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x315e40: 0x30870003  andi        $a3, $a0, 0x3
    ctx->pc = 0x315e40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x315e44: 0x10e30012  beq         $a3, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x315E44u;
    {
        const bool branch_taken_0x315e44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x315E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E44u;
        // 0x315e48: 0x3044000f  andi        $a0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e44) {
            ctx->pc = 0x315E90u;
            goto label_315e90;
        }
    }
    ctx->pc = 0x315E4Cu;
    // 0x315e4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x315e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315e50: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x315E50u;
    {
        const bool branch_taken_0x315e50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x315e50) {
            ctx->pc = 0x315E68u;
            goto label_315e68;
        }
    }
    ctx->pc = 0x315E58u;
    // 0x315e58: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x315E58u;
    {
        const bool branch_taken_0x315e58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x315e58) {
            ctx->pc = 0x315E68u;
            goto label_315e68;
        }
    }
    ctx->pc = 0x315E60u;
    // 0x315e60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x315E60u;
    {
        const bool branch_taken_0x315e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315e60) {
            ctx->pc = 0x315EC0u;
            goto label_315ec0;
        }
    }
    ctx->pc = 0x315E68u;
label_315e68:
    // 0x315e68: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x315e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x315e6c: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x315e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x315e70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x315E70u;
    {
        const bool branch_taken_0x315e70 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x315E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E70u;
        // 0x315e74: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e70) {
            ctx->pc = 0x315E80u;
            goto label_315e80;
        }
    }
    ctx->pc = 0x315E78u;
    // 0x315e78: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x315e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x315e7c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x315e7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_315e80:
    // 0x315e80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x315e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315e84: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x315E84u;
    {
        const bool branch_taken_0x315e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E84u;
        // 0x315e88: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e84) {
            ctx->pc = 0x315EC0u;
            goto label_315ec0;
        }
    }
    ctx->pc = 0x315E8Cu;
    // 0x315e8c: 0x0  nop
    ctx->pc = 0x315e8cu;
    // NOP
label_315e90:
    // 0x315e90: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x315e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x315e94: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x315E94u;
    {
        const bool branch_taken_0x315e94 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x315E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E94u;
        // 0x315e98: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e94) {
            ctx->pc = 0x315EA4u;
            goto label_315ea4;
        }
    }
    ctx->pc = 0x315E9Cu;
    // 0x315e9c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x315e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x315ea0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x315ea0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_315ea4:
    // 0x315ea4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x315ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315ea8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x315ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x315eac: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x315eacu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x315eb0: 0x0  nop
    ctx->pc = 0x315eb0u;
    // NOP
    // 0x315eb4: 0x0  nop
    ctx->pc = 0x315eb4u;
    // NOP
    // 0x315eb8: 0x1012  mflo        $v0
    ctx->pc = 0x315eb8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x315ebc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x315ebcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_315ec0:
    // 0x315ec0: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x315ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x315ec4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x315ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x315ec8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x315ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x315ecc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x315eccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x315ed0: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x315ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x315ed4: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x315ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x315ed8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x315ED8u;
    {
        const bool branch_taken_0x315ed8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x315EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315ED8u;
        // 0x315edc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ed8) {
            ctx->pc = 0x315EE8u;
            goto label_315ee8;
        }
    }
    ctx->pc = 0x315EE0u;
    // 0x315ee0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x315ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x315ee4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x315ee4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_315ee8:
    // 0x315ee8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x315ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315eec: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x315eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x315ef0: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x315ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x315ef4: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x315ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x315ef8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x315ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315efc: 0xc0c663c  jal         func_3198F0
    ctx->pc = 0x315EFCu;
    SET_GPR_U32(ctx, 31, 0x315F04u);
    ctx->pc = 0x315F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315EFCu;
    // 0x315f00: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3198F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3198F0u, 0x315EFCu, 0x315F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F04u;
label_315f04:
    // 0x315f04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x315f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f08: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x315f08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x315f0c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x315F0Cu;
    {
        const bool branch_taken_0x315f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F0Cu;
        // 0x315f10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f0c) {
            ctx->pc = 0x315F98u;
            goto label_315f98;
        }
    }
    ctx->pc = 0x315F14u;
    // 0x315f14: 0x0  nop
    ctx->pc = 0x315f14u;
    // NOP
label_315f18:
    // 0x315f18: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x315f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x315f1c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x315f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x315f20: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x315f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315f24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x315f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x315f28: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x315f28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x315f2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x315f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315f30: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x315f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x315f34: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315F34u;
    {
        const bool branch_taken_0x315f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x315F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F34u;
        // 0x315f38: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f34) {
            ctx->pc = 0x315F58u;
            goto label_315f58;
        }
    }
    ctx->pc = 0x315F3Cu;
    // 0x315f3c: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x315f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x315f40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x315f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x315f44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315F44u;
    {
        const bool branch_taken_0x315f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315f44) {
            ctx->pc = 0x315F68u;
            goto label_315f68;
        }
    }
    ctx->pc = 0x315F4Cu;
    // 0x315f4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x315F4Cu;
    {
        const bool branch_taken_0x315f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315f4c) {
            ctx->pc = 0x315F90u;
            goto label_315f90;
        }
    }
    ctx->pc = 0x315F54u;
    // 0x315f54: 0x0  nop
    ctx->pc = 0x315f54u;
    // NOP
label_315f58:
    // 0x315f58: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x315f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x315f5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x315f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x315f60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x315F60u;
    {
        const bool branch_taken_0x315f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315f60) {
            ctx->pc = 0x315F90u;
            goto label_315f90;
        }
    }
    ctx->pc = 0x315F68u;
label_315f68:
    // 0x315f68: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x315f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x315f6c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x315f6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f70: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x315f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x315f74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x315f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x315f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f7c: 0xc0c6650  jal         func_319940
    ctx->pc = 0x315F7Cu;
    SET_GPR_U32(ctx, 31, 0x315F84u);
    ctx->pc = 0x315F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315F7Cu;
    // 0x315f80: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319940u, 0x315F7Cu, 0x315F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F84u;
label_315f84:
    // 0x315f84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x315f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f88: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x315f88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x315f8c: 0x0  nop
    ctx->pc = 0x315f8cu;
    // NOP
label_315f90:
    // 0x315f90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x315f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x315f94: 0x0  nop
    ctx->pc = 0x315f94u;
    // NOP
label_315f98:
    // 0x315f98: 0x96420068  lhu         $v0, 0x68($s2)
    ctx->pc = 0x315f98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x315f9c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x315f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x315fa0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x315FA0u;
    {
        const bool branch_taken_0x315fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315fa0) {
            ctx->pc = 0x315F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315f18;
        }
    }
    ctx->pc = 0x315FA8u;
    // 0x315fa8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x315fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x315fac: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x315facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x315fb0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x315fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x315fb4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x315fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x315fb8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x315fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x315fbc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x315fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x315fc0: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x315fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x315fc4: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x315FC4u;
    {
        const bool branch_taken_0x315fc4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x315FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FC4u;
        // 0x315fc8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315fc4) {
            ctx->pc = 0x316060u;
            goto label_316060;
        }
    }
    ctx->pc = 0x315FCCu;
    // 0x315fcc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x315fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x315fd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x315fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315fd4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x315FD4u;
    {
        const bool branch_taken_0x315fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x315fd4) {
            ctx->pc = 0x316030u;
            goto label_316030;
        }
    }
    ctx->pc = 0x315FDCu;
    // 0x315fdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x315fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315fe0: 0x12e2000d  beq         $s7, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x315FE0u;
    {
        const bool branch_taken_0x315fe0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x315fe0) {
            ctx->pc = 0x316018u;
            goto label_316018;
        }
    }
    ctx->pc = 0x315FE8u;
    // 0x315fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315fec: 0x12e20004  beq         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x315FECu;
    {
        const bool branch_taken_0x315fec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x315fec) {
            ctx->pc = 0x316000u;
            goto label_316000;
        }
    }
    ctx->pc = 0x315FF4u;
    // 0x315ff4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x315FF4u;
    {
        const bool branch_taken_0x315ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315ff4) {
            ctx->pc = 0x316060u;
            goto label_316060;
        }
    }
    ctx->pc = 0x315FFCu;
    // 0x315ffc: 0x0  nop
    ctx->pc = 0x315ffcu;
    // NOP
label_316000:
    // 0x316000: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x316000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316004: 0xc0c52b8  jal         func_314AE0
    ctx->pc = 0x316004u;
    SET_GPR_U32(ctx, 31, 0x31600Cu);
    ctx->pc = 0x316008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316004u;
    // 0x316008: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314AE0u, 0x316004u, 0x31600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31600Cu;
label_31600c:
    // 0x31600c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31600Cu;
    {
        const bool branch_taken_0x31600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31600Cu;
        // 0x316010: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31600c) {
            ctx->pc = 0x316060u;
            goto label_316060;
        }
    }
    ctx->pc = 0x316014u;
    // 0x316014: 0x0  nop
    ctx->pc = 0x316014u;
    // NOP
label_316018:
    // 0x316018: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x316018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31601c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31601cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316020: 0xc0c5414  jal         func_315050
    ctx->pc = 0x316020u;
    SET_GPR_U32(ctx, 31, 0x316028u);
    ctx->pc = 0x316024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316020u;
    // 0x316024: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315050u, 0x316020u, 0x316028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316028u;
label_316028:
    // 0x316028: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x316028u;
    {
        const bool branch_taken_0x316028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316028u;
        // 0x31602c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316028) {
            ctx->pc = 0x316060u;
            goto label_316060;
        }
    }
    ctx->pc = 0x316030u;
label_316030:
    // 0x316030: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x316030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x316034: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x316034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x316038: 0x27828b20  addiu       $v0, $gp, -0x74E0
    ctx->pc = 0x316038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937376));
    // 0x31603c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31603cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316040: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x316040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x316044: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x316044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x316048: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x316048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x31604c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x31604cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x316050: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x316050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x316054: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x316054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x316058: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31605c: 0x0  nop
    ctx->pc = 0x31605cu;
    // NOP
label_316060:
    // 0x316060: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x316060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x316064: 0xc0c65d8  jal         func_319760
    ctx->pc = 0x316064u;
    SET_GPR_U32(ctx, 31, 0x31606Cu);
    ctx->pc = 0x316068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316064u;
    // 0x316068: 0x2484bb10  addiu       $a0, $a0, -0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319760u, 0x316064u, 0x31606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31606Cu;
label_31606c:
    // 0x31606c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31606cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x316070: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x316070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316074: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x316074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x316078: 0x26c40100  addiu       $a0, $s6, 0x100
    ctx->pc = 0x316078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
    // 0x31607c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x31607cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x316080: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x316080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x316084: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x316084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x316088: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x316088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x31608c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x31608cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x316090: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x316090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x316094: 0x346303fc  ori         $v1, $v1, 0x3FC
    ctx->pc = 0x316094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1020);
    // 0x316098: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x316098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x31609c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x31609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3160a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3160a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3160a4: 0x1462008e  bne         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x3160A4u;
    {
        const bool branch_taken_0x3160a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3160A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160A4u;
        // 0x3160a8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3160a4) {
            ctx->pc = 0x3162E0u;
            goto label_3162e0;
        }
    }
    ctx->pc = 0x3160ACu;
    // 0x3160ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3160acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3160b0: 0x3c0e0005  lui         $t6, 0x5
    ctx->pc = 0x3160b0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5 << 16));
    // 0x3160b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3160b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3160b8: 0x35d3000d  ori         $s3, $t6, 0xD
    ctx->pc = 0x3160b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)13);
    // 0x3160bc: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x3160bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x3160c0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3160c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3160c4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3160c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3160c8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3160c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3160cc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3160ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x3160d0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3160d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x3160d4: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x3160d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x3160d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3160d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3160dc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3160dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3160e0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3160e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3160e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3160e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3160e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3160e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3160ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3160ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3160f0: 0x70026389  pcpyld      $t4, $zero, $v0
    ctx->pc = 0x3160f0u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3160f4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3160f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3160f8: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x3160f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x3160fc: 0xaf858b2c  sw          $a1, -0x74D4($gp)
    ctx->pc = 0x3160fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 5));
    // 0x316100: 0x344a00c0  ori         $t2, $v0, 0xC0
    ctx->pc = 0x316100u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x316104: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316108: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x316108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x31610c: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x31610cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x316110: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x316110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x316114: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x316114u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x316118: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x316118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31611c: 0x8c2df014  lw          $t5, -0xFEC($at)
    ctx->pc = 0x31611cu;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81F014u));
    // 0x316120: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x316120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316124: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x316124u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x316128: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x316128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x31612c: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x31612cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x316130: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316134: 0x240b004d  addiu       $t3, $zero, 0x4D
    ctx->pc = 0x316134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x316138: 0x2409004f  addiu       $t1, $zero, 0x4F
    ctx->pc = 0x316138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x31613c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x31613cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x316140: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x316140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x316144: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x316144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x316148: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x316148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x31614c: 0xddad0020  ld          $t5, 0x20($t5)
    ctx->pc = 0x31614cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x316150: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x316150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x316154: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x316154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x316158: 0x24110048  addiu       $s1, $zero, 0x48
    ctx->pc = 0x316158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x31615c: 0x24100046  addiu       $s0, $zero, 0x46
    ctx->pc = 0x31615cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x316160: 0x240f0043  addiu       $t7, $zero, 0x43
    ctx->pc = 0x316160u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x316164: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x316164u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316168: 0x31ad01ff  andi        $t5, $t5, 0x1FF
    ctx->pc = 0x316168u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)511);
    // 0x31616c: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x31616cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x316170: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x316170u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x316174: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x316174u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x316178: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31617c: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x31617cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x316180: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x316180u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x316184: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316188: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x316188u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x31618c: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x31618cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x316190: 0x8c29f014  lw          $t1, -0xFEC($at)
    ctx->pc = 0x316190u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F014u));
    // 0x316194: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316198: 0xdd290040  ld          $t1, 0x40($t1)
    ctx->pc = 0x316198u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x31619c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x31619cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x3161a0: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x3161a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x3161a4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3161a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3161a8: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x3161a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x3161ac: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x3161acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x3161b0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3161b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3161b4: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x3161b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x3161b8: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x3161b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x3161bc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3161bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3161c0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3161c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3161c4: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x3161c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x3161c8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3161c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3161cc: 0xfcb30000  sd          $s3, 0x0($a1)
    ctx->pc = 0x3161ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 19));
    // 0x3161d0: 0xfcb10008  sd          $s1, 0x8($a1)
    ctx->pc = 0x3161d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 17));
    // 0x3161d4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3161d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3161d8: 0xfcb00000  sd          $s0, 0x0($a1)
    ctx->pc = 0x3161d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 16));
    // 0x3161dc: 0xfcaf0008  sd          $t7, 0x8($a1)
    ctx->pc = 0x3161dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 15));
    // 0x3161e0: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x3161e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3161e4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3161e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3161e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3161e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3161ec: 0x21e82  srl         $v1, $v0, 26
    ctx->pc = 0x3161ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 26));
    // 0x3161f0: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x3161f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x3161f4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3161f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3161f8: 0x106e0013  beq         $v1, $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x3161F8u;
    {
        const bool branch_taken_0x3161f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 14));
        ctx->pc = 0x3161FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161F8u;
        // 0x3161fc: 0x3046000f  andi        $a2, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161f8) {
            ctx->pc = 0x316248u;
            goto label_316248;
        }
    }
    ctx->pc = 0x316200u;
    // 0x316200: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x316200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316204: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x316204u;
    {
        const bool branch_taken_0x316204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x316204) {
            ctx->pc = 0x316220u;
            goto label_316220;
        }
    }
    ctx->pc = 0x31620Cu;
    // 0x31620c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31620Cu;
    {
        const bool branch_taken_0x31620c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31620c) {
            ctx->pc = 0x316220u;
            goto label_316220;
        }
    }
    ctx->pc = 0x316214u;
    // 0x316214: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x316214u;
    {
        const bool branch_taken_0x316214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316214) {
            ctx->pc = 0x316278u;
            goto label_316278;
        }
    }
    ctx->pc = 0x31621Cu;
    // 0x31621c: 0x0  nop
    ctx->pc = 0x31621cu;
    // NOP
label_316220:
    // 0x316220: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x316220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316224: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316228: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316228u;
    {
        const bool branch_taken_0x316228 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316228u;
        // 0x31622c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316228) {
            ctx->pc = 0x316238u;
            goto label_316238;
        }
    }
    ctx->pc = 0x316230u;
    // 0x316230: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316234: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316234u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316238:
    // 0x316238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31623c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31623Cu;
    {
        const bool branch_taken_0x31623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31623Cu;
        // 0x316240: 0xa7a20140  sh          $v0, 0x140($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31623c) {
            ctx->pc = 0x316278u;
            goto label_316278;
        }
    }
    ctx->pc = 0x316244u;
    // 0x316244: 0x0  nop
    ctx->pc = 0x316244u;
    // NOP
label_316248:
    // 0x316248: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x316248u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x31624c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31624Cu;
    {
        const bool branch_taken_0x31624c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31624Cu;
        // 0x316250: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31624c) {
            ctx->pc = 0x31625Cu;
            goto label_31625c;
        }
    }
    ctx->pc = 0x316254u;
    // 0x316254: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316258: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316258u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31625c:
    // 0x31625c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316260: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x316260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x316264: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x316264u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x316268: 0x0  nop
    ctx->pc = 0x316268u;
    // NOP
    // 0x31626c: 0x0  nop
    ctx->pc = 0x31626cu;
    // NOP
    // 0x316270: 0x1012  mflo        $v0
    ctx->pc = 0x316270u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x316274: 0xa7a20140  sh          $v0, 0x140($sp)
    ctx->pc = 0x316274u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 2));
label_316278:
    // 0x316278: 0x97a20140  lhu         $v0, 0x140($sp)
    ctx->pc = 0x316278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31627c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x31627cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316280: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x316280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x316284: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x316284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316288: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x316288u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31628c: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x31628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x316290: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316290u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316294: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316294u;
    {
        const bool branch_taken_0x316294 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316294u;
        // 0x316298: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316294) {
            ctx->pc = 0x3162A4u;
            goto label_3162a4;
        }
    }
    ctx->pc = 0x31629Cu;
    // 0x31629c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3162a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3162a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3162a4:
    // 0x3162a4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3162a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3162a8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3162a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x3162ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3162acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3162b0: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x3162b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x3162b4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3162b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x3162b8: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3162b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3162bc: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x3162bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3162c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3162C0u;
    {
        const bool branch_taken_0x3162c0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3162C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162C0u;
        // 0x3162c4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162c0) {
            ctx->pc = 0x3162D0u;
            goto label_3162d0;
        }
    }
    ctx->pc = 0x3162C8u;
    // 0x3162c8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3162c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3162cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3162ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3162d0:
    // 0x3162d0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3162d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3162d4: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3162d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3162d8: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x3162D8u;
    {
        const bool branch_taken_0x3162d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162D8u;
        // 0x3162dc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162d8) {
            ctx->pc = 0x3165B8u;
            goto label_3165b8;
        }
    }
    ctx->pc = 0x3162E0u;
label_3162e0:
    // 0x3162e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3162e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3162e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3162e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3162e8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3162e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3162ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3162ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3162f0: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x3162f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x3162f4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3162f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3162f8: 0x34108700  ori         $s0, $zero, 0x8700
    ctx->pc = 0x3162f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x3162fc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3162fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x316300: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x316300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x316304: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x316304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x316308: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x316308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31630c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31630cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316310: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x316310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x316314: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x316314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x316318: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x316318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x31631c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x31631cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x316320: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x316320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x316324: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x316324u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x316328: 0x70023b89  pcpyld      $a3, $zero, $v0
    ctx->pc = 0x316328u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x31632c: 0xaf858b2c  sw          $a1, -0x74D4($gp)
    ctx->pc = 0x31632cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 5));
    // 0x316330: 0x108c38  dsll        $s1, $s0, 16
    ctx->pc = 0x316330u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << 16);
    // 0x316334: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316338: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x316338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31633c: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x31633cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x316340: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x316340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x316344: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x316344u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x316348: 0x344600c0  ori         $a2, $v0, 0xC0
    ctx->pc = 0x316348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x31634c: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x31634cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x316350: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x316350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x316354: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316358: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x316358u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31635c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x31635cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x316360: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x316360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x316364: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x316364u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x316368: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x316368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x31636c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31636cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316370: 0x4e1825  or          $v1, $v0, $t6
    ctx->pc = 0x316370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x316374: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x316374u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x316378: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x316378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x31637c: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x31637cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x316380: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x316380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x316384: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316388: 0x344a1001  ori         $t2, $v0, 0x1001
    ctx->pc = 0x316388u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x31638c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x31638cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x316390: 0x240d0041  addiu       $t5, $zero, 0x41
    ctx->pc = 0x316390u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x316394: 0xfcad0008  sd          $t5, 0x8($a1)
    ctx->pc = 0x316394u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 13));
    // 0x316398: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x316398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31639c: 0x8c2cf014  lw          $t4, -0xFEC($at)
    ctx->pc = 0x31639cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81F014u));
    // 0x3163a0: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x3163a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x3163a4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3163a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3163a8: 0x240b0019  addiu       $t3, $zero, 0x19
    ctx->pc = 0x3163a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3163ac: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x3163acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3163b0: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x3163b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3163b4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x3163b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3163b8: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x3163b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3163bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3163bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3163c0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x3163c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163c4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3163c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3163c8: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x3163c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x3163cc: 0xdd930040  ld          $s3, 0x40($t4)
    ctx->pc = 0x3163ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x3163d0: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x3163d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3163d4: 0xfcb30000  sd          $s3, 0x0($a1)
    ctx->pc = 0x3163d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 19));
    // 0x3163d8: 0x362c9000  ori         $t4, $s1, 0x9000
    ctx->pc = 0x3163d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)36864);
    // 0x3163dc: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x3163dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x3163e0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3163e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3163e4: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x3163e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x3163e8: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x3163e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x3163ec: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3163ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3163f0: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x3163f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x3163f4: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x3163f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x3163f8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3163f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3163fc: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x3163fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x316400: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x316400u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x316404: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316408: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x316408u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x31640c: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x31640cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x316410: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x316410u;
    {
        const bool branch_taken_0x316410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316410u;
        // 0x316414: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316410) {
            ctx->pc = 0x316460u;
            goto label_316460;
        }
    }
    ctx->pc = 0x316418u;
label_316418:
    // 0x316418: 0x25e4001f  addiu       $a0, $t7, 0x1F
    ctx->pc = 0x316418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 31));
    // 0x31641c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31641cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x316420: 0xf203c  dsll32      $a0, $t7, 0
    ctx->pc = 0x316420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) << (32 + 0));
    // 0x316424: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x316424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x316428: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x316428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31642c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x31642cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x316430: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x316430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x316434: 0x25ef0020  addiu       $t7, $t7, 0x20
    ctx->pc = 0x316434u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
    // 0x316438: 0x8e2025  or          $a0, $a0, $t6
    ctx->pc = 0x316438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
    // 0x31643c: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x31643cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x316440: 0xfcad0008  sd          $t5, 0x8($a1)
    ctx->pc = 0x316440u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 13));
    // 0x316444: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316448: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x316448u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x31644c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x31644cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x316450: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316454: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x316454u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x316458: 0xfcb00008  sd          $s0, 0x8($a1)
    ctx->pc = 0x316458u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 16));
    // 0x31645c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_316460:
    // 0x316460: 0x2de40200  sltiu       $a0, $t7, 0x200
    ctx->pc = 0x316460u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x316464: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x316464u;
    {
        const bool branch_taken_0x316464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x316464) {
            ctx->pc = 0x316418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316418;
        }
    }
    ctx->pc = 0x31646Cu;
    // 0x31646c: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x31646cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x316470: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x316470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x316474: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x316474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316478: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x316478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x31647c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31647cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x316480: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x316480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x316484: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x316484u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x316488: 0x24030218  addiu       $v1, $zero, 0x218
    ctx->pc = 0x316488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
    // 0x31648c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x31648cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x316490: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316494: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x316494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x316498: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x316498u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x31649c: 0x34441001  ori         $a0, $v0, 0x1001
    ctx->pc = 0x31649cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x3164a0: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x3164a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x3164a4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x3164a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3164a8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3164a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3164ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3164acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3164b0: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x3164b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x3164b4: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x3164b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x3164b8: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x3164b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3164bc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3164bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3164c0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3164c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3164c4: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x3164c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x3164c8: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x3164c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x3164cc: 0x30870003  andi        $a3, $a0, 0x3
    ctx->pc = 0x3164ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3164d0: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3164D0u;
    {
        const bool branch_taken_0x3164d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3164D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164D0u;
        // 0x3164d4: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164d0) {
            ctx->pc = 0x316520u;
            goto label_316520;
        }
    }
    ctx->pc = 0x3164D8u;
    // 0x3164d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3164d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3164dc: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3164DCu;
    {
        const bool branch_taken_0x3164dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x3164dc) {
            ctx->pc = 0x3164F8u;
            goto label_3164f8;
        }
    }
    ctx->pc = 0x3164E4u;
    // 0x3164e4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3164E4u;
    {
        const bool branch_taken_0x3164e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3164e4) {
            ctx->pc = 0x3164F8u;
            goto label_3164f8;
        }
    }
    ctx->pc = 0x3164ECu;
    // 0x3164ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3164ECu;
    {
        const bool branch_taken_0x3164ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3164ec) {
            ctx->pc = 0x316550u;
            goto label_316550;
        }
    }
    ctx->pc = 0x3164F4u;
    // 0x3164f4: 0x0  nop
    ctx->pc = 0x3164f4u;
    // NOP
label_3164f8:
    // 0x3164f8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x3164f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3164fc: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x3164fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316500: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316500u;
    {
        const bool branch_taken_0x316500 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316500u;
        // 0x316504: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316500) {
            ctx->pc = 0x316510u;
            goto label_316510;
        }
    }
    ctx->pc = 0x316508u;
    // 0x316508: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31650c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31650cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316510:
    // 0x316510: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316514: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x316514u;
    {
        const bool branch_taken_0x316514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316514u;
        // 0x316518: 0xa7a20130  sh          $v0, 0x130($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316514) {
            ctx->pc = 0x316550u;
            goto label_316550;
        }
    }
    ctx->pc = 0x31651Cu;
    // 0x31651c: 0x0  nop
    ctx->pc = 0x31651cu;
    // NOP
label_316520:
    // 0x316520: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x316520u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x316524: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316524u;
    {
        const bool branch_taken_0x316524 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316524u;
        // 0x316528: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316524) {
            ctx->pc = 0x316534u;
            goto label_316534;
        }
    }
    ctx->pc = 0x31652Cu;
    // 0x31652c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316530: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316534:
    // 0x316534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316538: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x316538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31653c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x31653cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x316540: 0x0  nop
    ctx->pc = 0x316540u;
    // NOP
    // 0x316544: 0x0  nop
    ctx->pc = 0x316544u;
    // NOP
    // 0x316548: 0x1012  mflo        $v0
    ctx->pc = 0x316548u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31654c: 0xa7a20130  sh          $v0, 0x130($sp)
    ctx->pc = 0x31654cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 2));
label_316550:
    // 0x316550: 0x97a20130  lhu         $v0, 0x130($sp)
    ctx->pc = 0x316550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x316554: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x316554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316558: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x316558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31655c: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x31655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316560: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x316560u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x316564: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x316564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x316568: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31656c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31656Cu;
    {
        const bool branch_taken_0x31656c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31656Cu;
        // 0x316570: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31656c) {
            ctx->pc = 0x31657Cu;
            goto label_31657c;
        }
    }
    ctx->pc = 0x316574u;
    // 0x316574: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316578: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316578u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31657c:
    // 0x31657c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x31657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316580: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x316580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x316584: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x316584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x316588: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x316588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x31658c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x31658cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x316590: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x316590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x316594: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316594u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316598: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316598u;
    {
        const bool branch_taken_0x316598 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316598u;
        // 0x31659c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316598) {
            ctx->pc = 0x3165A8u;
            goto label_3165a8;
        }
    }
    ctx->pc = 0x3165A0u;
    // 0x3165a0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3165a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3165a4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3165a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3165a8:
    // 0x3165a8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3165a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3165ac: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3165acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3165b0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3165b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3165b4: 0x0  nop
    ctx->pc = 0x3165b4u;
    // NOP
label_3165b8:
    // 0x3165b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3165b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3165bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3165bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3165c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3165c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3165c4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3165c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3165c8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3165c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3165cc: 0x34440404  ori         $a0, $v0, 0x404
    ctx->pc = 0x3165ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3165d0: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x3165d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x3165d4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x3165d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x3165d8: 0x344203ec  ori         $v0, $v0, 0x3EC
    ctx->pc = 0x3165d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1004);
    // 0x3165dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3165dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165e0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x3165e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x3165e4: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x3165e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x3165e8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3165e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3165ec: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3165ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3165f0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3165f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3165f4: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x3165f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x3165f8: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x3165f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x3165fc: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x3165FCu;
    SET_GPR_U32(ctx, 31, 0x316604u);
    ctx->pc = 0x316600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3165FCu;
    // 0x316600: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x3165FCu, 0x316604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316604u;
label_316604:
    // 0x316604: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x316604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316608: 0x151982  srl         $v1, $s5, 6
    ctx->pc = 0x316608u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 6));
    // 0x31660c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31660cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x316610: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x316610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x316614: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x316614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x316618: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x316618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31661c: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x31661cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x316620: 0x3c0201b0  lui         $v0, 0x1B0
    ctx->pc = 0x316620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)432 << 16));
    // 0x316624: 0x34421080  ori         $v0, $v0, 0x1080
    ctx->pc = 0x316624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4224);
    // 0x316628: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x316628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31662c: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x31662Cu;
    SET_GPR_U32(ctx, 31, 0x316634u);
    ctx->pc = 0x316630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31662Cu;
    // 0x316630: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x31662Cu, 0x316634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316634u;
label_316634:
    // 0x316634: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x316634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316638: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x316638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31663c: 0x3c022003  lui         $v0, 0x2003
    ctx->pc = 0x31663cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8195 << 16));
    // 0x316640: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x316640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x316644: 0x3442a584  ori         $v0, $v0, 0xA584
    ctx->pc = 0x316644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42372);
    // 0x316648: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x316648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x31664c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316650: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x316650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x316654: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x316654u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x316658: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x316658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31665c: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x31665cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x316660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316664: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x316664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316668: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31666c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x31666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x316670: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x316670u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x316674: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x316674u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x316678: 0x30870003  andi        $a3, $a0, 0x3
    ctx->pc = 0x316678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x31667c: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31667Cu;
    {
        const bool branch_taken_0x31667c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x316680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31667Cu;
        // 0x316680: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31667c) {
            ctx->pc = 0x3166C8u;
            goto label_3166c8;
        }
    }
    ctx->pc = 0x316684u;
    // 0x316684: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x316684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316688: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316688u;
    {
        const bool branch_taken_0x316688 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x316688) {
            ctx->pc = 0x3166A0u;
            goto label_3166a0;
        }
    }
    ctx->pc = 0x316690u;
    // 0x316690: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x316690u;
    {
        const bool branch_taken_0x316690 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x316690) {
            ctx->pc = 0x3166A0u;
            goto label_3166a0;
        }
    }
    ctx->pc = 0x316698u;
    // 0x316698: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x316698u;
    {
        const bool branch_taken_0x316698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316698) {
            ctx->pc = 0x3166F8u;
            goto label_3166f8;
        }
    }
    ctx->pc = 0x3166A0u;
label_3166a0:
    // 0x3166a0: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x3166a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3166a4: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x3166a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3166a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3166A8u;
    {
        const bool branch_taken_0x3166a8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3166ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166A8u;
        // 0x3166ac: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3166a8) {
            ctx->pc = 0x3166B8u;
            goto label_3166b8;
        }
    }
    ctx->pc = 0x3166B0u;
    // 0x3166b0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3166b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3166b4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3166b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3166b8:
    // 0x3166b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3166b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3166bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3166BCu;
    {
        const bool branch_taken_0x3166bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3166C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166BCu;
        // 0x3166c0: 0xa7a20120  sh          $v0, 0x120($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3166bc) {
            ctx->pc = 0x3166F8u;
            goto label_3166f8;
        }
    }
    ctx->pc = 0x3166C4u;
    // 0x3166c4: 0x0  nop
    ctx->pc = 0x3166c4u;
    // NOP
label_3166c8:
    // 0x3166c8: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x3166c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3166cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3166CCu;
    {
        const bool branch_taken_0x3166cc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3166D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166CCu;
        // 0x3166d0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3166cc) {
            ctx->pc = 0x3166DCu;
            goto label_3166dc;
        }
    }
    ctx->pc = 0x3166D4u;
    // 0x3166d4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3166d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3166d8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3166d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3166dc:
    // 0x3166dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3166dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3166e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3166e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3166e4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x3166e4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3166e8: 0x0  nop
    ctx->pc = 0x3166e8u;
    // NOP
    // 0x3166ec: 0x0  nop
    ctx->pc = 0x3166ecu;
    // NOP
    // 0x3166f0: 0x1012  mflo        $v0
    ctx->pc = 0x3166f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3166f4: 0xa7a20120  sh          $v0, 0x120($sp)
    ctx->pc = 0x3166f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 2));
label_3166f8:
    // 0x3166f8: 0x97a20120  lhu         $v0, 0x120($sp)
    ctx->pc = 0x3166f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3166fc: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x3166fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316700: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x316700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x316704: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x316704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316708: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x316708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31670c: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x31670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x316710: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316714: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316714u;
    {
        const bool branch_taken_0x316714 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316714u;
        // 0x316718: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316714) {
            ctx->pc = 0x316724u;
            goto label_316724;
        }
    }
    ctx->pc = 0x31671Cu;
    // 0x31671c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316720: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316724:
    // 0x316724: 0x8f888b28  lw          $t0, -0x74D8($gp)
    ctx->pc = 0x316724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x316728: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x316728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31672c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x316730: 0x26c60140  addiu       $a2, $s6, 0x140
    ctx->pc = 0x316730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 320));
    // 0x316734: 0x34470004  ori         $a3, $v0, 0x4
    ctx->pc = 0x316734u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x316738: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x316738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x31673c: 0x34440404  ori         $a0, $v0, 0x404
    ctx->pc = 0x31673cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x316740: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x316740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x316744: 0xa5090000  sh          $t1, 0x0($t0)
    ctx->pc = 0x316744u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x316748: 0x344303fc  ori         $v1, $v0, 0x3FC
    ctx->pc = 0x316748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x31674c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x31674cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x316750: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x316750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x316754: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x316754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x316758: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x316758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x31675c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x31675cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x316760: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x316760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x316764: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x316764u;
    {
        const bool branch_taken_0x316764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x316768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316764u;
        // 0x316768: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316764) {
            ctx->pc = 0x316840u;
            goto label_316840;
        }
    }
    ctx->pc = 0x31676Cu;
    // 0x31676c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31676cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x316770: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x316770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316774: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x316774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x316778: 0xc0c663c  jal         func_3198F0
    ctx->pc = 0x316778u;
    SET_GPR_U32(ctx, 31, 0x316780u);
    ctx->pc = 0x31677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316778u;
    // 0x31677c: 0x2413000c  addiu       $s3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3198F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3198F0u, 0x316778u, 0x316780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316780u;
label_316780:
    // 0x316780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x316780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316784: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x316784u;
    {
        const bool branch_taken_0x316784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316784u;
        // 0x316788: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316784) {
            ctx->pc = 0x316810u;
            goto label_316810;
        }
    }
    ctx->pc = 0x31678Cu;
    // 0x31678c: 0x0  nop
    ctx->pc = 0x31678cu;
    // NOP
label_316790:
    // 0x316790: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x316790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x316794: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x316794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x316798: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x316798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31679c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3167a0: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x3167a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3167a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3167a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3167a8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3167a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3167ac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3167ACu;
    {
        const bool branch_taken_0x3167ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3167B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167ACu;
        // 0x3167b0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3167ac) {
            ctx->pc = 0x3167D0u;
            goto label_3167d0;
        }
    }
    ctx->pc = 0x3167B4u;
    // 0x3167b4: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x3167b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3167b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3167b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3167bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3167BCu;
    {
        const bool branch_taken_0x3167bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3167bc) {
            ctx->pc = 0x3167E0u;
            goto label_3167e0;
        }
    }
    ctx->pc = 0x3167C4u;
    // 0x3167c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3167C4u;
    {
        const bool branch_taken_0x3167c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3167c4) {
            ctx->pc = 0x316808u;
            goto label_316808;
        }
    }
    ctx->pc = 0x3167CCu;
    // 0x3167cc: 0x0  nop
    ctx->pc = 0x3167ccu;
    // NOP
label_3167d0:
    // 0x3167d0: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x3167d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3167d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3167d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3167d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3167D8u;
    {
        const bool branch_taken_0x3167d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3167d8) {
            ctx->pc = 0x316808u;
            goto label_316808;
        }
    }
    ctx->pc = 0x3167E0u;
label_3167e0:
    // 0x3167e0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x3167e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x3167e4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3167e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167e8: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x3167e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x3167ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3167ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3167f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167f4: 0xc0c6650  jal         func_319940
    ctx->pc = 0x3167F4u;
    SET_GPR_U32(ctx, 31, 0x3167FCu);
    ctx->pc = 0x3167F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167F4u;
    // 0x3167f8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319940u, 0x3167F4u, 0x3167FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167FCu;
label_3167fc:
    // 0x3167fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3167fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316800: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x316800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x316804: 0x0  nop
    ctx->pc = 0x316804u;
    // NOP
label_316808:
    // 0x316808: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x316808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31680c: 0x0  nop
    ctx->pc = 0x31680cu;
    // NOP
label_316810:
    // 0x316810: 0x96420068  lhu         $v0, 0x68($s2)
    ctx->pc = 0x316810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x316814: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x316814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x316818: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x316818u;
    {
        const bool branch_taken_0x316818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316818) {
            ctx->pc = 0x316790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316790;
        }
    }
    ctx->pc = 0x316820u;
    // 0x316820: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x316820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x316824: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x316824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x316828: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x316828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x31682c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x31682cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x316830: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x316830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x316834: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x316834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x316838: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x316838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x31683c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31683cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_316840:
    // 0x316840: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x316840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x316844: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x316844u;
    {
        const bool branch_taken_0x316844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316844u;
        // 0x316848: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316844) {
            ctx->pc = 0x3169D0u;
            goto label_3169d0;
        }
    }
    ctx->pc = 0x31684Cu;
    // 0x31684c: 0x0  nop
    ctx->pc = 0x31684cu;
    // NOP
label_316850:
    // 0x316850: 0x240222b0  addiu       $v0, $zero, 0x22B0
    ctx->pc = 0x316850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
    // 0x316854: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x316854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x316858: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x316858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31685c: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x31685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x316860: 0x244295a0  addiu       $v0, $v0, -0x6A60
    ctx->pc = 0x316860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x316864: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x316864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316868: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x316868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x31686c: 0x24750030  addiu       $s5, $v1, 0x30
    ctx->pc = 0x31686cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x316870: 0x8c7700ac  lw          $s7, 0xAC($v1)
    ctx->pc = 0x316870u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x316874: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x316874u;
    {
        const bool branch_taken_0x316874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316874u;
        // 0x316878: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316874) {
            ctx->pc = 0x3169B8u;
            goto label_3169b8;
        }
    }
    ctx->pc = 0x31687Cu;
    // 0x31687c: 0x0  nop
    ctx->pc = 0x31687cu;
    // NOP
label_316880:
    // 0x316880: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x316880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x316884: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x316884u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x316888: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31688c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31688cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x316890: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x316890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x316894: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x316894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x316898: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x316898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31689c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x31689Cu;
    {
        const bool branch_taken_0x31689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31689c) {
            ctx->pc = 0x3169B0u;
            goto label_3169b0;
        }
    }
    ctx->pc = 0x3168A4u;
    // 0x3168a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3168a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3168a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3168a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3168ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3168acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3168b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3168b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3168b4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x3168b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3168b8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3168b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3168bc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3168BCu;
    {
        const bool branch_taken_0x3168bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3168bc) {
            ctx->pc = 0x3169B0u;
            goto label_3169b0;
        }
    }
    ctx->pc = 0x3168C4u;
    // 0x3168c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3168c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3168c8: 0x26c30180  addiu       $v1, $s6, 0x180
    ctx->pc = 0x3168c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 384));
    // 0x3168cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3168ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3168d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3168d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3168d4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3168d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3168d8: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x3168d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3168dc: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x3168dcu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3168e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3168e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3168e4: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x3168e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3168e8: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x3168e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3168ec: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x3168ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3168f0: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x3168f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3168f4: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x3168f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3168f8: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x3168f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3168fc: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x3168fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x316900: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x316900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x316904: 0x4a0002ff  vnop
    ctx->pc = 0x316904u;
    // NOP operation, no action needed for VU0
    // 0x316908: 0x4a0002ff  vnop
    ctx->pc = 0x316908u;
    // NOP operation, no action needed for VU0
    // 0x31690c: 0x4a0002ff  vnop
    ctx->pc = 0x31690cu;
    // NOP operation, no action needed for VU0
    // 0x316910: 0x4a0002ff  vnop
    ctx->pc = 0x316910u;
    // NOP operation, no action needed for VU0
    // 0x316914: 0x4a0002ff  vnop
    ctx->pc = 0x316914u;
    // NOP operation, no action needed for VU0
    // 0x316918: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x316918u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x31691c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x31691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x316920: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x316920u;
    {
        const bool branch_taken_0x316920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316920) {
            ctx->pc = 0x3169B0u;
            goto label_3169b0;
        }
    }
    ctx->pc = 0x316928u;
    // 0x316928: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x316928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31692c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x31692cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x316930: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x316930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x316934: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x316934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x316938: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31693c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x316940: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x316940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x316944: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x316944u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x316948: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x316948u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31694c: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x31694cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x316950: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x316950u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x316954: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x316954u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x316958: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x316958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x31695c: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x31695cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x316960: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x316960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x316964: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x316964u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x316968: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x316968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x31696c: 0x4a0002ff  vnop
    ctx->pc = 0x31696cu;
    // NOP operation, no action needed for VU0
    // 0x316970: 0x4a0002ff  vnop
    ctx->pc = 0x316970u;
    // NOP operation, no action needed for VU0
    // 0x316974: 0x4a0002ff  vnop
    ctx->pc = 0x316974u;
    // NOP operation, no action needed for VU0
    // 0x316978: 0x4a0002ff  vnop
    ctx->pc = 0x316978u;
    // NOP operation, no action needed for VU0
    // 0x31697c: 0x4a0002ff  vnop
    ctx->pc = 0x31697cu;
    // NOP operation, no action needed for VU0
    // 0x316980: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x316980u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x316984: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x316984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x316988: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x316988u;
    {
        const bool branch_taken_0x316988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316988) {
            ctx->pc = 0x3169B0u;
            goto label_3169b0;
        }
    }
    ctx->pc = 0x316990u;
    // 0x316990: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x316990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x316994: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x316994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316998: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x316998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x31699c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x31699cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169a0: 0xc0c66d8  jal         func_319B60
    ctx->pc = 0x3169A0u;
    SET_GPR_U32(ctx, 31, 0x3169A8u);
    ctx->pc = 0x3169A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3169A0u;
    // 0x3169a4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319B60u, 0x3169A0u, 0x3169A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3169A8u;
label_3169a8:
    // 0x3169a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3169a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169ac: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3169acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3169b0:
    // 0x3169b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3169b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3169b4: 0x0  nop
    ctx->pc = 0x3169b4u;
    // NOP
label_3169b8:
    // 0x3169b8: 0x96a20068  lhu         $v0, 0x68($s5)
    ctx->pc = 0x3169b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x3169bc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3169bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3169c0: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x3169C0u;
    {
        const bool branch_taken_0x3169c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3169c0) {
            ctx->pc = 0x316880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316880;
        }
    }
    ctx->pc = 0x3169C8u;
    // 0x3169c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3169c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3169cc: 0x0  nop
    ctx->pc = 0x3169ccu;
    // NOP
label_3169d0:
    // 0x3169d0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3169d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3169d4: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x3169d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x3169d8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3169d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3169dc: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x3169DCu;
    {
        const bool branch_taken_0x3169dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3169dc) {
            ctx->pc = 0x316850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316850;
        }
    }
    ctx->pc = 0x3169E4u;
    // 0x3169e4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3169e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3169e8: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x3169e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x3169ec: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3169ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x3169f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3169f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3169f4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3169f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3169f8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3169f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3169fc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3169fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x316a00: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x316a00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x316a04: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x316a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x316a08: 0x1462015b  bne         $v1, $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x316A08u;
    {
        const bool branch_taken_0x316a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x316A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A08u;
        // 0x316a0c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316a08) {
            ctx->pc = 0x316F78u;
            goto label_316f78;
        }
    }
    ctx->pc = 0x316A10u;
    // 0x316a10: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x316a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x316a14: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x316a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x316a18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x316a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x316a1c: 0x34c700ff  ori         $a3, $a2, 0xFF
    ctx->pc = 0x316a1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x316a20: 0x8f888b10  lw          $t0, -0x74F0($gp)
    ctx->pc = 0x316a20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937360)));
    // 0x316a24: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x316a24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x316a28: 0x240d7900  addiu       $t5, $zero, 0x7900
    ctx->pc = 0x316a28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x316a2c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x316a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x316a30: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x316a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x316a34: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x316a34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x316a38: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x316a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x316a3c: 0x240b004d  addiu       $t3, $zero, 0x4D
    ctx->pc = 0x316a3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x316a40: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x316a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x316a44: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x316a44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x316a48: 0x70066389  pcpyld      $t4, $zero, $a2
    ctx->pc = 0x316a48u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x316a4c: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x316a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x316a50: 0x2407037c  addiu       $a3, $zero, 0x37C
    ctx->pc = 0x316a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x316a54: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x316a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x316a58: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x316a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x316a5c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x316a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x316a60: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x316a60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x316a64: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316a68: 0x34c6c00a  ori         $a2, $a2, 0xC00A
    ctx->pc = 0x316a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49162);
    // 0x316a6c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x316a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x316a70: 0xc75025  or          $t2, $a2, $a3
    ctx->pc = 0x316a70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x316a74: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x316a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x316a78: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x316a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x316a7c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x316a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x316a80: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x316a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x316a84: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x316a84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x316a88: 0x240400a1  addiu       $a0, $zero, 0xA1
    ctx->pc = 0x316a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x316a8c: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x316a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x316a90: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x316a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x316a94: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316a98: 0x24080350  addiu       $t0, $zero, 0x350
    ctx->pc = 0x316a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
    // 0x316a9c: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x316a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x316aa0: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x316aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x316aa4: 0xaf858b2c  sw          $a1, -0x74D4($gp)
    ctx->pc = 0x316aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 5));
    // 0x316aa8: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x316aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x316aac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316ab0: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x316ab0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x316ab4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x316ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x316ab8: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x316ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x316abc: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x316abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x316ac0: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x316ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x316ac4: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x316ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x316ac8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316acc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x316accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x316ad0: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x316ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x316ad4: 0x3c0d0004  lui         $t5, 0x4
    ctx->pc = 0x316ad4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4 << 16));
    // 0x316ad8: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x316ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x316adc: 0x35ac1d2c  ori         $t4, $t5, 0x1D2C
    ctx->pc = 0x316adcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)7468);
    // 0x316ae0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316ae4: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x316ae4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
    // 0x316ae8: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x316ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x316aec: 0x240c0050  addiu       $t4, $zero, 0x50
    ctx->pc = 0x316aecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x316af0: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x316af0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x316af4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x316af4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x316af8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316afc: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x316afcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x316b00: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x316b00u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x316b04: 0x240b0051  addiu       $t3, $zero, 0x51
    ctx->pc = 0x316b04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x316b08: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x316b08u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x316b0c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x316b0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x316b10: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316b14: 0x24080052  addiu       $t0, $zero, 0x52
    ctx->pc = 0x316b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x316b18: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x316b18u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x316b1c: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x316b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x316b20: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x316b20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x316b24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x316b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316b28: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316b2c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x316b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x316b30: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x316b30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x316b34: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316b38: 0xfcad0000  sd          $t5, 0x0($a1)
    ctx->pc = 0x316b38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 13));
    // 0x316b3c: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x316b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x316b40: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316b44: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x316b44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x316b48: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x316b48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x316b4c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316b50: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x316b50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x316b54: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x316b54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x316b58: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316b5c: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x316b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x316b60: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x316b60u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x316b64: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x316b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316b68: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316b6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x316b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x316b70: 0x21e82  srl         $v1, $v0, 26
    ctx->pc = 0x316b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 26));
    // 0x316b74: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x316b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x316b78: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x316b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x316b7c: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x316B7Cu;
    {
        const bool branch_taken_0x316b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x316B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B7Cu;
        // 0x316b80: 0x3047000f  andi        $a3, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b7c) {
            ctx->pc = 0x316BC8u;
            goto label_316bc8;
        }
    }
    ctx->pc = 0x316B84u;
    // 0x316b84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x316b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316b88: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316B88u;
    {
        const bool branch_taken_0x316b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x316b88) {
            ctx->pc = 0x316BA0u;
            goto label_316ba0;
        }
    }
    ctx->pc = 0x316B90u;
    // 0x316b90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316B90u;
    {
        const bool branch_taken_0x316b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x316b90) {
            ctx->pc = 0x316BA0u;
            goto label_316ba0;
        }
    }
    ctx->pc = 0x316B98u;
    // 0x316b98: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x316B98u;
    {
        const bool branch_taken_0x316b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316b98) {
            ctx->pc = 0x316BF8u;
            goto label_316bf8;
        }
    }
    ctx->pc = 0x316BA0u;
label_316ba0:
    // 0x316ba0: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x316ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316ba4: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316ba8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316BA8u;
    {
        const bool branch_taken_0x316ba8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BA8u;
        // 0x316bac: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ba8) {
            ctx->pc = 0x316BB8u;
            goto label_316bb8;
        }
    }
    ctx->pc = 0x316BB0u;
    // 0x316bb0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316bb4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316bb8:
    // 0x316bb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316bbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x316BBCu;
    {
        const bool branch_taken_0x316bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BBCu;
        // 0x316bc0: 0xa7a20110  sh          $v0, 0x110($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316bbc) {
            ctx->pc = 0x316BF8u;
            goto label_316bf8;
        }
    }
    ctx->pc = 0x316BC4u;
    // 0x316bc4: 0x0  nop
    ctx->pc = 0x316bc4u;
    // NOP
label_316bc8:
    // 0x316bc8: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x316bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x316bcc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316BCCu;
    {
        const bool branch_taken_0x316bcc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BCCu;
        // 0x316bd0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316bcc) {
            ctx->pc = 0x316BDCu;
            goto label_316bdc;
        }
    }
    ctx->pc = 0x316BD4u;
    // 0x316bd4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316bd8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316bd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316bdc:
    // 0x316bdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316be0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x316be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x316be4: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x316be4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x316be8: 0x0  nop
    ctx->pc = 0x316be8u;
    // NOP
    // 0x316bec: 0x0  nop
    ctx->pc = 0x316becu;
    // NOP
    // 0x316bf0: 0x1012  mflo        $v0
    ctx->pc = 0x316bf0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x316bf4: 0xa7a20110  sh          $v0, 0x110($sp)
    ctx->pc = 0x316bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 2));
label_316bf8:
    // 0x316bf8: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x316bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x316bfc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x316bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316c00: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x316c00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x316c04: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x316c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316c08: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x316c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x316c0c: 0x97a20110  lhu         $v0, 0x110($sp)
    ctx->pc = 0x316c0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x316c10: 0x2508dbd0  addiu       $t0, $t0, -0x2430
    ctx->pc = 0x316c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958032));
    // 0x316c14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x316c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c18: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x316c18u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x316c1c: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x316c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x316c20: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x316c20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x316c24: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x316c24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x316c28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x316C28u;
    {
        const bool branch_taken_0x316c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C28u;
        // 0x316c2c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c28) {
            ctx->pc = 0x316C60u;
            goto label_316c60;
        }
    }
    ctx->pc = 0x316C30u;
label_316c30:
    // 0x316c30: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x316c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x316c34: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x316c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x316c38: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x316c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x316c3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x316c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x316c40: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x316c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x316c44: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x316c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x316c48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x316c4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x316c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x316c50: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x316c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x316c54: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x316c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x316c58: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x316c58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x316c5c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_316c60:
    // 0x316c60: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x316c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x316c64: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x316C64u;
    {
        const bool branch_taken_0x316c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316c64) {
            ctx->pc = 0x316C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316c30;
        }
    }
    ctx->pc = 0x316C6Cu;
    // 0x316c6c: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x316c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316c74: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x316c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x316c78: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x316c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x316c7c: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x316c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x316c80: 0x30870003  andi        $a3, $a0, 0x3
    ctx->pc = 0x316c80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x316c84: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x316C84u;
    {
        const bool branch_taken_0x316c84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x316C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C84u;
        // 0x316c88: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c84) {
            ctx->pc = 0x316CD0u;
            goto label_316cd0;
        }
    }
    ctx->pc = 0x316C8Cu;
    // 0x316c8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x316c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316c90: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316C90u;
    {
        const bool branch_taken_0x316c90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x316c90) {
            ctx->pc = 0x316CA8u;
            goto label_316ca8;
        }
    }
    ctx->pc = 0x316C98u;
    // 0x316c98: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x316C98u;
    {
        const bool branch_taken_0x316c98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x316c98) {
            ctx->pc = 0x316CA8u;
            goto label_316ca8;
        }
    }
    ctx->pc = 0x316CA0u;
    // 0x316ca0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x316CA0u;
    {
        const bool branch_taken_0x316ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316ca0) {
            ctx->pc = 0x316D00u;
            goto label_316d00;
        }
    }
    ctx->pc = 0x316CA8u;
label_316ca8:
    // 0x316ca8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x316ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316cac: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316cb0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316CB0u;
    {
        const bool branch_taken_0x316cb0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CB0u;
        // 0x316cb4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316cb0) {
            ctx->pc = 0x316CC0u;
            goto label_316cc0;
        }
    }
    ctx->pc = 0x316CB8u;
    // 0x316cb8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316cbc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316cc0:
    // 0x316cc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316cc4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x316CC4u;
    {
        const bool branch_taken_0x316cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CC4u;
        // 0x316cc8: 0xa7a20100  sh          $v0, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316cc4) {
            ctx->pc = 0x316D00u;
            goto label_316d00;
        }
    }
    ctx->pc = 0x316CCCu;
    // 0x316ccc: 0x0  nop
    ctx->pc = 0x316cccu;
    // NOP
label_316cd0:
    // 0x316cd0: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x316cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x316cd4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316CD4u;
    {
        const bool branch_taken_0x316cd4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CD4u;
        // 0x316cd8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316cd4) {
            ctx->pc = 0x316CE4u;
            goto label_316ce4;
        }
    }
    ctx->pc = 0x316CDCu;
    // 0x316cdc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316ce0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316ce4:
    // 0x316ce4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316ce8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x316ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x316cec: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x316cecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x316cf0: 0x0  nop
    ctx->pc = 0x316cf0u;
    // NOP
    // 0x316cf4: 0x0  nop
    ctx->pc = 0x316cf4u;
    // NOP
    // 0x316cf8: 0x1012  mflo        $v0
    ctx->pc = 0x316cf8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x316cfc: 0xa7a20100  sh          $v0, 0x100($sp)
    ctx->pc = 0x316cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 2));
label_316d00:
    // 0x316d00: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x316d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x316d04: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x316d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316d08: 0x8f898b30  lw          $t1, -0x74D0($gp)
    ctx->pc = 0x316d08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316d0c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x316d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x316d10: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x316d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x316d14: 0x344c1001  ori         $t4, $v0, 0x1001
    ctx->pc = 0x316d14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x316d18: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x316d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x316d1c: 0x3c022003  lui         $v0, 0x2003
    ctx->pc = 0x316d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8195 << 16));
    // 0x316d20: 0x240b0048  addiu       $t3, $zero, 0x48
    ctx->pc = 0x316d20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x316d24: 0x3444a58e  ori         $a0, $v0, 0xA58E
    ctx->pc = 0x316d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42382);
    // 0x316d28: 0x3c0365b2  lui         $v1, 0x65B2
    ctx->pc = 0x316d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26034 << 16));
    // 0x316d2c: 0x97a20100  lhu         $v0, 0x100($sp)
    ctx->pc = 0x316d2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x316d30: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x316d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x316d34: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x316d34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x316d38: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x316d38u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x316d3c: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x316d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x316d40: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x316d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x316d44: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x316d44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x316d48: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x316d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x316d4c: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x316d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x316d50: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x316d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x316d54: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316d58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x316d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316d5c: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x316d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x316d60: 0x24090061  addiu       $t1, $zero, 0x61
    ctx->pc = 0x316d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x316d64: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x316d64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x316d68: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x316d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x316d6c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316d70: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x316d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x316d74: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x316d74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x316d78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x316d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d7c: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x316d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x316d80: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x316d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x316d84: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316d88: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x316d88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x316d8c: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x316d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x316d90: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x316d90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x316d94: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x316d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x316d98: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316d9c: 0x34cd0008  ori         $t5, $a2, 0x8
    ctx->pc = 0x316d9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x316da0: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x316da0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x316da4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x316da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x316da8: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x316da8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x316dac: 0x240a000d  addiu       $t2, $zero, 0xD
    ctx->pc = 0x316dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x316db0: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x316db0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x316db4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316db8: 0x3c067900  lui         $a2, 0x7900
    ctx->pc = 0x316db8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30976 << 16));
    // 0x316dbc: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x316dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x316dc0: 0x34c67000  ori         $a2, $a2, 0x7000
    ctx->pc = 0x316dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28672);
    // 0x316dc4: 0x3c070e08  lui         $a3, 0xE08
    ctx->pc = 0x316dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3592 << 16));
    // 0x316dc8: 0xc85825  or          $t3, $a2, $t0
    ctx->pc = 0x316dc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x316dcc: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x316dccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x316dd0: 0x34068700  ori         $a2, $zero, 0x8700
    ctx->pc = 0x316dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x316dd4: 0x34e92008  ori         $t1, $a3, 0x2008
    ctx->pc = 0x316dd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8200);
    // 0x316dd8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x316dd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x316ddc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316de0: 0x34c69000  ori         $a2, $a2, 0x9000
    ctx->pc = 0x316de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
    // 0x316de4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x316de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x316de8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x316DE8u;
    {
        const bool branch_taken_0x316de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DE8u;
        // 0x316dec: 0xc84025  or          $t0, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316de8) {
            ctx->pc = 0x316E50u;
            goto label_316e50;
        }
    }
    ctx->pc = 0x316DF0u;
label_316df0:
    // 0x316df0: 0x2486001f  addiu       $a2, $a0, 0x1F
    ctx->pc = 0x316df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x316df4: 0x6703c  dsll32      $t6, $a2, 0
    ctx->pc = 0x316df4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) << (32 + 0));
    // 0x316df8: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x316df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x316dfc: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x316dfcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x316e00: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x316e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x316e04: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x316e04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x316e08: 0xce3025  or          $a2, $a2, $t6
    ctx->pc = 0x316e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 14));
    // 0x316e0c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x316e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x316e10: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x316e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x316e14: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x316e14u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x316e18: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x316e18u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x316e1c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316e20: 0xfcad0000  sd          $t5, 0x0($a1)
    ctx->pc = 0x316e20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 13));
    // 0x316e24: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x316e24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x316e28: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316e2c: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x316e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x316e30: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x316e30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x316e34: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316e38: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x316e38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x316e3c: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x316e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x316e40: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316e44: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x316e44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x316e48: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x316e48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x316e4c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_316e50:
    // 0x316e50: 0x2c860200  sltiu       $a2, $a0, 0x200
    ctx->pc = 0x316e50u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x316e54: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x316E54u;
    {
        const bool branch_taken_0x316e54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x316e54) {
            ctx->pc = 0x316DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316df0;
        }
    }
    ctx->pc = 0x316E5Cu;
    // 0x316e5c: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x316e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x316e60: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x316e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x316e64: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x316e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x316e68: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x316e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x316e6c: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x316e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x316e70: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x316e70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x316e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316e78: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x316e78u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x316e7c: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x316e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316e80: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316e84: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x316e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x316e88: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x316e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x316e8c: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x316e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x316e90: 0x30870003  andi        $a3, $a0, 0x3
    ctx->pc = 0x316e90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x316e94: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x316E94u;
    {
        const bool branch_taken_0x316e94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x316E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E94u;
        // 0x316e98: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e94) {
            ctx->pc = 0x316EE0u;
            goto label_316ee0;
        }
    }
    ctx->pc = 0x316E9Cu;
    // 0x316e9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x316e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316ea0: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x316EA0u;
    {
        const bool branch_taken_0x316ea0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x316ea0) {
            ctx->pc = 0x316EB8u;
            goto label_316eb8;
        }
    }
    ctx->pc = 0x316EA8u;
    // 0x316ea8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x316EA8u;
    {
        const bool branch_taken_0x316ea8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x316ea8) {
            ctx->pc = 0x316EB8u;
            goto label_316eb8;
        }
    }
    ctx->pc = 0x316EB0u;
    // 0x316eb0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x316EB0u;
    {
        const bool branch_taken_0x316eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316eb0) {
            ctx->pc = 0x316F10u;
            goto label_316f10;
        }
    }
    ctx->pc = 0x316EB8u;
label_316eb8:
    // 0x316eb8: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x316eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316ebc: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316ec0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316EC0u;
    {
        const bool branch_taken_0x316ec0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EC0u;
        // 0x316ec4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ec0) {
            ctx->pc = 0x316ED0u;
            goto label_316ed0;
        }
    }
    ctx->pc = 0x316EC8u;
    // 0x316ec8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316ecc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316eccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316ed0:
    // 0x316ed0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316ed4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x316ED4u;
    {
        const bool branch_taken_0x316ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316ED4u;
        // 0x316ed8: 0xa7a200f0  sh          $v0, 0xF0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ed4) {
            ctx->pc = 0x316F10u;
            goto label_316f10;
        }
    }
    ctx->pc = 0x316EDCu;
    // 0x316edc: 0x0  nop
    ctx->pc = 0x316edcu;
    // NOP
label_316ee0:
    // 0x316ee0: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x316ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x316ee4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316EE4u;
    {
        const bool branch_taken_0x316ee4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EE4u;
        // 0x316ee8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ee4) {
            ctx->pc = 0x316EF4u;
            goto label_316ef4;
        }
    }
    ctx->pc = 0x316EECu;
    // 0x316eec: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316ef0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316ef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316ef4:
    // 0x316ef4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x316ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316ef8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x316ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x316efc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x316efcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x316f00: 0x0  nop
    ctx->pc = 0x316f00u;
    // NOP
    // 0x316f04: 0x0  nop
    ctx->pc = 0x316f04u;
    // NOP
    // 0x316f08: 0x1012  mflo        $v0
    ctx->pc = 0x316f08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x316f0c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x316f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_316f10:
    // 0x316f10: 0x97a200f0  lhu         $v0, 0xF0($sp)
    ctx->pc = 0x316f10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x316f14: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x316f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f18: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x316f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x316f1c: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x316f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x316f20: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x316f20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x316f24: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x316f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x316f28: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316f2c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316F2Cu;
    {
        const bool branch_taken_0x316f2c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F2Cu;
        // 0x316f30: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f2c) {
            ctx->pc = 0x316F3Cu;
            goto label_316f3c;
        }
    }
    ctx->pc = 0x316F34u;
    // 0x316f34: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316f38: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316f38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316f3c:
    // 0x316f3c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x316f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316f40: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x316f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x316f44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x316f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x316f48: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x316f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x316f4c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x316f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x316f50: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x316f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x316f54: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x316f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316f58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x316F58u;
    {
        const bool branch_taken_0x316f58 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x316F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F58u;
        // 0x316f5c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f58) {
            ctx->pc = 0x316F68u;
            goto label_316f68;
        }
    }
    ctx->pc = 0x316F60u;
    // 0x316f60: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x316f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316f64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x316f64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_316f68:
    // 0x316f68: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x316f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x316f6c: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x316f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x316f70: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x316f70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x316f74: 0x0  nop
    ctx->pc = 0x316f74u;
    // NOP
label_316f78:
    // 0x316f78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x316f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x316f7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x316f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x316f80: 0x146201d5  bne         $v1, $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x316F80u;
    {
        const bool branch_taken_0x316f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x316f80) {
            ctx->pc = 0x3176D8u;
            goto label_3176d8;
        }
    }
    ctx->pc = 0x316F88u;
    // 0x316f88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x316f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x316f8c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x316f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x316f90: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x316f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x316f94: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x316f94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316f98: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x316f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x316f9c: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x316f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x316fa0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x316fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x316fa4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x316fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316fa8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x316fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x316fac: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x316facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x316fb0: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x316fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x316fb4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x316fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x316fb8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316fbc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x316fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x316fc0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x316fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x316fc4: 0x344b1001  ori         $t3, $v0, 0x1001
    ctx->pc = 0x316fc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x316fc8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x316fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x316fcc: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x316fccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x316fd0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x316fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x316fd4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x316fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316fd8: 0xaf858b2c  sw          $a1, -0x74D4($gp)
    ctx->pc = 0x316fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 5));
    // 0x316fdc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x316fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x316fe0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x316fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316fe4: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x316fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x316fe8: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x316fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x316fec: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x316fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x316ff0: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x316ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x316ff4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x316ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x316ff8: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x316ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x316ffc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x316ffcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317000: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317004: 0x3402a422  ori         $v0, $zero, 0xA422
    ctx->pc = 0x317004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42018);
    // 0x317008: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x317008u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x31700c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x317010: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x317010u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x317014: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x317014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x317018: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31701c: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x31701cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x317020: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x317020u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x317024: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x317024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x317028: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x317028u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x31702c: 0x435025  or          $t2, $v0, $v1
    ctx->pc = 0x31702cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x317030: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317034: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x317034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x317038: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x317038u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x31703c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31703cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317040: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x317040u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x317044: 0x3c020208  lui         $v0, 0x208
    ctx->pc = 0x317044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)520 << 16));
    // 0x317048: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31704c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x31704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x317050: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x317050u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x317054: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x317054u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x317058: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x317058u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x31705c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x31705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x317060: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317064: 0x2408004c  addiu       $t0, $zero, 0x4C
    ctx->pc = 0x317064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x317068: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x317068u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x31706c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x317070: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x317070u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x317074: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x317074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x317078: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31707c: 0x24060116  addiu       $a2, $zero, 0x116
    ctx->pc = 0x31707cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x317080: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x317080u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x317084: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x317084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317088: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x317088u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x31708c: 0x240c0040  addiu       $t4, $zero, 0x40
    ctx->pc = 0x31708cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x317090: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x317090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x317094: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317098: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x317098u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31709c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x31709cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x3170a0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3170a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x3170a4: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x3170a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x3170a8: 0x348b0008  ori         $t3, $a0, 0x8
    ctx->pc = 0x3170a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3170ac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3170acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3170b0: 0x3c047900  lui         $a0, 0x7900
    ctx->pc = 0x3170b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30976 << 16));
    // 0x3170b4: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x3170b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x3170b8: 0x34897080  ori         $t1, $a0, 0x7080
    ctx->pc = 0x3170b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28800);
    // 0x3170bc: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x3170bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x3170c0: 0x3c041c08  lui         $a0, 0x1C08
    ctx->pc = 0x3170c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7176 << 16));
    // 0x3170c4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3170c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3170c8: 0x34872008  ori         $a3, $a0, 0x2008
    ctx->pc = 0x3170c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8200);
    // 0x3170cc: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x3170ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x3170d0: 0x34049500  ori         $a0, $zero, 0x9500
    ctx->pc = 0x3170d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38144);
    // 0x3170d4: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x3170d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x3170d8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3170d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3170dc: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x3170dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3170e0: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x3170e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3170e4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3170e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3170e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3170E8u;
    {
        const bool branch_taken_0x3170e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3170ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3170E8u;
        // 0x3170ec: 0x34869080  ori         $a2, $a0, 0x9080 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170e8) {
            ctx->pc = 0x317150u;
            goto label_317150;
        }
    }
    ctx->pc = 0x3170F0u;
label_3170f0:
    // 0x3170f0: 0x2464001f  addiu       $a0, $v1, 0x1F
    ctx->pc = 0x3170f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x3170f4: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x3170f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3170f8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3170f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3170fc: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x3170fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x317100: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x317100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x317104: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x317104u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x317108: 0x8e2025  or          $a0, $a0, $t6
    ctx->pc = 0x317108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
    // 0x31710c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x317110: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x317110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
    // 0x317114: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x317114u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x317118: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x317118u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x31711c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317120: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x317120u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x317124: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x317124u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x317128: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31712c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x31712cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x317130: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x317130u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x317134: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317138: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x317138u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x31713c: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x31713cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x317140: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317144: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x317144u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x317148: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x317148u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x31714c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_317150:
    // 0x317150: 0x2c640200  sltiu       $a0, $v1, 0x200
    ctx->pc = 0x317150u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x317154: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x317154u;
    {
        const bool branch_taken_0x317154 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x317154) {
            ctx->pc = 0x3170F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3170f0;
        }
    }
    ctx->pc = 0x31715Cu;
    // 0x31715c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x31715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x317160: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x317160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x317164: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x317164u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x317168: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x317168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x31716c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x31716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x317170: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x317170u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x317174: 0x34421d2c  ori         $v0, $v0, 0x1D2C
    ctx->pc = 0x317174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7468);
    // 0x317178: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31717c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317180: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x317180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x317184: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x317184u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x317188: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x317188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x31718c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x31718cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x317190: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317194: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x317194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317198: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x317198u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x31719c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31719cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3171a0: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x3171a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x3171a4: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x3171a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3171a8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3171a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3171ac: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3171acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3171b0: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x3171b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x3171b4: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x3171b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3171b8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3171b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3171bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3171bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3171c0: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x3171c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x3171c4: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x3171c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x3171c8: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x3171c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3171cc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3171ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3171d0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3171d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3171d4: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x3171d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x3171d8: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x3171d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x3171dc: 0x30870003  andi        $a3, $a0, 0x3
    ctx->pc = 0x3171dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3171e0: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3171E0u;
    {
        const bool branch_taken_0x3171e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3171E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171E0u;
        // 0x3171e4: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171e0) {
            ctx->pc = 0x317230u;
            goto label_317230;
        }
    }
    ctx->pc = 0x3171E8u;
    // 0x3171e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3171e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3171ec: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3171ECu;
    {
        const bool branch_taken_0x3171ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x3171ec) {
            ctx->pc = 0x317208u;
            goto label_317208;
        }
    }
    ctx->pc = 0x3171F4u;
    // 0x3171f4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3171F4u;
    {
        const bool branch_taken_0x3171f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3171f4) {
            ctx->pc = 0x317208u;
            goto label_317208;
        }
    }
    ctx->pc = 0x3171FCu;
    // 0x3171fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3171FCu;
    {
        const bool branch_taken_0x3171fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3171fc) {
            ctx->pc = 0x317260u;
            goto label_317260;
        }
    }
    ctx->pc = 0x317204u;
    // 0x317204: 0x0  nop
    ctx->pc = 0x317204u;
    // NOP
label_317208:
    // 0x317208: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x317208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31720c: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x31720cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x317210: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317210u;
    {
        const bool branch_taken_0x317210 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317210u;
        // 0x317214: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317210) {
            ctx->pc = 0x317220u;
            goto label_317220;
        }
    }
    ctx->pc = 0x317218u;
    // 0x317218: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31721c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31721cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317220:
    // 0x317220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317224: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x317224u;
    {
        const bool branch_taken_0x317224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317224u;
        // 0x317228: 0xa7a200e0  sh          $v0, 0xE0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317224) {
            ctx->pc = 0x317260u;
            goto label_317260;
        }
    }
    ctx->pc = 0x31722Cu;
    // 0x31722c: 0x0  nop
    ctx->pc = 0x31722cu;
    // NOP
label_317230:
    // 0x317230: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x317230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x317234: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317234u;
    {
        const bool branch_taken_0x317234 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317234u;
        // 0x317238: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317234) {
            ctx->pc = 0x317244u;
            goto label_317244;
        }
    }
    ctx->pc = 0x31723Cu;
    // 0x31723c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317240: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317244:
    // 0x317244: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317248: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x317248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31724c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x31724cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x317250: 0x0  nop
    ctx->pc = 0x317250u;
    // NOP
    // 0x317254: 0x0  nop
    ctx->pc = 0x317254u;
    // NOP
    // 0x317258: 0x1012  mflo        $v0
    ctx->pc = 0x317258u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31725c: 0xa7a200e0  sh          $v0, 0xE0($sp)
    ctx->pc = 0x31725cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
label_317260:
    // 0x317260: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x317260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x317264: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317268: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x317268u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x31726c: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x31726cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317270: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x317270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x317274: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x317274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x317278: 0x2508e3d0  addiu       $t0, $t0, -0x1C30
    ctx->pc = 0x317278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960080));
    // 0x31727c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31727cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317280: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x317280u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x317284: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x317284u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x317288: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x317288u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x31728c: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x31728cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x317290: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x317290u;
    {
        const bool branch_taken_0x317290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317290u;
        // 0x317294: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317290) {
            ctx->pc = 0x3172C8u;
            goto label_3172c8;
        }
    }
    ctx->pc = 0x317298u;
label_317298:
    // 0x317298: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x317298u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x31729c: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x31729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x3172a0: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x3172a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3172a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3172a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3172a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3172a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3172ac: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x3172acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x3172b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3172b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3172b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3172b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3172b8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3172b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3172bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3172bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3172c0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3172c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3172c4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3172c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3172c8:
    // 0x3172c8: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x3172c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x3172cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3172CCu;
    {
        const bool branch_taken_0x3172cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3172cc) {
            ctx->pc = 0x317298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317298;
        }
    }
    ctx->pc = 0x3172D4u;
    // 0x3172d4: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x3172d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3172d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3172d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3172dc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3172dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3172e0: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x3172e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x3172e4: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x3172e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x3172e8: 0x30870003  andi        $a3, $a0, 0x3
    ctx->pc = 0x3172e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3172ec: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3172ECu;
    {
        const bool branch_taken_0x3172ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3172F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172ECu;
        // 0x3172f0: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172ec) {
            ctx->pc = 0x317338u;
            goto label_317338;
        }
    }
    ctx->pc = 0x3172F4u;
    // 0x3172f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3172f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3172f8: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3172F8u;
    {
        const bool branch_taken_0x3172f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x3172f8) {
            ctx->pc = 0x317310u;
            goto label_317310;
        }
    }
    ctx->pc = 0x317300u;
    // 0x317300: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x317300u;
    {
        const bool branch_taken_0x317300 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x317300) {
            ctx->pc = 0x317310u;
            goto label_317310;
        }
    }
    ctx->pc = 0x317308u;
    // 0x317308: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x317308u;
    {
        const bool branch_taken_0x317308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317308) {
            ctx->pc = 0x317368u;
            goto label_317368;
        }
    }
    ctx->pc = 0x317310u;
label_317310:
    // 0x317310: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x317310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317314: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x317314u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x317318: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317318u;
    {
        const bool branch_taken_0x317318 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317318u;
        // 0x31731c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317318) {
            ctx->pc = 0x317328u;
            goto label_317328;
        }
    }
    ctx->pc = 0x317320u;
    // 0x317320: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317324: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317328:
    // 0x317328: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31732c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31732Cu;
    {
        const bool branch_taken_0x31732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31732Cu;
        // 0x317330: 0xa7a200d0  sh          $v0, 0xD0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31732c) {
            ctx->pc = 0x317368u;
            goto label_317368;
        }
    }
    ctx->pc = 0x317334u;
    // 0x317334: 0x0  nop
    ctx->pc = 0x317334u;
    // NOP
label_317338:
    // 0x317338: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x317338u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31733c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31733Cu;
    {
        const bool branch_taken_0x31733c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31733Cu;
        // 0x317340: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31733c) {
            ctx->pc = 0x31734Cu;
            goto label_31734c;
        }
    }
    ctx->pc = 0x317344u;
    // 0x317344: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317348: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317348u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31734c:
    // 0x31734c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317350: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x317350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x317354: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x317354u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x317358: 0x0  nop
    ctx->pc = 0x317358u;
    // NOP
    // 0x31735c: 0x0  nop
    ctx->pc = 0x31735cu;
    // NOP
    // 0x317360: 0x1012  mflo        $v0
    ctx->pc = 0x317360u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x317364: 0xa7a200d0  sh          $v0, 0xD0($sp)
    ctx->pc = 0x317364u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
label_317368:
    // 0x317368: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x317368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x31736c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31736cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x317370: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x317370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x317374: 0x8f8c8b30  lw          $t4, -0x74D0($gp)
    ctx->pc = 0x317374u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317378: 0x23638  dsll        $a2, $v0, 24
    ctx->pc = 0x317378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 24);
    // 0x31737c: 0x97a300d0  lhu         $v1, 0xD0($sp)
    ctx->pc = 0x31737cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x317380: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x317380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x317384: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x317384u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317388: 0x3c073a00  lui         $a3, 0x3A00
    ctx->pc = 0x317388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14848 << 16));
    // 0x31738c: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x31738cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x317390: 0x34f500c0  ori         $s5, $a3, 0xC0
    ctx->pc = 0x317390u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)192);
    // 0x317394: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x317394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x317398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31739c: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x31739cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3173a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3173a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3173a4: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x3173a4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x3173a8: 0xa5830000  sh          $v1, 0x0($t4)
    ctx->pc = 0x3173a8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3173ac: 0x2416004c  addiu       $s6, $zero, 0x4C
    ctx->pc = 0x3173acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3173b0: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x3173b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x3173b4: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x3173b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x3173b8: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x3173b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x3173bc: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x3173bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3173c0: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x3173c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x3173c4: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x3173c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x3173c8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3173c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3173cc: 0x678825  or          $s1, $v1, $a3
    ctx->pc = 0x3173ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3173d0: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x3173d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x3173d4: 0x3c032003  lui         $v1, 0x2003
    ctx->pc = 0x3173d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8195 << 16));
    // 0x3173d8: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x3173d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x3173dc: 0x3c0765b2  lui         $a3, 0x65B2
    ctx->pc = 0x3173dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26034 << 16));
    // 0x3173e0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3173e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3173e4: 0x3463a586  ori         $v1, $v1, 0xA586
    ctx->pc = 0x3173e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)42374);
    // 0x3173e8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x3173e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x3173ec: 0x2413004e  addiu       $s3, $zero, 0x4E
    ctx->pc = 0x3173ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3173f0: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x3173f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x3173f4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x3173f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3173f8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x3173f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3173fc: 0x34e71000  ori         $a3, $a3, 0x1000
    ctx->pc = 0x3173fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4096);
    // 0x317400: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x317400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x317404: 0xe87825  or          $t7, $a3, $t0
    ctx->pc = 0x317404u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x317408: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x317408u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x31740c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317410: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x317410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x317414: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x317414u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x317418: 0x240d0044  addiu       $t5, $zero, 0x44
    ctx->pc = 0x317418u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x31741c: 0x240c0042  addiu       $t4, $zero, 0x42
    ctx->pc = 0x31741cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x317420: 0x34eb1001  ori         $t3, $a3, 0x1001
    ctx->pc = 0x317420u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4097);
    // 0x317424: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x317424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x317428: 0x24180156  addiu       $t8, $zero, 0x156
    ctx->pc = 0x317428u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x31742c: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x31742cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x317430: 0xdc770020  ld          $s7, 0x20($v1)
    ctx->pc = 0x317430u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x317434: 0x24190040  addiu       $t9, $zero, 0x40
    ctx->pc = 0x317434u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x317438: 0x2e4b825  or          $s7, $s7, $a0
    ctx->pc = 0x317438u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
    // 0x31743c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x31743cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x317440: 0xfcb70000  sd          $s7, 0x0($a1)
    ctx->pc = 0x317440u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 23));
    // 0x317444: 0x34678080  ori         $a3, $v1, 0x8080
    ctx->pc = 0x317444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x317448: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x317448u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x31744c: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x31744cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x317450: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317454: 0x3c177900  lui         $s7, 0x7900
    ctx->pc = 0x317454u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)30976 << 16));
    // 0x317458: 0xfcb50000  sd          $s5, 0x0($a1)
    ctx->pc = 0x317458u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 21));
    // 0x31745c: 0x36f67000  ori         $s6, $s7, 0x7000
    ctx->pc = 0x31745cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)28672);
    // 0x317460: 0xfcb30008  sd          $s3, 0x8($a1)
    ctx->pc = 0x317460u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 19));
    // 0x317464: 0x3c0600df  lui         $a2, 0xDF
    ctx->pc = 0x317464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)223 << 16));
    // 0x317468: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31746c: 0x1e203c  dsll32      $a0, $fp, 0
    ctx->pc = 0x31746cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 0));
    // 0x317470: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x317470u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x317474: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x317474u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x317478: 0xfcb20008  sd          $s2, 0x8($a1)
    ctx->pc = 0x317478u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 18));
    // 0x31747c: 0x34178700  ori         $s7, $zero, 0x8700
    ctx->pc = 0x31747cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x317480: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317484: 0x179438  dsll        $s2, $s7, 16
    ctx->pc = 0x317484u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 23) << 16);
    // 0x317488: 0xfcb10000  sd          $s1, 0x0($a1)
    ctx->pc = 0x317488u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 17));
    // 0x31748c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x31748cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x317490: 0xfcb00008  sd          $s0, 0x8($a1)
    ctx->pc = 0x317490u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 16));
    // 0x317494: 0x3c130e08  lui         $s3, 0xE08
    ctx->pc = 0x317494u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3592 << 16));
    // 0x317498: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31749c: 0x2c4b025  or          $s6, $s6, $a0
    ctx->pc = 0x31749cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 4));
    // 0x3174a0: 0xfcaf0000  sd          $t7, 0x0($a1)
    ctx->pc = 0x3174a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 15));
    // 0x3174a4: 0x36529000  ori         $s2, $s2, 0x9000
    ctx->pc = 0x3174a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)36864);
    // 0x3174a8: 0xfcae0008  sd          $t6, 0x8($a1)
    ctx->pc = 0x3174a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 14));
    // 0x3174ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3174acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3174b0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3174b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3174b4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3174b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3174b8: 0xfcad0000  sd          $t5, 0x0($a1)
    ctx->pc = 0x3174b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 13));
    // 0x3174bc: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x3174bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x3174c0: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x3174c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x3174c4: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x3174c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3174c8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3174c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3174cc: 0x36732008  ori         $s3, $s3, 0x2008
    ctx->pc = 0x3174ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8200);
    // 0x3174d0: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x3174d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x3174d4: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x3174d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x3174d8: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x3174d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x3174dc: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x3174dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3174e0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3174e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3174e4: 0xfcb80000  sd          $t8, 0x0($a1)
    ctx->pc = 0x3174e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 24));
    // 0x3174e8: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x3174e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x3174ec: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3174ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3174f0: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x3174f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x3174f4: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x3174f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x3174f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3174F8u;
    {
        const bool branch_taken_0x3174f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3174FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174F8u;
        // 0x3174fc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3174f8) {
            ctx->pc = 0x317560u;
            goto label_317560;
        }
    }
    ctx->pc = 0x317500u;
label_317500:
    // 0x317500: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x317500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x317504: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x317504u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317508: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x317508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31750c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x31750cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x317510: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x317510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x317514: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x317514u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x317518: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x317518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x31751c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31751cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x317520: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x317520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x317524: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x317524u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x317528: 0xfcb90008  sd          $t9, 0x8($a1)
    ctx->pc = 0x317528u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 25));
    // 0x31752c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31752cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317530: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x317530u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x317534: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x317534u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x317538: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31753c: 0xfcb60000  sd          $s6, 0x0($a1)
    ctx->pc = 0x31753cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 22));
    // 0x317540: 0xfcb50008  sd          $s5, 0x8($a1)
    ctx->pc = 0x317540u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 21));
    // 0x317544: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317548: 0xfcb30000  sd          $s3, 0x0($a1)
    ctx->pc = 0x317548u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 19));
    // 0x31754c: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x31754cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x317550: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317554: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x317554u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x317558: 0xfcb00008  sd          $s0, 0x8($a1)
    ctx->pc = 0x317558u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 16));
    // 0x31755c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_317560:
    // 0x317560: 0x2c620200  sltiu       $v0, $v1, 0x200
    ctx->pc = 0x317560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x317564: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x317564u;
    {
        const bool branch_taken_0x317564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317564) {
            ctx->pc = 0x317500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317500;
        }
    }
    ctx->pc = 0x31756Cu;
    // 0x31756c: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x31756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x317570: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x317570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x317574: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x317574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x317578: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x317578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31757c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31757cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x317580: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x317580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x317584: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x317584u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x317588: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x317588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31758c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x31758cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x317590: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x317590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x317594: 0x8c28f014  lw          $t0, -0xFEC($at)
    ctx->pc = 0x317594u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F014u));
    // 0x317598: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x317598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x31759c: 0x344417fd  ori         $a0, $v0, 0x17FD
    ctx->pc = 0x31759cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x3175a0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3175a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3175a4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x3175a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3175a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3175a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3175ac: 0xdd080040  ld          $t0, 0x40($t0)
    ctx->pc = 0x3175acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x3175b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3175b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3175b4: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x3175b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x3175b8: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x3175b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x3175bc: 0x8c27f014  lw          $a3, -0xFEC($at)
    ctx->pc = 0x3175bcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81F014u));
    // 0x3175c0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3175c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3175c4: 0xdce70020  ld          $a3, 0x20($a3)
    ctx->pc = 0x3175c4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3175c8: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x3175c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x3175cc: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x3175ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x3175d0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3175d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3175d4: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x3175d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x3175d8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x3175d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x3175dc: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x3175dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3175e0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3175e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3175e4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3175e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3175e8: 0x32682  srl         $a0, $v1, 26
    ctx->pc = 0x3175e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x3175ec: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x3175ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x3175f0: 0x30870003  andi        $a3, $a0, 0x3
    ctx->pc = 0x3175f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3175f4: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3175F4u;
    {
        const bool branch_taken_0x3175f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3175F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175F4u;
        // 0x3175f8: 0x3064000f  andi        $a0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175f4) {
            ctx->pc = 0x317640u;
            goto label_317640;
        }
    }
    ctx->pc = 0x3175FCu;
    // 0x3175fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3175fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317600: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317600u;
    {
        const bool branch_taken_0x317600 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x317600) {
            ctx->pc = 0x317618u;
            goto label_317618;
        }
    }
    ctx->pc = 0x317608u;
    // 0x317608: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x317608u;
    {
        const bool branch_taken_0x317608 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x317608) {
            ctx->pc = 0x317618u;
            goto label_317618;
        }
    }
    ctx->pc = 0x317610u;
    // 0x317610: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x317610u;
    {
        const bool branch_taken_0x317610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317610) {
            ctx->pc = 0x317670u;
            goto label_317670;
        }
    }
    ctx->pc = 0x317618u;
label_317618:
    // 0x317618: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x317618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31761c: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x31761cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x317620: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317620u;
    {
        const bool branch_taken_0x317620 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317620u;
        // 0x317624: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317620) {
            ctx->pc = 0x317630u;
            goto label_317630;
        }
    }
    ctx->pc = 0x317628u;
    // 0x317628: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31762c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31762cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317630:
    // 0x317630: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317634: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x317634u;
    {
        const bool branch_taken_0x317634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317634u;
        // 0x317638: 0xa7a200c0  sh          $v0, 0xC0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317634) {
            ctx->pc = 0x317670u;
            goto label_317670;
        }
    }
    ctx->pc = 0x31763Cu;
    // 0x31763c: 0x0  nop
    ctx->pc = 0x31763cu;
    // NOP
label_317640:
    // 0x317640: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x317640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x317644: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317644u;
    {
        const bool branch_taken_0x317644 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317644u;
        // 0x317648: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317644) {
            ctx->pc = 0x317654u;
            goto label_317654;
        }
    }
    ctx->pc = 0x31764Cu;
    // 0x31764c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317650: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317654:
    // 0x317654: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317658: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x317658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31765c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x31765cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x317660: 0x0  nop
    ctx->pc = 0x317660u;
    // NOP
    // 0x317664: 0x0  nop
    ctx->pc = 0x317664u;
    // NOP
    // 0x317668: 0x1012  mflo        $v0
    ctx->pc = 0x317668u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x31766c: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x31766cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
label_317670:
    // 0x317670: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x317670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x317674: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x317674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317678: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x317678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31767c: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x31767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317680: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x317680u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x317684: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x317684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x317688: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x317688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31768c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31768Cu;
    {
        const bool branch_taken_0x31768c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31768Cu;
        // 0x317690: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31768c) {
            ctx->pc = 0x31769Cu;
            goto label_31769c;
        }
    }
    ctx->pc = 0x317694u;
    // 0x317694: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317698: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317698u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31769c:
    // 0x31769c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x31769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3176a0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3176a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x3176a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3176a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3176a8: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x3176a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x3176ac: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3176acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x3176b0: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3176b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3176b4: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x3176b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3176b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3176B8u;
    {
        const bool branch_taken_0x3176b8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3176BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176B8u;
        // 0x3176bc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176b8) {
            ctx->pc = 0x3176C8u;
            goto label_3176c8;
        }
    }
    ctx->pc = 0x3176C0u;
    // 0x3176c0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3176c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3176c4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3176c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3176c8:
    // 0x3176c8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3176c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3176cc: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3176ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3176d0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3176d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3176d4: 0x0  nop
    ctx->pc = 0x3176d4u;
    // NOP
label_3176d8:
    // 0x3176d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3176d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3176dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3176dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3176e0: 0x1462006b  bne         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x3176E0u;
    {
        const bool branch_taken_0x3176e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3176e0) {
            ctx->pc = 0x317890u;
            goto label_317890;
        }
    }
    ctx->pc = 0x3176E8u;
    // 0x3176e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3176e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3176ec: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x3176ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x3176f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3176f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3176f4: 0x3503c  dsll32      $t2, $v1, 0
    ctx->pc = 0x3176f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3176f8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3176f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3176fc: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x3176fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x317700: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x317700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x317704: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x317704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317708: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x317708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x31770c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x31770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x317710: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x317710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x317714: 0x344617fd  ori         $a2, $v0, 0x17FD
    ctx->pc = 0x317714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x317718: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31771c: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x31771cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x317720: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x317720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x317724: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x317724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x317728: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x317728u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x31772c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31772cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x317730: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x317730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x317734: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x317734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x317738: 0xaf858b2c  sw          $a1, -0x74D4($gp)
    ctx->pc = 0x317738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 5));
    // 0x31773c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x31773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x317740: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317744: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x317744u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x317748: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x317748u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x31774c: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x31774cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x317750: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317754: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x317754u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x317758: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x317758u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x31775c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317760: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x317760u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x317764: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x317764u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x317768: 0x8c24f014  lw          $a0, -0xFEC($at)
    ctx->pc = 0x317768u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F014u));
    // 0x31776c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31776cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317770: 0xdc840020  ld          $a0, 0x20($a0)
    ctx->pc = 0x317770u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x317774: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x317774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x317778: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x317778u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x31777c: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x31777cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x317780: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x317780u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F014u));
    // 0x317784: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317788: 0xdc630040  ld          $v1, 0x40($v1)
    ctx->pc = 0x317788u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x31778c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x31778cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x317790: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x317790u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x317794: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x317794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317798: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31779c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3177a0: 0x21e82  srl         $v1, $v0, 26
    ctx->pc = 0x3177a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 26));
    // 0x3177a4: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x3177a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x3177a8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3177a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3177ac: 0x10680012  beq         $v1, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3177ACu;
    {
        const bool branch_taken_0x3177ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x3177B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177ACu;
        // 0x3177b0: 0x3046000f  andi        $a2, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177ac) {
            ctx->pc = 0x3177F8u;
            goto label_3177f8;
        }
    }
    ctx->pc = 0x3177B4u;
    // 0x3177b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3177b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3177b8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3177B8u;
    {
        const bool branch_taken_0x3177b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3177b8) {
            ctx->pc = 0x3177D0u;
            goto label_3177d0;
        }
    }
    ctx->pc = 0x3177C0u;
    // 0x3177c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3177C0u;
    {
        const bool branch_taken_0x3177c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3177c0) {
            ctx->pc = 0x3177D0u;
            goto label_3177d0;
        }
    }
    ctx->pc = 0x3177C8u;
    // 0x3177c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3177C8u;
    {
        const bool branch_taken_0x3177c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3177c8) {
            ctx->pc = 0x317828u;
            goto label_317828;
        }
    }
    ctx->pc = 0x3177D0u;
label_3177d0:
    // 0x3177d0: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x3177d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3177d4: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x3177d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3177d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3177D8u;
    {
        const bool branch_taken_0x3177d8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3177DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177D8u;
        // 0x3177dc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177d8) {
            ctx->pc = 0x3177E8u;
            goto label_3177e8;
        }
    }
    ctx->pc = 0x3177E0u;
    // 0x3177e0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3177e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3177e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3177e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3177e8:
    // 0x3177e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3177e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3177ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3177ECu;
    {
        const bool branch_taken_0x3177ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177ECu;
        // 0x3177f0: 0xa7a200b0  sh          $v0, 0xB0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177ec) {
            ctx->pc = 0x317828u;
            goto label_317828;
        }
    }
    ctx->pc = 0x3177F4u;
    // 0x3177f4: 0x0  nop
    ctx->pc = 0x3177f4u;
    // NOP
label_3177f8:
    // 0x3177f8: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x3177f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3177fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3177FCu;
    {
        const bool branch_taken_0x3177fc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177FCu;
        // 0x317800: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177fc) {
            ctx->pc = 0x31780Cu;
            goto label_31780c;
        }
    }
    ctx->pc = 0x317804u;
    // 0x317804: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317808: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31780c:
    // 0x31780c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317810: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x317810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x317814: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x317814u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x317818: 0x0  nop
    ctx->pc = 0x317818u;
    // NOP
    // 0x31781c: 0x0  nop
    ctx->pc = 0x31781cu;
    // NOP
    // 0x317820: 0x1012  mflo        $v0
    ctx->pc = 0x317820u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x317824: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x317824u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
label_317828:
    // 0x317828: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x317828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31782c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x31782cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317830: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x317830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x317834: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x317834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x317838: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x317838u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31783c: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x31783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x317840: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x317840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x317844: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317844u;
    {
        const bool branch_taken_0x317844 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317844u;
        // 0x317848: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317844) {
            ctx->pc = 0x317854u;
            goto label_317854;
        }
    }
    ctx->pc = 0x31784Cu;
    // 0x31784c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x31784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317850: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317854:
    // 0x317854: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x317854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317858: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x317858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x31785c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31785cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x317860: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x317860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x317864: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x317864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x317868: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x317868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x31786c: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x31786cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x317870: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317870u;
    {
        const bool branch_taken_0x317870 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317870u;
        // 0x317874: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317870) {
            ctx->pc = 0x317880u;
            goto label_317880;
        }
    }
    ctx->pc = 0x317878u;
    // 0x317878: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31787c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31787cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_317880:
    // 0x317880: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x317880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317884: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x317884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x317888: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x317888u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31788c: 0x0  nop
    ctx->pc = 0x31788cu;
    // NOP
label_317890:
    // 0x317890: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x317890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x317894: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x317894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x317898: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x317898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31789c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x31789cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3178a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3178a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3178a4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3178a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3178a8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3178a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3178ac: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3178acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x3178b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3178b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3178b4: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x3178b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x3178b8: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x3178b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x3178bc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3178bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3178c0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x3178c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x3178c4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x3178c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3178c8: 0xac25fc90  sw          $a1, -0x370($at)
    ctx->pc = 0x3178c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 5));
    // 0x3178cc: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x3178ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x3178d0: 0xc061c60  jal         func_187180
    ctx->pc = 0x3178D0u;
    SET_GPR_U32(ctx, 31, 0x3178D8u);
    ctx->pc = 0x3178D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3178D0u;
    // 0x3178d4: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x3178D0u, 0x3178D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3178D8u;
label_3178d8:
    // 0x3178d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3178d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3178dc: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x3178dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x3178e0: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x3178e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x3178e4: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x3178e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3178e8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3178e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3178ec: 0x3c061100  lui         $a2, 0x1100
    ctx->pc = 0x3178ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4352 << 16));
    // 0x3178f0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3178f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3178f4: 0x34640288  ori         $a0, $v1, 0x288
    ctx->pc = 0x3178f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)648);
    // 0x3178f8: 0x344300b0  ori         $v1, $v0, 0xB0
    ctx->pc = 0x3178f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    // 0x3178fc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3178fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x317900: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x317900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x317904: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x317904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x317908: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x317908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x31790c: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x31790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x317910: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x317910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x317914: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x317914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x317918: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x317918u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31791c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x31791cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x317920: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x317920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x317924: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x317924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x317928: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x317928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x31792c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31792cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317930: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x317930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x317934: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x317934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x317938: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x317938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x31793c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x31793cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x317940: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x317940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x317944: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x317944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x317948: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x317948u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31794c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31794Cu;
    {
        const bool branch_taken_0x31794c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x317950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31794Cu;
        // 0x317950: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31794c) {
            ctx->pc = 0x31795Cu;
            goto label_31795c;
        }
    }
    ctx->pc = 0x317954u;
    // 0x317954: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x317954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x317958: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x317958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31795c:
    // 0x31795c: 0x8f898b28  lw          $t1, -0x74D8($gp)
    ctx->pc = 0x31795cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x317960: 0x244affff  addiu       $t2, $v0, -0x1
    ctx->pc = 0x317960u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317964: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x317964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x317968: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x317968u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x31796c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x31796cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x317970: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x317970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317974: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x317974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x317978: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x317978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31797c: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x31797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x317980: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x317980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x317984: 0xa52a0000  sh          $t2, 0x0($t1)
    ctx->pc = 0x317984u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x317988: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x317988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x31798c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x31798cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x317990: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x317990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x317994: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x317994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x317998: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x317998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x31799c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31799cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3179a0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x3179a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x3179a4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x3179a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3179a8: 0xac25fc90  sw          $a1, -0x370($at)
    ctx->pc = 0x3179a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 5));
    // 0x3179ac: 0xc061c60  jal         func_187180
    ctx->pc = 0x3179ACu;
    SET_GPR_U32(ctx, 31, 0x3179B4u);
    ctx->pc = 0x3179B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3179ACu;
    // 0x3179b0: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x3179ACu, 0x3179B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3179B4u;
label_3179b4:
    // 0x3179b4: 0x0  nop
    ctx->pc = 0x3179b4u;
    // NOP
label_3179b8:
    // 0x3179b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3179b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3179bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3179bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3179c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3179c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3179c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3179c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3179c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3179c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3179cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3179ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3179d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3179d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3179d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3179d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3179d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3179d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3179dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3179dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3179e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3179e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3179e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3179e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3179e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3179E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3179ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179E8u;
        // 0x3179ec: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3179E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3179F0u;
}
