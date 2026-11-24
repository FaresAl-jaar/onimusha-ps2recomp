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

// Function: sub_0032D3D0
// Address: 0x32d3d0 - 0x32d6e8
void sub_0032D3D0_0x32d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D3D0_0x32d3d0");
#endif

    switch (ctx->pc) {
        case 0x32d414u: goto label_32d414;
        case 0x32d438u: goto label_32d438;
        case 0x32d480u: goto label_32d480;
        case 0x32d48cu: goto label_32d48c;
        case 0x32d498u: goto label_32d498;
        case 0x32d558u: goto label_32d558;
        case 0x32d5a4u: goto label_32d5a4;
        case 0x32d5b0u: goto label_32d5b0;
        case 0x32d5b8u: goto label_32d5b8;
        default: break;
    }

    ctx->pc = 0x32d3d0u;

    // 0x32d3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32d3d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32d3dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32d3e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3e4: 0x80840001  lb          $a0, 0x1($a0)
    ctx->pc = 0x32d3e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32d3e8: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x32D3E8u;
    {
        const bool branch_taken_0x32d3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3E8u;
        // 0x32d3ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d3e8) {
            ctx->pc = 0x32D470u;
            goto label_32d470;
        }
    }
    ctx->pc = 0x32D3F0u;
    // 0x32d3f0: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x32D3F0u;
    {
        const bool branch_taken_0x32d3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d3f0) {
            ctx->pc = 0x32D460u;
            goto label_32d460;
        }
    }
    ctx->pc = 0x32D3F8u;
    // 0x32d3f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D3F8u;
    {
        const bool branch_taken_0x32d3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d3f8) {
            ctx->pc = 0x32D408u;
            goto label_32d408;
        }
    }
    ctx->pc = 0x32D400u;
    // 0x32d400: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x32D400u;
    {
        const bool branch_taken_0x32d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d400) {
            ctx->pc = 0x32D6D8u;
            goto label_32d6d8;
        }
    }
    ctx->pc = 0x32D408u;
label_32d408:
    // 0x32d408: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32d408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32d40c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x32D40Cu;
    SET_GPR_U32(ctx, 31, 0x32D414u);
    ctx->pc = 0x32D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D40Cu;
    // 0x32d410: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x32D40Cu, 0x32D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D414u;
label_32d414:
    // 0x32d414: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x32D414u;
    {
        const bool branch_taken_0x32d414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d414) {
            ctx->pc = 0x32D6D8u;
            goto label_32d6d8;
        }
    }
    ctx->pc = 0x32D41Cu;
    // 0x32d41c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x32d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32d420: 0x24030c00  addiu       $v1, $zero, 0xC00
    ctx->pc = 0x32d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x32d424: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x32d424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x32d428: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D428u;
    {
        const bool branch_taken_0x32d428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D428u;
        // 0x32d42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d428) {
            ctx->pc = 0x32D438u;
            goto label_32d438;
        }
    }
    ctx->pc = 0x32D430u;
    // 0x32d430: 0xc0cb69c  jal         func_32DA70
    ctx->pc = 0x32D430u;
    SET_GPR_U32(ctx, 31, 0x32D438u);
    ctx->pc = 0x32DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DA70u, 0x32D430u, 0x32D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D438u;
label_32d438:
    // 0x32d438: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x32d438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d43c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x32d43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x32d440: 0x9023feea  lbu         $v1, -0x116($at)
    ctx->pc = 0x32d440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x32d444: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x32d444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x32d448: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x32d448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x32d44c: 0xa023feea  sb          $v1, -0x116($at)
    ctx->pc = 0x32d44cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x32d450: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x32d450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32d454: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d458: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x32D458u;
    {
        const bool branch_taken_0x32d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D458u;
        // 0x32d45c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d458) {
            ctx->pc = 0x32D6D8u;
            goto label_32d6d8;
        }
    }
    ctx->pc = 0x32D460u;
label_32d460:
    // 0x32d460: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x32d460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32d464: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x32D464u;
    {
        const bool branch_taken_0x32d464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D464u;
        // 0x32d468: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d464) {
            ctx->pc = 0x32D6D8u;
            goto label_32d6d8;
        }
    }
    ctx->pc = 0x32D46Cu;
    // 0x32d46c: 0x0  nop
    ctx->pc = 0x32d46cu;
    // NOP
label_32d470:
    // 0x32d470: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32d470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32d474: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32d474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32d478: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x32D478u;
    SET_GPR_U32(ctx, 31, 0x32D480u);
    ctx->pc = 0x32D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D478u;
    // 0x32d47c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x32D478u, 0x32D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D480u;
