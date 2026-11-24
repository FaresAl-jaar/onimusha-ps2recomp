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

// Function: sub_001ED400
// Address: 0x1ed400 - 0x1ed7f8
void sub_001ED400_0x1ed400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED400_0x1ed400");
#endif

    switch (ctx->pc) {
        case 0x1ed460u: goto label_1ed460;
        case 0x1ed480u: goto label_1ed480;
        case 0x1ed488u: goto label_1ed488;
        case 0x1ed494u: goto label_1ed494;
        case 0x1ed4acu: goto label_1ed4ac;
        case 0x1ed4ccu: goto label_1ed4cc;
        case 0x1ed4d8u: goto label_1ed4d8;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed53cu: goto label_1ed53c;
        case 0x1ed550u: goto label_1ed550;
        case 0x1ed560u: goto label_1ed560;
        case 0x1ed5c4u: goto label_1ed5c4;
        case 0x1ed640u: goto label_1ed640;
        case 0x1ed654u: goto label_1ed654;
        case 0x1ed668u: goto label_1ed668;
        case 0x1ed67cu: goto label_1ed67c;
        case 0x1ed690u: goto label_1ed690;
        case 0x1ed6c4u: goto label_1ed6c4;
        case 0x1ed6f8u: goto label_1ed6f8;
        case 0x1ed70cu: goto label_1ed70c;
        case 0x1ed748u: goto label_1ed748;
        case 0x1ed778u: goto label_1ed778;
        case 0x1ed7a4u: goto label_1ed7a4;
        case 0x1ed7b0u: goto label_1ed7b0;
        case 0x1ed7c8u: goto label_1ed7c8;
        default: break;
    }

    ctx->pc = 0x1ed400u;

    // 0x1ed400: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1ed400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1ed404: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ed408: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ed408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ed40c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ed40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1ed410: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ed410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1ed414: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ed414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed418: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ed418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1ed41c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ed41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ed420: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ed420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ed424: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ed424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ed428: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ed428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed42c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ed42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ed430: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ed430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed434: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ed434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed438: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED438u;
    {
        const bool branch_taken_0x1ed438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED438u;
        // 0x1ed43c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed438) {
            ctx->pc = 0x1ED448u;
            goto label_1ed448;
        }
    }
    ctx->pc = 0x1ED440u;
    // 0x1ed440: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x1ED440u;
    {
        const bool branch_taken_0x1ed440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED440u;
        // 0x1ed444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed440) {
            ctx->pc = 0x1ED7D0u;
            goto label_1ed7d0;
        }
    }
    ctx->pc = 0x1ED448u;
label_1ed448:
    // 0x1ed448: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED448u;
    {
        const bool branch_taken_0x1ed448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED448u;
        // 0x1ed44c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed448) {
            ctx->pc = 0x1ED458u;
            goto label_1ed458;
        }
    }
    ctx->pc = 0x1ED450u;
    // 0x1ed450: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED450u;
    {
        const bool branch_taken_0x1ed450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED450u;
        // 0x1ed454: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed450) {
            ctx->pc = 0x1ED468u;
            goto label_1ed468;
        }
    }
    ctx->pc = 0x1ED458u;
