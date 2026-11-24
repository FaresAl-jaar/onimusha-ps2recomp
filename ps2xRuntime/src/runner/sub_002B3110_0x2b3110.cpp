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

// Function: sub_002B3110
// Address: 0x2b3110 - 0x2b3164
void sub_002B3110_0x2b3110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3110_0x2b3110");
#endif

    switch (ctx->pc) {
        case 0x2b3138u: goto label_2b3138;
        default: break;
    }

    ctx->pc = 0x2b3110u;

    // 0x2b3110: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x2b3110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x2b3114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3118: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2b3118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2b311c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2b311cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b3120: 0xa0a3000c  sb          $v1, 0xC($a1)
    ctx->pc = 0x2b3120u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3124: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2b3124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b3128: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2b3128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2b312c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x2b312cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3130: 0xa0a0000d  sb          $zero, 0xD($a1)
    ctx->pc = 0x2b3130u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3134: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2b3134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2b3138:
    // 0x2b3138: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x2b3138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2b313c: 0xa0c4000e  sb          $a0, 0xE($a2)
    ctx->pc = 0x2b313cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3140: 0x24e70005  addiu       $a3, $a3, 0x5
    ctx->pc = 0x2b3140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x2b3144: 0xa0c4000f  sb          $a0, 0xF($a2)
    ctx->pc = 0x2b3144u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3148: 0x2ce3000a  sltiu       $v1, $a3, 0xA
    ctx->pc = 0x2b3148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2b314c: 0xa0c40010  sb          $a0, 0x10($a2)
    ctx->pc = 0x2b314cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3150: 0xa0c40011  sb          $a0, 0x11($a2)
    ctx->pc = 0x2b3150u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3154: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B3154u;
    {
        const bool branch_taken_0x2b3154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3154u;
        // 0x2b3158: 0xa0c40012  sb          $a0, 0x12($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3154) {
            ctx->pc = 0x2B3138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3138;
        }
    }
    ctx->pc = 0x2B315Cu;
    // 0x2b315c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B315Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B315Cu;
        // 0x2b3160: 0xa0a00015  sb          $zero, 0x15($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B315Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3164u;
}
