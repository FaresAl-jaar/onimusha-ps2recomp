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

// Function: sub_00382810
// Address: 0x382810 - 0x3829f0
void sub_00382810_0x382810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382810_0x382810");
#endif

    switch (ctx->pc) {
        case 0x38284cu: goto label_38284c;
        case 0x382860u: goto label_382860;
        case 0x3828a4u: goto label_3828a4;
        case 0x3828b4u: goto label_3828b4;
        case 0x3828c8u: goto label_3828c8;
        case 0x382908u: goto label_382908;
        case 0x382948u: goto label_382948;
        case 0x382960u: goto label_382960;
        case 0x382970u: goto label_382970;
        default: break;
    }

    ctx->pc = 0x382810u;

    // 0x382810: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x382810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x382814: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x382814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x382818: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x382818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x38281c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x38281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x382820: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x382820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x382824: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x382824u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382828: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x382828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x38282c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x38282cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382830: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x382830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x382834: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x382834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x382838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38283c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x382840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x382844: 0xc0e0f00  jal         func_383C00
    ctx->pc = 0x382844u;
    SET_GPR_U32(ctx, 31, 0x38284Cu);
    ctx->pc = 0x382848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382844u;
    // 0x382848: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C00u, 0x382844u, 0x38284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38284Cu;
label_38284c:
    // 0x38284c: 0x92e301f0  lbu         $v1, 0x1F0($s7)
    ctx->pc = 0x38284cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 496)));
    // 0x382850: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x382850u;
    {
        const bool branch_taken_0x382850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382850u;
        // 0x382854: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382850) {
            ctx->pc = 0x3829C0u;
            goto label_3829c0;
        }
    }
    ctx->pc = 0x382858u;
    // 0x382858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x382858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38285c: 0x24841760  addiu       $a0, $a0, 0x1760
    ctx->pc = 0x38285cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
label_382860:
    // 0x382860: 0x10970005  beq         $a0, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x382860u;
    {
        const bool branch_taken_0x382860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 23));
        ctx->pc = 0x382864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382860u;
        // 0x382864: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382860) {
            ctx->pc = 0x382878u;
            goto label_382878;
        }
    }
    ctx->pc = 0x382868u;
    // 0x382868: 0x908301f0  lbu         $v1, 0x1F0($a0)
    ctx->pc = 0x382868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x38286c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x38286Cu;
    {
        const bool branch_taken_0x38286c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38286c) {
            ctx->pc = 0x382890u;
            goto label_382890;
        }
    }
    ctx->pc = 0x382874u;
    // 0x382874: 0x0  nop
    ctx->pc = 0x382874u;
    // NOP
label_382878:
    // 0x382878: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x382878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38287c: 0x28a30005  slti        $v1, $a1, 0x5
    ctx->pc = 0x38287cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x382880: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x382880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x382884: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x382884u;
    {
        const bool branch_taken_0x382884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382884u;
        // 0x382888: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382884) {
            ctx->pc = 0x382860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382860;
        }
    }
    ctx->pc = 0x38288Cu;
    // 0x38288c: 0x0  nop
    ctx->pc = 0x38288cu;
    // NOP
label_382890:
    // 0x382890: 0x1280004b  beqz        $s4, . + 4 + (0x4B << 2)
    ctx->pc = 0x382890u;
    {
        const bool branch_taken_0x382890 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x382894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382890u;
        // 0x382894: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382890) {
            ctx->pc = 0x3829C0u;
            goto label_3829c0;
        }
    }
    ctx->pc = 0x382898u;
    // 0x382898: 0x26e50008  addiu       $a1, $s7, 0x8
    ctx->pc = 0x382898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x38289c: 0xc049522  jal         func_125488
    ctx->pc = 0x38289Cu;
    SET_GPR_U32(ctx, 31, 0x3828A4u);
    ctx->pc = 0x3828A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38289Cu;
    // 0x3828a0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x38289Cu, 0x3828A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3828A4u;
label_3828a4:
    // 0x3828a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3828a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3828a8: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x3828a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3828ac: 0xc049522  jal         func_125488
    ctx->pc = 0x3828ACu;
    SET_GPR_U32(ctx, 31, 0x3828B4u);
    ctx->pc = 0x3828B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3828ACu;
    // 0x3828b0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3828ACu, 0x3828B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3828B4u;
label_3828b4:
    // 0x3828b4: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x3828b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3828b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3828b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3828bc: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x3828bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3828c0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3828c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3828c4: 0x0  nop
    ctx->pc = 0x3828c4u;
    // NOP
label_3828c8:
    // 0x3828c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3828c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3828cc: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3828CCu;
    {
        const bool branch_taken_0x3828cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3828cc) {
            ctx->pc = 0x3829A8u;
            goto label_3829a8;
        }
    }
    ctx->pc = 0x3828D4u;
    // 0x3828d4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3828D4u;
    {
        const bool branch_taken_0x3828d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3828d4) {
            ctx->pc = 0x3828E8u;
            goto label_3828e8;
        }
    }
    ctx->pc = 0x3828DCu;
    // 0x3828dc: 0x14760032  bne         $v1, $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x3828DCu;
    {
        const bool branch_taken_0x3828dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x3828dc) {
            ctx->pc = 0x3829A8u;
            goto label_3829a8;
        }
    }
    ctx->pc = 0x3828E4u;
    // 0x3828e4: 0x0  nop
    ctx->pc = 0x3828e4u;
    // NOP
