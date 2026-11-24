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

// Function: sub_002A3C60
// Address: 0x2a3c60 - 0x2a3d00
void sub_002A3C60_0x2a3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3C60_0x2a3c60");
#endif

    switch (ctx->pc) {
        case 0x2a3c88u: goto label_2a3c88;
        default: break;
    }

    ctx->pc = 0x2a3c60u;

    // 0x2a3c60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a3c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a3c64: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x2a3c64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a3c68: 0x9025cea4  lbu         $a1, -0x315C($at)
    ctx->pc = 0x2a3c68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x2a3c6c: 0x8c89007c  lw          $t1, 0x7C($a0)
    ctx->pc = 0x2a3c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a3c70: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2a3c70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a3c74: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A3C74u;
    {
        const bool branch_taken_0x2a3c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C74u;
        // 0x2a3c78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c74) {
            ctx->pc = 0x2A3CF8u;
            goto label_2a3cf8;
        }
    }
    ctx->pc = 0x2A3C7Cu;
    // 0x2a3c7c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2a3c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a3c80: 0x1233821  addu        $a3, $t1, $v1
    ctx->pc = 0x2a3c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2a3c84: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x2a3c84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_2a3c88:
    // 0x2a3c88: 0x24e30090  addiu       $v1, $a3, 0x90
    ctx->pc = 0x2a3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x2a3c8c: 0xad2300d0  sw          $v1, 0xD0($t1)
    ctx->pc = 0x2a3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 208), GPR_U32(ctx, 3));
    // 0x2a3c90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a3c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a3c94: 0x24e300b0  addiu       $v1, $a3, 0xB0
    ctx->pc = 0x2a3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x2a3c98: 0xad2300d4  sw          $v1, 0xD4($t1)
    ctx->pc = 0x2a3c98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 212), GPR_U32(ctx, 3));
    // 0x2a3c9c: 0x24e701f0  addiu       $a3, $a3, 0x1F0
    ctx->pc = 0x2a3c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 496));
    // 0x2a3ca0: 0x8d2500d4  lw          $a1, 0xD4($t1)
    ctx->pc = 0x2a3ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x2a3ca4: 0x8d2300d0  lw          $v1, 0xD0($t1)
    ctx->pc = 0x2a3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 208)));
    // 0x2a3ca8: 0x5293c  dsll32      $a1, $a1, 4
    ctx->pc = 0x2a3ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 4));
    // 0x2a3cac: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x2a3cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x2a3cb0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2a3cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a3cb4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2a3cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2a3cb8: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2a3cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2a3cbc: 0x8d2300d0  lw          $v1, 0xD0($t1)
    ctx->pc = 0x2a3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 208)));
    // 0x2a3cc0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2a3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2a3cc4: 0x8d2300d0  lw          $v1, 0xD0($t1)
    ctx->pc = 0x2a3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 208)));
    // 0x2a3cc8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2a3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2a3ccc: 0x8d2300d4  lw          $v1, 0xD4($t1)
    ctx->pc = 0x2a3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x2a3cd0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2a3cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2a3cd4: 0x8d2300d4  lw          $v1, 0xD4($t1)
    ctx->pc = 0x2a3cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x2a3cd8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2a3cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2a3cdc: 0x8d2300d4  lw          $v1, 0xD4($t1)
    ctx->pc = 0x2a3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x2a3ce0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2a3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2a3ce4: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x2a3ce4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a3ce8: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x2a3ce8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a3cec: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2A3CECu;
    {
        const bool branch_taken_0x2a3cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3CECu;
        // 0x2a3cf0: 0x252901f0  addiu       $t1, $t1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3cec) {
            ctx->pc = 0x2A3C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3c88;
        }
    }
    ctx->pc = 0x2A3CF4u;
    // 0x2a3cf4: 0x0  nop
    ctx->pc = 0x2a3cf4u;
    // NOP
label_2a3cf8:
    // 0x2a3cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3D00u;
}
