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

// Function: sub_002373F8
// Address: 0x2373f8 - 0x23746c
void sub_002373F8_0x2373f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002373F8_0x2373f8");
#endif

    switch (ctx->pc) {
        case 0x23742cu: goto label_23742c;
        default: break;
    }

    ctx->pc = 0x2373f8u;

    // 0x2373f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2373fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2373fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x237400: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x237400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23740c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237410: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x237410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237414: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x237414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x237418: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x237418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23741c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23741cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x237420: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x237420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x237424: 0xc08e2aa  jal         func_238AA8
    ctx->pc = 0x237424u;
    SET_GPR_U32(ctx, 31, 0x23742Cu);
    ctx->pc = 0x237428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237424u;
    // 0x237428: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x237424u, 0x23742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23742Cu;
label_23742c:
    // 0x23742c: 0x121ac0  sll         $v1, $s2, 11
    ctx->pc = 0x23742cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x237430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237434: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x237434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x237438: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x237438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x23743c: 0xae130050  sw          $s3, 0x50($s0)
    ctx->pc = 0x23743cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 19));
    // 0x237440: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x237440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x237444: 0xa2020045  sb          $v0, 0x45($s0)
    ctx->pc = 0x237444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x237448: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x237448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x23744c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23744cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237454: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237458: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23745c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23745cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237460: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x237460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237464: 0x808e2b0  j           func_238AC0
    ctx->pc = 0x237464u;
    ctx->pc = 0x237468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237464u;
    // 0x237468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    sub_00238AC0_0x238ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x23746Cu;
}
