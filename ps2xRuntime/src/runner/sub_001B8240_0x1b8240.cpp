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

// Function: sub_001B8240
// Address: 0x1b8240 - 0x1b8b04
void sub_001B8240_0x1b8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8240_0x1b8240");
#endif

    switch (ctx->pc) {
        case 0x1b8284u: goto label_1b8284;
        case 0x1b82a8u: goto label_1b82a8;
        case 0x1b82f0u: goto label_1b82f0;
        case 0x1b8300u: goto label_1b8300;
        case 0x1b8308u: goto label_1b8308;
        case 0x1b831cu: goto label_1b831c;
        case 0x1b8334u: goto label_1b8334;
        case 0x1b8344u: goto label_1b8344;
        case 0x1b8360u: goto label_1b8360;
        case 0x1b8370u: goto label_1b8370;
        case 0x1b8384u: goto label_1b8384;
        case 0x1b8388u: goto label_1b8388;
        case 0x1b8390u: goto label_1b8390;
        case 0x1b83c0u: goto label_1b83c0;
        case 0x1b83f0u: goto label_1b83f0;
        case 0x1b8420u: goto label_1b8420;
        case 0x1b8478u: goto label_1b8478;
        case 0x1b8484u: goto label_1b8484;
        case 0x1b84a0u: goto label_1b84a0;
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84d0u: goto label_1b84d0;
        case 0x1b84e4u: goto label_1b84e4;
        case 0x1b8520u: goto label_1b8520;
        case 0x1b8548u: goto label_1b8548;
        case 0x1b8550u: goto label_1b8550;
        case 0x1b8560u: goto label_1b8560;
        case 0x1b8588u: goto label_1b8588;
        case 0x1b85a4u: goto label_1b85a4;
        case 0x1b85b4u: goto label_1b85b4;
        case 0x1b85c4u: goto label_1b85c4;
        case 0x1b85e0u: goto label_1b85e0;
        case 0x1b8610u: goto label_1b8610;
        case 0x1b8634u: goto label_1b8634;
        case 0x1b8658u: goto label_1b8658;
        case 0x1b8668u: goto label_1b8668;
        case 0x1b869cu: goto label_1b869c;
        case 0x1b86c0u: goto label_1b86c0;
        case 0x1b86fcu: goto label_1b86fc;
        case 0x1b8720u: goto label_1b8720;
        case 0x1b872cu: goto label_1b872c;
        case 0x1b876cu: goto label_1b876c;
        case 0x1b8780u: goto label_1b8780;
        case 0x1b8790u: goto label_1b8790;
        case 0x1b87a4u: goto label_1b87a4;
        case 0x1b87c8u: goto label_1b87c8;
        case 0x1b87dcu: goto label_1b87dc;
        case 0x1b8800u: goto label_1b8800;
        case 0x1b8830u: goto label_1b8830;
        case 0x1b8868u: goto label_1b8868;
        case 0x1b8870u: goto label_1b8870;
        case 0x1b889cu: goto label_1b889c;
        case 0x1b88acu: goto label_1b88ac;
        case 0x1b88bcu: goto label_1b88bc;
        case 0x1b890cu: goto label_1b890c;
        case 0x1b8924u: goto label_1b8924;
        case 0x1b8934u: goto label_1b8934;
        case 0x1b8980u: goto label_1b8980;
        case 0x1b89b4u: goto label_1b89b4;
        case 0x1b89e4u: goto label_1b89e4;
        case 0x1b89fcu: goto label_1b89fc;
        case 0x1b8a30u: goto label_1b8a30;
        case 0x1b8a44u: goto label_1b8a44;
        case 0x1b8a7cu: goto label_1b8a7c;
        case 0x1b8aacu: goto label_1b8aac;
        case 0x1b8ac8u: goto label_1b8ac8;
        case 0x1b8ad4u: goto label_1b8ad4;
        default: break;
    }

    ctx->pc = 0x1b8240u;

    // 0x1b8240: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x1b8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x1b8244: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8248: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b8248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b824c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b824cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b8250: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b8250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b8254: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b8254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b8258: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b8258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b825c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b825cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b8260: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b8260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b8264: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b8264u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b8268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b826c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b826cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b8274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b827c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B827Cu;
    SET_GPR_U32(ctx, 31, 0x1B8284u);
    ctx->pc = 0x1B8280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B827Cu;
    // 0x1b8280: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B827Cu, 0x1B8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8284u;
