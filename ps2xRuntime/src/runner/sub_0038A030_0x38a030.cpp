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

// Function: sub_0038A030
// Address: 0x38a030 - 0x38a238
void sub_0038A030_0x38a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A030_0x38a030");
#endif

    switch (ctx->pc) {
        case 0x38a0e0u: goto label_38a0e0;
        case 0x38a118u: goto label_38a118;
        case 0x38a138u: goto label_38a138;
        case 0x38a1e8u: goto label_38a1e8;
        case 0x38a218u: goto label_38a218;
        default: break;
    }

    ctx->pc = 0x38a030u;

    // 0x38a030: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x38a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x38a034: 0x24c20100  addiu       $v0, $a2, 0x100
    ctx->pc = 0x38a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x38a038: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38a038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38a03c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38a040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38a044: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38a044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38a04c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x38a04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a050: 0xa4822acc  sh          $v0, 0x2ACC($a0)
    ctx->pc = 0x38a050u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10956), (uint16_t)GPR_U32(ctx, 2));
    // 0x38a054: 0xa4882ad4  sh          $t0, 0x2AD4($a0)
    ctx->pc = 0x38a054u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10964), (uint16_t)GPR_U32(ctx, 8));
    // 0x38a058: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x38a058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38a05c: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x38a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x38a060: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x38a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38a064: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x38a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38a068: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x38a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38a06c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x38a06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38a070: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x38a070u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x38a074: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x38a074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x38a078: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x38a078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x38a07c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x38a07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x38a080: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x38a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x38a084: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x38a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38a088: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x38a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38a08c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x38a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38a090: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x38a090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x38a094: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x38a094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x38a098: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x38a098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x38a09c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x38a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38a0a0: 0xac620110  sw          $v0, 0x110($v1)
    ctx->pc = 0x38a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 2));
    // 0x38a0a4: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x38a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x38a0a8: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x38a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x38a0ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x38a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x38a0b0: 0xac620118  sw          $v0, 0x118($v1)
    ctx->pc = 0x38a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 2));
    // 0x38a0b4: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x38a0b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x38a0b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38a0bc: 0xa082011c  sb          $v0, 0x11C($a0)
    ctx->pc = 0x38a0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x38a0c0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x38a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x38a0c4: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x38a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x38a0c8: 0x94820030  lhu         $v0, 0x30($a0)
    ctx->pc = 0x38a0c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x38a0cc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x38a0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x38a0d0: 0xa4820030  sh          $v0, 0x30($a0)
    ctx->pc = 0x38a0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x38a0d4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38a0d8: 0xc0c8a34  jal         func_3228D0
    ctx->pc = 0x38A0D8u;
    SET_GPR_U32(ctx, 31, 0x38A0E0u);
    ctx->pc = 0x38A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A0D8u;
    // 0x38a0dc: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228D0u, 0x38A0D8u, 0x38A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A0E0u;
label_38a0e0:
    // 0x38a0e0: 0x8e450144  lw          $a1, 0x144($s2)
    ctx->pc = 0x38a0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x38a0e4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x38a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x38a0e8: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38a0ec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x38a0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38a0f0: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x38a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x38a0f4: 0xaca20130  sw          $v0, 0x130($a1)
    ctx->pc = 0x38a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 2));
    // 0x38a0f8: 0x8e450144  lw          $a1, 0x144($s2)
    ctx->pc = 0x38a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x38a0fc: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x38a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x38a100: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x38a100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x38a104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a108: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x38a108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x38a10c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x38a10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38a110: 0xc0c83cc  jal         func_320F30
    ctx->pc = 0x38A110u;
    SET_GPR_U32(ctx, 31, 0x38A118u);
    ctx->pc = 0x38A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A110u;
    // 0x38a114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F30u, 0x38A110u, 0x38A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A118u;
