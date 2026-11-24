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

// Function: sub_00179200
// Address: 0x179200 - 0x179258
void sub_00179200_0x179200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179200_0x179200");
#endif

    ctx->pc = 0x179200u;

    // 0x179200: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x179200u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179204: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x179204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x179208: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x179208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17920c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x17920cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x179210: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x179210u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x179214: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x179214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x179218: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x179218u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x17921c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17921cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x179220: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x179220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x179224: 0x70084389  pcpyld      $t0, $zero, $t0
    ctx->pc = 0x179224u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x179228: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x179228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x17922c: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x17922cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x179230: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x179230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x179234: 0x34038fff  ori         $v1, $zero, 0x8FFF
    ctx->pc = 0x179234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36863);
    // 0x179238: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x179238u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x17923c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17923cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x179240: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x179240u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179244: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x179244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x179248: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x179248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17924c: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x17924cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x179250: 0x3e00008  jr          $ra
    ctx->pc = 0x179250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179250u;
        // 0x179254: 0xfc830000  sd          $v1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179258u;
}
