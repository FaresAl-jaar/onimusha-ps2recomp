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

// Function: sub_003522C0
// Address: 0x3522c0 - 0x35263c
void sub_003522C0_0x3522c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003522C0_0x3522c0");
#endif

    switch (ctx->pc) {
        case 0x352300u: goto label_352300;
        case 0x3523a8u: goto label_3523a8;
        case 0x352404u: goto label_352404;
        case 0x352454u: goto label_352454;
        case 0x352490u: goto label_352490;
        case 0x3524d0u: goto label_3524d0;
        case 0x3524e8u: goto label_3524e8;
        case 0x352528u: goto label_352528;
        case 0x3525bcu: goto label_3525bc;
        case 0x352618u: goto label_352618;
        default: break;
    }

    ctx->pc = 0x3522c0u;

    // 0x3522c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3522c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3522c4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3522c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3522c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3522c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3522cc: 0x24637c40  addiu       $v1, $v1, 0x7C40
    ctx->pc = 0x3522ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31808));
    // 0x3522d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3522d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3522d4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3522d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3522d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3522d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3522dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3522dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3522e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3522e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3522e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3522e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3522e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3522e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3522ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3522ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3522f0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3522f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3522f4: 0x64060018  daddiu      $a2, $zero, 0x18
    ctx->pc = 0x3522f4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
    // 0x3522f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3522f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3522fc: 0x0  nop
    ctx->pc = 0x3522fcu;
    // NOP
label_352300:
    // 0x352300: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x352300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x352304: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x352304u;
    {
        const bool branch_taken_0x352304 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x352304) {
            ctx->pc = 0x352310u;
            goto label_352310;
        }
    }
    ctx->pc = 0x35230Cu;
    // 0x35230c: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x35230cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_352310:
    // 0x352310: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x352310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x352314: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x352314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x352318: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x352318u;
    {
        const bool branch_taken_0x352318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352318u;
        // 0x35231c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352318) {
            ctx->pc = 0x352300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352300;
        }
    }
    ctx->pc = 0x352320u;
    // 0x352320: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x352320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x352324: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x352324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x352328: 0x2446ffe8  addiu       $a2, $v0, -0x18
    ctx->pc = 0x352328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x35232c: 0x5a43c  dsll32      $s4, $a1, 16
    ctx->pc = 0x35232cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) << (32 + 16));
    // 0x352330: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x352330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x352334: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x352334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x352338: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x352338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x35233c: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x35233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x352340: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x352340u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x352344: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x352344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x352348: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x352348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x35234c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35234cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352350: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x352350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x352354: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x352354u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x352358: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x352358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x35235c: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x35235cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x352360: 0x942585c0  lhu         $a1, -0x7A40($at)
    ctx->pc = 0x352360u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936000)));
    // 0x352364: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x352364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x352368: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x352368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x35236c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35236cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352370: 0x842285c2  lh          $v0, -0x7A3E($at)
    ctx->pc = 0x352370u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x6585C2u));
    // 0x352374: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352378: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x352378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x35237c: 0x902785c4  lbu         $a3, -0x7A3C($at)
    ctx->pc = 0x35237cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x6585C4u));
    // 0x352380: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352384: 0x902885c5  lbu         $t0, -0x7A3B($at)
    ctx->pc = 0x352384u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x6585C5u));
    // 0x352388: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35238c: 0x902985c6  lbu         $t1, -0x7A3A($at)
    ctx->pc = 0x35238cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x6585C6u));
    // 0x352390: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352394: 0x902a85c7  lbu         $t2, -0x7A39($at)
    ctx->pc = 0x352394u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x6585C7u));
    // 0x352398: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35239c: 0x902b85c8  lbu         $t3, -0x7A38($at)
    ctx->pc = 0x35239cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x6585C8u));
    // 0x3523a0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3523A0u;
    SET_GPR_U32(ctx, 31, 0x3523A8u);
    ctx->pc = 0x3523A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3523A0u;
    // 0x3523a4: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3523A0u, 0x3523A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523A8u;
