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

// Function: sub_003E9CB0
// Address: 0x3e9cb0 - 0x3ea80c
void sub_003E9CB0_0x3e9cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9CB0_0x3e9cb0");
#endif

    switch (ctx->pc) {
        case 0x3e9d1cu: goto label_3e9d1c;
        case 0x3e9d24u: goto label_3e9d24;
        case 0x3e9d9cu: goto label_3e9d9c;
        case 0x3e9db0u: goto label_3e9db0;
        case 0x3e9dc4u: goto label_3e9dc4;
        case 0x3e9dd0u: goto label_3e9dd0;
        case 0x3e9e08u: goto label_3e9e08;
        case 0x3e9e18u: goto label_3e9e18;
        case 0x3ea118u: goto label_3ea118;
        case 0x3ea170u: goto label_3ea170;
        case 0x3ea18cu: goto label_3ea18c;
        case 0x3ea194u: goto label_3ea194;
        case 0x3ea1a4u: goto label_3ea1a4;
        case 0x3ea1acu: goto label_3ea1ac;
        case 0x3ea1bcu: goto label_3ea1bc;
        case 0x3ea1c4u: goto label_3ea1c4;
        case 0x3ea1d4u: goto label_3ea1d4;
        case 0x3ea1dcu: goto label_3ea1dc;
        case 0x3ea294u: goto label_3ea294;
        case 0x3ea2b4u: goto label_3ea2b4;
        case 0x3ea2c0u: goto label_3ea2c0;
        case 0x3ea2d0u: goto label_3ea2d0;
        case 0x3ea680u: goto label_3ea680;
        default: break;
    }

    ctx->pc = 0x3e9cb0u;

    // 0x3e9cb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e9cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3e9cb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e9cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3e9cb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e9cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e9cbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e9cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e9cc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e9cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9cc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e9cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e9cc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e9cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9ccc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3e9cccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e9cd0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3e9cd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e9cd4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3e9cd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e9cd8: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3e9cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3e9cdc: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x3e9cdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3e9ce0: 0x102002c1  beqz        $at, . + 4 + (0x2C1 << 2)
    ctx->pc = 0x3E9CE0u;
    {
        const bool branch_taken_0x3e9ce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CE0u;
        // 0x3e9ce4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ce0) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3E9CE8u;
    // 0x3e9ce8: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3e9ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3e9cec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e9cf0: 0x24844dd0  addiu       $a0, $a0, 0x4DD0
    ctx->pc = 0x3e9cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    // 0x3e9cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e9cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e9cf8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e9cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e9cfc: 0x600008  jr          $v1
    ctx->pc = 0x3E9CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E9D08u: goto label_3e9d08;
            case 0x3EA0E0u: goto label_3ea0e0;
            case 0x3EA160u: goto label_3ea160;
            case 0x3EA168u: goto label_3ea168;
            case 0x3EA640u: goto label_3ea640;
            case 0x3EA648u: goto label_3ea648;
            case 0x3EA6A0u: goto label_3ea6a0;
            case 0x3EA6A8u: goto label_3ea6a8;
            case 0x3EA6E8u: goto label_3ea6e8;
            case 0x3EA720u: goto label_3ea720;
            case 0x3EA7A8u: goto label_3ea7a8;
            case 0x3EA7B0u: goto label_3ea7b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9CFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E9D04u;
    // 0x3e9d04: 0x0  nop
    ctx->pc = 0x3e9d04u;
    // NOP
label_3e9d08:
    // 0x3e9d08: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3e9d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3e9d0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e9d10: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3e9d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3e9d14: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3E9D14u;
    SET_GPR_U32(ctx, 31, 0x3E9D1Cu);
    ctx->pc = 0x3E9D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D14u;
    // 0x3e9d18: 0x24c649e0  addiu       $a2, $a2, 0x49E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3E9D14u, 0x3E9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D1Cu;
label_3e9d1c:
    // 0x3e9d1c: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3E9D1Cu;
    SET_GPR_U32(ctx, 31, 0x3E9D24u);
    ctx->pc = 0x3E9D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D1Cu;
    // 0x3e9d20: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3E9D1Cu, 0x3E9D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D24u;
label_3e9d24:
    // 0x3e9d24: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3e9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e9d28: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3e9d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3e9d2c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3e9d2cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3e9d30: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3e9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3e9d34: 0x24c30400  addiu       $v1, $a2, 0x400
    ctx->pc = 0x3e9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x3e9d38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e9d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e9d3c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x3e9d3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3e9d40: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x3e9d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3e9d44: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3e9d44u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3e9d48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e9d4c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3e9d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3e9d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e9d54: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3e9d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3e9d58: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3e9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e9d5c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3e9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3e9d60: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3e9d60u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3e9d64: 0x0  nop
    ctx->pc = 0x3e9d64u;
    // NOP
    // 0x3e9d68: 0x0  nop
    ctx->pc = 0x3e9d68u;
    // NOP
    // 0x3e9d6c: 0x1010  mfhi        $v0
    ctx->pc = 0x3e9d6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3e9d70: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x3e9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x3e9d74: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x3e9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x3e9d78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3e9d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3e9d7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e9d7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3e9d80: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3e9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3e9d84: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3e9d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3e9d88: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3e9d88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3e9d8c: 0x30c20fff  andi        $v0, $a2, 0xFFF
    ctx->pc = 0x3e9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x3e9d90: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3e9d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3e9d94: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3E9D94u;
    SET_GPR_U32(ctx, 31, 0x3E9D9Cu);
    ctx->pc = 0x3E9D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D94u;
    // 0x3e9d98: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3E9D94u, 0x3E9D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D9Cu;
label_3e9d9c:
    // 0x3e9d9c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x3e9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x3e9da0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e9da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e9da4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e9da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e9da8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3E9DA8u;
    SET_GPR_U32(ctx, 31, 0x3E9DB0u);
    ctx->pc = 0x3E9DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DA8u;
    // 0x3e9dac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3E9DA8u, 0x3E9DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DB0u;
label_3e9db0:
    // 0x3e9db0: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3e9db0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3e9db4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3e9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e9db8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3e9db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e9dbc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3E9DBCu;
    SET_GPR_U32(ctx, 31, 0x3E9DC4u);
    ctx->pc = 0x3E9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DBCu;
    // 0x3e9dc0: 0x24c649e0  addiu       $a2, $a2, 0x49E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3E9DBCu, 0x3E9DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DC4u;
label_3e9dc4:
    // 0x3e9dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9dc8: 0xc0fa430  jal         func_3E90C0
    ctx->pc = 0x3E9DC8u;
    SET_GPR_U32(ctx, 31, 0x3E9DD0u);
    ctx->pc = 0x3E9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9DC8u;
    // 0x3e9dcc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E90C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E90C0u, 0x3E9DC8u, 0x3E9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9DD0u;
label_3e9dd0:
    // 0x3e9dd0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3e9dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e9dd4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3e9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3e9dd8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3e9dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3e9ddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e9ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9de0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3e9de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e9de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e9de8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3e9dec: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e9decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3e9df0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3e9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3e9df4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3e9df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e9df8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x3e9df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x3e9dfc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e9dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e9e00: 0xc0fa4d4  jal         func_3E9350
    ctx->pc = 0x3E9E00u;
    SET_GPR_U32(ctx, 31, 0x3E9E08u);
    ctx->pc = 0x3E9E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9E00u;
    // 0x3e9e04: 0xa2422b9c  sb          $v0, 0x2B9C($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 11164), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9350u, 0x3E9E00u, 0x3E9E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9E08u;
label_3e9e08:
    // 0x3e9e08: 0xa6422b4e  sh          $v0, 0x2B4E($s2)
    ctx->pc = 0x3e9e08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11086), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e9e0c: 0x86452b4e  lh          $a1, 0x2B4E($s2)
    ctx->pc = 0x3e9e0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11086)));
    // 0x3e9e10: 0xc0974b8  jal         func_25D2E0
    ctx->pc = 0x3E9E10u;
    SET_GPR_U32(ctx, 31, 0x3E9E18u);
    ctx->pc = 0x3E9E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9E10u;
    // 0x3e9e14: 0x864400c2  lh          $a0, 0xC2($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D2E0u, 0x3E9E10u, 0x3E9E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9E18u;
