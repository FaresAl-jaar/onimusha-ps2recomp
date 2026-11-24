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

// Function: sub_00272A30
// Address: 0x272a30 - 0x272b58
void sub_00272A30_0x272a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272A30_0x272a30");
#endif

    switch (ctx->pc) {
        case 0x272a78u: goto label_272a78;
        case 0x272ac0u: goto label_272ac0;
        case 0x272aecu: goto label_272aec;
        case 0x272b00u: goto label_272b00;
        case 0x272b0cu: goto label_272b0c;
        case 0x272b28u: goto label_272b28;
        case 0x272b3cu: goto label_272b3c;
        default: break;
    }

    ctx->pc = 0x272a30u;

    // 0x272a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272a34: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x272a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x272a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272a40: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x272a40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x272a44: 0x10a30036  beq         $a1, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x272A44u;
    {
        const bool branch_taken_0x272a44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x272A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A44u;
        // 0x272a48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a44) {
            ctx->pc = 0x272B20u;
            goto label_272b20;
        }
    }
    ctx->pc = 0x272A4Cu;
    // 0x272a4c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x272a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x272a50: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x272A50u;
    {
        const bool branch_taken_0x272a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x272A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A50u;
        // 0x272a54: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a50) {
            ctx->pc = 0x272AF8u;
            goto label_272af8;
        }
    }
    ctx->pc = 0x272A58u;
    // 0x272a58: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x272A58u;
    {
        const bool branch_taken_0x272a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x272a58) {
            ctx->pc = 0x272AB8u;
            goto label_272ab8;
        }
    }
    ctx->pc = 0x272A60u;
    // 0x272a60: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272A60u;
    {
        const bool branch_taken_0x272a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x272a60) {
            ctx->pc = 0x272A70u;
            goto label_272a70;
        }
    }
    ctx->pc = 0x272A68u;
    // 0x272a68: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x272A68u;
    {
        const bool branch_taken_0x272a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272a68) {
            ctx->pc = 0x272B48u;
            goto label_272b48;
        }
    }
    ctx->pc = 0x272A70u;
label_272a70:
    // 0x272a70: 0xc09cbec  jal         func_272FB0
    ctx->pc = 0x272A70u;
    SET_GPR_U32(ctx, 31, 0x272A78u);
    ctx->pc = 0x272A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A70u;
    // 0x272a74: 0x8205002e  lb          $a1, 0x2E($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272FB0u, 0x272A70u, 0x272A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A78u;
label_272a78:
    // 0x272a78: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x272a78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x272a7c: 0x2483fffd  addiu       $v1, $a0, -0x3
    ctx->pc = 0x272a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x272a80: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x272a80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x272a84: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x272A84u;
    {
        const bool branch_taken_0x272a84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x272A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A84u;
        // 0x272a88: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a84) {
            ctx->pc = 0x272A98u;
            goto label_272a98;
        }
    }
    ctx->pc = 0x272A8Cu;
    // 0x272a8c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x272A8Cu;
    {
        const bool branch_taken_0x272a8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x272a8c) {
            ctx->pc = 0x272AA8u;
            goto label_272aa8;
        }
    }
    ctx->pc = 0x272A94u;
    // 0x272a94: 0x0  nop
    ctx->pc = 0x272a94u;
    // NOP
label_272a98:
    // 0x272a98: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x272a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x272a9c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x272A9Cu;
    {
        const bool branch_taken_0x272a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A9Cu;
        // 0x272aa0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a9c) {
            ctx->pc = 0x272B48u;
            goto label_272b48;
        }
    }
    ctx->pc = 0x272AA4u;
    // 0x272aa4: 0x0  nop
    ctx->pc = 0x272aa4u;
    // NOP
label_272aa8:
    // 0x272aa8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x272aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x272aac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x272AACu;
    {
        const bool branch_taken_0x272aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AACu;
        // 0x272ab0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272aac) {
            ctx->pc = 0x272B48u;
            goto label_272b48;
        }
    }
    ctx->pc = 0x272AB4u;
    // 0x272ab4: 0x0  nop
    ctx->pc = 0x272ab4u;
    // NOP
label_272ab8:
    // 0x272ab8: 0xc09cbec  jal         func_272FB0
    ctx->pc = 0x272AB8u;
    SET_GPR_U32(ctx, 31, 0x272AC0u);
    ctx->pc = 0x272ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AB8u;
    // 0x272abc: 0x8205002e  lb          $a1, 0x2E($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272FB0u, 0x272AB8u, 0x272AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AC0u;
label_272ac0:
    // 0x272ac0: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x272ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x272ac4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272ac8: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x272ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x272acc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x272accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x272ad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ad8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272adc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x272adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272ae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x272ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x272ae4: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x272AE4u;
    SET_GPR_U32(ctx, 31, 0x272AECu);
    ctx->pc = 0x272AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AE4u;
    // 0x272ae8: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x272AE4u, 0x272AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AECu;
label_272aec:
    // 0x272aec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x272AECu;
    {
        const bool branch_taken_0x272aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272aec) {
            ctx->pc = 0x272B48u;
            goto label_272b48;
        }
    }
    ctx->pc = 0x272AF4u;
    // 0x272af4: 0x0  nop
    ctx->pc = 0x272af4u;
    // NOP
label_272af8:
    // 0x272af8: 0xc09cbec  jal         func_272FB0
    ctx->pc = 0x272AF8u;
    SET_GPR_U32(ctx, 31, 0x272B00u);
    ctx->pc = 0x272AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AF8u;
    // 0x272afc: 0x8205002e  lb          $a1, 0x2E($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272FB0u, 0x272AF8u, 0x272B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B00u;
label_272b00:
    // 0x272b00: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272b04: 0xc063d48  jal         func_18F520
    ctx->pc = 0x272B04u;
    SET_GPR_U32(ctx, 31, 0x272B0Cu);
    ctx->pc = 0x272B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B04u;
    // 0x272b08: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x272B04u, 0x272B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B0Cu;
label_272b0c:
    // 0x272b0c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x272B0Cu;
    {
        const bool branch_taken_0x272b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B0Cu;
        // 0x272b10: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b0c) {
            ctx->pc = 0x272B48u;
            goto label_272b48;
        }
    }
    ctx->pc = 0x272B14u;
    // 0x272b14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x272B14u;
    {
        const bool branch_taken_0x272b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B14u;
        // 0x272b18: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b14) {
            ctx->pc = 0x272B48u;
            goto label_272b48;
        }
    }
    ctx->pc = 0x272B1Cu;
    // 0x272b1c: 0x0  nop
    ctx->pc = 0x272b1cu;
    // NOP
label_272b20:
    // 0x272b20: 0xc09c438  jal         func_2710E0
    ctx->pc = 0x272B20u;
    SET_GPR_U32(ctx, 31, 0x272B28u);
    ctx->pc = 0x2710E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2710E0u, 0x272B20u, 0x272B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B28u;
label_272b28:
    // 0x272b28: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x272b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x272b2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x272b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272b30: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x272b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x272b34: 0xc095130  jal         func_2544C0
    ctx->pc = 0x272B34u;
    SET_GPR_U32(ctx, 31, 0x272B3Cu);
    ctx->pc = 0x272B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B34u;
    // 0x272b38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x272B34u, 0x272B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B3Cu;
label_272b3c:
    // 0x272b3c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x272b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x272b40: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x272b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x272b44: 0x0  nop
    ctx->pc = 0x272b44u;
    // NOP
label_272b48:
    // 0x272b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272b50: 0x3e00008  jr          $ra
    ctx->pc = 0x272B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B50u;
        // 0x272b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272B58u;
}
