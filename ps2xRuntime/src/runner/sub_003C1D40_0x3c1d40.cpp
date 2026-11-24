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

// Function: sub_003C1D40
// Address: 0x3c1d40 - 0x3c1f30
void sub_003C1D40_0x3c1d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1D40_0x3c1d40");
#endif

    switch (ctx->pc) {
        case 0x3c1db0u: goto label_3c1db0;
        case 0x3c1de0u: goto label_3c1de0;
        case 0x3c1df8u: goto label_3c1df8;
        case 0x3c1e08u: goto label_3c1e08;
        case 0x3c1e18u: goto label_3c1e18;
        case 0x3c1e28u: goto label_3c1e28;
        case 0x3c1e50u: goto label_3c1e50;
        case 0x3c1e78u: goto label_3c1e78;
        case 0x3c1e88u: goto label_3c1e88;
        case 0x3c1ea0u: goto label_3c1ea0;
        default: break;
    }

    ctx->pc = 0x3c1d40u;

    // 0x3c1d40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c1d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3c1d44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3c1d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3c1d48: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3c1d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3c1d4c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3c1d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3c1d50: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3c1d50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1d54: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c1d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3c1d58: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3c1d58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1d5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c1d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3c1d60: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3c1d60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1d64: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c1d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c1d68: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3c1d68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1d6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c1d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c1d70: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3c1d70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1d74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c1d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c1d78: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3c1d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1d7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c1d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c1d80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c1d80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c1d84: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3c1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c1d88: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3c1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3c1d8c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3c1d8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c1d90: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C1D90u;
    {
        const bool branch_taken_0x3c1d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1D90u;
        // 0x3c1d94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1d90) {
            ctx->pc = 0x3C1DD8u;
            goto label_3c1dd8;
        }
    }
    ctx->pc = 0x3C1D98u;
    // 0x3c1d98: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x3c1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3c1d9c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3c1d9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c1da0: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x3C1DA0u;
    {
        const bool branch_taken_0x3c1da0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DA0u;
        // 0x3c1da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1da0) {
            ctx->pc = 0x3C1E88u;
            goto label_3c1e88;
        }
    }
    ctx->pc = 0x3C1DA8u;
    // 0x3c1da8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3c1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3c1dac: 0x0  nop
    ctx->pc = 0x3c1dacu;
    // NOP
label_3c1db0:
    // 0x3c1db0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3c1db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c1db4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C1DB4u;
    {
        const bool branch_taken_0x3c1db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DB4u;
        // 0x3c1db8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1db4) {
            ctx->pc = 0x3C1E88u;
            goto label_3c1e88;
        }
    }
    ctx->pc = 0x3C1DBCu;
    // 0x3c1dbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c1dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3c1dc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c1dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1dc4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3c1dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c1dc8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C1DC8u;
    {
        const bool branch_taken_0x3c1dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DC8u;
        // 0x3c1dcc: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1dc8) {
            ctx->pc = 0x3C1DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1db0;
        }
    }
    ctx->pc = 0x3C1DD0u;
    // 0x3c1dd0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3C1DD0u;
    {
        const bool branch_taken_0x3c1dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1dd0) {
            ctx->pc = 0x3C1E88u;
            goto label_3c1e88;
        }
    }
    ctx->pc = 0x3C1DD8u;
label_3c1dd8:
    // 0x3c1dd8: 0xc0f07f8  jal         func_3C1FE0
    ctx->pc = 0x3C1DD8u;
    SET_GPR_U32(ctx, 31, 0x3C1DE0u);
    ctx->pc = 0x3C1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1DD8u;
    // 0x3c1ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1FE0u, 0x3C1DD8u, 0x3C1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1DE0u;
label_3c1de0:
    // 0x3c1de0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1DE0u;
    {
        const bool branch_taken_0x3c1de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1de0) {
            ctx->pc = 0x3C1DF0u;
            goto label_3c1df0;
        }
    }
    ctx->pc = 0x3C1DE8u;
    // 0x3c1de8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3C1DE8u;
    {
        const bool branch_taken_0x3c1de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1DE8u;
        // 0x3c1dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1de8) {
            ctx->pc = 0x3C1F00u;
            goto label_3c1f00;
        }
    }
    ctx->pc = 0x3C1DF0u;
label_3c1df0:
    // 0x3c1df0: 0xc0f022c  jal         func_3C08B0
    ctx->pc = 0x3C1DF0u;
    SET_GPR_U32(ctx, 31, 0x3C1DF8u);
    ctx->pc = 0x3C1DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1DF0u;
    // 0x3c1df4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C08B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C08B0u, 0x3C1DF0u, 0x3C1DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1DF8u;
label_3c1df8:
    // 0x3c1df8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c1df8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3c1dfc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c1dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e00: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3c1e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c1e04: 0x0  nop
    ctx->pc = 0x3c1e04u;
    // NOP
label_3c1e08:
    // 0x3c1e08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c1e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3c1e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e10: 0xc0f07f8  jal         func_3C1FE0
    ctx->pc = 0x3C1E10u;
    SET_GPR_U32(ctx, 31, 0x3C1E18u);
    ctx->pc = 0x3C1E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E10u;
    // 0x3c1e14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1FE0u, 0x3C1E10u, 0x3C1E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E18u;
