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

// Function: sub_00369EE0
// Address: 0x369ee0 - 0x369fc0
void sub_00369EE0_0x369ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369EE0_0x369ee0");
#endif

    switch (ctx->pc) {
        case 0x369f08u: goto label_369f08;
        case 0x369f38u: goto label_369f38;
        case 0x369f6cu: goto label_369f6c;
        case 0x369f9cu: goto label_369f9c;
        default: break;
    }

    ctx->pc = 0x369ee0u;

    // 0x369ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x369ee4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x369ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x369ee8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x369ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x369eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369ef0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x369ef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369efc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x369efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x369f00: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x369F00u;
    SET_GPR_U32(ctx, 31, 0x369F08u);
    ctx->pc = 0x369F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F00u;
    // 0x369f04: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x369F00u, 0x369F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F08u;
label_369f08:
    // 0x369f08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x369f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x369f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x369f10: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369F10u;
    {
        const bool branch_taken_0x369f10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x369f10) {
            ctx->pc = 0x369F20u;
            goto label_369f20;
        }
    }
    ctx->pc = 0x369F18u;
    // 0x369f18: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x369F18u;
    {
        const bool branch_taken_0x369f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F18u;
        // 0x369f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369f18) {
            ctx->pc = 0x369FA8u;
            goto label_369fa8;
        }
    }
    ctx->pc = 0x369F20u;
label_369f20:
    // 0x369f20: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x369F20u;
    {
        const bool branch_taken_0x369f20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x369F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F20u;
        // 0x369f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369f20) {
            ctx->pc = 0x369F30u;
            goto label_369f30;
        }
    }
    ctx->pc = 0x369F28u;
    // 0x369f28: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x369F28u;
    {
        const bool branch_taken_0x369f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f28) {
            ctx->pc = 0x369FA8u;
            goto label_369fa8;
        }
    }
    ctx->pc = 0x369F30u;
label_369f30:
    // 0x369f30: 0xc0da750  jal         func_369D40
    ctx->pc = 0x369F30u;
    SET_GPR_U32(ctx, 31, 0x369F38u);
    ctx->pc = 0x369F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F30u;
    // 0x369f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369D40u, 0x369F30u, 0x369F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F38u;
label_369f38:
    // 0x369f38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369F38u;
    {
        const bool branch_taken_0x369f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369f38) {
            ctx->pc = 0x369F48u;
            goto label_369f48;
        }
    }
    ctx->pc = 0x369F40u;
    // 0x369f40: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x369F40u;
    {
        const bool branch_taken_0x369f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F40u;
        // 0x369f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369f40) {
            ctx->pc = 0x369FA8u;
            goto label_369fa8;
        }
    }
    ctx->pc = 0x369F48u;
label_369f48:
    // 0x369f48: 0x9223000a  lbu         $v1, 0xA($s1)
    ctx->pc = 0x369f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x369f4c: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x369f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x369f50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369F50u;
    {
        const bool branch_taken_0x369f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x369F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F50u;
        // 0x369f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369f50) {
            ctx->pc = 0x369F60u;
            goto label_369f60;
        }
    }
    ctx->pc = 0x369F58u;
    // 0x369f58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x369F58u;
    {
        const bool branch_taken_0x369f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f58) {
            ctx->pc = 0x369FA8u;
            goto label_369fa8;
        }
    }
    ctx->pc = 0x369F60u;
label_369f60:
    // 0x369f60: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x369f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x369f64: 0xc076664  jal         func_1D9990
    ctx->pc = 0x369F64u;
    SET_GPR_U32(ctx, 31, 0x369F6Cu);
    ctx->pc = 0x369F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F64u;
    // 0x369f68: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x369F64u, 0x369F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F6Cu;
label_369f6c:
    // 0x369f6c: 0x3c02491c  lui         $v0, 0x491C
    ctx->pc = 0x369f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18716 << 16));
    // 0x369f70: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x369f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x369f74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x369f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369f78: 0x0  nop
    ctx->pc = 0x369f78u;
    // NOP
    // 0x369f7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x369f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369f80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x369F80u;
    {
        const bool branch_taken_0x369f80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x369F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F80u;
        // 0x369f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369f80) {
            ctx->pc = 0x369F90u;
            goto label_369f90;
        }
    }
    ctx->pc = 0x369F88u;
    // 0x369f88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x369F88u;
    {
        const bool branch_taken_0x369f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f88) {
            ctx->pc = 0x369FA8u;
            goto label_369fa8;
        }
    }
    ctx->pc = 0x369F90u;
label_369f90:
    // 0x369f90: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x369f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x369f94: 0xc0da738  jal         func_369CE0
    ctx->pc = 0x369F94u;
    SET_GPR_U32(ctx, 31, 0x369F9Cu);
    ctx->pc = 0x369F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369F94u;
    // 0x369f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369CE0u, 0x369F94u, 0x369F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F9Cu;
label_369f9c:
    // 0x369f9c: 0x401027  not         $v0, $v0
    ctx->pc = 0x369f9cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x369fa0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x369fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x369fa4: 0x0  nop
    ctx->pc = 0x369fa4u;
    // NOP
label_369fa8:
    // 0x369fa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x369fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369fac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x369facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x369FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369FB8u;
        // 0x369fbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369FC0u;
}
