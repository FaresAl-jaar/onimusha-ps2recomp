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

// Function: sub_002E2CA0
// Address: 0x2e2ca0 - 0x2e30fc
void sub_002E2CA0_0x2e2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2CA0_0x2e2ca0");
#endif

    switch (ctx->pc) {
        case 0x2e2ce8u: goto label_2e2ce8;
        case 0x2e2d10u: goto label_2e2d10;
        case 0x2e2d88u: goto label_2e2d88;
        case 0x2e2d98u: goto label_2e2d98;
        case 0x2e2db0u: goto label_2e2db0;
        case 0x2e2e0cu: goto label_2e2e0c;
        case 0x2e2e28u: goto label_2e2e28;
        case 0x2e2e50u: goto label_2e2e50;
        case 0x2e2eacu: goto label_2e2eac;
        case 0x2e2ec8u: goto label_2e2ec8;
        case 0x2e2f18u: goto label_2e2f18;
        case 0x2e2f70u: goto label_2e2f70;
        case 0x2e2f88u: goto label_2e2f88;
        case 0x2e2fc0u: goto label_2e2fc0;
        case 0x2e3018u: goto label_2e3018;
        case 0x2e3030u: goto label_2e3030;
        case 0x2e3060u: goto label_2e3060;
        case 0x2e30b4u: goto label_2e30b4;
        default: break;
    }

    ctx->pc = 0x2e2ca0u;

    // 0x2e2ca0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e2ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e2ca4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e2ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e2ca8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e2ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e2cac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e2cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e2cb0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e2cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e2cb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e2cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e2cb8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e2cb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e2cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e2cc0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e2cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e2cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e2cc8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e2cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ccc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2cd0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e2cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cd4: 0x126000fe  beqz        $s3, . + 4 + (0xFE << 2)
    ctx->pc = 0x2E2CD4u;
    {
        const bool branch_taken_0x2e2cd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CD4u;
        // 0x2e2cd8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cd4) {
            ctx->pc = 0x2E30D0u;
            goto label_2e30d0;
        }
    }
    ctx->pc = 0x2E2CDCu;
    // 0x2e2cdc: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x2e2cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e2ce0: 0xc0b8c40  jal         func_2E3100
    ctx->pc = 0x2E2CE0u;
    SET_GPR_U32(ctx, 31, 0x2E2CE8u);
    ctx->pc = 0x2E2CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2CE0u;
    // 0x2e2ce4: 0x38450001  xori        $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3100u, 0x2E2CE0u, 0x2E2CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CE8u;
label_2e2ce8:
    // 0x2e2ce8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2e2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2e2cec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cf0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2e2cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2e2cf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e2cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cf8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2e2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2e2cfc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2e2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e2d00: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x2e2d00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2e2d04: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x2e2d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2d08: 0xc0b8e1c  jal         func_2E3870
    ctx->pc = 0x2E2D08u;
    SET_GPR_U32(ctx, 31, 0x2E2D10u);
    ctx->pc = 0x2E2D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2D08u;
    // 0x2e2d0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3870u, 0x2E2D08u, 0x2E2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D10u;
label_2e2d10:
    // 0x2e2d10: 0x96830006  lhu         $v1, 0x6($s4)
    ctx->pc = 0x2e2d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2e2d14: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2D14u;
    {
        const bool branch_taken_0x2e2d14 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2E2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D14u;
        // 0x2e2d18: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d14) {
            ctx->pc = 0x2E2D28u;
            goto label_2e2d28;
        }
    }
    ctx->pc = 0x2E2D1Cu;
    // 0x2e2d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2d20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2D20u;
    {
        const bool branch_taken_0x2e2d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D20u;
        // 0x2e2d24: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d20) {
            ctx->pc = 0x2E2D40u;
            goto label_2e2d40;
        }
    }
    ctx->pc = 0x2E2D28u;
