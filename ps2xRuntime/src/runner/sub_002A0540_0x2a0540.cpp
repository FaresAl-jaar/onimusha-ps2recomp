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

// Function: sub_002A0540
// Address: 0x2a0540 - 0x2a05b0
void sub_002A0540_0x2a0540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0540_0x2a0540");
#endif

    switch (ctx->pc) {
        case 0x2a0584u: goto label_2a0584;
        default: break;
    }

    ctx->pc = 0x2a0540u;

    // 0x2a0540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a0544: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2a0544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0548: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a0548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a054c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a054cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a0550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a0554: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a0554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a0558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a055c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a055cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a0560: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x2a0560u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2a0564: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a0564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0568: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a0568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a056c: 0xdce70010  ld          $a3, 0x10($a3)
    ctx->pc = 0x2a056cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a0570: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a0570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a0574: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x2a0574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2a0578: 0x8f868974  lw          $a2, -0x768C($gp)
    ctx->pc = 0x2a0578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
    // 0x2a057c: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x2A057Cu;
    SET_GPR_U32(ctx, 31, 0x2A0584u);
    ctx->pc = 0x2A0580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A057Cu;
    // 0x2a0580: 0xe28824  and         $s1, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x2A057Cu, 0x2A0584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0584u;
label_2a0584:
    // 0x2a0584: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2a0584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2a0588: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a0588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a058c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x2a058cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2a0590: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2a0590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0594: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x2a0594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2a0598: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x2a0598u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x2a059c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a05a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a05a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a05a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a05a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a05a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A05A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05A8u;
        // 0x2a05ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A05A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A05B0u;
}