label_1b8284:
    // 0x1b8284: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x1b8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1b8288: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b8288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b828c: 0xae830088  sw          $v1, 0x88($s4)
    ctx->pc = 0x1b828cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 3));
    // 0x1b8290: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1b8290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1b8294: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1b8294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b8298: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8298u;
    {
        const bool branch_taken_0x1b8298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8298) {
            ctx->pc = 0x1B82B8u;
            goto label_1b82b8;
        }
    }
    ctx->pc = 0x1B82A0u;
    // 0x1b82a0: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B82A0u;
    SET_GPR_U32(ctx, 31, 0x1B82A8u);
    ctx->pc = 0x1B82A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82A0u;
    // 0x1b82a4: 0xae800088  sw          $zero, 0x88($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B82A0u, 0x1B82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82A8u;
label_1b82a8:
    // 0x1b82a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b82a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b82ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b82acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b82b0: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x1b82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    // 0x1b82b4: 0x0  nop
    ctx->pc = 0x1b82b4u;
    // NOP
label_1b82b8:
    // 0x1b82b8: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x1b82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1b82bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B82BCu;
    {
        const bool branch_taken_0x1b82bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82BCu;
        // 0x1b82c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82bc) {
            ctx->pc = 0x1B82C8u;
            goto label_1b82c8;
        }
    }
    ctx->pc = 0x1B82C4u;
    // 0x1b82c4: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x1b82c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_1b82c8:
    // 0x1b82c8: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1b82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1b82cc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1b82ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b82d0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1B82D0u;
    {
        const bool branch_taken_0x1b82d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b82d0) {
            ctx->pc = 0x1B8300u;
            goto label_1b8300;
        }
    }
    ctx->pc = 0x1B82D8u;
    // 0x1b82d8: 0x8e88007c  lw          $t0, 0x7C($s4)
    ctx->pc = 0x1b82d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x1b82dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b82dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82e0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1b82e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b82e4: 0x2686002c  addiu       $a2, $s4, 0x2C
    ctx->pc = 0x1b82e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x1b82e8: 0xc070728  jal         func_1C1CA0
    ctx->pc = 0x1B82E8u;
    SET_GPR_U32(ctx, 31, 0x1B82F0u);
    ctx->pc = 0x1B82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82E8u;
    // 0x1b82ec: 0x2687006c  addiu       $a3, $s4, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CA0u, 0x1B82E8u, 0x1B82F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82F0u;
label_1b82f0:
    // 0x1b82f0: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1b82f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1b82f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b82f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82f8: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B82F8u;
    SET_GPR_U32(ctx, 31, 0x1B8300u);
    ctx->pc = 0x1B82FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82F8u;
    // 0x1b82fc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B82F8u, 0x1B8300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8300u;
label_1b8300:
    // 0x1b8300: 0xc04d298  jal         func_134A60
    ctx->pc = 0x1B8300u;
    SET_GPR_U32(ctx, 31, 0x1B8308u);
    ctx->pc = 0x1B8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8300u;
    // 0x1b8304: 0x9e84008c  lwu         $a0, 0x8C($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134A60u, 0x1B8300u, 0x1B8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8308u;
label_1b8308:
    // 0x1b8308: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b830c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8310: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8314: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B8314u;
    SET_GPR_U32(ctx, 31, 0x1B831Cu);
    ctx->pc = 0x1B8318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8314u;
    // 0x1b8318: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B8314u, 0x1B831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B831Cu;
label_1b831c:
    // 0x1b831c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b8320: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8324: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b8324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b8328: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1b8328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b832c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B832Cu;
    SET_GPR_U32(ctx, 31, 0x1B8334u);
    ctx->pc = 0x1B8330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B832Cu;
    // 0x1b8330: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B832Cu, 0x1B8334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8334u;
label_1b8334:
    // 0x1b8334: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8338: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1b8338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1b833c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B833Cu;
    SET_GPR_U32(ctx, 31, 0x1B8344u);
    ctx->pc = 0x1B8340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B833Cu;
    // 0x1b8340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B833Cu, 0x1B8344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8344u;
label_1b8344:
    // 0x1b8344: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1b8344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b8348: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1b8348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b834c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b834cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8350: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8354: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1b8354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1b8358: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8358u;
    SET_GPR_U32(ctx, 31, 0x1B8360u);
    ctx->pc = 0x1B835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8358u;
    // 0x1b835c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8358u, 0x1B8360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8360u;
label_1b8360:
    // 0x1b8360: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8364: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1b8364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1b8368: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8368u;
    SET_GPR_U32(ctx, 31, 0x1B8370u);
    ctx->pc = 0x1B836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8368u;
    // 0x1b836c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8368u, 0x1B8370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8370u;
label_1b8370:
    // 0x1b8370: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8374: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8378: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b8378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b837c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B837Cu;
    SET_GPR_U32(ctx, 31, 0x1B8384u);
    ctx->pc = 0x1B8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B837Cu;
    // 0x1b8380: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B837Cu, 0x1B8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8384u;