label_32d480:
    // 0x32d480: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d484: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x32D484u;
    SET_GPR_U32(ctx, 31, 0x32D48Cu);
    ctx->pc = 0x32D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D484u;
    // 0x32d488: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x32D484u, 0x32D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D48Cu;
label_32d48c:
    // 0x32d48c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d490: 0xc095128  jal         func_2544A0
    ctx->pc = 0x32D490u;
    SET_GPR_U32(ctx, 31, 0x32D498u);
    ctx->pc = 0x32D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D490u;
    // 0x32d494: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x32D490u, 0x32D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D498u;
label_32d498:
    // 0x32d498: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d49c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x32d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x32d4a0: 0x8c2bceb8  lw          $t3, -0x3148($at)
    ctx->pc = 0x32d4a0u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x32d4a4: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x32d4a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32d4a8: 0x3c02f00f  lui         $v0, 0xF00F
    ctx->pc = 0x32d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61455 << 16));
    // 0x32d4ac: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x32d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x32d4b0: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x32d4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32d4b4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x32d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x32d4b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d4bc: 0x1665824  and         $t3, $t3, $a2
    ctx->pc = 0x32d4bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x32d4c0: 0x8c25cec4  lw          $a1, -0x313C($at)
    ctx->pc = 0x32d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x32d4c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d4c8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x32d4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x32d4cc: 0x8c2acec8  lw          $t2, -0x3138($at)
    ctx->pc = 0x32d4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x32d4d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d4d4: 0x8c29cecc  lw          $t1, -0x3134($at)
    ctx->pc = 0x32d4d4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CECCu));
    // 0x32d4d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d4dc: 0x8c28ced0  lw          $t0, -0x3130($at)
    ctx->pc = 0x32d4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED0u));
    // 0x32d4e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d4e4: 0x8c27ced8  lw          $a3, -0x3128($at)
    ctx->pc = 0x32d4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED8u));
    // 0x32d4e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d4ec: 0x8c26cedc  lw          $a2, -0x3124($at)
    ctx->pc = 0x32d4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x32d4f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d4f4: 0xac2bceb8  sw          $t3, -0x3148($at)
    ctx->pc = 0x32d4f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x32d4f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d4fc: 0xac24cec4  sw          $a0, -0x313C($at)
    ctx->pc = 0x32d4fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32d500: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d504: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x32d504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x32d508: 0x8c2bcec4  lw          $t3, -0x313C($at)
    ctx->pc = 0x32d508u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32d50c: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x32d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x32d510: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d514: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x32d514u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x32d518: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x32d518u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32d51c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x32d51cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x32d520: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x32d520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x32d524: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d528: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x32d528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x32d52c: 0x1092825  or          $a1, $t0, $t1
    ctx->pc = 0x32d52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x32d530: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d534: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x32d534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x32d538: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x32d538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32d53c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x32d53cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x32d540: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d544: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32d548: 0xac25cec0  sw          $a1, -0x3140($at)
    ctx->pc = 0x32d548u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 5));
    // 0x32d54c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d550: 0xc054568  jal         func_1515A0
    ctx->pc = 0x32D550u;
    SET_GPR_U32(ctx, 31, 0x32D558u);
    ctx->pc = 0x32D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D550u;
    // 0x32d554: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x32D550u, 0x32D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D558u;
label_32d558:
    // 0x32d558: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D558u;
    {
        const bool branch_taken_0x32d558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D558u;
        // 0x32d55c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d558) {
            ctx->pc = 0x32D578u;
            goto label_32d578;
        }
    }
    ctx->pc = 0x32D560u;
    // 0x32d560: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x32d560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x32d564: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x32d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x32d568: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32d568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32d56c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32d56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32d570: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d574: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x32d574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_32d578:
    // 0x32d578: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d57c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x32d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x32d580: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x32d580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x32d584: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32d584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x32d588: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32d588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32d58c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x32d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x32d590: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x32d590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32d594: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32d598: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d59c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x32D59Cu;
    SET_GPR_U32(ctx, 31, 0x32D5A4u);
    ctx->pc = 0x32D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D59Cu;
    // 0x32d5a0: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x32D59Cu, 0x32D5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D5A4u;
label_32d5a4:
    // 0x32d5a4: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x32d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x32d5a8: 0xc054ddc  jal         func_153770
    ctx->pc = 0x32D5A8u;
    SET_GPR_U32(ctx, 31, 0x32D5B0u);
    ctx->pc = 0x32D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D5A8u;
    // 0x32d5ac: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153770u, 0x32D5A8u, 0x32D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D5B0u;
