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

// Function: sub_0029A2E0
// Address: 0x29a2e0 - 0x29a50c
void sub_0029A2E0_0x29a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A2E0_0x29a2e0");
#endif

    switch (ctx->pc) {
        case 0x29a2e0u: goto label_29a2e0;
        case 0x29a2e4u: goto label_29a2e4;
        case 0x29a2e8u: goto label_29a2e8;
        case 0x29a2ecu: goto label_29a2ec;
        case 0x29a2f0u: goto label_29a2f0;
        case 0x29a2f4u: goto label_29a2f4;
        case 0x29a2f8u: goto label_29a2f8;
        case 0x29a2fcu: goto label_29a2fc;
        case 0x29a300u: goto label_29a300;
        case 0x29a304u: goto label_29a304;
        case 0x29a308u: goto label_29a308;
        case 0x29a30cu: goto label_29a30c;
        case 0x29a310u: goto label_29a310;
        case 0x29a314u: goto label_29a314;
        case 0x29a318u: goto label_29a318;
        case 0x29a31cu: goto label_29a31c;
        case 0x29a320u: goto label_29a320;
        case 0x29a324u: goto label_29a324;
        case 0x29a328u: goto label_29a328;
        case 0x29a32cu: goto label_29a32c;
        case 0x29a330u: goto label_29a330;
        case 0x29a334u: goto label_29a334;
        case 0x29a338u: goto label_29a338;
        case 0x29a33cu: goto label_29a33c;
        case 0x29a340u: goto label_29a340;
        case 0x29a344u: goto label_29a344;
        case 0x29a348u: goto label_29a348;
        case 0x29a34cu: goto label_29a34c;
        case 0x29a350u: goto label_29a350;
        case 0x29a354u: goto label_29a354;
        case 0x29a358u: goto label_29a358;
        case 0x29a35cu: goto label_29a35c;
        case 0x29a360u: goto label_29a360;
        case 0x29a364u: goto label_29a364;
        case 0x29a368u: goto label_29a368;
        case 0x29a36cu: goto label_29a36c;
        case 0x29a370u: goto label_29a370;
        case 0x29a374u: goto label_29a374;
        case 0x29a378u: goto label_29a378;
        case 0x29a37cu: goto label_29a37c;
        case 0x29a380u: goto label_29a380;
        case 0x29a384u: goto label_29a384;
        case 0x29a388u: goto label_29a388;
        case 0x29a38cu: goto label_29a38c;
        case 0x29a390u: goto label_29a390;
        case 0x29a394u: goto label_29a394;
        case 0x29a398u: goto label_29a398;
        case 0x29a39cu: goto label_29a39c;
        case 0x29a3a0u: goto label_29a3a0;
        case 0x29a3a4u: goto label_29a3a4;
        case 0x29a3a8u: goto label_29a3a8;
        case 0x29a3acu: goto label_29a3ac;
        case 0x29a3b0u: goto label_29a3b0;
        case 0x29a3b4u: goto label_29a3b4;
        case 0x29a3b8u: goto label_29a3b8;
        case 0x29a3bcu: goto label_29a3bc;
        case 0x29a3c0u: goto label_29a3c0;
        case 0x29a3c4u: goto label_29a3c4;
        case 0x29a3c8u: goto label_29a3c8;
        case 0x29a3ccu: goto label_29a3cc;
        case 0x29a3d0u: goto label_29a3d0;
        case 0x29a3d4u: goto label_29a3d4;
        case 0x29a3d8u: goto label_29a3d8;
        case 0x29a3dcu: goto label_29a3dc;
        case 0x29a3e0u: goto label_29a3e0;
        case 0x29a3e4u: goto label_29a3e4;
        case 0x29a3e8u: goto label_29a3e8;
        case 0x29a3ecu: goto label_29a3ec;
        case 0x29a3f0u: goto label_29a3f0;
        case 0x29a3f4u: goto label_29a3f4;
        case 0x29a3f8u: goto label_29a3f8;
        case 0x29a3fcu: goto label_29a3fc;
        case 0x29a400u: goto label_29a400;
        case 0x29a404u: goto label_29a404;
        case 0x29a408u: goto label_29a408;
        case 0x29a40cu: goto label_29a40c;
        case 0x29a410u: goto label_29a410;
        case 0x29a414u: goto label_29a414;
        case 0x29a418u: goto label_29a418;
        case 0x29a41cu: goto label_29a41c;
        case 0x29a420u: goto label_29a420;
        case 0x29a424u: goto label_29a424;
        case 0x29a428u: goto label_29a428;
        case 0x29a42cu: goto label_29a42c;
        case 0x29a430u: goto label_29a430;
        case 0x29a434u: goto label_29a434;
        case 0x29a438u: goto label_29a438;
        case 0x29a43cu: goto label_29a43c;
        case 0x29a440u: goto label_29a440;
        case 0x29a444u: goto label_29a444;
        case 0x29a448u: goto label_29a448;
        case 0x29a44cu: goto label_29a44c;
        case 0x29a450u: goto label_29a450;
        case 0x29a454u: goto label_29a454;
        case 0x29a458u: goto label_29a458;
        case 0x29a45cu: goto label_29a45c;
        case 0x29a460u: goto label_29a460;
        case 0x29a464u: goto label_29a464;
        case 0x29a468u: goto label_29a468;
        case 0x29a46cu: goto label_29a46c;
        case 0x29a470u: goto label_29a470;
        case 0x29a474u: goto label_29a474;
        case 0x29a478u: goto label_29a478;
        case 0x29a47cu: goto label_29a47c;
        case 0x29a480u: goto label_29a480;
        case 0x29a484u: goto label_29a484;
        case 0x29a488u: goto label_29a488;
        case 0x29a48cu: goto label_29a48c;
        case 0x29a490u: goto label_29a490;
        case 0x29a494u: goto label_29a494;
        case 0x29a498u: goto label_29a498;
        case 0x29a49cu: goto label_29a49c;
        case 0x29a4a0u: goto label_29a4a0;
        case 0x29a4a4u: goto label_29a4a4;
        case 0x29a4a8u: goto label_29a4a8;
        case 0x29a4acu: goto label_29a4ac;
        case 0x29a4b0u: goto label_29a4b0;
        case 0x29a4b4u: goto label_29a4b4;
        case 0x29a4b8u: goto label_29a4b8;
        case 0x29a4bcu: goto label_29a4bc;
        case 0x29a4c0u: goto label_29a4c0;
        case 0x29a4c4u: goto label_29a4c4;
        case 0x29a4c8u: goto label_29a4c8;
        case 0x29a4ccu: goto label_29a4cc;
        case 0x29a4d0u: goto label_29a4d0;
        case 0x29a4d4u: goto label_29a4d4;
        case 0x29a4d8u: goto label_29a4d8;
        case 0x29a4dcu: goto label_29a4dc;
        case 0x29a4e0u: goto label_29a4e0;
        case 0x29a4e4u: goto label_29a4e4;
        case 0x29a4e8u: goto label_29a4e8;
        case 0x29a4ecu: goto label_29a4ec;
        case 0x29a4f0u: goto label_29a4f0;
        case 0x29a4f4u: goto label_29a4f4;
        case 0x29a4f8u: goto label_29a4f8;
        case 0x29a4fcu: goto label_29a4fc;
        case 0x29a500u: goto label_29a500;
        case 0x29a504u: goto label_29a504;
        case 0x29a508u: goto label_29a508;
        default: break;
    }

    ctx->pc = 0x29a2e0u;

