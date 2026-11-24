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

// Function: sub_0026B380
// Address: 0x26b380 - 0x26b580
void sub_0026B380_0x26b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B380_0x26b380");
#endif

    switch (ctx->pc) {
        case 0x26b3e0u: goto label_26b3e0;
        case 0x26b424u: goto label_26b424;
        case 0x26b434u: goto label_26b434;
        case 0x26b444u: goto label_26b444;
        case 0x26b454u: goto label_26b454;
        case 0x26b468u: goto label_26b468;
        case 0x26b478u: goto label_26b478;
        case 0x26b498u: goto label_26b498;
        case 0x26b4a8u: goto label_26b4a8;
        case 0x26b4b8u: goto label_26b4b8;
        case 0x26b4c8u: goto label_26b4c8;
        case 0x26b4d4u: goto label_26b4d4;
        case 0x26b4e8u: goto label_26b4e8;
        case 0x26b52cu: goto label_26b52c;
        case 0x26b54cu: goto label_26b54c;
        case 0x26b564u: goto label_26b564;
        case 0x26b56cu: goto label_26b56c;
        default: break;
    }

    ctx->pc = 0x26b380u;

    // 0x26b380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b384: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x26b384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26b388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26b38c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26b390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b394: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x26b394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26b398: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x26B398u;
    {
        const bool branch_taken_0x26b398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B398u;
        // 0x26b39c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b398) {
            ctx->pc = 0x26B538u;
            goto label_26b538;
        }
    }
    ctx->pc = 0x26B3A0u;
    // 0x26b3a0: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x26B3A0u;
    {
        const bool branch_taken_0x26b3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b3a0) {
            ctx->pc = 0x26B500u;
            goto label_26b500;
        }
    }
    ctx->pc = 0x26B3A8u;
    // 0x26b3a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b3ac: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x26B3ACu;
    {
        const bool branch_taken_0x26b3ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3ACu;
        // 0x26b3b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3ac) {
            ctx->pc = 0x26B4B0u;
            goto label_26b4b0;
        }
    }
    ctx->pc = 0x26B3B4u;
    // 0x26b3b4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x26B3B4u;
    {
        const bool branch_taken_0x26b3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b3b4) {
            ctx->pc = 0x26B470u;
            goto label_26b470;
        }
    }
    ctx->pc = 0x26B3BCu;
    // 0x26b3bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B3BCu;
    {
        const bool branch_taken_0x26b3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b3bc) {
            ctx->pc = 0x26B3D0u;
            goto label_26b3d0;
        }
    }
    ctx->pc = 0x26B3C4u;
    // 0x26b3c4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x26B3C4u;
    {
        const bool branch_taken_0x26b3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b3c4) {
            ctx->pc = 0x26B570u;
            goto label_26b570;
        }
    }
    ctx->pc = 0x26B3CCu;
    // 0x26b3cc: 0x0  nop
    ctx->pc = 0x26b3ccu;
    // NOP
label_26b3d0:
    // 0x26b3d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x26b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26b3d4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x26b3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x26b3d8: 0xc09c3c8  jal         func_270F20
    ctx->pc = 0x26B3D8u;
    SET_GPR_U32(ctx, 31, 0x26B3E0u);
    ctx->pc = 0x26B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B3D8u;
    // 0x26b3dc: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270F20u, 0x26B3D8u, 0x26B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3E0u;
label_26b3e0:
    // 0x26b3e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26b3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26b3e4: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x26b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x26b3e8: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x26b3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26b3ec: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x26b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x26b3f0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26b3f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26b3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26b3f8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x26b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x26b3fc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b400: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x26b400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x26b404: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26b404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26b408: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x26b408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26b40c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26b40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26b410: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26b410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26b414: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26b418: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26b418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26b41c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x26B41Cu;
    SET_GPR_U32(ctx, 31, 0x26B424u);
    ctx->pc = 0x26B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B41Cu;
    // 0x26b420: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x26B41Cu, 0x26B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B424u;
