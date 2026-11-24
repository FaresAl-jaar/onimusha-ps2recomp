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

// Function: sub_00227258
// Address: 0x227258 - 0x2272a8
void sub_00227258_0x227258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227258_0x227258");
#endif

    switch (ctx->pc) {
        case 0x227280u: goto label_227280;
        default: break;
    }

    ctx->pc = 0x227258u;

    // 0x227258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22725c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x227260: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x227260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227264: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x227264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22726c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22726cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x227270: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x227270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227274: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x227274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x227278: 0xc089da8  jal         func_2276A0
    ctx->pc = 0x227278u;
    SET_GPR_U32(ctx, 31, 0x227280u);
    ctx->pc = 0x22727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227278u;
    // 0x22727c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2276A0u, 0x227278u, 0x227280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227280u;
label_227280:
    // 0x227280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227284: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x227284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22728c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22728cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227290: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x227290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227298: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x227298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22729c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22729cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2272a0: 0x8089caa  j           func_2272A8
    ctx->pc = 0x2272A0u;
    ctx->pc = 0x2272A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272A0u;
    // 0x2272a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2272A8u;
    sub_002272A8_0x2272a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2272A8u;
}
