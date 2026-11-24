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

// Function: sub_003E5360
// Address: 0x3e5360 - 0x3e54b0
void sub_003E5360_0x3e5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5360_0x3e5360");
#endif

    switch (ctx->pc) {
        case 0x3e53a8u: goto label_3e53a8;
        case 0x3e53b4u: goto label_3e53b4;
        case 0x3e5450u: goto label_3e5450;
        case 0x3e5484u: goto label_3e5484;
        default: break;
    }

    ctx->pc = 0x3e5360u;

    // 0x3e5360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e5360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e5364: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3e5364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e5368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e5368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e536c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e5370: 0x90850080  lbu         $a1, 0x80($a0)
    ctx->pc = 0x3e5370u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3e5374: 0x10a7004a  beq         $a1, $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x3E5374u;
    {
        const bool branch_taken_0x3e5374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x3E5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5374u;
        // 0x3e5378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5374) {
            ctx->pc = 0x3E54A0u;
            goto label_3e54a0;
        }
    }
    ctx->pc = 0x3E537Cu;
    // 0x3e537c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5380: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E5380u;
    {
        const bool branch_taken_0x3e5380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5380u;
        // 0x3e5384: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5380) {
            ctx->pc = 0x3E53E0u;
            goto label_3e53e0;
        }
    }
    ctx->pc = 0x3E5388u;
    // 0x3e5388: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E5388u;
    {
        const bool branch_taken_0x3e5388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e5388) {
            ctx->pc = 0x3E53A0u;
            goto label_3e53a0;
        }
    }
    ctx->pc = 0x3E5390u;
    // 0x3e5390: 0x10a00043  beqz        $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x3E5390u;
    {
        const bool branch_taken_0x3e5390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5390) {
            ctx->pc = 0x3E54A0u;
            goto label_3e54a0;
        }
    }
    ctx->pc = 0x3E5398u;
    // 0x3e5398: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3E5398u;
    {
        const bool branch_taken_0x3e5398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5398) {
            ctx->pc = 0x3E54A0u;
            goto label_3e54a0;
        }
    }
    ctx->pc = 0x3E53A0u;
label_3e53a0:
    // 0x3e53a0: 0xc0f936c  jal         func_3E4DB0
    ctx->pc = 0x3E53A0u;
    SET_GPR_U32(ctx, 31, 0x3E53A8u);
    ctx->pc = 0x3E53A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E53A0u;
    // 0x3e53a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4DB0u, 0x3E53A0u, 0x3E53A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E53A8u;
label_3e53a8:
    // 0x3e53a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e53a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e53ac: 0xc0f936c  jal         func_3E4DB0
    ctx->pc = 0x3E53ACu;
    SET_GPR_U32(ctx, 31, 0x3E53B4u);
    ctx->pc = 0x3E53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E53ACu;
    // 0x3e53b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4DB0u, 0x3E53ACu, 0x3E53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E53B4u;
label_3e53b4:
    // 0x3e53b4: 0x92030079  lbu         $v1, 0x79($s0)
    ctx->pc = 0x3e53b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 121)));
    // 0x3e53b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3e53b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e53bc: 0x14640038  bne         $v1, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3E53BCu;
    {
        const bool branch_taken_0x3e53bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e53bc) {
            ctx->pc = 0x3E54A0u;
            goto label_3e54a0;
        }
    }
    ctx->pc = 0x3E53C4u;
    // 0x3e53c4: 0x9203007d  lbu         $v1, 0x7D($s0)
    ctx->pc = 0x3e53c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 125)));
    // 0x3e53c8: 0x14640035  bne         $v1, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3E53C8u;
    {
        const bool branch_taken_0x3e53c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e53c8) {
            ctx->pc = 0x3E54A0u;
            goto label_3e54a0;
        }
    }
    ctx->pc = 0x3E53D0u;
    // 0x3e53d0: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x3e53d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x3e53d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3E53D4u;
    {
        const bool branch_taken_0x3e53d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E53D4u;
        // 0x3e53d8: 0xa2040080  sb          $a0, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e53d4) {
            ctx->pc = 0x3E54A0u;
            goto label_3e54a0;
        }
    }
    ctx->pc = 0x3E53DCu;
    // 0x3e53dc: 0x0  nop
    ctx->pc = 0x3e53dcu;
    // NOP