label_38a118:
    // 0x38a118: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x38a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38a11c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38a120: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x38a120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x38a124: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38a128: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x38a128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38a12c: 0x24a5a240  addiu       $a1, $a1, -0x5DC0
    ctx->pc = 0x38a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943296));
    // 0x38a130: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x38A130u;
    SET_GPR_U32(ctx, 31, 0x38A138u);
    ctx->pc = 0x38A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A130u;
    // 0x38a134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x38A130u, 0x38A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A138u;
label_38a138:
    // 0x38a138: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38a13c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x38a13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x38a140: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x38a140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x38a144: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38a144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38a148: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x38a148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38a14c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x38a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x38a150: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x38a150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38a154: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x38a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38a158: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x38a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x38a15c: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x38a15cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x38a160: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x38a160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x38a164: 0xae0700d0  sw          $a3, 0xD0($s0)
    ctx->pc = 0x38a164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 7));
    // 0x38a168: 0x8fa70054  lw          $a3, 0x54($sp)
    ctx->pc = 0x38a168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x38a16c: 0xae0700d4  sw          $a3, 0xD4($s0)
    ctx->pc = 0x38a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 7));
    // 0x38a170: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x38a170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x38a174: 0xae0700d8  sw          $a3, 0xD8($s0)
    ctx->pc = 0x38a174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 7));
    // 0x38a178: 0x8fa7005c  lw          $a3, 0x5C($sp)
    ctx->pc = 0x38a178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x38a17c: 0xae0700dc  sw          $a3, 0xDC($s0)
    ctx->pc = 0x38a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 7));
    // 0x38a180: 0xa2060001  sb          $a2, 0x1($s0)
    ctx->pc = 0x38a180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x38a184: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x38a184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x38a188: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x38a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38a18c: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x38a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38a190: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x38a190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38a194: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x38a194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38a198: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x38a198u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x38a19c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x38a19cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x38a1a0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x38a1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x38a1a4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x38a1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x38a1a8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x38a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38a1ac: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x38a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38a1b0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x38a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38a1b4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x38a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38a1b8: 0xe6030050  swc1        $f3, 0x50($s0)
    ctx->pc = 0x38a1b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x38a1bc: 0xe6020054  swc1        $f2, 0x54($s0)
    ctx->pc = 0x38a1bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x38a1c0: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x38a1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x38a1c4: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x38a1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x38a1c8: 0x8e430144  lw          $v1, 0x144($s2)
    ctx->pc = 0x38a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x38a1cc: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x38a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x38a1d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x38a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x38a1d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38a1d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x38a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x38a1dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a1e0: 0xc0cfd08  jal         func_33F420
    ctx->pc = 0x38A1E0u;
    SET_GPR_U32(ctx, 31, 0x38A1E8u);
    ctx->pc = 0x38A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A1E0u;
    // 0x38a1e4: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F420u, 0x38A1E0u, 0x38A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A1E8u;
label_38a1e8:
    // 0x38a1e8: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x38a1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38a1ec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x38a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38a1f0: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x38a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38a1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a1f8: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x38a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38a1fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a200: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x38a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38a204: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x38a204u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x38a208: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x38a208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x38a20c: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x38a20cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x38a210: 0xc0d1744  jal         func_345D10
    ctx->pc = 0x38A210u;
    SET_GPR_U32(ctx, 31, 0x38A218u);
    ctx->pc = 0x38A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A210u;
    // 0x38a214: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D10u, 0x38A210u, 0x38A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A218u;
label_38a218:
    // 0x38a218: 0x8e430144  lw          $v1, 0x144($s2)
    ctx->pc = 0x38a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x38a21c: 0xac62012c  sw          $v0, 0x12C($v1)
    ctx->pc = 0x38a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 2));
    // 0x38a220: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38a220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38a224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38a228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a22c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a230: 0x3e00008  jr          $ra
    ctx->pc = 0x38A230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A230u;
        // 0x38a234: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A238u;
}
