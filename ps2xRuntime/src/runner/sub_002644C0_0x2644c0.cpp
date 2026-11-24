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

// Function: sub_002644C0
// Address: 0x2644c0 - 0x264644
void sub_002644C0_0x2644c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002644C0_0x2644c0");
#endif

    switch (ctx->pc) {
        case 0x264504u: goto label_264504;
        case 0x264530u: goto label_264530;
        case 0x264580u: goto label_264580;
        case 0x2645a0u: goto label_2645a0;
        case 0x2645c4u: goto label_2645c4;
        case 0x2645e0u: goto label_2645e0;
        case 0x264600u: goto label_264600;
        case 0x264620u: goto label_264620;
        default: break;
    }

    ctx->pc = 0x2644c0u;

    // 0x2644c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2644c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2644c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2644c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2644c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2644c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2644cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2644ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2644d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2644d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2644d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2644d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2644d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2644d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2644dc: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x2644dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2644e0: 0xfc800020  sd          $zero, 0x20($a0)
    ctx->pc = 0x2644e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
    // 0x2644e4: 0xfc800028  sd          $zero, 0x28($a0)
    ctx->pc = 0x2644e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 0));
    // 0x2644e8: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x2644e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x2644ec: 0x90820015  lbu         $v0, 0x15($a0)
    ctx->pc = 0x2644ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x2644f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2644f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2644f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2644F4u;
    {
        const bool branch_taken_0x2644f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2644F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644F4u;
        // 0x2644f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644f4) {
            ctx->pc = 0x264508u;
            goto label_264508;
        }
    }
    ctx->pc = 0x2644FCu;
    // 0x2644fc: 0xc0b2bb4  jal         func_2CAED0
    ctx->pc = 0x2644FCu;
    SET_GPR_U32(ctx, 31, 0x264504u);
    ctx->pc = 0x264500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2644FCu;
    // 0x264500: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAED0u, 0x2644FCu, 0x264504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264504u;
label_264504:
    // 0x264504: 0x0  nop
    ctx->pc = 0x264504u;
    // NOP
label_264508:
    // 0x264508: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x264508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x26450c: 0x92030162  lbu         $v1, 0x162($s0)
    ctx->pc = 0x26450cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x264510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x264510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264514: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264514u;
    {
        const bool branch_taken_0x264514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x264514) {
            ctx->pc = 0x264520u;
            goto label_264520;
        }
    }
    ctx->pc = 0x26451Cu;
    // 0x26451c: 0xa2000164  sb          $zero, 0x164($s0)
    ctx->pc = 0x26451cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 356), (uint8_t)GPR_U32(ctx, 0));
label_264520:
    // 0x264520: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x264520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264524: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x264524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x264528: 0xc0b2860  jal         func_2CA180
    ctx->pc = 0x264528u;
    SET_GPR_U32(ctx, 31, 0x264530u);
    ctx->pc = 0x26452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264528u;
    // 0x26452c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA180u, 0x264528u, 0x264530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264530u;
label_264530:
    // 0x264530: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x264530u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x264534: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x264534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x264538: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x264538u;
    {
        const bool branch_taken_0x264538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264538) {
            ctx->pc = 0x264628u;
            goto label_264628;
        }
    }
    ctx->pc = 0x264540u;
    // 0x264540: 0x9204000e  lbu         $a0, 0xE($s0)
    ctx->pc = 0x264540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x264544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x264544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264548: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x264548u;
    {
        const bool branch_taken_0x264548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264548u;
        // 0x26454c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264548) {
            ctx->pc = 0x2645E8u;
            goto label_2645e8;
        }
    }
    ctx->pc = 0x264550u;
    // 0x264550: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x264550u;
    {
        const bool branch_taken_0x264550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264550) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264558u;
    // 0x264558: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264558u;
    {
        const bool branch_taken_0x264558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264558) {
            ctx->pc = 0x264568u;
            goto label_264568;
        }
    }
    ctx->pc = 0x264560u;
    // 0x264560: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x264560u;
    {
        const bool branch_taken_0x264560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264560) {
            ctx->pc = 0x264630u;
            goto label_264630;
        }
    }
    ctx->pc = 0x264568u;
