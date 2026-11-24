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

// Function: sub_001C7970
// Address: 0x1c7970 - 0x1c7fdc
void sub_001C7970_0x1c7970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7970_0x1c7970");
#endif

    switch (ctx->pc) {
        case 0x1c79d4u: goto label_1c79d4;
        case 0x1c79dcu: goto label_1c79dc;
        case 0x1c79e8u: goto label_1c79e8;
        case 0x1c79f8u: goto label_1c79f8;
        case 0x1c7a04u: goto label_1c7a04;
        case 0x1c7a10u: goto label_1c7a10;
        case 0x1c7a1cu: goto label_1c7a1c;
        case 0x1c7ad0u: goto label_1c7ad0;
        case 0x1c7ae4u: goto label_1c7ae4;
        case 0x1c7afcu: goto label_1c7afc;
        case 0x1c7b10u: goto label_1c7b10;
        case 0x1c7b18u: goto label_1c7b18;
        case 0x1c7c14u: goto label_1c7c14;
        case 0x1c7c30u: goto label_1c7c30;
        case 0x1c7cb8u: goto label_1c7cb8;
        case 0x1c7d9cu: goto label_1c7d9c;
        case 0x1c7de0u: goto label_1c7de0;
        case 0x1c7decu: goto label_1c7dec;
        case 0x1c7dfcu: goto label_1c7dfc;
        case 0x1c7e08u: goto label_1c7e08;
        case 0x1c7eb0u: goto label_1c7eb0;
        case 0x1c7ef0u: goto label_1c7ef0;
        case 0x1c7efcu: goto label_1c7efc;
        case 0x1c7f0cu: goto label_1c7f0c;
        case 0x1c7f18u: goto label_1c7f18;
        case 0x1c7f40u: goto label_1c7f40;
        case 0x1c7f48u: goto label_1c7f48;
        case 0x1c7f58u: goto label_1c7f58;
        case 0x1c7f64u: goto label_1c7f64;
        case 0x1c7f70u: goto label_1c7f70;
        case 0x1c7f80u: goto label_1c7f80;
        case 0x1c7f88u: goto label_1c7f88;
        default: break;
    }

    ctx->pc = 0x1c7970u;

    // 0x1c7970: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c7970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1c7974: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1c7974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1c7978: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c7978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c797c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1c797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c7980: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1c7980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1c7984: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c7984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c7988: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c7988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c798c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c7990: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c7990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c7994: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c7994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c7998: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c7998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c799c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c79a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c79a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c79a4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1c79a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c79a8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c79a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c79ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c79acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c79b0: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x1c79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1c79b4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c79b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c79b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c79bc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c79c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c79c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c79c4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1c79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1c79c8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1c79c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c79cc: 0xc041290  jal         func_104A40
    ctx->pc = 0x1C79CCu;
    SET_GPR_U32(ctx, 31, 0x1C79D4u);
    ctx->pc = 0x1C79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79CCu;
    // 0x1c79d0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x1C79CCu, 0x1C79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79D4u;
label_1c79d4:
    // 0x1c79d4: 0xc041294  jal         func_104A50
    ctx->pc = 0x1C79D4u;
    SET_GPR_U32(ctx, 31, 0x1C79DCu);
    ctx->pc = 0x1C79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79D4u;
    // 0x1c79d8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x1C79D4u, 0x1C79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79DCu;
label_1c79dc:
    // 0x1c79dc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c79e0: 0xc041322  jal         func_104C88
    ctx->pc = 0x1C79E0u;
    SET_GPR_U32(ctx, 31, 0x1C79E8u);
    ctx->pc = 0x1C79E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79E0u;
    // 0x1c79e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x1C79E0u, 0x1C79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79E8u;
label_1c79e8:
    // 0x1c79e8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c79ec: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1c79ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c79f0: 0xc041418  jal         func_105060
    ctx->pc = 0x1C79F0u;
    SET_GPR_U32(ctx, 31, 0x1C79F8u);
    ctx->pc = 0x1C79F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79F0u;
    // 0x1c79f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1C79F0u, 0x1C79F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79F8u;
