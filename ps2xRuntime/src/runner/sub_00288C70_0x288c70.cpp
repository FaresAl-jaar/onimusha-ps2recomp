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

// Function: sub_00288C70
// Address: 0x288c70 - 0x288eb8
void sub_00288C70_0x288c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288C70_0x288c70");
#endif

    switch (ctx->pc) {
        case 0x288cc0u: goto label_288cc0;
        case 0x288cd0u: goto label_288cd0;
        case 0x288ce0u: goto label_288ce0;
        case 0x288cf4u: goto label_288cf4;
        case 0x288d10u: goto label_288d10;
        case 0x288d24u: goto label_288d24;
        case 0x288d3cu: goto label_288d3c;
        case 0x288d44u: goto label_288d44;
        case 0x288d70u: goto label_288d70;
        case 0x288d80u: goto label_288d80;
        case 0x288d90u: goto label_288d90;
        case 0x288d98u: goto label_288d98;
        case 0x288e18u: goto label_288e18;
        case 0x288e28u: goto label_288e28;
        case 0x288e7cu: goto label_288e7c;
        default: break;
    }

    ctx->pc = 0x288c70u;

    // 0x288c70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x288c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x288c74: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x288c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x288c78: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x288c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x288c7c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x288c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x288c80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x288c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x288c84: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x288c84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x288c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x288c8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x288c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x288c90: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x288c90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c94: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x288c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x288c98: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x288c98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x288c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x288ca0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x288ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x288ca4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288ca8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x288ca8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x288cac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x288cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cb0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x288cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x288cb4: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x288cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x288cb8: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x288CB8u;
    SET_GPR_U32(ctx, 31, 0x288CC0u);
    ctx->pc = 0x288CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CB8u;
    // 0x288cbc: 0x27a400fc  addiu       $a0, $sp, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x288CB8u, 0x288CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CC0u;
label_288cc0:
    // 0x288cc0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x288cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x288cc4: 0x8c450190  lw          $a1, 0x190($v0)
    ctx->pc = 0x288cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x288cc8: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x288CC8u;
    SET_GPR_U32(ctx, 31, 0x288CD0u);
    ctx->pc = 0x288CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CC8u;
    // 0x288ccc: 0x27a400fc  addiu       $a0, $sp, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x288CC8u, 0x288CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CD0u;
label_288cd0:
    // 0x288cd0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x288cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x288cd4: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288cd8: 0xc09d524  jal         func_275490
    ctx->pc = 0x288CD8u;
    SET_GPR_U32(ctx, 31, 0x288CE0u);
    ctx->pc = 0x288CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CD8u;
    // 0x288cdc: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x288CD8u, 0x288CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CE0u;
label_288ce0:
    // 0x288ce0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288ce0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ce4: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x288CE4u;
    {
        const bool branch_taken_0x288ce4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x288CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CE4u;
        // 0x288ce8: 0x27a400fc  addiu       $a0, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ce4) {
            ctx->pc = 0x288D00u;
            goto label_288d00;
        }
    }
    ctx->pc = 0x288CECu;
    // 0x288cec: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x288CECu;
    SET_GPR_U32(ctx, 31, 0x288CF4u);
    ctx->pc = 0x288CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CECu;
    // 0x288cf0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288CECu, 0x288CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288CF4u;
label_288cf4:
    // 0x288cf4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x288CF4u;
    {
        const bool branch_taken_0x288cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CF4u;
        // 0x288cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288cf4) {
            ctx->pc = 0x288E80u;
            goto label_288e80;
        }
    }
    ctx->pc = 0x288CFCu;
    // 0x288cfc: 0x0  nop
    ctx->pc = 0x288cfcu;
    // NOP
label_288d00:
    // 0x288d00: 0x96c6000e  lhu         $a2, 0xE($s6)
    ctx->pc = 0x288d00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 14)));
    // 0x288d04: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288d08: 0xc09d524  jal         func_275490
    ctx->pc = 0x288D08u;
    SET_GPR_U32(ctx, 31, 0x288D10u);
    ctx->pc = 0x288D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D08u;
    // 0x288d0c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x288D08u, 0x288D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D10u;