label_1b8384:
    // 0x1b8384: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b8384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8388:
    // 0x1b8388: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B8388u;
    SET_GPR_U32(ctx, 31, 0x1B8390u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B8388u, 0x1B8390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8390u;
label_1b8390:
    // 0x1b8390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b8390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b8394: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b8394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b8398: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1b8398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b839c: 0x8ea2783c  lw          $v0, 0x783C($s5)
    ctx->pc = 0x1b839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b83a0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1b83a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b83a4: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1b83a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b83a8: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x1b83a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b83ac: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1b83acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b83b0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b83b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b83b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b83b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b83b8: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B83B8u;
    SET_GPR_U32(ctx, 31, 0x1B83C0u);
    ctx->pc = 0x1B83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83B8u;
    // 0x1b83bc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B83B8u, 0x1B83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83C0u;
label_1b83c0:
    // 0x1b83c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b83c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b83c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b83c8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1b83c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b83cc: 0x8ea2783c  lw          $v0, 0x783C($s5)
    ctx->pc = 0x1b83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b83d0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1b83d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b83d4: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1b83d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b83d8: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x1b83d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b83dc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1b83dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b83e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b83e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b83e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b83e8: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B83E8u;
    SET_GPR_U32(ctx, 31, 0x1B83F0u);
    ctx->pc = 0x1B83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83E8u;
    // 0x1b83ec: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B83E8u, 0x1B83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83F0u;
label_1b83f0:
    // 0x1b83f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b83f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b83f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b83f8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1b83f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b83fc: 0x8ea2783c  lw          $v0, 0x783C($s5)
    ctx->pc = 0x1b83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b8400: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1b8400u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b8404: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1b8404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b8408: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x1b8408u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b840c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1b840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b8410: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b8410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b8414: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b8414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b8418: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B8418u;
    SET_GPR_U32(ctx, 31, 0x1B8420u);
    ctx->pc = 0x1B841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8418u;
    // 0x1b841c: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B8418u, 0x1B8420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8420u;
label_1b8420:
    // 0x1b8420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b8420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b8424: 0x8ea3783c  lw          $v1, 0x783C($s5)
    ctx->pc = 0x1b8424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b8428: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1b8428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b842c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b842cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b8430: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1b8430u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1b8434: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b8434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b8438: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1b843c: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x1b843cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b8440: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b8440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b8444: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b8444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b8448: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b8448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b844c: 0x2e020200  sltiu       $v0, $s0, 0x200
    ctx->pc = 0x1b844cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1b8450: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1b8450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1b8454: 0x8ea3783c  lw          $v1, 0x783C($s5)
    ctx->pc = 0x1b8454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30780)));
    // 0x1b8458: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b8458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b845c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1B845Cu;
    {
        const bool branch_taken_0x1b845c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B845Cu;
        // 0x1b8460: 0xaea3783c  sw          $v1, 0x783C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 30780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b845c) {
            ctx->pc = 0x1B8388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8388;
        }
    }
    ctx->pc = 0x1B8464u;
    // 0x1b8464: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b846c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b846cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8470: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B8470u;
    SET_GPR_U32(ctx, 31, 0x1B8478u);
    ctx->pc = 0x1B8474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8470u;
    // 0x1b8474: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B8470u, 0x1B8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8478u;
label_1b8478:
    // 0x1b8478: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b847c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B847Cu;
    SET_GPR_U32(ctx, 31, 0x1B8484u);
    ctx->pc = 0x1B8480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B847Cu;
    // 0x1b8480: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B847Cu, 0x1B8484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8484u;
label_1b8484:
    // 0x1b8484: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8488: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1b8488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1b848c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b848cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b8490: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1b8490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b8494: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1b8494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b8498: 0xc06c2b8  jal         func_1B0AE0
    ctx->pc = 0x1B8498u;
    SET_GPR_U32(ctx, 31, 0x1B84A0u);
    ctx->pc = 0x1B849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8498u;
    // 0x1b849c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AE0u, 0x1B8498u, 0x1B84A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84A0u;
label_1b84a0:
    // 0x1b84a0: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x1b84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x1b84a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b84a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b84a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b84ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B84ACu;
    SET_GPR_U32(ctx, 31, 0x1B84B4u);
    ctx->pc = 0x1B84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84ACu;
    // 0x1b84b0: 0x344603ff  ori         $a2, $v0, 0x3FF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B84ACu, 0x1B84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84B4u;
label_1b84b4:
    // 0x1b84b4: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1b84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1b84b8: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1b84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1b84bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b84bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b84c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b84c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84c4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b84c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B84C8u;
    SET_GPR_U32(ctx, 31, 0x1B84D0u);
    ctx->pc = 0x1B84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84C8u;
    // 0x1b84cc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B84C8u, 0x1B84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84D0u;