label_1c79f8:
    // 0x1c79f8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c79f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c79fc: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x1C79FCu;
    SET_GPR_U32(ctx, 31, 0x1C7A04u);
    ctx->pc = 0x1C7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79FCu;
    // 0x1c7a00: 0x3c051300  lui         $a1, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x1C79FCu, 0x1C7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A04u;
label_1c7a04:
    // 0x1c7a04: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c7a08: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x1C7A08u;
    SET_GPR_U32(ctx, 31, 0x1C7A10u);
    ctx->pc = 0x1C7A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A08u;
    // 0x1c7a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x1C7A08u, 0x1C7A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A10u;
label_1c7a10:
    // 0x1c7a10: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c7a14: 0xc041386  jal         func_104E18
    ctx->pc = 0x1C7A14u;
    SET_GPR_U32(ctx, 31, 0x1C7A1Cu);
    ctx->pc = 0x1C7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A14u;
    // 0x1c7a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x1C7A14u, 0x1C7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A1Cu;
label_1c7a1c:
    // 0x1c7a1c: 0x97a500f0  lhu         $a1, 0xF0($sp)
    ctx->pc = 0x1c7a1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7a20: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1c7a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1c7a24: 0x25180  sll         $t2, $v0, 6
    ctx->pc = 0x1c7a24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1c7a28: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1c7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1c7a2c: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1c7a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1c7a30: 0x30047fff  andi        $a0, $zero, 0x7FFF
    ctx->pc = 0x1c7a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x1c7a34: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x1c7a34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c7a38: 0x27b300f1  addiu       $s3, $sp, 0xF1
    ctx->pc = 0x1c7a38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 241));
    // 0x1c7a3c: 0x240bff7f  addiu       $t3, $zero, -0x81
    ctx->pc = 0x1c7a3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1c7a40: 0x640c0080  daddiu      $t4, $zero, 0x80
    ctx->pc = 0x1c7a40u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1c7a44: 0x27b200f5  addiu       $s2, $sp, 0xF5
    ctx->pc = 0x1c7a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 245));
    // 0x1c7a48: 0x2409ffbf  addiu       $t1, $zero, -0x41
    ctx->pc = 0x1c7a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1c7a4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1c7a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1c7a50: 0x27b100f7  addiu       $s1, $sp, 0xF7
    ctx->pc = 0x1c7a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 247));
    // 0x1c7a54: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1c7a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c7a58: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x1c7a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1c7a5c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1c7a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c7a60: 0x2405ff0f  addiu       $a1, $zero, -0xF1
    ctx->pc = 0x1c7a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1c7a64: 0x926d0000  lbu         $t5, 0x0($s3)
    ctx->pc = 0x1c7a64u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c7a68: 0x64060010  daddiu      $a2, $zero, 0x10
    ctx->pc = 0x1c7a68u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1c7a6c: 0x27b000f8  addiu       $s0, $sp, 0xF8
    ctx->pc = 0x1c7a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1c7a70: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c7a74: 0x6403000e  daddiu      $v1, $zero, 0xE
    ctx->pc = 0x1c7a74u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1c7a78: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x1c7a78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x1c7a7c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c7a7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1c7a80: 0xa26b0000  sb          $t3, 0x0($s3)
    ctx->pc = 0x1c7a80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x1c7a84: 0x924b0000  lbu         $t3, 0x0($s2)
    ctx->pc = 0x1c7a84u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c7a88: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1c7a88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1c7a8c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1c7a8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1c7a90: 0xa2490000  sb          $t1, 0x0($s2)
    ctx->pc = 0x1c7a90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x1c7a94: 0x92290000  lbu         $t1, 0x0($s1)
    ctx->pc = 0x1c7a94u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7a98: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1c7a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1c7a9c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1c7a9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1c7aa0: 0xa2270000  sb          $a3, 0x0($s1)
    ctx->pc = 0x1c7aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c7aa4: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x1c7aa4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7aa8: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1c7aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1c7aac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1c7aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1c7ab0: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x1c7ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c7ab4: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1c7ab4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7ab8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c7ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c7abc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c7abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c7ac0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c7ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7ac4: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x1c7ac4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7ac8: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x1C7AC8u;
    SET_GPR_U32(ctx, 31, 0x1C7AD0u);
    ctx->pc = 0x1C7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AC8u;
    // 0x1c7acc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x1C7AC8u, 0x1C7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AD0u;
