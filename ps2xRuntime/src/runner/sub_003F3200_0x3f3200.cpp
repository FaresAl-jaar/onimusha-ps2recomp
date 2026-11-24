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

// Function: sub_003F3200
// Address: 0x3f3200 - 0x3f32ec
void sub_003F3200_0x3f3200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3200_0x3f3200");
#endif

    switch (ctx->pc) {
        case 0x3f3218u: goto label_3f3218;
        case 0x3f3244u: goto label_3f3244;
        case 0x3f3258u: goto label_3f3258;
        case 0x3f3270u: goto label_3f3270;
        case 0x3f3288u: goto label_3f3288;
        case 0x3f32a0u: goto label_3f32a0;
        case 0x3f32b8u: goto label_3f32b8;
        default: break;
    }

    ctx->pc = 0x3f3200u;

    // 0x3f3200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f3200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f3204: 0x240403f0  addiu       $a0, $zero, 0x3F0
    ctx->pc = 0x3f3204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x3f3208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f3208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f320c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f3210: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3F3210u;
    SET_GPR_U32(ctx, 31, 0x3F3218u);
    ctx->pc = 0x3F3214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3210u;
    // 0x3f3214: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3F3210u, 0x3F3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3218u;
label_3f3218:
    // 0x3f3218: 0xaf828d38  sw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f3218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 2));
    // 0x3f321c: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f3220: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F3220u;
    {
        const bool branch_taken_0x3f3220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3220u;
        // 0x3f3224: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3220) {
            ctx->pc = 0x3F32D8u;
            goto label_3f32d8;
        }
    }
    ctx->pc = 0x3F3228u;
    // 0x3f3228: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f3228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f322c: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3f322cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x3f3230: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3f3230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3f3234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3238: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f3238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f323c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3F323Cu;
    SET_GPR_U32(ctx, 31, 0x3F3244u);
    ctx->pc = 0x3F3240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F323Cu;
    // 0x3f3240: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3F323Cu, 0x3F3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3244u;
label_3f3244:
    // 0x3f3244: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f3244u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f3248: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f3248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f324c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F324Cu;
    {
        const bool branch_taken_0x3f324c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F324Cu;
        // 0x3f3250: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f324c) {
            ctx->pc = 0x3F32D0u;
            goto label_3f32d0;
        }
    }
    ctx->pc = 0x3F3254u;
    // 0x3f3254: 0x0  nop
    ctx->pc = 0x3f3254u;
    // NOP
label_3f3258:
    // 0x3f3258: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3258u;
    {
        const bool branch_taken_0x3f3258 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3258u;
        // 0x3f325c: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3258) {
            ctx->pc = 0x3F3270u;
            goto label_3f3270;
        }
    }
    ctx->pc = 0x3F3260u;
    // 0x3f3260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f3264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3268: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F3268u;
    SET_GPR_U32(ctx, 31, 0x3F3270u);
    ctx->pc = 0x3F326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3268u;
    // 0x3f326c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F3268u, 0x3F3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3270u;
label_3f3270:
    // 0x3f3270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f3270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3274: 0x16250004  bne         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F3274u;
    {
        const bool branch_taken_0x3f3274 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x3F3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3274u;
        // 0x3f3278: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3274) {
            ctx->pc = 0x3F3288u;
            goto label_3f3288;
        }
    }
    ctx->pc = 0x3F327Cu;
    // 0x3f327c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3280: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F3280u;
    SET_GPR_U32(ctx, 31, 0x3F3288u);
    ctx->pc = 0x3F3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3280u;
    // 0x3f3284: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F3280u, 0x3F3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3288u;
label_3f3288:
    // 0x3f3288: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f3288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f328c: 0x16250004  bne         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F328Cu;
    {
        const bool branch_taken_0x3f328c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x3F3290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F328Cu;
        // 0x3f3290: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f328c) {
            ctx->pc = 0x3F32A0u;
            goto label_3f32a0;
        }
    }
    ctx->pc = 0x3F3294u;
    // 0x3f3294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f3294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3298: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F3298u;
    SET_GPR_U32(ctx, 31, 0x3F32A0u);
    ctx->pc = 0x3F329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3298u;
    // 0x3f329c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F3298u, 0x3F32A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F32A0u;
label_3f32a0:
    // 0x3f32a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f32a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f32a4: 0x16250004  bne         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F32A4u;
    {
        const bool branch_taken_0x3f32a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x3F32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32A4u;
        // 0x3f32a8: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32a4) {
            ctx->pc = 0x3F32B8u;
            goto label_3f32b8;
        }
    }
    ctx->pc = 0x3F32ACu;
    // 0x3f32ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f32acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f32b0: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F32B0u;
    SET_GPR_U32(ctx, 31, 0x3F32B8u);
    ctx->pc = 0x3F32B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F32B0u;
    // 0x3f32b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F32B0u, 0x3F32B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F32B8u;
label_3f32b8:
    // 0x3f32b8: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f32b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f32bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f32bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f32c0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f32c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f32c4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3F32C4u;
    {
        const bool branch_taken_0x3f32c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f32c4) {
            ctx->pc = 0x3F3258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f3258;
        }
    }
    ctx->pc = 0x3F32CCu;
    // 0x3f32cc: 0x0  nop
    ctx->pc = 0x3f32ccu;
    // NOP
label_3f32d0:
    // 0x3f32d0: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f32d4: 0xa0600390  sb          $zero, 0x390($v1)
    ctx->pc = 0x3f32d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 912), (uint8_t)GPR_U32(ctx, 0));
label_3f32d8:
    // 0x3f32d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f32d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f32dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f32dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f32e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f32e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f32e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F32E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32E4u;
        // 0x3f32e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F32E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F32ECu;
}
