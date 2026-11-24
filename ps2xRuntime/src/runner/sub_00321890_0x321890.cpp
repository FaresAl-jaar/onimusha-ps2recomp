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

// Function: sub_00321890
// Address: 0x321890 - 0x32192c
void sub_00321890_0x321890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321890_0x321890");
#endif

    switch (ctx->pc) {
        case 0x3218c4u: goto label_3218c4;
        default: break;
    }

    ctx->pc = 0x321890u;

    // 0x321890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x321890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x321894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x321894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x321898: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x321898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32189c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3218a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3218a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3218a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3218a8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3218a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3218acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3218b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3218b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3218b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3218b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3218b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218bc: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x3218BCu;
    SET_GPR_U32(ctx, 31, 0x3218C4u);
    ctx->pc = 0x3218C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3218BCu;
    // 0x3218c0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212A0u, 0x3218BCu, 0x3218C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3218C4u;
label_3218c4:
    // 0x3218c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3218c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3218c8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3218c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3218cc: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x3218ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
    // 0x3218d0: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x3218d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x3218d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3218d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3218d8: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x3218d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x3218dc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3218dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3218e0: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x3218e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x3218e4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3218e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3218e8: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x3218e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x3218ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3218ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3218f0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x3218f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x3218f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3218f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3218f8: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x3218f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x3218fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3218fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x321900: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x321900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x321904: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x321904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x321908: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x321908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x32190c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32190cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x321910: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x321910u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x321914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32191c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32191cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321924: 0x3e00008  jr          $ra
    ctx->pc = 0x321924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321924u;
        // 0x321928: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32192Cu;
}