label_1ed458:
    // 0x1ed458: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1ED458u;
    SET_GPR_U32(ctx, 31, 0x1ED460u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1ED458u, 0x1ED460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED460u;
label_1ed460:
    // 0x1ed460: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ed460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed464: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ed464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed468:
    // 0x1ed468: 0x92450038  lbu         $a1, 0x38($s2)
    ctx->pc = 0x1ed468u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1ed46c: 0x92460039  lbu         $a2, 0x39($s2)
    ctx->pc = 0x1ed46cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x1ed470: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ed470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ed474: 0x92480036  lbu         $t0, 0x36($s2)
    ctx->pc = 0x1ed474u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x1ed478: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1ED478u;
    SET_GPR_U32(ctx, 31, 0x1ED480u);
    ctx->pc = 0x1ED47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED478u;
    // 0x1ed47c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1ED478u, 0x1ED480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED480u;
label_1ed480:
    // 0x1ed480: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1ED480u;
    SET_GPR_U32(ctx, 31, 0x1ED488u);
    ctx->pc = 0x1ED484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED480u;
    // 0x1ed484: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1ED480u, 0x1ED488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED488u;
label_1ed488:
    // 0x1ed488: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ed488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed48c: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1ED48Cu;
    SET_GPR_U32(ctx, 31, 0x1ED494u);
    ctx->pc = 0x1ED490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED48Cu;
    // 0x1ed490: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1ED48Cu, 0x1ED494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED494u;
label_1ed494:
    // 0x1ed494: 0x92480032  lbu         $t0, 0x32($s2)
    ctx->pc = 0x1ed494u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1ed498: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ed498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed49c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x1ed49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1ed4a0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1ed4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed4a4: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1ED4A4u;
    SET_GPR_U32(ctx, 31, 0x1ED4ACu);
    ctx->pc = 0x1ED4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED4A4u;
    // 0x1ed4a8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1ED4A4u, 0x1ED4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4ACu;
label_1ed4ac:
    // 0x1ed4ac: 0x92450033  lbu         $a1, 0x33($s2)
    ctx->pc = 0x1ed4acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ed4b0: 0xc64c0048  lwc1        $f12, 0x48($s2)
    ctx->pc = 0x1ed4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ed4b4: 0xc64d004c  lwc1        $f13, 0x4C($s2)
    ctx->pc = 0x1ed4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ed4b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ed4b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4bc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ed4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed4c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ed4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4c4: 0xc074b10  jal         func_1D2C40
    ctx->pc = 0x1ED4C4u;
    SET_GPR_U32(ctx, 31, 0x1ED4CCu);
    ctx->pc = 0x1ED4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED4C4u;
    // 0x1ed4c8: 0x34440080  ori         $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2C40u, 0x1ED4C4u, 0x1ED4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4CCu;
label_1ed4cc:
    // 0x1ed4cc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1ed4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1ed4d0: 0xc076538  jal         func_1D94E0
    ctx->pc = 0x1ED4D0u;
    SET_GPR_U32(ctx, 31, 0x1ED4D8u);
    ctx->pc = 0x1ED4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED4D0u;
    // 0x1ed4d4: 0x2645003c  addiu       $a1, $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94E0u, 0x1ED4D0u, 0x1ED4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4D8u;
label_1ed4d8:
    // 0x1ed4d8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ed4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ed4dc: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1ed4e0: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1ed4e0u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1ed4e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ed4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ed4e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed4ec: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ed4f0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1ed4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1ed4f4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ed4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ed4f8: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x1ed4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x1ed4fc: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1ed4fcu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1ed500: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ed504: 0x7fa80110  sq          $t0, 0x110($sp)
    ctx->pc = 0x1ed504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 8));
    // 0x1ed508: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1ed508u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1ed50c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ed50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ed510: 0x7fa70120  sq          $a3, 0x120($sp)
    ctx->pc = 0x1ed510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 7));
    // 0x1ed514: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1ed514u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1ed518: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1ed518u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1ed51c: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x1ed51cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ed520: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1ed520u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1ed524: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1ED524u;
    SET_GPR_U32(ctx, 31, 0x1ED52Cu);
    ctx->pc = 0x1ED528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED524u;
    // 0x1ed528: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1ED524u, 0x1ED52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED52Cu;
label_1ed52c:
    // 0x1ed52c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed534: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1ED534u;
    SET_GPR_U32(ctx, 31, 0x1ED53Cu);
    ctx->pc = 0x1ED538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED534u;
    // 0x1ed538: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1ED534u, 0x1ED53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED53Cu;
label_1ed53c:
    // 0x1ed53c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ed53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed540: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ed540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ed544: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1ed544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1ed548: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1ED548u;
    SET_GPR_U32(ctx, 31, 0x1ED550u);
    ctx->pc = 0x1ED54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED548u;
    // 0x1ed54c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1ED548u, 0x1ED550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED550u;
