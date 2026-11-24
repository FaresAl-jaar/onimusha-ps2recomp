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

// Function: sub_00135280
// Address: 0x135280 - 0x1352f8
void sub_00135280_0x135280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135280_0x135280");
#endif

    switch (ctx->pc) {
        case 0x1352a0u: goto label_1352a0;
        default: break;
    }

    ctx->pc = 0x135280u;

    // 0x135280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135288: 0x8f828020  lw          $v0, -0x7FE0($gp)
    ctx->pc = 0x135288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x13528c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x135290: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135290u;
    {
        const bool branch_taken_0x135290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135290u;
        // 0x135294: 0xaf828020  sw          $v0, -0x7FE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135290) {
            ctx->pc = 0x1352A0u;
            goto label_1352a0;
        }
    }
    ctx->pc = 0x135298u;
    // 0x135298: 0xc04d444  jal         func_135110
    ctx->pc = 0x135298u;
    SET_GPR_U32(ctx, 31, 0x1352A0u);
    ctx->pc = 0x135110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135110u, 0x135298u, 0x1352A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352A0u;
label_1352a0:
    // 0x1352a0: 0x8f858530  lw          $a1, -0x7AD0($gp)
    ctx->pc = 0x1352a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935856)));
    // 0x1352a4: 0x34039d2c  ori         $v1, $zero, 0x9D2C
    ctx->pc = 0x1352a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40236);
    // 0x1352a8: 0x3402efc6  ori         $v0, $zero, 0xEFC6
    ctx->pc = 0x1352a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61382);
    // 0x1352ac: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1352acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x1352b0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1352b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1352b4: 0x34845680  ori         $a0, $a0, 0x5680
    ctx->pc = 0x1352b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22144);
    // 0x1352b8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1352b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1352bc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1352bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1352c0: 0xaf858530  sw          $a1, -0x7AD0($gp)
    ctx->pc = 0x1352c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935856), GPR_U32(ctx, 5));
    // 0x1352c4: 0x22afa  dsrl        $a1, $v0, 11
    ctx->pc = 0x1352c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 11);
    // 0x1352c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1352c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1352cc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1352ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1352d0: 0x229f8  dsll        $a1, $v0, 7
    ctx->pc = 0x1352d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 7);
    // 0x1352d4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1352d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1352d8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1352d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1352dc: 0x223f8  dsll        $a0, $v0, 15
    ctx->pc = 0x1352dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 15);
    // 0x1352e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1352e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1352e4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1352e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1352e8: 0x21cba  dsrl        $v1, $v0, 18
    ctx->pc = 0x1352e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 18);
    // 0x1352ec: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1352ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1352f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1352F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1352F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352F0u;
        // 0x1352f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1352F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1352F8u;
}
