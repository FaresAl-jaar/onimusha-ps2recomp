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

// Function: sub_00201798
// Address: 0x201798 - 0x201808
void sub_00201798_0x201798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201798_0x201798");
#endif

    switch (ctx->pc) {
        case 0x2017d0u: goto label_2017d0;
        case 0x2017d8u: goto label_2017d8;
        default: break;
    }

    ctx->pc = 0x201798u;

    // 0x201798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20179c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x20179cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2017a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2017a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2017a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2017a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2017a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2017ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2017acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017b0: 0x24448568  addiu       $a0, $v0, -0x7A98
    ctx->pc = 0x2017b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935912));
    // 0x2017b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2017b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2017b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2017bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2017bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2017c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2017c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2017c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2017c8: 0xc082d46  jal         func_20B518
    ctx->pc = 0x2017C8u;
    SET_GPR_U32(ctx, 31, 0x2017D0u);
    ctx->pc = 0x2017CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2017C8u;
    // 0x2017cc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B518u, 0x2017C8u, 0x2017D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017D0u;
label_2017d0:
    // 0x2017d0: 0xc081950  jal         func_206540
    ctx->pc = 0x2017D0u;
    SET_GPR_U32(ctx, 31, 0x2017D8u);
    ctx->pc = 0x2017D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2017D0u;
    // 0x2017d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206540u, 0x2017D0u, 0x2017D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017D8u;
label_2017d8:
    // 0x2017d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2017d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2017dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2017e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2017e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2017e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2017e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2017ec: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2017ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2017f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2017f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2017f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2017f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2017f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2017fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201800: 0x8082c8e  j           func_20B238
    ctx->pc = 0x201800u;
    ctx->pc = 0x201804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201800u;
    // 0x201804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B238u;
    sub_0020B238_0x20b238(rdram, ctx, runtime); return;
    ctx->pc = 0x201808u;
}
