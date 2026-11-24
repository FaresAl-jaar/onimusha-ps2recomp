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

// Function: sub_00348980
// Address: 0x348980 - 0x348a6c
void sub_00348980_0x348980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348980_0x348980");
#endif

    switch (ctx->pc) {
        case 0x3489c8u: goto label_3489c8;
        case 0x348a08u: goto label_348a08;
        case 0x348a18u: goto label_348a18;
        default: break;
    }

    ctx->pc = 0x348980u;

    // 0x348980: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x348980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x348984: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x348984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x348988: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x348988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x34898c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x348990: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x348990u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348994: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x348994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x348998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34899c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3489a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3489a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3489a4: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x3489a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3489a8: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x3489a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3489ac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3489acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3489b0: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x3489B0u;
    {
        const bool branch_taken_0x3489b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3489B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3489B0u;
        // 0x3489b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489b0) {
            ctx->pc = 0x348A48u;
            goto label_348a48;
        }
    }
    ctx->pc = 0x3489B8u;
    // 0x3489b8: 0x5863c  dsll32      $s0, $a1, 24
    ctx->pc = 0x3489b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 24));
    // 0x3489bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3489bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3489c0: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x3489c0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x3489c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3489c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3489c8:
    // 0x3489c8: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x3489c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x3489cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3489ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3489d0: 0x90630011  lbu         $v1, 0x11($v1)
    ctx->pc = 0x3489d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x3489d4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3489d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3489d8: 0x16030013  bne         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3489D8u;
    {
        const bool branch_taken_0x3489d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3489d8) {
            ctx->pc = 0x348A28u;
            goto label_348a28;
        }
    }
    ctx->pc = 0x3489E0u;
    // 0x3489e0: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x3489e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x3489e4: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x3489e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x3489e8: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x3489e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x3489ec: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x3489ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3489f0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x3489f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3489f4: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x3489f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3489f8: 0x24670006  addiu       $a3, $v1, 0x6
    ctx->pc = 0x3489f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x3489fc: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x3489fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x348a00: 0xc096da0  jal         func_25B680
    ctx->pc = 0x348A00u;
    SET_GPR_U32(ctx, 31, 0x348A08u);
    ctx->pc = 0x348A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A00u;
    // 0x348a04: 0x2469000c  addiu       $t1, $v1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x348A00u, 0x348A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A08u;
label_348a08:
    // 0x348a08: 0xa6600022  sh          $zero, 0x22($s3)
    ctx->pc = 0x348a08u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x348a0c: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x348a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x348a10: 0xc096d80  jal         func_25B600
    ctx->pc = 0x348A10u;
    SET_GPR_U32(ctx, 31, 0x348A18u);
    ctx->pc = 0x348A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A10u;
    // 0x348a14: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x348A10u, 0x348A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A18u;
label_348a18:
    // 0x348a18: 0xa2620024  sb          $v0, 0x24($s3)
    ctx->pc = 0x348a18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x348a1c: 0xa6600020  sh          $zero, 0x20($s3)
    ctx->pc = 0x348a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x348a20: 0xa2600025  sb          $zero, 0x25($s3)
    ctx->pc = 0x348a20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x348a24: 0x0  nop
    ctx->pc = 0x348a24u;
    // NOP
label_348a28:
    // 0x348a28: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x348a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x348a2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x348a2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x348a30: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x348a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x348a34: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x348a34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348a38: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x348a38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x348a3c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x348A3Cu;
    {
        const bool branch_taken_0x348a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A3Cu;
        // 0x348a40: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a3c) {
            ctx->pc = 0x3489C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3489c8;
        }
    }
    ctx->pc = 0x348A44u;
    // 0x348a44: 0x0  nop
    ctx->pc = 0x348a44u;
    // NOP
label_348a48:
    // 0x348a48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x348a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x348a4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x348a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x348a50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x348a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x348a54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x348a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348a64: 0x3e00008  jr          $ra
    ctx->pc = 0x348A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348A64u;
        // 0x348a68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348A6Cu;
}
