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

// Function: sub_0031D360
// Address: 0x31d360 - 0x31d4f0
void sub_0031D360_0x31d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D360_0x31d360");
#endif

    switch (ctx->pc) {
        case 0x31d3e8u: goto label_31d3e8;
        case 0x31d420u: goto label_31d420;
        case 0x31d434u: goto label_31d434;
        case 0x31d49cu: goto label_31d49c;
        case 0x31d4d0u: goto label_31d4d0;
        default: break;
    }

    ctx->pc = 0x31d360u;

    // 0x31d360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31d364: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x31d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x31d368: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31d36c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31d370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d37c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x31d37cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x31d380: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x31D380u;
    {
        const bool branch_taken_0x31d380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D380u;
        // 0x31d384: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d380) {
            ctx->pc = 0x31D4D0u;
            goto label_31d4d0;
        }
    }
    ctx->pc = 0x31D388u;
    // 0x31d388: 0x8f838b34  lw          $v1, -0x74CC($gp)
    ctx->pc = 0x31d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x31d38c: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x31D38Cu;
    {
        const bool branch_taken_0x31d38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d38c) {
            ctx->pc = 0x31D4D0u;
            goto label_31d4d0;
        }
    }
    ctx->pc = 0x31D394u;
    // 0x31d394: 0xa2800003  sb          $zero, 0x3($s4)
    ctx->pc = 0x31d394u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d398: 0xaf948b34  sw          $s4, -0x74CC($gp)
    ctx->pc = 0x31d398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 20));
    // 0x31d39c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x31d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x31d3a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D3A0u;
    {
        const bool branch_taken_0x31d3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d3a0) {
            ctx->pc = 0x31D3B0u;
            goto label_31d3b0;
        }
    }
    ctx->pc = 0x31D3A8u;
    // 0x31d3a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x31d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x31d3ac: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x31d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_31d3b0:
    // 0x31d3b0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x31d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x31d3b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D3B4u;
    {
        const bool branch_taken_0x31d3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d3b4) {
            ctx->pc = 0x31D3C8u;
            goto label_31d3c8;
        }
    }
    ctx->pc = 0x31D3BCu;
    // 0x31d3bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x31d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x31d3c0: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x31d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x31d3c4: 0x0  nop
    ctx->pc = 0x31d3c4u;
    // NOP
label_31d3c8:
    // 0x31d3c8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x31d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x31d3cc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x31D3CCu;
    {
        const bool branch_taken_0x31d3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d3cc) {
            ctx->pc = 0x31D4C0u;
            goto label_31d4c0;
        }
    }
    ctx->pc = 0x31D3D4u;
    // 0x31d3d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x31d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x31d3d8: 0x2683001c  addiu       $v1, $s4, 0x1C
    ctx->pc = 0x31d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x31d3dc: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x31d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x31d3e0: 0x92840012  lbu         $a0, 0x12($s4)
    ctx->pc = 0x31d3e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x31d3e4: 0x0  nop
    ctx->pc = 0x31d3e4u;
    // NOP
label_31d3e8:
    // 0x31d3e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31d3ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D3ECu;
    {
        const bool branch_taken_0x31d3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d3ec) {
            ctx->pc = 0x31D400u;
            goto label_31d400;
        }
    }
    ctx->pc = 0x31D3F4u;
    // 0x31d3f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x31d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x31d3f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x31d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x31d3fc: 0x0  nop
    ctx->pc = 0x31d3fcu;
    // NOP
label_31d400:
    // 0x31d400: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31d400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31d404: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31D404u;
    {
        const bool branch_taken_0x31d404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D404u;
        // 0x31d408: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d404) {
            ctx->pc = 0x31D3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d3e8;
        }
    }
    ctx->pc = 0x31D40Cu;
    // 0x31d40c: 0x96930010  lhu         $s3, 0x10($s4)
    ctx->pc = 0x31d40cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x31d410: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x31d410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x31d414: 0x8e920018  lw          $s2, 0x18($s4)
    ctx->pc = 0x31d414u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x31d418: 0x27b00068  addiu       $s0, $sp, 0x68
    ctx->pc = 0x31d418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x31d41c: 0x0  nop
    ctx->pc = 0x31d41cu;
    // NOP
