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

// Function: sub_00275F20
// Address: 0x275f20 - 0x275f94
void sub_00275F20_0x275f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275F20_0x275f20");
#endif

    switch (ctx->pc) {
        case 0x275f80u: goto label_275f80;
        default: break;
    }

    ctx->pc = 0x275f20u;

    // 0x275f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275f24: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x275f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x275f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275f2c: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x275f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x275f30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x275f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x275f34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275F34u;
    {
        const bool branch_taken_0x275f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F34u;
        // 0x275f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f34) {
            ctx->pc = 0x275F48u;
            goto label_275f48;
        }
    }
    ctx->pc = 0x275F3Cu;
    // 0x275f3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x275F3Cu;
    {
        const bool branch_taken_0x275f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275f3c) {
            ctx->pc = 0x275F88u;
            goto label_275f88;
        }
    }
    ctx->pc = 0x275F44u;
    // 0x275f44: 0x0  nop
    ctx->pc = 0x275f44u;
    // NOP
label_275f48:
    // 0x275f48: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x275f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x275f4c: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x275f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x275f50: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275F50u;
    {
        const bool branch_taken_0x275f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x275F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F50u;
        // 0x275f54: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f50) {
            ctx->pc = 0x275F68u;
            goto label_275f68;
        }
    }
    ctx->pc = 0x275F58u;
    // 0x275f58: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275F58u;
    {
        const bool branch_taken_0x275f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x275f58) {
            ctx->pc = 0x275F68u;
            goto label_275f68;
        }
    }
    ctx->pc = 0x275F60u;
    // 0x275f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275F60u;
    {
        const bool branch_taken_0x275f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275f60) {
            ctx->pc = 0x275F70u;
            goto label_275f70;
        }
    }
    ctx->pc = 0x275F68u;
label_275f68:
    // 0x275f68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x275F68u;
    {
        const bool branch_taken_0x275f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F68u;
        // 0x275f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275f68) {
            ctx->pc = 0x275F88u;
            goto label_275f88;
        }
    }
    ctx->pc = 0x275F70u;
label_275f70:
    // 0x275f70: 0xdc820500  ld          $v0, 0x500($a0)
    ctx->pc = 0x275f70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x275f74: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x275f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x275f78: 0xc0a2478  jal         func_2891E0
    ctx->pc = 0x275F78u;
    SET_GPR_U32(ctx, 31, 0x275F80u);
    ctx->pc = 0x275F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275F78u;
    // 0x275f7c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2891E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2891E0u, 0x275F78u, 0x275F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F80u;
label_275f80:
    // 0x275f80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f84: 0x0  nop
    ctx->pc = 0x275f84u;
    // NOP
label_275f88:
    // 0x275f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x275F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F8Cu;
        // 0x275f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275F94u;
}
