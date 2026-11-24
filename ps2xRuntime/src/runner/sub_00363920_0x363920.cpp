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

// Function: sub_00363920
// Address: 0x363920 - 0x363980
void sub_00363920_0x363920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363920_0x363920");
#endif

    switch (ctx->pc) {
        case 0x363948u: goto label_363948;
        default: break;
    }

    ctx->pc = 0x363920u;

    // 0x363920: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x363920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363924: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x363924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x363928: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363928u;
    {
        const bool branch_taken_0x363928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x36392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363928u;
        // 0x36392c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363928) {
            ctx->pc = 0x363938u;
            goto label_363938;
        }
    }
    ctx->pc = 0x363930u;
    // 0x363930: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x363930u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x363934: 0x0  nop
    ctx->pc = 0x363934u;
    // NOP
label_363938:
    // 0x363938: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x363938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x36393c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x36393cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x363940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x363940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363944: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x363944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
label_363948:
    // 0x363948: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x363948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36394c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36394Cu;
    {
        const bool branch_taken_0x36394c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x363950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36394Cu;
        // 0x363950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36394c) {
            ctx->pc = 0x363960u;
            goto label_363960;
        }
    }
    ctx->pc = 0x363954u;
    // 0x363954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x363954u;
    {
        const bool branch_taken_0x363954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363954) {
            ctx->pc = 0x363978u;
            goto label_363978;
        }
    }
    ctx->pc = 0x36395Cu;
    // 0x36395c: 0x0  nop
    ctx->pc = 0x36395cu;
    // NOP
label_363960:
    // 0x363960: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x363960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x363964: 0x28a2010e  slti        $v0, $a1, 0x10E
    ctx->pc = 0x363964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)270) ? 1 : 0);
    // 0x363968: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x363968u;
    {
        const bool branch_taken_0x363968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363968u;
        // 0x36396c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363968) {
            ctx->pc = 0x363948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363948;
        }
    }
    ctx->pc = 0x363970u;
    // 0x363970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363974: 0x0  nop
    ctx->pc = 0x363974u;
    // NOP
label_363978:
    // 0x363978: 0x3e00008  jr          $ra
    ctx->pc = 0x363978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363980u;
}