label_31d420:
    // 0x31d420: 0x9242000d  lbu         $v0, 0xD($s2)
    ctx->pc = 0x31d420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x31d424: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x31D424u;
    {
        const bool branch_taken_0x31d424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D424u;
        // 0x31d428: 0x27a30060  addiu       $v1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d424) {
            ctx->pc = 0x31D4A8u;
            goto label_31d4a8;
        }
    }
    ctx->pc = 0x31D42Cu;
    // 0x31d42c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31D42Cu;
    {
        const bool branch_taken_0x31d42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D42Cu;
        // 0x31d430: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d42c) {
            ctx->pc = 0x31D450u;
            goto label_31d450;
        }
    }
    ctx->pc = 0x31D434u;
label_31d434:
    // 0x31d434: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x31d434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31d438: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31d43c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31d440: 0x0  nop
    ctx->pc = 0x31d440u;
    // NOP
    // 0x31d444: 0x0  nop
    ctx->pc = 0x31d444u;
    // NOP
    // 0x31d448: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31D448u;
    {
        const bool branch_taken_0x31d448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d448) {
            ctx->pc = 0x31D434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d434;
        }
    }
    ctx->pc = 0x31D450u;
label_31d450:
    // 0x31d450: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x31d450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31d454: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31d454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x31d458: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x31d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x31d45c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31d460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d464: 0x0  nop
    ctx->pc = 0x31d464u;
    // NOP
    // 0x31d468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31d468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31d46c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31d46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31d470: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x31d470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x31d474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d478: 0x0  nop
    ctx->pc = 0x31d478u;
    // NOP
    // 0x31d47c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31d47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31d480: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x31d480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x31d484: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x31d484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31d488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d48c: 0x0  nop
    ctx->pc = 0x31d48cu;
    // NOP
    // 0x31d490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31d490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31d494: 0xc0c8bf0  jal         func_322FC0
    ctx->pc = 0x31D494u;
    SET_GPR_U32(ctx, 31, 0x31D49Cu);
    ctx->pc = 0x31D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D494u;
    // 0x31d498: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x322FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322FC0u, 0x31D494u, 0x31D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D49Cu;
label_31d49c:
    // 0x31d49c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31D49Cu;
    {
        const bool branch_taken_0x31d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D49Cu;
        // 0x31d4a0: 0xa242000f  sb          $v0, 0xF($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d49c) {
            ctx->pc = 0x31D4B0u;
            goto label_31d4b0;
        }
    }
    ctx->pc = 0x31D4A4u;
    // 0x31d4a4: 0x0  nop
    ctx->pc = 0x31d4a4u;
    // NOP
label_31d4a8:
    // 0x31d4a8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x31d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31d4ac: 0xa242000f  sb          $v0, 0xF($s2)
    ctx->pc = 0x31d4acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 2));
label_31d4b0:
    // 0x31d4b0: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x31d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x31d4b4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x31d4b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31d4b8: 0x1660ffd9  bnez        $s3, . + 4 + (-0x27 << 2)
    ctx->pc = 0x31D4B8u;
    {
        const bool branch_taken_0x31d4b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4B8u;
        // 0x31d4bc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4b8) {
            ctx->pc = 0x31D420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d420;
        }
    }
    ctx->pc = 0x31D4C0u;
label_31d4c0:
    // 0x31d4c0: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x31d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x31d4c4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x31d4c8: 0xc0c74c8  jal         func_31D320
    ctx->pc = 0x31D4C8u;
    SET_GPR_U32(ctx, 31, 0x31D4D0u);
    ctx->pc = 0x31D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D4C8u;
    // 0x31d4cc: 0x2484e7d0  addiu       $a0, $a0, -0x1830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D320u, 0x31D4C8u, 0x31D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D4D0u;
label_31d4d0:
    // 0x31d4d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31d4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d4d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31d4d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d4d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d4d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d4dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x31D4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D4E8u;
        // 0x31d4ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D4F0u;
}
