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

// Function: sub_001E2EE0
// Address: 0x1e2ee0 - 0x1e3128
void sub_001E2EE0_0x1e2ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2EE0_0x1e2ee0");
#endif

    switch (ctx->pc) {
        case 0x1e2f48u: goto label_1e2f48;
        case 0x1e2f60u: goto label_1e2f60;
        case 0x1e2f74u: goto label_1e2f74;
        case 0x1e2f88u: goto label_1e2f88;
        case 0x1e2fb0u: goto label_1e2fb0;
        case 0x1e3074u: goto label_1e3074;
        case 0x1e3098u: goto label_1e3098;
        case 0x1e30ccu: goto label_1e30cc;
        case 0x1e30d8u: goto label_1e30d8;
        case 0x1e30f0u: goto label_1e30f0;
        default: break;
    }

    ctx->pc = 0x1e2ee0u;

    // 0x1e2ee0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1e2ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1e2ee4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e2ee8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e2ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e2eec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e2eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e2ef0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e2ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e2ef4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1e2ef4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ef8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e2ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e2efc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e2efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e2f00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e2f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e2f04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e2f04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e2f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e2f0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e2f10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2f18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e2f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f1c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e2f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e2f20: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2F20u;
    {
        const bool branch_taken_0x1e2f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F20u;
        // 0x1e2f24: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f20) {
            ctx->pc = 0x1E2F30u;
            goto label_1e2f30;
        }
    }
    ctx->pc = 0x1E2F28u;
    // 0x1e2f28: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1E2F28u;
    {
        const bool branch_taken_0x1e2f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F28u;
        // 0x1e2f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f28) {
            ctx->pc = 0x1E30F8u;
            goto label_1e30f8;
        }
    }
    ctx->pc = 0x1E2F30u;
label_1e2f30:
    // 0x1e2f30: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2F30u;
    {
        const bool branch_taken_0x1e2f30 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F30u;
        // 0x1e2f34: 0x3c0b82d  daddu       $s7, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f30) {
            ctx->pc = 0x1E2F40u;
            goto label_1e2f40;
        }
    }
    ctx->pc = 0x1E2F38u;
    // 0x1e2f38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2F38u;
    {
        const bool branch_taken_0x1e2f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F38u;
        // 0x1e2f3c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f38) {
            ctx->pc = 0x1E2F50u;
            goto label_1e2f50;
        }
    }
    ctx->pc = 0x1E2F40u;
label_1e2f40:
    // 0x1e2f40: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1E2F40u;
    SET_GPR_U32(ctx, 31, 0x1E2F48u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1E2F40u, 0x1E2F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F48u;
label_1e2f48:
    // 0x1e2f48: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e2f48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e2f4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f50:
    // 0x1e2f50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e2f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f54: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e2f58: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E2F58u;
    SET_GPR_U32(ctx, 31, 0x1E2F60u);
    ctx->pc = 0x1E2F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F58u;
    // 0x1e2f5c: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E2F58u, 0x1E2F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F60u;
label_1e2f60:
    // 0x1e2f60: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1e2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e2f64: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x1e2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1e2f68: 0x90450016  lbu         $a1, 0x16($v0)
    ctx->pc = 0x1e2f68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1e2f6c: 0xc0785f0  jal         func_1E17C0
    ctx->pc = 0x1E2F6Cu;
    SET_GPR_U32(ctx, 31, 0x1E2F74u);
    ctx->pc = 0x1E2F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F6Cu;
    // 0x1e2f70: 0x2e32021  addu        $a0, $s7, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E17C0u, 0x1E2F6Cu, 0x1E2F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F74u;
label_1e2f74:
    // 0x1e2f74: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1e2f74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1e2f78: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1e2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1e2f7c: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x1e2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1e2f80: 0xc07573c  jal         func_1D5CF0
    ctx->pc = 0x1E2F80u;
    SET_GPR_U32(ctx, 31, 0x1E2F88u);
    ctx->pc = 0x1E2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F80u;
    // 0x1e2f84: 0x2e22021  addu        $a0, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CF0u, 0x1E2F80u, 0x1E2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F88u;
label_1e2f88:
    // 0x1e2f88: 0x8ea50030  lw          $a1, 0x30($s5)
    ctx->pc = 0x1e2f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e2f8c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1e2f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1e2f90: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e2f90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e2f94: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E2F94u;
    {
        const bool branch_taken_0x1e2f94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F94u;
        // 0x1e2f98: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f94) {
            ctx->pc = 0x1E3090u;
            goto label_1e3090;
        }
    }
    ctx->pc = 0x1E2F9Cu;
    // 0x1e2f9c: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x1e2f9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e2fa0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e2fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fa4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1e2fa4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1e2fa8: 0x27b200bc  addiu       $s2, $sp, 0xBC
    ctx->pc = 0x1e2fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x1e2fac: 0x27b100cc  addiu       $s1, $sp, 0xCC
    ctx->pc = 0x1e2facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_1e2fb0:
    // 0x1e2fb0: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x1e2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e2fb4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e2fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e2fb8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e2fbc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e2fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e2fc0: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1E2FC0u;
    {
        const bool branch_taken_0x1e2fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2fc0) {
            ctx->pc = 0x1E3078u;
            goto label_1e3078;
        }
    }
    ctx->pc = 0x1E2FC8u;
    // 0x1e2fc8: 0x78a30050  lq          $v1, 0x50($a1)
    ctx->pc = 0x1e2fc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1e2fcc: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1e2fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1e2fd0: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1e2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e2fd4: 0x78640060  lq          $a0, 0x60($v1)
    ctx->pc = 0x1e2fd4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1e2fd8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1e2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e2fdc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1e2fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1e2fe0: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x1e2fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e2fe4: 0x90830015  lbu         $v1, 0x15($a0)
    ctx->pc = 0x1e2fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x1e2fe8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e2fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e2fec: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E2FECu;
    {
        const bool branch_taken_0x1e2fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2fec) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E2FF4u;
    // 0x1e2ff4: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x1e2ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2ff8: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x1e2ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2ffc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e2ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e3000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e3000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e3004: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e3004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e3008: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e3008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e300c: 0x0  nop
    ctx->pc = 0x1e300cu;
    // NOP
    // 0x1e3010: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e3010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1e3014: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1e3014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e3018: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x1e3018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e301c: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x1e301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3020: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e3020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e3024: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e3024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e3028: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e3028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e302c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e302cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e3030: 0x0  nop
    ctx->pc = 0x1e3030u;
    // NOP
    // 0x1e3034: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e3034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1e3038:
    // 0x1e3038: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e3038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e303c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1e303cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1e3040: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e3040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e3044: 0x24846a20  addiu       $a0, $a0, 0x6A20
    ctx->pc = 0x1e3044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    // 0x1e3048: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e3048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e304c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x1e304cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e3050: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e3050u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e3054: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e3054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1e3058: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e3058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e305c: 0x70701818  mult1       $v1, $v1, $s0
    ctx->pc = 0x1e305cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e3060: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e3060u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e3064: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e3064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1e3068: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x1e3068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1e306c: 0xc07575c  jal         func_1D5D70
    ctx->pc = 0x1E306Cu;
    SET_GPR_U32(ctx, 31, 0x1E3074u);
    ctx->pc = 0x1E3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E306Cu;
    // 0x1e3070: 0x24480038  addiu       $t0, $v0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D70u, 0x1E306Cu, 0x1E3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3074u;
