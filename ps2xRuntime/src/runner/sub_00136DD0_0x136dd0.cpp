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

// Function: sub_00136DD0
// Address: 0x136dd0 - 0x136e2c
void sub_00136DD0_0x136dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136DD0_0x136dd0");
#endif

    switch (ctx->pc) {
        case 0x136de4u: goto label_136de4;
        default: break;
    }

    ctx->pc = 0x136dd0u;

    // 0x136dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136ddc: 0xc04db40  jal         func_136D00
    ctx->pc = 0x136DDCu;
    SET_GPR_U32(ctx, 31, 0x136DE4u);
    ctx->pc = 0x136DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DDCu;
    // 0x136de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D00u, 0x136DDCu, 0x136DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DE4u;
label_136de4:
    // 0x136de4: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x136de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x136de8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x136DE8u;
    {
        const bool branch_taken_0x136de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DE8u;
        // 0x136dec: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136de8) {
            ctx->pc = 0x136E10u;
            goto label_136e10;
        }
    }
    ctx->pc = 0x136DF0u;
    // 0x136df0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x136df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x136df4: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x136df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x136df8: 0x24420ed0  addiu       $v0, $v0, 0xED0
    ctx->pc = 0x136df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3792));
    // 0x136dfc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x136dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x136e00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x136e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x136e04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x136e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136e08: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136E08u;
    {
        const bool branch_taken_0x136e08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x136e08) {
            ctx->pc = 0x136E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136E08u;
            // 0x136e0c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136E18u;
            goto label_136e18;
        }
    }
    ctx->pc = 0x136E10u;
label_136e10:
    // 0x136e10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136E10u;
    {
        const bool branch_taken_0x136e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E10u;
        // 0x136e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e10) {
            ctx->pc = 0x136E1Cu;
            goto label_136e1c;
        }
    }
    ctx->pc = 0x136E18u;
label_136e18:
    // 0x136e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136e1c:
    // 0x136e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136e24: 0x3e00008  jr          $ra
    ctx->pc = 0x136E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E24u;
        // 0x136e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136E2Cu;
}