label_288d10:
    // 0x288d10: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x288d10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d14: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x288D14u;
    {
        const bool branch_taken_0x288d14 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D14u;
        // 0x288d18: 0x27a400fc  addiu       $a0, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d14) {
            ctx->pc = 0x288D30u;
            goto label_288d30;
        }
    }
    ctx->pc = 0x288D1Cu;
    // 0x288d1c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x288D1Cu;
    SET_GPR_U32(ctx, 31, 0x288D24u);
    ctx->pc = 0x288D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D1Cu;
    // 0x288d20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288D1Cu, 0x288D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D24u;
label_288d24:
    // 0x288d24: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x288D24u;
    {
        const bool branch_taken_0x288d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D24u;
        // 0x288d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d24) {
            ctx->pc = 0x288E80u;
            goto label_288e80;
        }
    }
    ctx->pc = 0x288D2Cu;
    // 0x288d2c: 0x0  nop
    ctx->pc = 0x288d2cu;
    // NOP
label_288d30:
    // 0x288d30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x288d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d34: 0xc076664  jal         func_1D9990
    ctx->pc = 0x288D34u;
    SET_GPR_U32(ctx, 31, 0x288D3Cu);
    ctx->pc = 0x288D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D34u;
    // 0x288d38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x288D34u, 0x288D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D3Cu;
label_288d3c:
    // 0x288d3c: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x288D3Cu;
    SET_GPR_U32(ctx, 31, 0x288D44u);
    ctx->pc = 0x288D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D3Cu;
    // 0x288d40: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x288D3Cu, 0x288D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D44u;
label_288d44:
    // 0x288d44: 0x3c02561c  lui         $v0, 0x561C
    ctx->pc = 0x288d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22044 << 16));
    // 0x288d48: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x288d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288d4c: 0x34423ec8  ori         $v0, $v0, 0x3EC8
    ctx->pc = 0x288d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16072);
    // 0x288d50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x288d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d54: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x288d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x288d58: 0x92c2000c  lbu         $v0, 0xC($s6)
    ctx->pc = 0x288d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x288d5c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x288d5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x288d60: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x288D60u;
    {
        const bool branch_taken_0x288d60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x288D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D60u;
        // 0x288d64: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d60) {
            ctx->pc = 0x288E60u;
            goto label_288e60;
        }
    }
    ctx->pc = 0x288D68u;
    // 0x288d68: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x288d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d6c: 0x0  nop
    ctx->pc = 0x288d6cu;
    // NOP
label_288d70:
    // 0x288d70: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x288d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x288d74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x288d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x288d78: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x288D78u;
    SET_GPR_U32(ctx, 31, 0x288D80u);
    ctx->pc = 0x288D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D78u;
    // 0x288d7c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x288D78u, 0x288D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D80u;
label_288d80:
    // 0x288d80: 0x96300012  lhu         $s0, 0x12($s1)
    ctx->pc = 0x288d80u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x288d84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x288d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d88: 0xc076664  jal         func_1D9990
    ctx->pc = 0x288D88u;
    SET_GPR_U32(ctx, 31, 0x288D90u);
    ctx->pc = 0x288D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D88u;
    // 0x288d8c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x288D88u, 0x288D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D90u;
label_288d90:
    // 0x288d90: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x288D90u;
    SET_GPR_U32(ctx, 31, 0x288D98u);
    ctx->pc = 0x288D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288D90u;
    // 0x288d94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x288D90u, 0x288D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D98u;
label_288d98:
    // 0x288d98: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288D98u;
    {
        const bool branch_taken_0x288d98 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x288D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D98u;
        // 0x288d9c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d98) {
            ctx->pc = 0x288DACu;
            goto label_288dac;
        }
    }
    ctx->pc = 0x288DA0u;
    // 0x288da0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x288da0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288da4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x288DA4u;
    {
        const bool branch_taken_0x288da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DA4u;
        // 0x288da8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288da4) {
            ctx->pc = 0x288DC4u;
            goto label_288dc4;
        }
    }
    ctx->pc = 0x288DACu;