label_2e2d28:
    // 0x2e2d28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2d2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e2d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e2d30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e2d30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2d34: 0x0  nop
    ctx->pc = 0x2e2d34u;
    // NOP
    // 0x2e2d38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e2d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e2d3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e2d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e2d40:
    // 0x2e2d40: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2e2d44: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x2e2d44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e2d48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2d4c: 0x0  nop
    ctx->pc = 0x2e2d4cu;
    // NOP
    // 0x2e2d50: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2e2d50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e2d54: 0x0  nop
    ctx->pc = 0x2e2d54u;
    // NOP
    // 0x2e2d58: 0x41f7c  dsll32      $v1, $a0, 29
    ctx->pc = 0x2e2d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 29));
    // 0x2e2d5c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x2e2d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x2e2d60: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2E2D60u;
    {
        const bool branch_taken_0x2e2d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D60u;
        // 0x2e2d64: 0x30030001  andi        $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d60) {
            ctx->pc = 0x2E2EF8u;
            goto label_2e2ef8;
        }
    }
    ctx->pc = 0x2E2D68u;
    // 0x2e2d68: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2e2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2e2d6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2e2d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2e2d70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e2d74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e2d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e2d78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d7c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x2e2d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2d80: 0xc0b8cac  jal         func_2E32B0
    ctx->pc = 0x2E2D80u;
    SET_GPR_U32(ctx, 31, 0x2E2D88u);
    ctx->pc = 0x2E2D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2D80u;
    // 0x2e2d84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E32B0u, 0x2E2D80u, 0x2E2D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D88u;
label_2e2d88:
    // 0x2e2d88: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x2e2d88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2e2d8c: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2e2d8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e2d90: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x2E2D90u;
    {
        const bool branch_taken_0x2e2d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D90u;
        // 0x2e2d94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d90) {
            ctx->pc = 0x2E2EF8u;
            goto label_2e2ef8;
        }
    }
    ctx->pc = 0x2E2D98u;
label_2e2d98:
    // 0x2e2d98: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2e2d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e2d9c: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x2e2d9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e2da0: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x2e2da0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e2da4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E2DA4u;
    {
        const bool branch_taken_0x2e2da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DA4u;
        // 0x2e2da8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2da4) {
            ctx->pc = 0x2E2E40u;
            goto label_2e2e40;
        }
    }
    ctx->pc = 0x2E2DACu;
    // 0x2e2dac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e2dacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2db0:
    // 0x2e2db0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e2db4: 0x32c500ff  andi        $a1, $s6, 0xFF
    ctx->pc = 0x2e2db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2e2db8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e2db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e2dbc: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x2e2dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x2e2dc0: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x2e2dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e2dc4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2e2dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e2dc8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2e2dc8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e2dcc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2DCCu;
    {
        const bool branch_taken_0x2e2dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2dcc) {
            ctx->pc = 0x2E2E28u;
            goto label_2e2e28;
        }
    }
    ctx->pc = 0x2E2DD4u;
    // 0x2e2dd4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2e2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2e2dd8: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2e2dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e2ddc: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2e2ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e2de0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2de4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2DE4u;
    {
        const bool branch_taken_0x2e2de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2de4) {
            ctx->pc = 0x2E2E28u;
            goto label_2e2e28;
        }
    }
    ctx->pc = 0x2E2DECu;
    // 0x2e2dec: 0x96830006  lhu         $v1, 0x6($s4)
    ctx->pc = 0x2e2decu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2e2df0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2e2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e2df4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2DF4u;
    {
        const bool branch_taken_0x2e2df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DF4u;
        // 0x2e2df8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2df4) {
            ctx->pc = 0x2E2E18u;
            goto label_2e2e18;
        }
    }
    ctx->pc = 0x2E2DFCu;
    // 0x2e2dfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e2dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e2e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e04: 0xc0b90f0  jal         func_2E43C0
    ctx->pc = 0x2E2E04u;
    SET_GPR_U32(ctx, 31, 0x2E2E0Cu);
    ctx->pc = 0x2E2E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2E04u;
    // 0x2e2e08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E43C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E43C0u, 0x2E2E04u, 0x2E2E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E0Cu;
label_2e2e0c:
    // 0x2e2e0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2E0Cu;
    {
        const bool branch_taken_0x2e2e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e0c) {
            ctx->pc = 0x2E2E28u;
            goto label_2e2e28;
        }
    }
    ctx->pc = 0x2E2E14u;
    // 0x2e2e14: 0x0  nop
    ctx->pc = 0x2e2e14u;
    // NOP
label_2e2e18:
    // 0x2e2e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e2e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e20: 0xc0b8e90  jal         func_2E3A40
    ctx->pc = 0x2E2E20u;
    SET_GPR_U32(ctx, 31, 0x2E2E28u);
    ctx->pc = 0x2E2E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2E20u;
    // 0x2e2e24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A40u, 0x2E2E20u, 0x2E2E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E28u;
label_2e2e28:
    // 0x2e2e28: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2e2e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e2e2c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2e2e2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2e2e30: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x2e2e30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e2e34: 0x2c5202a  slt         $a0, $s6, $a1
    ctx->pc = 0x2e2e34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e2e38: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2E2E38u;
    {
        const bool branch_taken_0x2e2e38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E38u;
        // 0x2e2e3c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e38) {
            ctx->pc = 0x2E2DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2db0;
        }
    }
    ctx->pc = 0x2E2E40u;