label_3e9e18:
    // 0x3e9e18: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3e9e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3e9e1c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3e9e1cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3e9e20: 0x28a10200  slti        $at, $a1, 0x200
    ctx->pc = 0x3e9e20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3e9e24: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x3E9E24u;
    {
        const bool branch_taken_0x3e9e24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9e24) {
            ctx->pc = 0x3E9F80u;
            goto label_3e9f80;
        }
    }
    ctx->pc = 0x3E9E2Cu;
    // 0x3e9e2c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e9e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e9e30: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x3e9e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x3e9e34: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e9e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e9e38: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e9e3c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3e9e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e9e40: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e9e44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e9e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e9e48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e9e48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e9e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e9e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9e50: 0x0  nop
    ctx->pc = 0x3e9e50u;
    // NOP
    // 0x3e9e54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e9e54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e9e58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e9e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e9e5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9E5Cu;
    {
        const bool branch_taken_0x3e9e5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e9e5c) {
            ctx->pc = 0x3E9E74u;
            goto label_3e9e74;
        }
    }
    ctx->pc = 0x3E9E64u;
    // 0x3e9e64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9e64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e9e68: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e9e68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e9e6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E9E6Cu;
    {
        const bool branch_taken_0x3e9e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E6Cu;
        // 0x3e9e70: 0xa4001b  divu        $zero, $a1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e6c) {
            ctx->pc = 0x3E9E90u;
            goto label_3e9e90;
        }
    }
    ctx->pc = 0x3E9E74u;
label_3e9e74:
    // 0x3e9e74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e9e74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e9e78: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e9e7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9e7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e9e80: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e9e80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e9e84: 0x0  nop
    ctx->pc = 0x3e9e84u;
    // NOP
    // 0x3e9e88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e9e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e9e8c: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x3e9e8cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_3e9e90:
    // 0x3e9e90: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e9e94: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3e9e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e9e98: 0x2812  mflo        $a1
    ctx->pc = 0x3e9e98u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x3e9e9c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3e9e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e9ea0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e9ea4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e9ea4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e9ea8: 0xae452b50  sw          $a1, 0x2B50($s2)
    ctx->pc = 0x3e9ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11088), GPR_U32(ctx, 5));
    // 0x3e9eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e9eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9eb0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e9eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e9eb4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e9eb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e9eb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e9eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e9ebc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e9ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e9ec0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9EC0u;
    {
        const bool branch_taken_0x3e9ec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e9ec0) {
            ctx->pc = 0x3E9ED8u;
            goto label_3e9ed8;
        }
    }
    ctx->pc = 0x3E9EC8u;
    // 0x3e9ec8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9ec8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e9ecc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e9eccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e9ed0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E9ED0u;
    {
        const bool branch_taken_0x3e9ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9ED0u;
        // 0x3e9ed4: 0xa6442b54  sh          $a0, 0x2B54($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11092), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ed0) {
            ctx->pc = 0x3E9EF4u;
            goto label_3e9ef4;
        }
    }
    ctx->pc = 0x3E9ED8u;
label_3e9ed8:
    // 0x3e9ed8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e9ed8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e9edc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e9ee0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9ee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e9ee4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e9ee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e9ee8: 0x0  nop
    ctx->pc = 0x3e9ee8u;
    // NOP
    // 0x3e9eec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e9eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e9ef0: 0xa6442b54  sh          $a0, 0x2B54($s2)
    ctx->pc = 0x3e9ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11092), (uint16_t)GPR_U32(ctx, 4));
label_3e9ef4:
    // 0x3e9ef4: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x3e9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x3e9ef8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e9efc: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3e9efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3e9f00: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e9f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e9f04: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3e9f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3e9f08: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e9f08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e9f0c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e9f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e9f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9f14: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e9f14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e9f18: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e9f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e9f1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e9f1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e9f20: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9F20u;
    {
        const bool branch_taken_0x3e9f20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e9f20) {
            ctx->pc = 0x3E9F38u;
            goto label_3e9f38;
        }
    }
    ctx->pc = 0x3E9F28u;
    // 0x3e9f28: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9f28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e9f2c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e9f2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e9f30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E9F30u;
    {
        const bool branch_taken_0x3e9f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F30u;
        // 0x3e9f34: 0xa6442b56  sh          $a0, 0x2B56($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11094), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f30) {
            ctx->pc = 0x3E9F54u;
            goto label_3e9f54;
        }
    }
    ctx->pc = 0x3E9F38u;
label_3e9f38:
    // 0x3e9f38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e9f38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e9f3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e9f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e9f40: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9f40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e9f44: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e9f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e9f48: 0x0  nop
    ctx->pc = 0x3e9f48u;
    // NOP
    // 0x3e9f4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e9f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e9f50: 0xa6442b56  sh          $a0, 0x2B56($s2)
    ctx->pc = 0x3e9f50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11094), (uint16_t)GPR_U32(ctx, 4));
