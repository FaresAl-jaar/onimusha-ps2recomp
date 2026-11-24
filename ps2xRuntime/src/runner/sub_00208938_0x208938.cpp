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

// Function: sub_00208938
// Address: 0x208938 - 0x208988
void sub_00208938_0x208938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208938_0x208938");
#endif

    ctx->pc = 0x208938u;

    // 0x208938: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x208938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x20893c: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x20893cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x208940: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x208940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208948: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x208948u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20894c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20894cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208950: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x208954: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x208954u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x208958: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x208958u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20895c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x20895cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x208960: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x208960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x208964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x208968: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x208968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x20896c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x208970: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x208970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x208974: 0x14870002  bne         $a0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x208974u;
    {
        const bool branch_taken_0x208974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x208978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208974u;
        // 0x208978: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208974) {
            ctx->pc = 0x208980u;
            goto label_208980;
        }
    }
    ctx->pc = 0x20897Cu;
    // 0x20897c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_208980:
    // 0x208980: 0x3e00008  jr          $ra
    ctx->pc = 0x208980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208988u;
}
