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

// Function: sub_002BC940
// Address: 0x2bc940 - 0x2bc980
void sub_002BC940_0x2bc940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC940_0x2bc940");
#endif

    ctx->pc = 0x2bc940u;

    // 0x2bc940: 0x94c90002  lhu         $t1, 0x2($a2)
    ctx->pc = 0x2bc940u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bc944: 0x24c2000a  addiu       $v0, $a2, 0xA
    ctx->pc = 0x2bc944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x2bc948: 0x94c80004  lhu         $t0, 0x4($a2)
    ctx->pc = 0x2bc948u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bc94c: 0x94c70006  lhu         $a3, 0x6($a2)
    ctx->pc = 0x2bc94cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2bc950: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x2bc950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2bc954: 0xa08000e6  sb          $zero, 0xE6($a0)
    ctx->pc = 0x2bc954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 230), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc958: 0x83438  dsll        $a2, $t0, 16
    ctx->pc = 0x2bc958u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 16);
    // 0x2bc95c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2bc95cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2bc960: 0x1264025  or          $t0, $t1, $a2
    ctx->pc = 0x2bc960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x2bc964: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x2bc964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2bc968: 0xdca30500  ld          $v1, 0x500($a1)
    ctx->pc = 0x2bc968u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2bc96c: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x2bc96cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x2bc970: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x2bc970u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x2bc974: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2bc974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2bc978: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC978u;
        // 0x2bc97c: 0xfca30500  sd          $v1, 0x500($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC980u;
}