label_1b84d0:
    // 0x1b84d0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b84d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84d8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b84d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b84dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B84DCu;
    SET_GPR_U32(ctx, 31, 0x1B84E4u);
    ctx->pc = 0x1B84E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84DCu;
    // 0x1b84e0: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B84DCu, 0x1B84E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84E4u;
label_1b84e4:
    // 0x1b84e4: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1b84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1b84e8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1b84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1b84ec: 0x3444851f  ori         $a0, $v0, 0x851F
    ctx->pc = 0x1b84ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1b84f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1b84f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84f4: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1b84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1b84f8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1b84f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1b84fc: 0x830019  multu       $a0, $v1
    ctx->pc = 0x1b84fcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b8500: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b8500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b8504: 0x0  nop
    ctx->pc = 0x1b8504u;
    // NOP
    // 0x1b8508: 0x1810  mfhi        $v1
    ctx->pc = 0x1b8508u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b850c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x1b850cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b8510: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b8514: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b8514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b8518: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8518u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b851c: 0x29942  srl         $s3, $v0, 5
    ctx->pc = 0x1b851cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_1b8520:
    // 0x1b8520: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b8524: 0x27c40700  addiu       $a0, $fp, 0x700
    ctx->pc = 0x1b8524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1792));
    // 0x1b8528: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b8528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b852c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1b852cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b8530: 0x3b03c  dsll32      $s6, $v1, 0
    ctx->pc = 0x1b8530u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8534: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x1b8534u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x1b8538: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b8538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b853c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b853cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b8540: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x1b8540u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8544: 0x17b83e  dsrl32      $s7, $s7, 0
    ctx->pc = 0x1b8544u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 0));
label_1b8548:
    // 0x1b8548: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B8548u;
    SET_GPR_U32(ctx, 31, 0x1B8550u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B8548u, 0x1B8550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8550u;
label_1b8550:
    // 0x1b8550: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1b8550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1b8554: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1b8554u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8558: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1B8558u;
    SET_GPR_U32(ctx, 31, 0x1B8560u);
    ctx->pc = 0x1B855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8558u;
    // 0x1b855c: 0x11883f  dsra32      $s1, $s1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1B8558u, 0x1B8560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8560u;
label_1b8560:
    // 0x1b8560: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1b8560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1b8564: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1b8564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1b8568: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1b8568u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b856c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b856cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8570: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1b8570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1b8574: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8578: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b8578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b857c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1b857cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b8580: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8580u;
    SET_GPR_U32(ctx, 31, 0x1B8588u);
    ctx->pc = 0x1B8584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8580u;
    // 0x1b8584: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8580u, 0x1B8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8588u;
label_1b8588:
    // 0x1b8588: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1b8588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1b858c: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1b858cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1b8590: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8594: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8598: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1b8598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b859c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B859Cu;
    SET_GPR_U32(ctx, 31, 0x1B85A4u);
    ctx->pc = 0x1B85A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B859Cu;
    // 0x1b85a0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B859Cu, 0x1B85A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85A4u;
label_1b85a4:
    // 0x1b85a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b85a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85a8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b85a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b85ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B85ACu;
    SET_GPR_U32(ctx, 31, 0x1B85B4u);
    ctx->pc = 0x1B85B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85ACu;
    // 0x1b85b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B85ACu, 0x1B85B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85B4u;
label_1b85b4:
    // 0x1b85b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b85b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85b8: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b85b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b85bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B85BCu;
    SET_GPR_U32(ctx, 31, 0x1B85C4u);
    ctx->pc = 0x1B85C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85BCu;
    // 0x1b85c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B85BCu, 0x1B85C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85C4u;
label_1b85c4:
    // 0x1b85c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b85c8: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1b85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1b85cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b85ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b85d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b85d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85d4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b85d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b85d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B85D8u;
    SET_GPR_U32(ctx, 31, 0x1B85E0u);
    ctx->pc = 0x1B85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85D8u;
    // 0x1b85dc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B85D8u, 0x1B85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85E0u;
label_1b85e0:
    // 0x1b85e0: 0x9ea678d0  lwu         $a2, 0x78D0($s5)
    ctx->pc = 0x1b85e0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1b85e4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b85e8: 0x34430005  ori         $v1, $v0, 0x5
    ctx->pc = 0x1b85e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1b85ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b85ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85f0: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x1b85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
    // 0x1b85f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b85f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b85f8: 0x34425400  ori         $v0, $v0, 0x5400
    ctx->pc = 0x1b85f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
    // 0x1b85fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b85fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b8600: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b8600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b8604: 0x6197c  dsll32      $v1, $a2, 5
    ctx->pc = 0x1b8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1b8608: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8608u;
    SET_GPR_U32(ctx, 31, 0x1B8610u);
    ctx->pc = 0x1B860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8608u;
    // 0x1b860c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8608u, 0x1B8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8610u;
label_1b8610:
    // 0x1b8610: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x1b8610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1b8614: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b8614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b8618: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b8618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b861c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8620: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b8620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b8624: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b862c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B862Cu;
    SET_GPR_U32(ctx, 31, 0x1B8634u);
    ctx->pc = 0x1B8630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B862Cu;
    // 0x1b8630: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B862Cu, 0x1B8634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8634u;
label_1b8634:
    // 0x1b8634: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1b8634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1b8638: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b8638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b863c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b863cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8640: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b8640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b8644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b8644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b8648: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b864c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b8650: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8650u;
    SET_GPR_U32(ctx, 31, 0x1B8658u);
    ctx->pc = 0x1B8654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8650u;
    // 0x1b8654: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8650u, 0x1B8658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8658u;
label_1b8658:
    // 0x1b8658: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b865c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b865cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8660: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8660u;
    SET_GPR_U32(ctx, 31, 0x1B8668u);
    ctx->pc = 0x1B8664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8660u;
    // 0x1b8664: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8660u, 0x1B8668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8668u;
label_1b8668:
    // 0x1b8668: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1b8668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b866c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1b866cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1b8670: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1b8670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b8674: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1b8674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b8678: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b8678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b867c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8680: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b8680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b8684: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b8684u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b8688: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b8688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b868c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8690: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1b8690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8694: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1B8694u;
    SET_GPR_U32(ctx, 31, 0x1B869Cu);
    ctx->pc = 0x1B8698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8694u;
    // 0x1b8698: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1B8694u, 0x1B869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B869Cu;
label_1b869c:
    // 0x1b869c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b86a0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b86a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b86a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b86a8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b86a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b86ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b86acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b86b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b86b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86b4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b86b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b86b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B86B8u;
    SET_GPR_U32(ctx, 31, 0x1B86C0u);
    ctx->pc = 0x1B86BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B86B8u;
    // 0x1b86bc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B86B8u, 0x1B86C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86C0u;
label_1b86c0:
    // 0x1b86c0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1b86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b86c4: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x1b86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1b86c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b86cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b86ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b86d0: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1b86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1b86d4: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1b86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1b86d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b86d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b86dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b86dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b86e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b86e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b86e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b86e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b86e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b86e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b86ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b86ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b86f0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1b86f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b86f4: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1B86F4u;
    SET_GPR_U32(ctx, 31, 0x1B86FCu);
    ctx->pc = 0x1B86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B86F4u;
    // 0x1b86f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1B86F4u, 0x1B86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86FCu;
label_1b86fc:
    // 0x1b86fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8700: 0x3c027b00  lui         $v0, 0x7B00
    ctx->pc = 0x1b8700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31488 << 16));
    // 0x1b8704: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8708: 0x34427400  ori         $v0, $v0, 0x7400
    ctx->pc = 0x1b8708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29696);
    // 0x1b870c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b870cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b8710: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8714: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b8714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8718: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8718u;
    SET_GPR_U32(ctx, 31, 0x1B8720u);
    ctx->pc = 0x1B871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8718u;
    // 0x1b871c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8718u, 0x1B8720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8720u;
