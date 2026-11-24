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

// Function: sub_00339080
// Address: 0x339080 - 0x3390d8
void sub_00339080_0x339080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339080_0x339080");
#endif

    switch (ctx->pc) {
        case 0x3390b0u: goto label_3390b0;
        default: break;
    }

    ctx->pc = 0x339080u;

    // 0x339080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x339080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x339084: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x339084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x339088: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x339088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33908c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x339090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339094: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x339094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33909c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x33909cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390a0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x3390a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3390a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3390a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390a8: 0xc0ce388  jal         func_338E20
    ctx->pc = 0x3390A8u;
    SET_GPR_U32(ctx, 31, 0x3390B0u);
    ctx->pc = 0x3390ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3390A8u;
    // 0x3390ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338E20u, 0x3390A8u, 0x3390B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3390B0u;
label_3390b0:
    // 0x3390b0: 0xa6110010  sh          $s1, 0x10($s0)
    ctx->pc = 0x3390b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 17));
    // 0x3390b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3390b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3390b8: 0xa6120012  sh          $s2, 0x12($s0)
    ctx->pc = 0x3390b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 18));
    // 0x3390bc: 0xa2030009  sb          $v1, 0x9($s0)
    ctx->pc = 0x3390bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3390c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3390c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3390c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3390c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3390c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3390c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3390cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3390ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3390d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3390D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3390D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390D0u;
        // 0x3390d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3390D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3390D8u;
}