label_264568:
    // 0x264568: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x264568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26456c: 0x8782885c  lh          $v0, -0x77A4($gp)
    ctx->pc = 0x26456cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936668)));
    // 0x264570: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x264570u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264574: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x264574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x264578: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x264578u;
    SET_GPR_U32(ctx, 31, 0x264580u);
    ctx->pc = 0x26457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264578u;
    // 0x26457c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x264578u, 0x264580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264580u;
label_264580:
    // 0x264580: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x264580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x264584: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x264584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x264588: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x264588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26458c: 0x846300c2  lh          $v1, 0xC2($v1)
    ctx->pc = 0x26458cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x264590: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x264590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264594: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x264594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x264598: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x264598u;
    SET_GPR_U32(ctx, 31, 0x2645A0u);
    ctx->pc = 0x26459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264598u;
    // 0x26459c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x264598u, 0x2645A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645A0u;
label_2645a0:
    // 0x2645a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2645A0u;
    {
        const bool branch_taken_0x2645a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645A0u;
        // 0x2645a4: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645a0) {
            ctx->pc = 0x264630u;
            goto label_264630;
        }
    }
    ctx->pc = 0x2645A8u;
label_2645a8:
    // 0x2645a8: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x2645a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x2645ac: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x2645acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2645b0: 0x846300c2  lh          $v1, 0xC2($v1)
    ctx->pc = 0x2645b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x2645b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2645b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2645b8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2645b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2645bc: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2645BCu;
    SET_GPR_U32(ctx, 31, 0x2645C4u);
    ctx->pc = 0x2645C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2645BCu;
    // 0x2645c0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2645BCu, 0x2645C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645C4u;
label_2645c4:
    // 0x2645c4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2645c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2645c8: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x2645c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2645cc: 0x8782885c  lh          $v0, -0x77A4($gp)
    ctx->pc = 0x2645ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936668)));
    // 0x2645d0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2645d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2645d4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2645d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2645d8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2645D8u;
    SET_GPR_U32(ctx, 31, 0x2645E0u);
    ctx->pc = 0x2645DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2645D8u;
    // 0x2645dc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2645D8u, 0x2645E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2645E0u;
label_2645e0:
    // 0x2645e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2645E0u;
    {
        const bool branch_taken_0x2645e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645E0u;
        // 0x2645e4: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645e0) {
            ctx->pc = 0x264630u;
            goto label_264630;
        }
    }
    ctx->pc = 0x2645E8u;
label_2645e8:
    // 0x2645e8: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x2645e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2645ec: 0x8782885c  lh          $v0, -0x77A4($gp)
    ctx->pc = 0x2645ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936668)));
    // 0x2645f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2645f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2645f4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2645f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2645f8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2645F8u;
    SET_GPR_U32(ctx, 31, 0x264600u);
    ctx->pc = 0x2645FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2645F8u;
    // 0x2645fc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2645F8u, 0x264600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264600u;
label_264600:
    // 0x264600: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x264600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x264604: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x264604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x264608: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x264608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26460c: 0x846300c2  lh          $v1, 0xC2($v1)
    ctx->pc = 0x26460cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x264610: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x264610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264614: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x264614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x264618: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x264618u;
    SET_GPR_U32(ctx, 31, 0x264620u);
    ctx->pc = 0x26461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264618u;
    // 0x26461c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x264618u, 0x264620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264620u;
label_264620:
    // 0x264620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264620u;
    {
        const bool branch_taken_0x264620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264620u;
        // 0x264624: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264620) {
            ctx->pc = 0x264630u;
            goto label_264630;
        }
    }
    ctx->pc = 0x264628u;
label_264628:
    // 0x264628: 0x34830800  ori         $v1, $a0, 0x800
    ctx->pc = 0x264628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x26462c: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x26462cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
label_264630:
    // 0x264630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x264630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26463c: 0x3e00008  jr          $ra
    ctx->pc = 0x26463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26463Cu;
        // 0x264640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264644u;
}
