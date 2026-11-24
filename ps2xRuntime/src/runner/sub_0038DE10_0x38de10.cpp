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

// Function: sub_0038DE10
// Address: 0x38de10 - 0x38de70
void sub_0038DE10_0x38de10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DE10_0x38de10");
#endif

    switch (ctx->pc) {
        case 0x38de2cu: goto label_38de2c;
        case 0x38de44u: goto label_38de44;
        case 0x38de60u: goto label_38de60;
        default: break;
    }

    ctx->pc = 0x38de10u;

    // 0x38de10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38de10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38de14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38de14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38de18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38de1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38de1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38de20: 0x86052b32  lh          $a1, 0x2B32($s0)
    ctx->pc = 0x38de20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
    // 0x38de24: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x38DE24u;
    SET_GPR_U32(ctx, 31, 0x38DE2Cu);
    ctx->pc = 0x38DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE24u;
    // 0x38de28: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x38DE24u, 0x38DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE2Cu;
label_38de2c:
    // 0x38de2c: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x38de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x38de30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x38de30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38de34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x38de34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x38de38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38de38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38de3c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x38DE3Cu;
    SET_GPR_U32(ctx, 31, 0x38DE44u);
    ctx->pc = 0x38DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE3Cu;
    // 0x38de40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x38DE3Cu, 0x38DE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE44u;
label_38de44:
    // 0x38de44: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x38de44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x38de48: 0x26042b20  addiu       $a0, $s0, 0x2B20
    ctx->pc = 0x38de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
    // 0x38de4c: 0x78222040  lq          $v0, 0x2040($at)
    ctx->pc = 0x38de4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x682040u));
    // 0x38de50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38de50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38de54: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x38de54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38de58: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x38DE58u;
    SET_GPR_U32(ctx, 31, 0x38DE60u);
    ctx->pc = 0x38DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DE58u;
    // 0x38de5c: 0x7e022b20  sq          $v0, 0x2B20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 11040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x38DE58u, 0x38DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DE60u;
label_38de60:
    // 0x38de60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38de60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38de64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38de64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38de68: 0x3e00008  jr          $ra
    ctx->pc = 0x38DE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DE68u;
        // 0x38de6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DE70u;
}
