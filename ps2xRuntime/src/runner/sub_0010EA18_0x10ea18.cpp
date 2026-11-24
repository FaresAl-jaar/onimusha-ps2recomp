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

// Function: sub_0010EA18
// Address: 0x10ea18 - 0x10ea94
void sub_0010EA18_0x10ea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EA18_0x10ea18");
#endif

    switch (ctx->pc) {
        case 0x10ea50u: goto label_10ea50;
        case 0x10ea64u: goto label_10ea64;
        default: break;
    }

    ctx->pc = 0x10ea18u;

    // 0x10ea18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ea1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ea20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ea24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10ea24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10ea2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10ea2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ea34: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10ea34u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10ea38: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10ea3c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10ea3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10ea40: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA40u;
    {
        const bool branch_taken_0x10ea40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea40) {
            ctx->pc = 0x10EA50u;
            goto label_10ea50;
        }
    }
    ctx->pc = 0x10EA48u;
    // 0x10ea48: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10EA48u;
    SET_GPR_U32(ctx, 31, 0x10EA50u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10EA48u, 0x10EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA50u;
label_10ea50:
    // 0x10ea50: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x10ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x10ea54: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x10ea54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x10ea58: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x10ea58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x10ea5c: 0xc043a5c  jal         func_10E970
    ctx->pc = 0x10EA5Cu;
    SET_GPR_U32(ctx, 31, 0x10EA64u);
    ctx->pc = 0x10EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA5Cu;
    // 0x10ea60: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E970u, 0x10EA5Cu, 0x10EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA64u;
label_10ea64:
    // 0x10ea64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EA64u;
    {
        const bool branch_taken_0x10ea64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA64u;
        // 0x10ea68: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea64) {
            ctx->pc = 0x10EA80u;
            goto label_10ea80;
        }
    }
    ctx->pc = 0x10EA6Cu;
    // 0x10ea6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ea6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ea70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ea70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ea74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ea74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ea78: 0x804603c  j           func_1180F0
    ctx->pc = 0x10EA78u;
    ctx->pc = 0x10EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA78u;
    // 0x10ea7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x10EA80u;
label_10ea80:
    // 0x10ea80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ea80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ea84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ea84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ea88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ea88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ea8c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA8Cu;
        // 0x10ea90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EA94u;
}
