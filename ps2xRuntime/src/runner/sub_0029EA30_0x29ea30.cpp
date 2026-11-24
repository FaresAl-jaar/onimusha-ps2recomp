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

// Function: sub_0029EA30
// Address: 0x29ea30 - 0x29eac4
void sub_0029EA30_0x29ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EA30_0x29ea30");
#endif

    switch (ctx->pc) {
        case 0x29ea6cu: goto label_29ea6c;
        default: break;
    }

    ctx->pc = 0x29ea30u;

    // 0x29ea30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ea34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x29ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x29ea38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29ea3c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x29ea3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29ea40: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x29ea40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x29ea44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ea48: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x29ea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x29ea4c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29ea50: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x29ea50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x29ea54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29ea54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea58: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x29ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x29ea5c: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x29ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x29ea60: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x29ea60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea64: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x29EA64u;
    SET_GPR_U32(ctx, 31, 0x29EA6Cu);
    ctx->pc = 0x29EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EA64u;
    // 0x29ea68: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x29EA64u, 0x29EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EA6Cu;
label_29ea6c:
    // 0x29ea6c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x29ea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29ea70: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x29ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x29ea74: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29ea74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29ea78: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29ea78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29ea7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x29ea7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x29ea80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x29ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29ea84: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x29ea84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29ea88: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x29ea88u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x29ea8c: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x29ea8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x29ea90: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x29ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x29ea94: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x29ea94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29ea98: 0xfe060010  sd          $a2, 0x10($s0)
    ctx->pc = 0x29ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 6));
    // 0x29ea9c: 0x24030360  addiu       $v1, $zero, 0x360
    ctx->pc = 0x29ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x29eaa0: 0xfe050018  sd          $a1, 0x18($s0)
    ctx->pc = 0x29eaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 5));
    // 0x29eaa4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29eaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29eaa8: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x29eaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x29eaac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x29eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29eab0: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x29eab0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x29eab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29eab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29eab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29eab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eabc: 0x3e00008  jr          $ra
    ctx->pc = 0x29EABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EABCu;
        // 0x29eac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EAC4u;
}
