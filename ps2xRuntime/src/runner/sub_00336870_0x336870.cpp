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

// Function: sub_00336870
// Address: 0x336870 - 0x3369a0
void sub_00336870_0x336870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336870_0x336870");
#endif

    switch (ctx->pc) {
        case 0x3368b0u: goto label_3368b0;
        case 0x3368f4u: goto label_3368f4;
        default: break;
    }

    ctx->pc = 0x336870u;

    // 0x336870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x336870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x336874: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x336874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x336878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x336878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33687c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x33687cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x336880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336884: 0x246315bd  addiu       $v1, $v1, 0x15BD
    ctx->pc = 0x336884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5565));
    // 0x336888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33688c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336890: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x336890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336894: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x336894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336898: 0x8025172e  lb          $a1, 0x172E($at)
    ctx->pc = 0x336898u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x92172Eu));
    // 0x33689c: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x33689cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3368a0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x3368a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3368a4: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x3368a4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3368a8: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x3368A8u;
    SET_GPR_U32(ctx, 31, 0x3368B0u);
    ctx->pc = 0x3368ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3368A8u;
    // 0x3368ac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x3368A8u, 0x3368B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3368B0u;
label_3368b0:
    // 0x3368b0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3368b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3368b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3368b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3368b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3368B8u;
    {
        const bool branch_taken_0x3368b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3368b8) {
            ctx->pc = 0x3368E0u;
            goto label_3368e0;
        }
    }
    ctx->pc = 0x3368C0u;
    // 0x3368c0: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x3368c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3368c4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x3368c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3368c8: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x3368c8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x3368cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3368ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3368d0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3368d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3368d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3368d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3368d8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3368D8u;
    {
        const bool branch_taken_0x3368d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368D8u;
        // 0x3368dc: 0xa2030008  sb          $v1, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368d8) {
            ctx->pc = 0x336988u;
            goto label_336988;
        }
    }
    ctx->pc = 0x3368E0u;
label_3368e0:
    // 0x3368e0: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x3368e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3368e4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3368e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3368e8: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x3368e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3368ec: 0xc0f35f4  jal         func_3CD7D0
    ctx->pc = 0x3368ECu;
    SET_GPR_U32(ctx, 31, 0x3368F4u);
    ctx->pc = 0x3368F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3368ECu;
    // 0x3368f0: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD7D0u, 0x3368ECu, 0x3368F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3368F4u;
label_3368f4:
    // 0x3368f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3368f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3368f8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3368F8u;
    {
        const bool branch_taken_0x3368f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3368FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368F8u;
        // 0x3368fc: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368f8) {
            ctx->pc = 0x336948u;
            goto label_336948;
        }
    }
    ctx->pc = 0x336900u;
    // 0x336900: 0x80231733  lb          $v1, 0x1733($at)
    ctx->pc = 0x336900u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5939)));
    // 0x336904: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x336904u;
    {
        const bool branch_taken_0x336904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x336904) {
            ctx->pc = 0x336928u;
            goto label_336928;
        }
    }
    ctx->pc = 0x33690Cu;
    // 0x33690c: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x33690cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x336910: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x336910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336914: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x336914u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x336918: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x336918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x33691c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x336920: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336920u;
    {
        const bool branch_taken_0x336920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336920u;
        // 0x336924: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336920) {
            ctx->pc = 0x336940u;
            goto label_336940;
        }
    }
    ctx->pc = 0x336928u;
label_336928:
    // 0x336928: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x336928u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33692c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x33692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336930: 0x64030006  daddiu      $v1, $zero, 0x6
    ctx->pc = 0x336930u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x336934: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x336934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x336938: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x336938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33693c: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x33693cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_336940:
    // 0x336940: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x336940u;
    {
        const bool branch_taken_0x336940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336940u;
        // 0x336944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336940) {
            ctx->pc = 0x336988u;
            goto label_336988;
        }
    }
    ctx->pc = 0x336948u;
label_336948:
    // 0x336948: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x336948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33694c: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x33694cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x336950: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x336950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336954: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x336954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336958: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x336958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x33695c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33695Cu;
    {
        const bool branch_taken_0x33695c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33695c) {
            ctx->pc = 0x336980u;
            goto label_336980;
        }
    }
    ctx->pc = 0x336964u;
    // 0x336964: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x336964u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x336968: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x336968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33696c: 0x64030005  daddiu      $v1, $zero, 0x5
    ctx->pc = 0x33696cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    // 0x336970: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x336970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x336974: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x336974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x336978: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x336978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x33697c: 0x0  nop
    ctx->pc = 0x33697cu;
    // NOP
label_336980:
    // 0x336980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336984: 0x0  nop
    ctx->pc = 0x336984u;
    // NOP
label_336988:
    // 0x336988: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x336988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33698c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33698cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336998: 0x3e00008  jr          $ra
    ctx->pc = 0x336998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336998u;
        // 0x33699c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3369A0u;
}