label_2e2e40:
    // 0x2e2e40: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x2e2e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e2e44: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E2E44u;
    {
        const bool branch_taken_0x2e2e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E44u;
        // 0x2e2e48: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e44) {
            ctx->pc = 0x2E2EE0u;
            goto label_2e2ee0;
        }
    }
    ctx->pc = 0x2E2E4Cu;
    // 0x2e2e4c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e2e4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2e50:
    // 0x2e2e50: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e2e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e2e54: 0x32c500ff  andi        $a1, $s6, 0xFF
    ctx->pc = 0x2e2e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2e2e58: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e2e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e2e5c: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x2e2e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x2e2e60: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x2e2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e2e64: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2e2e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e2e68: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2e2e68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e2e6c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2E6Cu;
    {
        const bool branch_taken_0x2e2e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e6c) {
            ctx->pc = 0x2E2EC8u;
            goto label_2e2ec8;
        }
    }
    ctx->pc = 0x2E2E74u;
    // 0x2e2e74: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2e2e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2e2e78: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2e2e78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e2e7c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2e2e7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e2e80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2e84: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2E84u;
    {
        const bool branch_taken_0x2e2e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e84) {
            ctx->pc = 0x2E2EC8u;
            goto label_2e2ec8;
        }
    }
    ctx->pc = 0x2E2E8Cu;
    // 0x2e2e8c: 0x96830006  lhu         $v1, 0x6($s4)
    ctx->pc = 0x2e2e8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2e2e90: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2e2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e2e94: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2E94u;
    {
        const bool branch_taken_0x2e2e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E94u;
        // 0x2e2e98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e94) {
            ctx->pc = 0x2E2EB8u;
            goto label_2e2eb8;
        }
    }
    ctx->pc = 0x2E2E9Cu;
    // 0x2e2e9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e2e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ea0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e2ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ea4: 0xc0b90f0  jal         func_2E43C0
    ctx->pc = 0x2E2EA4u;
    SET_GPR_U32(ctx, 31, 0x2E2EACu);
    ctx->pc = 0x2E2EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2EA4u;
    // 0x2e2ea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E43C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E43C0u, 0x2E2EA4u, 0x2E2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2EACu;
label_2e2eac:
    // 0x2e2eac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2EACu;
    {
        const bool branch_taken_0x2e2eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2eac) {
            ctx->pc = 0x2E2EC8u;
            goto label_2e2ec8;
        }
    }
    ctx->pc = 0x2E2EB4u;
    // 0x2e2eb4: 0x0  nop
    ctx->pc = 0x2e2eb4u;
    // NOP
label_2e2eb8:
    // 0x2e2eb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ebc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e2ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ec0: 0xc0b8e90  jal         func_2E3A40
    ctx->pc = 0x2E2EC0u;
    SET_GPR_U32(ctx, 31, 0x2E2EC8u);
    ctx->pc = 0x2E2EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2EC0u;
    // 0x2e2ec4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A40u, 0x2E2EC0u, 0x2E2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2EC8u;
label_2e2ec8:
    // 0x2e2ec8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2e2ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e2ecc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2e2eccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2e2ed0: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x2e2ed0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e2ed4: 0x2c4202a  slt         $a0, $s6, $a0
    ctx->pc = 0x2e2ed4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e2ed8: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2E2ED8u;
    {
        const bool branch_taken_0x2e2ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2ED8u;
        // 0x2e2edc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ed8) {
            ctx->pc = 0x2E2E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2e50;
        }
    }
    ctx->pc = 0x2E2EE0u;
label_2e2ee0:
    // 0x2e2ee0: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x2e2ee0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2e2ee4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e2ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e2ee8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2e2ee8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e2eec: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2E2EECu;
    {
        const bool branch_taken_0x2e2eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2eec) {
            ctx->pc = 0x2E2D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2d98;
        }
    }
    ctx->pc = 0x2E2EF4u;
    // 0x2e2ef4: 0x0  nop
    ctx->pc = 0x2e2ef4u;
    // NOP
