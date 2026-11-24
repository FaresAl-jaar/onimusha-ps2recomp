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

// Function: sub_003E8940
// Address: 0x3e8940 - 0x3e899c
void sub_003E8940_0x3e8940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8940_0x3e8940");
#endif

    switch (ctx->pc) {
        case 0x3e8974u: goto label_3e8974;
        case 0x3e898cu: goto label_3e898c;
        default: break;
    }

    ctx->pc = 0x3e8940u;

    // 0x3e8940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e8944: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3e8944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3e8948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e8948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e894c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3E894Cu;
    {
        const bool branch_taken_0x3e894c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E894Cu;
        // 0x3e8950: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e894c) {
            ctx->pc = 0x3E8980u;
            goto label_3e8980;
        }
    }
    ctx->pc = 0x3E8954u;
    // 0x3e8954: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8954u;
    {
        const bool branch_taken_0x3e8954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8954) {
            ctx->pc = 0x3E8968u;
            goto label_3e8968;
        }
    }
    ctx->pc = 0x3E895Cu;
    // 0x3e895c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E895Cu;
    {
        const bool branch_taken_0x3e895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e895c) {
            ctx->pc = 0x3E8990u;
            goto label_3e8990;
        }
    }
    ctx->pc = 0x3E8964u;
    // 0x3e8964: 0x0  nop
    ctx->pc = 0x3e8964u;
    // NOP
label_3e8968:
    // 0x3e8968: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3e8968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e896c: 0xc0fa268  jal         func_3E89A0
    ctx->pc = 0x3E896Cu;
    SET_GPR_U32(ctx, 31, 0x3E8974u);
    ctx->pc = 0x3E8970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E896Cu;
    // 0x3e8970: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E89A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E89A0u, 0x3E896Cu, 0x3E8974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8974u;
label_3e8974:
    // 0x3e8974: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E8974u;
    {
        const bool branch_taken_0x3e8974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8974) {
            ctx->pc = 0x3E8990u;
            goto label_3e8990;
        }
    }
    ctx->pc = 0x3E897Cu;
    // 0x3e897c: 0x0  nop
    ctx->pc = 0x3e897cu;
    // NOP
label_3e8980:
    // 0x3e8980: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3e8980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8984: 0xc0fa288  jal         func_3E8A20
    ctx->pc = 0x3E8984u;
    SET_GPR_U32(ctx, 31, 0x3E898Cu);
    ctx->pc = 0x3E8988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8984u;
    // 0x3e8988: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8A20u, 0x3E8984u, 0x3E898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E898Cu;
label_3e898c:
    // 0x3e898c: 0x0  nop
    ctx->pc = 0x3e898cu;
    // NOP
label_3e8990:
    // 0x3e8990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8994: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8994u;
        // 0x3e8998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E899Cu;
}
