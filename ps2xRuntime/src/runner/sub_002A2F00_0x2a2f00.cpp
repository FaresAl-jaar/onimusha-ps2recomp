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

// Function: sub_002A2F00
// Address: 0x2a2f00 - 0x2a32c0
void sub_002A2F00_0x2a2f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2F00_0x2a2f00");
#endif

    switch (ctx->pc) {
        case 0x2a2f4cu: goto label_2a2f4c;
        case 0x2a2f64u: goto label_2a2f64;
        case 0x2a3114u: goto label_2a3114;
        case 0x2a3140u: goto label_2a3140;
        case 0x2a3150u: goto label_2a3150;
        case 0x2a315cu: goto label_2a315c;
        default: break;
    }

    ctx->pc = 0x2a2f00u;

    // 0x2a2f00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a2f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2a2f04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a2f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a2f08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2a2f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2a2f0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a2f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a2f10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a2f10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f14: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a2f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a2f18: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2a2f18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a2f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a2f20: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2a2f20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a2f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a2f28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a2f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a2f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a2f30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2f34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a2f34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a2f38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a2f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f3c: 0x8c91013c  lw          $s1, 0x13C($a0)
    ctx->pc = 0x2a2f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x2a2f40: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a2f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a2f44: 0xc0a8274  jal         func_2A09D0
    ctx->pc = 0x2A2F44u;
    SET_GPR_U32(ctx, 31, 0x2A2F4Cu);
    ctx->pc = 0x2A2F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F44u;
    // 0x2a2f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A09D0u, 0x2A2F44u, 0x2A2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F4Cu;
label_2a2f4c:
    // 0x2a2f4c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A2F4Cu;
    {
        const bool branch_taken_0x2a2f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F4Cu;
        // 0x2a2f50: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f4c) {
            ctx->pc = 0x2A2FD0u;
            goto label_2a2fd0;
        }
    }
    ctx->pc = 0x2A2F54u;
    // 0x2a2f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f58: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2a2f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2a2f5c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x2A2F5Cu;
    SET_GPR_U32(ctx, 31, 0x2A2F64u);
    ctx->pc = 0x2A2F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F5Cu;
    // 0x2a2f60: 0x3406ff84  ori         $a2, $zero, 0xFF84 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65412);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x2A2F5Cu, 0x2A2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F64u;
label_2a2f64:
    // 0x2a2f64: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2a2f64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2f68: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2a2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2a2f6c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a2f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2f70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a2f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a2f74: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2a2f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2a2f78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a2f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a2f7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a2f80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a2f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a2f84: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x2a2f84u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2a2f88: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2a2f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2a2f8c: 0xffa300b8  sd          $v1, 0xB8($sp)
    ctx->pc = 0x2a2f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 3));
    // 0x2a2f90: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x2a2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2a2f94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2f98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2F98u;
    {
        const bool branch_taken_0x2a2f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F98u;
        // 0x2a2f9c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f98) {
            ctx->pc = 0x2A2FB8u;
            goto label_2a2fb8;
        }
    }
    ctx->pc = 0x2A2FA0u;
    // 0x2a2fa0: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2a2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a2fa4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a2fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a2fa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a2fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a2fac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2FACu;
    {
        const bool branch_taken_0x2a2fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FACu;
        // 0x2a2fb0: 0xffa200c0  sd          $v0, 0xC0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fac) {
            ctx->pc = 0x2A2FC0u;
            goto label_2a2fc0;
        }
    }
    ctx->pc = 0x2A2FB4u;
    // 0x2a2fb4: 0x0  nop
    ctx->pc = 0x2a2fb4u;
    // NOP