label_29a2e0:
    // 0x29a2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29a2e4:
    // 0x29a2e4: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x29a2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_29a2e8:
    // 0x29a2e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29a2ec:
    // 0x29a2ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29a2ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29a2f0:
    // 0x29a2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29a2f4:
    // 0x29a2f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a2f8:
    // 0x29a2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29a2fc:
    // 0x29a2fc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x29a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_29a300:
    // 0x29a300: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x29a300u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_29a304:
    // 0x29a304: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x29a304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29a308:
    // 0x29a308: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x29a308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_29a30c:
    // 0x29a30c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a310:
    // 0x29a310: 0x7c860020  sq          $a2, 0x20($a0)
    ctx->pc = 0x29a310u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 6));
label_29a314:
    // 0x29a314: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x29a314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
label_29a318:
    // 0x29a318: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x29a318u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_29a31c:
    // 0x29a31c: 0x7c860080  sq          $a2, 0x80($a0)
    ctx->pc = 0x29a31cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 6));
label_29a320:
    // 0x29a320: 0xac87008c  sw          $a3, 0x8C($a0)
    ctx->pc = 0x29a320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 7));
label_29a324:
    // 0x29a324: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x29a324u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_29a328:
    // 0x29a328: 0x7c8500d0  sq          $a1, 0xD0($a0)
    ctx->pc = 0x29a328u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 5));
