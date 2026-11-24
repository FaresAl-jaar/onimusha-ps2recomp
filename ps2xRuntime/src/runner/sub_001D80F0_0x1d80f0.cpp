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

// Function: sub_001D80F0
// Address: 0x1d80f0 - 0x1d8178
void sub_001D80F0_0x1d80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D80F0_0x1d80f0");
#endif

    switch (ctx->pc) {
        case 0x1d8108u: goto label_1d8108;
        default: break;
    }

    ctx->pc = 0x1d80f0u;

    // 0x1d80f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d80f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d80f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d80f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d80f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d80fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d80fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8100: 0xc07539c  jal         func_1D4E70
    ctx->pc = 0x1D8100u;
    SET_GPR_U32(ctx, 31, 0x1D8108u);
    ctx->pc = 0x1D8104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8100u;
    // 0x1d8104: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4E70u, 0x1D8100u, 0x1D8108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8108u;
label_1d8108:
    // 0x1d8108: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1d8108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x1d810c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1d810cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1d8110: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x1d8110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x1d8114: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x1d8114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d8118: 0x0  nop
    ctx->pc = 0x1d8118u;
    // NOP
    // 0x1d811c: 0x0  nop
    ctx->pc = 0x1d811cu;
    // NOP
    // 0x1d8120: 0x1810  mfhi        $v1
    ctx->pc = 0x1d8120u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1d8124: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1d8124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8128: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x1d8128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d812c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D812Cu;
    {
        const bool branch_taken_0x1d812c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D812Cu;
        // 0x1d8130: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d812c) {
            ctx->pc = 0x1D8158u;
            goto label_1d8158;
        }
    }
    ctx->pc = 0x1D8134u;
    // 0x1d8134: 0x3c03302e  lui         $v1, 0x302E
    ctx->pc = 0x1d8134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12334 << 16));
    // 0x1d8138: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1d8138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d813c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d813cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d8140: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d8140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d8144: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x1d8144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d8148: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1d8148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d814c: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1d814cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1d8150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8150u;
    {
        const bool branch_taken_0x1d8150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8150u;
        // 0x1d8154: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8150) {
            ctx->pc = 0x1D8160u;
            goto label_1d8160;
        }
    }
    ctx->pc = 0x1D8158u;
label_1d8158:
    // 0x1d8158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8158u;
    {
        const bool branch_taken_0x1d8158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8158u;
        // 0x1d815c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8158) {
            ctx->pc = 0x1D8168u;
            goto label_1d8168;
        }
    }
    ctx->pc = 0x1D8160u;
label_1d8160:
    // 0x1d8160: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8164: 0x0  nop
    ctx->pc = 0x1d8164u;
    // NOP
label_1d8168:
    // 0x1d8168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d816c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d816cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8170: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8170u;
        // 0x1d8174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8178u;
}