label_3523a8:
    // 0x3523a8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3523a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3523ac: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x3523acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x3523b0: 0x24c685ca  addiu       $a2, $a2, -0x7A36
    ctx->pc = 0x3523b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936010));
    // 0x3523b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3523b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3523b8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x3523b8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x6585CAu));
    // 0x3523bc: 0xa7a20088  sh          $v0, 0x88($sp)
    ctx->pc = 0x3523bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x3523c0: 0x90c30007  lbu         $v1, 0x7($a2)
    ctx->pc = 0x3523c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6585D1u));
    // 0x3523c4: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x3523c4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x6585CCu));
    // 0x3523c8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3523c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3523cc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3523ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3523d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3523d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3523d4: 0xa7a2008a  sh          $v0, 0x8A($sp)
    ctx->pc = 0x3523d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 138), (uint16_t)GPR_U32(ctx, 2));
    // 0x3523d8: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x3523d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3523dc: 0xa3a2008c  sb          $v0, 0x8C($sp)
    ctx->pc = 0x3523dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x3523e0: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x3523e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3523e4: 0xa3a2008d  sb          $v0, 0x8D($sp)
    ctx->pc = 0x3523e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x3523e8: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x3523e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3523ec: 0xa3a2008e  sb          $v0, 0x8E($sp)
    ctx->pc = 0x3523ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 142), (uint8_t)GPR_U32(ctx, 2));
    // 0x3523f0: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x3523f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x3523f4: 0xa3a2008f  sb          $v0, 0x8F($sp)
    ctx->pc = 0x3523f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 143), (uint8_t)GPR_U32(ctx, 2));
    // 0x3523f8: 0x92a60004  lbu         $a2, 0x4($s5)
    ctx->pc = 0x3523f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3523fc: 0xc0ed754  jal         func_3B5D50
    ctx->pc = 0x3523FCu;
    SET_GPR_U32(ctx, 31, 0x352404u);
    ctx->pc = 0x352400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3523FCu;
    // 0x352400: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5D50u, 0x3523FCu, 0x352404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352404u;
label_352404:
    // 0x352404: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x352404u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x352408: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x352408u;
    {
        const bool branch_taken_0x352408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352408u;
        // 0x35240c: 0x267385d4  addiu       $s3, $s3, -0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352408) {
            ctx->pc = 0x352460u;
            goto label_352460;
        }
    }
    ctx->pc = 0x352410u;
    // 0x352410: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x352410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x352414: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x352414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x352418: 0x2442f848  addiu       $v0, $v0, -0x7B8
    ctx->pc = 0x352418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965320));
    // 0x35241c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x35241cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x352420: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x352420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x352424: 0x92a2005c  lbu         $v0, 0x5C($s5)
    ctx->pc = 0x352424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x352428: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x352428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x35242c: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x35242cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x352430: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x352430u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x352434: 0x92670004  lbu         $a3, 0x4($s3)
    ctx->pc = 0x352434u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x352438: 0x92680005  lbu         $t0, 0x5($s3)
    ctx->pc = 0x352438u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x35243c: 0x92690006  lbu         $t1, 0x6($s3)
    ctx->pc = 0x35243cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x352440: 0x926a0007  lbu         $t2, 0x7($s3)
    ctx->pc = 0x352440u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x352444: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x352444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x352448: 0x926b0008  lbu         $t3, 0x8($s3)
    ctx->pc = 0x352448u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x35244c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x35244Cu;
    SET_GPR_U32(ctx, 31, 0x352454u);
    ctx->pc = 0x352450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35244Cu;
    // 0x352450: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x35244Cu, 0x352454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352454u;
label_352454:
    // 0x352454: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x352454u;
    {
        const bool branch_taken_0x352454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352454) {
            ctx->pc = 0x3524D0u;
            goto label_3524d0;
        }
    }
    ctx->pc = 0x35245Cu;
    // 0x35245c: 0x0  nop
    ctx->pc = 0x35245cu;
    // NOP
label_352460:
    // 0x352460: 0x92a60004  lbu         $a2, 0x4($s5)
    ctx->pc = 0x352460u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x352464: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x352464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x352468: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x352468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x35246c: 0x24630d04  addiu       $v1, $v1, 0xD04
    ctx->pc = 0x35246cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3332));
    // 0x352470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x352470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352474: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x352474u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x352478: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x352478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x35247c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x35247cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x352480: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x352480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x352484: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352488: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x352488u;
    SET_GPR_U32(ctx, 31, 0x352490u);
    ctx->pc = 0x35248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352488u;
    // 0x35248c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x352488u, 0x352490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352490u;
