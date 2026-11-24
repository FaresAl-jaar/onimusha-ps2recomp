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

// Function: sub_0020CA48
// Address: 0x20ca48 - 0x20cabc
void sub_0020CA48_0x20ca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CA48_0x20ca48");
#endif

    switch (ctx->pc) {
        case 0x20ca7cu: goto label_20ca7c;
        case 0x20ca94u: goto label_20ca94;
        default: break;
    }

    ctx->pc = 0x20ca48u;

    // 0x20ca48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ca48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20ca4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ca50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20ca50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20ca58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20ca58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20ca60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20ca60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20ca68: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x20ca68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca6c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20ca70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20ca74: 0xc08dd46  jal         func_237518
    ctx->pc = 0x20CA74u;
    SET_GPR_U32(ctx, 31, 0x20CA7Cu);
    ctx->pc = 0x20CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA74u;
    // 0x20ca78: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237518u, 0x20CA74u, 0x20CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA7Cu;
label_20ca7c:
    // 0x20ca7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ca80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20ca84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20ca88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca8c: 0xc08dce2  jal         func_237388
    ctx->pc = 0x20CA8Cu;
    SET_GPR_U32(ctx, 31, 0x20CA94u);
    ctx->pc = 0x20CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA8Cu;
    // 0x20ca90: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237388u, 0x20CA8Cu, 0x20CA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA94u;
label_20ca94:
    // 0x20ca94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ca94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20ca98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20ca9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20caa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20caa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20caa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20caa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20caa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20caa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20caac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20caacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20cab0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20cab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20cab4: 0x808de70  j           func_2379C0
    ctx->pc = 0x20CAB4u;
    ctx->pc = 0x20CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAB4u;
    // 0x20cab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379C0u;
    sub_002379C0_0x2379c0(rdram, ctx, runtime); return;
    ctx->pc = 0x20CABCu;
}
