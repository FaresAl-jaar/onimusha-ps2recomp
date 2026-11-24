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

// Function: sub_001E53B0
// Address: 0x1e53b0 - 0x1e5688
void sub_001E53B0_0x1e53b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E53B0_0x1e53b0");
#endif

    switch (ctx->pc) {
        case 0x1e5420u: goto label_1e5420;
        case 0x1e5438u: goto label_1e5438;
        case 0x1e5454u: goto label_1e5454;
        case 0x1e5470u: goto label_1e5470;
        case 0x1e5490u: goto label_1e5490;
        case 0x1e54b0u: goto label_1e54b0;
        case 0x1e54d4u: goto label_1e54d4;
        case 0x1e5504u: goto label_1e5504;
        case 0x1e5534u: goto label_1e5534;
        case 0x1e55ccu: goto label_1e55cc;
        case 0x1e55f0u: goto label_1e55f0;
        case 0x1e562cu: goto label_1e562c;
        case 0x1e5638u: goto label_1e5638;
        case 0x1e5650u: goto label_1e5650;
        default: break;
    }

    ctx->pc = 0x1e53b0u;

    // 0x1e53b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1e53b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1e53b4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e53b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e53b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e53bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e53bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e53c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e53c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e53c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e53c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e53c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e53c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e53cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e53ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e53d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e53d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e53d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e53d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e53d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e53d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e53dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e53e0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1e53e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e53e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e53e8: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x1e53e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x1e53ec: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e53ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e53f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E53F0u;
    {
        const bool branch_taken_0x1e53f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E53F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53F0u;
        // 0x1e53f4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53f0) {
            ctx->pc = 0x1E5400u;
            goto label_1e5400;
        }
    }
    ctx->pc = 0x1E53F8u;
    // 0x1e53f8: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1E53F8u;
    {
        const bool branch_taken_0x1e53f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53F8u;
        // 0x1e53fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53f8) {
            ctx->pc = 0x1E5658u;
            goto label_1e5658;
        }
    }
    ctx->pc = 0x1E5400u;
label_1e5400:
    // 0x1e5400: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1e5400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1e5404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5404u;
    {
        const bool branch_taken_0x1e5404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5404) {
            ctx->pc = 0x1E5418u;
            goto label_1e5418;
        }
    }
    ctx->pc = 0x1E540Cu;
    // 0x1e540c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1e540cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x1e5410: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5410u;
    {
        const bool branch_taken_0x1e5410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5410u;
        // 0x1e5414: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5410) {
            ctx->pc = 0x1E5428u;
            goto label_1e5428;
        }
    }
    ctx->pc = 0x1E5418u;
label_1e5418:
    // 0x1e5418: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1E5418u;
    SET_GPR_U32(ctx, 31, 0x1E5420u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1E5418u, 0x1E5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5420u;
label_1e5420:
    // 0x1e5420: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1e5420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x1e5424: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1e5424u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5428:
    // 0x1e5428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e542c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e542cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e5430: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E5430u;
    SET_GPR_U32(ctx, 31, 0x1E5438u);
    ctx->pc = 0x1E5434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5430u;
    // 0x1e5434: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E5430u, 0x1E5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5438u;
label_1e5438:
    // 0x1e5438: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1e5438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1e543c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e543cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e5440: 0x90450006  lbu         $a1, 0x6($v0)
    ctx->pc = 0x1e5440u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1e5444: 0x90460007  lbu         $a2, 0x7($v0)
    ctx->pc = 0x1e5444u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1e5448: 0x9048001b  lbu         $t0, 0x1B($v0)
    ctx->pc = 0x1e5448u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x1e544c: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1E544Cu;
    SET_GPR_U32(ctx, 31, 0x1E5454u);
    ctx->pc = 0x1E5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E544Cu;
    // 0x1e5450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1E544Cu, 0x1E5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5454u;
label_1e5454:
    // 0x1e5454: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1e5454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1e5458: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x1e5458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1e545c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1e545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e5460: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1e5460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e5464: 0x90650023  lbu         $a1, 0x23($v1)
    ctx->pc = 0x1e5464u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x1e5468: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1E5468u;
    SET_GPR_U32(ctx, 31, 0x1E5470u);
    ctx->pc = 0x1E546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5468u;
    // 0x1e546c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1E5468u, 0x1E5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5470u;
label_1e5470:
    // 0x1e5470: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x1e5470u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1e5474: 0x8e710030  lw          $s1, 0x30($s3)
    ctx->pc = 0x1e5474u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1e5478: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1e5478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e547c: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x1e547cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1e5480: 0x8e700034  lw          $s0, 0x34($s3)
    ctx->pc = 0x1e5480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1e5484: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1e5484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5488: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x1E5488u;
    SET_GPR_U32(ctx, 31, 0x1E5490u);
    ctx->pc = 0x1E548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5488u;
    // 0x1e548c: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x1E5488u, 0x1E5490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5490u;
label_1e5490:
    // 0x1e5490: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1e5490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1e5494: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e5494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e5498: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x1E5498u;
    {
        const bool branch_taken_0x1e5498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5498u;
        // 0x1e549c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5498) {
            ctx->pc = 0x1E55E8u;
            goto label_1e55e8;
        }
    }
    ctx->pc = 0x1E54A0u;
    // 0x1e54a0: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1e54a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1e54a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e54a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e54a8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1e54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1e54ac: 0x0  nop
    ctx->pc = 0x1e54acu;
    // NOP
