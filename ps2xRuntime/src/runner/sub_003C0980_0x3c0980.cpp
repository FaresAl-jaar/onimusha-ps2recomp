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

// Function: sub_003C0980
// Address: 0x3c0980 - 0x3c0fb8
void sub_003C0980_0x3c0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0980_0x3c0980");
#endif

    switch (ctx->pc) {
        case 0x3c0a6cu: goto label_3c0a6c;
        case 0x3c0a74u: goto label_3c0a74;
        case 0x3c0ad4u: goto label_3c0ad4;
        case 0x3c0adcu: goto label_3c0adc;
        case 0x3c0b3cu: goto label_3c0b3c;
        case 0x3c0b44u: goto label_3c0b44;
        case 0x3c0ba4u: goto label_3c0ba4;
        case 0x3c0bacu: goto label_3c0bac;
        case 0x3c0c0cu: goto label_3c0c0c;
        case 0x3c0c14u: goto label_3c0c14;
        case 0x3c0c7cu: goto label_3c0c7c;
        case 0x3c0c84u: goto label_3c0c84;
        case 0x3c0cecu: goto label_3c0cec;
        case 0x3c0cf4u: goto label_3c0cf4;
        case 0x3c0d64u: goto label_3c0d64;
        case 0x3c0d6cu: goto label_3c0d6c;
        case 0x3c0de4u: goto label_3c0de4;
        case 0x3c0e6cu: goto label_3c0e6c;
        case 0x3c0e8cu: goto label_3c0e8c;
        case 0x3c0edcu: goto label_3c0edc;
        case 0x3c0f44u: goto label_3c0f44;
        case 0x3c0f60u: goto label_3c0f60;
        case 0x3c0f74u: goto label_3c0f74;
        default: break;
    }

    ctx->pc = 0x3c0980u;

    // 0x3c0980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c0980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c0984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c0984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c0988: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c0988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c098c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c0990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c0990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0994: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c0994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c0998: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3c0998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c099c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3c099cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c09a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c09a4: 0x10c40010  beq         $a2, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C09A4u;
    {
        const bool branch_taken_0x3c09a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09A4u;
        // 0x3c09a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c09a4) {
            ctx->pc = 0x3C09E8u;
            goto label_3c09e8;
        }
    }
    ctx->pc = 0x3C09ACu;
    // 0x3c09ac: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C09ACu;
    {
        const bool branch_taken_0x3c09ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c09ac) {
            ctx->pc = 0x3C09C0u;
            goto label_3c09c0;
        }
    }
    ctx->pc = 0x3C09B4u;
    // 0x3c09b4: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x3C09B4u;
    {
        const bool branch_taken_0x3c09b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c09b4) {
            ctx->pc = 0x3C0FA0u;
            goto label_3c0fa0;
        }
    }
    ctx->pc = 0x3C09BCu;
    // 0x3c09bc: 0x0  nop
    ctx->pc = 0x3c09bcu;
    // NOP
label_3c09c0:
    // 0x3c09c0: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x3c09c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c09c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c09c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c09c8: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x3c09c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c09cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3c09ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c09d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c09d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c09d4: 0x14600172  bnez        $v1, . + 4 + (0x172 << 2)
    ctx->pc = 0x3C09D4u;
    {
        const bool branch_taken_0x3c09d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c09d4) {
            ctx->pc = 0x3C0FA0u;
            goto label_3c0fa0;
        }
    }
    ctx->pc = 0x3C09DCu;
    // 0x3c09dc: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x3C09DCu;
    {
        const bool branch_taken_0x3c09dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09DCu;
        // 0x3c09e0: 0xa2240000  sb          $a0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c09dc) {
            ctx->pc = 0x3C0FA0u;
            goto label_3c0fa0;
        }
    }
    ctx->pc = 0x3C09E4u;
    // 0x3c09e4: 0x0  nop
    ctx->pc = 0x3c09e4u;
    // NOP
