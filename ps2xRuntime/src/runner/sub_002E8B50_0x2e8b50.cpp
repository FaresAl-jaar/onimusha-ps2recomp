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

// Function: sub_002E8B50
// Address: 0x2e8b50 - 0x2e8bd8
void sub_002E8B50_0x2e8b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8B50_0x2e8b50");
#endif

    switch (ctx->pc) {
        case 0x2e8b8cu: goto label_2e8b8c;
        default: break;
    }

    ctx->pc = 0x2e8b50u;

    // 0x2e8b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8b54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e8b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e8b58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e8b5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e8b60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8b64: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2e8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2e8b68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e8b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e8b6c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E8B6Cu;
    {
        const bool branch_taken_0x2e8b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B6Cu;
        // 0x2e8b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b6c) {
            ctx->pc = 0x2E8BC0u;
            goto label_2e8bc0;
        }
    }
    ctx->pc = 0x2E8B74u;
    // 0x2e8b74: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2e8b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8b78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e8b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e8b7c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8B7Cu;
    {
        const bool branch_taken_0x2e8b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b7c) {
            ctx->pc = 0x2E8BC0u;
            goto label_2e8bc0;
        }
    }
    ctx->pc = 0x2E8B84u;
    // 0x2e8b84: 0xc0bb170  jal         func_2EC5C0
    ctx->pc = 0x2E8B84u;
    SET_GPR_U32(ctx, 31, 0x2E8B8Cu);
    ctx->pc = 0x2EC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC5C0u, 0x2E8B84u, 0x2E8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8B8Cu;
label_2e8b8c:
    // 0x2e8b8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e8b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e8b90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8B90u;
    {
        const bool branch_taken_0x2e8b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b90) {
            ctx->pc = 0x2E8BA8u;
            goto label_2e8ba8;
        }
    }
    ctx->pc = 0x2E8B98u;
    // 0x2e8b98: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x2e8b98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2e8b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e8ba0: 0xa6020160  sh          $v0, 0x160($s0)
    ctx->pc = 0x2e8ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e8ba4: 0x0  nop
    ctx->pc = 0x2e8ba4u;
    // NOP
label_2e8ba8:
    // 0x2e8ba8: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x2e8ba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2e8bac: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8BACu;
    {
        const bool branch_taken_0x2e8bac = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2e8bac) {
            ctx->pc = 0x2E8BC0u;
            goto label_2e8bc0;
        }
    }
    ctx->pc = 0x2E8BB4u;
    // 0x2e8bb4: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x2e8bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e8bb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8BB8u;
    {
        const bool branch_taken_0x2e8bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BB8u;
        // 0x2e8bbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bb8) {
            ctx->pc = 0x2E8BC8u;
            goto label_2e8bc8;
        }
    }
    ctx->pc = 0x2E8BC0u;
label_2e8bc0:
    // 0x2e8bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bc4: 0x0  nop
    ctx->pc = 0x2e8bc4u;
    // NOP
label_2e8bc8:
    // 0x2e8bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BD0u;
        // 0x2e8bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8BD8u;
}