label_29a32c:
    // 0x29a32c: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x29a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
label_29a330:
    // 0x29a330: 0xa48000c0  sh          $zero, 0xC0($a0)
    ctx->pc = 0x29a330u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 0));
label_29a334:
    // 0x29a334: 0xa48200c2  sh          $v0, 0xC2($a0)
    ctx->pc = 0x29a334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 2));
label_29a338:
    // 0x29a338: 0xa48000c4  sh          $zero, 0xC4($a0)
    ctx->pc = 0x29a338u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 0));
label_29a33c:
    // 0x29a33c: 0xc068ff4  jal         func_1A3FD0
label_29a340:
    if (ctx->pc == 0x29A340u) {
        ctx->pc = 0x29A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A33Cu;
        // 0x29a340: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A344u;
        goto label_29a344;
    }
    ctx->pc = 0x29A33Cu;
    SET_GPR_U32(ctx, 31, 0x29A344u);
    ctx->pc = 0x29A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A33Cu;
    // 0x29a340: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3FD0u, 0x29A33Cu, 0x29A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A344u;
label_29a344:
    // 0x29a344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29a348:
    if (ctx->pc == 0x29A348u) {
        ctx->pc = 0x29A34Cu;
        goto label_29a34c;
    }
    ctx->pc = 0x29A344u;
    {
        const bool branch_taken_0x29a344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a344) {
            ctx->pc = 0x29A358u;
            goto label_29a358;
        }
    }
    ctx->pc = 0x29A34Cu;
label_29a34c:
    // 0x29a34c: 0xc069078  jal         func_1A41E0
label_29a350:
    if (ctx->pc == 0x29A350u) {
        ctx->pc = 0x29A354u;
        goto label_29a354;
    }
    ctx->pc = 0x29A34Cu;
    SET_GPR_U32(ctx, 31, 0x29A354u);
    ctx->pc = 0x1A41E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41E0u, 0x29A34Cu, 0x29A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A354u;
label_29a354:
    // 0x29a354: 0x0  nop
    ctx->pc = 0x29a354u;
    // NOP
label_29a358:
    // 0x29a358: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x29a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_29a35c:
    // 0x29a35c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_29a360:
    if (ctx->pc == 0x29A360u) {
        ctx->pc = 0x29A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A35Cu;
        // 0x29a360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A364u;
        goto label_29a364;
    }
    ctx->pc = 0x29A35Cu;
    {
        const bool branch_taken_0x29a35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A35Cu;
        // 0x29a360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a35c) {
            ctx->pc = 0x29A370u;
            goto label_29a370;
        }
    }
    ctx->pc = 0x29A364u;
label_29a364:
    // 0x29a364: 0xc0b8c7c  jal         func_2E31F0
label_29a368:
    if (ctx->pc == 0x29A368u) {
        ctx->pc = 0x29A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A364u;
        // 0x29a368: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A36Cu;
        goto label_29a36c;
    }
    ctx->pc = 0x29A364u;
    SET_GPR_U32(ctx, 31, 0x29A36Cu);
    ctx->pc = 0x29A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A364u;
    // 0x29a368: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x29A364u, 0x29A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A36Cu;
label_29a36c:
    // 0x29a36c: 0x0  nop
    ctx->pc = 0x29a36cu;
    // NOP
label_29a370:
    // 0x29a370: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x29a370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_29a374:
    // 0x29a374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a378:
    // 0x29a378: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
label_29a37c:
    if (ctx->pc == 0x29A37Cu) {
        ctx->pc = 0x29A380u;
        goto label_29a380;
    }
    ctx->pc = 0x29A378u;
    {
        const bool branch_taken_0x29a378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29a378) {
            ctx->pc = 0x29A418u;
            goto label_29a418;
        }
    }
    ctx->pc = 0x29A380u;
label_29a380:
    // 0x29a380: 0x92220640  lbu         $v0, 0x640($s1)
    ctx->pc = 0x29a380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
label_29a384:
    // 0x29a384: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
