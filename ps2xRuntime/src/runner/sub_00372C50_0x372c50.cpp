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

// Function: sub_00372C50
// Address: 0x372c50 - 0x372cb4
void sub_00372C50_0x372c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372C50_0x372c50");
#endif

    switch (ctx->pc) {
        case 0x372c98u: goto label_372c98;
        case 0x372ca4u: goto label_372ca4;
        default: break;
    }

    ctx->pc = 0x372c50u;

    // 0x372c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x372c54: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x372c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x372c58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x372c5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x372c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372c60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372c64: 0x2463ace0  addiu       $v1, $v1, -0x5320
    ctx->pc = 0x372c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946016));
    // 0x372c68: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x372c68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x372c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c70: 0x9085001c  lbu         $a1, 0x1C($a0)
    ctx->pc = 0x372c70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x372c74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x372c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x372c78: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x372c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x372c7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x372c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x372c80: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x372c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x372c84: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x372c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x372c88: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x372c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x372c8c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x372c8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x372c90: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x372C90u;
    SET_GPR_U32(ctx, 31, 0x372C98u);
    ctx->pc = 0x372C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C90u;
    // 0x372c94: 0xa0820020  sb          $v0, 0x20($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x372C90u, 0x372C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C98u;
label_372c98:
    // 0x372c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c9c: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x372C9Cu;
    SET_GPR_U32(ctx, 31, 0x372CA4u);
    ctx->pc = 0x372CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C9Cu;
    // 0x372ca0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x372C9Cu, 0x372CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CA4u;
label_372ca4:
    // 0x372ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372cac: 0x3e00008  jr          $ra
    ctx->pc = 0x372CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CACu;
        // 0x372cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372CB4u;
}
