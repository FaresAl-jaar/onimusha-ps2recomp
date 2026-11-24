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

// Function: sub_00237388
// Address: 0x237388 - 0x2373f4
void sub_00237388_0x237388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237388_0x237388");
#endif

    switch (ctx->pc) {
        case 0x2373bcu: goto label_2373bc;
        case 0x2373d4u: goto label_2373d4;
        default: break;
    }

    ctx->pc = 0x237388u;

    // 0x237388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23738c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23738cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237394: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x237394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237398: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x237398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23739c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23739cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2373a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2373a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2373a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2373a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2373a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2373acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2373b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2373b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2373b4: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2373B4u;
    SET_GPR_U32(ctx, 31, 0x2373BCu);
    ctx->pc = 0x2373B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373B4u;
    // 0x2373b8: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2373B4u, 0x2373BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373BCu;
label_2373bc:
    // 0x2373bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2373bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2373c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2373c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2373c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373cc: 0xc08dcfe  jal         func_2373F8
    ctx->pc = 0x2373CCu;
    SET_GPR_U32(ctx, 31, 0x2373D4u);
    ctx->pc = 0x2373D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373CCu;
    // 0x2373d0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2373F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2373F8u, 0x2373CCu, 0x2373D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373D4u;
label_2373d4:
    // 0x2373d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2373d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2373d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2373d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2373dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2373dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2373e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2373e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2373e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2373e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2373e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2373e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2373ec: 0x808e2c2  j           func_238B08
    ctx->pc = 0x2373ECu;
    ctx->pc = 0x2373F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373ECu;
    // 0x2373f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x2373F4u;
}