label_2e2ef8:
    // 0x2e2ef8: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E2EF8u;
    {
        const bool branch_taken_0x2e2ef8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ef8) {
            ctx->pc = 0x2E2FA0u;
            goto label_2e2fa0;
        }
    }
    ctx->pc = 0x2E2F00u;
    // 0x2e2f00: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2e2f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e2f04: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x2e2f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2f08: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2e2f08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2f0c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E2F0Cu;
    {
        const bool branch_taken_0x2e2f0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F0Cu;
        // 0x2e2f10: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f0c) {
            ctx->pc = 0x2E2FA0u;
            goto label_2e2fa0;
        }
    }
    ctx->pc = 0x2E2F14u;
    // 0x2e2f14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e2f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2f18:
    // 0x2e2f18: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2e2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e2f1c: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x2e2f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2e2f20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2f24: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2e2f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2e2f28: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x2e2f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2e2f2c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2f30: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2e2f30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e2f34: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E2F34u;
    {
        const bool branch_taken_0x2e2f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F34u;
        // 0x2e2f38: 0xb01821  addu        $v1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f34) {
            ctx->pc = 0x2E2F88u;
            goto label_2e2f88;
        }
    }
    ctx->pc = 0x2E2F3Cu;
    // 0x2e2f3c: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2e2f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e2f40: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2e2f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e2f44: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2f48: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2F48u;
    {
        const bool branch_taken_0x2e2f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f48) {
            ctx->pc = 0x2E2F88u;
            goto label_2e2f88;
        }
    }
    ctx->pc = 0x2E2F50u;
    // 0x2e2f50: 0x96830006  lhu         $v1, 0x6($s4)
    ctx->pc = 0x2e2f50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2e2f54: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2e2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e2f58: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2F58u;
    {
        const bool branch_taken_0x2e2f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F58u;
        // 0x2e2f5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f58) {
            ctx->pc = 0x2E2F78u;
            goto label_2e2f78;
        }
    }
    ctx->pc = 0x2E2F60u;
    // 0x2e2f60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e2f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e2f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f68: 0xc0b90f0  jal         func_2E43C0
    ctx->pc = 0x2E2F68u;
    SET_GPR_U32(ctx, 31, 0x2E2F70u);
    ctx->pc = 0x2E2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F68u;
    // 0x2e2f6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E43C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E43C0u, 0x2E2F68u, 0x2E2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F70u;
label_2e2f70:
    // 0x2e2f70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2F70u;
    {
        const bool branch_taken_0x2e2f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f70) {
            ctx->pc = 0x2E2F88u;
            goto label_2e2f88;
        }
    }
    ctx->pc = 0x2E2F78u;
label_2e2f78:
    // 0x2e2f78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e2f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f80: 0xc0b8e90  jal         func_2E3A40
    ctx->pc = 0x2E2F80u;
    SET_GPR_U32(ctx, 31, 0x2E2F88u);
    ctx->pc = 0x2E2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F80u;
    // 0x2e2f84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A40u, 0x2E2F80u, 0x2E2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F88u;
label_2e2f88:
    // 0x2e2f88: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2e2f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e2f8c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e2f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e2f90: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x2e2f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2f94: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2e2f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2f98: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2E2F98u;
    {
        const bool branch_taken_0x2e2f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F98u;
        // 0x2e2f9c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f98) {
            ctx->pc = 0x2E2F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2f18;
        }
    }
    ctx->pc = 0x2E2FA0u;
label_2e2fa0:
    // 0x2e2fa0: 0x16400029  bnez        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E2FA0u;
    {
        const bool branch_taken_0x2e2fa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2fa0) {
            ctx->pc = 0x2E3048u;
            goto label_2e3048;
        }
    }
    ctx->pc = 0x2E2FA8u;
    // 0x2e2fa8: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2e2fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e2fac: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x2e2facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2fb0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2e2fb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2fb4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E2FB4u;
    {
        const bool branch_taken_0x2e2fb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FB4u;
        // 0x2e2fb8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fb4) {
            ctx->pc = 0x2E3048u;
            goto label_2e3048;
        }
    }
    ctx->pc = 0x2E2FBCu;
    // 0x2e2fbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e2fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2fc0:
    // 0x2e2fc0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2e2fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e2fc4: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x2e2fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2e2fc8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e2fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2fcc: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2e2fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2e2fd0: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x2e2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2e2fd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2fd8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2e2fd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e2fdc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E2FDCu;
    {
        const bool branch_taken_0x2e2fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FDCu;
        // 0x2e2fe0: 0xb01821  addu        $v1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fdc) {
            ctx->pc = 0x2E3030u;
            goto label_2e3030;
        }
    }
    ctx->pc = 0x2E2FE4u;
    // 0x2e2fe4: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2e2fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e2fe8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2e2fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e2fec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2ff0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2FF0u;
    {
        const bool branch_taken_0x2e2ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ff0) {
            ctx->pc = 0x2E3030u;
            goto label_2e3030;
        }
    }
    ctx->pc = 0x2E2FF8u;
    // 0x2e2ff8: 0x96830006  lhu         $v1, 0x6($s4)
    ctx->pc = 0x2e2ff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x2e2ffc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2e2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e3000: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3000u;
    {
        const bool branch_taken_0x2e3000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3000u;
        // 0x2e3004: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3000) {
            ctx->pc = 0x2E3020u;
            goto label_2e3020;
        }
    }
    ctx->pc = 0x2E3008u;
    // 0x2e3008: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e3008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e300c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e300cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3010: 0xc0b90f0  jal         func_2E43C0
    ctx->pc = 0x2E3010u;
    SET_GPR_U32(ctx, 31, 0x2E3018u);
    ctx->pc = 0x2E3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3010u;
    // 0x2e3014: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E43C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E43C0u, 0x2E3010u, 0x2E3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3018u;
