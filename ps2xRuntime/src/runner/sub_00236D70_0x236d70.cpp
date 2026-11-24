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

// Function: sub_00236D70
// Address: 0x236d70 - 0x236dc8
void sub_00236D70_0x236d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236D70_0x236d70");
#endif

    switch (ctx->pc) {
        case 0x236d88u: goto label_236d88;
        case 0x236dacu: goto label_236dac;
        default: break;
    }

    ctx->pc = 0x236d70u;

    // 0x236d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236d78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236d80: 0xc08af30  jal         func_22BCC0
    ctx->pc = 0x236D80u;
    SET_GPR_U32(ctx, 31, 0x236D88u);
    ctx->pc = 0x236D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D80u;
    // 0x236d84: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCC0u, 0x236D80u, 0x236D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236D88u;
label_236d88:
    // 0x236d88: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x236D88u;
    {
        const bool branch_taken_0x236d88 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x236D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D88u;
        // 0x236d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d88) {
            ctx->pc = 0x236DB8u;
            goto label_236db8;
        }
    }
    ctx->pc = 0x236D90u;
    // 0x236d90: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x236d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x236d94: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x236d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x236d98: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x236d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x236d9c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x236D9Cu;
    {
        const bool branch_taken_0x236d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236d9c) {
            ctx->pc = 0x236DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D9Cu;
            // 0x236da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236DB8u;
            goto label_236db8;
        }
    }
    ctx->pc = 0x236DA4u;
    // 0x236da4: 0xc08af32  jal         func_22BCC8
    ctx->pc = 0x236DA4u;
    SET_GPR_U32(ctx, 31, 0x236DACu);
    ctx->pc = 0x236DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DA4u;
    // 0x236da8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCC8u, 0x236DA4u, 0x236DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DACu;
label_236dac:
    // 0x236dac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236DACu;
    {
        const bool branch_taken_0x236dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DACu;
        // 0x236db0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236dac) {
            ctx->pc = 0x236DBCu;
            goto label_236dbc;
        }
    }
    ctx->pc = 0x236DB4u;
    // 0x236db4: 0x0  nop
    ctx->pc = 0x236db4u;
    // NOP
label_236db8:
    // 0x236db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236dbc:
    // 0x236dbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x236DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DC0u;
        // 0x236dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236DC8u;
}