label_2a2fb8:
    // 0x2a2fb8: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2a2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2a2fbc: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x2a2fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_2a2fc0:
    // 0x2a2fc0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2a2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a2fc4: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2a2fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x2a2fc8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a2fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2fcc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2a2fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2a2fd0:
    // 0x2a2fd0: 0x8ea70140  lw          $a3, 0x140($s5)
    ctx->pc = 0x2a2fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x2a2fd4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2a2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x2a2fd8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2a2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2a2fdc: 0x344b0003  ori         $t3, $v0, 0x3
    ctx->pc = 0x2a2fdcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a2fe0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2a2fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2a2fe4: 0x34660003  ori         $a2, $v1, 0x3
    ctx->pc = 0x2a2fe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2a2fe8: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x2a2fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x2a2fec: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2a2fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a2ff0: 0x34850003  ori         $a1, $a0, 0x3
    ctx->pc = 0x2a2ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2a2ff4: 0x435025  or          $t2, $v0, $v1
    ctx->pc = 0x2a2ff4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a2ff8: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x2a2ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a2ffc: 0x7113c  dsll32      $v0, $a3, 4
    ctx->pc = 0x2a2ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 4));
    // 0x2a3000: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2a3000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a3004: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2a3004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2a3008: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x2a3008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a300c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3010: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x2a3010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x2a3014: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a3014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a3018: 0xfe460000  sd          $a2, 0x0($s2)
    ctx->pc = 0x2a3018u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 6));
    // 0x2a301c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2a301cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a3020: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2a3020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2a3024: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x2a3024u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a3028: 0xae4b000c  sw          $t3, 0xC($s2)
    ctx->pc = 0x2a3028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 11));
    // 0x2a302c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2a302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2a3030: 0xfe450010  sd          $a1, 0x10($s2)
    ctx->pc = 0x2a3030u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 5));
    // 0x2a3034: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x2a3034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x2a3038: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x2a3038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x2a303c: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x2a303cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
    // 0x2a3040: 0xae4b001c  sw          $t3, 0x1C($s2)
    ctx->pc = 0x2a3040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 11));
    // 0x2a3044: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2a3044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a3048: 0xfe4a0020  sd          $t2, 0x20($s2)
    ctx->pc = 0x2a3048u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 10));
    // 0x2a304c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3050: 0xfe490028  sd          $t1, 0x28($s2)
    ctx->pc = 0x2a3050u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 9));
    // 0x2a3054: 0x344203e8  ori         $v0, $v0, 0x3E8
    ctx->pc = 0x2a3054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1000);
    // 0x2a3058: 0xfe480030  sd          $t0, 0x30($s2)
    ctx->pc = 0x2a3058u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 8));
    // 0x2a305c: 0xfe470038  sd          $a3, 0x38($s2)
    ctx->pc = 0x2a305cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 7));
    // 0x2a3060: 0x26480060  addiu       $t0, $s2, 0x60
    ctx->pc = 0x2a3060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x2a3064: 0xfe460040  sd          $a2, 0x40($s2)
    ctx->pc = 0x2a3064u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 6));
    // 0x2a3068: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x2a3068u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x2a306c: 0xfe450048  sd          $a1, 0x48($s2)
    ctx->pc = 0x2a306cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 5));
    // 0x2a3070: 0x24e76aa0  addiu       $a3, $a3, 0x6AA0
    ctx->pc = 0x2a3070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27296));
    // 0x2a3074: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x2a3074u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x2a3078: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x2a3078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x2a307c: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x2a307cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x2a3080: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2a3080u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x696AA0u));
    // 0x2a3084: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2a3084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2a3088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a308c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a308cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3090: 0x0  nop
    ctx->pc = 0x2a3090u;
    // NOP
    // 0x2a3094: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2a3094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3098: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x2a3098u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x2a309c: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2a309cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x696AB0u));
    // 0x2a30a0: 0x7d030010  sq          $v1, 0x10($t0)
    ctx->pc = 0x2a30a0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 3));
    // 0x2a30a4: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x2a30a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x696AC0u));
    // 0x2a30a8: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x2a30a8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
    // 0x2a30ac: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x2a30acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x696AD0u));
    // 0x2a30b0: 0x7d030030  sq          $v1, 0x30($t0)
    ctx->pc = 0x2a30b0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 3));
    // 0x2a30b4: 0xe64100a0  swc1        $f1, 0xA0($s2)
    ctx->pc = 0x2a30b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x2a30b8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x2a30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x2a30bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2A30BCu;
    {
        const bool branch_taken_0x2a30bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30BCu;
        // 0x2a30c0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30bc) {
            ctx->pc = 0x2A30D4u;
            goto label_2a30d4;
        }
    }
    ctx->pc = 0x2A30C4u;
    // 0x2a30c4: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a30c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2a30c8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2a30c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a30cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A30CCu;
    {
        const bool branch_taken_0x2a30cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30CCu;
        // 0x2a30d0: 0xae4300ac  sw          $v1, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30cc) {
            ctx->pc = 0x2A30F0u;
            goto label_2a30f0;
        }
    }
    ctx->pc = 0x2A30D4u;