label_3e9f54:
    // 0x3e9f54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e9f58: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3e9f58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9f5c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x3e9f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3e9f60: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3e9f60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9f64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3e9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e9f68: 0xa64507f2  sh          $a1, 0x7F2($s2)
    ctx->pc = 0x3e9f68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e9f6c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e9f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e9f70: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x3e9f70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e9f74: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x3E9F74u;
    {
        const bool branch_taken_0x3e9f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F74u;
        // 0x3e9f78: 0xae4307ec  sw          $v1, 0x7EC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f74) {
            ctx->pc = 0x3EA0D8u;
            goto label_3ea0d8;
        }
    }
    ctx->pc = 0x3E9F7Cu;
    // 0x3e9f7c: 0x0  nop
    ctx->pc = 0x3e9f7cu;
    // NOP
label_3e9f80:
    // 0x3e9f80: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x3e9f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x3e9f84: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e9f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e9f88: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3e9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3e9f8c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e9f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e9f90: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3e9f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3e9f94: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e9f94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e9f98: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e9f9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e9f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9fa0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e9fa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e9fa4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e9fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e9fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e9fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e9fac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9FACu;
    {
        const bool branch_taken_0x3e9fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e9fac) {
            ctx->pc = 0x3E9FC4u;
            goto label_3e9fc4;
        }
    }
    ctx->pc = 0x3E9FB4u;
    // 0x3e9fb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9fb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e9fb8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e9fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e9fbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E9FBCu;
    {
        const bool branch_taken_0x3e9fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FBCu;
        // 0x3e9fc0: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9fbc) {
            ctx->pc = 0x3E9FE0u;
            goto label_3e9fe0;
        }
    }
    ctx->pc = 0x3E9FC4u;
label_3e9fc4:
    // 0x3e9fc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e9fc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e9fc8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e9fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e9fcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e9fd0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e9fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e9fd4: 0x0  nop
    ctx->pc = 0x3e9fd4u;
    // NOP
    // 0x3e9fd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e9fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e9fdc: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x3e9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_3e9fe0:
    // 0x3e9fe0: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x3e9fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x3e9fe4: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x3e9fe4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3e9fe8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x3e9fe8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e9fec: 0x0  nop
    ctx->pc = 0x3e9fecu;
    // NOP
    // 0x3e9ff0: 0x3012  mflo        $a2
    ctx->pc = 0x3e9ff0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3e9ff4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e9ff8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3e9ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e9ffc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ea000: 0xae462b50  sw          $a2, 0x2B50($s2)
    ctx->pc = 0x3ea000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11088), GPR_U32(ctx, 6));
    // 0x3ea004: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ea004u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea008: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ea008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ea00c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ea00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ea010: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ea010u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ea014: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ea014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ea018: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea01c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EA01Cu;
    {
        const bool branch_taken_0x3ea01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea01c) {
            ctx->pc = 0x3EA034u;
            goto label_3ea034;
        }
    }
    ctx->pc = 0x3EA024u;
    // 0x3ea024: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea028: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea02c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EA02Cu;
    {
        const bool branch_taken_0x3ea02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA02Cu;
        // 0x3ea030: 0xa6442b54  sh          $a0, 0x2B54($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11092), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea02c) {
            ctx->pc = 0x3EA050u;
            goto label_3ea050;
        }
    }
    ctx->pc = 0x3EA034u;
label_3ea034:
    // 0x3ea034: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ea034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ea038: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea03c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea03cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea040: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea044: 0x0  nop
    ctx->pc = 0x3ea044u;
    // NOP
    // 0x3ea048: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ea048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ea04c: 0xa6442b54  sh          $a0, 0x2B54($s2)
    ctx->pc = 0x3ea04cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11092), (uint16_t)GPR_U32(ctx, 4));
label_3ea050:
    // 0x3ea050: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3ea050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x3ea054: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ea054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ea058: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3ea058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3ea05c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ea05cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ea060: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3ea060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3ea064: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ea064u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea068: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ea068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ea06c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ea06cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ea070: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ea070u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ea074: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ea074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ea078: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea07c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EA07Cu;
    {
        const bool branch_taken_0x3ea07c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea07c) {
            ctx->pc = 0x3EA094u;
            goto label_3ea094;
        }
    }
    ctx->pc = 0x3EA084u;
    // 0x3ea084: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea088: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea08c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EA08Cu;
    {
        const bool branch_taken_0x3ea08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA08Cu;
        // 0x3ea090: 0xa6442b56  sh          $a0, 0x2B56($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11094), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea08c) {
            ctx->pc = 0x3EA0B0u;
            goto label_3ea0b0;
        }
    }
    ctx->pc = 0x3EA094u;
label_3ea094:
    // 0x3ea094: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ea094u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ea098: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea09c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea09cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea0a0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea0a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea0a4: 0x0  nop
    ctx->pc = 0x3ea0a4u;
    // NOP
    // 0x3ea0a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ea0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ea0ac: 0xa6442b56  sh          $a0, 0x2B56($s2)
    ctx->pc = 0x3ea0acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11094), (uint16_t)GPR_U32(ctx, 4));
label_3ea0b0:
    // 0x3ea0b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea0b4: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea0b8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3ea0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3ea0bc: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea0c0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ea0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea0c4: 0xa64507f2  sh          $a1, 0x7F2($s2)
    ctx->pc = 0x3ea0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ea0c8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ea0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea0cc: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x3ea0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea0d0: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x3ea0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x3ea0d4: 0x0  nop
    ctx->pc = 0x3ea0d4u;
    // NOP
label_3ea0d8:
    // 0x3ea0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ea0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea0dc: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x3ea0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ea0e0:
    // 0x3ea0e0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3ea0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x3ea0e4: 0x86432b54  lh          $v1, 0x2B54($s2)
    ctx->pc = 0x3ea0e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11092)));
    // 0x3ea0e8: 0x948400c4  lhu         $a0, 0xC4($a0)
    ctx->pc = 0x3ea0e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x3ea0ec: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3ea0ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ea0f0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3EA0F0u;
    {
        const bool branch_taken_0x3ea0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea0f0) {
            ctx->pc = 0x3EA120u;
            goto label_3ea120;
        }
    }
    ctx->pc = 0x3EA0F8u;
    // 0x3ea0f8: 0x86432b56  lh          $v1, 0x2B56($s2)
    ctx->pc = 0x3ea0f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11094)));
    // 0x3ea0fc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x3ea0fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ea100: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EA100u;
    {
        const bool branch_taken_0x3ea100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea100) {
            ctx->pc = 0x3EA120u;
            goto label_3ea120;
        }
    }
    ctx->pc = 0x3EA108u;
    // 0x3ea108: 0x86452b4e  lh          $a1, 0x2B4E($s2)
    ctx->pc = 0x3ea108u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11086)));
    // 0x3ea10c: 0x8e462b50  lw          $a2, 0x2B50($s2)
    ctx->pc = 0x3ea10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11088)));
    // 0x3ea110: 0xc097498  jal         func_25D260
    ctx->pc = 0x3EA110u;
    SET_GPR_U32(ctx, 31, 0x3EA118u);
    ctx->pc = 0x3EA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA110u;
    // 0x3ea114: 0x864400c2  lh          $a0, 0xC2($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3EA110u, 0x3EA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA118u;
