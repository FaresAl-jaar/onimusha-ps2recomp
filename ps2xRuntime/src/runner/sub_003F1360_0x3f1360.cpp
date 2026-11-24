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

// Function: sub_003F1360
// Address: 0x3f1360 - 0x3f143c
void sub_003F1360_0x3f1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1360_0x3f1360");
#endif

    switch (ctx->pc) {
        case 0x3f13a8u: goto label_3f13a8;
        case 0x3f13d0u: goto label_3f13d0;
        case 0x3f13dcu: goto label_3f13dc;
        case 0x3f13f4u: goto label_3f13f4;
        case 0x3f141cu: goto label_3f141c;
        default: break;
    }

    ctx->pc = 0x3f1360u;

    // 0x3f1360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3f1364: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x3f1364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x3f1368: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f1368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3f136c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3f136cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3f1370: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f1370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f1374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f1374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f1378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f137c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f137cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f1384: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3f1384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f138c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3f138cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1390: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F1390u;
    {
        const bool branch_taken_0x3f1390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1390u;
        // 0x3f1394: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1390) {
            ctx->pc = 0x3F13B0u;
            goto label_3f13b0;
        }
    }
    ctx->pc = 0x3F1398u;
    // 0x3f1398: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3f1398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3f139c: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x3f139cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3f13a0: 0xc0d1634  jal         func_3458D0
    ctx->pc = 0x3F13A0u;
    SET_GPR_U32(ctx, 31, 0x3F13A8u);
    ctx->pc = 0x3F13A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F13A0u;
    // 0x3f13a4: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3458D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3458D0u, 0x3F13A0u, 0x3F13A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F13A8u;
label_3f13a8:
    // 0x3f13a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3F13A8u;
    {
        const bool branch_taken_0x3f13a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f13a8) {
            ctx->pc = 0x3F1420u;
            goto label_3f1420;
        }
    }
    ctx->pc = 0x3F13B0u;
label_3f13b0:
    // 0x3f13b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f13b4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F13B4u;
    {
        const bool branch_taken_0x3f13b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f13b4) {
            ctx->pc = 0x3F13E8u;
            goto label_3f13e8;
        }
    }
    ctx->pc = 0x3F13BCu;
    // 0x3f13bc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3f13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3f13c0: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x3f13c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3f13c4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x3f13c4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x3f13c8: 0xc0d1664  jal         func_345990
    ctx->pc = 0x3F13C8u;
    SET_GPR_U32(ctx, 31, 0x3F13D0u);
    ctx->pc = 0x3F13CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F13C8u;
    // 0x3f13cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345990u, 0x3F13C8u, 0x3F13D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F13D0u;
label_3f13d0:
    // 0x3f13d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f13d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f13d4: 0xc0d0978  jal         func_3425E0
    ctx->pc = 0x3F13D4u;
    SET_GPR_U32(ctx, 31, 0x3F13DCu);
    ctx->pc = 0x3F13D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F13D4u;
    // 0x3f13d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3425E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3425E0u, 0x3F13D4u, 0x3F13DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F13DCu;
label_3f13dc:
    // 0x3f13dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3F13DCu;
    {
        const bool branch_taken_0x3f13dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f13dc) {
            ctx->pc = 0x3F1420u;
            goto label_3f1420;
        }
    }
    ctx->pc = 0x3F13E4u;
    // 0x3f13e4: 0x0  nop
    ctx->pc = 0x3f13e4u;
    // NOP
label_3f13e8:
    // 0x3f13e8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f13ec: 0xc0d0a30  jal         func_3428C0
    ctx->pc = 0x3F13ECu;
    SET_GPR_U32(ctx, 31, 0x3F13F4u);
    ctx->pc = 0x3F13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F13ECu;
    // 0x3f13f0: 0x24844100  addiu       $a0, $a0, 0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3428C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3428C0u, 0x3F13ECu, 0x3F13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F13F4u;
label_3f13f4:
    // 0x3f13f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f13f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f13f8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F13F8u;
    {
        const bool branch_taken_0x3f13f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f13f8) {
            ctx->pc = 0x3F1420u;
            goto label_3f1420;
        }
    }
    ctx->pc = 0x3F1400u;
    // 0x3f1400: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3f1400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f1404: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x3f1404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3f1408: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x3f1408u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3f140c: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x3f140cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x3f1410: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x3f1410u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x3f1414: 0xc0d0980  jal         func_342600
    ctx->pc = 0x3F1414u;
    SET_GPR_U32(ctx, 31, 0x3F141Cu);
    ctx->pc = 0x3F1418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1414u;
    // 0x3f1418: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342600u, 0x3F1414u, 0x3F141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F141Cu;
label_3f141c:
    // 0x3f141c: 0x0  nop
    ctx->pc = 0x3f141cu;
    // NOP
label_3f1420:
    // 0x3f1420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f1420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f1424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f1424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f1428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f142c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f142cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1434: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1434u;
        // 0x3f1438: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F143Cu;
}
