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

// Function: sub_00380890
// Address: 0x380890 - 0x3808f4
void sub_00380890_0x380890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380890_0x380890");
#endif

    switch (ctx->pc) {
        case 0x3808b0u: goto label_3808b0;
        default: break;
    }

    ctx->pc = 0x380890u;

    // 0x380890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x380894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x380898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38089c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38089cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3808a0: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x3808a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3808a4: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x3808a4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3808a8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3808A8u;
    SET_GPR_U32(ctx, 31, 0x3808B0u);
    ctx->pc = 0x3808ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3808A8u;
    // 0x3808ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3808A8u, 0x3808B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3808B0u;
label_3808b0:
    // 0x3808b0: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x3808b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x3808b4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3808b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3808b8: 0x34846667  ori         $a0, $a0, 0x6667
    ctx->pc = 0x3808b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x3808bc: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x3808bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x3808c0: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x3808c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3808c4: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x3808c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3808c8: 0x0  nop
    ctx->pc = 0x3808c8u;
    // NOP
    // 0x3808cc: 0x2010  mfhi        $a0
    ctx->pc = 0x3808ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3808d0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3808d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3808d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3808d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3808d8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3808d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3808dc: 0xae032b7c  sw          $v1, 0x2B7C($s0)
    ctx->pc = 0x3808dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11132), GPR_U32(ctx, 3));
    // 0x3808e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3808e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3808e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3808e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3808e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3808e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3808ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3808ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3808F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3808ECu;
        // 0x3808f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3808ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3808F4u;
}