label_3ea118:
    // 0x3ea118: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x3ea118u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ea11c: 0x0  nop
    ctx->pc = 0x3ea11cu;
    // NOP
label_3ea120:
    // 0x3ea120: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x3ea120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x3ea124: 0x106001b0  beqz        $v1, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x3EA124u;
    {
        const bool branch_taken_0x3ea124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea124) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA12Cu;
    // 0x3ea12c: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea12cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea130: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3ea130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ea134: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea134u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea138: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ea138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea13c: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x3ea13cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ea140: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea144: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x3ea144u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea148: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ea148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea14c: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x3ea14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x3ea150: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ea150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ea154: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x3ea154u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea158: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x3EA158u;
    {
        const bool branch_taken_0x3ea158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA158u;
        // 0x3ea15c: 0xa2402b9d  sb          $zero, 0x2B9D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 11165), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea158) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA160u;
label_3ea160:
    // 0x3ea160: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ea160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ea164: 0xa2420821  sb          $v0, 0x821($s2)
    ctx->pc = 0x3ea164u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
label_3ea168:
    // 0x3ea168: 0xc0fa4d4  jal         func_3E9350
    ctx->pc = 0x3EA168u;
    SET_GPR_U32(ctx, 31, 0x3EA170u);
    ctx->pc = 0x3EA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA168u;
    // 0x3ea16c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9350u, 0x3EA168u, 0x3EA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA170u;
label_3ea170:
    // 0x3ea170: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x3ea170u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ea174: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x3ea174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x3ea178: 0x1060019b  beqz        $v1, . + 4 + (0x19B << 2)
    ctx->pc = 0x3EA178u;
    {
        const bool branch_taken_0x3ea178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA178u;
        // 0x3ea17c: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea178) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA180u;
    // 0x3ea180: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3ea180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3ea184: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3EA184u;
    SET_GPR_U32(ctx, 31, 0x3EA18Cu);
    ctx->pc = 0x3EA188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA184u;
    // 0x3ea188: 0x24a549e0  addiu       $a1, $a1, 0x49E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3EA184u, 0x3EA18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA18Cu;
label_3ea18c:
    // 0x3ea18c: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3EA18Cu;
    SET_GPR_U32(ctx, 31, 0x3EA194u);
    ctx->pc = 0x3EA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA18Cu;
    // 0x3ea190: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3EA18Cu, 0x3EA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA194u;
label_3ea194:
    // 0x3ea194: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3ea194u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x3ea198: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3ea198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3ea19c: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3EA19Cu;
    SET_GPR_U32(ctx, 31, 0x3EA1A4u);
    ctx->pc = 0x3EA1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA19Cu;
    // 0x3ea1a0: 0x26452b70  addiu       $a1, $s2, 0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3EA19Cu, 0x3EA1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA1A4u;
label_3ea1a4:
    // 0x3ea1a4: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3EA1A4u;
    SET_GPR_U32(ctx, 31, 0x3EA1ACu);
    ctx->pc = 0x3EA1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA1A4u;
    // 0x3ea1a8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3EA1A4u, 0x3EA1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA1ACu;
label_3ea1ac:
    // 0x3ea1ac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ea1acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3ea1b0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3ea1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3ea1b4: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3EA1B4u;
    SET_GPR_U32(ctx, 31, 0x3EA1BCu);
    ctx->pc = 0x3EA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA1B4u;
    // 0x3ea1b8: 0x26452b60  addiu       $a1, $s2, 0x2B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3EA1B4u, 0x3EA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA1BCu;
label_3ea1bc:
    // 0x3ea1bc: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3EA1BCu;
    SET_GPR_U32(ctx, 31, 0x3EA1C4u);
    ctx->pc = 0x3EA1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA1BCu;
    // 0x3ea1c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3EA1BCu, 0x3EA1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA1C4u;
label_3ea1c4:
    // 0x3ea1c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ea1c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3ea1c8: 0x26442b70  addiu       $a0, $s2, 0x2B70
    ctx->pc = 0x3ea1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11120));
    // 0x3ea1cc: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3EA1CCu;
    SET_GPR_U32(ctx, 31, 0x3EA1D4u);
    ctx->pc = 0x3EA1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA1CCu;
    // 0x3ea1d0: 0x26452b60  addiu       $a1, $s2, 0x2B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3EA1CCu, 0x3EA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA1D4u;
label_3ea1d4:
    // 0x3ea1d4: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3EA1D4u;
    SET_GPR_U32(ctx, 31, 0x3EA1DCu);
    ctx->pc = 0x3EA1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA1D4u;
    // 0x3ea1d8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3EA1D4u, 0x3EA1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA1DCu;
label_3ea1dc:
    // 0x3ea1dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ea1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea1e0: 0x12240013  beq         $s1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3EA1E0u;
    {
        const bool branch_taken_0x3ea1e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x3EA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1E0u;
        // 0x3ea1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1e0) {
            ctx->pc = 0x3EA230u;
            goto label_3ea230;
        }
    }
    ctx->pc = 0x3EA1E8u;
    // 0x3ea1e8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EA1E8u;
    {
        const bool branch_taken_0x3ea1e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea1e8) {
            ctx->pc = 0x3EA1F8u;
            goto label_3ea1f8;
        }
    }
    ctx->pc = 0x3EA1F0u;
    // 0x3ea1f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3EA1F0u;
    {
        const bool branch_taken_0x3ea1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea1f0) {
            ctx->pc = 0x3EA258u;
            goto label_3ea258;
        }
    }
    ctx->pc = 0x3EA1F8u;
