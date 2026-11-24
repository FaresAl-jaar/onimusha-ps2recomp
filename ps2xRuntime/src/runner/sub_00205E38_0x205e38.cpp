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

// Function: sub_00205E38
// Address: 0x205e38 - 0x205e84
void sub_00205E38_0x205e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205E38_0x205e38");
#endif

    switch (ctx->pc) {
        case 0x205e5cu: goto label_205e5c;
        default: break;
    }

    ctx->pc = 0x205e38u;

    // 0x205e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205e40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x205e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x205e48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x205e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x205e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x205e50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x205e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x205e54: 0xc081c12  jal         func_207048
    ctx->pc = 0x205E54u;
    SET_GPR_U32(ctx, 31, 0x205E5Cu);
    ctx->pc = 0x205E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E54u;
    // 0x205e58: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x205E54u, 0x205E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E5Cu;
label_205e5c:
    // 0x205e5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x205e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x205e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205e6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x205e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205e7c: 0x808834e  j           func_220D38
    ctx->pc = 0x205E7Cu;
    ctx->pc = 0x205E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205E7Cu;
    // 0x205e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220D38u;
    sub_00220D38_0x220d38(rdram, ctx, runtime); return;
    ctx->pc = 0x205E84u;
}
