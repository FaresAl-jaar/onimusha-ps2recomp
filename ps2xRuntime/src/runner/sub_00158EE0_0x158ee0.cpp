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

// Function: sub_00158EE0
// Address: 0x158ee0 - 0x15925c
void sub_00158EE0_0x158ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158EE0_0x158ee0");
#endif

    switch (ctx->pc) {
        case 0x158f30u: goto label_158f30;
        case 0x158f44u: goto label_158f44;
        case 0x159100u: goto label_159100;
        case 0x159130u: goto label_159130;
        case 0x159168u: goto label_159168;
        case 0x15917cu: goto label_15917c;
        case 0x1591bcu: goto label_1591bc;
        case 0x159200u: goto label_159200;
        case 0x15922cu: goto label_15922c;
        default: break;
    }

    ctx->pc = 0x158ee0u;

    // 0x158ee0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x158ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x158ee4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x158ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x158ee8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x158ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x158eec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x158eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x158ef0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x158ef0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ef4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x158ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x158ef8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x158ef8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158efc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x158efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x158f00: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x158f00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x158f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x158f08: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158f0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x158f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x158f10: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x158f10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158f18: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x158f18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f1c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x158f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f20: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x158f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x158f24: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x158f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158f28: 0xc05e360  jal         func_178D80
    ctx->pc = 0x158F28u;
    SET_GPR_U32(ctx, 31, 0x158F30u);
    ctx->pc = 0x158F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158F28u;
    // 0x158f2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x158F28u, 0x158F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F30u;
label_158f30:
    // 0x158f30: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x158f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x158f34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f38: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x158f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x158f3c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x158F3Cu;
    SET_GPR_U32(ctx, 31, 0x158F44u);
    ctx->pc = 0x158F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158F3Cu;
    // 0x158f40: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x158F3Cu, 0x158F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F44u;
label_158f44:
    // 0x158f44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x158f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f48: 0x122000b9  beqz        $s1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x158F48u;
    {
        const bool branch_taken_0x158f48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f48) {
            ctx->pc = 0x159230u;
            goto label_159230;
        }
    }
    ctx->pc = 0x158F50u;
    // 0x158f50: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x158f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x158f54: 0x3c094438  lui         $t1, 0x4438
    ctx->pc = 0x158f54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17464 << 16));
    // 0x158f58: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x158f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158f5c: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x158f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x158f60: 0x2682fff0  addiu       $v0, $s4, -0x10
    ctx->pc = 0x158f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x158f64: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x158f64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x158f68: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x158f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158f6c: 0x2668fff8  addiu       $t0, $s3, -0x8
    ctx->pc = 0x158f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    // 0x158f70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x158f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x158f74: 0x352a0154  ori         $t2, $t1, 0x154
    ctx->pc = 0x158f74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)340);
    // 0x158f78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x158f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x158f7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158f80: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x158f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x158f84: 0xae2a0004  sw          $t2, 0x4($s1)
    ctx->pc = 0x158f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 10));
    // 0x158f88: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x158f88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x158f8c: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x158f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x158f90: 0x35098080  ori         $t1, $t0, 0x8080
    ctx->pc = 0x158f90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x158f94: 0xae290008  sw          $t1, 0x8($s1)
    ctx->pc = 0x158f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 9));
    // 0x158f98: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x158f98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x158f9c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x158f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x158fa0: 0x35082000  ori         $t0, $t0, 0x2000
    ctx->pc = 0x158fa0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8192);
    // 0x158fa4: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x158fa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x158fa8: 0xae280004  sw          $t0, 0x4($s1)
    ctx->pc = 0x158fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 8));
    // 0x158fac: 0xa237000f  sb          $s7, 0xF($s1)
    ctx->pc = 0x158facu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 23));
    // 0x158fb0: 0x9028cea4  lbu         $t0, -0x315C($at)
    ctx->pc = 0x158fb0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x158fb4: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x158FB4u;
    {
        const bool branch_taken_0x158fb4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x158FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FB4u;
        // 0x158fb8: 0x3263ffff  andi        $v1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fb4) {
            ctx->pc = 0x158FE0u;
            goto label_158fe0;
        }
    }
    ctx->pc = 0x158FBCu;
    // 0x158fbc: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x158fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x158fc0: 0x3c082402  lui         $t0, 0x2402
    ctx->pc = 0x158fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)9218 << 16));
    // 0x158fc4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x158fc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x158fc8: 0x35080800  ori         $t0, $t0, 0x800
    ctx->pc = 0x158fc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2048);
    // 0x158fcc: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x158fccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x158fd0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x158fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x158fd4: 0x8c280e84  lw          $t0, 0xE84($at)
    ctx->pc = 0x158fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B0E84u));
    // 0x158fd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x158FD8u;
    {
        const bool branch_taken_0x158fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FD8u;
        // 0x158fdc: 0xfd090000  sd          $t1, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fd8) {
            ctx->pc = 0x159000u;
            goto label_159000;
        }
    }
    ctx->pc = 0x158FE0u;
