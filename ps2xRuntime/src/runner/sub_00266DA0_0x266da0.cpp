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

// Function: sub_00266DA0
// Address: 0x266da0 - 0x266e30
void sub_00266DA0_0x266da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266DA0_0x266da0");
#endif

    switch (ctx->pc) {
        case 0x266db4u: goto label_266db4;
        case 0x266df0u: goto label_266df0;
        case 0x266e10u: goto label_266e10;
        case 0x266e20u: goto label_266e20;
        default: break;
    }

    ctx->pc = 0x266da0u;

    // 0x266da0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x266da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x266da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266dac: 0xc099928  jal         func_2664A0
    ctx->pc = 0x266DACu;
    SET_GPR_U32(ctx, 31, 0x266DB4u);
    ctx->pc = 0x266DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266DACu;
    // 0x266db0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2664A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664A0u, 0x266DACu, 0x266DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DB4u;
label_266db4:
    // 0x266db4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266DB4u;
    {
        const bool branch_taken_0x266db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266db4) {
            ctx->pc = 0x266DC8u;
            goto label_266dc8;
        }
    }
    ctx->pc = 0x266DBCu;
    // 0x266dbc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x266DBCu;
    {
        const bool branch_taken_0x266dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266dbc) {
            ctx->pc = 0x266E20u;
            goto label_266e20;
        }
    }
    ctx->pc = 0x266DC4u;
    // 0x266dc4: 0x0  nop
    ctx->pc = 0x266dc4u;
    // NOP
label_266dc8:
    // 0x266dc8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x266dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x266dcc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x266dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x266dd0: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x266dd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266dd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x266dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x266dd8: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x266DD8u;
    {
        const bool branch_taken_0x266dd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x266DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DD8u;
        // 0x266ddc: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dd8) {
            ctx->pc = 0x266E18u;
            goto label_266e18;
        }
    }
    ctx->pc = 0x266DE0u;
    // 0x266de0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x266de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x266de4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x266de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266de8: 0xc049522  jal         func_125488
    ctx->pc = 0x266DE8u;
    SET_GPR_U32(ctx, 31, 0x266DF0u);
    ctx->pc = 0x266DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266DE8u;
    // 0x266dec: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x266DE8u, 0x266DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266DF0u;
label_266df0:
    // 0x266df0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x266df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x266df4: 0x27848948  addiu       $a0, $gp, -0x76B8
    ctx->pc = 0x266df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936904));
    // 0x266df8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x266df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266dfc: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x266dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x266e00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x266e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266e04: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x266e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x266e08: 0xc0a4038  jal         func_2900E0
    ctx->pc = 0x266E08u;
    SET_GPR_U32(ctx, 31, 0x266E10u);
    ctx->pc = 0x266E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E08u;
    // 0x266e0c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2900E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2900E0u, 0x266E08u, 0x266E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E10u;
label_266e10:
    // 0x266e10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266E10u;
    {
        const bool branch_taken_0x266e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266e10) {
            ctx->pc = 0x266E20u;
            goto label_266e20;
        }
    }
    ctx->pc = 0x266E18u;
label_266e18:
    // 0x266e18: 0xc099b8c  jal         func_266E30
    ctx->pc = 0x266E18u;
    SET_GPR_U32(ctx, 31, 0x266E20u);
    ctx->pc = 0x266E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E18u;
    // 0x266e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266E30u, 0x266E18u, 0x266E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E20u;
label_266e20:
    // 0x266e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266e28: 0x3e00008  jr          $ra
    ctx->pc = 0x266E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E28u;
        // 0x266e2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266E30u;
}