label_1c7ad0:
    // 0x1c7ad0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1c7ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1c7ad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7ad8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1c7ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1c7adc: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x1C7ADCu;
    SET_GPR_U32(ctx, 31, 0x1C7AE4u);
    ctx->pc = 0x1C7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7ADCu;
    // 0x1c7ae0: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x1C7ADCu, 0x1C7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AE4u;
label_1c7ae4:
    // 0x1c7ae4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7AE4u;
    {
        const bool branch_taken_0x1c7ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ae4) {
            ctx->pc = 0x1C7B00u;
            goto label_1c7b00;
        }
    }
    ctx->pc = 0x1C7AECu;
    // 0x1c7aec: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1c7aecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7af0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c7af4: 0xc041418  jal         func_105060
    ctx->pc = 0x1C7AF4u;
    SET_GPR_U32(ctx, 31, 0x1C7AFCu);
    ctx->pc = 0x1C7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AF4u;
    // 0x1c7af8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1C7AF4u, 0x1C7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AFCu;
label_1c7afc:
    // 0x1c7afc: 0x0  nop
    ctx->pc = 0x1c7afcu;
    // NOP
label_1c7b00:
    // 0x1c7b00: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c7b04: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c7b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c7b08: 0xc041418  jal         func_105060
    ctx->pc = 0x1C7B08u;
    SET_GPR_U32(ctx, 31, 0x1C7B10u);
    ctx->pc = 0x1C7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B08u;
    // 0x1c7b0c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1C7B08u, 0x1C7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B10u;
label_1c7b10:
    // 0x1c7b10: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x1C7B10u;
    SET_GPR_U32(ctx, 31, 0x1C7B18u);
    ctx->pc = 0x1C7B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B10u;
    // 0x1c7b14: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x1C7B10u, 0x1C7B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B18u;
label_1c7b18:
    // 0x1c7b18: 0x97ab00f0  lhu         $t3, 0xF0($sp)
    ctx->pc = 0x1c7b18u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7b1c: 0x24098000  addiu       $t1, $zero, -0x8000
    ctx->pc = 0x1c7b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1c7b20: 0x3c04fc00  lui         $a0, 0xFC00
    ctx->pc = 0x1c7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64512 << 16));
    // 0x1c7b24: 0x64020014  daddiu      $v0, $zero, 0x14
    ctx->pc = 0x1c7b24u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
    // 0x1c7b28: 0x34887fff  ori         $t0, $a0, 0x7FFF
    ctx->pc = 0x1c7b28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x1c7b2c: 0x300a7fff  andi        $t2, $zero, 0x7FFF
    ctx->pc = 0x1c7b2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x1c7b30: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1c7b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c7b34: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1c7b38: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1c7b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1c7b3c: 0x64070080  daddiu      $a3, $zero, 0x80
    ctx->pc = 0x1c7b3cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1c7b40: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1c7b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1c7b44: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x1c7b44u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1c7b48: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1c7b48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1c7b4c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1c7b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1c7b50: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1c7b50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1c7b54: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c7b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c7b58: 0xa7a900f0  sh          $t1, 0xF0($sp)
    ctx->pc = 0x1c7b58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 9));
    // 0x1c7b5c: 0x88a025  or          $s4, $a0, $t0
    ctx->pc = 0x1c7b5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x1c7b60: 0x92750000  lbu         $s5, 0x0($s3)
    ctx->pc = 0x1c7b60u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c7b64: 0x30040003  andi        $a0, $zero, 0x3
    ctx->pc = 0x1c7b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1c7b68: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c7b68u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c7b6c: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x1c7b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1c7b70: 0x240efff3  addiu       $t6, $zero, -0xD
    ctx->pc = 0x1c7b70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1c7b74: 0x240cff0f  addiu       $t4, $zero, -0xF1
    ctx->pc = 0x1c7b74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1c7b78: 0x640d0030  daddiu      $t5, $zero, 0x30
    ctx->pc = 0x1c7b78u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
    // 0x1c7b7c: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x1c7b7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c7b80: 0x640b0002  daddiu      $t3, $zero, 0x2
    ctx->pc = 0x1c7b80u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x1c7b84: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x1c7b84u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1c7b88: 0x64080005  daddiu      $t0, $zero, 0x5
    ctx->pc = 0x1c7b88u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    // 0x1c7b8c: 0x2a63024  and         $a2, $s5, $a2
    ctx->pc = 0x1c7b8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & GPR_U64(ctx, 6));
    // 0x1c7b90: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1c7b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1c7b94: 0xa2660000  sb          $a2, 0x0($s3)
    ctx->pc = 0x1c7b94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c7b98: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x1c7b98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c7b9c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1c7b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c7ba0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c7ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c7ba4: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x1c7ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7ba8: 0xdfa300f0  ld          $v1, 0xF0($sp)
    ctx->pc = 0x1c7ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7bac: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x1c7bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x1c7bb0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c7bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c7bb4: 0xffa200f0  sd          $v0, 0xF0($sp)
    ctx->pc = 0x1c7bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 2));
    // 0x1c7bb8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c7bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7bbc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1c7bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1c7bc0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1c7bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x1c7bc4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c7bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7bc8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c7bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7bcc: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1c7bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1c7bd0: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x1c7bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x1c7bd4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c7bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7bd8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1c7bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7bdc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1c7bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1c7be0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x1c7be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x1c7be4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c7be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7be8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1c7be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7bec: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1c7becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1c7bf0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1c7bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1c7bf4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c7bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7bf8: 0x93a200f9  lbu         $v0, 0xF9($sp)
    ctx->pc = 0x1c7bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 249)));
    // 0x1c7bfc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1c7bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1c7c00: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1c7c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1c7c04: 0xa3a200f9  sb          $v0, 0xF9($sp)
    ctx->pc = 0x1c7c04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 249), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7c08: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x1c7c08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7c0c: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x1C7C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C14u);
    ctx->pc = 0x1C7C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C0Cu;
    // 0x1c7c10: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x1C7C0Cu, 0x1C7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C14u;