label_3828e8:
    // 0x3828e8: 0x90640010  lbu         $a0, 0x10($v1)
    ctx->pc = 0x3828e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3828ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3828ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3828f0: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3828F0u;
    {
        const bool branch_taken_0x3828f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3828f0) {
            ctx->pc = 0x3829A8u;
            goto label_3829a8;
        }
    }
    ctx->pc = 0x3828F8u;
    // 0x3828f8: 0x8e130008  lw          $s3, 0x8($s0)
    ctx->pc = 0x3828f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3828fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3828fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382900: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x382900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382904: 0x0  nop
    ctx->pc = 0x382904u;
    // NOP
label_382908:
    // 0x382908: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x382908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38290c: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x38290Cu;
    {
        const bool branch_taken_0x38290c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x38290c) {
            ctx->pc = 0x382928u;
            goto label_382928;
        }
    }
    ctx->pc = 0x382914u;
    // 0x382914: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x382914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x382918: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x382918u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x38291c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38291Cu;
    {
        const bool branch_taken_0x38291c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38291Cu;
        // 0x382920: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38291c) {
            ctx->pc = 0x382908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382908;
        }
    }
    ctx->pc = 0x382924u;
    // 0x382924: 0x0  nop
    ctx->pc = 0x382924u;
    // NOP
label_382928:
    // 0x382928: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x382928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38292c: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x38292Cu;
    {
        const bool branch_taken_0x38292c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x382930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38292Cu;
        // 0x382930: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38292c) {
            ctx->pc = 0x382960u;
            goto label_382960;
        }
    }
    ctx->pc = 0x382934u;
    // 0x382934: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x382934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x382938: 0x55300a  movz        $a2, $v0, $s5
    ctx->pc = 0x382938u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38293c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x38293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382940: 0xc0e0bd4  jal         func_382F50
    ctx->pc = 0x382940u;
    SET_GPR_U32(ctx, 31, 0x382948u);
    ctx->pc = 0x382944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382940u;
    // 0x382944: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382F50u, 0x382940u, 0x382948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382948u;
label_382948:
    // 0x382948: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x382948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38294c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x38294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x382950: 0x55300a  movz        $a2, $v0, $s5
    ctx->pc = 0x382950u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x382954: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x382954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382958: 0xc0e0bd4  jal         func_382F50
    ctx->pc = 0x382958u;
    SET_GPR_U32(ctx, 31, 0x382960u);
    ctx->pc = 0x38295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382958u;
    // 0x38295c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382F50u, 0x382958u, 0x382960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382960u;
label_382960:
    // 0x382960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x382960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382964: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x382964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382968: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x382968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x38296c: 0x0  nop
    ctx->pc = 0x38296cu;
    // NOP
label_382970:
    // 0x382970: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x382970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x382974: 0x14730002  bne         $v1, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x382974u;
    {
        const bool branch_taken_0x382974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x382974) {
            ctx->pc = 0x382980u;
            goto label_382980;
        }
    }
    ctx->pc = 0x38297Cu;
    // 0x38297c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x38297cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_382980:
    // 0x382980: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x382980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x382984: 0x14730002  bne         $v1, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x382984u;
    {
        const bool branch_taken_0x382984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x382984) {
            ctx->pc = 0x382990u;
            goto label_382990;
        }
    }
    ctx->pc = 0x38298Cu;
    // 0x38298c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x38298cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_382990:
    // 0x382990: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x382990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x382994: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x382994u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x382998: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x382998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x38299c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x38299Cu;
    {
        const bool branch_taken_0x38299c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3829A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38299Cu;
        // 0x3829a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38299c) {
            ctx->pc = 0x382970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382970;
        }
    }
    ctx->pc = 0x3829A4u;
    // 0x3829a4: 0x0  nop
    ctx->pc = 0x3829a4u;
    // NOP
label_3829a8:
    // 0x3829a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3829a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3829ac: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x3829acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3829b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3829b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3829b4: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3829B4u;
    {
        const bool branch_taken_0x3829b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3829B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829B4u;
        // 0x3829b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3829b4) {
            ctx->pc = 0x3828C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3828c8;
        }
    }
    ctx->pc = 0x3829BCu;
    // 0x3829bc: 0x0  nop
    ctx->pc = 0x3829bcu;
    // NOP
label_3829c0:
    // 0x3829c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3829c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3829c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3829c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3829c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3829c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3829cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3829ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3829d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3829d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3829d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3829d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3829d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3829d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3829dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3829dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3829e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3829e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3829e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3829e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3829e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3829E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3829ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829E8u;
        // 0x3829ec: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3829E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3829F0u;
}
