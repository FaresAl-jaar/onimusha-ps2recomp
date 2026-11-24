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

// Function: sub_00237470
// Address: 0x237470 - 0x2374dc
void sub_00237470_0x237470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237470_0x237470");
#endif

    switch (ctx->pc) {
        case 0x2374a4u: goto label_2374a4;
        case 0x2374bcu: goto label_2374bc;
        default: break;
    }

    ctx->pc = 0x237470u;

    // 0x237470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23747c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237480: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x237480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237484: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x237484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x237488: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x237488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23748c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23748cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x237490: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x237490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237494: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x237494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x237498: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x237498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23749c: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x23749Cu;
    SET_GPR_U32(ctx, 31, 0x2374A4u);
    ctx->pc = 0x2374A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23749Cu;
    // 0x2374a0: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x23749Cu, 0x2374A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374A4u;
label_2374a4:
    // 0x2374a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2374a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2374a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2374acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2374b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374b4: 0xc08dd38  jal         func_2374E0
    ctx->pc = 0x2374B4u;
    SET_GPR_U32(ctx, 31, 0x2374BCu);
    ctx->pc = 0x2374B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374B4u;
    // 0x2374b8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2374E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2374E0u, 0x2374B4u, 0x2374BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374BCu;
label_2374bc:
    // 0x2374bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2374bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2374c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2374c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2374c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2374c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2374c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2374c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2374cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2374ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2374d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2374d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2374d4: 0x808e2c2  j           func_238B08
    ctx->pc = 0x2374D4u;
    ctx->pc = 0x2374D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374D4u;
    // 0x2374d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x2374DCu;
}
