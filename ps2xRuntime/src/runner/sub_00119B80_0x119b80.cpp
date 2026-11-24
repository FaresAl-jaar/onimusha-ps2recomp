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

// Function: sub_00119B80
// Address: 0x119b80 - 0x119bf0
void sub_00119B80_0x119b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119B80_0x119b80");
#endif

    switch (ctx->pc) {
        case 0x119bdcu: goto label_119bdc;
        default: break;
    }

    ctx->pc = 0x119b80u;

    // 0x119b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119b84: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x119b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x119b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119b94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x119b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b98: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x119b98u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x119b9c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x119b9cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x119ba0: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x119ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x119ba4: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x119ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x119ba8: 0x70008010  mfhi1       $s0
    ctx->pc = 0x119ba8u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x119bac: 0x3012  mflo        $a2
    ctx->pc = 0x119bacu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x119bb0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x119bb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x119bb4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x119bb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x119bb8: 0x2010  mfhi        $a0
    ctx->pc = 0x119bb8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x119bbc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x119bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x119bc0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x119bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x119bc4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x119bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x119bc8: 0x70003012  mflo1       $a2
    ctx->pc = 0x119bc8u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x119bcc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x119bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x119bd0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x119bd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x119bd4: 0xc04b590  jal         func_12D640
    ctx->pc = 0x119BD4u;
    SET_GPR_U32(ctx, 31, 0x119BDCu);
    ctx->pc = 0x119BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BD4u;
    // 0x119bd8: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D640u, 0x119BD4u, 0x119BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BDCu;
label_119bdc:
    // 0x119bdc: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x119bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x119be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119be8: 0x3e00008  jr          $ra
    ctx->pc = 0x119BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BE8u;
        // 0x119bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119BF0u;
}