label_158fe0:
    // 0x158fe0: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x158fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x158fe4: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x158fe4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x158fe8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x158fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x158fec: 0x3c082402  lui         $t0, 0x2402
    ctx->pc = 0x158fecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)9218 << 16));
    // 0x158ff0: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x158ff0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x158ff4: 0x8c280e84  lw          $t0, 0xE84($at)
    ctx->pc = 0x158ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B0E84u));
    // 0x158ff8: 0xfd090000  sd          $t1, 0x0($t0)
    ctx->pc = 0x158ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 9));
    // 0x158ffc: 0x0  nop
    ctx->pc = 0x158ffcu;
    // NOP
label_159000:
    // 0x159000: 0x30c9ffff  andi        $t1, $a2, 0xFFFF
    ctx->pc = 0x159000u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x159004: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x159004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x159008: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x159008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x15900c: 0x1235023  subu        $t2, $t1, $v1
    ctx->pc = 0x15900cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x159010: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x159010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x159014: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x159014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x159018: 0x8c270e84  lw          $a3, 0xE84($at)
    ctx->pc = 0x159018u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B0E84u));
    // 0x15901c: 0xc32823  subu        $a1, $a2, $v1
    ctx->pc = 0x15901cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x159020: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x159020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x159024: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x159024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x159028: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x159028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x15902c: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x15902cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x159030: 0xb21023  subu        $v0, $a1, $s2
    ctx->pc = 0x159030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x159034: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x159034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x159038: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x159038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15903c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x15903cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x159040: 0x1521823  subu        $v1, $t2, $s2
    ctx->pc = 0x159040u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x159044: 0x24a1021  addu        $v0, $s2, $t2
    ctx->pc = 0x159044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x159048: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x159048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x15904c: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x15904cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x159050: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x159050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x159054: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x159054u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x159058: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x159058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x15905c: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x15905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x159060: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x159060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x159064: 0xa6200016  sh          $zero, 0x16($s1)
    ctx->pc = 0x159064u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x159068: 0x833825  or          $a3, $a0, $v1
    ctx->pc = 0x159068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15906c: 0x1121023  subu        $v0, $t0, $s2
    ctx->pc = 0x15906cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x159070: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x159070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x159074: 0x340afffb  ori         $t2, $zero, 0xFFFB
    ctx->pc = 0x159074u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x159078: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x159078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15907c: 0x1322023  subu        $a0, $t1, $s2
    ctx->pc = 0x15907cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x159080: 0xae2a0024  sw          $t2, 0x24($s1)
    ctx->pc = 0x159080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 10));
    // 0x159084: 0x2491021  addu        $v0, $s2, $t1
    ctx->pc = 0x159084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x159088: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x159088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
    // 0x15908c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x15908cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x159090: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x159090u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x159094: 0xae2a002c  sw          $t2, 0x2C($s1)
    ctx->pc = 0x159094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 10));
    // 0x159098: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x159098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x15909c: 0xae290038  sw          $t1, 0x38($s1)
    ctx->pc = 0x15909cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 9));
    // 0x1590a0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1590a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1590a4: 0xae2a003c  sw          $t2, 0x3C($s1)
    ctx->pc = 0x1590a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 10));
    // 0x1590a8: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x1590a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
    // 0x1590ac: 0x3c060df8  lui         $a2, 0xDF8
    ctx->pc = 0x1590acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3576 << 16));
    // 0x1590b0: 0xae2a0044  sw          $t2, 0x44($s1)
    ctx->pc = 0x1590b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 10));
    // 0x1590b4: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x1590b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x1590b8: 0x34430047  ori         $v1, $v0, 0x47
    ctx->pc = 0x1590b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x1590bc: 0x24051ff0  addiu       $a1, $zero, 0x1FF0
    ctx->pc = 0x1590bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8176));
    // 0x1590c0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1590c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1590c4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1590c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1590c8: 0xae25001c  sw          $a1, 0x1C($s1)
    ctx->pc = 0x1590c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
    // 0x1590cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1590ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1590d0: 0x34c81ff0  ori         $t0, $a2, 0x1FF0
    ctx->pc = 0x1590d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8176);
    // 0x1590d4: 0xae260030  sw          $a2, 0x30($s1)
    ctx->pc = 0x1590d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 6));
    // 0x1590d8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1590d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1590dc: 0xae280034  sw          $t0, 0x34($s1)
    ctx->pc = 0x1590dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 8));
    // 0x1590e0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1590e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1590e4: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x1590e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x1590e8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1590e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1590ec: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1590ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1590f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1590f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590f4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1590f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1590f8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1590F8u;
    SET_GPR_U32(ctx, 31, 0x159100u);
    ctx->pc = 0x1590FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590F8u;
    // 0x1590fc: 0xfe020008  sd          $v0, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1590F8u, 0x159100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159100u;