label_1e54b0:
    // 0x1e54b0: 0x86030044  lh          $v1, 0x44($s0)
    ctx->pc = 0x1e54b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1e54b4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e54b8: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E54B8u;
    {
        const bool branch_taken_0x1e54b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e54b8) {
            ctx->pc = 0x1E55D0u;
            goto label_1e55d0;
        }
    }
    ctx->pc = 0x1E54C0u;
    // 0x1e54c0: 0x92060048  lbu         $a2, 0x48($s0)
    ctx->pc = 0x1e54c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1e54c4: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1E54C4u;
    {
        const bool branch_taken_0x1e54c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54C4u;
        // 0x1e54c8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54c4) {
            ctx->pc = 0x1E54F8u;
            goto label_1e54f8;
        }
    }
    ctx->pc = 0x1E54CCu;
    // 0x1e54cc: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x1E54CCu;
    SET_GPR_U32(ctx, 31, 0x1E54D4u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1E54CCu, 0x1E54D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54D4u;
label_1e54d4:
    // 0x1e54d4: 0x94540004  lhu         $s4, 0x4($v0)
    ctx->pc = 0x1e54d4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e54d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e54d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e54dc: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x1e54dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e54e0: 0x94530006  lhu         $s3, 0x6($v0)
    ctx->pc = 0x1e54e0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1e54e4: 0x283b021  addu        $s6, $s4, $v1
    ctx->pc = 0x1e54e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e54e8: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1e54e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1e54ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E54ECu;
    {
        const bool branch_taken_0x1e54ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54ECu;
        // 0x1e54f0: 0x262b821  addu        $s7, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54ec) {
            ctx->pc = 0x1E5528u;
            goto label_1e5528;
        }
    }
    ctx->pc = 0x1E54F4u;
    // 0x1e54f4: 0x0  nop
    ctx->pc = 0x1e54f4u;
    // NOP
label_1e54f8:
    // 0x1e54f8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1e54fc: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x1E54FCu;
    SET_GPR_U32(ctx, 31, 0x1E5504u);
    ctx->pc = 0x1E5500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54FCu;
    // 0x1e5500: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x1E54FCu, 0x1E5504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5504u;
label_1e5504:
    // 0x1e5504: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5508: 0x8fb400d0  lw          $s4, 0xD0($sp)
    ctx->pc = 0x1e5508u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e550c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1e550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1e5510: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1e5510u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5514: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e5514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e5518: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1e5518u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e551c: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e5520: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x1e5520u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5524: 0x0  nop
    ctx->pc = 0x1e5524u;
    // NOP
label_1e5528:
    // 0x1e5528: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e5528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e552c: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x1E552Cu;
    SET_GPR_U32(ctx, 31, 0x1E5534u);
    ctx->pc = 0x1E5530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E552Cu;
    // 0x1e5530: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x1E552Cu, 0x1E5534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5534u;
