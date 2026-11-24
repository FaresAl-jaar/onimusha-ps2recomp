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

// Function: sub_0039F2D0
// Address: 0x39f2d0 - 0x39f5d8
void sub_0039F2D0_0x39f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F2D0_0x39f2d0");
#endif

    switch (ctx->pc) {
        case 0x39f320u: goto label_39f320;
        case 0x39f358u: goto label_39f358;
        case 0x39f368u: goto label_39f368;
        case 0x39f3bcu: goto label_39f3bc;
        case 0x39f3ccu: goto label_39f3cc;
        case 0x39f3dcu: goto label_39f3dc;
        case 0x39f438u: goto label_39f438;
        case 0x39f460u: goto label_39f460;
        case 0x39f478u: goto label_39f478;
        case 0x39f48cu: goto label_39f48c;
        case 0x39f49cu: goto label_39f49c;
        case 0x39f4c4u: goto label_39f4c4;
        case 0x39f51cu: goto label_39f51c;
        case 0x39f5c8u: goto label_39f5c8;
        default: break;
    }

    ctx->pc = 0x39f2d0u;

    // 0x39f2d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x39f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x39f2d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39f2d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39f2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39f2dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39f2e0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x39f2e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x39f2e4: 0x10c3002c  beq         $a2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x39F2E4u;
    {
        const bool branch_taken_0x39f2e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x39F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2E4u;
        // 0x39f2e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f2e4) {
            ctx->pc = 0x39F398u;
            goto label_39f398;
        }
    }
    ctx->pc = 0x39F2ECu;
    // 0x39f2ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f2f0: 0x10c30021  beq         $a2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x39F2F0u;
    {
        const bool branch_taken_0x39f2f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x39f2f0) {
            ctx->pc = 0x39F378u;
            goto label_39f378;
        }
    }
    ctx->pc = 0x39F2F8u;
    // 0x39f2f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F2F8u;
    {
        const bool branch_taken_0x39f2f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f2f8) {
            ctx->pc = 0x39F308u;
            goto label_39f308;
        }
    }
    ctx->pc = 0x39F300u;
    // 0x39f300: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x39F300u;
    {
        const bool branch_taken_0x39f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f300) {
            ctx->pc = 0x39F5C8u;
            goto label_39f5c8;
        }
    }
    ctx->pc = 0x39F308u;
label_39f308:
    // 0x39f308: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x39F308u;
    {
        const bool branch_taken_0x39f308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f308) {
            ctx->pc = 0x39F360u;
            goto label_39f360;
        }
    }
    ctx->pc = 0x39F310u;
    // 0x39f310: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x39f310u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x39f314: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x39f314u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x39f318: 0xc0aa378  jal         func_2A8DE0
    ctx->pc = 0x39F318u;
    SET_GPR_U32(ctx, 31, 0x39F320u);
    ctx->pc = 0x39F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F318u;
    // 0x39f31c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8DE0u, 0x39F318u, 0x39F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F320u;
label_39f320:
    // 0x39f320: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x39f320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x39f324: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39f324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39f328: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x39f328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x39f32c: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x39f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x39f330: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39f334: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39f334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39f338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f33c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x39f33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39f340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39f340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f344: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39f344u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f348: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39f348u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f34c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39f34cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f350: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39F350u;
    SET_GPR_U32(ctx, 31, 0x39F358u);
    ctx->pc = 0x39F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F350u;
    // 0x39f354: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39F350u, 0x39F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F358u;
label_39f358:
    // 0x39f358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F358u;
    {
        const bool branch_taken_0x39f358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f358) {
            ctx->pc = 0x39F368u;
            goto label_39f368;
        }
    }
    ctx->pc = 0x39F360u;
label_39f360:
    // 0x39f360: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39F360u;
    SET_GPR_U32(ctx, 31, 0x39F368u);
    ctx->pc = 0x39F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F360u;
    // 0x39f364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39F360u, 0x39F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F368u;
label_39f368:
    // 0x39f368: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x39f368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x39f36c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39f370: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x39F370u;
    {
        const bool branch_taken_0x39f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F370u;
        // 0x39f374: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f370) {
            ctx->pc = 0x39F5C8u;
            goto label_39f5c8;
        }
    }
    ctx->pc = 0x39F378u;
label_39f378:
    // 0x39f378: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x39f378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x39f37c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x39f37cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x39f380: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x39f380u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x39f384: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x39f384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x39f388: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x39f388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x39f38c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x39f38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x39f390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39f394: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x39f394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_39f398:
    // 0x39f398: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39f398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39f39c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x39f39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x39f3a0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x39f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39f3a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39f3a8: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x39f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x39f3ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x39f3acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39f3b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x39f3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39f3b4: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x39F3B4u;
    SET_GPR_U32(ctx, 31, 0x39F3BCu);
    ctx->pc = 0x39F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F3B4u;
    // 0x39f3b8: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x39F3B4u, 0x39F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F3BCu;
