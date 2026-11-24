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

// Function: sub_003F62A0
// Address: 0x3f62a0 - 0x3f63fc
void sub_003F62A0_0x3f62a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F62A0_0x3f62a0");
#endif

    switch (ctx->pc) {
        case 0x3f6360u: goto label_3f6360;
        case 0x3f636cu: goto label_3f636c;
        case 0x3f6374u: goto label_3f6374;
        case 0x3f6380u: goto label_3f6380;
        case 0x3f6388u: goto label_3f6388;
        case 0x3f63acu: goto label_3f63ac;
        case 0x3f63ccu: goto label_3f63cc;
        case 0x3f63ecu: goto label_3f63ec;
        default: break;
    }

    ctx->pc = 0x3f62a0u;

    // 0x3f62a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f62a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f62a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f62a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f62a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f62a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f62ac: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x3f62acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3f62b0: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x3f62b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x3f62b4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3f62b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3f62b8: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x3f62b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3f62bc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x3F62BCu;
    {
        const bool branch_taken_0x3f62bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F62C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62BCu;
        // 0x3f62c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f62bc) {
            ctx->pc = 0x3F62F8u;
            goto label_3f62f8;
        }
    }
    ctx->pc = 0x3F62C4u;
    // 0x3f62c4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3f62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3f62c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f62cc: 0x24635b00  addiu       $v1, $v1, 0x5B00
    ctx->pc = 0x3f62ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23296));
    // 0x3f62d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f62d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f62d8: 0x400008  jr          $v0
    ctx->pc = 0x3F62D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F62E0u: goto label_3f62e0;
            case 0x3F62E8u: goto label_3f62e8;
            case 0x3F62F8u: goto label_3f62f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F62D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F62E0u;
label_3f62e0:
    // 0x3f62e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F62E0u;
    {
        const bool branch_taken_0x3f62e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62E0u;
        // 0x3f62e4: 0xa2000024  sb          $zero, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f62e0) {
            ctx->pc = 0x3F6300u;
            goto label_3f6300;
        }
    }
    ctx->pc = 0x3F62E8u;
label_3f62e8:
    // 0x3f62e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f62ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F62ECu;
    {
        const bool branch_taken_0x3f62ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F62F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F62ECu;
        // 0x3f62f0: 0xa2020024  sb          $v0, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f62ec) {
            ctx->pc = 0x3F6300u;
            goto label_3f6300;
        }
    }
    ctx->pc = 0x3F62F4u;
    // 0x3f62f4: 0x0  nop
    ctx->pc = 0x3f62f4u;
    // NOP
label_3f62f8:
    // 0x3f62f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f62fc: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x3f62fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
label_3f6300:
    // 0x3f6300: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3f6300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3f6304: 0xa202001f  sb          $v0, 0x1F($s0)
    ctx->pc = 0x3f6304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6308: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f6308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f630c: 0x24631808  addiu       $v1, $v1, 0x1808
    ctx->pc = 0x3f630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6152));
    // 0x3f6310: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x3f6310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f6314: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3f6314u;
    { uint32_t bits = FAST_READ32(0x661808u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f6318: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3f6318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x3f631c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3f631cu;
    { uint32_t bits = FAST_READ32(0x66180Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f6320: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x3f6320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x3f6324: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3f6324u;
    { uint32_t bits = FAST_READ32(0x661810u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f6328: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f6328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f632c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3f632cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3f6330: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3f6330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3f6334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f6334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6338: 0xe6020090  swc1        $f2, 0x90($s0)
    ctx->pc = 0x3f6338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3f633c: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x3f633cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3f6340: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3f6340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3f6344: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3f6344u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f6348: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3f6348u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f634c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3f634cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f6350: 0xe602009c  swc1        $f2, 0x9C($s0)
    ctx->pc = 0x3f6350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3f6354: 0xe60100a0  swc1        $f1, 0xA0($s0)
    ctx->pc = 0x3f6354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x3f6358: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x3F6358u;
    SET_GPR_U32(ctx, 31, 0x3F6360u);
    ctx->pc = 0x3F635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6358u;
    // 0x3f635c: 0xe60000a4  swc1        $f0, 0xA4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x3F6358u, 0x3F6360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6360u;
label_3f6360:
    // 0x3f6360: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x3f6360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x3f6364: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3F6364u;
    SET_GPR_U32(ctx, 31, 0x3F636Cu);
    ctx->pc = 0x3F6368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6364u;
    // 0x3f6368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3F6364u, 0x3F636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F636Cu;
label_3f636c:
    // 0x3f636c: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3F636Cu;
    SET_GPR_U32(ctx, 31, 0x3F6374u);
    ctx->pc = 0x3F6370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F636Cu;
    // 0x3f6370: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3F636Cu, 0x3F6374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6374u;
label_3f6374:
    // 0x3f6374: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3f6374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3f6378: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3F6378u;
    SET_GPR_U32(ctx, 31, 0x3F6380u);
    ctx->pc = 0x3F637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6378u;
    // 0x3f637c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3F6378u, 0x3F6380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6380u;
label_3f6380:
    // 0x3f6380: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3F6380u;
    SET_GPR_U32(ctx, 31, 0x3F6388u);
    ctx->pc = 0x3F6384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6380u;
    // 0x3f6384: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3F6380u, 0x3F6388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6388u;
label_3f6388:
    // 0x3f6388: 0x82030024  lb          $v1, 0x24($s0)
    ctx->pc = 0x3f6388u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3f638c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f638cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f6390: 0x278284a0  addiu       $v0, $gp, -0x7B60
    ctx->pc = 0x3f6390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935712));
    // 0x3f6394: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x3f6394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x3f6398: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3f6398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3f639c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f63a0: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x3f63a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f63a4: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x3F63A4u;
    SET_GPR_U32(ctx, 31, 0x3F63ACu);
    ctx->pc = 0x3F63A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F63A4u;
    // 0x3f63a8: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x3F63A4u, 0x3F63ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F63ACu;
label_3f63ac:
    // 0x3f63ac: 0x82030024  lb          $v1, 0x24($s0)
    ctx->pc = 0x3f63acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3f63b0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f63b4: 0x278284a1  addiu       $v0, $gp, -0x7B5F
    ctx->pc = 0x3f63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935713));
    // 0x3f63b8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3f63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3f63bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f63c0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3f63c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f63c4: 0xc0cbed0  jal         func_32FB40
    ctx->pc = 0x3F63C4u;
    SET_GPR_U32(ctx, 31, 0x3F63CCu);
    ctx->pc = 0x3F63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F63C4u;
    // 0x3f63c8: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB40u, 0x3F63C4u, 0x3F63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F63CCu;
label_3f63cc:
    // 0x3f63cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f63ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f63d0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3f63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3f63d4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3f63d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3f63d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f63d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f63dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f63dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f63e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f63e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f63e4: 0xc0fd97c  jal         func_3F65F0
    ctx->pc = 0x3F63E4u;
    SET_GPR_U32(ctx, 31, 0x3F63ECu);
    ctx->pc = 0x3F63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F63E4u;
    // 0x3f63e8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F65F0u, 0x3F63E4u, 0x3F63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F63ECu;
label_3f63ec:
    // 0x3f63ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f63ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f63f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f63f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f63f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F63F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F63F4u;
        // 0x3f63f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F63F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F63FCu;
}
