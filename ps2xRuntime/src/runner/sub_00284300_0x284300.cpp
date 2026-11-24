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

// Function: sub_00284300
// Address: 0x284300 - 0x2843ec
void sub_00284300_0x284300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284300_0x284300");
#endif

    switch (ctx->pc) {
        case 0x284348u: goto label_284348;
        case 0x284388u: goto label_284388;
        case 0x284398u: goto label_284398;
        default: break;
    }

    ctx->pc = 0x284300u;

    // 0x284300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x284300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x284304: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x284304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x284308: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x284308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28430c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x284310: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x284310u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284314: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x284314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x284318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x284318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28431c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284324: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x284324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x284328: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x284328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28432c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28432cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284330: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x284330u;
    {
        const bool branch_taken_0x284330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x284334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284330u;
        // 0x284334: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284330) {
            ctx->pc = 0x2843C8u;
            goto label_2843c8;
        }
    }
    ctx->pc = 0x284338u;
    // 0x284338: 0x5863c  dsll32      $s0, $a1, 24
    ctx->pc = 0x284338u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 24));
    // 0x28433c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28433cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284340: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x284340u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x284344: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x284344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284348:
    // 0x284348: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x284348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x28434c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x28434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x284350: 0x90630011  lbu         $v1, 0x11($v1)
    ctx->pc = 0x284350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x284354: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x284354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x284358: 0x16030013  bne         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x284358u;
    {
        const bool branch_taken_0x284358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x284358) {
            ctx->pc = 0x2843A8u;
            goto label_2843a8;
        }
    }
    ctx->pc = 0x284360u;
    // 0x284360: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x284360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x284364: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x284364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x284368: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x284368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x28436c: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x28436cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x284370: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x284370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x284374: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x284374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x284378: 0x24670006  addiu       $a3, $v1, 0x6
    ctx->pc = 0x284378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x28437c: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x28437cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x284380: 0xc096da0  jal         func_25B680
    ctx->pc = 0x284380u;
    SET_GPR_U32(ctx, 31, 0x284388u);
    ctx->pc = 0x284384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284380u;
    // 0x284384: 0x2469000c  addiu       $t1, $v1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x284380u, 0x284388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284388u;
label_284388:
    // 0x284388: 0xa6600022  sh          $zero, 0x22($s3)
    ctx->pc = 0x284388u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x28438c: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x28438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x284390: 0xc096d80  jal         func_25B600
    ctx->pc = 0x284390u;
    SET_GPR_U32(ctx, 31, 0x284398u);
    ctx->pc = 0x284394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284390u;
    // 0x284394: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x284390u, 0x284398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284398u;
label_284398:
    // 0x284398: 0xa2620024  sb          $v0, 0x24($s3)
    ctx->pc = 0x284398u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x28439c: 0xa6600020  sh          $zero, 0x20($s3)
    ctx->pc = 0x28439cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2843a0: 0xa2600025  sb          $zero, 0x25($s3)
    ctx->pc = 0x2843a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x2843a4: 0x0  nop
    ctx->pc = 0x2843a4u;
    // NOP
label_2843a8:
    // 0x2843a8: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x2843a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
    // 0x2843ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2843acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2843b0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2843b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2843b4: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x2843b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2843b8: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2843b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2843bc: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2843BCu;
    {
        const bool branch_taken_0x2843bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2843C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843BCu;
        // 0x2843c0: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843bc) {
            ctx->pc = 0x284348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284348;
        }
    }
    ctx->pc = 0x2843C4u;
    // 0x2843c4: 0x0  nop
    ctx->pc = 0x2843c4u;
    // NOP
label_2843c8:
    // 0x2843c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2843c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2843cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2843ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2843d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2843d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2843d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2843d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2843d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2843d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2843dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2843dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2843e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2843e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2843e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2843E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2843E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843E4u;
        // 0x2843e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2843E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2843ECu;
}