label_39f3bc:
    // 0x39f3bc: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x39f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x39f3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f3c4: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x39F3C4u;
    SET_GPR_U32(ctx, 31, 0x39F3CCu);
    ctx->pc = 0x39F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F3C4u;
    // 0x39f3c8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x39F3C4u, 0x39F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F3CCu;
label_39f3cc:
    // 0x39f3cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F3CCu;
    {
        const bool branch_taken_0x39f3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F3CCu;
        // 0x39f3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f3cc) {
            ctx->pc = 0x39F3E0u;
            goto label_39f3e0;
        }
    }
    ctx->pc = 0x39F3D4u;
    // 0x39f3d4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39F3D4u;
    SET_GPR_U32(ctx, 31, 0x39F3DCu);
    ctx->pc = 0x39F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F3D4u;
    // 0x39f3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39F3D4u, 0x39F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F3DCu;
label_39f3dc:
    // 0x39f3dc: 0x0  nop
    ctx->pc = 0x39f3dcu;
    // NOP
label_39f3e0:
    // 0x39f3e0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39f3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39f3e4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x39f3e4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x39f3e8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x39f3e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x39f3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f3f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x39f3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39f3f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39f3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f3f8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39f3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39f3fc: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x39f3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x39f400: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x39f400u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x39f404: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39f404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39f408: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x39f408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x39f40c: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x39f40cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x39f410: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39f410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39f414: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x39f414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x39f418: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x39f418u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x39f41c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x39f41cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x39f420: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x39f420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x39f424: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x39f424u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x39f428: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x39f428u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x39f42c: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x39f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x39f430: 0xc0c0900  jal         func_302400
    ctx->pc = 0x39F430u;
    SET_GPR_U32(ctx, 31, 0x39F438u);
    ctx->pc = 0x39F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F430u;
    // 0x39f434: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x39F430u, 0x39F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F438u;
label_39f438:
    // 0x39f438: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39f438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x39f43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f440: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x39f440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x39f444: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x39f444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39f448: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x39f448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x39f44c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x39f44cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39f450: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x39f450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39f454: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x39f454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f458: 0xc0c0980  jal         func_302600
    ctx->pc = 0x39F458u;
    SET_GPR_U32(ctx, 31, 0x39F460u);
    ctx->pc = 0x39F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F458u;
    // 0x39f45c: 0x27aa009c  addiu       $t2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x39F458u, 0x39F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F460u;
label_39f460:
    // 0x39f460: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x39F460u;
    {
        const bool branch_taken_0x39f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f460) {
            ctx->pc = 0x39F4C8u;
            goto label_39f4c8;
        }
    }
    ctx->pc = 0x39F468u;
    // 0x39f468: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x39f468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x39f46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f470: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x39F470u;
    SET_GPR_U32(ctx, 31, 0x39F478u);
    ctx->pc = 0x39F474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F470u;
    // 0x39f474: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x39F470u, 0x39F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F478u;
label_39f478:
    // 0x39f478: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x39f478u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x39f47c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x39f47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39f480: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x39f480u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x39f484: 0xc0aa388  jal         func_2A8E20
    ctx->pc = 0x39F484u;
    SET_GPR_U32(ctx, 31, 0x39F48Cu);
    ctx->pc = 0x39F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F484u;
    // 0x39f488: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E20u, 0x39F484u, 0x39F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F48Cu;
label_39f48c:
    // 0x39f48c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x39f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x39f490: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x39f490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39f494: 0xc07687c  jal         func_1DA1F0
    ctx->pc = 0x39F494u;
    SET_GPR_U32(ctx, 31, 0x39F49Cu);
    ctx->pc = 0x39F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F494u;
    // 0x39f498: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA1F0u, 0x39F494u, 0x39F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F49Cu;
label_39f49c:
    // 0x39f49c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x39f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x39f4a0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39f4a4: 0x92030559  lbu         $v1, 0x559($s0)
    ctx->pc = 0x39f4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1369)));
    // 0x39f4a8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x39f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x39f4ac: 0x2442263c  addiu       $v0, $v0, 0x263C
    ctx->pc = 0x39f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9788));
    // 0x39f4b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x39f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x39f4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39f4b8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x39f4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x39f4bc: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x39F4BCu;
    SET_GPR_U32(ctx, 31, 0x39F4C4u);
    ctx->pc = 0x39F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F4BCu;
    // 0x39f4c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x39F4BCu, 0x39F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F4C4u;
label_39f4c4:
    // 0x39f4c4: 0x0  nop
    ctx->pc = 0x39f4c4u;
    // NOP
