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

// Function: sub_00208988
// Address: 0x208988 - 0x2089d4
void sub_00208988_0x208988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208988_0x208988");
#endif

    ctx->pc = 0x208988u;

    // 0x208988: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x208988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x20898c: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x20898cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x208990: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x208990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208994: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208998: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x208998u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20899c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2089a0: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2089a4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2089a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2089a8: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x2089a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2089ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2089acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2089b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2089b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2089b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2089b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2089b8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2089b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2089bc: 0x8ca400c0  lw          $a0, 0xC0($a1)
    ctx->pc = 0x2089bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x2089c0: 0x14870002  bne         $a0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2089C0u;
    {
        const bool branch_taken_0x2089c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x2089C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089C0u;
        // 0x2089c4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089c0) {
            ctx->pc = 0x2089CCu;
            goto label_2089cc;
        }
    }
    ctx->pc = 0x2089C8u;
    // 0x2089c8: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x2089c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
label_2089cc:
    // 0x2089cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2089CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2089CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2089D4u;
}