label_352490:
    // 0x352490: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x352490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x352494: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x352494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x352498: 0x2463f848  addiu       $v1, $v1, -0x7B8
    ctx->pc = 0x352498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965320));
    // 0x35249c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x35249cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3524a0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3524a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3524a4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3524a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3524a8: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x3524a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3524ac: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x3524acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3524b0: 0x92670004  lbu         $a3, 0x4($s3)
    ctx->pc = 0x3524b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3524b4: 0x92680005  lbu         $t0, 0x5($s3)
    ctx->pc = 0x3524b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x3524b8: 0x92690006  lbu         $t1, 0x6($s3)
    ctx->pc = 0x3524b8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x3524bc: 0x926a0007  lbu         $t2, 0x7($s3)
    ctx->pc = 0x3524bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x3524c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3524c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3524c4: 0x926b0008  lbu         $t3, 0x8($s3)
    ctx->pc = 0x3524c4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3524c8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3524C8u;
    SET_GPR_U32(ctx, 31, 0x3524D0u);
    ctx->pc = 0x3524CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3524C8u;
    // 0x3524cc: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3524C8u, 0x3524D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3524D0u;
label_3524d0:
    // 0x3524d0: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3524D0u;
    {
        const bool branch_taken_0x3524d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3524d0) {
            ctx->pc = 0x352538u;
            goto label_352538;
        }
    }
    ctx->pc = 0x3524D8u;
    // 0x3524d8: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3524d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3524dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3524dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3524e0: 0x263182f0  addiu       $s1, $s1, -0x7D10
    ctx->pc = 0x3524e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935280));
    // 0x3524e4: 0x0  nop
    ctx->pc = 0x3524e4u;
    // NOP
label_3524e8:
    // 0x3524e8: 0x92220015  lbu         $v0, 0x15($s1)
    ctx->pc = 0x3524e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x3524ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3524ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3524f0: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x3524f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x3524f4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3524f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3524f8: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x3524f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3524fc: 0x922b0014  lbu         $t3, 0x14($s1)
    ctx->pc = 0x3524fcu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x352500: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x352500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x352504: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x352504u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x352508: 0x8627000a  lh          $a3, 0xA($s1)
    ctx->pc = 0x352508u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x35250c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x35250cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x352510: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x352510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x352514: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x352514u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x352518: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x352518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35251c: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x35251cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x352520: 0xc0d471c  jal         func_351C70
    ctx->pc = 0x352520u;
    SET_GPR_U32(ctx, 31, 0x352528u);
    ctx->pc = 0x352524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352520u;
    // 0x352524: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C70u, 0x352520u, 0x352528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352528u;
label_352528:
    // 0x352528: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x352528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35252c: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x35252cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x352530: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x352530u;
    {
        const bool branch_taken_0x352530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352530u;
        // 0x352534: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352530) {
            ctx->pc = 0x3524E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3524e8;
        }
    }
    ctx->pc = 0x352538u;
