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

// Function: sub_00331190
// Address: 0x331190 - 0x331220
void sub_00331190_0x331190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331190_0x331190");
#endif

    switch (ctx->pc) {
        case 0x3311c8u: goto label_3311c8;
        case 0x3311f0u: goto label_3311f0;
        default: break;
    }

    ctx->pc = 0x331190u;

    // 0x331190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x331190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x331194: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x331194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x331198: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x331198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33119c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3311a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3311a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3311a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3311a8: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x3311a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3311ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3311acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3311b0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3311b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3311b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3311b8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3311B8u;
    {
        const bool branch_taken_0x3311b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3311BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3311B8u;
        // 0x3311bc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3311b8) {
            ctx->pc = 0x331200u;
            goto label_331200;
        }
    }
    ctx->pc = 0x3311C0u;
    // 0x3311c0: 0x24910002  addiu       $s1, $a0, 0x2
    ctx->pc = 0x3311c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3311c4: 0x1138023  subu        $s0, $t0, $s3
    ctx->pc = 0x3311c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
label_3311c8:
    // 0x3311c8: 0x96261c72  lhu         $a2, 0x1C72($s1)
    ctx->pc = 0x3311c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 7282)));
    // 0x3311cc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3311ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3311d0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3311d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3311d4: 0x24846b74  addiu       $a0, $a0, 0x6B74
    ctx->pc = 0x3311d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27508));
    // 0x3311d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3311d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3311dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311e0: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x3311e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x3311e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3311e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311e8: 0xc09c62c  jal         func_2718B0
    ctx->pc = 0x3311E8u;
    SET_GPR_U32(ctx, 31, 0x3311F0u);
    ctx->pc = 0x3311ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3311E8u;
    // 0x3311ec: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2718B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2718B0u, 0x3311E8u, 0x3311F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311F0u;
label_3311f0:
    // 0x3311f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3311f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3311f4: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x3311f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3311f8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3311F8u;
    {
        const bool branch_taken_0x3311f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3311FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3311F8u;
        // 0x3311fc: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3311f8) {
            ctx->pc = 0x3311C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3311c8;
        }
    }
    ctx->pc = 0x331200u;
label_331200:
    // 0x331200: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x331200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331204: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x331204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331208: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x331208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33120c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33120cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331218: 0x3e00008  jr          $ra
    ctx->pc = 0x331218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331218u;
        // 0x33121c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331220u;
}
