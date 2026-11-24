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

// Function: sub_00258FB0
// Address: 0x258fb0 - 0x2590c0
void sub_00258FB0_0x258fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258FB0_0x258fb0");
#endif

    switch (ctx->pc) {
        case 0x258fd0u: goto label_258fd0;
        case 0x258fe0u: goto label_258fe0;
        case 0x258ff0u: goto label_258ff0;
        case 0x259038u: goto label_259038;
        case 0x259050u: goto label_259050;
        case 0x259088u: goto label_259088;
        case 0x25909cu: goto label_25909c;
        default: break;
    }

    ctx->pc = 0x258fb0u;

    // 0x258fb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x258fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x258fb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x258fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x258fb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x258fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x258fbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x258fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x258fc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x258fc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258fc8: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x258FC8u;
    SET_GPR_U32(ctx, 31, 0x258FD0u);
    ctx->pc = 0x258FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258FC8u;
    // 0x258fcc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x258FC8u, 0x258FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FD0u;
label_258fd0:
    // 0x258fd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x258fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258fd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x258fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258fd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x258fd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258fdc: 0x0  nop
    ctx->pc = 0x258fdcu;
    // NOP
label_258fe0:
    // 0x258fe0: 0x3c10008c  lui         $s0, 0x8C
    ctx->pc = 0x258fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)140 << 16));
    // 0x258fe4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x258fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258fe8: 0x2610edf0  addiu       $s0, $s0, -0x1210
    ctx->pc = 0x258fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962672));
    // 0x258fec: 0x0  nop
    ctx->pc = 0x258fecu;
    // NOP
label_258ff0:
    // 0x258ff0: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x258ff0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x258ff4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258ff8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x258FF8u;
    {
        const bool branch_taken_0x258ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x258ff8) {
            ctx->pc = 0x259058u;
            goto label_259058;
        }
    }
    ctx->pc = 0x259000u;
    // 0x259000: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x259000u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x259004: 0x16630014  bne         $s3, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x259004u;
    {
        const bool branch_taken_0x259004 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x259008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259004u;
        // 0x259008: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259004) {
            ctx->pc = 0x259058u;
            goto label_259058;
        }
    }
    ctx->pc = 0x25900Cu;
    // 0x25900c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25900Cu;
    {
        const bool branch_taken_0x25900c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25900c) {
            ctx->pc = 0x259040u;
            goto label_259040;
        }
    }
    ctx->pc = 0x259014u;
    // 0x259014: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259014u;
    {
        const bool branch_taken_0x259014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x259014) {
            ctx->pc = 0x259028u;
            goto label_259028;
        }
    }
    ctx->pc = 0x25901Cu;
    // 0x25901c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25901Cu;
    {
        const bool branch_taken_0x25901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25901c) {
            ctx->pc = 0x259058u;
            goto label_259058;
        }
    }
    ctx->pc = 0x259024u;
    // 0x259024: 0x0  nop
    ctx->pc = 0x259024u;
    // NOP
label_259028:
    // 0x259028: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x259028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x25902c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x25902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x259030: 0xc0962dc  jal         func_258B70
    ctx->pc = 0x259030u;
    SET_GPR_U32(ctx, 31, 0x259038u);
    ctx->pc = 0x259034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259030u;
    // 0x259034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B70u, 0x259030u, 0x259038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259038u;
label_259038:
    // 0x259038: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x259038u;
    {
        const bool branch_taken_0x259038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259038u;
        // 0x25903c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259038) {
            ctx->pc = 0x259058u;
            goto label_259058;
        }
    }
    ctx->pc = 0x259040u;
label_259040:
    // 0x259040: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x259040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x259044: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x259044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x259048: 0xc096394  jal         func_258E50
    ctx->pc = 0x259048u;
    SET_GPR_U32(ctx, 31, 0x259050u);
    ctx->pc = 0x25904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259048u;
    // 0x25904c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E50u, 0x259048u, 0x259050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259050u;
label_259050:
    // 0x259050: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x259050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x259054: 0x0  nop
    ctx->pc = 0x259054u;
    // NOP
label_259058:
    // 0x259058: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x259058u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25905c: 0x2a830020  slti        $v1, $s4, 0x20
    ctx->pc = 0x25905cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x259060: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x259060u;
    {
        const bool branch_taken_0x259060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259060u;
        // 0x259064: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259060) {
            ctx->pc = 0x258FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258ff0;
        }
    }
    ctx->pc = 0x259068u;
    // 0x259068: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x259068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25906c: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x25906cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x259070: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x259070u;
    {
        const bool branch_taken_0x259070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259070) {
            ctx->pc = 0x258FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258fe0;
        }
    }
    ctx->pc = 0x259078u;
    // 0x259078: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x259078u;
    {
        const bool branch_taken_0x259078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259078u;
        // 0x25907c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259078) {
            ctx->pc = 0x2590A0u;
            goto label_2590a0;
        }
    }
    ctx->pc = 0x259080u;
    // 0x259080: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x259080u;
    SET_GPR_U32(ctx, 31, 0x259088u);
    ctx->pc = 0x259084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259080u;
    // 0x259084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x259080u, 0x259088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259088u;
label_259088:
    // 0x259088: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x259088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25908c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x259090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259094: 0xc0745d8  jal         func_1D1760
    ctx->pc = 0x259094u;
    SET_GPR_U32(ctx, 31, 0x25909Cu);
    ctx->pc = 0x259098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259094u;
    // 0x259098: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1760u, 0x259094u, 0x25909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25909Cu;
label_25909c:
    // 0x25909c: 0x0  nop
    ctx->pc = 0x25909cu;
    // NOP
label_2590a0:
    // 0x2590a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2590a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2590a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2590a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2590a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2590a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2590ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2590acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2590b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2590b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2590b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2590b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2590b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2590B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2590BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590B8u;
        // 0x2590bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2590B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2590C0u;
}