label_352538:
    // 0x352538: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x352538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x35253c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x35253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x352540: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x352540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x352544: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x352544u;
    {
        const bool branch_taken_0x352544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352544u;
        // 0x352548: 0x3c010103  lui         $at, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)259 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352544) {
            ctx->pc = 0x3525C0u;
            goto label_3525c0;
        }
    }
    ctx->pc = 0x35254Cu;
    // 0x35254c: 0x3421000f  ori         $at, $at, 0xF
    ctx->pc = 0x35254cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15);
    // 0x352550: 0x241082b  sltu        $at, $s2, $at
    ctx->pc = 0x352550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x352554: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x352554u;
    {
        const bool branch_taken_0x352554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x352558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352554u;
        // 0x352558: 0x3c03fefc  lui         $v1, 0xFEFC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65276 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352554) {
            ctx->pc = 0x3525C0u;
            goto label_3525c0;
        }
    }
    ctx->pc = 0x35255Cu;
    // 0x35255c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x352560: 0x3463fff6  ori         $v1, $v1, 0xFFF6
    ctx->pc = 0x352560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65526);
    // 0x352564: 0x244282f0  addiu       $v0, $v0, -0x7D10
    ctx->pc = 0x352564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935280));
    // 0x352568: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x352568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x35256c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x35256cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x352570: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x352570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x352574: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x352574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x352578: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x352578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35257c: 0x9062008d  lbu         $v0, 0x8D($v1)
    ctx->pc = 0x35257cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
    // 0x352580: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x352580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x352584: 0x9062008e  lbu         $v0, 0x8E($v1)
    ctx->pc = 0x352584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 142)));
    // 0x352588: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x352588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x35258c: 0x8462007e  lh          $v0, 0x7E($v1)
    ctx->pc = 0x35258cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x352590: 0x906b008c  lbu         $t3, 0x8C($v1)
    ctx->pc = 0x352590u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x352594: 0x8464007c  lh          $a0, 0x7C($v1)
    ctx->pc = 0x352594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x352598: 0x84660080  lh          $a2, 0x80($v1)
    ctx->pc = 0x352598u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x35259c: 0x84670082  lh          $a3, 0x82($v1)
    ctx->pc = 0x35259cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x3525a0: 0x8c680078  lw          $t0, 0x78($v1)
    ctx->pc = 0x3525a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x3525a4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3525a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3525a8: 0x8c690084  lw          $t1, 0x84($v1)
    ctx->pc = 0x3525a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x3525ac: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3525acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3525b0: 0x8c6a0088  lw          $t2, 0x88($v1)
    ctx->pc = 0x3525b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x3525b4: 0xc0d471c  jal         func_351C70
    ctx->pc = 0x3525B4u;
    SET_GPR_U32(ctx, 31, 0x3525BCu);
    ctx->pc = 0x3525B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3525B4u;
    // 0x3525b8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C70u, 0x3525B4u, 0x3525BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3525BCu;
label_3525bc:
    // 0x3525bc: 0x0  nop
    ctx->pc = 0x3525bcu;
    // NOP
label_3525c0:
    // 0x3525c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3525C0u;
    {
        const bool branch_taken_0x3525c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3525C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525C0u;
        // 0x3525c4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3525c0) {
            ctx->pc = 0x3525D4u;
            goto label_3525d4;
        }
    }
    ctx->pc = 0x3525C8u;
    // 0x3525c8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3525c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3525cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3525CCu;
    {
        const bool branch_taken_0x3525cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3525D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525CCu;
        // 0x3525d0: 0x24638350  addiu       $v1, $v1, -0x7CB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3525cc) {
            ctx->pc = 0x3525D8u;
            goto label_3525d8;
        }
    }
    ctx->pc = 0x3525D4u;
label_3525d4:
    // 0x3525d4: 0x24638338  addiu       $v1, $v1, -0x7CC8
    ctx->pc = 0x3525d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935352));
label_3525d8:
    // 0x3525d8: 0x90620015  lbu         $v0, 0x15($v1)
    ctx->pc = 0x3525d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
    // 0x3525dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3525dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3525e0: 0x90620016  lbu         $v0, 0x16($v1)
    ctx->pc = 0x3525e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x3525e4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3525e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3525e8: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x3525e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3525ec: 0x906b0014  lbu         $t3, 0x14($v1)
    ctx->pc = 0x3525ecu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3525f0: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x3525f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3525f4: 0x84660008  lh          $a2, 0x8($v1)
    ctx->pc = 0x3525f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3525f8: 0x8467000a  lh          $a3, 0xA($v1)
    ctx->pc = 0x3525f8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x3525fc: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x3525fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352600: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x352600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x352604: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x352604u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x352608: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x352608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35260c: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x35260cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x352610: 0xc0d471c  jal         func_351C70
    ctx->pc = 0x352610u;
    SET_GPR_U32(ctx, 31, 0x352618u);
    ctx->pc = 0x352614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352610u;
    // 0x352614: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C70u, 0x352610u, 0x352618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352618u;
label_352618:
    // 0x352618: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x352618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35261c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35261cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x352620: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x352620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x352624: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x352624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x352628: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x352628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35262c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35262cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352630: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x352630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352634: 0x3e00008  jr          $ra
    ctx->pc = 0x352634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352634u;
        // 0x352638: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35263Cu;
}
