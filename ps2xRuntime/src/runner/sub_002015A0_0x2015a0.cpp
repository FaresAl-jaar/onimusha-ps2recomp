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

// Function: sub_002015A0
// Address: 0x2015a0 - 0x20160c
void sub_002015A0_0x2015a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002015A0_0x2015a0");
#endif

    switch (ctx->pc) {
        case 0x2015f8u: goto label_2015f8;
        default: break;
    }

    ctx->pc = 0x2015a0u;

    // 0x2015a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2015a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2015a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015a8: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x2015a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2015ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2015acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2015b0: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x2015b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2015b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2015b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2015b8: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x2015b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2015bc: 0x3812  mflo        $a3
    ctx->pc = 0x2015bcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2015c0: 0x1810  mfhi        $v1
    ctx->pc = 0x2015c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2015c4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2015c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2015c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2015c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2015cc: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2015ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2015d0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2015D0u;
    {
        const bool branch_taken_0x2015d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2015D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015D0u;
        // 0x2015d4: 0x671825  or          $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015d0) {
            ctx->pc = 0x2015F0u;
            goto label_2015f0;
        }
    }
    ctx->pc = 0x2015D8u;
    // 0x2015d8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2015d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2015dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2015dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2015e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2015e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2015e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2015E4u;
    {
        const bool branch_taken_0x2015e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2015E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015E4u;
        // 0x2015e8: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015e4) {
            ctx->pc = 0x201600u;
            goto label_201600;
        }
    }
    ctx->pc = 0x2015ECu;
    // 0x2015ec: 0x0  nop
    ctx->pc = 0x2015ecu;
    // NOP
label_2015f0:
    // 0x2015f0: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x2015F0u;
    SET_GPR_U32(ctx, 31, 0x2015F8u);
    ctx->pc = 0x2015F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2015F0u;
    // 0x2015f4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x2015F0u, 0x2015F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2015F8u;
label_2015f8:
    // 0x2015f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2015f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2015fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2015fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_201600:
    // 0x201600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201604: 0x3e00008  jr          $ra
    ctx->pc = 0x201604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201604u;
        // 0x201608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20160Cu;
}