label_1c7c14:
    // 0x1c7c14: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c7c14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c18: 0x27b500d4  addiu       $s5, $sp, 0xD4
    ctx->pc = 0x1c7c18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1c7c1c: 0x27b400d8  addiu       $s4, $sp, 0xD8
    ctx->pc = 0x1c7c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1c7c20: 0x27b300dc  addiu       $s3, $sp, 0xDC
    ctx->pc = 0x1c7c20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1c7c24: 0x27b600c4  addiu       $s6, $sp, 0xC4
    ctx->pc = 0x1c7c24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1c7c28: 0x27b700c8  addiu       $s7, $sp, 0xC8
    ctx->pc = 0x1c7c28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1c7c2c: 0x27b200ec  addiu       $s2, $sp, 0xEC
    ctx->pc = 0x1c7c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_1c7c30:
    // 0x1c7c30: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1c7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1c7c34: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1c7c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1c7c38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7c3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7c40: 0x7c00004  bltz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7C40u;
    {
        const bool branch_taken_0x1c7c40 = (GPR_S64(ctx, 30) < 0);
        ctx->pc = 0x1C7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C40u;
        // 0x1c7c44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c40) {
            ctx->pc = 0x1C7C54u;
            goto label_1c7c54;
        }
    }
    ctx->pc = 0x1C7C48u;
    // 0x1c7c48: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x1c7c48u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7C4Cu;
    {
        const bool branch_taken_0x1c7c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C4Cu;
        // 0x1c7c50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c4c) {
            ctx->pc = 0x1C7C70u;
            goto label_1c7c70;
        }
    }
    ctx->pc = 0x1C7C54u;
