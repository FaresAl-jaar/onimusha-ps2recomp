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

// Function: sub_002B1E30
// Address: 0x2b1e30 - 0x2b1ea0
void sub_002B1E30_0x2b1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1E30_0x2b1e30");
#endif

    switch (ctx->pc) {
        case 0x2b1e70u: goto label_2b1e70;
        case 0x2b1e80u: goto label_2b1e80;
        case 0x2b1e90u: goto label_2b1e90;
        default: break;
    }

    ctx->pc = 0x2b1e30u;

    // 0x2b1e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b1e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b1e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b1e3c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2b1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b1e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b1e44: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b1e48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2b1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b1e4c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1e50: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2b1e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b1e54: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B1E54u;
    {
        const bool branch_taken_0x2b1e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E54u;
        // 0x2b1e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e54) {
            ctx->pc = 0x2B1E88u;
            goto label_2b1e88;
        }
    }
    ctx->pc = 0x2B1E5Cu;
    // 0x2b1e5c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2b1e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b1e60: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1E60u;
    {
        const bool branch_taken_0x2b1e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E60u;
        // 0x2b1e64: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e60) {
            ctx->pc = 0x2B1E70u;
            goto label_2b1e70;
        }
    }
    ctx->pc = 0x2B1E68u;
    // 0x2b1e68: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x2B1E68u;
    SET_GPR_U32(ctx, 31, 0x2B1E70u);
    ctx->pc = 0x2B1E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E68u;
    // 0x2b1e6c: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x2B1E68u, 0x2B1E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E70u;
label_2b1e70:
    // 0x2b1e70: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b1e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b1e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e78: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B1E78u;
    SET_GPR_U32(ctx, 31, 0x2B1E80u);
    ctx->pc = 0x2B1E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E78u;
    // 0x2b1e7c: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B1E78u, 0x2B1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E80u;
label_2b1e80:
    // 0x2b1e80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1E80u;
    {
        const bool branch_taken_0x2b1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e80) {
            ctx->pc = 0x2B1E90u;
            goto label_2b1e90;
        }
    }
    ctx->pc = 0x2B1E88u;
label_2b1e88:
    // 0x2b1e88: 0xc0ac6ac  jal         func_2B1AB0
    ctx->pc = 0x2B1E88u;
    SET_GPR_U32(ctx, 31, 0x2B1E90u);
    ctx->pc = 0x2B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1AB0u, 0x2B1E88u, 0x2B1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E90u;
label_2b1e90:
    // 0x2b1e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b1e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E98u;
        // 0x2b1e9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1EA0u;
}
