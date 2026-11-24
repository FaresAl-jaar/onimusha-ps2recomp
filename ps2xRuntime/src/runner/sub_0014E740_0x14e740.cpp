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

// Function: sub_0014E740
// Address: 0x14e740 - 0x14e7b0
void sub_0014E740_0x14e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E740_0x14e740");
#endif

    ctx->pc = 0x14e740u;

    // 0x14e740: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x14e740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e744: 0x78ea0000  lq          $t2, 0x0($a3)
    ctx->pc = 0x14e744u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14e748: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x14e748u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e74c: 0x8ca300ec  lw          $v1, 0xEC($a1)
    ctx->pc = 0x14e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e750: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14e750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14e754: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e75c: 0x246b00d0  addiu       $t3, $v1, 0xD0
    ctx->pc = 0x14e75cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x14e760: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x14e760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e764: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x14e764u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
    // 0x14e768: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x14e768u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e76c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x14e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e770: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14e774: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x14e774u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e778: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x14e778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e77c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x14e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e780: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x14e780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e784: 0x8ca600ec  lw          $a2, 0xEC($a1)
    ctx->pc = 0x14e784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e788: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e78c: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x14e78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x14e790: 0xa4c80008  sh          $t0, 0x8($a2)
    ctx->pc = 0x14e790u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x14e794: 0x8ca600ec  lw          $a2, 0xEC($a1)
    ctx->pc = 0x14e794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e798: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x14e798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14e79c: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x14e79cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x14e7a0: 0x8ca400ec  lw          $a0, 0xEC($a1)
    ctx->pc = 0x14e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e7a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7A8u;
        // 0x14e7ac: 0xa067000c  sb          $a3, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E7B0u;
}