label_3e53e0:
    // 0x3e53e0: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x3e53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x3e53e4: 0x2c610021  sltiu       $at, $v1, 0x21
    ctx->pc = 0x3e53e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x3e53e8: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x3E53E8u;
    {
        const bool branch_taken_0x3e53e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E53E8u;
        // 0x3e53ec: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e53e8) {
            ctx->pc = 0x3E5498u;
            goto label_3e5498;
        }
    }
    ctx->pc = 0x3E53F0u;
    // 0x3e53f0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e53f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3e53f4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3e53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x3e53f8: 0x24c6fa88  addiu       $a2, $a2, -0x578
    ctx->pc = 0x3e53f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965896));
    // 0x3e53fc: 0x24020349  addiu       $v0, $zero, 0x349
    ctx->pc = 0x3e53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 841));
    // 0x3e5400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e5400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5404: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e5404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e5408: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e5408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e540c: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3e540cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3e5410: 0x8203007b  lb          $v1, 0x7B($s0)
    ctx->pc = 0x3e5410u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 123)));
    // 0x3e5414: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3e5414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3e5418: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3e5418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3e541c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3e541cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e5420: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e5424: 0xa3838a58  sb          $v1, -0x75A8($gp)
    ctx->pc = 0x3e5424u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937176), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e5428: 0x8203007f  lb          $v1, 0x7F($s0)
    ctx->pc = 0x3e5428u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 127)));
    // 0x3e542c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3e542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3e5430: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3e5430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e5434: 0xa4226ace  sh          $v0, 0x6ACE($at)
    ctx->pc = 0x3e5434u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6ACEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6ACEu, _value); } while (0);
    // 0x3e5438: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3e5438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e543c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3e543cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3e5440: 0xa3828a59  sb          $v0, -0x75A7($gp)
    ctx->pc = 0x3e5440u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937177), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e5444: 0xa0206ad0  sb          $zero, 0x6AD0($at)
    ctx->pc = 0x3e5444u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6AD0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AD0u, _value); } while (0);
    // 0x3e5448: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E5448u;
    SET_GPR_U32(ctx, 31, 0x3E5450u);
    ctx->pc = 0x3E544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5448u;
    // 0x3e544c: 0xa2070080  sb          $a3, 0x80($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E5448u, 0x3E5450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5450u;
label_3e5450:
    // 0x3e5450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e5454: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e5454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e5458: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e5458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e545c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e5460: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3e5460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3e5464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e5464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5468: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e5468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e546c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e546cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5470: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e5470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e5474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5478: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e5478u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e547c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E547Cu;
    SET_GPR_U32(ctx, 31, 0x3E5484u);
    ctx->pc = 0x3E5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E547Cu;
    // 0x3e5480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E547Cu, 0x3E5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5484u;
label_3e5484:
    // 0x3e5484: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3e5484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e5488: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e548c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E548Cu;
    {
        const bool branch_taken_0x3e548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E548Cu;
        // 0x3e5490: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e548c) {
            ctx->pc = 0x3E54A0u;
            goto label_3e54a0;
        }
    }
    ctx->pc = 0x3E5494u;
    // 0x3e5494: 0x0  nop
    ctx->pc = 0x3e5494u;
    // NOP
label_3e5498:
    // 0x3e5498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e5498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e549c: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x3e549cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_3e54a0:
    // 0x3e54a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e54a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e54a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e54a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e54a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E54A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E54A8u;
        // 0x3e54ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E54A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E54B0u;
}