label_39f4c8:
    // 0x39f4c8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x39f4c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39f4cc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x39f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x39f4d0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x39f4d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39f4d4: 0x0  nop
    ctx->pc = 0x39f4d4u;
    // NOP
    // 0x39f4d8: 0x0  nop
    ctx->pc = 0x39f4d8u;
    // NOP
    // 0x39f4dc: 0x1810  mfhi        $v1
    ctx->pc = 0x39f4dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x39f4e0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x39F4E0u;
    {
        const bool branch_taken_0x39f4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f4e0) {
            ctx->pc = 0x39F520u;
            goto label_39f520;
        }
    }
    ctx->pc = 0x39F4E8u;
    // 0x39f4e8: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x39f4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x39f4ec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39f4f0: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x39f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x39f4f4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39f4f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f4fc: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39f4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39f500: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x39f500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39f504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39f504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39f508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f50c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39f50cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f510: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39f510u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f514: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39F514u;
    SET_GPR_U32(ctx, 31, 0x39F51Cu);
    ctx->pc = 0x39F518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F514u;
    // 0x39f518: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39F514u, 0x39F51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F51Cu;
label_39f51c:
    // 0x39f51c: 0x0  nop
    ctx->pc = 0x39f51cu;
    // NOP
label_39f520:
    // 0x39f520: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x39f520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x39f524: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F524u;
    {
        const bool branch_taken_0x39f524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F524u;
        // 0x39f528: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f524) {
            ctx->pc = 0x39F538u;
            goto label_39f538;
        }
    }
    ctx->pc = 0x39F52Cu;
    // 0x39f52c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39F52Cu;
    {
        const bool branch_taken_0x39f52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f52c) {
            ctx->pc = 0x39F5B8u;
            goto label_39f5b8;
        }
    }
    ctx->pc = 0x39F534u;
    // 0x39f534: 0x0  nop
    ctx->pc = 0x39f534u;
    // NOP
label_39f538:
    // 0x39f538: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x39f538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39f53c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x39f540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39f540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39f544: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x39f544u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39f548: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x39f548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x39f54c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39F54Cu;
    {
        const bool branch_taken_0x39f54c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39f54c) {
            ctx->pc = 0x39F588u;
            goto label_39f588;
        }
    }
    ctx->pc = 0x39F554u;
    // 0x39f554: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x39f554u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39f558: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x39f558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x39f55c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39F55Cu;
    {
        const bool branch_taken_0x39f55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F55Cu;
        // 0x39f560: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f55c) {
            ctx->pc = 0x39F5B0u;
            goto label_39f5b0;
        }
    }
    ctx->pc = 0x39F564u;
    // 0x39f564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f568: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x39f568u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39f56c: 0x0  nop
    ctx->pc = 0x39f56cu;
    // NOP
    // 0x39f570: 0x0  nop
    ctx->pc = 0x39f570u;
    // NOP
    // 0x39f574: 0x2010  mfhi        $a0
    ctx->pc = 0x39f574u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x39f578: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x39f578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39f57c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39F57Cu;
    {
        const bool branch_taken_0x39f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F57Cu;
        // 0x39f580: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f57c) {
            ctx->pc = 0x39F5B0u;
            goto label_39f5b0;
        }
    }
    ctx->pc = 0x39F584u;
    // 0x39f584: 0x0  nop
    ctx->pc = 0x39f584u;
    // NOP
label_39f588:
    // 0x39f588: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x39f588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39f58c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x39f58cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x39f590: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39F590u;
    {
        const bool branch_taken_0x39f590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f590) {
            ctx->pc = 0x39F5B0u;
            goto label_39f5b0;
        }
    }
    ctx->pc = 0x39F598u;
    // 0x39f598: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x39f598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39f59c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f5a0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x39f5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x39f5a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39F5A4u;
    {
        const bool branch_taken_0x39f5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F5A4u;
        // 0x39f5a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f5a4) {
            ctx->pc = 0x39F5B8u;
            goto label_39f5b8;
        }
    }
    ctx->pc = 0x39F5ACu;
    // 0x39f5ac: 0x0  nop
    ctx->pc = 0x39f5acu;
    // NOP
label_39f5b0:
    // 0x39f5b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f5b4: 0x0  nop
    ctx->pc = 0x39f5b4u;
    // NOP
label_39f5b8:
    // 0x39f5b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F5B8u;
    {
        const bool branch_taken_0x39f5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F5B8u;
        // 0x39f5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f5b8) {
            ctx->pc = 0x39F5C8u;
            goto label_39f5c8;
        }
    }
    ctx->pc = 0x39F5C0u;
    // 0x39f5c0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39F5C0u;
    SET_GPR_U32(ctx, 31, 0x39F5C8u);
    ctx->pc = 0x39F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F5C0u;
    // 0x39f5c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39F5C0u, 0x39F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F5C8u;
label_39f5c8:
    // 0x39f5c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39f5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f5cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39f5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x39F5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F5D0u;
        // 0x39f5d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F5D8u;
}
