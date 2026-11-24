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

// Function: sub_0035D2D0
// Address: 0x35d2d0 - 0x35d540
void sub_0035D2D0_0x35d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D2D0_0x35d2d0");
#endif

    switch (ctx->pc) {
        case 0x35d320u: goto label_35d320;
        case 0x35d330u: goto label_35d330;
        case 0x35d34cu: goto label_35d34c;
        case 0x35d368u: goto label_35d368;
        case 0x35d378u: goto label_35d378;
        case 0x35d388u: goto label_35d388;
        case 0x35d398u: goto label_35d398;
        case 0x35d3d8u: goto label_35d3d8;
        case 0x35d3e8u: goto label_35d3e8;
        case 0x35d40cu: goto label_35d40c;
        case 0x35d41cu: goto label_35d41c;
        case 0x35d43cu: goto label_35d43c;
        case 0x35d458u: goto label_35d458;
        case 0x35d468u: goto label_35d468;
        case 0x35d484u: goto label_35d484;
        case 0x35d530u: goto label_35d530;
        default: break;
    }

    ctx->pc = 0x35d2d0u;

    // 0x35d2d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x35d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x35d2d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d2e0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x35d2e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x35d2e4: 0x10c30038  beq         $a2, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x35D2E4u;
    {
        const bool branch_taken_0x35d2e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x35D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D2E4u;
        // 0x35d2e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d2e4) {
            ctx->pc = 0x35D3C8u;
            goto label_35d3c8;
        }
    }
    ctx->pc = 0x35D2ECu;
    // 0x35d2ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d2f0: 0x10c3002d  beq         $a2, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x35D2F0u;
    {
        const bool branch_taken_0x35d2f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x35d2f0) {
            ctx->pc = 0x35D3A8u;
            goto label_35d3a8;
        }
    }
    ctx->pc = 0x35D2F8u;
    // 0x35d2f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D2F8u;
    {
        const bool branch_taken_0x35d2f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d2f8) {
            ctx->pc = 0x35D308u;
            goto label_35d308;
        }
    }
    ctx->pc = 0x35D300u;
    // 0x35d300: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x35D300u;
    {
        const bool branch_taken_0x35d300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d300) {
            ctx->pc = 0x35D530u;
            goto label_35d530;
        }
    }
    ctx->pc = 0x35D308u;
label_35d308:
    // 0x35d308: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x35D308u;
    {
        const bool branch_taken_0x35d308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d308) {
            ctx->pc = 0x35D390u;
            goto label_35d390;
        }
    }
    ctx->pc = 0x35D310u;
    // 0x35d310: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x35d310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x35d314: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x35d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x35d318: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x35D318u;
    SET_GPR_U32(ctx, 31, 0x35D320u);
    ctx->pc = 0x35D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D318u;
    // 0x35d31c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x35D318u, 0x35D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D320u;
label_35d320:
    // 0x35d320: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35D320u;
    {
        const bool branch_taken_0x35d320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D320u;
        // 0x35d324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d320) {
            ctx->pc = 0x35D338u;
            goto label_35d338;
        }
    }
    ctx->pc = 0x35D328u;
    // 0x35d328: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35D328u;
    SET_GPR_U32(ctx, 31, 0x35D330u);
    ctx->pc = 0x35D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D328u;
    // 0x35d32c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35D328u, 0x35D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D330u;
label_35d330:
    // 0x35d330: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x35D330u;
    {
        const bool branch_taken_0x35d330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d330) {
            ctx->pc = 0x35D530u;
            goto label_35d530;
        }
    }
    ctx->pc = 0x35D338u;
label_35d338:
    // 0x35d338: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35d338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35d33c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x35d33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35d340: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x35d340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x35d344: 0xc097340  jal         func_25CD00
    ctx->pc = 0x35D344u;
    SET_GPR_U32(ctx, 31, 0x35D34Cu);
    ctx->pc = 0x35D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D344u;
    // 0x35d348: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD00u, 0x35D344u, 0x35D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D34Cu;
label_35d34c:
    // 0x35d34c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x35d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d350: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x35d350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x35d354: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35d354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35d358: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35d358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35d35c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x35d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35d360: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x35D360u;
    SET_GPR_U32(ctx, 31, 0x35D368u);
    ctx->pc = 0x35D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D360u;
    // 0x35d364: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x35D360u, 0x35D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D368u;
label_35d368:
    // 0x35d368: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x35d368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35d36c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x35d36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35d370: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x35D370u;
    SET_GPR_U32(ctx, 31, 0x35D378u);
    ctx->pc = 0x35D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D370u;
    // 0x35d374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x35D370u, 0x35D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D378u;