label_26b424:
    // 0x26b424: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26b424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26b428: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26b428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b42c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x26B42Cu;
    SET_GPR_U32(ctx, 31, 0x26B434u);
    ctx->pc = 0x26B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B42Cu;
    // 0x26b430: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x26B42Cu, 0x26B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B434u;
label_26b434:
    // 0x26b434: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26b434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26b438: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x26b438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26b43c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x26B43Cu;
    SET_GPR_U32(ctx, 31, 0x26B444u);
    ctx->pc = 0x26B440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B43Cu;
    // 0x26b440: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x26B43Cu, 0x26B444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B444u;
label_26b444:
    // 0x26b444: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26b444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26b448: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x26b448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26b44c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x26B44Cu;
    SET_GPR_U32(ctx, 31, 0x26B454u);
    ctx->pc = 0x26B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B44Cu;
    // 0x26b450: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x26B44Cu, 0x26B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B454u;
label_26b454:
    // 0x26b454: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26b454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26b458: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x26b458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x26b45c: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x26b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC98u));
    // 0x26b460: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x26B460u;
    SET_GPR_U32(ctx, 31, 0x26B468u);
    ctx->pc = 0x26B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B460u;
    // 0x26b464: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x26B460u, 0x26B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B468u;
label_26b468:
    // 0x26b468: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x26B468u;
    {
        const bool branch_taken_0x26b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b468) {
            ctx->pc = 0x26B570u;
            goto label_26b570;
        }
    }
    ctx->pc = 0x26B470u;
label_26b470:
    // 0x26b470: 0xc05551c  jal         func_155470
    ctx->pc = 0x26B470u;
    SET_GPR_U32(ctx, 31, 0x26B478u);
    ctx->pc = 0x26B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B470u;
    // 0x26b474: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x26B470u, 0x26B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B478u;
label_26b478:
    // 0x26b478: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26B478u;
    {
        const bool branch_taken_0x26b478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b478) {
            ctx->pc = 0x26B570u;
            goto label_26b570;
        }
    }
    ctx->pc = 0x26B480u;
    // 0x26b480: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x26b480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x26b484: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x26b484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x26b488: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x26b488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x26b48c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b490: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x26B490u;
    SET_GPR_U32(ctx, 31, 0x26B498u);
    ctx->pc = 0x26B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B490u;
    // 0x26b494: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x26B490u, 0x26B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B498u;
label_26b498:
    // 0x26b498: 0x9605000c  lhu         $a1, 0xC($s0)
    ctx->pc = 0x26b498u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26b49c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x26b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x26b4a0: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x26B4A0u;
    SET_GPR_U32(ctx, 31, 0x26B4A8u);
    ctx->pc = 0x26B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4A0u;
    // 0x26b4a4: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x26B4A0u, 0x26B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4A8u;
label_26b4a8:
    // 0x26b4a8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26B4A8u;
    {
        const bool branch_taken_0x26b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b4a8) {
            ctx->pc = 0x26B570u;
            goto label_26b570;
        }
    }
    ctx->pc = 0x26B4B0u;
label_26b4b0:
    // 0x26b4b0: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x26B4B0u;
    SET_GPR_U32(ctx, 31, 0x26B4B8u);
    ctx->pc = 0x26B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4B0u;
    // 0x26b4b4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x26B4B0u, 0x26B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4B8u;
