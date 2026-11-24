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

// Function: sub_002F33E0
// Address: 0x2f33e0 - 0x2f3454
void sub_002F33E0_0x2f33e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F33E0_0x2f33e0");
#endif

    ctx->pc = 0x2f33e0u;

    // 0x2f33e0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f33e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f33e4: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x2f33e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2f33e8: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x2f33e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2f33ec: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2f33ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f33f0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2f33f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2f33f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f33f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f33f8: 0x2c41000d  sltiu       $at, $v0, 0xD
    ctx->pc = 0x2f33f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f33fc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F33FCu;
    {
        const bool branch_taken_0x2f33fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33FCu;
        // 0x2f3400: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33fc) {
            ctx->pc = 0x2F340Cu;
            goto label_2f340c;
        }
    }
    ctx->pc = 0x2F3404u;
    // 0x2f3404: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3404u;
    {
        const bool branch_taken_0x2f3404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3404u;
        // 0x2f3408: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3404) {
            ctx->pc = 0x2F3414u;
            goto label_2f3414;
        }
    }
    ctx->pc = 0x2F340Cu;
label_2f340c:
    // 0x2f340c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2f340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f3410: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2f3414:
    // 0x2f3414: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f3414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f3418: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2f3418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f341c: 0x24639082  addiu       $v1, $v1, -0x6F7E
    ctx->pc = 0x2f341cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938754));
    // 0x2f3420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f3420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f3424: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f3424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f3428: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2f3428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f342c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2f342cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f3430: 0x61280a  movz        $a1, $v1, $at
    ctx->pc = 0x2f3430u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2f3434: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f3434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f3438: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2f3438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f343c: 0x24429080  addiu       $v0, $v0, -0x6F80
    ctx->pc = 0x2f343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
    // 0x2f3440: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f3440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f3444: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2f3444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3448: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f3448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f344c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F344Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F344Cu;
        // 0x2f3450: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F344Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3454u;
}
