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

// Function: sub_002E32B0
// Address: 0x2e32b0 - 0x2e345c
void sub_002E32B0_0x2e32b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E32B0_0x2e32b0");
#endif

    switch (ctx->pc) {
        case 0x2e32e8u: goto label_2e32e8;
        case 0x2e32f0u: goto label_2e32f0;
        case 0x2e3318u: goto label_2e3318;
        case 0x2e333cu: goto label_2e333c;
        case 0x2e3398u: goto label_2e3398;
        case 0x2e33d0u: goto label_2e33d0;
        default: break;
    }

    ctx->pc = 0x2e32b0u;

    // 0x2e32b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e32b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e32b4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2e32b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e32b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e32b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e32bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e32bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e32c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e32c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e32c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e32c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e32c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e32cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e32ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e32d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e32d4: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x2e32d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2e32d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e32d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e32dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e32dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32e0: 0xc049590  jal         func_125640
    ctx->pc = 0x2E32E0u;
    SET_GPR_U32(ctx, 31, 0x2E32E8u);
    ctx->pc = 0x2E32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E32E0u;
    // 0x2e32e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2E32E0u, 0x2E32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E32E8u;
label_2e32e8:
    // 0x2e32e8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2E32E8u;
    {
        const bool branch_taken_0x2e32e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32E8u;
        // 0x2e32ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32e8) {
            ctx->pc = 0x2E3420u;
            goto label_2e3420;
        }
    }
    ctx->pc = 0x2E32F0u;
label_2e32f0:
    // 0x2e32f0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2e32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2e32f4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2e32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2e32f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e32fc: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x2e32fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e3300: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2e3300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e3304: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e3304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e3308: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2E3308u;
    {
        const bool branch_taken_0x2e3308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3308u;
        // 0x2e330c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3308) {
            ctx->pc = 0x2E3418u;
            goto label_2e3418;
        }
    }
    ctx->pc = 0x2E3310u;
    // 0x2e3310: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2E3310u;
    {
        const bool branch_taken_0x2e3310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3310) {
            ctx->pc = 0x2E3408u;
            goto label_2e3408;
        }
    }
    ctx->pc = 0x2E3318u;
label_2e3318:
    // 0x2e3318: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2e3318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e331c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x2e331cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2e3320: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x2e3320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2e3324: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e3324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e3328: 0x1623002b  bne         $s1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E3328u;
    {
        const bool branch_taken_0x2e3328 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3328u;
        // 0x2e332c: 0x8c900020  lw          $s0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3328) {
            ctx->pc = 0x2E33D8u;
            goto label_2e33d8;
        }
    }
    ctx->pc = 0x2E3330u;
    // 0x2e3330: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2e3330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e3334: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3334u;
    {
        const bool branch_taken_0x2e3334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3334u;
        // 0x2e3338: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3334) {
            ctx->pc = 0x2E3358u;
            goto label_2e3358;
        }
    }
    ctx->pc = 0x2E333Cu;
label_2e333c:
    // 0x2e333c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e333cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3340: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e3340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e3344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e3344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e3348: 0x0  nop
    ctx->pc = 0x2e3348u;
    // NOP
    // 0x2e334c: 0x0  nop
    ctx->pc = 0x2e334cu;
    // NOP
    // 0x2e3350: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3350u;
    {
        const bool branch_taken_0x2e3350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3350) {
            ctx->pc = 0x2E333Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e333c;
        }
    }
    ctx->pc = 0x2E3358u;
label_2e3358:
    // 0x2e3358: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2e3358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e335c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2e335cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e3360: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e3360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e3364: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2e3364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e3368: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e3368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e336c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e336cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e3370: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2e3370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3374: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2e3374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e3378: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2e3378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e337c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2e337cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e3380: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2e3380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e3384: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2e3384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3388: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x2e3388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x2e338c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e338cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e3390: 0xc041442  jal         func_105108
    ctx->pc = 0x2E3390u;
    SET_GPR_U32(ctx, 31, 0x2E3398u);
    ctx->pc = 0x2E3394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3390u;
    // 0x2e3394: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2E3390u, 0x2E3398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3398u;
label_2e3398:
    // 0x2e3398: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2e3398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e339c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2e339cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e33a0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x2e33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e33a4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e33a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e33a8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x2e33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e33ac: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x2e33acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x2e33b0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e33b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2e33b4: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x2e33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2e33b8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2e33b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e33bc: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2e33bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2e33c0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e33c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e33c8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E33C8u;
    SET_GPR_U32(ctx, 31, 0x2E33D0u);
    ctx->pc = 0x2E33CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E33C8u;
    // 0x2e33cc: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E33C8u, 0x2E33D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33D0u;
label_2e33d0:
    // 0x2e33d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E33D0u;
    {
        const bool branch_taken_0x2e33d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e33d0) {
            ctx->pc = 0x2E3400u;
            goto label_2e3400;
        }
    }
    ctx->pc = 0x2E33D8u;
label_2e33d8:
    // 0x2e33d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e33d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e33dc: 0x8e840094  lw          $a0, 0x94($s4)
    ctx->pc = 0x2e33dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x2e33e0: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x2e33e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e33e4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e33e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e33ec: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2e33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2e33f0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2e33f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e33f4: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x2e33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e33f8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2e33f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e33fc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2e33fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_2e3400:
    // 0x2e3400: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e3400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e3404: 0x0  nop
    ctx->pc = 0x2e3404u;
    // NOP
label_2e3408:
    // 0x2e3408: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x2e3408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2e340c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2e340cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3410: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2E3410u;
    {
        const bool branch_taken_0x2e3410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3410) {
            ctx->pc = 0x2E3318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3318;
        }
    }
    ctx->pc = 0x2E3418u;
label_2e3418:
    // 0x2e3418: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e3418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e341c: 0x0  nop
    ctx->pc = 0x2e341cu;
    // NOP
label_2e3420:
    // 0x2e3420: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2e3420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2e3424: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2e3424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e3428: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2e3428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e342c: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2E342Cu;
    {
        const bool branch_taken_0x2e342c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e342c) {
            ctx->pc = 0x2E32F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e32f0;
        }
    }
    ctx->pc = 0x2E3434u;
    // 0x2e3434: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x2e3434u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x2e3438: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e3438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e343c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e343cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3440: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e3440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3444: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e344c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e344cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3454: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3454u;
        // 0x2e3458: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E345Cu;
}