label_29a388:
    if (ctx->pc == 0x29A388u) {
        ctx->pc = 0x29A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A384u;
        // 0x29a388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A38Cu;
        goto label_29a38c;
    }
    ctx->pc = 0x29A384u;
    {
        const bool branch_taken_0x29a384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A384u;
        // 0x29a388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a384) {
            ctx->pc = 0x29A418u;
            goto label_29a418;
        }
    }
    ctx->pc = 0x29A38Cu;
label_29a38c:
    // 0x29a38c: 0xc064158  jal         func_190560
label_29a390:
    if (ctx->pc == 0x29A390u) {
        ctx->pc = 0x29A394u;
        goto label_29a394;
    }
    ctx->pc = 0x29A38Cu;
    SET_GPR_U32(ctx, 31, 0x29A394u);
    ctx->pc = 0x190560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190560u, 0x29A38Cu, 0x29A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A394u;
label_29a394:
    // 0x29a394: 0x862400c2  lh          $a0, 0xC2($s1)
    ctx->pc = 0x29a394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_29a398:
    // 0x29a398: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x29a398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_29a39c:
    // 0x29a39c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x29a39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_29a3a0:
    // 0x29a3a0: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x29a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_29a3a4:
    // 0x29a3a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a3a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29a3a8:
    // 0x29a3a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29a3ac:
    // 0x29a3ac: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x29a3acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29a3b0:
    // 0x29a3b0: 0x0  nop
    ctx->pc = 0x29a3b0u;
    // NOP
label_29a3b4:
    // 0x29a3b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29a3b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_29a3b8:
    // 0x29a3b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29a3b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_29a3bc:
    // 0x29a3bc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29a3bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_29a3c0:
    // 0x29a3c0: 0x0  nop
    ctx->pc = 0x29a3c0u;
    // NOP
label_29a3c4:
    // 0x29a3c4: 0x0  nop
    ctx->pc = 0x29a3c4u;
    // NOP
label_29a3c8:
    // 0x29a3c8: 0xc064140  jal         func_190500
label_29a3cc:
    if (ctx->pc == 0x29A3CCu) {
        ctx->pc = 0x29A3D0u;
        goto label_29a3d0;
    }
    ctx->pc = 0x29A3C8u;
    SET_GPR_U32(ctx, 31, 0x29A3D0u);
    ctx->pc = 0x190500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190500u, 0x29A3C8u, 0x29A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A3D0u;
label_29a3d0:
    // 0x29a3d0: 0x862400c2  lh          $a0, 0xC2($s1)
    ctx->pc = 0x29a3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
label_29a3d4:
    // 0x29a3d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x29a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_29a3d8:
    // 0x29a3d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29a3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_29a3dc:
    // 0x29a3dc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x29a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_29a3e0:
    // 0x29a3e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29a3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29a3e4:
    // 0x29a3e4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x29a3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_29a3e8:
    // 0x29a3e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29a3e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29a3ec:
    // 0x29a3ec: 0x8c22fe84  lw          $v0, -0x17C($at)
    ctx->pc = 0x29a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966916)));
label_29a3f0:
    // 0x29a3f0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x29a3f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29a3f4:
    // 0x29a3f4: 0x0  nop
    ctx->pc = 0x29a3f4u;
    // NOP
label_29a3f8:
    // 0x29a3f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29a3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_29a3fc:
    // 0x29a3fc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x29a3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_29a400:
    // 0x29a400: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x29a400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_29a404:
    // 0x29a404: 0xac22fe84  sw          $v0, -0x17C($at)
    ctx->pc = 0x29a404u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 2));
label_29a408:
    // 0x29a408: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x29a408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
label_29a40c:
    // 0x29a40c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29a40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_29a410:
    // 0x29a410: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29a410u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_29a414:
    // 0x29a414: 0xe420fde4  swc1        $f0, -0x21C($at)
    ctx->pc = 0x29a414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966756), bits); }
label_29a418:
    // 0x29a418: 0x8e2428d4  lw          $a0, 0x28D4($s1)
    ctx->pc = 0x29a418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10452)));
label_29a41c:
    // 0x29a41c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x29a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_29a420:
    // 0x29a420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a424:
    // 0x29a424: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29a424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_29a428:
    // 0x29a428: 0xae2328d4  sw          $v1, 0x28D4($s1)
    ctx->pc = 0x29a428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10452), GPR_U32(ctx, 3));