label_35d378:
    // 0x35d378: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x35d378u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x35d37c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x35d37cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x35d380: 0xc0a9d4c  jal         func_2A7530
    ctx->pc = 0x35D380u;
    SET_GPR_U32(ctx, 31, 0x35D388u);
    ctx->pc = 0x35D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D380u;
    // 0x35d384: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7530u, 0x35D380u, 0x35D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D388u;
label_35d388:
    // 0x35d388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35D388u;
    {
        const bool branch_taken_0x35d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D388u;
        // 0x35d38c: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d388) {
            ctx->pc = 0x35D398u;
            goto label_35d398;
        }
    }
    ctx->pc = 0x35D390u;
label_35d390:
    // 0x35d390: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35D390u;
    SET_GPR_U32(ctx, 31, 0x35D398u);
    ctx->pc = 0x35D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D390u;
    // 0x35d394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35D390u, 0x35D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D398u;
label_35d398:
    // 0x35d398: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x35d398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x35d39c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35d3a0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x35D3A0u;
    {
        const bool branch_taken_0x35d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3A0u;
        // 0x35d3a4: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3a0) {
            ctx->pc = 0x35D530u;
            goto label_35d530;
        }
    }
    ctx->pc = 0x35D3A8u;
label_35d3a8:
    // 0x35d3a8: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x35d3a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x35d3ac: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x35d3acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d3b0: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x35d3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x35d3b4: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x35d3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x35d3b8: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x35d3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x35d3bc: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x35d3bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x35d3c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35d3c4: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x35d3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_35d3c8:
    // 0x35d3c8: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x35d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x35d3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3d0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x35D3D0u;
    SET_GPR_U32(ctx, 31, 0x35D3D8u);
    ctx->pc = 0x35D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3D0u;
    // 0x35d3d4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x35D3D0u, 0x35D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3D8u;
label_35d3d8:
    // 0x35d3d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D3D8u;
    {
        const bool branch_taken_0x35d3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3D8u;
        // 0x35d3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3d8) {
            ctx->pc = 0x35D3E8u;
            goto label_35d3e8;
        }
    }
    ctx->pc = 0x35D3E0u;
    // 0x35d3e0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35D3E0u;
    SET_GPR_U32(ctx, 31, 0x35D3E8u);
    ctx->pc = 0x35D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3E0u;
    // 0x35d3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35D3E0u, 0x35D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3E8u;
label_35d3e8:
    // 0x35d3e8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x35d3e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35d3ec: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x35d3ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x35d3f0: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x35D3F0u;
    {
        const bool branch_taken_0x35d3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3F0u;
        // 0x35d3f4: 0x2881001b  slti        $at, $a0, 0x1B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)27) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3f0) {
            ctx->pc = 0x35D488u;
            goto label_35d488;
        }
    }
    ctx->pc = 0x35D3F8u;
    // 0x35d3f8: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x35D3F8u;
    {
        const bool branch_taken_0x35d3f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D3F8u;
        // 0x35d3fc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d3f8) {
            ctx->pc = 0x35D488u;
            goto label_35d488;
        }
    }
    ctx->pc = 0x35D400u;
    // 0x35d400: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x35d400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x35d404: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x35D404u;
    SET_GPR_U32(ctx, 31, 0x35D40Cu);
    ctx->pc = 0x35D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D404u;
    // 0x35d408: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x35D404u, 0x35D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D40Cu;
label_35d40c:
    // 0x35d40c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D40Cu;
    {
        const bool branch_taken_0x35d40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D40Cu;
        // 0x35d410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d40c) {
            ctx->pc = 0x35D428u;
            goto label_35d428;
        }
    }
    ctx->pc = 0x35D414u;
    // 0x35d414: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35D414u;
    SET_GPR_U32(ctx, 31, 0x35D41Cu);
    ctx->pc = 0x35D418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D414u;
    // 0x35d418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35D414u, 0x35D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D41Cu;
label_35d41c:
    // 0x35d41c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x35D41Cu;
    {
        const bool branch_taken_0x35d41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d41c) {
            ctx->pc = 0x35D530u;
            goto label_35d530;
        }
    }
    ctx->pc = 0x35D424u;
    // 0x35d424: 0x0  nop
    ctx->pc = 0x35d424u;
    // NOP
label_35d428:
    // 0x35d428: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35d428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35d42c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x35d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35d430: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x35d430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x35d434: 0xc097340  jal         func_25CD00
    ctx->pc = 0x35D434u;
    SET_GPR_U32(ctx, 31, 0x35D43Cu);
    ctx->pc = 0x35D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D434u;
    // 0x35d438: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD00u, 0x35D434u, 0x35D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D43Cu;