label_3c09e8:
    // 0x3c09e8: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x3c09e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3c09ec: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3c09ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3c09f0: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x3c09f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c09f4: 0x10200122  beqz        $at, . + 4 + (0x122 << 2)
    ctx->pc = 0x3C09F4u;
    {
        const bool branch_taken_0x3c09f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09F4u;
        // 0x3c09f8: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c09f4) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C09FCu;
    // 0x3c09fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3c0a00: 0x24632d90  addiu       $v1, $v1, 0x2D90
    ctx->pc = 0x3c0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11664));
    // 0x3c0a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c0a08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3c0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c0a0c: 0x400008  jr          $v0
    ctx->pc = 0x3C0A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C0A18u: goto label_3c0a18;
            case 0x3C0A80u: goto label_3c0a80;
            case 0x3C0AE8u: goto label_3c0ae8;
            case 0x3C0B50u: goto label_3c0b50;
            case 0x3C0BB8u: goto label_3c0bb8;
            case 0x3C0C28u: goto label_3c0c28;
            case 0x3C0C98u: goto label_3c0c98;
            case 0x3C0D10u: goto label_3c0d10;
            case 0x3C0D88u: goto label_3c0d88;
            case 0x3C0E10u: goto label_3c0e10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0A0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C0A14u;
    // 0x3c0a14: 0x0  nop
    ctx->pc = 0x3c0a14u;
    // NOP
label_3c0a18:
    // 0x3c0a18: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x3c0a18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0a1c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3c0a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c0a20: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x3c0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x3c0a24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c0a24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c0a28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0a2c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3c0a2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0a34: 0x0  nop
    ctx->pc = 0x3c0a34u;
    // NOP
    // 0x3c0a38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c0a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c0a3c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3c0a3cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c0a40: 0x0  nop
    ctx->pc = 0x3c0a40u;
    // NOP
    // 0x3c0a44: 0x0  nop
    ctx->pc = 0x3c0a44u;
    // NOP
    // 0x3c0a48: 0x1010  mfhi        $v0
    ctx->pc = 0x3c0a48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c0a4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c0a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0a50: 0x0  nop
    ctx->pc = 0x3c0a50u;
    // NOP
    // 0x3c0a54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c0a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c0a58: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c0a58u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c0a5c: 0x0  nop
    ctx->pc = 0x3c0a5cu;
    // NOP
    // 0x3c0a60: 0x0  nop
    ctx->pc = 0x3c0a60u;
    // NOP
    // 0x3c0a64: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3C0A64u;
    SET_GPR_U32(ctx, 31, 0x3C0A6Cu);
    ctx->pc = 0x3C0A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0A64u;
    // 0x3c0a68: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3C0A64u, 0x3C0A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0A6Cu;
label_3c0a6c:
    // 0x3c0a6c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3C0A6Cu;
    SET_GPR_U32(ctx, 31, 0x3C0A74u);
    ctx->pc = 0x3C0A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0A6Cu;
    // 0x3c0a70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3C0A6Cu, 0x3C0A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0A74u;
