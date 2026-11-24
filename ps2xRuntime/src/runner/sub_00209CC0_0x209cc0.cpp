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

// Function: sub_00209CC0
// Address: 0x209cc0 - 0x209d1c
void sub_00209CC0_0x209cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209CC0_0x209cc0");
#endif

    switch (ctx->pc) {
        case 0x209cd4u: goto label_209cd4;
        case 0x209cecu: goto label_209cec;
        case 0x209d08u: goto label_209d08;
        default: break;
    }

    ctx->pc = 0x209cc0u;

    // 0x209cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209ccc: 0xc081d84  jal         func_207610
    ctx->pc = 0x209CCCu;
    SET_GPR_U32(ctx, 31, 0x209CD4u);
    ctx->pc = 0x209CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CCCu;
    // 0x209cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x209CCCu, 0x209CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CD4u;
label_209cd4:
    // 0x209cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209cd8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x209CD8u;
    {
        const bool branch_taken_0x209cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CD8u;
        // 0x209cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cd8) {
            ctx->pc = 0x209D00u;
            goto label_209d00;
        }
    }
    ctx->pc = 0x209CE0u;
    // 0x209ce0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209ce4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x209CE4u;
    SET_GPR_U32(ctx, 31, 0x209CECu);
    ctx->pc = 0x209CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CE4u;
    // 0x209ce8: 0x24848130  addiu       $a0, $a0, -0x7ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x209CE4u, 0x209CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209CECu;
label_209cec:
    // 0x209cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209cf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x209CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CF8u;
        // 0x209cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209D00u;
label_209d00:
    // 0x209d00: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209D00u;
    SET_GPR_U32(ctx, 31, 0x209D08u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209D00u, 0x209D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D08u;
label_209d08:
    // 0x209d08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209d14: 0x80899f0  j           func_2267C0
    ctx->pc = 0x209D14u;
    ctx->pc = 0x209D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D14u;
    // 0x209d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267C0u;
    sub_002267C0_0x2267c0(rdram, ctx, runtime); return;
    ctx->pc = 0x209D1Cu;
}
