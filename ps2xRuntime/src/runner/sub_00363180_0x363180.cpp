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

// Function: sub_00363180
// Address: 0x363180 - 0x3631d8
void sub_00363180_0x363180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363180_0x363180");
#endif

    switch (ctx->pc) {
        case 0x3631a0u: goto label_3631a0;
        default: break;
    }

    ctx->pc = 0x363180u;

    // 0x363180: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x363180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x363184: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x363184u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x363188: 0x28810ff0  slti        $at, $a0, 0xFF0
    ctx->pc = 0x363188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4080) ? 1 : 0);
    // 0x36318c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x36318Cu;
    {
        const bool branch_taken_0x36318c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x363190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36318Cu;
        // 0x363190: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36318c) {
            ctx->pc = 0x3631D0u;
            goto label_3631d0;
        }
    }
    ctx->pc = 0x363194u;
    // 0x363194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363198: 0x24a5ff00  addiu       $a1, $a1, -0x100
    ctx->pc = 0x363198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967040));
    // 0x36319c: 0x0  nop
    ctx->pc = 0x36319cu;
    // NOP
label_3631a0:
    // 0x3631a0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3631a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3631a4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3631A4u;
    {
        const bool branch_taken_0x3631a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3631a4) {
            ctx->pc = 0x3631B8u;
            goto label_3631b8;
        }
    }
    ctx->pc = 0x3631ACu;
    // 0x3631ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3631ACu;
    {
        const bool branch_taken_0x3631ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3631B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3631ACu;
        // 0x3631b0: 0xa7868bc4  sh          $a2, -0x743C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937540), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3631ac) {
            ctx->pc = 0x3631D0u;
            goto label_3631d0;
        }
    }
    ctx->pc = 0x3631B4u;
    // 0x3631b4: 0x0  nop
    ctx->pc = 0x3631b4u;
    // NOP
label_3631b8:
    // 0x3631b8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3631b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3631bc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x3631bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3631c0: 0x28c3010e  slti        $v1, $a2, 0x10E
    ctx->pc = 0x3631c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)270) ? 1 : 0);
    // 0x3631c4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3631C4u;
    {
        const bool branch_taken_0x3631c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3631C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3631C4u;
        // 0x3631c8: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3631c4) {
            ctx->pc = 0x3631A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3631a0;
        }
    }
    ctx->pc = 0x3631CCu;
    // 0x3631cc: 0x0  nop
    ctx->pc = 0x3631ccu;
    // NOP
label_3631d0:
    // 0x3631d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3631D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3631D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3631D8u;
}
