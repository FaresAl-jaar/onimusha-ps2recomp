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

// Function: sub_0033C270
// Address: 0x33c270 - 0x33c30c
void sub_0033C270_0x33c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C270_0x33c270");
#endif

    switch (ctx->pc) {
        case 0x33c28cu: goto label_33c28c;
        default: break;
    }

    ctx->pc = 0x33c270u;

    // 0x33c270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33c274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33c278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c27c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c280: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33c280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c284: 0xc0a7114  jal         func_29C450
    ctx->pc = 0x33C284u;
    SET_GPR_U32(ctx, 31, 0x33C28Cu);
    ctx->pc = 0x33C288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C284u;
    // 0x33c288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C450u, 0x33C284u, 0x33C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C28Cu;
label_33c28c:
    // 0x33c28c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x33c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x33c290: 0x26050520  addiu       $a1, $s0, 0x520
    ctx->pc = 0x33c290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x33c294: 0x248474e0  addiu       $a0, $a0, 0x74E0
    ctx->pc = 0x33c294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29920));
    // 0x33c298: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x33c298u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x6574E0u));
    // 0x33c29c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x33c29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x33c2a0: 0x24030ed0  addiu       $v1, $zero, 0xED0
    ctx->pc = 0x33c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3792));
    // 0x33c2a4: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x33c2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x33c2a8: 0x78860010  lq          $a2, 0x10($a0)
    ctx->pc = 0x33c2a8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x6574F0u));
    // 0x33c2ac: 0x7ca60010  sq          $a2, 0x10($a1)
    ctx->pc = 0x33c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 6));
    // 0x33c2b0: 0x78860020  lq          $a2, 0x20($a0)
    ctx->pc = 0x33c2b0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x657500u));
    // 0x33c2b4: 0x7ca60020  sq          $a2, 0x20($a1)
    ctx->pc = 0x33c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 6));
    // 0x33c2b8: 0x78860030  lq          $a2, 0x30($a0)
    ctx->pc = 0x33c2b8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x657510u));
    // 0x33c2bc: 0x7ca60030  sq          $a2, 0x30($a1)
    ctx->pc = 0x33c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 6));
    // 0x33c2c0: 0xa2000506  sb          $zero, 0x506($s0)
    ctx->pc = 0x33c2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1286), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c2c4: 0x7a240020  lq          $a0, 0x20($s1)
    ctx->pc = 0x33c2c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x33c2c8: 0x7e040560  sq          $a0, 0x560($s0)
    ctx->pc = 0x33c2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1376), GPR_VEC(ctx, 4));
    // 0x33c2cc: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x33c2ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x33c2d0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x33c2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33c2d4: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33C2D4u;
    {
        const bool branch_taken_0x33c2d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33c2d4) {
            ctx->pc = 0x33C2F8u;
            goto label_33c2f8;
        }
    }
    ctx->pc = 0x33C2DCu;
    // 0x33c2dc: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x33c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x33c2e0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33c2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33c2e4: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x33c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x33c2e8: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x33c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x33c2ec: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33c2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33c2f0: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x33c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x33c2f4: 0x0  nop
    ctx->pc = 0x33c2f4u;
    // NOP
label_33c2f8:
    // 0x33c2f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33c2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c2fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c304: 0x3e00008  jr          $ra
    ctx->pc = 0x33C304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C304u;
        // 0x33c308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C30Cu;
}