label_1e3074:
    // 0x1e3074: 0x0  nop
    ctx->pc = 0x1e3074u;
    // NOP
label_1e3078:
    // 0x1e3078: 0x8ea50030  lw          $a1, 0x30($s5)
    ctx->pc = 0x1e3078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1e307c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e307cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e3080: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1e3080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1e3084: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e3084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e3088: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1E3088u;
    {
        const bool branch_taken_0x1e3088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3088u;
        // 0x1e308c: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3088) {
            ctx->pc = 0x1E2FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2fb0;
        }
    }
    ctx->pc = 0x1E3090u;
label_1e3090:
    // 0x1e3090: 0xc075740  jal         func_1D5D00
    ctx->pc = 0x1E3090u;
    SET_GPR_U32(ctx, 31, 0x1E3098u);
    ctx->pc = 0x1D5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D00u, 0x1E3090u, 0x1E3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3098u;
label_1e3098:
    // 0x1e3098: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e3098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e309c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e30a0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1e30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1e30a4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e30a8: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E30A8u;
    {
        const bool branch_taken_0x1e30a8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30A8u;
        // 0x1e30ac: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30a8) {
            ctx->pc = 0x1E30B8u;
            goto label_1e30b8;
        }
    }
    ctx->pc = 0x1E30B0u;
    // 0x1e30b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E30B0u;
    {
        const bool branch_taken_0x1e30b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30B0u;
        // 0x1e30b4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e30b0) {
            ctx->pc = 0x1E30F8u;
            goto label_1e30f8;
        }
    }
    ctx->pc = 0x1E30B8u;
label_1e30b8:
    // 0x1e30b8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e30b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e30bc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e30bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e30c0: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e30c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e30c4: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1E30C4u;
    SET_GPR_U32(ctx, 31, 0x1E30CCu);
    ctx->pc = 0x1E30C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30C4u;
    // 0x1e30c8: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1E30C4u, 0x1E30CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30CCu;
label_1e30cc:
    // 0x1e30cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e30ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30d0: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1E30D0u;
    SET_GPR_U32(ctx, 31, 0x1E30D8u);
    ctx->pc = 0x1E30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30D0u;
    // 0x1e30d4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1E30D0u, 0x1E30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30D8u;
label_1e30d8:
    // 0x1e30d8: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1e30d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1e30dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1e30dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30e0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e30e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e30e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30e8: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1E30E8u;
    SET_GPR_U32(ctx, 31, 0x1E30F0u);
    ctx->pc = 0x1E30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30E8u;
    // 0x1e30ec: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1E30E8u, 0x1E30F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30F0u;
label_1e30f0:
    // 0x1e30f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e30f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e30f4: 0x0  nop
    ctx->pc = 0x1e30f4u;
    // NOP
label_1e30f8:
    // 0x1e30f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e30f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e30fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e30fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e3100: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e3100u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3104: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e3104u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3108: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e3108u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e310c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e310cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3110: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e311c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e311cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3120: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3120u;
        // 0x1e3124: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3128u;
}
