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

// Function: sub_001F3050
// Address: 0x1f3050 - 0x1f30a8
void sub_001F3050_0x1f3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3050_0x1f3050");
#endif

    ctx->pc = 0x1f3050u;

    // 0x1f3050: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F3050u;
    {
        const bool branch_taken_0x1f3050 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3050u;
        // 0x1f3054: 0x30a3000f  andi        $v1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3050) {
            ctx->pc = 0x1F30A0u;
            goto label_1f30a0;
        }
    }
    ctx->pc = 0x1F3058u;
    // 0x1f3058: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x1f3058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f305c: 0x9083008f  lbu         $v1, 0x8F($a0)
    ctx->pc = 0x1f305cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 143)));
    // 0x1f3060: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F3060u;
    {
        const bool branch_taken_0x1f3060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3060u;
        // 0x1f3064: 0x53902  srl         $a3, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3060) {
            ctx->pc = 0x1F30A0u;
            goto label_1f30a0;
        }
    }
    ctx->pc = 0x1F3068u;
    // 0x1f3068: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1f3068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f306c: 0xa085008f  sb          $a1, 0x8F($a0)
    ctx->pc = 0x1f306cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 143), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f3070: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x1f3070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f3074: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1f3074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f3078: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f3078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f307c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1f307cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f3080: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f3080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f3084: 0xa0a60080  sb          $a2, 0x80($a1)
    ctx->pc = 0x1f3084u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f3088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f308c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1f308cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1f3090: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f3090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f3094: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f3094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f3098: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f3098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1f309c: 0x0  nop
    ctx->pc = 0x1f309cu;
    // NOP
label_1f30a0:
    // 0x1f30a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F30A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F30A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F30A8u;
}
