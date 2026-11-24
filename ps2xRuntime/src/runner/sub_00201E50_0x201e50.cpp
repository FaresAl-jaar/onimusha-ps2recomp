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

// Function: sub_00201E50
// Address: 0x201e50 - 0x201eac
void sub_00201E50_0x201e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201E50_0x201e50");
#endif

    switch (ctx->pc) {
        case 0x201e6cu: goto label_201e6c;
        case 0x201e78u: goto label_201e78;
        case 0x201e90u: goto label_201e90;
        default: break;
    }

    ctx->pc = 0x201e50u;

    // 0x201e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201e60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201e64: 0xc0807c6  jal         func_201F18
    ctx->pc = 0x201E64u;
    SET_GPR_U32(ctx, 31, 0x201E6Cu);
    ctx->pc = 0x201E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E64u;
    // 0x201e68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F18u, 0x201E64u, 0x201E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E6Cu;
label_201e6c:
    // 0x201e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e70: 0xc080800  jal         func_202000
    ctx->pc = 0x201E70u;
    SET_GPR_U32(ctx, 31, 0x201E78u);
    ctx->pc = 0x201E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E70u;
    // 0x201e74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202000u, 0x201E70u, 0x201E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E78u;
label_201e78:
    // 0x201e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201e80: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201E80u;
    {
        const bool branch_taken_0x201e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x201E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E80u;
        // 0x201e84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e80) {
            ctx->pc = 0x201E94u;
            goto label_201e94;
        }
    }
    ctx->pc = 0x201E88u;
    // 0x201e88: 0xc0807c6  jal         func_201F18
    ctx->pc = 0x201E88u;
    SET_GPR_U32(ctx, 31, 0x201E90u);
    ctx->pc = 0x201F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F18u, 0x201E88u, 0x201E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E90u;
label_201e90:
    // 0x201e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201e94:
    // 0x201e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201e9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ea4: 0x80807ac  j           func_201EB0
    ctx->pc = 0x201EA4u;
    ctx->pc = 0x201EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201EA4u;
    // 0x201ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EB0u;
    sub_00201EB0_0x201eb0(rdram, ctx, runtime); return;
    ctx->pc = 0x201EACu;
}