label_1ed550:
    // 0x1ed550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed554: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1ed554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1ed558: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1ED558u;
    SET_GPR_U32(ctx, 31, 0x1ED560u);
    ctx->pc = 0x1ED55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED558u;
    // 0x1ed55c: 0x26460080  addiu       $a2, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1ED558u, 0x1ED560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED560u;
label_1ed560:
    // 0x1ed560: 0x7a430060  lq          $v1, 0x60($s2)
    ctx->pc = 0x1ed560u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1ed564: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ed564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ed568: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ed568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed56c: 0x162c3c  dsll32      $a1, $s6, 16
    ctx->pc = 0x1ed56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 16));
    // 0x1ed570: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ed570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ed574: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ed574u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ed578: 0x7c230040  sq          $v1, 0x40($at)
    ctx->pc = 0x1ed578u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 3));
    // 0x1ed57c: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x1ed57cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1ed580: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ed580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed584: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1ed584u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1ed588: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ed588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed58c: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1ed58cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1ed590: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1ed590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ed594: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ed594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed598: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ed598u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ed59c: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1ed59cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1ed5a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ed5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed5a4: 0x8c22005c  lw          $v0, 0x5C($at)
    ctx->pc = 0x1ed5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000005Cu)); // MMIO: 0x7000005c
    // 0x1ed5a8: 0x70451018  mult1       $v0, $v0, $a1
    ctx->pc = 0x1ed5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ed5ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ed5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed5b0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ed5b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ed5b4: 0xac22005c  sw          $v0, 0x5C($at)
    ctx->pc = 0x1ed5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 2));
    // 0x1ed5b8: 0x92450031  lbu         $a1, 0x31($s2)
    ctx->pc = 0x1ed5b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1ed5bc: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1ED5BCu;
    SET_GPR_U32(ctx, 31, 0x1ED5C4u);
    ctx->pc = 0x1ED5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED5BCu;
    // 0x1ed5c0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1ED5BCu, 0x1ED5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED5C4u;
label_1ed5c4:
    // 0x1ed5c4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ed5c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ed5c8: 0x92420058  lbu         $v0, 0x58($s2)
    ctx->pc = 0x1ed5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1ed5cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ed5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ed5d0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1ED5D0u;
    {
        const bool branch_taken_0x1ed5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5d0) {
            ctx->pc = 0x1ED718u;
            goto label_1ed718;
        }
    }
    ctx->pc = 0x1ED5D8u;
    // 0x1ed5d8: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x1ed5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed5dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ed5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ed5e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ed5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ed5e4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1ed5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed5e8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ed5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ed5ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ed5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5f0: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ed5f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed5f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed5fc: 0x0  nop
    ctx->pc = 0x1ed5fcu;
    // NOP
    // 0x1ed600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ed600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ed604: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ed604u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ed608: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ed608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ed60c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ed60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ed610: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x1ed610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed614: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x1ed614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1ed618: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed61c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1ed61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1ed620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed624: 0x0  nop
    ctx->pc = 0x1ed624u;
    // NOP
    // 0x1ed628: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ed628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ed62c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ed62cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ed630: 0x0  nop
    ctx->pc = 0x1ed630u;
    // NOP
    // 0x1ed634: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ed634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ed638: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1ED638u;
    SET_GPR_U32(ctx, 31, 0x1ED640u);
    ctx->pc = 0x1ED63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED638u;
    // 0x1ed63c: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1ED638u, 0x1ED640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED640u;
label_1ed640:
    // 0x1ed640: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ed640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed644: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ed644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ed648: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1ed648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ed64c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1ED64Cu;
    SET_GPR_U32(ctx, 31, 0x1ED654u);
    ctx->pc = 0x1ED650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED64Cu;
    // 0x1ed650: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1ED64Cu, 0x1ED654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED654u;
