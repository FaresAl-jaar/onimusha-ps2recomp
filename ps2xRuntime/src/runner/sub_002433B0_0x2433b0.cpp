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

// Function: sub_002433B0
// Address: 0x2433b0 - 0x243430
void sub_002433B0_0x2433b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002433B0_0x2433b0");
#endif

    switch (ctx->pc) {
        case 0x2433e8u: goto label_2433e8;
        default: break;
    }

    ctx->pc = 0x2433b0u;

    // 0x2433b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2433b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2433b4: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x2433b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x2433b8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2433b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2433bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2433bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2433c0: 0x24635cf0  addiu       $v1, $v1, 0x5CF0
    ctx->pc = 0x2433c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23792));
    // 0x2433c4: 0x2442bad8  addiu       $v0, $v0, -0x4528
    ctx->pc = 0x2433c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949592));
    // 0x2433c8: 0x3c100088  lui         $s0, 0x88
    ctx->pc = 0x2433c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)136 << 16));
    // 0x2433cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2433ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2433d0: 0x26105d00  addiu       $s0, $s0, 0x5D00
    ctx->pc = 0x2433d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23808));
    // 0x2433d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2433d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x885CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885CF0u, _value); } while (0);
    // 0x2433d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2433d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2433dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433e0: 0xc049590  jal         func_125640
    ctx->pc = 0x2433E0u;
    SET_GPR_U32(ctx, 31, 0x2433E8u);
    ctx->pc = 0x2433E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2433E0u;
    // 0x2433e4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2433E0u, 0x2433E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433E8u;
label_2433e8:
    // 0x2433e8: 0x3c070088  lui         $a3, 0x88
    ctx->pc = 0x2433e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)136 << 16));
    // 0x2433ec: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x2433ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2433f0: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x2433f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2433f4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2433f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2433f8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2433f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2433fc: 0x908023  subu        $s0, $a0, $s0
    ctx->pc = 0x2433fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x243400: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x243400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243404: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x243404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x243408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24340c: 0x2445000f  addiu       $a1, $v0, 0xF
    ctx->pc = 0x24340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x243410: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x243410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x243414: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x243414u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x243418: 0x3c060088  lui         $a2, 0x88
    ctx->pc = 0x243418u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)136 << 16));
    // 0x24341c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x24341cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x243420: 0xace45cf4  sw          $a0, 0x5CF4($a3)
    ctx->pc = 0x243420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23796), GPR_U32(ctx, 4));
    // 0x243424: 0xacc25cf8  sw          $v0, 0x5CF8($a2)
    ctx->pc = 0x243424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 23800), GPR_U32(ctx, 2));
    // 0x243428: 0x3e00008  jr          $ra
    ctx->pc = 0x243428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243428u;
        // 0x24342c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243430u;
}
