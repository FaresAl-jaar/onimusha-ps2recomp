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

// Function: sub_00331660
// Address: 0x331660 - 0x331704
void sub_00331660_0x331660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331660_0x331660");
#endif

    switch (ctx->pc) {
        case 0x3316b0u: goto label_3316b0;
        case 0x3316f4u: goto label_3316f4;
        default: break;
    }

    ctx->pc = 0x331660u;

    // 0x331660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331668: 0x91020006  lbu         $v0, 0x6($t0)
    ctx->pc = 0x331668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x33166c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33166Cu;
    {
        const bool branch_taken_0x33166c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33166Cu;
        // 0x331670: 0x304a00ff  andi        $t2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33166c) {
            ctx->pc = 0x3316B8u;
            goto label_3316b8;
        }
    }
    ctx->pc = 0x331674u;
    // 0x331674: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x331674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x331678: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x331678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x33167c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x33167cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x331680: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x331680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x331684: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x331684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331688: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x331688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33168c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33168cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x331690: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x331690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x331694: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x331694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x331698: 0x2529ce20  addiu       $t1, $t1, -0x31E0
    ctx->pc = 0x331698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954528));
    // 0x33169c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33169cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3316a0: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3316a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3316a4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3316a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3316a8: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3316A8u;
    SET_GPR_U32(ctx, 31, 0x3316B0u);
    ctx->pc = 0x3316ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3316A8u;
    // 0x3316ac: 0x25e7e  dsrl32      $t3, $v0, 25 (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3316A8u, 0x3316B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316B0u;
label_3316b0:
    // 0x3316b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3316B0u;
    {
        const bool branch_taken_0x3316b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3316b0) {
            ctx->pc = 0x3316F8u;
            goto label_3316f8;
        }
    }
    ctx->pc = 0x3316B8u;
label_3316b8:
    // 0x3316b8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x3316b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3316bc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3316bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x3316c0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3316c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3316c4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3316c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3316c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3316c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3316cc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3316ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3316d0: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3316d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3316d4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3316d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3316d8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3316d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3316dc: 0x2529ce18  addiu       $t1, $t1, -0x31E8
    ctx->pc = 0x3316dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954520));
    // 0x3316e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3316e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3316e4: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3316e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3316e8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3316e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3316ec: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3316ECu;
    SET_GPR_U32(ctx, 31, 0x3316F4u);
    ctx->pc = 0x3316F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3316ECu;
    // 0x3316f0: 0x2567e  dsrl32      $t2, $v0, 25 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3316ECu, 0x3316F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316F4u;
label_3316f4:
    // 0x3316f4: 0x0  nop
    ctx->pc = 0x3316f4u;
    // NOP
label_3316f8:
    // 0x3316f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3316f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3316fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3316FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3316FCu;
        // 0x331700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3316FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331704u;
}