label_1b8720:
    // 0x1b8720: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8724: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B8724u;
    SET_GPR_U32(ctx, 31, 0x1B872Cu);
    ctx->pc = 0x1B8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8724u;
    // 0x1b8728: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B8724u, 0x1B872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B872Cu;
label_1b872c:
    // 0x1b872c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1b872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1b8730: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1b8730u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8734: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1B8734u;
    {
        const bool branch_taken_0x1b8734 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8734u;
        // 0x1b8738: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8734) {
            ctx->pc = 0x1B8838u;
            goto label_1b8838;
        }
    }
    ctx->pc = 0x1B873Cu;
    // 0x1b873c: 0x9ea678d0  lwu         $a2, 0x78D0($s5)
    ctx->pc = 0x1b873cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1b8740: 0x3443000d  ori         $v1, $v0, 0xD
    ctx->pc = 0x1b8740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x1b8744: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8748: 0x34029820  ori         $v0, $zero, 0x9820
    ctx->pc = 0x1b8748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38944);
    // 0x1b874c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b874cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8750: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b8750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b8754: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b8754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b8758: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1b8758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x1b875c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b875cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b8760: 0x6197c  dsll32      $v1, $a2, 5
    ctx->pc = 0x1b8760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1b8764: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8764u;
    SET_GPR_U32(ctx, 31, 0x1B876Cu);
    ctx->pc = 0x1B8768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8764u;
    // 0x1b8768: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8764u, 0x1B876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B876Cu;
label_1b876c:
    // 0x1b876c: 0x3c020201  lui         $v0, 0x201
    ctx->pc = 0x1b876cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)513 << 16));
    // 0x1b8770: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8774: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b8774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b8778: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8778u;
    SET_GPR_U32(ctx, 31, 0x1B8780u);
    ctx->pc = 0x1B877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8778u;
    // 0x1b877c: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8778u, 0x1B8780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8780u;
