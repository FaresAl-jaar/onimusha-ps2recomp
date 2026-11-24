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

// Function: sub_002A1C90
// Address: 0x2a1c90 - 0x2a1d2c
void sub_002A1C90_0x2a1c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1C90_0x2a1c90");
#endif

    switch (ctx->pc) {
        case 0x2a1d08u: goto label_2a1d08;
        default: break;
    }

    ctx->pc = 0x2a1c90u;

    // 0x2a1c90: 0x8c8c007c  lw          $t4, 0x7C($a0)
    ctx->pc = 0x2a1c90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1c94: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x2a1c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2a1c98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1c9c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a1c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a1ca0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a1ca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a1ca4: 0x320b8  dsll        $a0, $v1, 2
    ctx->pc = 0x2a1ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 2);
    // 0x2a1ca8: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x2a1ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a1cac: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x2a1cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2a1cb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1cb4: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x2a1cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x2a1cb8: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x2a1cb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1cbc: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x2a1cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2a1cc0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1cc4: 0x321b8  dsll        $a0, $v1, 6
    ctx->pc = 0x2a1cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 6);
    // 0x2a1cc8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x2a1cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2a1ccc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2a1cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2a1cd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1cd4: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x2a1cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1cd8: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x2a1cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x2a1cdc: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x2a1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a1ce0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2a1ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1ce4: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x2a1ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2a1ce8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1cec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a1cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a1cf0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2a1cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1cf4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2a1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a1cf8: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x2a1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2a1cfc: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x2a1cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a1d00: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x2a1d00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2a1d04: 0x0  nop
    ctx->pc = 0x2a1d04u;
    // NOP
label_2a1d08:
    // 0x2a1d08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a1d0c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a1d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a1d10: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x2a1d10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x2a1d14: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2a1d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2a1d18: 0x0  nop
    ctx->pc = 0x2a1d18u;
    // NOP
    // 0x2a1d1c: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1D1Cu;
    {
        const bool branch_taken_0x2a1d1c = (GPR_S64(ctx, 5) > 0);
        if (branch_taken_0x2a1d1c) {
            ctx->pc = 0x2A1D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1d08;
        }
    }
    ctx->pc = 0x2A1D24u;
    // 0x2a1d24: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1D2Cu;
}
