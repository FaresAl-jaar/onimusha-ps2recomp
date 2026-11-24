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

// Function: sub_00138D00
// Address: 0x138d00 - 0x138d78
void sub_00138D00_0x138d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138D00_0x138d00");
#endif

    switch (ctx->pc) {
        case 0x138d28u: goto label_138d28;
        case 0x138d40u: goto label_138d40;
        default: break;
    }

    ctx->pc = 0x138d00u;

    // 0x138d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x138d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x138d04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x138d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x138d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x138d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x138d0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x138d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x138d14: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x138d14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x138d18: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x138D18u;
    {
        const bool branch_taken_0x138d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D18u;
        // 0x138d1c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d18) {
            ctx->pc = 0x138D60u;
            goto label_138d60;
        }
    }
    ctx->pc = 0x138D20u;
    // 0x138d20: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x138d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x138d24: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x138d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_138d28:
    // 0x138d28: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x138d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x138d2c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x138d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x138d30: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x138D30u;
    {
        const bool branch_taken_0x138d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D30u;
        // 0x138d34: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d30) {
            ctx->pc = 0x138D58u;
            goto label_138d58;
        }
    }
    ctx->pc = 0x138D38u;
    // 0x138d38: 0xc04e730  jal         func_139CC0
    ctx->pc = 0x138D38u;
    SET_GPR_U32(ctx, 31, 0x138D40u);
    ctx->pc = 0x139CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CC0u, 0x138D38u, 0x138D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D40u;
label_138d40:
    // 0x138d40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138D40u;
    {
        const bool branch_taken_0x138d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d40) {
            ctx->pc = 0x138D58u;
            goto label_138d58;
        }
    }
    ctx->pc = 0x138D48u;
    // 0x138d48: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x138d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x138d4c: 0x9643000c  lhu         $v1, 0xC($s2)
    ctx->pc = 0x138d4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x138d50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x138d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x138d54: 0xa643000c  sh          $v1, 0xC($s2)
    ctx->pc = 0x138d54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 3));
label_138d58:
    // 0x138d58: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x138D58u;
    {
        const bool branch_taken_0x138d58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x138d58) {
            ctx->pc = 0x138D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138d28;
        }
    }
    ctx->pc = 0x138D60u;
label_138d60:
    // 0x138d60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x138d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138d64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x138d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138d68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138d70: 0x3e00008  jr          $ra
    ctx->pc = 0x138D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D70u;
        // 0x138d74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138D78u;
}