label_1c7c54:
    // 0x1c7c54: 0x1e1842  srl         $v1, $fp, 1
    ctx->pc = 0x1c7c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
    // 0x1c7c58: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1c7c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x1c7c5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c7c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c64: 0x0  nop
    ctx->pc = 0x1c7c64u;
    // NOP
    // 0x1c7c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7c6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c7c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c7c70:
    // 0x1c7c70: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1c7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1c7c74: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7C74u;
    {
        const bool branch_taken_0x1c7c74 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1C7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C74u;
        // 0x1c7c78: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c74) {
            ctx->pc = 0x1C7C88u;
            goto label_1c7c88;
        }
    }
    ctx->pc = 0x1C7C7Cu;
    // 0x1c7c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7C80u;
    {
        const bool branch_taken_0x1c7c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C80u;
        // 0x1c7c84: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c80) {
            ctx->pc = 0x1C7CA4u;
            goto label_1c7ca4;
        }
    }
    ctx->pc = 0x1C7C88u;
label_1c7c88:
    // 0x1c7c88: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c7c8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c7c90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c7c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c98: 0x0  nop
    ctx->pc = 0x1c7c98u;
    // NOP
    // 0x1c7c9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c7c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7ca0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c7ca0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c7ca4:
    // 0x1c7ca4: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1c7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1c7ca8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1c7ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1c7cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7cb0: 0x0  nop
    ctx->pc = 0x1c7cb0u;
    // NOP
    // 0x1c7cb4: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1c7cb4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7cb8:
    // 0x1c7cb8: 0x3c023e2a  lui         $v0, 0x3E2A
    ctx->pc = 0x1c7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15914 << 16));
    // 0x1c7cbc: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1c7cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1c7cc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7cc4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7CC4u;
    {
        const bool branch_taken_0x1c7cc4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1C7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CC4u;
        // 0x1c7cc8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cc4) {
            ctx->pc = 0x1C7CD8u;
            goto label_1c7cd8;
        }
    }
    ctx->pc = 0x1C7CCCu;
    // 0x1c7ccc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1c7cccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7cd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7CD0u;
    {
        const bool branch_taken_0x1c7cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CD0u;
        // 0x1c7cd4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cd0) {
            ctx->pc = 0x1C7CF0u;
            goto label_1c7cf0;
        }
    }
    ctx->pc = 0x1C7CD8u;