label_1e5534:
    // 0x1e5534: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x1e5534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1e5538: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e5538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e553c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5540: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e5540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5544: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1e5544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5548: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1e5548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e554c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5550: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x1e5550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e5554: 0x27aa0110  addiu       $t2, $sp, 0x110
    ctx->pc = 0x1e5554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e5558: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1e5558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1e555c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e555cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5560: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e5564: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1e5564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e5568: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1e5568u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e556c: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x1e556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1e5570: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e5570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e5574: 0x864c000a  lh          $t4, 0xA($s2)
    ctx->pc = 0x1e5574u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1e5578: 0xc6110040  lwc1        $f17, 0x40($s0)
    ctx->pc = 0x1e5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1e557c: 0x864d0008  lh          $t5, 0x8($s2)
    ctx->pc = 0x1e557cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e5580: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x1e5580u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1e5584: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x1e5584u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e5588: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x1e5588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e558c: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x1e558cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5590: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x1e5590u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e5594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e5594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e5598: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1e5598u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e559c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e559cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e55a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e55a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e55a4: 0x0  nop
    ctx->pc = 0x1e55a4u;
    // NOP
    // 0x1e55a8: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x1e55a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e55ac: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1e55acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1e55b0: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1e55b0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e55b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e55b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e55b8: 0x0  nop
    ctx->pc = 0x1e55b8u;
    // NOP
    // 0x1e55bc: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1e55bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1e55c0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x1e55c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x1e55c4: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x1E55C4u;
    SET_GPR_U32(ctx, 31, 0x1E55CCu);
    ctx->pc = 0x1E55C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55C4u;
    // 0x1e55c8: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x1E55C4u, 0x1E55CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55CCu;
label_1e55cc:
    // 0x1e55cc: 0x0  nop
    ctx->pc = 0x1e55ccu;
    // NOP
label_1e55d0:
    // 0x1e55d0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1e55d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1e55d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e55d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1e55d8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1e55d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e55dc: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1E55DCu;
    {
        const bool branch_taken_0x1e55dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55DCu;
        // 0x1e55e0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55dc) {
            ctx->pc = 0x1E54B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e54b0;
        }
    }
    ctx->pc = 0x1E55E4u;
    // 0x1e55e4: 0x0  nop
    ctx->pc = 0x1e55e4u;
    // NOP
label_1e55e8:
    // 0x1e55e8: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x1E55E8u;
    SET_GPR_U32(ctx, 31, 0x1E55F0u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x1E55E8u, 0x1E55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55F0u;
label_1e55f0:
    // 0x1e55f0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e55f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e55f8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1e55f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1e55fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e5600: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1e5604: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1e5604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1e5608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5608u;
    {
        const bool branch_taken_0x1e5608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5608) {
            ctx->pc = 0x1E5618u;
            goto label_1e5618;
        }
    }
    ctx->pc = 0x1E5610u;
    // 0x1e5610: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E5610u;
    {
        const bool branch_taken_0x1e5610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5610u;
        // 0x1e5614: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5610) {
            ctx->pc = 0x1E5658u;
            goto label_1e5658;
        }
    }
    ctx->pc = 0x1E5618u;
label_1e5618:
    // 0x1e5618: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e5618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e561c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1e561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e5620: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e5620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e5624: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1E5624u;
    SET_GPR_U32(ctx, 31, 0x1E562Cu);
    ctx->pc = 0x1E5628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5624u;
    // 0x1e5628: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1E5624u, 0x1E562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E562Cu;
label_1e562c:
    // 0x1e562c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1e562cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e5630: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1E5630u;
    SET_GPR_U32(ctx, 31, 0x1E5638u);
    ctx->pc = 0x1E5634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5630u;
    // 0x1e5634: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1E5630u, 0x1E5638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5638u;
label_1e5638:
    // 0x1e5638: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x1e5638u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1e563c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1e563cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e5640: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1e5640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1e5644: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e5644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5648: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1E5648u;
    SET_GPR_U32(ctx, 31, 0x1E5650u);
    ctx->pc = 0x1E564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5648u;
    // 0x1e564c: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1E5648u, 0x1E5650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5650u;
label_1e5650:
    // 0x1e5650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e5650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5654: 0x0  nop
    ctx->pc = 0x1e5654u;
    // NOP
label_1e5658:
    // 0x1e5658: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e5658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e565c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e565cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5660: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e5660u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e5664: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e5664u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5668: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e5668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e566c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e566cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5670: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e567c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e567cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5680: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5680u;
        // 0x1e5684: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5688u;
}