label_1b8780:
    // 0x1b8780: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8788: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8788u;
    SET_GPR_U32(ctx, 31, 0x1B8790u);
    ctx->pc = 0x1B878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8788u;
    // 0x1b878c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8788u, 0x1B8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8790u;
label_1b8790:
    // 0x1b8790: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b8790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b8794: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8798: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b879c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B879Cu;
    SET_GPR_U32(ctx, 31, 0x1B87A4u);
    ctx->pc = 0x1B87A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B879Cu;
    // 0x1b87a0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B879Cu, 0x1B87A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87A4u;
label_1b87a4:
    // 0x1b87a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b87a8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b87ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b87acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b87b0: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1b87b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1b87b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b87b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b87b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b87b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b87bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b87c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B87C0u;
    SET_GPR_U32(ctx, 31, 0x1B87C8u);
    ctx->pc = 0x1B87C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87C0u;
    // 0x1b87c4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B87C0u, 0x1B87C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87C8u;
label_1b87c8:
    // 0x1b87c8: 0x3c020409  lui         $v0, 0x409
    ctx->pc = 0x1b87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1033 << 16));
    // 0x1b87cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b87ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b87d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b87d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B87D4u;
    SET_GPR_U32(ctx, 31, 0x1B87DCu);
    ctx->pc = 0x1B87D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87D4u;
    // 0x1b87d8: 0x34460409  ori         $a2, $v0, 0x409 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1033);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B87D4u, 0x1B87DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87DCu;
label_1b87dc:
    // 0x1b87dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b87e0: 0x3c027d00  lui         $v0, 0x7D00
    ctx->pc = 0x1b87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32000 << 16));
    // 0x1b87e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b87e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b87e8: 0x34427480  ori         $v0, $v0, 0x7480
    ctx->pc = 0x1b87e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29824);
    // 0x1b87ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b87ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b87f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b87f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b87f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b87f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B87F8u;
    SET_GPR_U32(ctx, 31, 0x1B8800u);
    ctx->pc = 0x1B87FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87F8u;
    // 0x1b87fc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B87F8u, 0x1B8800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8800u;
label_1b8800:
    // 0x1b8800: 0x9ea678d0  lwu         $a2, 0x78D0($s5)
    ctx->pc = 0x1b8800u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1b8804: 0x3c022008  lui         $v0, 0x2008
    ctx->pc = 0x1b8804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8200 << 16));
    // 0x1b8808: 0x34430005  ori         $v1, $v0, 0x5
    ctx->pc = 0x1b8808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1b880c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b880cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8810: 0x3c0259b0  lui         $v0, 0x59B0
    ctx->pc = 0x1b8810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22960 << 16));
    // 0x1b8814: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8818: 0x34425200  ori         $v0, $v0, 0x5200
    ctx->pc = 0x1b8818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20992);
    // 0x1b881c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b8820: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b8820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b8824: 0x6197c  dsll32      $v1, $a2, 5
    ctx->pc = 0x1b8824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1b8828: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8828u;
    SET_GPR_U32(ctx, 31, 0x1B8830u);
    ctx->pc = 0x1B882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8828u;
    // 0x1b882c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8828u, 0x1B8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8830u;
label_1b8830:
    // 0x1b8830: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B8830u;
    {
        const bool branch_taken_0x1b8830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8830) {
            ctx->pc = 0x1B8868u;
            goto label_1b8868;
        }
    }
    ctx->pc = 0x1B8838u;
label_1b8838:
    // 0x1b8838: 0x9ea678d0  lwu         $a2, 0x78D0($s5)
    ctx->pc = 0x1b8838u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1b883c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1b883cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1b8840: 0x3c025810  lui         $v0, 0x5810
    ctx->pc = 0x1b8840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22544 << 16));
    // 0x1b8844: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x1b8844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x1b8848: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1b8848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x1b884c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b884cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8850: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8854: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b8854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b8858: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b8858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b885c: 0x6197c  dsll32      $v1, $a2, 5
    ctx->pc = 0x1b885cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1b8860: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8860u;
    SET_GPR_U32(ctx, 31, 0x1B8868u);
    ctx->pc = 0x1B8864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8860u;
    // 0x1b8864: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8860u, 0x1B8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8868u;
label_1b8868:
    // 0x1b8868: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B8868u;
    SET_GPR_U32(ctx, 31, 0x1B8870u);
    ctx->pc = 0x1B886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8868u;
    // 0x1b886c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B8868u, 0x1B8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8870u;
