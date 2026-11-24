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

// Function: sub_00203F50
// Address: 0x203f50 - 0x203f9c
void sub_00203F50_0x203f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203F50_0x203f50");
#endif

    switch (ctx->pc) {
        case 0x203f74u: goto label_203f74;
        case 0x203f88u: goto label_203f88;
        default: break;
    }

    ctx->pc = 0x203f50u;

    // 0x203f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203f58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x203f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x203f60: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x203f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x203f64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203F64u;
    {
        const bool branch_taken_0x203f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F64u;
        // 0x203f68: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f64) {
            ctx->pc = 0x203F80u;
            goto label_203f80;
        }
    }
    ctx->pc = 0x203F6Cu;
    // 0x203f6c: 0xc080fe8  jal         func_203FA0
    ctx->pc = 0x203F6Cu;
    SET_GPR_U32(ctx, 31, 0x203F74u);
    ctx->pc = 0x203FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FA0u, 0x203F6Cu, 0x203F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F74u;
label_203f74:
    // 0x203f74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x203F74u;
    {
        const bool branch_taken_0x203f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F74u;
        // 0x203f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f74) {
            ctx->pc = 0x203F8Cu;
            goto label_203f8c;
        }
    }
    ctx->pc = 0x203F7Cu;
    // 0x203f7c: 0x0  nop
    ctx->pc = 0x203f7cu;
    // NOP
label_203f80:
    // 0x203f80: 0xc080fea  jal         func_203FA8
    ctx->pc = 0x203F80u;
    SET_GPR_U32(ctx, 31, 0x203F88u);
    ctx->pc = 0x203F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F80u;
    // 0x203f84: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FA8u, 0x203F80u, 0x203F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F88u;
label_203f88:
    // 0x203f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203f8c:
    // 0x203f8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203f90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x203f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203f94: 0x8081014  j           func_204050
    ctx->pc = 0x203F94u;
    ctx->pc = 0x203F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F94u;
    // 0x203f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204050u;
    sub_00204050_0x204050(rdram, ctx, runtime); return;
    ctx->pc = 0x203F9Cu;
}