label_2e3018:
    // 0x2e3018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3018u;
    {
        const bool branch_taken_0x2e3018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3018) {
            ctx->pc = 0x2E3030u;
            goto label_2e3030;
        }
    }
    ctx->pc = 0x2E3020u;
label_2e3020:
    // 0x2e3020: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e3020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3024: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e3024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3028: 0xc0b8e90  jal         func_2E3A40
    ctx->pc = 0x2E3028u;
    SET_GPR_U32(ctx, 31, 0x2E3030u);
    ctx->pc = 0x2E302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3028u;
    // 0x2e302c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A40u, 0x2E3028u, 0x2E3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3030u;
label_2e3030:
    // 0x2e3030: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2e3030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e3034: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e3034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e3038: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x2e3038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e303c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2e303cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3040: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2E3040u;
    {
        const bool branch_taken_0x2e3040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3040u;
        // 0x2e3044: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3040) {
            ctx->pc = 0x2E2FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2fc0;
        }
    }
    ctx->pc = 0x2E3048u;
label_2e3048:
    // 0x2e3048: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2e3048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e304c: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x2e304cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e3050: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2e3050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3054: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E3054u;
    {
        const bool branch_taken_0x2e3054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3054u;
        // 0x2e3058: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3054) {
            ctx->pc = 0x2E30D0u;
            goto label_2e30d0;
        }
    }
    ctx->pc = 0x2E305Cu;
    // 0x2e305c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e305cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3060:
    // 0x2e3060: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2e3060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e3064: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x2e3064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2e3068: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e3068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e306c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2e306cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2e3070: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x2e3070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2e3074: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e3074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e3078: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2e3078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e307c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E307Cu;
    {
        const bool branch_taken_0x2e307c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E307Cu;
        // 0x2e3080: 0xb01821  addu        $v1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e307c) {
            ctx->pc = 0x2E30B8u;
            goto label_2e30b8;
        }
    }
    ctx->pc = 0x2E3084u;
    // 0x2e3084: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2e3084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e3088: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2e3088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e308c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e308cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e3090: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E3090u;
    {
        const bool branch_taken_0x2e3090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3090) {
            ctx->pc = 0x2E30B8u;
            goto label_2e30b8;
        }
    }
    ctx->pc = 0x2E3098u;
    // 0x2e3098: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x2e3098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e309c: 0x31fbc  dsll32      $v1, $v1, 30
    ctx->pc = 0x2e309cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 30));
    // 0x2e30a0: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x2e30a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x2e30a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E30A4u;
    {
        const bool branch_taken_0x2e30a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30A4u;
        // 0x2e30a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30a4) {
            ctx->pc = 0x2E30B8u;
            goto label_2e30b8;
        }
    }
    ctx->pc = 0x2E30ACu;
    // 0x2e30ac: 0xc0b9380  jal         func_2E4E00
    ctx->pc = 0x2E30ACu;
    SET_GPR_U32(ctx, 31, 0x2E30B4u);
    ctx->pc = 0x2E30B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E30ACu;
    // 0x2e30b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4E00u, 0x2E30ACu, 0x2E30B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30B4u;
label_2e30b4:
    // 0x2e30b4: 0x0  nop
    ctx->pc = 0x2e30b4u;
    // NOP
label_2e30b8:
    // 0x2e30b8: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2e30b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e30bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e30bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e30c0: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x2e30c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e30c4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2e30c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e30c8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2E30C8u;
    {
        const bool branch_taken_0x2e30c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30C8u;
        // 0x2e30cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30c8) {
            ctx->pc = 0x2E3060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3060;
        }
    }
    ctx->pc = 0x2E30D0u;
label_2e30d0:
    // 0x2e30d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e30d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e30d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e30d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e30d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e30d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e30dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e30dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e30e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e30e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e30e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e30e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e30e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e30e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e30ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e30ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e30f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e30f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e30f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E30F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30F4u;
        // 0x2e30f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E30F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E30FCu;
}
