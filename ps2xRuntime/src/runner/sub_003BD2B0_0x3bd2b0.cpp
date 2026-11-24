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

// Function: sub_003BD2B0
// Address: 0x3bd2b0 - 0x3bd404
void sub_003BD2B0_0x3bd2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD2B0_0x3bd2b0");
#endif

    switch (ctx->pc) {
        case 0x3bd2f8u: goto label_3bd2f8;
        case 0x3bd328u: goto label_3bd328;
        case 0x3bd33cu: goto label_3bd33c;
        case 0x3bd358u: goto label_3bd358;
        case 0x3bd384u: goto label_3bd384;
        case 0x3bd3ecu: goto label_3bd3ec;
        default: break;
    }

    ctx->pc = 0x3bd2b0u;

    // 0x3bd2b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3bd2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3bd2b4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x3bd2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x3bd2b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bd2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3bd2bc: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3bd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3bd2c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bd2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bd2c4: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x3bd2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x3bd2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bd2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bd2cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3bd2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bd2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bd2d4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3bd2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd2d8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3bd2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd2dc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3bd2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd2e0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3bd2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd2e4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3bd2e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3bd2e8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3bd2e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3bd2ec: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3bd2ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3bd2f0: 0xc0c8a34  jal         func_3228D0
    ctx->pc = 0x3BD2F0u;
    SET_GPR_U32(ctx, 31, 0x3BD2F8u);
    ctx->pc = 0x3BD2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD2F0u;
    // 0x3bd2f4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228D0u, 0x3BD2F0u, 0x3BD2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD2F8u;
label_3bd2f8:
    // 0x3bd2f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bd2f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd2fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3bd2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3bd300: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3bd300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3bd304: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3bd304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3bd308: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x3bd308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x3bd30c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3bd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3bd310: 0x2463ea90  addiu       $v1, $v1, -0x1570
    ctx->pc = 0x3bd310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
    // 0x3bd314: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3bd314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3bd318: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3bd318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bd31c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bd31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bd320: 0xc0c83cc  jal         func_320F30
    ctx->pc = 0x3BD320u;
    SET_GPR_U32(ctx, 31, 0x3BD328u);
    ctx->pc = 0x3BD324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD320u;
    // 0x3bd324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F30u, 0x3BD320u, 0x3BD328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD328u;
label_3bd328:
    // 0x3bd328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd32c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bd32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bd330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bd330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd334: 0xc0c8020  jal         func_320080
    ctx->pc = 0x3BD334u;
    SET_GPR_U32(ctx, 31, 0x3BD33Cu);
    ctx->pc = 0x3BD338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD334u;
    // 0x3bd338: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320080u, 0x3BD334u, 0x3BD33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD33Cu;
label_3bd33c:
    // 0x3bd33c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3bd33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3bd340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd344: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3bd344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bd348: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3bd348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bd34c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bd34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd350: 0xc0c8340  jal         func_320D00
    ctx->pc = 0x3BD350u;
    SET_GPR_U32(ctx, 31, 0x3BD358u);
    ctx->pc = 0x3BD354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD350u;
    // 0x3bd354: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320D00u, 0x3BD350u, 0x3BD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD358u;
label_3bd358:
    // 0x3bd358: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3bd358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3bd35c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3bd35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3bd360: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3bd360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x3bd364: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3bd364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3bd368: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3bd368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x3bd36c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3bd36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3bd370: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3bd370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bd374: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3bd374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x3bd378: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3bd378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x3bd37c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BD37Cu;
    SET_GPR_U32(ctx, 31, 0x3BD384u);
    ctx->pc = 0x3BD380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD37Cu;
    // 0x3bd380: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BD37Cu, 0x3BD384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD384u;
label_3bd384:
    // 0x3bd384: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3bd384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3bd388: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3bd388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3bd38c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x3bd38cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bd390: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3bd390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3bd394: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3bd394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3bd398: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x3bd398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3bd39c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3bd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3bd3a0: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x3bd3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x3bd3a4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3bd3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bd3a8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3bd3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3bd3ac: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x3bd3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x3bd3b0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x3bd3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x3bd3b4: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x3bd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x3bd3b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bd3bc: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x3bd3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x3bd3c0: 0x70e01628  paddub      $v0, $a3, $zero
    ctx->pc = 0x3bd3c0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x3bd3c4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3bd3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3bd3c8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3bd3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd3cc: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3bd3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd3d0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3bd3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd3d4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3bd3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd3d8: 0xe6030050  swc1        $f3, 0x50($s0)
    ctx->pc = 0x3bd3d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x3bd3dc: 0xe6020054  swc1        $f2, 0x54($s0)
    ctx->pc = 0x3bd3dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x3bd3e0: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x3bd3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x3bd3e4: 0xc0cfd08  jal         func_33F420
    ctx->pc = 0x3BD3E4u;
    SET_GPR_U32(ctx, 31, 0x3BD3ECu);
    ctx->pc = 0x3BD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD3E4u;
    // 0x3bd3e8: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F420u, 0x3BD3E4u, 0x3BD3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD3ECu;
label_3bd3ec:
    // 0x3bd3ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bd3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bd3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bd3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bd3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bd3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bd3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD3FCu;
        // 0x3bd400: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD404u;
}