label_3ea1f8:
    // 0x3ea1f8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3ea1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x3ea1fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ea1fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea200: 0x0  nop
    ctx->pc = 0x3ea200u;
    // NOP
    // 0x3ea204: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x3ea204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea208: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x3EA208u;
    {
        const bool branch_taken_0x3ea208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA208u;
        // 0x3ea20c: 0x3c0343c8  lui         $v1, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea208) {
            ctx->pc = 0x3EA258u;
            goto label_3ea258;
        }
    }
    ctx->pc = 0x3EA210u;
    // 0x3ea210: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ea210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea214: 0x0  nop
    ctx->pc = 0x3ea214u;
    // NOP
    // 0x3ea218: 0x4601b036  c.le.s      $f22, $f1
    ctx->pc = 0x3ea218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea21c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3EA21Cu;
    {
        const bool branch_taken_0x3ea21c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea21c) {
            ctx->pc = 0x3EA258u;
            goto label_3ea258;
        }
    }
    ctx->pc = 0x3EA224u;
    // 0x3ea224: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x3ea224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3ea228: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3EA228u;
    {
        const bool branch_taken_0x3ea228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA228u;
        // 0x3ea22c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea228) {
            ctx->pc = 0x3EA258u;
            goto label_3ea258;
        }
    }
    ctx->pc = 0x3EA230u;
label_3ea230:
    // 0x3ea230: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3ea230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3ea234: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ea234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea238: 0x0  nop
    ctx->pc = 0x3ea238u;
    // NOP
    // 0x3ea23c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3ea23cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3ea240: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3ea240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea244: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3EA244u;
    {
        const bool branch_taken_0x3ea244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea244) {
            ctx->pc = 0x3EA258u;
            goto label_3ea258;
        }
    }
    ctx->pc = 0x3EA24Cu;
    // 0x3ea24c: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x3ea24cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3ea250: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3ea250u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3ea254: 0x0  nop
    ctx->pc = 0x3ea254u;
    // NOP
label_3ea258:
    // 0x3ea258: 0x10a000d1  beqz        $a1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x3EA258u;
    {
        const bool branch_taken_0x3ea258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea258) {
            ctx->pc = 0x3EA5A0u;
            goto label_3ea5a0;
        }
    }
    ctx->pc = 0x3EA260u;
    // 0x3ea260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ea260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea264: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3EA264u;
    {
        const bool branch_taken_0x3ea264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ea264) {
            ctx->pc = 0x3EA2A0u;
            goto label_3ea2a0;
        }
    }
    ctx->pc = 0x3EA26Cu;
    // 0x3ea26c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EA26Cu;
    {
        const bool branch_taken_0x3ea26c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea26c) {
            ctx->pc = 0x3EA280u;
            goto label_3ea280;
        }
    }
    ctx->pc = 0x3EA274u;
    // 0x3ea274: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3EA274u;
    {
        const bool branch_taken_0x3ea274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea274) {
            ctx->pc = 0x3EA2B8u;
            goto label_3ea2b8;
        }
    }
    ctx->pc = 0x3EA27Cu;
    // 0x3ea27c: 0x0  nop
    ctx->pc = 0x3ea27cu;
    // NOP
label_3ea280:
    // 0x3ea280: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3ea280u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3ea284: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ea284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ea288: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3ea288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3ea28c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EA28Cu;
    SET_GPR_U32(ctx, 31, 0x3EA294u);
    ctx->pc = 0x3EA290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA28Cu;
    // 0x3ea290: 0x24c649e0  addiu       $a2, $a2, 0x49E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EA28Cu, 0x3EA294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA294u;
label_3ea294:
    // 0x3ea294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EA294u;
    {
        const bool branch_taken_0x3ea294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea294) {
            ctx->pc = 0x3EA2B8u;
            goto label_3ea2b8;
        }
    }
    ctx->pc = 0x3EA29Cu;
    // 0x3ea29c: 0x0  nop
    ctx->pc = 0x3ea29cu;
    // NOP
label_3ea2a0:
    // 0x3ea2a0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3ea2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3ea2a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ea2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ea2a8: 0x24a549e0  addiu       $a1, $a1, 0x49E0
    ctx->pc = 0x3ea2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18912));
    // 0x3ea2ac: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EA2ACu;
    SET_GPR_U32(ctx, 31, 0x3EA2B4u);
    ctx->pc = 0x3EA2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA2ACu;
    // 0x3ea2b0: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EA2ACu, 0x3EA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA2B4u;
label_3ea2b4:
    // 0x3ea2b4: 0x0  nop
    ctx->pc = 0x3ea2b4u;
    // NOP
label_3ea2b8:
    // 0x3ea2b8: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3EA2B8u;
    SET_GPR_U32(ctx, 31, 0x3EA2C0u);
    ctx->pc = 0x3EA2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA2B8u;
    // 0x3ea2bc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3EA2B8u, 0x3EA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA2C0u;
label_3ea2c0:
    // 0x3ea2c0: 0xa6422b4e  sh          $v0, 0x2B4E($s2)
    ctx->pc = 0x3ea2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11086), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ea2c4: 0x86452b4e  lh          $a1, 0x2B4E($s2)
    ctx->pc = 0x3ea2c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11086)));
    // 0x3ea2c8: 0xc0974b8  jal         func_25D2E0
    ctx->pc = 0x3EA2C8u;
    SET_GPR_U32(ctx, 31, 0x3EA2D0u);
    ctx->pc = 0x3EA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA2C8u;
    // 0x3ea2cc: 0x864400c2  lh          $a0, 0xC2($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D2E0u, 0x3EA2C8u, 0x3EA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA2D0u;
label_3ea2d0:
    // 0x3ea2d0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3ea2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ea2d4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3ea2d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3ea2d8: 0x28a10200  slti        $at, $a1, 0x200
    ctx->pc = 0x3ea2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3ea2dc: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x3EA2DCu;
    {
        const bool branch_taken_0x3ea2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea2dc) {
            ctx->pc = 0x3EA438u;
            goto label_3ea438;
        }
    }
    ctx->pc = 0x3EA2E4u;
    // 0x3ea2e4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ea2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ea2e8: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x3ea2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x3ea2ec: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ea2ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ea2f0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ea2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ea2f4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ea2f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ea2f8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ea2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ea2fc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ea2fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ea300: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ea300u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ea304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ea308: 0x0  nop
    ctx->pc = 0x3ea308u;
    // NOP
    // 0x3ea30c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ea30cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ea310: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea314: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EA314u;
    {
        const bool branch_taken_0x3ea314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea314) {
            ctx->pc = 0x3EA32Cu;
            goto label_3ea32c;
        }
    }
    ctx->pc = 0x3EA31Cu;
    // 0x3ea31c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea31cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea320: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea324: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EA324u;
    {
        const bool branch_taken_0x3ea324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA324u;
        // 0x3ea328: 0xa4001b  divu        $zero, $a1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea324) {
            ctx->pc = 0x3EA348u;
            goto label_3ea348;
        }
    }
    ctx->pc = 0x3EA32Cu;
