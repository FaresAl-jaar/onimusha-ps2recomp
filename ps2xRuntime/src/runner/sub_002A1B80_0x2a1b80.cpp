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

// Function: sub_002A1B80
// Address: 0x2a1b80 - 0x2a1bec
void sub_002A1B80_0x2a1b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1B80_0x2a1b80");
#endif

    switch (ctx->pc) {
        case 0x2a1bc8u: goto label_2a1bc8;
        default: break;
    }

    ctx->pc = 0x2a1b80u;

    // 0x2a1b80: 0x8c87007c  lw          $a3, 0x7C($a0)
    ctx->pc = 0x2a1b80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1b84: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2a1b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a1b88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1b8c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x2a1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1b90: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x2a1b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a1b94: 0x32138  dsll        $a0, $v1, 4
    ctx->pc = 0x2a1b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 4);
    // 0x2a1b98: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a1b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a1b9c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2a1b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2a1ba0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2a1ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2a1ba4: 0x3463000b  ori         $v1, $v1, 0xB
    ctx->pc = 0x2a1ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11);
    // 0x2a1ba8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a1ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a1bac: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a1bb0: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x2a1bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x2a1bb4: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x2a1bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a1bb8: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x2a1bb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2a1bbc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1bc0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2a1bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a1bc4: 0x0  nop
    ctx->pc = 0x2a1bc4u;
    // NOP
label_2a1bc8:
    // 0x2a1bc8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2a1bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a1bcc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a1bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a1bd0: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x2a1bd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a1bd4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a1bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a1bd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a1bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1bdc: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1BDCu;
    {
        const bool branch_taken_0x2a1bdc = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x2A1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1BDCu;
        // 0x2a1be0: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1bdc) {
            ctx->pc = 0x2A1BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1bc8;
        }
    }
    ctx->pc = 0x2A1BE4u;
    // 0x2a1be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1BECu;
}
