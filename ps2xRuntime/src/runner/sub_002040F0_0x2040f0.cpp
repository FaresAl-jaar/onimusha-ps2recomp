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

// Function: sub_002040F0
// Address: 0x2040f0 - 0x20412c
void sub_002040F0_0x2040f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002040F0_0x2040f0");
#endif

    switch (ctx->pc) {
        case 0x20410cu: goto label_20410c;
        default: break;
    }

    ctx->pc = 0x2040f0u;

    // 0x2040f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2040f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2040f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2040f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2040f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2040f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2040fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x204104: 0xc081c12  jal         func_207048
    ctx->pc = 0x204104u;
    SET_GPR_U32(ctx, 31, 0x20410Cu);
    ctx->pc = 0x204108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204104u;
    // 0x204108: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x204104u, 0x20410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20410Cu;
label_20410c:
    // 0x20410c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204114: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x204114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20411c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20411cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204124: 0x8084aee  j           func_212BB8
    ctx->pc = 0x204124u;
    ctx->pc = 0x204128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204124u;
    // 0x204128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BB8u;
    sub_00212BB8_0x212bb8(rdram, ctx, runtime); return;
    ctx->pc = 0x20412Cu;
}