label_1ed654:
    // 0x1ed654: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ed654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed658: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ed658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ed65c: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1ed65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1ed660: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1ED660u;
    SET_GPR_U32(ctx, 31, 0x1ED668u);
    ctx->pc = 0x1ED664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED660u;
    // 0x1ed664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1ED660u, 0x1ED668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED668u;
label_1ed668:
    // 0x1ed668: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ed668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed66c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ed66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ed670: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1ed670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1ed674: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1ED674u;
    SET_GPR_U32(ctx, 31, 0x1ED67Cu);
    ctx->pc = 0x1ED678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED674u;
    // 0x1ed678: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1ED674u, 0x1ED67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED67Cu;
label_1ed67c:
    // 0x1ed67c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ed67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ed680: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ed680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed684: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ed684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ed688: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1ED688u;
    SET_GPR_U32(ctx, 31, 0x1ED690u);
    ctx->pc = 0x1ED68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED688u;
    // 0x1ed68c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1ED688u, 0x1ED690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED690u;
label_1ed690:
    // 0x1ed690: 0x924b0059  lbu         $t3, 0x59($s2)
    ctx->pc = 0x1ed690u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 89)));
    // 0x1ed694: 0x924a0033  lbu         $t2, 0x33($s2)
    ctx->pc = 0x1ed694u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ed698: 0x154b000d  bne         $t2, $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x1ED698u;
    {
        const bool branch_taken_0x1ed698 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1ED69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED698u;
        // 0x1ed69c: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed698) {
            ctx->pc = 0x1ED6D0u;
            goto label_1ed6d0;
        }
    }
    ctx->pc = 0x1ED6A0u;
    // 0x1ed6a0: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ed6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed6a4: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ed6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ed6a8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ed6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed6ac: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ed6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ed6b0: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ed6b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ed6b4: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ed6b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ed6b8: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ed6b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ed6bc: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1ED6BCu;
    SET_GPR_U32(ctx, 31, 0x1ED6C4u);
    ctx->pc = 0x1ED6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6BCu;
    // 0x1ed6c0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1ED6BCu, 0x1ED6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6C4u;
label_1ed6c4:
    // 0x1ed6c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1ED6C4u;
    {
        const bool branch_taken_0x1ed6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6C4u;
        // 0x1ed6c8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6c4) {
            ctx->pc = 0x1ED700u;
            goto label_1ed700;
        }
    }
    ctx->pc = 0x1ED6CCu;
    // 0x1ed6cc: 0x0  nop
    ctx->pc = 0x1ed6ccu;
    // NOP
label_1ed6d0:
    // 0x1ed6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed6d4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ed6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1ed6d8: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed6dc: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ed6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ed6e0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ed6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed6e4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ed6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ed6e8: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ed6e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ed6ec: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ed6ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ed6f0: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1ED6F0u;
    SET_GPR_U32(ctx, 31, 0x1ED6F8u);
    ctx->pc = 0x1ED6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED6F0u;
    // 0x1ed6f4: 0x34e90050  ori         $t1, $a3, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1ED6F0u, 0x1ED6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6F8u;
label_1ed6f8:
    // 0x1ed6f8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ed6f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ed6fc: 0x0  nop
    ctx->pc = 0x1ed6fcu;
    // NOP
label_1ed700:
    // 0x1ed700: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ed700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ed704: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1ED704u;
    SET_GPR_U32(ctx, 31, 0x1ED70Cu);
    ctx->pc = 0x1ED708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED704u;
    // 0x1ed708: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1ED704u, 0x1ED70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED70Cu;
label_1ed70c:
    // 0x1ed70c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1ED70Cu;
    {
        const bool branch_taken_0x1ed70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED70Cu;
        // 0x1ed710: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed70c) {
            ctx->pc = 0x1ED780u;
            goto label_1ed780;
        }
    }
    ctx->pc = 0x1ED714u;
    // 0x1ed714: 0x0  nop
    ctx->pc = 0x1ed714u;
    // NOP