label_29a42c:
    // 0x29a42c: 0xae2028f4  sw          $zero, 0x28F4($s1)
    ctx->pc = 0x29a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10484), GPR_U32(ctx, 0));
label_29a430:
    // 0x29a430: 0x9223000a  lbu         $v1, 0xA($s1)
    ctx->pc = 0x29a430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_29a434:
    // 0x29a434: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_29a438:
    if (ctx->pc == 0x29A438u) {
        ctx->pc = 0x29A43Cu;
        goto label_29a43c;
    }
    ctx->pc = 0x29A434u;
    {
        const bool branch_taken_0x29a434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29a434) {
            ctx->pc = 0x29A488u;
            goto label_29a488;
        }
    }
    ctx->pc = 0x29A43Cu;
label_29a43c:
    // 0x29a43c: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x29a43cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_29a440:
    // 0x29a440: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29a444:
    // 0x29a444: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_29a448:
    if (ctx->pc == 0x29A448u) {
        ctx->pc = 0x29A44Cu;
        goto label_29a44c;
    }
    ctx->pc = 0x29A444u;
    {
        const bool branch_taken_0x29a444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29a444) {
            ctx->pc = 0x29A488u;
            goto label_29a488;
        }
    }
    ctx->pc = 0x29A44Cu;
label_29a44c:
    // 0x29a44c: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x29a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_29a450:
    // 0x29a450: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x29a450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_29a454:
    // 0x29a454: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_29a458:
    if (ctx->pc == 0x29A458u) {
        ctx->pc = 0x29A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A454u;
        // 0x29a458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A45Cu;
        goto label_29a45c;
    }
    ctx->pc = 0x29A454u;
    {
        const bool branch_taken_0x29a454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A454u;
        // 0x29a458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a454) {
            ctx->pc = 0x29A488u;
            goto label_29a488;
        }
    }
    ctx->pc = 0x29A45Cu;
label_29a45c:
    // 0x29a45c: 0xc0a6998  jal         func_29A660
label_29a460:
    if (ctx->pc == 0x29A460u) {
        ctx->pc = 0x29A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A45Cu;
        // 0x29a460: 0xa220083d  sb          $zero, 0x83D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2109), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A464u;
        goto label_29a464;
    }
    ctx->pc = 0x29A45Cu;
    SET_GPR_U32(ctx, 31, 0x29A464u);
    ctx->pc = 0x29A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A45Cu;
    // 0x29a460: 0xa220083d  sb          $zero, 0x83D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2109), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x29A45Cu, 0x29A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A464u;
label_29a464:
    // 0x29a464: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29a464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29a468:
    // 0x29a468: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a46c:
    // 0x29a46c: 0xc096974  jal         func_25A5D0
label_29a470:
    if (ctx->pc == 0x29A470u) {
        ctx->pc = 0x29A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A46Cu;
        // 0x29a470: 0x228c3  sra         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A474u;
        goto label_29a474;
    }
    ctx->pc = 0x29A46Cu;
    SET_GPR_U32(ctx, 31, 0x29A474u);
    ctx->pc = 0x29A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A46Cu;
    // 0x29a470: 0x228c3  sra         $a1, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x29A46Cu, 0x29A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A474u;
label_29a474:
    // 0x29a474: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x29a474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_29a478:
    // 0x29a478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a47c:
    // 0x29a47c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x29a47cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_29a480:
    // 0x29a480: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x29a480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_29a484:
    // 0x29a484: 0x0  nop
    ctx->pc = 0x29a484u;
    // NOP
label_29a488:
    // 0x29a488: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x29a488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_29a48c:
    // 0x29a48c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x29a48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_29a490:
    // 0x29a490: 0x320f809  jalr        $t9
label_29a494:
    if (ctx->pc == 0x29A494u) {
        ctx->pc = 0x29A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A490u;
        // 0x29a494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A498u;
        goto label_29a498;
    }
    ctx->pc = 0x29A490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29A498u);
        ctx->pc = 0x29A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A490u;
        // 0x29a494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A490u, 0x29A498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A498u;
label_29a498:
    // 0x29a498: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x29a498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_29a49c:
    // 0x29a49c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x29a49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_29a4a0:
    // 0x29a4a0: 0x320f809  jalr        $t9