label_159100:
    // 0x159100: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x159100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x159104: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x159104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x159108: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x159108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x15910c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x15910cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x159110: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x159110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x159114: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x159114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x159118: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x159118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15911c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x15911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x159120: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x159120u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x159124: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x159124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x159128: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x159128u;
    SET_GPR_U32(ctx, 31, 0x159130u);
    ctx->pc = 0x15912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159128u;
    // 0x15912c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x159128u, 0x159130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159130u;
label_159130:
    // 0x159130: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x159130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x159134: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x159134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x159138: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x159138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15913c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15913cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x159140: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x159140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x159144: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x159144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x159148: 0x3443004e  ori         $v1, $v0, 0x4E
    ctx->pc = 0x159148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)78);
    // 0x15914c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15914cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159150: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x159150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x159154: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x159154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x159158: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x159158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x15915c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x15915cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x159160: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x159160u;
    SET_GPR_U32(ctx, 31, 0x159168u);
    ctx->pc = 0x159164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159160u;
    // 0x159164: 0xfe020008  sd          $v0, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x159160u, 0x159168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159168u;
label_159168:
    // 0x159168: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x159168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15916c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15916cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159170: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x159170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x159174: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x159174u;
    SET_GPR_U32(ctx, 31, 0x15917Cu);
    ctx->pc = 0x159178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159174u;
    // 0x159178: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x159174u, 0x15917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15917Cu;
label_15917c:
    // 0x15917c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15917cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x159180: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x159180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x159184: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x159184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x159188: 0x3442004e  ori         $v0, $v0, 0x4E
    ctx->pc = 0x159188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)78);
    // 0x15918c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x15918cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x159190: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x159190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x159194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159198: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x159198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x15919c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x15919cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1591a0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1591a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1591a4: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1591a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1591a8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1591a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1591ac: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1591acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1591b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1591b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1591b4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1591B4u;
    SET_GPR_U32(ctx, 31, 0x1591BCu);
    ctx->pc = 0x1591B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1591B4u;
    // 0x1591b8: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1591B4u, 0x1591BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1591BCu;
label_1591bc:
    // 0x1591bc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1591bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1591c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1591c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1591c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1591c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1591c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1591c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1591cc: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x1591ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x1591d0: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1591d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1591d4: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x1591d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1591d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1591d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591dc: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x1591dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1591e0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1591e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1591e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1591e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1591e8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1591e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1591ec: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1591ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1591f0: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1591f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1591f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1591f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1591f8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1591F8u;
    SET_GPR_U32(ctx, 31, 0x159200u);
    ctx->pc = 0x1591FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1591F8u;
    // 0x1591fc: 0xfe020008  sd          $v0, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1591F8u, 0x159200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159200u;
label_159200:
    // 0x159200: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x159200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x159204: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x159204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x159208: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x159208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15920c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15920cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x159210: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x159210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x159214: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x159214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x159218: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x159218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x15921c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x15921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x159220: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x159220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x159224: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x159224u;
    SET_GPR_U32(ctx, 31, 0x15922Cu);
    ctx->pc = 0x159228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159224u;
    // 0x159228: 0xfe000018  sd          $zero, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x159224u, 0x15922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15922Cu;
label_15922c:
    // 0x15922c: 0x0  nop
    ctx->pc = 0x15922cu;
    // NOP
label_159230:
    // 0x159230: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x159230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159234: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x159234u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159238: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x159238u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15923c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15923cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159240: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159244: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15924c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15924cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159254: 0x3e00008  jr          $ra
    ctx->pc = 0x159254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159254u;
        // 0x159258: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15925Cu;
}
