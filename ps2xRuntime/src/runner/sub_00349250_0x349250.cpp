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

// Function: sub_00349250
// Address: 0x349250 - 0x3492a8
void sub_00349250_0x349250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349250_0x349250");
#endif

    switch (ctx->pc) {
        case 0x34927cu: goto label_34927c;
        case 0x349290u: goto label_349290;
        default: break;
    }

    ctx->pc = 0x349250u;

    // 0x349250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349254: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x349254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x349258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34925c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349260: 0x94830044  lhu         $v1, 0x44($a0)
    ctx->pc = 0x349260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x349264: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x349264u;
    {
        const bool branch_taken_0x349264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x349268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349264u;
        // 0x349268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349264) {
            ctx->pc = 0x349288u;
            goto label_349288;
        }
    }
    ctx->pc = 0x34926Cu;
    // 0x34926c: 0x9205005f  lbu         $a1, 0x5F($s0)
    ctx->pc = 0x34926cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 95)));
    // 0x349270: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x349270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x349274: 0xc0cc9a4  jal         func_332690
    ctx->pc = 0x349274u;
    SET_GPR_U32(ctx, 31, 0x34927Cu);
    ctx->pc = 0x349278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349274u;
    // 0x349278: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332690u, 0x349274u, 0x34927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34927Cu;
label_34927c:
    // 0x34927c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34927Cu;
    {
        const bool branch_taken_0x34927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34927c) {
            ctx->pc = 0x349290u;
            goto label_349290;
        }
    }
    ctx->pc = 0x349284u;
    // 0x349284: 0x0  nop
    ctx->pc = 0x349284u;
    // NOP
label_349288:
    // 0x349288: 0xc0d26ec  jal         func_349BB0
    ctx->pc = 0x349288u;
    SET_GPR_U32(ctx, 31, 0x349290u);
    ctx->pc = 0x349BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349BB0u, 0x349288u, 0x349290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349290u;
label_349290:
    // 0x349290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349294: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x349294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x349298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x349298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34929c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34929cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3492a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3492A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3492A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492A0u;
        // 0x3492a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3492A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3492A8u;
}