label_29a4a4:
    if (ctx->pc == 0x29A4A4u) {
        ctx->pc = 0x29A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4A0u;
        // 0x29a4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A4A8u;
        goto label_29a4a8;
    }
    ctx->pc = 0x29A4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29A4A8u);
        ctx->pc = 0x29A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4A0u;
        // 0x29a4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A4A0u, 0x29A4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A4A8u;
label_29a4a8:
    // 0x29a4a8: 0xc0a6130  jal         func_2984C0
label_29a4ac:
    if (ctx->pc == 0x29A4ACu) {
        ctx->pc = 0x29A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4A8u;
        // 0x29a4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A4B0u;
        goto label_29a4b0;
    }
    ctx->pc = 0x29A4A8u;
    SET_GPR_U32(ctx, 31, 0x29A4B0u);
    ctx->pc = 0x29A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4A8u;
    // 0x29a4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2984C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2984C0u, 0x29A4A8u, 0x29A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4B0u;
label_29a4b0:
    // 0x29a4b0: 0x8e2406b4  lw          $a0, 0x6B4($s1)
    ctx->pc = 0x29a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_29a4b4:
    // 0x29a4b4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x29a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_29a4b8:
    // 0x29a4b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29a4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_29a4bc:
    // 0x29a4bc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_29a4c0:
    if (ctx->pc == 0x29A4C0u) {
        ctx->pc = 0x29A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4BCu;
        // 0x29a4c0: 0xae2306b4  sw          $v1, 0x6B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A4C4u;
        goto label_29a4c4;
    }
    ctx->pc = 0x29A4BCu;
    {
        const bool branch_taken_0x29a4bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4BCu;
        // 0x29a4c0: 0xae2306b4  sw          $v1, 0x6B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4bc) {
            ctx->pc = 0x29A4F8u;
            goto label_29a4f8;
        }
    }
    ctx->pc = 0x29A4C4u;
label_29a4c4:
    // 0x29a4c4: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x29a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_29a4c8:
    // 0x29a4c8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x29a4c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_29a4cc:
    // 0x29a4cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_29a4d0:
    if (ctx->pc == 0x29A4D0u) {
        ctx->pc = 0x29A4D4u;
        goto label_29a4d4;
    }
    ctx->pc = 0x29A4CCu;
    {
        const bool branch_taken_0x29a4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a4cc) {
            ctx->pc = 0x29A4F8u;
            goto label_29a4f8;
        }
    }
    ctx->pc = 0x29A4D4u;
label_29a4d4:
    // 0x29a4d4: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x29a4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_29a4d8:
    // 0x29a4d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a4dc:
    // 0x29a4dc: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_29a4e0:
    if (ctx->pc == 0x29A4E0u) {
        ctx->pc = 0x29A4E4u;
        goto label_29a4e4;
    }
    ctx->pc = 0x29A4DCu;
    {
        const bool branch_taken_0x29a4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x29a4dc) {
            ctx->pc = 0x29A4F8u;
            goto label_29a4f8;
        }
    }
    ctx->pc = 0x29A4E4u;
label_29a4e4:
    // 0x29a4e4: 0x92230780  lbu         $v1, 0x780($s1)
    ctx->pc = 0x29a4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1920)));
label_29a4e8:
    // 0x29a4e8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_29a4ec:
    if (ctx->pc == 0x29A4ECu) {
        ctx->pc = 0x29A4F0u;
        goto label_29a4f0;
    }
    ctx->pc = 0x29A4E8u;
    {
        const bool branch_taken_0x29a4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x29a4e8) {
            ctx->pc = 0x29A4F8u;
            goto label_29a4f8;
        }
    }
    ctx->pc = 0x29A4F0u;
label_29a4f0:
    // 0x29a4f0: 0xa2240780  sb          $a0, 0x780($s1)
    ctx->pc = 0x29a4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 4));
label_29a4f4:
    // 0x29a4f4: 0x0  nop
    ctx->pc = 0x29a4f4u;
    // NOP
label_29a4f8:
    // 0x29a4f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29a4fc:
    // 0x29a4fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a500:
    // 0x29a500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29a504:
    // 0x29a504: 0x3e00008  jr          $ra
label_29a508:
    if (ctx->pc == 0x29A508u) {
        ctx->pc = 0x29A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A504u;
        // 0x29a508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A50Cu;
        goto label_fallthrough_0x29a504;
    }
    ctx->pc = 0x29A504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A504u;
        // 0x29a508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a504:
    ctx->pc = 0x29A50Cu;
}