label_2a30d4:
    // 0x2a30d4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2a30d4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2a30d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a30dc: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a30dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2a30e0: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2a30e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2a30e4: 0x0  nop
    ctx->pc = 0x2a30e4u;
    // NOP
    // 0x2a30e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a30e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a30ec: 0xae4300ac  sw          $v1, 0xAC($s2)
    ctx->pc = 0x2a30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_2a30f0:
    // 0x2a30f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a30f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a30f4: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x2a30f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a30f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a30f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30fc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a30fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a3100: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x2a3100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3104: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a3104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a3108: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x2a3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a310c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2A310Cu;
    SET_GPR_U32(ctx, 31, 0x2A3114u);
    ctx->pc = 0x2A3110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A310Cu;
    // 0x2a3110: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2A310Cu, 0x2A3114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3114u;
label_2a3114:
    // 0x2a3114: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a3114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a3118: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2a3118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2a311c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2a311cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2a3120: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a3120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3124: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x2a3124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x2a3128: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a3128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a312c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2a312cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x2a3130: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2a3130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2a3134: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2a3134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x2a3138: 0xc041442  jal         func_105108
    ctx->pc = 0x2A3138u;
    SET_GPR_U32(ctx, 31, 0x2A3140u);
    ctx->pc = 0x2A313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3138u;
    // 0x2a313c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2A3138u, 0x2A3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3140u;
label_2a3140:
    // 0x2a3140: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a3140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a3144: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a3144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3148: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2A3148u;
    SET_GPR_U32(ctx, 31, 0x2A3150u);
    ctx->pc = 0x2A314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3148u;
    // 0x2a314c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2A3148u, 0x2A3150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3150u;
label_2a3150:
    // 0x2a3150: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x2a3150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2a3154: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2A3154u;
    SET_GPR_U32(ctx, 31, 0x2A315Cu);
    ctx->pc = 0x2A3158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3154u;
    // 0x2a3158: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2A3154u, 0x2A315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A315Cu;
