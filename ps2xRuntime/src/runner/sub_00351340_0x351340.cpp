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

// Function: sub_00351340
// Address: 0x351340 - 0x351428
void sub_00351340_0x351340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351340_0x351340");
#endif

    switch (ctx->pc) {
        case 0x351370u: goto label_351370;
        case 0x351380u: goto label_351380;
        case 0x3513c0u: goto label_3513c0;
        case 0x3513d4u: goto label_3513d4;
        case 0x3513e8u: goto label_3513e8;
        case 0x351408u: goto label_351408;
        default: break;
    }

    ctx->pc = 0x351340u;

    // 0x351340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x351340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x351344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x351344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x351348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x351348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35134c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x351350: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x351350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x351354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x351358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x351358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35135c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x351360: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x351360u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x351364: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x351364u;
    {
        const bool branch_taken_0x351364 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x351368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351364u;
        // 0x351368: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351364) {
            ctx->pc = 0x351400u;
            goto label_351400;
        }
    }
    ctx->pc = 0x35136Cu;
    // 0x35136c: 0x0  nop
    ctx->pc = 0x35136cu;
    // NOP
label_351370:
    // 0x351370: 0x92450014  lbu         $a1, 0x14($s2)
    ctx->pc = 0x351370u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x351374: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x351374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x351378: 0xc0d384c  jal         func_34E130
    ctx->pc = 0x351378u;
    SET_GPR_U32(ctx, 31, 0x351380u);
    ctx->pc = 0x35137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351378u;
    // 0x35137c: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E130u, 0x351378u, 0x351380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351380u;
label_351380:
    // 0x351380: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x351380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351384: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x351384u;
    {
        const bool branch_taken_0x351384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x351384) {
            ctx->pc = 0x3513E8u;
            goto label_3513e8;
        }
    }
    ctx->pc = 0x35138Cu;
    // 0x35138c: 0x82830014  lb          $v1, 0x14($s4)
    ctx->pc = 0x35138cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x351390: 0x13863c  dsll32      $s0, $s3, 24
    ctx->pc = 0x351390u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 24));
    // 0x351394: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x351394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x351398: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x351398u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x35139c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35139cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3513a0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x3513a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3513a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3513a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3513a8: 0xa223000c  sb          $v1, 0xC($s1)
    ctx->pc = 0x3513a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x3513ac: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x3513acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x3513b0: 0xa220000b  sb          $zero, 0xB($s1)
    ctx->pc = 0x3513b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3513b4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3513b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3513b8: 0xc0d46bc  jal         func_351AF0
    ctx->pc = 0x3513B8u;
    SET_GPR_U32(ctx, 31, 0x3513C0u);
    ctx->pc = 0x3513BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3513B8u;
    // 0x3513bc: 0xae510008  sw          $s1, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AF0u, 0x3513B8u, 0x3513C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3513C0u;
label_3513c0:
    // 0x3513c0: 0x82820018  lb          $v0, 0x18($s4)
    ctx->pc = 0x3513c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x3513c4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3513C4u;
    {
        const bool branch_taken_0x3513c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3513C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3513C4u;
        // 0x3513c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3513c4) {
            ctx->pc = 0x3513E0u;
            goto label_3513e0;
        }
    }
    ctx->pc = 0x3513CCu;
    // 0x3513cc: 0xc0d46c8  jal         func_351B20
    ctx->pc = 0x3513CCu;
    SET_GPR_U32(ctx, 31, 0x3513D4u);
    ctx->pc = 0x351B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B20u, 0x3513CCu, 0x3513D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3513D4u;
label_3513d4:
    // 0x3513d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3513D4u;
    {
        const bool branch_taken_0x3513d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3513d4) {
            ctx->pc = 0x3513E8u;
            goto label_3513e8;
        }
    }
    ctx->pc = 0x3513DCu;
    // 0x3513dc: 0x0  nop
    ctx->pc = 0x3513dcu;
    // NOP
label_3513e0:
    // 0x3513e0: 0xc0d46cc  jal         func_351B30
    ctx->pc = 0x3513E0u;
    SET_GPR_U32(ctx, 31, 0x3513E8u);
    ctx->pc = 0x3513E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3513E0u;
    // 0x3513e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B30u, 0x3513E0u, 0x3513E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3513E8u;
label_3513e8:
    // 0x3513e8: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x3513e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3513ec: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x3513ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3513f0: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x3513f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3513f4: 0x1640ffde  bnez        $s2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3513F4u;
    {
        const bool branch_taken_0x3513f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3513F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3513F4u;
        // 0x3513f8: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3513f4) {
            ctx->pc = 0x351370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351370;
        }
    }
    ctx->pc = 0x3513FCu;
    // 0x3513fc: 0x0  nop
    ctx->pc = 0x3513fcu;
    // NOP
label_351400:
    // 0x351400: 0xc0d4548  jal         func_351520
    ctx->pc = 0x351400u;
    SET_GPR_U32(ctx, 31, 0x351408u);
    ctx->pc = 0x351404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351400u;
    // 0x351404: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351520u, 0x351400u, 0x351408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351408u;
label_351408:
    // 0x351408: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x351408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35140c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35140cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x351410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x351410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x351414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x351414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x351418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35141c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35141cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351420: 0x3e00008  jr          $ra
    ctx->pc = 0x351420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351420u;
        // 0x351424: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351428u;
}