label_3c0a74:
    // 0x3c0a74: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x3C0A74u;
    {
        const bool branch_taken_0x3c0a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A74u;
        // 0x3c0a78: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0a74) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C0A7Cu;
    // 0x3c0a7c: 0x0  nop
    ctx->pc = 0x3c0a7cu;
    // NOP
label_3c0a80:
    // 0x3c0a80: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x3c0a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0a84: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3c0a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c0a88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x3c0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x3c0a8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c0a8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c0a90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0a94: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3c0a94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0a9c: 0x0  nop
    ctx->pc = 0x3c0a9cu;
    // NOP
    // 0x3c0aa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c0aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c0aa4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3c0aa4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c0aa8: 0x0  nop
    ctx->pc = 0x3c0aa8u;
    // NOP
    // 0x3c0aac: 0x0  nop
    ctx->pc = 0x3c0aacu;
    // NOP
    // 0x3c0ab0: 0x1010  mfhi        $v0
    ctx->pc = 0x3c0ab0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c0ab4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c0ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0ab8: 0x0  nop
    ctx->pc = 0x3c0ab8u;
    // NOP
    // 0x3c0abc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c0abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c0ac0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c0ac0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c0ac4: 0x0  nop
    ctx->pc = 0x3c0ac4u;
    // NOP
    // 0x3c0ac8: 0x0  nop
    ctx->pc = 0x3c0ac8u;
    // NOP
    // 0x3c0acc: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3C0ACCu;
    SET_GPR_U32(ctx, 31, 0x3C0AD4u);
    ctx->pc = 0x3C0AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0ACCu;
    // 0x3c0ad0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3C0ACCu, 0x3C0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0AD4u;
label_3c0ad4:
    // 0x3c0ad4: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x3C0AD4u;
    SET_GPR_U32(ctx, 31, 0x3C0ADCu);
    ctx->pc = 0x3C0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0AD4u;
    // 0x3c0ad8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x3C0AD4u, 0x3C0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0ADCu;
label_3c0adc:
    // 0x3c0adc: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x3C0ADCu;
    {
        const bool branch_taken_0x3c0adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0ADCu;
        // 0x3c0ae0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0adc) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C0AE4u;
    // 0x3c0ae4: 0x0  nop
    ctx->pc = 0x3c0ae4u;
    // NOP
label_3c0ae8:
    // 0x3c0ae8: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x3c0ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0aec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3c0aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c0af0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x3c0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x3c0af4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c0af4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c0af8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0afc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3c0afcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0b04: 0x0  nop
    ctx->pc = 0x3c0b04u;
    // NOP
    // 0x3c0b08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c0b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c0b0c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3c0b0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c0b10: 0x0  nop
    ctx->pc = 0x3c0b10u;
    // NOP
    // 0x3c0b14: 0x0  nop
    ctx->pc = 0x3c0b14u;
    // NOP
    // 0x3c0b18: 0x1010  mfhi        $v0
    ctx->pc = 0x3c0b18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c0b1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c0b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0b20: 0x0  nop
    ctx->pc = 0x3c0b20u;
    // NOP
    // 0x3c0b24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c0b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c0b28: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c0b28u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c0b2c: 0x0  nop
    ctx->pc = 0x3c0b2cu;
    // NOP
    // 0x3c0b30: 0x0  nop
    ctx->pc = 0x3c0b30u;
    // NOP
    // 0x3c0b34: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3C0B34u;
    SET_GPR_U32(ctx, 31, 0x3C0B3Cu);
    ctx->pc = 0x3C0B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B34u;
    // 0x3c0b38: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3C0B34u, 0x3C0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B3Cu;
label_3c0b3c:
    // 0x3c0b3c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3C0B3Cu;
    SET_GPR_U32(ctx, 31, 0x3C0B44u);
    ctx->pc = 0x3C0B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B3Cu;
    // 0x3c0b40: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3C0B3Cu, 0x3C0B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B44u;
label_3c0b44:
    // 0x3c0b44: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x3C0B44u;
    {
        const bool branch_taken_0x3c0b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B44u;
        // 0x3c0b48: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0b44) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C0B4Cu;
    // 0x3c0b4c: 0x0  nop
    ctx->pc = 0x3c0b4cu;
    // NOP
label_3c0b50:
    // 0x3c0b50: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x3c0b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0b54: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3c0b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c0b58: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x3c0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x3c0b5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c0b5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c0b60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0b64: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3c0b64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0b6c: 0x0  nop
    ctx->pc = 0x3c0b6cu;
    // NOP
    // 0x3c0b70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c0b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c0b74: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3c0b74u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c0b78: 0x0  nop
    ctx->pc = 0x3c0b78u;
    // NOP
    // 0x3c0b7c: 0x0  nop
    ctx->pc = 0x3c0b7cu;
    // NOP
    // 0x3c0b80: 0x1010  mfhi        $v0
    ctx->pc = 0x3c0b80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c0b84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c0b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0b88: 0x0  nop
    ctx->pc = 0x3c0b88u;
    // NOP
    // 0x3c0b8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c0b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c0b90: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c0b90u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c0b94: 0x0  nop
    ctx->pc = 0x3c0b94u;
    // NOP
    // 0x3c0b98: 0x0  nop
    ctx->pc = 0x3c0b98u;
    // NOP
    // 0x3c0b9c: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3C0B9Cu;
    SET_GPR_U32(ctx, 31, 0x3C0BA4u);
    ctx->pc = 0x3C0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B9Cu;
    // 0x3c0ba0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3C0B9Cu, 0x3C0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0BA4u;
label_3c0ba4:
    // 0x3c0ba4: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x3C0BA4u;
    SET_GPR_U32(ctx, 31, 0x3C0BACu);
    ctx->pc = 0x3C0BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0BA4u;
    // 0x3c0ba8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x3C0BA4u, 0x3C0BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0BACu;
label_3c0bac:
    // 0x3c0bac: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x3C0BACu;
    {
        const bool branch_taken_0x3c0bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BACu;
        // 0x3c0bb0: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0bac) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C0BB4u;
    // 0x3c0bb4: 0x0  nop
    ctx->pc = 0x3c0bb4u;
    // NOP
label_3c0bb8:
    // 0x3c0bb8: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x3c0bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0bbc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3c0bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c0bc0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x3c0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x3c0bc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c0bc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c0bc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0bcc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3c0bccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0bd4: 0x0  nop
    ctx->pc = 0x3c0bd4u;
    // NOP
    // 0x3c0bd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c0bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c0bdc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3c0bdcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c0be0: 0x0  nop
    ctx->pc = 0x3c0be0u;
    // NOP
    // 0x3c0be4: 0x0  nop
    ctx->pc = 0x3c0be4u;
    // NOP
    // 0x3c0be8: 0x1010  mfhi        $v0
    ctx->pc = 0x3c0be8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c0bec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c0becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0bf0: 0x0  nop
    ctx->pc = 0x3c0bf0u;
    // NOP
    // 0x3c0bf4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c0bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c0bf8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c0bf8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c0bfc: 0x0  nop
    ctx->pc = 0x3c0bfcu;
    // NOP
    // 0x3c0c00: 0x0  nop
    ctx->pc = 0x3c0c00u;
    // NOP
    // 0x3c0c04: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3C0C04u;
    SET_GPR_U32(ctx, 31, 0x3C0C0Cu);
    ctx->pc = 0x3C0C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C04u;
    // 0x3c0c08: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3C0C04u, 0x3C0C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C0Cu;
label_3c0c0c:
    // 0x3c0c0c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3C0C0Cu;
    SET_GPR_U32(ctx, 31, 0x3C0C14u);
    ctx->pc = 0x3C0C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C0Cu;
    // 0x3c0c10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3C0C0Cu, 0x3C0C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C14u;
label_3c0c14:
    // 0x3c0c14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0c18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c0c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0c1c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x3C0C1Cu;
    {
        const bool branch_taken_0x3c0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C1Cu;
        // 0x3c0c20: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c1c) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C0C24u;
    // 0x3c0c24: 0x0  nop
    ctx->pc = 0x3c0c24u;
    // NOP
label_3c0c28:
    // 0x3c0c28: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x3c0c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0c2c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3c0c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c0c30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x3c0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x3c0c34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c0c34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c0c38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0c3c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3c0c3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0c40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0c44: 0x0  nop
    ctx->pc = 0x3c0c44u;
    // NOP
    // 0x3c0c48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c0c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c0c4c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3c0c4cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c0c50: 0x0  nop
    ctx->pc = 0x3c0c50u;
    // NOP
    // 0x3c0c54: 0x0  nop
    ctx->pc = 0x3c0c54u;
    // NOP
    // 0x3c0c58: 0x1010  mfhi        $v0
    ctx->pc = 0x3c0c58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c0c5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c0c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0c60: 0x0  nop
    ctx->pc = 0x3c0c60u;
    // NOP
    // 0x3c0c64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c0c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c0c68: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c0c68u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c0c6c: 0x0  nop
    ctx->pc = 0x3c0c6cu;
    // NOP
    // 0x3c0c70: 0x0  nop
    ctx->pc = 0x3c0c70u;
    // NOP
    // 0x3c0c74: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3C0C74u;
    SET_GPR_U32(ctx, 31, 0x3C0C7Cu);
    ctx->pc = 0x3C0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C74u;
    // 0x3c0c78: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3C0C74u, 0x3C0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C7Cu;
label_3c0c7c:
    // 0x3c0c7c: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x3C0C7Cu;
    SET_GPR_U32(ctx, 31, 0x3C0C84u);
    ctx->pc = 0x3C0C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C7Cu;
    // 0x3c0c80: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x3C0C7Cu, 0x3C0C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C84u;
label_3c0c84:
    // 0x3c0c84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0c88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c0c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0c8c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x3C0C8Cu;
    {
        const bool branch_taken_0x3c0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C8Cu;
        // 0x3c0c90: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c8c) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C0C94u;
    // 0x3c0c94: 0x0  nop
    ctx->pc = 0x3c0c94u;
    // NOP
label_3c0c98:
    // 0x3c0c98: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x3c0c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0c9c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3c0c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c0ca0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x3c0ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x3c0ca4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c0ca4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c0ca8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0cac: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3c0cacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0cb4: 0x0  nop
    ctx->pc = 0x3c0cb4u;
    // NOP
    // 0x3c0cb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c0cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c0cbc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3c0cbcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c0cc0: 0x0  nop
    ctx->pc = 0x3c0cc0u;
    // NOP
    // 0x3c0cc4: 0x0  nop
    ctx->pc = 0x3c0cc4u;
    // NOP
    // 0x3c0cc8: 0x1010  mfhi        $v0
    ctx->pc = 0x3c0cc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c0ccc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c0cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0cd0: 0x0  nop
    ctx->pc = 0x3c0cd0u;
    // NOP
    // 0x3c0cd4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c0cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c0cd8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c0cd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c0cdc: 0x0  nop
    ctx->pc = 0x3c0cdcu;
    // NOP
    // 0x3c0ce0: 0x0  nop
    ctx->pc = 0x3c0ce0u;
    // NOP
    // 0x3c0ce4: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3C0CE4u;
    SET_GPR_U32(ctx, 31, 0x3C0CECu);
    ctx->pc = 0x3C0CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0CE4u;
    // 0x3c0ce8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3C0CE4u, 0x3C0CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0CECu;
label_3c0cec:
    // 0x3c0cec: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3C0CECu;
    SET_GPR_U32(ctx, 31, 0x3C0CF4u);
    ctx->pc = 0x3C0CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0CECu;
    // 0x3c0cf0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3C0CECu, 0x3C0CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0CF4u;
label_3c0cf4:
    // 0x3c0cf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0cf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c0cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0cfc: 0x0  nop
    ctx->pc = 0x3c0cfcu;
    // NOP
    // 0x3c0d00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3c0d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c0d04: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3C0D04u;
    {
        const bool branch_taken_0x3c0d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D04u;
        // 0x3c0d08: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d04) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C0D0Cu;
    // 0x3c0d0c: 0x0  nop
    ctx->pc = 0x3c0d0cu;
    // NOP
label_3c0d10:
    // 0x3c0d10: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x3c0d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0d14: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3c0d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c0d18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x3c0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x3c0d1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3c0d1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3c0d20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0d24: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3c0d24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0d2c: 0x0  nop
    ctx->pc = 0x3c0d2cu;
    // NOP
    // 0x3c0d30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c0d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c0d34: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3c0d34u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c0d38: 0x0  nop
    ctx->pc = 0x3c0d38u;
    // NOP
    // 0x3c0d3c: 0x0  nop
    ctx->pc = 0x3c0d3cu;
    // NOP
    // 0x3c0d40: 0x1010  mfhi        $v0
    ctx->pc = 0x3c0d40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c0d44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c0d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0d48: 0x0  nop
    ctx->pc = 0x3c0d48u;
    // NOP
    // 0x3c0d4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c0d4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3c0d50: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c0d50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c0d54: 0x0  nop
    ctx->pc = 0x3c0d54u;
    // NOP
    // 0x3c0d58: 0x0  nop
    ctx->pc = 0x3c0d58u;
    // NOP
    // 0x3c0d5c: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3C0D5Cu;
    SET_GPR_U32(ctx, 31, 0x3C0D64u);
    ctx->pc = 0x3C0D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0D5Cu;
    // 0x3c0d60: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3C0D5Cu, 0x3C0D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0D64u;
label_3c0d64:
    // 0x3c0d64: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x3C0D64u;
    SET_GPR_U32(ctx, 31, 0x3C0D6Cu);
    ctx->pc = 0x3C0D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0D64u;
    // 0x3c0d68: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x3C0D64u, 0x3C0D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0D6Cu;
label_3c0d6c:
    // 0x3c0d6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0d70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c0d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0d74: 0x0  nop
    ctx->pc = 0x3c0d74u;
    // NOP
    // 0x3c0d78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3c0d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c0d7c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3C0D7Cu;
    {
        const bool branch_taken_0x3c0d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D7Cu;
        // 0x3c0d80: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d7c) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C0D84u;
    // 0x3c0d84: 0x0  nop
    ctx->pc = 0x3c0d84u;
    // NOP
label_3c0d88:
    // 0x3c0d88: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x3c0d88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0d8c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x3c0d8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3c0d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c0d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0d94: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C0D94u;
    {
        const bool branch_taken_0x3c0d94 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3C0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D94u;
        // 0x3c0d98: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d94) {
            ctx->pc = 0x3C0DA8u;
            goto label_3c0da8;
        }
    }
    ctx->pc = 0x3C0D9Cu;
    // 0x3c0d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0da0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0DA0u;
    {
        const bool branch_taken_0x3c0da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DA0u;
        // 0x3c0da4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0da0) {
            ctx->pc = 0x3C0DC4u;
            goto label_3c0dc4;
        }
    }
    ctx->pc = 0x3C0DA8u;
label_3c0da8:
    // 0x3c0da8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3c0dac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c0dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c0db0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c0db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c0db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c0db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0db8: 0x0  nop
    ctx->pc = 0x3c0db8u;
    // NOP
    // 0x3c0dbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c0dbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c0dc0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c0dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c0dc4:
    // 0x3c0dc4: 0x0  nop
    ctx->pc = 0x3c0dc4u;
    // NOP
    // 0x3c0dc8: 0x0  nop
    ctx->pc = 0x3c0dc8u;
    // NOP
    // 0x3c0dcc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3c0dccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c0dd0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3c0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3c0dd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0ddc: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3C0DDCu;
    SET_GPR_U32(ctx, 31, 0x3C0DE4u);
    ctx->pc = 0x3C0DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0DDCu;
    // 0x3c0de0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3C0DDCu, 0x3C0DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0DE4u;
label_3c0de4:
    // 0x3c0de4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0de8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3c0dec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c0decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c0df0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c0df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0df4: 0x0  nop
    ctx->pc = 0x3c0df4u;
    // NOP
    // 0x3c0df8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3c0df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c0dfc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3c0dfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c0e00: 0x0  nop
    ctx->pc = 0x3c0e00u;
    // NOP
    // 0x3c0e04: 0x0  nop
    ctx->pc = 0x3c0e04u;
    // NOP
    // 0x3c0e08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3C0E08u;
    {
        const bool branch_taken_0x3c0e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0e08) {
            ctx->pc = 0x3C0E80u;
            goto label_3c0e80;
        }
    }
    ctx->pc = 0x3C0E10u;
label_3c0e10:
    // 0x3c0e10: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x3c0e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0e14: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x3c0e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3c0e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c0e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0e1c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C0E1Cu;
    {
        const bool branch_taken_0x3c0e1c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3C0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E1Cu;
        // 0x3c0e20: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e1c) {
            ctx->pc = 0x3C0E30u;
            goto label_3c0e30;
        }
    }
    ctx->pc = 0x3C0E24u;
    // 0x3c0e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0e28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0E28u;
    {
        const bool branch_taken_0x3c0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E28u;
        // 0x3c0e2c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e28) {
            ctx->pc = 0x3C0E4Cu;
            goto label_3c0e4c;
        }
    }
    ctx->pc = 0x3C0E30u;
label_3c0e30:
    // 0x3c0e30: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3c0e34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c0e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c0e38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c0e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c0e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c0e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0e40: 0x0  nop
    ctx->pc = 0x3c0e40u;
    // NOP
    // 0x3c0e44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c0e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c0e48: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c0e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c0e4c:
    // 0x3c0e4c: 0x0  nop
    ctx->pc = 0x3c0e4cu;
    // NOP
    // 0x3c0e50: 0x0  nop
    ctx->pc = 0x3c0e50u;
    // NOP
    // 0x3c0e54: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3c0e54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c0e58: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3c0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3c0e5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0e64: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3C0E64u;
    SET_GPR_U32(ctx, 31, 0x3C0E6Cu);
    ctx->pc = 0x3C0E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E64u;
    // 0x3c0e68: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3C0E64u, 0x3C0E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E6Cu;
label_3c0e6c:
    // 0x3c0e6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c0e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0e74: 0x0  nop
    ctx->pc = 0x3c0e74u;
    // NOP
    // 0x3c0e78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3c0e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c0e7c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3c0e7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3c0e80:
    // 0x3c0e80: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3c0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c0e84: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0E84u;
    {
        const bool branch_taken_0x3c0e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E84u;
        // 0x3c0e88: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e84) {
            ctx->pc = 0x3C0EA8u;
            goto label_3c0ea8;
        }
    }
    ctx->pc = 0x3C0E8Cu;
label_3c0e8c:
    // 0x3c0e8c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c0e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c0e90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c0e94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c0e98: 0x0  nop
    ctx->pc = 0x3c0e98u;
    // NOP
    // 0x3c0e9c: 0x0  nop
    ctx->pc = 0x3c0e9cu;
    // NOP
    // 0x3c0ea0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C0EA0u;
    {
        const bool branch_taken_0x3c0ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0ea0) {
            ctx->pc = 0x3C0E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0e8c;
        }
    }
    ctx->pc = 0x3C0EA8u;
label_3c0ea8:
    // 0x3c0ea8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3c0ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0eac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3c0eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c0eb0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3c0eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0eb4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3c0eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3c0eb8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3c0eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0ebc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3c0ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3c0ec0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x3c0ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3c0ec4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3c0ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3c0ec8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C0EC8u;
    {
        const bool branch_taken_0x3c0ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0EC8u;
        // 0x3c0ecc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0ec8) {
            ctx->pc = 0x3C0EE8u;
            goto label_3c0ee8;
        }
    }
    ctx->pc = 0x3C0ED0u;
    // 0x3c0ed0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c0ed0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3c0ed4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C0ED4u;
    SET_GPR_U32(ctx, 31, 0x3C0EDCu);
    ctx->pc = 0x3C0ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0ED4u;
    // 0x3c0ed8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C0ED4u, 0x3C0EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0EDCu;
