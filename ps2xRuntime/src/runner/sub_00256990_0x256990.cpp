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

// Function: sub_00256990
// Address: 0x256990 - 0x256a0c
void sub_00256990_0x256990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256990_0x256990");
#endif

    ctx->pc = 0x256990u;

    // 0x256990: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x256990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256994: 0x80a2008a  lb          $v0, 0x8A($a1)
    ctx->pc = 0x256994u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 138)));
    // 0x256998: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x256998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x25699c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x25699Cu;
    {
        const bool branch_taken_0x25699c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25699c) {
            ctx->pc = 0x2569E0u;
            goto label_2569e0;
        }
    }
    ctx->pc = 0x2569A4u;
    // 0x2569a4: 0x84a3001e  lh          $v1, 0x1E($a1)
    ctx->pc = 0x2569a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x2569a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2569a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2569ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2569acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2569b0: 0xa443004a  sh          $v1, 0x4A($v0)
    ctx->pc = 0x2569b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x2569b4: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x2569b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2569b8: 0x80a2008a  lb          $v0, 0x8A($a1)
    ctx->pc = 0x2569b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 138)));
    // 0x2569bc: 0x84a30020  lh          $v1, 0x20($a1)
    ctx->pc = 0x2569bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2569c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2569c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2569c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2569c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2569c8: 0xa443004c  sh          $v1, 0x4C($v0)
    ctx->pc = 0x2569c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x2569cc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2569ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2569d0: 0x8062008a  lb          $v0, 0x8A($v1)
    ctx->pc = 0x2569d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 138)));
    // 0x2569d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2569d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2569d8: 0xa062008a  sb          $v0, 0x8A($v1)
    ctx->pc = 0x2569d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 138), (uint8_t)GPR_U32(ctx, 2));
    // 0x2569dc: 0x0  nop
    ctx->pc = 0x2569dcu;
    // NOP
label_2569e0:
    // 0x2569e0: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x2569e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2569e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2569e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2569e8: 0x84c50024  lh          $a1, 0x24($a2)
    ctx->pc = 0x2569e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2569ec: 0x84c3001e  lh          $v1, 0x1E($a2)
    ctx->pc = 0x2569ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x2569f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2569f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2569f4: 0xa4c3001e  sh          $v1, 0x1E($a2)
    ctx->pc = 0x2569f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x2569f8: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x2569f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2569fc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2569fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x256a00: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x256a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x256a04: 0x3e00008  jr          $ra
    ctx->pc = 0x256A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A04u;
        // 0x256a08: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256A0Cu;
}
