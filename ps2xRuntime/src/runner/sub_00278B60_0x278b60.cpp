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

// Function: sub_00278B60
// Address: 0x278b60 - 0x278bc0
void sub_00278B60_0x278b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278B60_0x278b60");
#endif

    switch (ctx->pc) {
        case 0x278b90u: goto label_278b90;
        case 0x278ba8u: goto label_278ba8;
        default: break;
    }

    ctx->pc = 0x278b60u;

    // 0x278b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x278b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x278b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b74: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x278B74u;
    {
        const bool branch_taken_0x278b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B74u;
        // 0x278b78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b74) {
            ctx->pc = 0x278BA8u;
            goto label_278ba8;
        }
    }
    ctx->pc = 0x278B7Cu;
    // 0x278b7c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x278b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x278b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b84: 0x24427520  addiu       $v0, $v0, 0x7520
    ctx->pc = 0x278b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29984));
    // 0x278b88: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x278B88u;
    SET_GPR_U32(ctx, 31, 0x278B90u);
    ctx->pc = 0x278B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B88u;
    // 0x278b8c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x278B88u, 0x278B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B90u;
label_278b90:
    // 0x278b90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x278b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x278b94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x278b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x278b98: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278B98u;
    {
        const bool branch_taken_0x278b98 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x278B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B98u;
        // 0x278b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b98) {
            ctx->pc = 0x278BA8u;
            goto label_278ba8;
        }
    }
    ctx->pc = 0x278BA0u;
    // 0x278ba0: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x278BA0u;
    SET_GPR_U32(ctx, 31, 0x278BA8u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x278BA0u, 0x278BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278BA8u;
label_278ba8:
    // 0x278ba8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x278ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x278bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x278BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BB8u;
        // 0x278bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278BC0u;
}
