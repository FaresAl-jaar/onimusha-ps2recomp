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

// Function: sub_00158DB0
// Address: 0x158db0 - 0x158e34
void sub_00158DB0_0x158db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158DB0_0x158db0");
#endif

    switch (ctx->pc) {
        case 0x158df4u: goto label_158df4;
        case 0x158e08u: goto label_158e08;
        case 0x158e28u: goto label_158e28;
        default: break;
    }

    ctx->pc = 0x158db0u;

    // 0x158db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158db4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x158db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x158db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158dbc: 0x24030b40  addiu       $v1, $zero, 0xB40
    ctx->pc = 0x158dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x158dc0: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x158dc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x158dc4: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x158DC4u;
    {
        const bool branch_taken_0x158dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DC4u;
        // 0x158dc8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158dc4) {
            ctx->pc = 0x158E10u;
            goto label_158e10;
        }
    }
    ctx->pc = 0x158DCCu;
    // 0x158dcc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x158dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x158dd0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x158dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x158dd4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x158DD4u;
    {
        const bool branch_taken_0x158dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158dd4) {
            ctx->pc = 0x158E10u;
            goto label_158e10;
        }
    }
    ctx->pc = 0x158DDCu;
    // 0x158ddc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x158ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x158de0: 0x90236ac8  lbu         $v1, 0x6AC8($at)
    ctx->pc = 0x158de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x158de4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x158DE4u;
    {
        const bool branch_taken_0x158de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158de4) {
            ctx->pc = 0x158E28u;
            goto label_158e28;
        }
    }
    ctx->pc = 0x158DECu;
    // 0x158dec: 0xc0d3510  jal         func_34D440
    ctx->pc = 0x158DECu;
    SET_GPR_U32(ctx, 31, 0x158DF4u);
    ctx->pc = 0x34D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D440u, 0x158DECu, 0x158DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158DF4u;
label_158df4:
    // 0x158df4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x158df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x158df8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x158df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158dfc: 0x24840740  addiu       $a0, $a0, 0x740
    ctx->pc = 0x158dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
    // 0x158e00: 0xc0f54d0  jal         func_3D5340
    ctx->pc = 0x158E00u;
    SET_GPR_U32(ctx, 31, 0x158E08u);
    ctx->pc = 0x158E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E00u;
    // 0x158e04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5340u, 0x158E00u, 0x158E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E08u;
label_158e08:
    // 0x158e08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158E08u;
    {
        const bool branch_taken_0x158e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158e08) {
            ctx->pc = 0x158E28u;
            goto label_158e28;
        }
    }
    ctx->pc = 0x158E10u;
label_158e10:
    // 0x158e10: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x158e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x158e14: 0x90266ac8  lbu         $a2, 0x6AC8($at)
    ctx->pc = 0x158e14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x158e18: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x158e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x158e1c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x158e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x158e20: 0xc0f54d0  jal         func_3D5340
    ctx->pc = 0x158E20u;
    SET_GPR_U32(ctx, 31, 0x158E28u);
    ctx->pc = 0x158E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158E20u;
    // 0x158e24: 0x24840740  addiu       $a0, $a0, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5340u, 0x158E20u, 0x158E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E28u;
label_158e28:
    // 0x158e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x158E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E2Cu;
        // 0x158e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158E34u;
}