label_288dac:
    // 0x288dac: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x288dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x288db0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x288db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x288db4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x288db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288db8: 0x0  nop
    ctx->pc = 0x288db8u;
    // NOP
    // 0x288dbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x288dbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x288dc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x288dc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_288dc4:
    // 0x288dc4: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x288dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x288dc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288dcc: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x288DCCu;
    {
        const bool branch_taken_0x288dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x288dcc) {
            ctx->pc = 0x288E48u;
            goto label_288e48;
        }
    }
    ctx->pc = 0x288DD4u;
    // 0x288dd4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288DD4u;
    {
        const bool branch_taken_0x288dd4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x288DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DD4u;
        // 0x288dd8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dd4) {
            ctx->pc = 0x288DE8u;
            goto label_288de8;
        }
    }
    ctx->pc = 0x288DDCu;
    // 0x288ddc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x288ddcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288de0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x288DE0u;
    {
        const bool branch_taken_0x288de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DE0u;
        // 0x288de4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288de0) {
            ctx->pc = 0x288E00u;
            goto label_288e00;
        }
    }
    ctx->pc = 0x288DE8u;
label_288de8:
    // 0x288de8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x288de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x288dec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x288decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x288df0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x288df0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288df4: 0x0  nop
    ctx->pc = 0x288df4u;
    // NOP
    // 0x288df8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x288df8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x288dfc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x288dfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_288e00:
    // 0x288e00: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x288e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x288e04: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x288e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x288e08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x288e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e0c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x288e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e10: 0xc076280  jal         func_1D8A00
    ctx->pc = 0x288E10u;
    SET_GPR_U32(ctx, 31, 0x288E18u);
    ctx->pc = 0x288E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E10u;
    // 0x288e14: 0x27a800e0  addiu       $t0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8A00u, 0x288E10u, 0x288E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E18u;
label_288e18:
    // 0x288e18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x288E18u;
    {
        const bool branch_taken_0x288e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E18u;
        // 0x288e1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e18) {
            ctx->pc = 0x288E48u;
            goto label_288e48;
        }
    }
    ctx->pc = 0x288E20u;
    // 0x288e20: 0xc076664  jal         func_1D9990
    ctx->pc = 0x288E20u;
    SET_GPR_U32(ctx, 31, 0x288E28u);
    ctx->pc = 0x288E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E20u;
    // 0x288e24: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x288E20u, 0x288E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E28u;
label_288e28:
    // 0x288e28: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x288e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288e2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x288E2Cu;
    {
        const bool branch_taken_0x288e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288e2c) {
            ctx->pc = 0x288E48u;
            goto label_288e48;
        }
    }
    ctx->pc = 0x288E34u;
    // 0x288e34: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x288e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288e38: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x288e38u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x288e3c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x288e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e40: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x288e40u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x288e44: 0x0  nop
    ctx->pc = 0x288e44u;
    // NOP
label_288e48:
    // 0x288e48: 0x92c2000c  lbu         $v0, 0xC($s6)
    ctx->pc = 0x288e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x288e4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x288e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x288e50: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x288e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x288e54: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x288E54u;
    {
        const bool branch_taken_0x288e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E54u;
        // 0x288e58: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e54) {
            ctx->pc = 0x288D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288d70;
        }
    }
    ctx->pc = 0x288E5Cu;
    // 0x288e5c: 0x0  nop
    ctx->pc = 0x288e5cu;
    // NOP
label_288e60:
    // 0x288e60: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x288E60u;
    {
        const bool branch_taken_0x288e60 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x288E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E60u;
        // 0x288e64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e60) {
            ctx->pc = 0x288E70u;
            goto label_288e70;
        }
    }
    ctx->pc = 0x288E68u;
    // 0x288e68: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x288e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x288e6c: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x288e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_288e70:
    // 0x288e70: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x288e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x288e74: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x288E74u;
    SET_GPR_U32(ctx, 31, 0x288E7Cu);
    ctx->pc = 0x288E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E74u;
    // 0x288e78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288E74u, 0x288E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E7Cu;
label_288e7c:
    // 0x288e7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x288e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288e80:
    // 0x288e80: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x288e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288e84: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x288e84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x288e88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x288e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x288e8c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x288e8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288e90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x288e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288e94: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x288e94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x288e98: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x288e98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288e9c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x288e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288ea0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x288ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288ea4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x288ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288ea8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x288ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288eac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x288EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EB0u;
        // 0x288eb4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288EB8u;
}