label_3ea32c:
    // 0x3ea32c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ea32cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ea330: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea334: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea334u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea338: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea33c: 0x0  nop
    ctx->pc = 0x3ea33cu;
    // NOP
    // 0x3ea340: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ea340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ea344: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x3ea344u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_3ea348:
    // 0x3ea348: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ea348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ea34c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3ea34cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ea350: 0x2812  mflo        $a1
    ctx->pc = 0x3ea350u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x3ea354: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ea354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ea358: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ea358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ea35c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ea35cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea360: 0xae452b50  sw          $a1, 0x2B50($s2)
    ctx->pc = 0x3ea360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11088), GPR_U32(ctx, 5));
    // 0x3ea364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ea364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ea368: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ea368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ea36c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ea36cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ea370: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ea370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ea374: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea378: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EA378u;
    {
        const bool branch_taken_0x3ea378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea378) {
            ctx->pc = 0x3EA390u;
            goto label_3ea390;
        }
    }
    ctx->pc = 0x3EA380u;
    // 0x3ea380: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea384: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EA388u;
    {
        const bool branch_taken_0x3ea388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA388u;
        // 0x3ea38c: 0xa6442b54  sh          $a0, 0x2B54($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11092), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea388) {
            ctx->pc = 0x3EA3ACu;
            goto label_3ea3ac;
        }
    }
    ctx->pc = 0x3EA390u;
label_3ea390:
    // 0x3ea390: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ea390u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ea394: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea398: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea39c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea39cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea3a0: 0x0  nop
    ctx->pc = 0x3ea3a0u;
    // NOP
    // 0x3ea3a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ea3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ea3a8: 0xa6442b54  sh          $a0, 0x2B54($s2)
    ctx->pc = 0x3ea3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11092), (uint16_t)GPR_U32(ctx, 4));
label_3ea3ac:
    // 0x3ea3ac: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x3ea3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x3ea3b0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ea3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ea3b4: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3ea3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3ea3b8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ea3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ea3bc: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3ea3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3ea3c0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ea3c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea3c4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ea3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ea3c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ea3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ea3cc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ea3ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ea3d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ea3d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ea3d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea3d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea3d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EA3D8u;
    {
        const bool branch_taken_0x3ea3d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea3d8) {
            ctx->pc = 0x3EA3F0u;
            goto label_3ea3f0;
        }
    }
    ctx->pc = 0x3EA3E0u;
    // 0x3ea3e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea3e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea3e4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea3e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea3e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EA3E8u;
    {
        const bool branch_taken_0x3ea3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3E8u;
        // 0x3ea3ec: 0xa6442b56  sh          $a0, 0x2B56($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11094), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea3e8) {
            ctx->pc = 0x3EA40Cu;
            goto label_3ea40c;
        }
    }
    ctx->pc = 0x3EA3F0u;
label_3ea3f0:
    // 0x3ea3f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ea3f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ea3f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea3f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea3f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea3fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea3fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea400: 0x0  nop
    ctx->pc = 0x3ea400u;
    // NOP
    // 0x3ea404: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ea404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ea408: 0xa6442b56  sh          $a0, 0x2B56($s2)
    ctx->pc = 0x3ea408u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11094), (uint16_t)GPR_U32(ctx, 4));
label_3ea40c:
    // 0x3ea40c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea410: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea410u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea414: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x3ea414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3ea418: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea418u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea41c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ea41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea420: 0xa64507f2  sh          $a1, 0x7F2($s2)
    ctx->pc = 0x3ea420u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ea424: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ea424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea428: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x3ea428u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea42c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x3EA42Cu;
    {
        const bool branch_taken_0x3ea42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA42Cu;
        // 0x3ea430: 0xae4307ec  sw          $v1, 0x7EC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea42c) {
            ctx->pc = 0x3EA590u;
            goto label_3ea590;
        }
    }
    ctx->pc = 0x3EA434u;
    // 0x3ea434: 0x0  nop
    ctx->pc = 0x3ea434u;
    // NOP
label_3ea438:
    // 0x3ea438: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x3ea438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x3ea43c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ea43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ea440: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3ea440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3ea444: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ea444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ea448: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3ea448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3ea44c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ea44cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea450: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ea450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ea454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ea454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ea458: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ea458u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ea45c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ea45cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ea460: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea464: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EA464u;
    {
        const bool branch_taken_0x3ea464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea464) {
            ctx->pc = 0x3EA47Cu;
            goto label_3ea47c;
        }
    }
    ctx->pc = 0x3EA46Cu;
    // 0x3ea46c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea46cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea470: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EA474u;
    {
        const bool branch_taken_0x3ea474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA474u;
        // 0x3ea478: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea474) {
            ctx->pc = 0x3EA498u;
            goto label_3ea498;
        }
    }
    ctx->pc = 0x3EA47Cu;
label_3ea47c:
    // 0x3ea47c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ea47cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ea480: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea484: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea488: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea48c: 0x0  nop
    ctx->pc = 0x3ea48cu;
    // NOP
    // 0x3ea490: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ea490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ea494: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x3ea494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_3ea498:
    // 0x3ea498: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x3ea498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x3ea49c: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x3ea49cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3ea4a0: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x3ea4a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ea4a4: 0x0  nop
    ctx->pc = 0x3ea4a4u;
    // NOP
    // 0x3ea4a8: 0x3012  mflo        $a2
    ctx->pc = 0x3ea4a8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3ea4ac: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ea4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ea4b0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ea4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ea4b4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ea4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ea4b8: 0xae462b50  sw          $a2, 0x2B50($s2)
    ctx->pc = 0x3ea4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11088), GPR_U32(ctx, 6));
    // 0x3ea4bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ea4bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea4c0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ea4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ea4c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ea4c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ea4c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ea4c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ea4cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ea4ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ea4d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea4d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea4d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EA4D4u;
    {
        const bool branch_taken_0x3ea4d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea4d4) {
            ctx->pc = 0x3EA4ECu;
            goto label_3ea4ec;
        }
    }
    ctx->pc = 0x3EA4DCu;
    // 0x3ea4dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea4dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea4e0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea4e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea4e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EA4E4u;
    {
        const bool branch_taken_0x3ea4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4E4u;
        // 0x3ea4e8: 0xa6442b54  sh          $a0, 0x2B54($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11092), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea4e4) {
            ctx->pc = 0x3EA508u;
            goto label_3ea508;
        }
    }
    ctx->pc = 0x3EA4ECu;