label_1b8870:
    // 0x1b8870: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b8870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8878: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b8878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b887c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b887cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b8880: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b8880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8884: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b8884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b8888: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b8888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b888c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b888cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b8890: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b8890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b8894: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8894u;
    SET_GPR_U32(ctx, 31, 0x1B889Cu);
    ctx->pc = 0x1B8898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8894u;
    // 0x1b8898: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8894u, 0x1B889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B889Cu;
label_1b889c:
    // 0x1b889c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88a0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b88a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b88a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B88A4u;
    SET_GPR_U32(ctx, 31, 0x1B88ACu);
    ctx->pc = 0x1B88A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B88A4u;
    // 0x1b88a8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B88A4u, 0x1B88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88ACu;
label_1b88ac:
    // 0x1b88ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b88acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88b0: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b88b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b88b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B88B4u;
    SET_GPR_U32(ctx, 31, 0x1B88BCu);
    ctx->pc = 0x1B88B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B88B4u;
    // 0x1b88b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B88B4u, 0x1B88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88BCu;
label_1b88bc:
    // 0x1b88bc: 0x8e880020  lw          $t0, 0x20($s4)
    ctx->pc = 0x1b88bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1b88c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b88c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b88c4: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b88c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b88c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b88c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88cc: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1b88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1b88d0: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1b88d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1b88d4: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1b88d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b88d8: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1b88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1b88dc: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1b88dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1b88e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b88e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b88e4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b88e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b88e8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b88e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b88ec: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1b88ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b88f0: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1b88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1b88f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b88f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b88f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b88f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b88fc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b88fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b8900: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b8900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b8904: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8904u;
    SET_GPR_U32(ctx, 31, 0x1B890Cu);
    ctx->pc = 0x1B8908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8904u;
    // 0x1b8908: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8904u, 0x1B890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B890Cu;
label_1b890c:
    // 0x1b890c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1b890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1b8910: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8914: 0x8c22f014  lw          $v0, -0xFEC($at)
    ctx->pc = 0x1b8914u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F014u));
    // 0x1b8918: 0xdc460050  ld          $a2, 0x50($v0)
    ctx->pc = 0x1b8918u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1b891c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B891Cu;
    SET_GPR_U32(ctx, 31, 0x1B8924u);
    ctx->pc = 0x1B8920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B891Cu;
    // 0x1b8920: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B891Cu, 0x1B8924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8924u;
label_1b8924:
    // 0x1b8924: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b892c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B892Cu;
    SET_GPR_U32(ctx, 31, 0x1B8934u);
    ctx->pc = 0x1B8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B892Cu;
    // 0x1b8930: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B892Cu, 0x1B8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8934u;
label_1b8934:
    // 0x1b8934: 0x8ea778c8  lw          $a3, 0x78C8($s5)
    ctx->pc = 0x1b8934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1b8938: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b893c: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1b893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1b8940: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b8940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b8944: 0x9ea378c0  lwu         $v1, 0x78C0($s5)
    ctx->pc = 0x1b8944u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1b8948: 0x9ea678cc  lwu         $a2, 0x78CC($s5)
    ctx->pc = 0x1b8948u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30924)));
    // 0x1b894c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b894cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b8950: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1b8950u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1b8954: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b8954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b8958: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1b8958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1b895c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8960: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1b8960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1b8964: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b8964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b8968: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b896c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b896cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b8970: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b8970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b8974: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b8974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b8978: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8978u;
    SET_GPR_U32(ctx, 31, 0x1B8980u);
    ctx->pc = 0x1B897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8978u;
    // 0x1b897c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8978u, 0x1B8980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8980u;
label_1b8980:
    // 0x1b8980: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1b8980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1b8984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b8988: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8988u;
    {
        const bool branch_taken_0x1b8988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8988) {
            ctx->pc = 0x1B89C0u;
            goto label_1b89c0;
        }
    }
    ctx->pc = 0x1B8990u;
    // 0x1b8990: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1b8990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1b8994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8998: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b8998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b899c: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b899cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b89a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b89a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b89a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b89a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b89a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b89a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b89ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B89ACu;
    SET_GPR_U32(ctx, 31, 0x1B89B4u);
    ctx->pc = 0x1B89B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89ACu;
    // 0x1b89b0: 0x34460062  ori         $a2, $v0, 0x62 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)98);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B89ACu, 0x1B89B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89B4u;
label_1b89b4:
    // 0x1b89b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B89B4u;
    {
        const bool branch_taken_0x1b89b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b89b4) {
            ctx->pc = 0x1B89E8u;
            goto label_1b89e8;
        }
    }
    ctx->pc = 0x1B89BCu;
    // 0x1b89bc: 0x0  nop
    ctx->pc = 0x1b89bcu;
    // NOP