label_35d43c:
    // 0x35d43c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x35d43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d440: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x35d440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x35d444: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35d444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35d448: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35d448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35d44c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x35d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35d450: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x35D450u;
    SET_GPR_U32(ctx, 31, 0x35D458u);
    ctx->pc = 0x35D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D450u;
    // 0x35d454: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x35D450u, 0x35D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D458u;
label_35d458:
    // 0x35d458: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x35d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35d45c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x35d45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35d460: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x35D460u;
    SET_GPR_U32(ctx, 31, 0x35D468u);
    ctx->pc = 0x35D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D460u;
    // 0x35d464: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x35D460u, 0x35D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D468u;
label_35d468:
    // 0x35d468: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x35d468u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x35d46c: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x35d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35d470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d474: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35d474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35d478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35d478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d47c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x35D47Cu;
    SET_GPR_U32(ctx, 31, 0x35D484u);
    ctx->pc = 0x35D480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D47Cu;
    // 0x35d480: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x35D47Cu, 0x35D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D484u;
label_35d484:
    // 0x35d484: 0x0  nop
    ctx->pc = 0x35d484u;
    // NOP
label_35d488:
    // 0x35d488: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x35d488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x35d48c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D48Cu;
    {
        const bool branch_taken_0x35d48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D48Cu;
        // 0x35d490: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d48c) {
            ctx->pc = 0x35D4A0u;
            goto label_35d4a0;
        }
    }
    ctx->pc = 0x35D494u;
    // 0x35d494: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35D494u;
    {
        const bool branch_taken_0x35d494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d494) {
            ctx->pc = 0x35D520u;
            goto label_35d520;
        }
    }
    ctx->pc = 0x35D49Cu;
    // 0x35d49c: 0x0  nop
    ctx->pc = 0x35d49cu;
    // NOP
label_35d4a0:
    // 0x35d4a0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x35d4a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35d4a4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x35d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x35d4a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35d4ac: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x35d4acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35d4b0: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x35d4b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x35d4b4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35D4B4u;
    {
        const bool branch_taken_0x35d4b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35d4b4) {
            ctx->pc = 0x35D4F0u;
            goto label_35d4f0;
        }
    }
    ctx->pc = 0x35D4BCu;
    // 0x35d4bc: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x35d4bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35d4c0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x35d4c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x35d4c4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35D4C4u;
    {
        const bool branch_taken_0x35d4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4C4u;
        // 0x35d4c8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d4c4) {
            ctx->pc = 0x35D518u;
            goto label_35d518;
        }
    }
    ctx->pc = 0x35D4CCu;
    // 0x35d4cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d4d0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x35d4d0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d4d4: 0x0  nop
    ctx->pc = 0x35d4d4u;
    // NOP
    // 0x35d4d8: 0x0  nop
    ctx->pc = 0x35d4d8u;
    // NOP
    // 0x35d4dc: 0x2010  mfhi        $a0
    ctx->pc = 0x35d4dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x35d4e0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x35d4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35d4e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35D4E4u;
    {
        const bool branch_taken_0x35d4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4E4u;
        // 0x35d4e8: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d4e4) {
            ctx->pc = 0x35D518u;
            goto label_35d518;
        }
    }
    ctx->pc = 0x35D4ECu;
    // 0x35d4ec: 0x0  nop
    ctx->pc = 0x35d4ecu;
    // NOP
label_35d4f0:
    // 0x35d4f0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x35d4f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35d4f4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x35d4f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x35d4f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D4F8u;
    {
        const bool branch_taken_0x35d4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d4f8) {
            ctx->pc = 0x35D518u;
            goto label_35d518;
        }
    }
    ctx->pc = 0x35D500u;
    // 0x35d500: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x35d500u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35d504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d508: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x35d508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x35d50c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35D50Cu;
    {
        const bool branch_taken_0x35d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D50Cu;
        // 0x35d510: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d50c) {
            ctx->pc = 0x35D520u;
            goto label_35d520;
        }
    }
    ctx->pc = 0x35D514u;
    // 0x35d514: 0x0  nop
    ctx->pc = 0x35d514u;
    // NOP
label_35d518:
    // 0x35d518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d51c: 0x0  nop
    ctx->pc = 0x35d51cu;
    // NOP
label_35d520:
    // 0x35d520: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D520u;
    {
        const bool branch_taken_0x35d520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D520u;
        // 0x35d524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d520) {
            ctx->pc = 0x35D530u;
            goto label_35d530;
        }
    }
    ctx->pc = 0x35D528u;
    // 0x35d528: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35D528u;
    SET_GPR_U32(ctx, 31, 0x35D530u);
    ctx->pc = 0x35D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D528u;
    // 0x35d52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35D528u, 0x35D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D530u;
label_35d530:
    // 0x35d530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d538: 0x3e00008  jr          $ra
    ctx->pc = 0x35D538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D538u;
        // 0x35d53c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D540u;
}