label_1c7cd8:
    // 0x1c7cd8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1c7cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1c7cdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c7ce0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7ce4: 0x0  nop
    ctx->pc = 0x1c7ce4u;
    // NOP
    // 0x1c7ce8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7cec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c7cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c7cf0:
    // 0x1c7cf0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7cf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7cf8: 0xc422fac0  lwc1        $f2, -0x540($at)
    ctx->pc = 0x1c7cf8u;
    { uint32_t bits = FAST_READ32(0x40FAC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7cfc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c7d00: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1c7d00u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c7d04: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1c7d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c7d08: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x1c7d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1c7d0c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7d10: 0xc421fad0  lwc1        $f1, -0x530($at)
    ctx->pc = 0x1c7d10u;
    { uint32_t bits = FAST_READ32(0x40FAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7d14: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c7d14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c7d18: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7d1c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c7d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c7d20: 0xc420fac4  lwc1        $f0, -0x53C($at)
    ctx->pc = 0x1c7d20u;
    { uint32_t bits = FAST_READ32(0x40FAC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7d24: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c7d24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c7d28: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1c7d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1c7d2c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1c7d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1c7d30: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7d34: 0xc421fac8  lwc1        $f1, -0x538($at)
    ctx->pc = 0x1c7d34u;
    { uint32_t bits = FAST_READ32(0x40FAC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7d38: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7d3c: 0xc420fae8  lwc1        $f0, -0x518($at)
    ctx->pc = 0x1c7d3cu;
    { uint32_t bits = FAST_READ32(0x40FAE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7d40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c7d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c7d44: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7d48: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1c7d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1c7d4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c7d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c7d50: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1c7d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1c7d54: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1c7d58: 0xc422fb00  lwc1        $f2, -0x500($at)
    ctx->pc = 0x1c7d58u;
    { uint32_t bits = FAST_READ32(0x40FB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7d5c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7d60: 0xc421fb10  lwc1        $f1, -0x4F0($at)
    ctx->pc = 0x1c7d60u;
    { uint32_t bits = FAST_READ32(0x40FB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7d64: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7d68: 0xc423fb04  lwc1        $f3, -0x4FC($at)
    ctx->pc = 0x1c7d68u;
    { uint32_t bits = FAST_READ32(0x40FB04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7d6c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c7d6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c7d70: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c7d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c7d74: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7d78: 0xc420fb24  lwc1        $f0, -0x4DC($at)
    ctx->pc = 0x1c7d78u;
    { uint32_t bits = FAST_READ32(0x40FB24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7d7c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c7d7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c7d80: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1c7d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1c7d84: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c7d84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c7d88: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1c7d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1c7d8c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c7d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c7d90: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1c7d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1c7d94: 0xc04d748  jal         func_135D20
    ctx->pc = 0x1C7D94u;
    SET_GPR_U32(ctx, 31, 0x1C7D9Cu);
    ctx->pc = 0x1C7D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D94u;
    // 0x1c7d98: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x1C7D94u, 0x1C7D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D9Cu;
label_1c7d9c:
    // 0x1c7d9c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1c7d9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c7da0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c7da4: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1c7da4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c7da8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c7da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c7dac: 0x32230007  andi        $v1, $s1, 0x7
    ctx->pc = 0x1c7dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1c7db0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7DB0u;
    {
        const bool branch_taken_0x1c7db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7db0) {
            ctx->pc = 0x1C7DC8u;
            goto label_1c7dc8;
        }
    }
    ctx->pc = 0x1C7DB8u;
    // 0x1c7db8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1c7db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c7dbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7DBCu;
    {
        const bool branch_taken_0x1c7dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DBCu;
        // 0x1c7dc0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7dbc) {
            ctx->pc = 0x1C7DD0u;
            goto label_1c7dd0;
        }
    }
    ctx->pc = 0x1C7DC4u;
    // 0x1c7dc4: 0x0  nop
    ctx->pc = 0x1c7dc4u;
    // NOP
label_1c7dc8:
    // 0x1c7dc8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c7dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1c7dcc: 0x0  nop
    ctx->pc = 0x1c7dccu;
    // NOP
label_1c7dd0:
    // 0x1c7dd0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7dd4: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x1c7dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7dd8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C7DD8u;
    SET_GPR_U32(ctx, 31, 0x1C7DE0u);
    ctx->pc = 0x1C7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DD8u;
    // 0x1c7ddc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C7DD8u, 0x1C7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DE0u;
label_1c7de0:
    // 0x1c7de0: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x1c7de0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c7de4: 0xc041404  jal         func_105010
    ctx->pc = 0x1C7DE4u;
    SET_GPR_U32(ctx, 31, 0x1C7DECu);
    ctx->pc = 0x1C7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DE4u;
    // 0x1c7de8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C7DE4u, 0x1C7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DECu;
label_1c7dec:
    // 0x1c7dec: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7df0: 0x7825fb40  lq          $a1, -0x4C0($at)
    ctx->pc = 0x1c7df0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40FB40u));
    // 0x1c7df4: 0xc041404  jal         func_105010
    ctx->pc = 0x1C7DF4u;
    SET_GPR_U32(ctx, 31, 0x1C7DFCu);
    ctx->pc = 0x1C7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DF4u;
    // 0x1c7df8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C7DF4u, 0x1C7DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DFCu;
label_1c7dfc:
    // 0x1c7dfc: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x1c7dfcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c7e00: 0xc041404  jal         func_105010
    ctx->pc = 0x1C7E00u;
    SET_GPR_U32(ctx, 31, 0x1C7E08u);
    ctx->pc = 0x1C7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E00u;
    // 0x1c7e04: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C7E00u, 0x1C7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E08u;
label_1c7e08:
    // 0x1c7e08: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7e0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7e10: 0xc422fac0  lwc1        $f2, -0x540($at)
    ctx->pc = 0x1c7e10u;
    { uint32_t bits = FAST_READ32(0x40FAC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7e14: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c7e18: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1c7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c7e1c: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x1c7e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1c7e20: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7e24: 0xc421fad0  lwc1        $f1, -0x530($at)
    ctx->pc = 0x1c7e24u;
    { uint32_t bits = FAST_READ32(0x40FAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7e28: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c7e28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c7e2c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7e30: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c7e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c7e34: 0xc420fac4  lwc1        $f0, -0x53C($at)
    ctx->pc = 0x1c7e34u;
    { uint32_t bits = FAST_READ32(0x40FAC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7e38: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c7e38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c7e3c: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1c7e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1c7e40: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1c7e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1c7e44: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7e48: 0xc421fac8  lwc1        $f1, -0x538($at)
    ctx->pc = 0x1c7e48u;
    { uint32_t bits = FAST_READ32(0x40FAC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7e4c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7e50: 0xc420fae8  lwc1        $f0, -0x518($at)
    ctx->pc = 0x1c7e50u;
    { uint32_t bits = FAST_READ32(0x40FAE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7e54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c7e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c7e58: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7e5c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1c7e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1c7e60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c7e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c7e64: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1c7e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1c7e68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1c7e6c: 0xc422fb00  lwc1        $f2, -0x500($at)
    ctx->pc = 0x1c7e6cu;
    { uint32_t bits = FAST_READ32(0x40FB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c7e70: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7e74: 0xc421fb10  lwc1        $f1, -0x4F0($at)
    ctx->pc = 0x1c7e74u;
    { uint32_t bits = FAST_READ32(0x40FB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7e78: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7e7c: 0xc423fb04  lwc1        $f3, -0x4FC($at)
    ctx->pc = 0x1c7e7cu;
    { uint32_t bits = FAST_READ32(0x40FB04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c7e80: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c7e80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c7e84: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c7e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c7e88: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7e8c: 0xc420fb24  lwc1        $f0, -0x4DC($at)
    ctx->pc = 0x1c7e8cu;
    { uint32_t bits = FAST_READ32(0x40FB24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7e90: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c7e90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c7e94: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1c7e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1c7e98: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c7e98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c7e9c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1c7e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1c7ea0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c7ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c7ea4: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1c7ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1c7ea8: 0xc04d748  jal         func_135D20
    ctx->pc = 0x1C7EA8u;
    SET_GPR_U32(ctx, 31, 0x1C7EB0u);
    ctx->pc = 0x1C7EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7EA8u;
    // 0x1c7eac: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x1C7EA8u, 0x1C7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EB0u;
label_1c7eb0:
    // 0x1c7eb0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1c7eb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c7eb4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c7eb8: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1c7eb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c7ebc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c7ec0: 0x32230007  andi        $v1, $s1, 0x7
    ctx->pc = 0x1c7ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1c7ec4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7EC4u;
    {
        const bool branch_taken_0x1c7ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7ec4) {
            ctx->pc = 0x1C7ED8u;
            goto label_1c7ed8;
        }
    }
    ctx->pc = 0x1C7ECCu;
    // 0x1c7ecc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1c7eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c7ed0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7ED0u;
    {
        const bool branch_taken_0x1c7ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7ED0u;
        // 0x1c7ed4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ed0) {
            ctx->pc = 0x1C7EE0u;
            goto label_1c7ee0;
        }
    }
    ctx->pc = 0x1C7ED8u;
label_1c7ed8:
    // 0x1c7ed8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1c7edc: 0x0  nop
    ctx->pc = 0x1c7edcu;
    // NOP
label_1c7ee0:
    // 0x1c7ee0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c7ee4: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x1c7ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7ee8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C7EE8u;
    SET_GPR_U32(ctx, 31, 0x1C7EF0u);
    ctx->pc = 0x1C7EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7EE8u;
    // 0x1c7eec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C7EE8u, 0x1C7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EF0u;
label_1c7ef0:
    // 0x1c7ef0: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x1c7ef0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c7ef4: 0xc041404  jal         func_105010
    ctx->pc = 0x1C7EF4u;
    SET_GPR_U32(ctx, 31, 0x1C7EFCu);
    ctx->pc = 0x1C7EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7EF4u;
    // 0x1c7ef8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C7EF4u, 0x1C7EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EFCu;
label_1c7efc:
    // 0x1c7efc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1c7efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1c7f00: 0x7825fb40  lq          $a1, -0x4C0($at)
    ctx->pc = 0x1c7f00u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40FB40u));
    // 0x1c7f04: 0xc041404  jal         func_105010
    ctx->pc = 0x1C7F04u;
    SET_GPR_U32(ctx, 31, 0x1C7F0Cu);
    ctx->pc = 0x1C7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F04u;
    // 0x1c7f08: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C7F04u, 0x1C7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F0Cu;
label_1c7f0c:
    // 0x1c7f0c: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x1c7f0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c7f10: 0xc041404  jal         func_105010
    ctx->pc = 0x1C7F10u;
    SET_GPR_U32(ctx, 31, 0x1C7F18u);
    ctx->pc = 0x1C7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F10u;
    // 0x1c7f14: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105010u, 0x1C7F10u, 0x1C7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F18u;
label_1c7f18:
    // 0x1c7f18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c7f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c7f1c: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x1c7f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c7f20: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x1C7F20u;
    {
        const bool branch_taken_0x1c7f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7f20) {
            ctx->pc = 0x1C7CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7cb8;
        }
    }
    ctx->pc = 0x1C7F28u;
    // 0x1c7f28: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1c7f28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1c7f2c: 0x2fc20008  sltiu       $v0, $fp, 0x8
    ctx->pc = 0x1c7f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c7f30: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x1C7F30u;
    {
        const bool branch_taken_0x1c7f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F30u;
        // 0x1c7f34: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f30) {
            ctx->pc = 0x1C7C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7c30;
        }
    }
    ctx->pc = 0x1C7F38u;
    // 0x1c7f38: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x1C7F38u;
    SET_GPR_U32(ctx, 31, 0x1C7F40u);
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x1C7F38u, 0x1C7F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F40u;
label_1c7f40:
    // 0x1c7f40: 0xc04139c  jal         func_104E70
    ctx->pc = 0x1C7F40u;
    SET_GPR_U32(ctx, 31, 0x1C7F48u);
    ctx->pc = 0x1C7F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F40u;
    // 0x1c7f44: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x1C7F40u, 0x1C7F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F48u;
label_1c7f48:
    // 0x1c7f48: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c7f4c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1c7f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c7f50: 0xc041418  jal         func_105060
    ctx->pc = 0x1C7F50u;
    SET_GPR_U32(ctx, 31, 0x1C7F58u);
    ctx->pc = 0x1C7F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F50u;
    // 0x1c7f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105060u, 0x1C7F50u, 0x1C7F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F58u;
label_1c7f58:
    // 0x1c7f58: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c7f5c: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x1C7F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C7F64u);
    ctx->pc = 0x1C7F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F5Cu;
    // 0x1c7f60: 0x3c051300  lui         $a1, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x1C7F5Cu, 0x1C7F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F64u;
label_1c7f64:
    // 0x1c7f64: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c7f68: 0xc0413f8  jal         func_104FE0
    ctx->pc = 0x1C7F68u;
    SET_GPR_U32(ctx, 31, 0x1C7F70u);
    ctx->pc = 0x1C7F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F68u;
    // 0x1c7f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104FE0u, 0x1C7F68u, 0x1C7F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F70u;
label_1c7f70:
    // 0x1c7f70: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c7f74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7f78: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x1C7F78u;
    SET_GPR_U32(ctx, 31, 0x1C7F80u);
    ctx->pc = 0x1C7F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F78u;
    // 0x1c7f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x1C7F78u, 0x1C7F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F80u;
label_1c7f80:
    // 0x1c7f80: 0xc041298  jal         func_104A60
    ctx->pc = 0x1C7F80u;
    SET_GPR_U32(ctx, 31, 0x1C7F88u);
    ctx->pc = 0x1C7F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7F80u;
    // 0x1c7f84: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x1C7F80u, 0x1C7F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7F88u;
label_1c7f88:
    // 0x1c7f88: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1c7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c7f8c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1c7f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1c7f90: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c7f94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c7f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c7f98: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x1c7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x1c7f9c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c7fa0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1c7fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c7fa4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c7fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c7fa8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c7fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c7fac: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1c7facu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c7fb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7fb4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c7fb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c7fb8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c7fb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c7fbc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c7fbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c7fc0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c7fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7fc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c7fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7fc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c7fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7fcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7fd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FD4u;
        // 0x1c7fd8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7FDCu;
}
