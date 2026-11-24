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

// Function: sub_003432A0
// Address: 0x3432a0 - 0x343440
void sub_003432A0_0x3432a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003432A0_0x3432a0");
#endif

    switch (ctx->pc) {
        case 0x343308u: goto label_343308;
        case 0x343330u: goto label_343330;
        case 0x34337cu: goto label_34337c;
        case 0x3433dcu: goto label_3433dc;
        case 0x3433e4u: goto label_3433e4;
        case 0x3433f0u: goto label_3433f0;
        default: break;
    }

    ctx->pc = 0x3432a0u;

    // 0x3432a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3432a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3432a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3432a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3432a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3432a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3432ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3432acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3432b0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3432b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3432b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3432b8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3432b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3432bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3432c0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3432c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3432c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3432c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3432c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3432ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3432d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3432d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3432d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3432d8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3432d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432dc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3432dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3432e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3432e4: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x3432e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x3432e8: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3432e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432ec: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3432ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3432f0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3432f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3432f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3432f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3432f8: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x3432f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x3432fc: 0x250831f0  addiu       $t0, $t0, 0x31F0
    ctx->pc = 0x3432fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12784));
    // 0x343300: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x343300u;
    SET_GPR_U32(ctx, 31, 0x343308u);
    ctx->pc = 0x343304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343300u;
    // 0x343304: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x343300u, 0x343308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343308u;
label_343308:
    // 0x343308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34330c: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x34330Cu;
    {
        const bool branch_taken_0x34330c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x343310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34330Cu;
        // 0x343310: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34330c) {
            ctx->pc = 0x3433F8u;
            goto label_3433f8;
        }
    }
    ctx->pc = 0x343314u;
    // 0x343314: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x343314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343318: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x343318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34331c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34331cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x343320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343324: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x343324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x343328: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x343328u;
    SET_GPR_U32(ctx, 31, 0x343330u);
    ctx->pc = 0x34332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343328u;
    // 0x34332c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x343328u, 0x343330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343330u;
label_343330:
    // 0x343330: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x343330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x343334: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x343334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x343338: 0x2442f420  addiu       $v0, $v0, -0xBE0
    ctx->pc = 0x343338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964256));
    // 0x34333c: 0x390c0  sll         $s2, $v1, 3
    ctx->pc = 0x34333cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x343340: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x343340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x343344: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x343344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x343348: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x343348u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34334c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34334cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x343350: 0x2442f422  addiu       $v0, $v0, -0xBDE
    ctx->pc = 0x343350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964258));
    // 0x343354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x343354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343358: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x343358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x34335c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x34335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x343360: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x343360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x343364: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x343364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x343368: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x343368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34336c: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x34336cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x343370: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x343370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x343374: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x343374u;
    SET_GPR_U32(ctx, 31, 0x34337Cu);
    ctx->pc = 0x343378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343374u;
    // 0x343378: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x343374u, 0x34337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34337Cu;
label_34337c:
    // 0x34337c: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x34337cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x343380: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x343380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x343384: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x343384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x343388: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x343388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34338c: 0xae020568  sw          $v0, 0x568($s0)
    ctx->pc = 0x34338cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 2));
    // 0x343390: 0xa21e056c  sb          $fp, 0x56C($s0)
    ctx->pc = 0x343390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1388), (uint8_t)GPR_U32(ctx, 30));
    // 0x343394: 0xa211056d  sb          $s1, 0x56D($s0)
    ctx->pc = 0x343394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1389), (uint8_t)GPR_U32(ctx, 17));
    // 0x343398: 0xa200056e  sb          $zero, 0x56E($s0)
    ctx->pc = 0x343398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1390), (uint8_t)GPR_U32(ctx, 0));
    // 0x34339c: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x34339cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x3433a0: 0xa200056f  sb          $zero, 0x56F($s0)
    ctx->pc = 0x3433a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1391), (uint8_t)GPR_U32(ctx, 0));
    // 0x3433a4: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x3433a4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x3433a8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3433A8u;
    {
        const bool branch_taken_0x3433a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3433ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433A8u;
        // 0x3433ac: 0x7e020550  sq          $v0, 0x550($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3433a8) {
            ctx->pc = 0x3433B8u;
            goto label_3433b8;
        }
    }
    ctx->pc = 0x3433B0u;
    // 0x3433b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3433b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3433b4: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x3433b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
label_3433b8:
    // 0x3433b8: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x3433b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3433bc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3433bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3433c0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3433c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3433c4: 0x2442f424  addiu       $v0, $v0, -0xBDC
    ctx->pc = 0x3433c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964260));
    // 0x3433c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3433c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3433cc: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3433ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3433d0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3433d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3433d4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3433D4u;
    SET_GPR_U32(ctx, 31, 0x3433DCu);
    ctx->pc = 0x3433D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3433D4u;
    // 0x3433d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3433D4u, 0x3433DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433DCu;
label_3433dc:
    // 0x3433dc: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3433DCu;
    SET_GPR_U32(ctx, 31, 0x3433E4u);
    ctx->pc = 0x3433E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3433DCu;
    // 0x3433e0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3433DCu, 0x3433E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433E4u;
label_3433e4:
    // 0x3433e4: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3433e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3433e8: 0xc0d0c9c  jal         func_343270
    ctx->pc = 0x3433E8u;
    SET_GPR_U32(ctx, 31, 0x3433F0u);
    ctx->pc = 0x3433ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3433E8u;
    // 0x3433ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343270u, 0x3433E8u, 0x3433F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433F0u;
label_3433f0:
    // 0x3433f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3433F0u;
    {
        const bool branch_taken_0x3433f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3433F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433F0u;
        // 0x3433f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3433f0) {
            ctx->pc = 0x343410u;
            goto label_343410;
        }
    }
    ctx->pc = 0x3433F8u;
label_3433f8:
    // 0x3433f8: 0xde840520  ld          $a0, 0x520($s4)
    ctx->pc = 0x3433f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 1312)));
    // 0x3433fc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3433fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x343400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x343400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343404: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x343404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343408: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x343408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x34340c: 0xfe830520  sd          $v1, 0x520($s4)
    ctx->pc = 0x34340cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 1312), GPR_U64(ctx, 3));
label_343410:
    // 0x343410: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x343410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x343414: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x343414u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x343418: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x343418u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34341c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34341cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x343420: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x343420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x343424: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x343424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x343428: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x343428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34342c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34342cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x343430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343438: 0x3e00008  jr          $ra
    ctx->pc = 0x343438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343438u;
        // 0x34343c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343440u;
}
