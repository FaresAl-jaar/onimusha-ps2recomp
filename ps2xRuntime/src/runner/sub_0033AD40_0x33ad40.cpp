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

// Function: sub_0033AD40
// Address: 0x33ad40 - 0x33ad98
void sub_0033AD40_0x33ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AD40_0x33ad40");
#endif

    ctx->pc = 0x33ad40u;

    // 0x33ad40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x33ad40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33ad44: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x33ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x33ad48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33AD48u;
    {
        const bool branch_taken_0x33ad48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD48u;
        // 0x33ad4c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad48) {
            ctx->pc = 0x33AD58u;
            goto label_33ad58;
        }
    }
    ctx->pc = 0x33AD50u;
    // 0x33ad50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33AD50u;
    {
        const bool branch_taken_0x33ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ad50) {
            ctx->pc = 0x33AD90u;
            goto label_33ad90;
        }
    }
    ctx->pc = 0x33AD58u;
label_33ad58:
    // 0x33ad58: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x33ad58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33ad5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33ad5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33ad60: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33AD60u;
    {
        const bool branch_taken_0x33ad60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD60u;
        // 0x33ad64: 0x30620f00  andi        $v0, $v1, 0xF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad60) {
            ctx->pc = 0x33AD88u;
            goto label_33ad88;
        }
    }
    ctx->pc = 0x33AD68u;
    // 0x33ad68: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x33ad68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x33ad6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33ad6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33ad70: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AD70u;
    {
        const bool branch_taken_0x33ad70 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x33AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD70u;
        // 0x33ad74: 0x28410005  slti        $at, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad70) {
            ctx->pc = 0x33AD88u;
            goto label_33ad88;
        }
    }
    ctx->pc = 0x33AD78u;
    // 0x33ad78: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x33AD78u;
    {
        const bool branch_taken_0x33ad78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD78u;
        // 0x33ad7c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ad78) {
            ctx->pc = 0x33AD88u;
            goto label_33ad88;
        }
    }
    ctx->pc = 0x33AD80u;
    // 0x33ad80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33AD80u;
    {
        const bool branch_taken_0x33ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ad80) {
            ctx->pc = 0x33AD90u;
            goto label_33ad90;
        }
    }
    ctx->pc = 0x33AD88u;
label_33ad88:
    // 0x33ad88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33ad88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ad8c: 0x0  nop
    ctx->pc = 0x33ad8cu;
    // NOP
label_33ad90:
    // 0x33ad90: 0x3e00008  jr          $ra
    ctx->pc = 0x33AD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AD98u;
}
