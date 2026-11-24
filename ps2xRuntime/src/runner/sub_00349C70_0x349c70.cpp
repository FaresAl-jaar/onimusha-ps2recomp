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

// Function: sub_00349C70
// Address: 0x349c70 - 0x349cc8
void sub_00349C70_0x349c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349C70_0x349c70");
#endif

    ctx->pc = 0x349c70u;

    // 0x349c70: 0x9085005f  lbu         $a1, 0x5F($a0)
    ctx->pc = 0x349c70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
    // 0x349c74: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x349c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x349c78: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x349c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x349c7c: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x349c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x349c80: 0x52240  sll         $a0, $a1, 9
    ctx->pc = 0x349c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x349c84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x349c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x349c88: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x349c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x349c8c: 0x944201cc  lhu         $v0, 0x1CC($v0)
    ctx->pc = 0x349c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 460)));
    // 0x349c90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x349c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x349c94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x349c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x349c98: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349C98u;
    {
        const bool branch_taken_0x349c98 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x349c98) {
            ctx->pc = 0x349CA8u;
            goto label_349ca8;
        }
    }
    ctx->pc = 0x349CA0u;
    // 0x349ca0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x349ca0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x349ca4: 0x0  nop
    ctx->pc = 0x349ca4u;
    // NOP
label_349ca8:
    // 0x349ca8: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x349ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x349cac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x349cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x349cb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x349CB0u;
    {
        const bool branch_taken_0x349cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349cb0) {
            ctx->pc = 0x349CC0u;
            goto label_349cc0;
        }
    }
    ctx->pc = 0x349CB8u;
    // 0x349cb8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x349cb8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x349cbc: 0x0  nop
    ctx->pc = 0x349cbcu;
    // NOP
label_349cc0:
    // 0x349cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x349CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349CC8u;
}
