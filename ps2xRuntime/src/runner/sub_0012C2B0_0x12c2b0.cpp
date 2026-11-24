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

// Function: sub_0012C2B0
// Address: 0x12c2b0 - 0x12c348
void sub_0012C2B0_0x12c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C2B0_0x12c2b0");
#endif

    switch (ctx->pc) {
        case 0x12c2d8u: goto label_12c2d8;
        case 0x12c2e8u: goto label_12c2e8;
        case 0x12c2fcu: goto label_12c2fc;
        case 0x12c30cu: goto label_12c30c;
        case 0x12c324u: goto label_12c324;
        case 0x12c330u: goto label_12c330;
        default: break;
    }

    ctx->pc = 0x12c2b0u;

    // 0x12c2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c2b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c2b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c2bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12c2c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c2c8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12c2c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12c2cc: 0x2411040f  addiu       $s1, $zero, 0x40F
    ctx->pc = 0x12c2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x12c2d0: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x12C2D0u;
    SET_GPR_U32(ctx, 31, 0x12C2D8u);
    ctx->pc = 0x12C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2D0u;
    // 0x12c2d4: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x12C2D0u, 0x12C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2D8u;
label_12c2d8:
    // 0x12c2d8: 0x118d3c  dsll32      $s1, $s1, 20
    ctx->pc = 0x12c2d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 20));
    // 0x12c2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2e0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x12C2E0u;
    SET_GPR_U32(ctx, 31, 0x12C2E8u);
    ctx->pc = 0x12C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2E0u;
    // 0x12c2e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x12C2E0u, 0x12C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2E8u;
label_12c2e8:
    // 0x12c2e8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12c2e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12c2ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2f4: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x12C2F4u;
    SET_GPR_U32(ctx, 31, 0x12C2FCu);
    ctx->pc = 0x12C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2F4u;
    // 0x12c2f8: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x12C2F4u, 0x12C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2FCu;
label_12c2fc:
    // 0x12c2fc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x12c2fcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12c300: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c304: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x12C304u;
    SET_GPR_U32(ctx, 31, 0x12C30Cu);
    ctx->pc = 0x12C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C304u;
    // 0x12c308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x12C304u, 0x12C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C30Cu;
label_12c30c:
    // 0x12c30c: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x12c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x12c310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c314: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C314u;
    {
        const bool branch_taken_0x12c314 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x12C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C314u;
        // 0x12c318: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c314) {
            ctx->pc = 0x12C324u;
            goto label_12c324;
        }
    }
    ctx->pc = 0x12C31Cu;
    // 0x12c31c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x12C31Cu;
    SET_GPR_U32(ctx, 31, 0x12C324u);
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x12C31Cu, 0x12C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C324u;
label_12c324:
    // 0x12c324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c328: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x12C328u;
    SET_GPR_U32(ctx, 31, 0x12C330u);
    ctx->pc = 0x12C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C328u;
    // 0x12c32c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x12C328u, 0x12C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C330u;
label_12c330:
    // 0x12c330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c33c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12c33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c340: 0x3e00008  jr          $ra
    ctx->pc = 0x12C340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C340u;
        // 0x12c344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C348u;
}