label_26b4b8:
    // 0x26b4b8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26B4B8u;
    {
        const bool branch_taken_0x26b4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4B8u;
        // 0x26b4bc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4b8) {
            ctx->pc = 0x26B570u;
            goto label_26b570;
        }
    }
    ctx->pc = 0x26B4C0u;
    // 0x26b4c0: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x26B4C0u;
    SET_GPR_U32(ctx, 31, 0x26B4C8u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x26B4C0u, 0x26B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4C8u;
label_26b4c8:
    // 0x26b4c8: 0x9605000c  lhu         $a1, 0xC($s0)
    ctx->pc = 0x26b4c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26b4cc: 0xc0550b8  jal         func_1542E0
    ctx->pc = 0x26B4CCu;
    SET_GPR_U32(ctx, 31, 0x26B4D4u);
    ctx->pc = 0x26B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4CCu;
    // 0x26b4d0: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542E0u, 0x26B4CCu, 0x26B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4D4u;
label_26b4d4:
    // 0x26b4d4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26b4d8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26b4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b4dc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x26b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x26b4e0: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x26B4E0u;
    SET_GPR_U32(ctx, 31, 0x26B4E8u);
    ctx->pc = 0x26B4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4E0u;
    // 0x26b4e4: 0x24060b0e  addiu       $a2, $zero, 0xB0E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2830));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x26B4E0u, 0x26B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4E8u;
label_26b4e8:
    // 0x26b4e8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x26b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x26b4ec: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x26b4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x26b4f0: 0x9022fee8  lbu         $v0, -0x118($at)
    ctx->pc = 0x26b4f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEE8u));
    // 0x26b4f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26b4f8: 0xa202000e  sb          $v0, 0xE($s0)
    ctx->pc = 0x26b4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x26b4fc: 0x0  nop
    ctx->pc = 0x26b4fcu;
    // NOP
label_26b500:
    // 0x26b500: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x26b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26b504: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x26b504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x26b508: 0x240619ea  addiu       $a2, $zero, 0x19EA
    ctx->pc = 0x26b508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6634));
    // 0x26b50c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x26b50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x26b510: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26b510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26b514: 0xac2640b4  sw          $a2, 0x40B4($at)
    ctx->pc = 0x26b514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x26b518: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x26b518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x26b51c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x26b51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x26b520: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x26b520u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x26b524: 0xc0ce400  jal         func_339000
    ctx->pc = 0x26B524u;
    SET_GPR_U32(ctx, 31, 0x26B52Cu);
    ctx->pc = 0x26B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B524u;
    // 0x26b528: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339000u, 0x26B524u, 0x26B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B52Cu;
label_26b52c:
    // 0x26b52c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26B52Cu;
    {
        const bool branch_taken_0x26b52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b52c) {
            ctx->pc = 0x26B570u;
            goto label_26b570;
        }
    }
    ctx->pc = 0x26B534u;
    // 0x26b534: 0x0  nop
    ctx->pc = 0x26b534u;
    // NOP
label_26b538:
    // 0x26b538: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x26b538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x26b53c: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x26b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x26b540: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26b540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26b544: 0xc0ce31c  jal         func_338C70
    ctx->pc = 0x26B544u;
    SET_GPR_U32(ctx, 31, 0x26B54Cu);
    ctx->pc = 0x26B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B544u;
    // 0x26b548: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x26B544u, 0x26B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B54Cu;
label_26b54c:
    // 0x26b54c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B54Cu;
    {
        const bool branch_taken_0x26b54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B54Cu;
        // 0x26b550: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b54c) {
            ctx->pc = 0x26B570u;
            goto label_26b570;
        }
    }
    ctx->pc = 0x26B554u;
    // 0x26b554: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26b554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26b558: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x26b558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16568)));
    // 0x26b55c: 0xc0ce3f8  jal         func_338FE0
    ctx->pc = 0x26B55Cu;
    SET_GPR_U32(ctx, 31, 0x26B564u);
    ctx->pc = 0x26B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B55Cu;
    // 0x26b560: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FE0u, 0x26B55Cu, 0x26B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B564u;
label_26b564:
    // 0x26b564: 0xc09ada8  jal         func_26B6A0
    ctx->pc = 0x26B564u;
    SET_GPR_U32(ctx, 31, 0x26B56Cu);
    ctx->pc = 0x26B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B564u;
    // 0x26b568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B6A0u, 0x26B564u, 0x26B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B56Cu;
label_26b56c:
    // 0x26b56c: 0x0  nop
    ctx->pc = 0x26b56cu;
    // NOP
label_26b570:
    // 0x26b570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b578: 0x3e00008  jr          $ra
    ctx->pc = 0x26B578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B578u;
        // 0x26b57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B580u;
}
