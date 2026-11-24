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

// Function: sub_002D2280
// Address: 0x2d2280 - 0x2d22f0
void sub_002D2280_0x2d2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2280_0x2d2280");
#endif

    ctx->pc = 0x2d2280u;

    // 0x2d2280: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2d2280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d2284: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x2d2284u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2d2288: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D2288u;
    {
        const bool branch_taken_0x2d2288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2288u;
        // 0x2d228c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2288) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D2290u;
    // 0x2d2290: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2d2290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2d2294: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d2294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d2298: 0x24847970  addiu       $a0, $a0, 0x7970
    ctx->pc = 0x2d2298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31088));
    // 0x2d229c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d22a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d22a4: 0x600008  jr          $v1
    ctx->pc = 0x2D22A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D22B0u: goto label_2d22b0;
            case 0x2D22B8u: goto label_2d22b8;
            case 0x2D22C0u: goto label_2d22c0;
            case 0x2D22C8u: goto label_2d22c8;
            case 0x2D22D0u: goto label_2d22d0;
            case 0x2D22D8u: goto label_2d22d8;
            case 0x2D22E0u: goto label_2d22e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D22A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D22ACu;
    // 0x2d22ac: 0x0  nop
    ctx->pc = 0x2d22acu;
    // NOP
label_2d22b0:
    // 0x2d22b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D22B0u;
    {
        const bool branch_taken_0x2d22b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d22b0) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D22B8u;
label_2d22b8:
    // 0x2d22b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D22B8u;
    {
        const bool branch_taken_0x2d22b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22B8u;
        // 0x2d22bc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22b8) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D22C0u;
label_2d22c0:
    // 0x2d22c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D22C0u;
    {
        const bool branch_taken_0x2d22c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22C0u;
        // 0x2d22c4: 0x64020002  daddiu      $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22c0) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D22C8u;
label_2d22c8:
    // 0x2d22c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D22C8u;
    {
        const bool branch_taken_0x2d22c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22C8u;
        // 0x2d22cc: 0x64020003  daddiu      $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22c8) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D22D0u;
label_2d22d0:
    // 0x2d22d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D22D0u;
    {
        const bool branch_taken_0x2d22d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22D0u;
        // 0x2d22d4: 0x64020004  daddiu      $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22d0) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D22D8u;
label_2d22d8:
    // 0x2d22d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D22D8u;
    {
        const bool branch_taken_0x2d22d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22D8u;
        // 0x2d22dc: 0x64020005  daddiu      $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22d8) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D22E0u;
label_2d22e0:
    // 0x2d22e0: 0x64020006  daddiu      $v0, $zero, 0x6
    ctx->pc = 0x2d22e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x2d22e4: 0x0  nop
    ctx->pc = 0x2d22e4u;
    // NOP
label_2d22e8:
    // 0x2d22e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D22E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D22E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D22F0u;
}
