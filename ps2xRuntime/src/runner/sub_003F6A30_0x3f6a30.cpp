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

// Function: sub_003F6A30
// Address: 0x3f6a30 - 0x3f6b1c
void sub_003F6A30_0x3f6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6A30_0x3f6a30");
#endif

    switch (ctx->pc) {
        case 0x3f6a48u: goto label_3f6a48;
        case 0x3f6a60u: goto label_3f6a60;
        case 0x3f6a70u: goto label_3f6a70;
        default: break;
    }

    ctx->pc = 0x3f6a30u;

    // 0x3f6a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f6a34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f6a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f6a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f6a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f6a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f6a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f6a40: 0xc049522  jal         func_125488
    ctx->pc = 0x3F6A40u;
    SET_GPR_U32(ctx, 31, 0x3F6A48u);
    ctx->pc = 0x3F6A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6A40u;
    // 0x3f6a44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3F6A40u, 0x3F6A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6A48u;
label_3f6a48:
    // 0x3f6a48: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x3f6a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f6a4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f6a4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6a50: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x3f6a50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3f6a54: 0x30670007  andi        $a3, $v1, 0x7
    ctx->pc = 0x3f6a54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3f6a58: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x3f6a58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f6a5c: 0x0  nop
    ctx->pc = 0x3f6a5cu;
    // NOP
label_3f6a60:
    // 0x3f6a60: 0x2083021  addu        $a2, $s0, $t0
    ctx->pc = 0x3f6a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x3f6a64: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3f6a64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f6a68: 0xc0fda80  jal         func_3F6A00
    ctx->pc = 0x3F6A68u;
    SET_GPR_U32(ctx, 31, 0x3F6A70u);
    ctx->pc = 0x3F6A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6A68u;
    // 0x3f6a6c: 0x30e50007  andi        $a1, $a3, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6A00u, 0x3F6A68u, 0x3F6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6A70u;
label_3f6a70:
    // 0x3f6a70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f6a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f6a74: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3f6a74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6a78: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x3f6a78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f6a7c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3F6A7Cu;
    {
        const bool branch_taken_0x3f6a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A7Cu;
        // 0x3f6a80: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6a7c) {
            ctx->pc = 0x3F6A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6a60;
        }
    }
    ctx->pc = 0x3F6A84u;
    // 0x3f6a84: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x3f6a84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f6a88: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x3f6a88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x3f6a8c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x3f6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3f6a90: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x3f6a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3f6a94: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3f6a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f6a98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3f6a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3f6a9c: 0xc71826  xor         $v1, $a2, $a3
    ctx->pc = 0x3f6a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x3f6aa0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3f6aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f6aa4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f6aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f6aa8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x3f6aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x3f6aac: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3f6aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f6ab0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3f6ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f6ab4: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x3f6ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3f6ab8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3f6ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f6abc: 0x8f8484a8  lw          $a0, -0x7B58($gp)
    ctx->pc = 0x3f6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935720)));
    // 0x3f6ac0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3f6ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f6ac4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3f6ac4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f6ac8: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x3f6ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3f6acc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3f6accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f6ad0: 0x8f8484a8  lw          $a0, -0x7B58($gp)
    ctx->pc = 0x3f6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935720)));
    // 0x3f6ad4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f6ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f6ad8: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x3f6ad8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3f6adc: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x3f6adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3f6ae0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3f6ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f6ae4: 0x8f8484a8  lw          $a0, -0x7B58($gp)
    ctx->pc = 0x3f6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935720)));
    // 0x3f6ae8: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3f6ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f6aec: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3f6aecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3f6af0: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x3f6af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3f6af4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3f6af4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f6af8: 0x8f8484a8  lw          $a0, -0x7B58($gp)
    ctx->pc = 0x3f6af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935720)));
    // 0x3f6afc: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x3f6afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3f6b00: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x3f6b00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3f6b04: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x3f6b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x3f6b08: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x3f6b08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f6b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f6b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6b10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f6b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6b14: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B14u;
        // 0x3f6b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6B1Cu;
}