label_3ea4ec:
    // 0x3ea4ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ea4ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ea4f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea4f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea4f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea4f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea4f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea4fc: 0x0  nop
    ctx->pc = 0x3ea4fcu;
    // NOP
    // 0x3ea500: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ea500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ea504: 0xa6442b54  sh          $a0, 0x2B54($s2)
    ctx->pc = 0x3ea504u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11092), (uint16_t)GPR_U32(ctx, 4));
label_3ea508:
    // 0x3ea508: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3ea508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x3ea50c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ea50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ea510: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3ea510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3ea514: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ea514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ea518: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3ea518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3ea51c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ea51cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea520: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ea520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ea524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ea524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ea528: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ea528u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ea52c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ea52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ea530: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea534: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EA534u;
    {
        const bool branch_taken_0x3ea534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea534) {
            ctx->pc = 0x3EA54Cu;
            goto label_3ea54c;
        }
    }
    ctx->pc = 0x3EA53Cu;
    // 0x3ea53c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea53cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea540: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EA544u;
    {
        const bool branch_taken_0x3ea544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA544u;
        // 0x3ea548: 0xa6442b56  sh          $a0, 0x2B56($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11094), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea544) {
            ctx->pc = 0x3EA568u;
            goto label_3ea568;
        }
    }
    ctx->pc = 0x3EA54Cu;
label_3ea54c:
    // 0x3ea54c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ea54cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ea550: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea554: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ea554u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ea558: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ea558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ea55c: 0x0  nop
    ctx->pc = 0x3ea55cu;
    // NOP
    // 0x3ea560: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ea560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ea564: 0xa6442b56  sh          $a0, 0x2B56($s2)
    ctx->pc = 0x3ea564u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11094), (uint16_t)GPR_U32(ctx, 4));
label_3ea568:
    // 0x3ea568: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea56c: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea56cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea570: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x3ea570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x3ea574: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea574u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea578: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ea578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea57c: 0xa64507f2  sh          $a1, 0x7F2($s2)
    ctx->pc = 0x3ea57cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ea580: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ea580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea584: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x3ea584u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea588: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x3ea588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x3ea58c: 0x0  nop
    ctx->pc = 0x3ea58cu;
    // NOP
label_3ea590:
    // 0x3ea590: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ea590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ea594: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x3EA594u;
    {
        const bool branch_taken_0x3ea594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA594u;
        // 0x3ea598: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea594) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA59Cu;
    // 0x3ea59c: 0x0  nop
    ctx->pc = 0x3ea59cu;
    // NOP
label_3ea5a0:
    // 0x3ea5a0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3ea5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3ea5a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ea5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea5a8: 0x0  nop
    ctx->pc = 0x3ea5a8u;
    // NOP
    // 0x3ea5ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3ea5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3ea5b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3ea5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea5b4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x3EA5B4u;
    {
        const bool branch_taken_0x3ea5b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea5b4) {
            ctx->pc = 0x3EA600u;
            goto label_3ea600;
        }
    }
    ctx->pc = 0x3EA5BCu;
    // 0x3ea5bc: 0x92442b9c  lbu         $a0, 0x2B9C($s2)
    ctx->pc = 0x3ea5bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11164)));
    // 0x3ea5c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ea5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea5c4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3EA5C4u;
    {
        const bool branch_taken_0x3ea5c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ea5c4) {
            ctx->pc = 0x3EA600u;
            goto label_3ea600;
        }
    }
    ctx->pc = 0x3EA5CCu;
    // 0x3ea5cc: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea5d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea5d4: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea5d8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ea5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea5dc: 0xa64007f2  sh          $zero, 0x7F2($s2)
    ctx->pc = 0x3ea5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ea5e0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ea5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea5e4: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x3ea5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea5e8: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x3ea5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x3ea5ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3ea5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ea5f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ea5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ea5f4: 0xa2440821  sb          $a0, 0x821($s2)
    ctx->pc = 0x3ea5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea5f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3EA5F8u;
    {
        const bool branch_taken_0x3ea5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5F8u;
        // 0x3ea5fc: 0xa2432b9c  sb          $v1, 0x2B9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 11164), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea5f8) {
            ctx->pc = 0x3EA630u;
            goto label_3ea630;
        }
    }
    ctx->pc = 0x3EA600u;
label_3ea600:
    // 0x3ea600: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea600u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea604: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea604u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea608: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3ea608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ea60c: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x3ea60cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ea610: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ea610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea614: 0xa24307f5  sb          $v1, 0x7F5($s2)
    ctx->pc = 0x3ea614u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea618: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea61c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3ea61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea620: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ea620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ea624: 0xae4407ec  sw          $a0, 0x7EC($s2)
    ctx->pc = 0x3ea624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
    // 0x3ea628: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x3ea628u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea62c: 0x0  nop
    ctx->pc = 0x3ea62cu;
    // NOP
label_3ea630:
    // 0x3ea630: 0x92432b9d  lbu         $v1, 0x2B9D($s2)
    ctx->pc = 0x3ea630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11165)));
    // 0x3ea634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ea634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ea638: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3EA638u;
    {
        const bool branch_taken_0x3ea638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA638u;
        // 0x3ea63c: 0xa2432b9d  sb          $v1, 0x2B9D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 11165), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea638) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA640u;
label_3ea640:
    // 0x3ea640: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ea640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ea644: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x3ea644u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ea648:
    // 0x3ea648: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3ea648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x3ea64c: 0x86432b54  lh          $v1, 0x2B54($s2)
    ctx->pc = 0x3ea64cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11092)));
    // 0x3ea650: 0x948400c4  lhu         $a0, 0xC4($a0)
    ctx->pc = 0x3ea650u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x3ea654: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3ea654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ea658: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3EA658u;
    {
        const bool branch_taken_0x3ea658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea658) {
            ctx->pc = 0x3EA688u;
            goto label_3ea688;
        }
    }
    ctx->pc = 0x3EA660u;
    // 0x3ea660: 0x86432b56  lh          $v1, 0x2B56($s2)
    ctx->pc = 0x3ea660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11094)));
    // 0x3ea664: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x3ea664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ea668: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EA668u;
    {
        const bool branch_taken_0x3ea668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea668) {
            ctx->pc = 0x3EA688u;
            goto label_3ea688;
        }
    }
    ctx->pc = 0x3EA670u;
    // 0x3ea670: 0x86452b4e  lh          $a1, 0x2B4E($s2)
    ctx->pc = 0x3ea670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11086)));
    // 0x3ea674: 0x8e462b50  lw          $a2, 0x2B50($s2)
    ctx->pc = 0x3ea674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11088)));
    // 0x3ea678: 0xc097498  jal         func_25D260
    ctx->pc = 0x3EA678u;
    SET_GPR_U32(ctx, 31, 0x3EA680u);
    ctx->pc = 0x3EA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA678u;
    // 0x3ea67c: 0x864400c2  lh          $a0, 0xC2($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3EA678u, 0x3EA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA680u;