label_2a315c:
    // 0x2a315c: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x2a315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x2a3160: 0x8ea80078  lw          $t0, 0x78($s5)
    ctx->pc = 0x2a3160u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x2a3164: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x2a3164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x2a3168: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2a3168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2a316c: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x2a316cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x2a3170: 0x34a60404  ori         $a2, $a1, 0x404
    ctx->pc = 0x2a3170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x2a3174: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2a3174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2a3178: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a3178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a317c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2a317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2a3180: 0x3c046c08  lui         $a0, 0x6C08
    ctx->pc = 0x2a3180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27656 << 16));
    // 0x2a3184: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x2a3184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x2a3188: 0x349003f8  ori         $s0, $a0, 0x3F8
    ctx->pc = 0x2a3188u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1016);
    // 0x2a318c: 0x34e40008  ori         $a0, $a3, 0x8
    ctx->pc = 0x2a318cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x2a3190: 0x95080002  lhu         $t0, 0x2($t0)
    ctx->pc = 0x2a3190u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2a3194: 0xa47825  or          $t7, $a1, $a0
    ctx->pc = 0x2a3194u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a3198: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2a3198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2a319c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2a319cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2a31a0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2a31a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2a31a4: 0x348e0005  ori         $t6, $a0, 0x5
    ctx->pc = 0x2a31a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x2a31a8: 0x348b0003  ori         $t3, $a0, 0x3
    ctx->pc = 0x2a31a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2a31ac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2a31acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2a31b0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2a31b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2a31b4: 0x348c0003  ori         $t4, $a0, 0x3
    ctx->pc = 0x2a31b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2a31b8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a31b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a31bc: 0x34048002  ori         $a0, $zero, 0x8002
    ctx->pc = 0x2a31bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x2a31c0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2a31c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a31c4: 0x855025  or          $t2, $a0, $a1
    ctx->pc = 0x2a31c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2a31c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a31c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a31cc: 0x25040009  addiu       $a0, $t0, 0x9
    ctx->pc = 0x2a31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 9));
    // 0x2a31d0: 0x3c0d2000  lui         $t5, 0x2000
    ctx->pc = 0x2a31d0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8192 << 16));
    // 0x2a31d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a31d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a31d8: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x2a31d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a31dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2a31dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a31e0: 0x872825  or          $a1, $a0, $a3
    ctx->pc = 0x2a31e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2a31e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2a31e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2a31e8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2a31e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a31ec: 0xfe4200b0  sd          $v0, 0xB0($s2)
    ctx->pc = 0x2a31ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 176), GPR_U64(ctx, 2));
    // 0x2a31f0: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x2a31f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a31f4: 0xae4600b8  sw          $a2, 0xB8($s2)
    ctx->pc = 0x2a31f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 6));
    // 0x2a31f8: 0x264200f0  addiu       $v0, $s2, 0xF0
    ctx->pc = 0x2a31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x2a31fc: 0xae5000bc  sw          $s0, 0xBC($s2)
    ctx->pc = 0x2a31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 16));
    // 0x2a3200: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2a3200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2a3204: 0xfe4f00c0  sd          $t7, 0xC0($s2)
    ctx->pc = 0x2a3204u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 192), GPR_U64(ctx, 15));
    // 0x2a3208: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2a3208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2a320c: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x2a320cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x2a3210: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3214: 0xae4e00cc  sw          $t6, 0xCC($s2)
    ctx->pc = 0x2a3214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 14));
    // 0x2a3218: 0x4d2025  or          $a0, $v0, $t5
    ctx->pc = 0x2a3218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x2a321c: 0x8c6e0070  lw          $t6, 0x70($v1)
    ctx->pc = 0x2a321cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2a3220: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x2a3220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a3224: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2a3224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3228: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x2a3228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x2a322c: 0x26420140  addiu       $v0, $s2, 0x140
    ctx->pc = 0x2a322cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x2a3230: 0xddce0000  ld          $t6, 0x0($t6)
    ctx->pc = 0x2a3230u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2a3234: 0xfe4e00d0  sd          $t6, 0xD0($s2)
    ctx->pc = 0x2a3234u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 208), GPR_U64(ctx, 14));
    // 0x2a3238: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x2a3238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x2a323c: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x2a323cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x2a3240: 0x8c6e0078  lw          $t6, 0x78($v1)
    ctx->pc = 0x2a3240u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2a3244: 0xe713c  dsll32      $t6, $t6, 4
    ctx->pc = 0x2a3244u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 4));
    // 0x2a3248: 0xe713e  dsrl32      $t6, $t6, 4
    ctx->pc = 0x2a3248u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 4));
    // 0x2a324c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x2a324cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x2a3250: 0x1cd6825  or          $t5, $t6, $t5
    ctx->pc = 0x2a3250u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x2a3254: 0xfe4d00e0  sd          $t5, 0xE0($s2)
    ctx->pc = 0x2a3254u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 13));
    // 0x2a3258: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x2a3258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x2a325c: 0xae4000ec  sw          $zero, 0xEC($s2)
    ctx->pc = 0x2a325cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
    // 0x2a3260: 0xfe4c00f0  sd          $t4, 0xF0($s2)
    ctx->pc = 0x2a3260u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 240), GPR_U64(ctx, 12));
    // 0x2a3264: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x2a3264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x2a3268: 0xae4b00fc  sw          $t3, 0xFC($s2)
    ctx->pc = 0x2a3268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 11));
    // 0x2a326c: 0xfe4a0100  sd          $t2, 0x100($s2)
    ctx->pc = 0x2a326cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 10));
    // 0x2a3270: 0xfe490108  sd          $t1, 0x108($s2)
    ctx->pc = 0x2a3270u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 264), GPR_U64(ctx, 9));
    // 0x2a3274: 0xfe480110  sd          $t0, 0x110($s2)
    ctx->pc = 0x2a3274u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 272), GPR_U64(ctx, 8));
    // 0x2a3278: 0xfe470118  sd          $a3, 0x118($s2)
    ctx->pc = 0x2a3278u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 280), GPR_U64(ctx, 7));
    // 0x2a327c: 0xfe400120  sd          $zero, 0x120($s2)
    ctx->pc = 0x2a327cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 288), GPR_U64(ctx, 0));
    // 0x2a3280: 0xfe460128  sd          $a2, 0x128($s2)
    ctx->pc = 0x2a3280u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 296), GPR_U64(ctx, 6));
    // 0x2a3284: 0xfe450130  sd          $a1, 0x130($s2)
    ctx->pc = 0x2a3284u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 304), GPR_U64(ctx, 5));
    // 0x2a3288: 0xae400138  sw          $zero, 0x138($s2)
    ctx->pc = 0x2a3288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 0));
    // 0x2a328c: 0xae40013c  sw          $zero, 0x13C($s2)
    ctx->pc = 0x2a328cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 0));
    // 0x2a3290: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a3290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a3294: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x2a3294u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x2a3298: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a3298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a329c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a32a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2a32a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a32a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a32a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a32a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a32a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a32ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a32acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a32b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a32b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a32b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a32b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a32b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A32B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A32BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32B8u;
        // 0x2a32bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A32B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A32C0u;
}