label_32d5b0:
    // 0x32d5b0: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x32D5B0u;
    SET_GPR_U32(ctx, 31, 0x32D5B8u);
    ctx->pc = 0x32D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D5B0u;
    // 0x32d5b4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x32D5B0u, 0x32D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D5B8u;
label_32d5b8:
    // 0x32d5b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d5bc: 0x2408f7ff  addiu       $t0, $zero, -0x801
    ctx->pc = 0x32d5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x32d5c0: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x32d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x32d5c4: 0x240efbff  addiu       $t6, $zero, -0x401
    ctx->pc = 0x32d5c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x32d5c8: 0x240dfdff  addiu       $t5, $zero, -0x201
    ctx->pc = 0x32d5c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x32d5cc: 0x240cff7f  addiu       $t4, $zero, -0x81
    ctx->pc = 0x32d5ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x32d5d0: 0x240bffbf  addiu       $t3, $zero, -0x41
    ctx->pc = 0x32d5d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x32d5d4: 0x240affdf  addiu       $t2, $zero, -0x21
    ctx->pc = 0x32d5d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x32d5d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d5dc: 0x3787c  dsll32      $t7, $v1, 1
    ctx->pc = 0x32d5dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << (32 + 1));
    // 0x32d5e0: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x32d5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x32d5e4: 0xf787e  dsrl32      $t7, $t7, 1
    ctx->pc = 0x32d5e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 1));
    // 0x32d5e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d5ec: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x32d5ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x32d5f0: 0x8c27cec8  lw          $a3, -0x3138($at)
    ctx->pc = 0x32d5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x32d5f4: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x32d5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x32d5f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d5fc: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x32d5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x32d600: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d604: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x32d604u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x32d608: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d60c: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x32d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x32d610: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d614: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x32d614u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x32d618: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d61c: 0xac2fcebc  sw          $t7, -0x3144($at)
    ctx->pc = 0x32d61cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x32d620: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d624: 0xac28cec4  sw          $t0, -0x313C($at)
    ctx->pc = 0x32d624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32d628: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d62c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x32d62cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x32d630: 0x8c2fcec4  lw          $t7, -0x313C($at)
    ctx->pc = 0x32d630u;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32d634: 0x1ee7024  and         $t6, $t7, $t6
    ctx->pc = 0x32d634u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x32d638: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d63c: 0xac2ecec4  sw          $t6, -0x313C($at)
    ctx->pc = 0x32d63cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32d640: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d644: 0x8c2ecec4  lw          $t6, -0x313C($at)
    ctx->pc = 0x32d644u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32d648: 0x1cd6824  and         $t5, $t6, $t5
    ctx->pc = 0x32d648u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x32d64c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d650: 0xac2dcec4  sw          $t5, -0x313C($at)
    ctx->pc = 0x32d650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32d654: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d658: 0x8c2dcec4  lw          $t5, -0x313C($at)
    ctx->pc = 0x32d658u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32d65c: 0x1ac6024  and         $t4, $t5, $t4
    ctx->pc = 0x32d65cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x32d660: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d664: 0xac2ccec4  sw          $t4, -0x313C($at)
    ctx->pc = 0x32d664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32d668: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d66c: 0x8c2ccec4  lw          $t4, -0x313C($at)
    ctx->pc = 0x32d66cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32d670: 0x18b5824  and         $t3, $t4, $t3
    ctx->pc = 0x32d670u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x32d674: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d678: 0xac2bcec4  sw          $t3, -0x313C($at)
    ctx->pc = 0x32d678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32d67c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d680: 0x8c2bcec4  lw          $t3, -0x313C($at)
    ctx->pc = 0x32d680u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32d684: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x32d684u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x32d688: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d68c: 0xac2acec4  sw          $t2, -0x313C($at)
    ctx->pc = 0x32d68cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32d690: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d694: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x32d694u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32d698: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x32d698u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x32d69c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d6a0: 0xac29cec4  sw          $t1, -0x313C($at)
    ctx->pc = 0x32d6a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x32d6a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d6a8: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x32d6a8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x32d6ac: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x32d6acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x32d6b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32d6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32d6b4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x32d6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x32d6b8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x32d6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x32d6bc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x32d6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32d6c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32d6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32d6c4: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x32d6c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x32d6c8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x32d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x32d6cc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x32d6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x32d6d0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x32d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x32d6d4: 0x0  nop
    ctx->pc = 0x32d6d4u;
    // NOP
label_32d6d8:
    // 0x32d6d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d6dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x32D6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6E0u;
        // 0x32d6e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D6E8u;
}