label_3c0edc:
    // 0x3c0edc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3C0EDCu;
    {
        const bool branch_taken_0x3c0edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0edc) {
            ctx->pc = 0x3C0F60u;
            goto label_3c0f60;
        }
    }
    ctx->pc = 0x3C0EE4u;
    // 0x3c0ee4: 0x0  nop
    ctx->pc = 0x3c0ee4u;
    // NOP
label_3c0ee8:
    // 0x3c0ee8: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x3c0ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0eec: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x3c0eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3c0ef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c0ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0ef4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C0EF4u;
    {
        const bool branch_taken_0x3c0ef4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3C0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0EF4u;
        // 0x3c0ef8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0ef4) {
            ctx->pc = 0x3C0F08u;
            goto label_3c0f08;
        }
    }
    ctx->pc = 0x3C0EFCu;
    // 0x3c0efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0f00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0F00u;
    {
        const bool branch_taken_0x3c0f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F00u;
        // 0x3c0f04: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f00) {
            ctx->pc = 0x3C0F24u;
            goto label_3c0f24;
        }
    }
    ctx->pc = 0x3C0F08u;
label_3c0f08:
    // 0x3c0f08: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3c0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3c0f0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c0f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c0f10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c0f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c0f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c0f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0f18: 0x0  nop
    ctx->pc = 0x3c0f18u;
    // NOP
    // 0x3c0f1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c0f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3c0f20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c0f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c0f24:
    // 0x3c0f24: 0x0  nop
    ctx->pc = 0x3c0f24u;
    // NOP
    // 0x3c0f28: 0x0  nop
    ctx->pc = 0x3c0f28u;
    // NOP
    // 0x3c0f2c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3c0f2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c0f30: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3c0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3c0f34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c0f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c0f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0f3c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3C0F3Cu;
    SET_GPR_U32(ctx, 31, 0x3C0F44u);
    ctx->pc = 0x3C0F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0F3Cu;
    // 0x3c0f40: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3C0F3Cu, 0x3C0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0F44u;
