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

// Function: sub_001012F0
// Address: 0x1012f0 - 0x101464
void sub_001012F0_0x1012f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001012F0_0x1012f0");
#endif

    switch (ctx->pc) {
        case 0x101390u: goto label_101390;
        case 0x1013d0u: goto label_1013d0;
        case 0x101400u: goto label_101400;
        case 0x101410u: goto label_101410;
        case 0x101428u: goto label_101428;
        default: break;
    }

    ctx->pc = 0x1012f0u;

    // 0x1012f0: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x1012f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x1012f4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1012f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1012f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1012f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1012fc: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x1012fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x101300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x101304: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x101304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x101308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10130c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10130cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101314: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x101314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x101318: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x101318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10131c: 0x27b00078  addiu       $s0, $sp, 0x78
    ctx->pc = 0x10131cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x101320: 0x26480020  addiu       $t0, $s2, 0x20
    ctx->pc = 0x101320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x101324: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x101324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x101328: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x101328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10132c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x10132cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x101330: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x101330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x101334: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x101334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x101338: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10133c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x10133cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x101340: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x101340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x101344: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x101344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x101348: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x101348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10134c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x10134cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x101350: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x101350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x101354: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x101354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x101358: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x101358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10135c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x10135cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x101360: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x101360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x101364: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x101364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x101368: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x101368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10136c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x10136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x101370: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x101370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x101374: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x101374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x101378: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x101378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10137c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x10137cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x101380: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x101380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x101384: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x101384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x101388: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x101388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x10138c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x10138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_101390:
    // 0x101390: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x101390u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x101394: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x101394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x101398: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x101398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x10139c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x10139cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1013a0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1013a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1013a4: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x1013a4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x1013a8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1013A8u;
    {
        const bool branch_taken_0x1013a8 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x1013ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013A8u;
        // 0x1013ac: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013a8) {
            ctx->pc = 0x101390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101390;
        }
    }
    ctx->pc = 0x1013B0u;
    // 0x1013b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1013b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1013b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1013B4u;
    {
        const bool branch_taken_0x1013b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1013b4) {
            ctx->pc = 0x1013C8u;
            goto label_1013c8;
        }
    }
    ctx->pc = 0x1013BCu;
    // 0x1013bc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1013bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1013c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1013C0u;
    {
        const bool branch_taken_0x1013c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013C0u;
        // 0x1013c4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013c0) {
            ctx->pc = 0x1013CCu;
            goto label_1013cc;
        }
    }
    ctx->pc = 0x1013C8u;
label_1013c8:
    // 0x1013c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1013c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1013cc:
    // 0x1013cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1013ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1013d0:
    // 0x1013d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1013d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1013d4: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1013d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1013d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1013D8u;
    {
        const bool branch_taken_0x1013d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013D8u;
        // 0x1013dc: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013d8) {
            ctx->pc = 0x1013F8u;
            goto label_1013f8;
        }
    }
    ctx->pc = 0x1013E0u;
    // 0x1013e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1013e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1013e4: 0x24631940  addiu       $v1, $v1, 0x1940
    ctx->pc = 0x1013e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6464));
    // 0x1013e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1013e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1013ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1013ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1013f0: 0x400008  jr          $v0
    ctx->pc = 0x1013F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1013F8u: goto label_1013f8;
            case 0x101408u: goto label_101408;
            case 0x101418u: goto label_101418;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1013F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1013F8u;
label_1013f8:
    // 0x1013f8: 0xc040224  jal         func_100890
    ctx->pc = 0x1013F8u;
    SET_GPR_U32(ctx, 31, 0x101400u);
    ctx->pc = 0x100890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100890u, 0x1013F8u, 0x101400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101400u;
label_101400:
    // 0x101400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x101400u;
    {
        const bool branch_taken_0x101400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101400) {
            ctx->pc = 0x101418u;
            goto label_101418;
        }
    }
    ctx->pc = 0x101408u;
label_101408:
    // 0x101408: 0xc040730  jal         func_101CC0
    ctx->pc = 0x101408u;
    SET_GPR_U32(ctx, 31, 0x101410u);
    ctx->pc = 0x10140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101408u;
    // 0x10140c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CC0u, 0x101408u, 0x101410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101410u;
label_101410:
    // 0x101410: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x101410u;
    {
        const bool branch_taken_0x101410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101410u;
        // 0x101414: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101410) {
            ctx->pc = 0x1013D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1013d0;
        }
    }
    ctx->pc = 0x101418u;
label_101418:
    // 0x101418: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x101418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10141c: 0x27a5032c  addiu       $a1, $sp, 0x32C
    ctx->pc = 0x10141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
    // 0x101420: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101420u;
    SET_GPR_U32(ctx, 31, 0x101428u);
    ctx->pc = 0x101424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101420u;
    // 0x101424: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101420u, 0x101428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101428u;
label_101428:
    // 0x101428: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x101428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10142c: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x10142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x101430: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101434: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x101434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x101438: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x101438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x10143c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101440: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x101440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x101444: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x101444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x101448: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x101448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x10144c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10144cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10145c: 0x3e00008  jr          $ra
    ctx->pc = 0x10145Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10145Cu;
        // 0x101460: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10145Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101464u;
}