label_3c1e18:
    // 0x3c1e18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C1E18u;
    {
        const bool branch_taken_0x3c1e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E18u;
        // 0x3c1e1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e18) {
            ctx->pc = 0x3C1E48u;
            goto label_3c1e48;
        }
    }
    ctx->pc = 0x3C1E20u;
    // 0x3c1e20: 0xc0f022c  jal         func_3C08B0
    ctx->pc = 0x3C1E20u;
    SET_GPR_U32(ctx, 31, 0x3C1E28u);
    ctx->pc = 0x3C08B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C08B0u, 0x3C1E20u, 0x3C1E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E28u;
label_3c1e28:
    // 0x3c1e28: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3c1e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c1e2c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3C1E2Cu;
    {
        const bool branch_taken_0x3c1e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c1e2c) {
            ctx->pc = 0x3C1E40u;
            goto label_3c1e40;
        }
    }
    ctx->pc = 0x3C1E34u;
    // 0x3c1e34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c1e34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3c1e38: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3c1e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e3c: 0x0  nop
    ctx->pc = 0x3c1e3cu;
    // NOP
label_3c1e40:
    // 0x3c1e40: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x3C1E40u;
    {
        const bool branch_taken_0x3c1e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E40u;
        // 0x3c1e44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e40) {
            ctx->pc = 0x3C1E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1e08;
        }
    }
    ctx->pc = 0x3C1E48u;
label_3c1e48:
    // 0x3c1e48: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C1E48u;
    SET_GPR_U32(ctx, 31, 0x3C1E50u);
    ctx->pc = 0x3C1E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E48u;
    // 0x3c1e4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C1E48u, 0x3C1E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E50u;
label_3c1e50:
    // 0x3c1e50: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3c1e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c1e54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3C1E54u;
    {
        const bool branch_taken_0x3c1e54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E54u;
        // 0x3c1e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1e54) {
            ctx->pc = 0x3C1E68u;
            goto label_3c1e68;
        }
    }
    ctx->pc = 0x3C1E5Cu;
    // 0x3c1e5c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3C1E5Cu;
    {
        const bool branch_taken_0x3c1e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1e5c) {
            ctx->pc = 0x3C1F00u;
            goto label_3c1f00;
        }
    }
    ctx->pc = 0x3C1E64u;
    // 0x3c1e64: 0x0  nop
    ctx->pc = 0x3c1e64u;
    // NOP
label_3c1e68:
    // 0x3c1e68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c1e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c1e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e70: 0xc0f07f8  jal         func_3C1FE0
    ctx->pc = 0x3C1E70u;
    SET_GPR_U32(ctx, 31, 0x3C1E78u);
    ctx->pc = 0x3C1E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E70u;
    // 0x3c1e74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1FE0u, 0x3C1E70u, 0x3C1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E78u;
label_3c1e78:
    // 0x3c1e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c1e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c1e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e80: 0xc0f07cc  jal         func_3C1F30
    ctx->pc = 0x3C1E80u;
    SET_GPR_U32(ctx, 31, 0x3C1E88u);
    ctx->pc = 0x3C1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E80u;
    // 0x3c1e84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1F30u, 0x3C1E80u, 0x3C1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1E88u;
label_3c1e88:
    // 0x3c1e88: 0x3266ffff  andi        $a2, $s3, 0xFFFF
    ctx->pc = 0x3c1e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3c1e8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c1e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e90: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c1e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e94: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3c1e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1e98: 0xc0f0218  jal         func_3C0860
    ctx->pc = 0x3C1E98u;
    SET_GPR_U32(ctx, 31, 0x3C1EA0u);
    ctx->pc = 0x3C1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1E98u;
    // 0x3c1e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0860u, 0x3C1E98u, 0x3C1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1EA0u;
label_3c1ea0:
    // 0x3c1ea0: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3c1ea0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c1ea4: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x3c1ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x3c1ea8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3c1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3c1eac: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3c1eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3c1eb0: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x3c1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x3c1eb4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3c1eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3c1eb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c1eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1ebc: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x3c1ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c1ec0: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x3c1ec0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c1ec4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3c1ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3c1ec8: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x3c1ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c1ecc: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x3c1eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3c1ed0: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x3c1ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3c1ed4: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x3c1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3c1ed8: 0x650019  multu       $v1, $a1
    ctx->pc = 0x3c1ed8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3c1edc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3c1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c1ee0: 0xaec30010  sw          $v1, 0x10($s6)
    ctx->pc = 0x3c1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
    // 0x3c1ee4: 0x2810  mfhi        $a1
    ctx->pc = 0x3c1ee4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x3c1ee8: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x3c1ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x3c1eec: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3c1eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3c1ef0: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x3c1ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x3c1ef4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c1ef8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x3c1ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c1efc: 0x0  nop
    ctx->pc = 0x3c1efcu;
    // NOP
label_3c1f00:
    // 0x3c1f00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c1f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c1f04: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3c1f04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c1f08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c1f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c1f0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3c1f0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c1f10: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c1f10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c1f14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c1f14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c1f18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c1f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c1f1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c1f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c1f20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c1f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c1f24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c1f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1f28: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F28u;
        // 0x3c1f2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1F30u;
}
