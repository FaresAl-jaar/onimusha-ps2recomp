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

// Function: sub_00236DC8
// Address: 0x236dc8 - 0x236e2c
void sub_00236DC8_0x236dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236DC8_0x236dc8");
#endif

    switch (ctx->pc) {
        case 0x236de8u: goto label_236de8;
        case 0x236e10u: goto label_236e10;
        default: break;
    }

    ctx->pc = 0x236dc8u;

    // 0x236dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236dd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236dd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236dd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ddc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236de0: 0xc08af30  jal         func_22BCC0
    ctx->pc = 0x236DE0u;
    SET_GPR_U32(ctx, 31, 0x236DE8u);
    ctx->pc = 0x236DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DE0u;
    // 0x236de4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCC0u, 0x236DE0u, 0x236DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DE8u;
label_236de8:
    // 0x236de8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x236DE8u;
    {
        const bool branch_taken_0x236de8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x236DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DE8u;
        // 0x236dec: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236de8) {
            ctx->pc = 0x236E18u;
            goto label_236e18;
        }
    }
    ctx->pc = 0x236DF0u;
    // 0x236df0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x236df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x236df4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x236df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x236df8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x236df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x236dfc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x236DFCu;
    {
        const bool branch_taken_0x236dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236dfc) {
            ctx->pc = 0x236E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236DFCu;
            // 0x236e00: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E18u;
            goto label_236e18;
        }
    }
    ctx->pc = 0x236E04u;
    // 0x236e04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x236e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x236e08: 0xc08af34  jal         func_22BCD0
    ctx->pc = 0x236E08u;
    SET_GPR_U32(ctx, 31, 0x236E10u);
    ctx->pc = 0x236E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E08u;
    // 0x236e0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCD0u, 0x236E08u, 0x236E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E10u;
label_236e10:
    // 0x236e10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x236E10u;
    {
        const bool branch_taken_0x236e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E10u;
        // 0x236e14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e10) {
            ctx->pc = 0x236E1Cu;
            goto label_236e1c;
        }
    }
    ctx->pc = 0x236E18u;
label_236e18:
    // 0x236e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236e1c:
    // 0x236e1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236e24: 0x3e00008  jr          $ra
    ctx->pc = 0x236E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E24u;
        // 0x236e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E2Cu;
}