label_3c0f44:
    // 0x3c0f44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0f48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c0f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c0f4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c0f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c0f50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c0f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0f54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3c0f54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c0f58: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C0F58u;
    SET_GPR_U32(ctx, 31, 0x3C0F60u);
    ctx->pc = 0x3C0F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0F58u;
    // 0x3c0f5c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C0F58u, 0x3C0F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0F60u;
label_3c0f60:
    // 0x3c0f60: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C0F60u;
    {
        const bool branch_taken_0x3c0f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F60u;
        // 0x3c0f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f60) {
            ctx->pc = 0x3C0F78u;
            goto label_3c0f78;
        }
    }
    ctx->pc = 0x3C0F68u;
    // 0x3c0f68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c0f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0f6c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3C0F6Cu;
    SET_GPR_U32(ctx, 31, 0x3C0F74u);
    ctx->pc = 0x3C0F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0F6Cu;
    // 0x3c0f70: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3C0F6Cu, 0x3C0F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0F74u;
label_3c0f74:
    // 0x3c0f74: 0x0  nop
    ctx->pc = 0x3c0f74u;
    // NOP
label_3c0f78:
    // 0x3c0f78: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x3c0f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3c0f7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c0f80: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3c0f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3c0f84: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x3c0f84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c0f88: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x3c0f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3c0f8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3c0f8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3c0f90: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0F90u;
    {
        const bool branch_taken_0x3c0f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c0f90) {
            ctx->pc = 0x3C0FA0u;
            goto label_3c0fa0;
        }
    }
    ctx->pc = 0x3C0F98u;
    // 0x3c0f98: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3c0f98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c0f9c: 0x0  nop
    ctx->pc = 0x3c0f9cu;
    // NOP
label_3c0fa0:
    // 0x3c0fa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c0fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c0fa4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c0fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c0fa8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c0fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c0fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c0facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c0fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0FB0u;
        // 0x3c0fb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0FB8u;
}
