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

// Function: sub_00272330
// Address: 0x272330 - 0x272438
void sub_00272330_0x272330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272330_0x272330");
#endif

    switch (ctx->pc) {
        case 0x272374u: goto label_272374;
        case 0x2723c0u: goto label_2723c0;
        case 0x2723d0u: goto label_2723d0;
        case 0x2723f0u: goto label_2723f0;
        case 0x272400u: goto label_272400;
        case 0x272410u: goto label_272410;
        case 0x272420u: goto label_272420;
        case 0x272428u: goto label_272428;
        default: break;
    }

    ctx->pc = 0x272330u;

    // 0x272330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272334: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x272334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27233c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272344: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x272344u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x272348: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x272348u;
    {
        const bool branch_taken_0x272348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272348u;
        // 0x27234c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272348) {
            ctx->pc = 0x272408u;
            goto label_272408;
        }
    }
    ctx->pc = 0x272350u;
    // 0x272350: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x272350u;
    {
        const bool branch_taken_0x272350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x272350) {
            ctx->pc = 0x2723C8u;
            goto label_2723c8;
        }
    }
    ctx->pc = 0x272358u;
    // 0x272358: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272358u;
    {
        const bool branch_taken_0x272358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x272358) {
            ctx->pc = 0x272368u;
            goto label_272368;
        }
    }
    ctx->pc = 0x272360u;
    // 0x272360: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x272360u;
    {
        const bool branch_taken_0x272360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272360) {
            ctx->pc = 0x272428u;
            goto label_272428;
        }
    }
    ctx->pc = 0x272368u;
label_272368:
    // 0x272368: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x272368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27236c: 0xc09c3c8  jal         func_270F20
    ctx->pc = 0x27236Cu;
    SET_GPR_U32(ctx, 31, 0x272374u);
    ctx->pc = 0x272370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27236Cu;
    // 0x272370: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270F20u, 0x27236Cu, 0x272374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272374u;
label_272374:
    // 0x272374: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x272374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x272378: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x272378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x27237c: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x27237cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x272380: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x272380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272384: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x272384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x272388: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x272388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x27238c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x27238cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272390: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x272390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x272394: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x272394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x272398: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x272398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
    // 0x27239c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27239cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2723a0: 0xac25ceb8  sw          $a1, -0x3148($at)
    ctx->pc = 0x2723a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x2723a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2723a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2723a8: 0x8c25ceb8  lw          $a1, -0x3148($at)
    ctx->pc = 0x2723a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2723ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2723acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2723b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2723b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2723b4: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x2723b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x2723b8: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x2723B8u;
    SET_GPR_U32(ctx, 31, 0x2723C0u);
    ctx->pc = 0x2723BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2723B8u;
    // 0x2723bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x2723B8u, 0x2723C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723C0u;
label_2723c0:
    // 0x2723c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2723C0u;
    {
        const bool branch_taken_0x2723c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2723c0) {
            ctx->pc = 0x272428u;
            goto label_272428;
        }
    }
    ctx->pc = 0x2723C8u;
label_2723c8:
    // 0x2723c8: 0xc05551c  jal         func_155470
    ctx->pc = 0x2723C8u;
    SET_GPR_U32(ctx, 31, 0x2723D0u);
    ctx->pc = 0x2723CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2723C8u;
    // 0x2723cc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x2723C8u, 0x2723D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723D0u;
label_2723d0:
    // 0x2723d0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2723D0u;
    {
        const bool branch_taken_0x2723d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2723d0) {
            ctx->pc = 0x272428u;
            goto label_272428;
        }
    }
    ctx->pc = 0x2723D8u;
    // 0x2723d8: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2723d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2723dc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x2723dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x2723e0: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x2723e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x2723e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2723e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2723e8: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x2723E8u;
    SET_GPR_U32(ctx, 31, 0x2723F0u);
    ctx->pc = 0x2723ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2723E8u;
    // 0x2723ec: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x2723E8u, 0x2723F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723F0u;
label_2723f0:
    // 0x2723f0: 0x9605000c  lhu         $a1, 0xC($s0)
    ctx->pc = 0x2723f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2723f4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2723f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2723f8: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x2723F8u;
    SET_GPR_U32(ctx, 31, 0x272400u);
    ctx->pc = 0x2723FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2723F8u;
    // 0x2723fc: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x2723F8u, 0x272400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272400u;
label_272400:
    // 0x272400: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x272400u;
    {
        const bool branch_taken_0x272400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272400) {
            ctx->pc = 0x272428u;
            goto label_272428;
        }
    }
    ctx->pc = 0x272408u;
label_272408:
    // 0x272408: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x272408u;
    SET_GPR_U32(ctx, 31, 0x272410u);
    ctx->pc = 0x27240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272408u;
    // 0x27240c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x272408u, 0x272410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272410u;
label_272410:
    // 0x272410: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272410u;
    {
        const bool branch_taken_0x272410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272410u;
        // 0x272414: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272410) {
            ctx->pc = 0x272428u;
            goto label_272428;
        }
    }
    ctx->pc = 0x272418u;
    // 0x272418: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x272418u;
    SET_GPR_U32(ctx, 31, 0x272420u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x272418u, 0x272420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272420u;
label_272420:
    // 0x272420: 0xc09c94c  jal         func_272530
    ctx->pc = 0x272420u;
    SET_GPR_U32(ctx, 31, 0x272428u);
    ctx->pc = 0x272424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272420u;
    // 0x272424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272530u, 0x272420u, 0x272428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272428u;
label_272428:
    // 0x272428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27242c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27242cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272430: 0x3e00008  jr          $ra
    ctx->pc = 0x272430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272430u;
        // 0x272434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272438u;
}
