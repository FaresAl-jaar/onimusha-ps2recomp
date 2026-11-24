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

// Function: sub_002752E0
// Address: 0x2752e0 - 0x275330
void sub_002752E0_0x2752e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002752E0_0x2752e0");
#endif

    ctx->pc = 0x2752e0u;

    // 0x2752e0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2752e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2752e4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2752e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2752e8: 0x8ca506ac  lw          $a1, 0x6AC($a1)
    ctx->pc = 0x2752e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1708)));
    // 0x2752ec: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2752ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2752f0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2752F0u;
    {
        const bool branch_taken_0x2752f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2752f0) {
            ctx->pc = 0x275308u;
            goto label_275308;
        }
    }
    ctx->pc = 0x2752F8u;
    // 0x2752f8: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x2752f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2752fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2752fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x275300: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x275300u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x275304: 0x0  nop
    ctx->pc = 0x275304u;
    // NOP
label_275308:
    // 0x275308: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x275308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x27530c: 0x3405fffe  ori         $a1, $zero, 0xFFFE
    ctx->pc = 0x27530cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x275310: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x275310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x275314: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275314u;
    {
        const bool branch_taken_0x275314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x275314) {
            ctx->pc = 0x275320u;
            goto label_275320;
        }
    }
    ctx->pc = 0x27531Cu;
    // 0x27531c: 0xa485000a  sh          $a1, 0xA($a0)
    ctx->pc = 0x27531cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 5));
label_275320:
    // 0x275320: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x275320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x275324: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x275324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x275328: 0x3e00008  jr          $ra
    ctx->pc = 0x275328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275328u;
        // 0x27532c: 0xa0830008  sb          $v1, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275330u;
}