label_1b89c0:
    // 0x1b89c0: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1b89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1b89c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89c8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b89c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b89cc: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b89d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b89d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b89d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b89d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b89d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b89d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b89dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B89DCu;
    SET_GPR_U32(ctx, 31, 0x1B89E4u);
    ctx->pc = 0x1B89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89DCu;
    // 0x1b89e0: 0x34460064  ori         $a2, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B89DCu, 0x1B89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89E4u;
label_1b89e4:
    // 0x1b89e4: 0x0  nop
    ctx->pc = 0x1b89e4u;
    // NOP
label_1b89e8:
    // 0x1b89e8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b89ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b89ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b89f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b89f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B89F4u;
    SET_GPR_U32(ctx, 31, 0x1B89FCu);
    ctx->pc = 0x1B89F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B89F4u;
    // 0x1b89f8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B89F4u, 0x1B89FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89FCu;
label_1b89fc:
    // 0x1b89fc: 0x26430790  addiu       $v1, $s2, 0x790
    ctx->pc = 0x1b89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1936));
    // 0x1b8a00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8a04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b8a08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b8a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8a0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8a10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a14: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b8a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b8a18: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b8a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b8a1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b8a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b8a20: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x1b8a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x1b8a24: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b8a24u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b8a28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8A28u;
    SET_GPR_U32(ctx, 31, 0x1B8A30u);
    ctx->pc = 0x1B8A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A28u;
    // 0x1b8a2c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8A28u, 0x1B8A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A30u;
label_1b8a30:
    // 0x1b8a30: 0x3c020209  lui         $v0, 0x209
    ctx->pc = 0x1b8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)521 << 16));
    // 0x1b8a34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8a3c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8A44u);
    ctx->pc = 0x1B8A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A3Cu;
    // 0x1b8a40: 0x34460409  ori         $a2, $v0, 0x409 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1033);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8A3Cu, 0x1B8A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A44u;
label_1b8a44:
    // 0x1b8a44: 0x26430790  addiu       $v1, $s2, 0x790
    ctx->pc = 0x1b8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1936));
    // 0x1b8a48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8a4c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1b8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1b8a50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b8a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8a54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b8a58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a5c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8a60: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b8a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8a64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b8a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b8a68: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b8a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b8a6c: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x1b8a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x1b8a70: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b8a70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b8a74: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8A74u;
    SET_GPR_U32(ctx, 31, 0x1B8A7Cu);
    ctx->pc = 0x1B8A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A74u;
    // 0x1b8a78: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8A74u, 0x1B8A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A7Cu;
label_1b8a7c:
    // 0x1b8a7c: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1b8a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1b8a80: 0x2e4200e0  sltiu       $v0, $s2, 0xE0
    ctx->pc = 0x1b8a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
    // 0x1b8a84: 0x1440feb0  bnez        $v0, . + 4 + (-0x150 << 2)
    ctx->pc = 0x1B8A84u;
    {
        const bool branch_taken_0x1b8a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8a84) {
            ctx->pc = 0x1B8548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8548;
        }
    }
    ctx->pc = 0x1B8A8Cu;
    // 0x1b8a8c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b8a90: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x1b8a90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1b8a94: 0x2fc20200  sltiu       $v0, $fp, 0x200
    ctx->pc = 0x1b8a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1b8a98: 0x1440fea1  bnez        $v0, . + 4 + (-0x15F << 2)
    ctx->pc = 0x1B8A98u;
    {
        const bool branch_taken_0x1b8a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A98u;
        // 0x1b8a9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a98) {
            ctx->pc = 0x1B8520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8520;
        }
    }
    ctx->pc = 0x1B8AA0u;
    // 0x1b8aa0: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1b8aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1b8aa4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8AA4u;
    SET_GPR_U32(ctx, 31, 0x1B8AACu);
    ctx->pc = 0x1B8AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8AA4u;
    // 0x1b8aa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8AA4u, 0x1B8AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AACu;
label_1b8aac:
    // 0x1b8aac: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1b8aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1b8ab0: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1b8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1b8ab4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8ab8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8abc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1b8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b8ac0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B8AC0u;
    SET_GPR_U32(ctx, 31, 0x1B8AC8u);
    ctx->pc = 0x1B8AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8AC0u;
    // 0x1b8ac4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B8AC0u, 0x1B8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AC8u;
label_1b8ac8:
    // 0x1b8ac8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b8ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8acc: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B8ACCu;
    SET_GPR_U32(ctx, 31, 0x1B8AD4u);
    ctx->pc = 0x1B8AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8ACCu;
    // 0x1b8ad0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B8ACCu, 0x1B8AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AD4u;
label_1b8ad4:
    // 0x1b8ad4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b8ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b8ad8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b8ad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b8adc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b8adcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8ae0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b8ae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8ae4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b8ae4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8ae8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b8ae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8aec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b8aecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8af0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b8af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AFCu;
        // 0x1b8b00: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8B04u;
}