label_3ea680:
    // 0x3ea680: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x3ea680u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ea684: 0x0  nop
    ctx->pc = 0x3ea684u;
    // NOP
label_3ea688:
    // 0x3ea688: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x3ea688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x3ea68c: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x3EA68Cu;
    {
        const bool branch_taken_0x3ea68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA68Cu;
        // 0x3ea690: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea68c) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA694u;
    // 0x3ea694: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3EA694u;
    {
        const bool branch_taken_0x3ea694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA694u;
        // 0x3ea698: 0xa2430780  sb          $v1, 0x780($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea694) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA69Cu;
    // 0x3ea69c: 0x0  nop
    ctx->pc = 0x3ea69cu;
    // NOP
label_3ea6a0:
    // 0x3ea6a0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3ea6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ea6a4: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x3ea6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ea6a8:
    // 0x3ea6a8: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x3ea6a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x3ea6ac: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x3EA6ACu;
    {
        const bool branch_taken_0x3ea6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea6ac) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA6B4u;
    // 0x3ea6b4: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea6b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ea6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea6bc: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea6c0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ea6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea6c4: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x3ea6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ea6c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea6cc: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x3ea6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea6d0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ea6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea6d4: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x3ea6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x3ea6d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ea6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ea6dc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3EA6DCu;
    {
        const bool branch_taken_0x3ea6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6DCu;
        // 0x3ea6e0: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea6dc) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA6E4u;
    // 0x3ea6e4: 0x0  nop
    ctx->pc = 0x3ea6e4u;
    // NOP
label_3ea6e8:
    // 0x3ea6e8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3ea6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ea6ec: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x3ea6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea6f0: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3ea6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ea6f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3ea6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3ea6f8: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x3ea6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x3ea6fc: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3ea6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ea700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ea700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ea704: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ea704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3ea708: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3ea708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3ea70c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3ea70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3ea710: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ea710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3ea714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ea714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ea718: 0xa6432b20  sh          $v1, 0x2B20($s2)
    ctx->pc = 0x3ea718u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11040), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ea71c: 0x0  nop
    ctx->pc = 0x3ea71cu;
    // NOP
label_3ea720:
    // 0x3ea720: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x3ea720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x3ea724: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3EA724u;
    {
        const bool branch_taken_0x3ea724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea724) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA72Cu;
    // 0x3ea72c: 0x86432b20  lh          $v1, 0x2B20($s2)
    ctx->pc = 0x3ea72cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x3ea730: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EA730u;
    {
        const bool branch_taken_0x3ea730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea730) {
            ctx->pc = 0x3EA740u;
            goto label_3ea740;
        }
    }
    ctx->pc = 0x3EA738u;
    // 0x3ea738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ea738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ea73c: 0xa6432b20  sh          $v1, 0x2B20($s2)
    ctx->pc = 0x3ea73cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11040), (uint16_t)GPR_U32(ctx, 3));
label_3ea740:
    // 0x3ea740: 0x86432b20  lh          $v1, 0x2B20($s2)
    ctx->pc = 0x3ea740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x3ea744: 0x1c60000e  bgtz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3EA744u;
    {
        const bool branch_taken_0x3ea744 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3ea744) {
            ctx->pc = 0x3EA780u;
            goto label_3ea780;
        }
    }
    ctx->pc = 0x3EA74Cu;
    // 0x3ea74c: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea74cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea750: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ea750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ea754: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea754u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea758: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ea758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea75c: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x3ea75cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ea760: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea764: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x3ea764u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea768: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ea768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea76c: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x3ea76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x3ea770: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ea770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ea774: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3EA774u;
    {
        const bool branch_taken_0x3ea774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA774u;
        // 0x3ea778: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea774) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA77Cu;
    // 0x3ea77c: 0x0  nop
    ctx->pc = 0x3ea77cu;
    // NOP
label_3ea780:
    // 0x3ea780: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea780u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea784: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea784u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ea788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea78c: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x3ea78cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ea790: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ea790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea794: 0xa24307f5  sb          $v1, 0x7F5($s2)
    ctx->pc = 0x3ea794u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ea798: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea79c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ea79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea7a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3EA7A0u;
    {
        const bool branch_taken_0x3ea7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7A0u;
        // 0x3ea7a4: 0xae4307ec  sw          $v1, 0x7EC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7a0) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA7A8u;
label_3ea7a8:
    // 0x3ea7a8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3ea7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ea7ac: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x3ea7acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ea7b0:
    // 0x3ea7b0: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x3ea7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x3ea7b4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3EA7B4u;
    {
        const bool branch_taken_0x3ea7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea7b4) {
            ctx->pc = 0x3EA7E8u;
            goto label_3ea7e8;
        }
    }
    ctx->pc = 0x3EA7BCu;
    // 0x3ea7bc: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x3ea7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea7c0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3ea7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ea7c4: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x3ea7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea7c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3ea7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ea7cc: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x3ea7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ea7d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ea7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea7d4: 0xa24407f5  sb          $a0, 0x7F5($s2)
    ctx->pc = 0x3ea7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ea7d8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3ea7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ea7dc: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x3ea7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x3ea7e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ea7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ea7e4: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x3ea7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3ea7e8:
    // 0x3ea7e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ea7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ea7ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ea7ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ea7f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3ea7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3ea7f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ea7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ea7f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ea7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ea7fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ea7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ea800: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ea800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ea804: 0x3e00008  jr          $ra
    ctx->pc = 0x3EA804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA804u;
        // 0x3ea808: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EA80Cu;
}