label_1ed718:
    // 0x1ed718: 0x924b0059  lbu         $t3, 0x59($s2)
    ctx->pc = 0x1ed718u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 89)));
    // 0x1ed71c: 0x924a0033  lbu         $t2, 0x33($s2)
    ctx->pc = 0x1ed71cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ed720: 0x154b000b  bne         $t2, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED720u;
    {
        const bool branch_taken_0x1ed720 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1ED724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED720u;
        // 0x1ed724: 0x3c077000  lui         $a3, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed720) {
            ctx->pc = 0x1ED750u;
            goto label_1ed750;
        }
    }
    ctx->pc = 0x1ED728u;
    // 0x1ed728: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ed72c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ed72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed730: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ed730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ed734: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ed734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ed738: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ed738u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ed73c: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ed73cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ed740: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1ED740u;
    SET_GPR_U32(ctx, 31, 0x1ED748u);
    ctx->pc = 0x1ED744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED740u;
    // 0x1ed744: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1ED740u, 0x1ED748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED748u;
label_1ed748:
    // 0x1ed748: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ED748u;
    {
        const bool branch_taken_0x1ed748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED748u;
        // 0x1ed74c: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed748) {
            ctx->pc = 0x1ED780u;
            goto label_1ed780;
        }
    }
    ctx->pc = 0x1ED750u;
label_1ed750:
    // 0x1ed750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed754: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ed754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1ed758: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ed758u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed75c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ed75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ed760: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ed760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed764: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ed764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ed768: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ed768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ed76c: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ed76cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ed770: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1ED770u;
    SET_GPR_U32(ctx, 31, 0x1ED778u);
    ctx->pc = 0x1ED774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED770u;
    // 0x1ed774: 0x34e90050  ori         $t1, $a3, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1ED770u, 0x1ED778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED778u;
label_1ed778:
    // 0x1ed778: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ed778u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ed77c: 0x0  nop
    ctx->pc = 0x1ed77cu;
    // NOP
label_1ed780:
    // 0x1ed780: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED780u;
    {
        const bool branch_taken_0x1ed780 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED780u;
        // 0x1ed784: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed780) {
            ctx->pc = 0x1ED790u;
            goto label_1ed790;
        }
    }
    ctx->pc = 0x1ED788u;
    // 0x1ed788: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1ED788u;
    {
        const bool branch_taken_0x1ed788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed788) {
            ctx->pc = 0x1ED7D0u;
            goto label_1ed7d0;
        }
    }
    ctx->pc = 0x1ED790u;
label_1ed790:
    // 0x1ed790: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ed790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ed794: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ed794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ed798: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1ed798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1ed79c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1ED79Cu;
    SET_GPR_U32(ctx, 31, 0x1ED7A4u);
    ctx->pc = 0x1ED7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED79Cu;
    // 0x1ed7a0: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1ED79Cu, 0x1ED7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7A4u;
label_1ed7a4:
    // 0x1ed7a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ed7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7a8: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1ED7A8u;
    SET_GPR_U32(ctx, 31, 0x1ED7B0u);
    ctx->pc = 0x1ED7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7A8u;
    // 0x1ed7ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1ED7A8u, 0x1ED7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7B0u;
label_1ed7b0:
    // 0x1ed7b0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ed7b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ed7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7b8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1ed7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ed7bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ed7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7c0: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1ED7C0u;
    SET_GPR_U32(ctx, 31, 0x1ED7C8u);
    ctx->pc = 0x1ED7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7C0u;
    // 0x1ed7c4: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1ED7C0u, 0x1ED7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7C8u;
label_1ed7c8:
    // 0x1ed7c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7cc: 0x0  nop
    ctx->pc = 0x1ed7ccu;
    // NOP
label_1ed7d0:
    // 0x1ed7d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ed7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ed7d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ed7d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ed7d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ed7d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ed7dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ed7dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed7e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ed7e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed7e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ed7e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed7e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ed7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed7ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ed7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7F0u;
        // 0x1ed7f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED7F8u;
}
