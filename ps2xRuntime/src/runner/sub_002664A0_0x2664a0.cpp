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

// Function: sub_002664A0
// Address: 0x2664a0 - 0x266bec
void sub_002664A0_0x2664a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002664A0_0x2664a0");
#endif

    switch (ctx->pc) {
        case 0x266538u: goto label_266538;
        case 0x266568u: goto label_266568;
        case 0x266610u: goto label_266610;
        case 0x2667a8u: goto label_2667a8;
        case 0x2667c4u: goto label_2667c4;
        case 0x2667e0u: goto label_2667e0;
        case 0x266838u: goto label_266838;
        case 0x266900u: goto label_266900;
        case 0x2669b4u: goto label_2669b4;
        case 0x266a70u: goto label_266a70;
        case 0x266ad0u: goto label_266ad0;
        case 0x266b14u: goto label_266b14;
        case 0x266b2cu: goto label_266b2c;
        case 0x266b44u: goto label_266b44;
        case 0x266b5cu: goto label_266b5c;
        case 0x266b80u: goto label_266b80;
        case 0x266b98u: goto label_266b98;
        case 0x266bb0u: goto label_266bb0;
        case 0x266bc4u: goto label_266bc4;
        case 0x266be0u: goto label_266be0;
        default: break;
    }

    ctx->pc = 0x2664a0u;

    // 0x2664a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2664a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2664a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2664a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2664a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2664a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2664ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2664acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2664b0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x2664b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2664b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2664b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664b8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2664b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2664bc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2664bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2664c0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2664c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2664c4: 0x1083010a  beq         $a0, $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x2664C4u;
    {
        const bool branch_taken_0x2664c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2664C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664C4u;
        // 0x2664c8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664c4) {
            ctx->pc = 0x2668F0u;
            goto label_2668f0;
        }
    }
    ctx->pc = 0x2664CCu;
    // 0x2664cc: 0x108200d6  beq         $a0, $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2664CCu;
    {
        const bool branch_taken_0x2664cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2664cc) {
            ctx->pc = 0x266828u;
            goto label_266828;
        }
    }
    ctx->pc = 0x2664D4u;
    // 0x2664d4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2664d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2664d8: 0x108200bd  beq         $a0, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x2664D8u;
    {
        const bool branch_taken_0x2664d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2664DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664D8u;
        // 0x2664dc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664d8) {
            ctx->pc = 0x2667D0u;
            goto label_2667d0;
        }
    }
    ctx->pc = 0x2664E0u;
    // 0x2664e0: 0x108200ad  beq         $a0, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x2664E0u;
    {
        const bool branch_taken_0x2664e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2664e0) {
            ctx->pc = 0x266798u;
            goto label_266798;
        }
    }
    ctx->pc = 0x2664E8u;
    // 0x2664e8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2664e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2664ec: 0x10820044  beq         $a0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2664ECu;
    {
        const bool branch_taken_0x2664ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2664F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664ECu;
        // 0x2664f0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664ec) {
            ctx->pc = 0x266600u;
            goto label_266600;
        }
    }
    ctx->pc = 0x2664F4u;
    // 0x2664f4: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2664F4u;
    {
        const bool branch_taken_0x2664f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2664f4) {
            ctx->pc = 0x266558u;
            goto label_266558;
        }
    }
    ctx->pc = 0x2664FCu;
    // 0x2664fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2664fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x266500: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266500u;
    {
        const bool branch_taken_0x266500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266500u;
        // 0x266504: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266500) {
            ctx->pc = 0x266528u;
            goto label_266528;
        }
    }
    ctx->pc = 0x266508u;
    // 0x266508: 0x1082016b  beq         $a0, $v0, . + 4 + (0x16B << 2)
    ctx->pc = 0x266508u;
    {
        const bool branch_taken_0x266508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266508) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x266510u;
    // 0x266510: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266510u;
    {
        const bool branch_taken_0x266510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x266510) {
            ctx->pc = 0x266520u;
            goto label_266520;
        }
    }
    ctx->pc = 0x266518u;
    // 0x266518: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x266518u;
    {
        const bool branch_taken_0x266518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266518) {
            ctx->pc = 0x266AA0u;
            goto label_266aa0;
        }
    }
    ctx->pc = 0x266520u;
label_266520:
    // 0x266520: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x266520u;
    {
        const bool branch_taken_0x266520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266520u;
        // 0x266524: 0xa6030036  sh          $v1, 0x36($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266520) {
            ctx->pc = 0x266AC0u;
            goto label_266ac0;
        }
    }
    ctx->pc = 0x266528u;
label_266528:
    // 0x266528: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x266528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26652c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x26652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266530: 0xc049522  jal         func_125488
    ctx->pc = 0x266530u;
    SET_GPR_U32(ctx, 31, 0x266538u);
    ctx->pc = 0x266534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266530u;
    // 0x266534: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x266530u, 0x266538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266538u;
label_266538:
    // 0x266538: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x266538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26653c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x266540: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x266540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x266544: 0x87a30020  lh          $v1, 0x20($sp)
    ctx->pc = 0x266544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266548: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x266548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26654c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266550: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x266550u;
    {
        const bool branch_taken_0x266550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266550u;
        // 0x266554: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266550) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x266558u;
label_266558:
    // 0x266558: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x266558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26655c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x26655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266560: 0xc049522  jal         func_125488
    ctx->pc = 0x266560u;
    SET_GPR_U32(ctx, 31, 0x266568u);
    ctx->pc = 0x266564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266560u;
    // 0x266564: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x266560u, 0x266568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266568u;
label_266568:
    // 0x266568: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x266568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26656c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x26656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x266570: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x266570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x266574: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x266574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266578: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x266578u;
    {
        const bool branch_taken_0x266578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266578u;
        // 0x26657c: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266578) {
            ctx->pc = 0x266588u;
            goto label_266588;
        }
    }
    ctx->pc = 0x266580u;
    // 0x266580: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x266580u;
    {
        const bool branch_taken_0x266580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266580) {
            ctx->pc = 0x2665C0u;
            goto label_2665c0;
        }
    }
    ctx->pc = 0x266588u;
label_266588:
    // 0x266588: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x266588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x26658c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26658Cu;
    {
        const bool branch_taken_0x26658c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26658Cu;
        // 0x266590: 0x2462ff80  addiu       $v0, $v1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26658c) {
            ctx->pc = 0x2665A8u;
            goto label_2665a8;
        }
    }
    ctx->pc = 0x266594u;
    // 0x266594: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x266594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266598: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x266598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26659c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26659Cu;
    {
        const bool branch_taken_0x26659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2665A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26659Cu;
        // 0x2665a0: 0x2444004c  addiu       $a0, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26659c) {
            ctx->pc = 0x2665C0u;
            goto label_2665c0;
        }
    }
    ctx->pc = 0x2665A4u;
    // 0x2665a4: 0x0  nop
    ctx->pc = 0x2665a4u;
    // NOP
label_2665a8:
    // 0x2665a8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2665a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2665ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2665acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2665b0: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x2665b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x2665b4: 0x2442f8b0  addiu       $v0, $v0, -0x750
    ctx->pc = 0x2665b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965424));
    // 0x2665b8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2665b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2665bc: 0x0  nop
    ctx->pc = 0x2665bcu;
    // NOP
label_2665c0:
    // 0x2665c0: 0x27a30021  addiu       $v1, $sp, 0x21
    ctx->pc = 0x2665c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 33));
    // 0x2665c4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2665c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2665c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2665C8u;
    {
        const bool branch_taken_0x2665c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2665c8) {
            ctx->pc = 0x2665D8u;
            goto label_2665d8;
        }
    }
    ctx->pc = 0x2665D0u;
    // 0x2665d0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2665d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2665d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2665d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2665d8:
    // 0x2665d8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2665d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2665dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2665dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2665e0: 0x14620135  bne         $v1, $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x2665E0u;
    {
        const bool branch_taken_0x2665e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2665e0) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x2665E8u;
    // 0x2665e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2665e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2665ec: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2665ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2665f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2665f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2665f4: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x2665F4u;
    {
        const bool branch_taken_0x2665f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2665F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665F4u;
        // 0x2665f8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665f4) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x2665FCu;
    // 0x2665fc: 0x0  nop
    ctx->pc = 0x2665fcu;
    // NOP
label_266600:
    // 0x266600: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x266600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x266604: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x266604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266608: 0xc049522  jal         func_125488
    ctx->pc = 0x266608u;
    SET_GPR_U32(ctx, 31, 0x266610u);
    ctx->pc = 0x26660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266608u;
    // 0x26660c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x266608u, 0x266610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266610u;
label_266610:
    // 0x266610: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x266610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x266614: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x266614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x266618: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x266618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x26661c: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x26661cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266620: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266620u;
    {
        const bool branch_taken_0x266620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x266624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266620u;
        // 0x266624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266620) {
            ctx->pc = 0x266630u;
            goto label_266630;
        }
    }
    ctx->pc = 0x266628u;
    // 0x266628: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x266628u;
    {
        const bool branch_taken_0x266628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266628u;
        // 0x26662c: 0x2605004c  addiu       $a1, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266628) {
            ctx->pc = 0x266668u;
            goto label_266668;
        }
    }
    ctx->pc = 0x266630u;
label_266630:
    // 0x266630: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x266630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x266634: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x266634u;
    {
        const bool branch_taken_0x266634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x266638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266634u;
        // 0x266638: 0x2483ff80  addiu       $v1, $a0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266634) {
            ctx->pc = 0x266650u;
            goto label_266650;
        }
    }
    ctx->pc = 0x26663Cu;
    // 0x26663c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26663cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x266640: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x266640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x266644: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x266644u;
    {
        const bool branch_taken_0x266644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266644u;
        // 0x266648: 0x2465004c  addiu       $a1, $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266644) {
            ctx->pc = 0x266668u;
            goto label_266668;
        }
    }
    ctx->pc = 0x26664Cu;
    // 0x26664c: 0x0  nop
    ctx->pc = 0x26664cu;
    // NOP
label_266650:
    // 0x266650: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x266650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x266654: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x266654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x266658: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x266658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x26665c: 0x2463f8b0  addiu       $v1, $v1, -0x750
    ctx->pc = 0x26665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965424));
    // 0x266660: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x266660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266664: 0x0  nop
    ctx->pc = 0x266664u;
    // NOP
label_266668:
    // 0x266668: 0x93a30021  lbu         $v1, 0x21($sp)
    ctx->pc = 0x266668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x26666c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x26666cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x266670: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x266670u;
    {
        const bool branch_taken_0x266670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x266674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266670u;
        // 0x266674: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266670) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x266678u;
    // 0x266678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x266678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26667c: 0x248457b0  addiu       $a0, $a0, 0x57B0
    ctx->pc = 0x26667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22448));
    // 0x266680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266684: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x266684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266688: 0x600008  jr          $v1
    ctx->pc = 0x266688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x266690u: goto label_266690;
            case 0x2666A8u: goto label_2666a8;
            case 0x2666C0u: goto label_2666c0;
            case 0x2666E0u: goto label_2666e0;
            case 0x266700u: goto label_266700;
            case 0x266720u: goto label_266720;
            case 0x266740u: goto label_266740;
            case 0x266760u: goto label_266760;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266688u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x266690u;
label_266690:
    // 0x266690: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x266690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x266694: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x266694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x266698: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x266698u;
    {
        const bool branch_taken_0x266698 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x266698) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x2666A0u;
    // 0x2666a0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2666A0u;
    {
        const bool branch_taken_0x2666a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666A0u;
        // 0x2666a4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666a0) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x2666A8u;
label_2666a8:
    // 0x2666a8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2666a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2666ac: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2666acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2666b0: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2666B0u;
    {
        const bool branch_taken_0x2666b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2666b0) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x2666B8u;
    // 0x2666b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2666B8u;
    {
        const bool branch_taken_0x2666b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666B8u;
        // 0x2666bc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666b8) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x2666C0u;
label_2666c0:
    // 0x2666c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2666c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2666c4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2666c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2666c8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2666c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2666cc: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2666CCu;
    {
        const bool branch_taken_0x2666cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2666cc) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x2666D4u;
    // 0x2666d4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2666D4u;
    {
        const bool branch_taken_0x2666d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666D4u;
        // 0x2666d8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666d4) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x2666DCu;
    // 0x2666dc: 0x0  nop
    ctx->pc = 0x2666dcu;
    // NOP
label_2666e0:
    // 0x2666e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2666e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2666e4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2666e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2666e8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2666e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2666ec: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x2666ECu;
    {
        const bool branch_taken_0x2666ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2666ec) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x2666F4u;
    // 0x2666f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2666F4u;
    {
        const bool branch_taken_0x2666f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666F4u;
        // 0x2666f8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666f4) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x2666FCu;
    // 0x2666fc: 0x0  nop
    ctx->pc = 0x2666fcu;
    // NOP
label_266700:
    // 0x266700: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x266700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x266704: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x266704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x266708: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x266708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26670c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x26670Cu;
    {
        const bool branch_taken_0x26670c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26670c) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x266714u;
    // 0x266714: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x266714u;
    {
        const bool branch_taken_0x266714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266714u;
        // 0x266718: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266714) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x26671Cu;
    // 0x26671c: 0x0  nop
    ctx->pc = 0x26671cu;
    // NOP
label_266720:
    // 0x266720: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x266720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x266724: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x266724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x266728: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x266728u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x26672c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x26672Cu;
    {
        const bool branch_taken_0x26672c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26672c) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x266734u;
    // 0x266734: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x266734u;
    {
        const bool branch_taken_0x266734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266734u;
        // 0x266738: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266734) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x26673Cu;
    // 0x26673c: 0x0  nop
    ctx->pc = 0x26673cu;
    // NOP
label_266740:
    // 0x266740: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x266740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x266744: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x266744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x266748: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x266748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26674c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26674Cu;
    {
        const bool branch_taken_0x26674c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26674c) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x266754u;
    // 0x266754: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x266754u;
    {
        const bool branch_taken_0x266754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266754u;
        // 0x266758: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266754) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x26675Cu;
    // 0x26675c: 0x0  nop
    ctx->pc = 0x26675cu;
    // NOP
label_266760:
    // 0x266760: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x266760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x266764: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x266764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x266768: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x266768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26676c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26676Cu;
    {
        const bool branch_taken_0x26676c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26676c) {
            ctx->pc = 0x266778u;
            goto label_266778;
        }
    }
    ctx->pc = 0x266774u;
    // 0x266774: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x266774u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_266778:
    // 0x266778: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x266778u;
    {
        const bool branch_taken_0x266778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266778) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x266780u;
    // 0x266780: 0x87a30022  lh          $v1, 0x22($sp)
    ctx->pc = 0x266780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x266784: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x266784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x266788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26678c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x26678Cu;
    {
        const bool branch_taken_0x26678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26678Cu;
        // 0x266790: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26678c) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x266794u;
    // 0x266794: 0x0  nop
    ctx->pc = 0x266794u;
    // NOP
label_266798:
    // 0x266798: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x266798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26679c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x26679cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2667a0: 0xc049522  jal         func_125488
    ctx->pc = 0x2667A0u;
    SET_GPR_U32(ctx, 31, 0x2667A8u);
    ctx->pc = 0x2667A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2667A0u;
    // 0x2667a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2667A0u, 0x2667A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667A8u;
label_2667a8:
    // 0x2667a8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2667a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2667ac: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x2667acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x2667b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2667b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2667b4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2667b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2667b8: 0x97a50020  lhu         $a1, 0x20($sp)
    ctx->pc = 0x2667b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2667bc: 0xc056e04  jal         func_15B810
    ctx->pc = 0x2667BCu;
    SET_GPR_U32(ctx, 31, 0x2667C4u);
    ctx->pc = 0x2667C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2667BCu;
    // 0x2667c0: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x2667BCu, 0x2667C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667C4u;
label_2667c4:
    // 0x2667c4: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2667C4u;
    {
        const bool branch_taken_0x2667c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2667c4) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x2667CCu;
    // 0x2667cc: 0x0  nop
    ctx->pc = 0x2667ccu;
    // NOP
label_2667d0:
    // 0x2667d0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2667d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2667d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2667d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2667d8: 0xc049522  jal         func_125488
    ctx->pc = 0x2667D8u;
    SET_GPR_U32(ctx, 31, 0x2667E0u);
    ctx->pc = 0x2667DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2667D8u;
    // 0x2667dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2667D8u, 0x2667E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667E0u;
label_2667e0:
    // 0x2667e0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2667e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2667e4: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x2667e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x2667e8: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x2667e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x2667ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2667ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2667f0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2667f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2667f4: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2667f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2667f8: 0x97a30020  lhu         $v1, 0x20($sp)
    ctx->pc = 0x2667f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2667fc: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x2667fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x266800: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x266800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x266804: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x266804u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x266808: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x266808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26680c: 0x802027  not         $a0, $a0
    ctx->pc = 0x26680cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x266810: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x266810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266814: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x266814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266818: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x266818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x26681c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x26681Cu;
    {
        const bool branch_taken_0x26681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26681Cu;
        // 0x266820: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26681c) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x266824u;
    // 0x266824: 0x0  nop
    ctx->pc = 0x266824u;
    // NOP
label_266828:
    // 0x266828: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x266828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26682c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x26682cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266830: 0xc049522  jal         func_125488
    ctx->pc = 0x266830u;
    SET_GPR_U32(ctx, 31, 0x266838u);
    ctx->pc = 0x266834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266830u;
    // 0x266834: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x266830u, 0x266838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266838u;
label_266838:
    // 0x266838: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x266838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26683c: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x26683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x266840: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x266840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x266844: 0x93a80024  lbu         $t0, 0x24($sp)
    ctx->pc = 0x266844u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x266848: 0x1500000f  bnez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x266848u;
    {
        const bool branch_taken_0x266848 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x26684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266848u;
        // 0x26684c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266848) {
            ctx->pc = 0x266888u;
            goto label_266888;
        }
    }
    ctx->pc = 0x266850u;
    // 0x266850: 0x97a40020  lhu         $a0, 0x20($sp)
    ctx->pc = 0x266850u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266854: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x266854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x266858: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x266858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x26685c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x26685cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x266860: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x266860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x266864: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x266864u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x266868: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x266868u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x26686c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26686cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266874: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x266874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266878: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x266878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26687c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26687Cu;
    {
        const bool branch_taken_0x26687c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26687c) {
            ctx->pc = 0x266888u;
            goto label_266888;
        }
    }
    ctx->pc = 0x266884u;
    // 0x266884: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x266884u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_266888:
    // 0x266888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x266888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26688c: 0x15070010  bne         $t0, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x26688Cu;
    {
        const bool branch_taken_0x26688c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x26688c) {
            ctx->pc = 0x2668D0u;
            goto label_2668d0;
        }
    }
    ctx->pc = 0x266894u;
    // 0x266894: 0x97a40020  lhu         $a0, 0x20($sp)
    ctx->pc = 0x266894u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266898: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x266898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x26689c: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x26689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x2668a0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2668a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2668a4: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x2668a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2668a8: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x2668a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2668ac: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x2668acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2668b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2668b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2668b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2668b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2668b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2668b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2668bc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2668bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2668c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2668C0u;
    {
        const bool branch_taken_0x2668c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2668c0) {
            ctx->pc = 0x2668D0u;
            goto label_2668d0;
        }
    }
    ctx->pc = 0x2668C8u;
    // 0x2668c8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2668c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2668cc: 0x0  nop
    ctx->pc = 0x2668ccu;
    // NOP
label_2668d0:
    // 0x2668d0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2668D0u;
    {
        const bool branch_taken_0x2668d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2668d0) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x2668D8u;
    // 0x2668d8: 0x87a30022  lh          $v1, 0x22($sp)
    ctx->pc = 0x2668d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x2668dc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2668dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2668e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2668e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2668e4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2668E4u;
    {
        const bool branch_taken_0x2668e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668E4u;
        // 0x2668e8: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668e4) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x2668ECu;
    // 0x2668ec: 0x0  nop
    ctx->pc = 0x2668ecu;
    // NOP
label_2668f0:
    // 0x2668f0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2668f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2668f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2668f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2668f8: 0xc049522  jal         func_125488
    ctx->pc = 0x2668F8u;
    SET_GPR_U32(ctx, 31, 0x266900u);
    ctx->pc = 0x2668FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668F8u;
    // 0x2668fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2668F8u, 0x266900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266900u;
label_266900:
    // 0x266900: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x266900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x266904: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x266904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x266908: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x266908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x26690c: 0x9202004b  lbu         $v0, 0x4B($s0)
    ctx->pc = 0x26690cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x266910: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x266910u;
    {
        const bool branch_taken_0x266910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266910) {
            ctx->pc = 0x2669D8u;
            goto label_2669d8;
        }
    }
    ctx->pc = 0x266918u;
    // 0x266918: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x266918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x26691c: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x26691cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266920: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x266920u;
    {
        const bool branch_taken_0x266920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266920) {
            ctx->pc = 0x2669C0u;
            goto label_2669c0;
        }
    }
    ctx->pc = 0x266928u;
    // 0x266928: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266928u;
    {
        const bool branch_taken_0x266928 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x26692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266928u;
        // 0x26692c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266928) {
            ctx->pc = 0x26693Cu;
            goto label_26693c;
        }
    }
    ctx->pc = 0x266930u;
    // 0x266930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x266930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266934: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x266934u;
    {
        const bool branch_taken_0x266934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266934u;
        // 0x266938: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266934) {
            ctx->pc = 0x266954u;
            goto label_266954;
        }
    }
    ctx->pc = 0x26693Cu;
label_26693c:
    // 0x26693c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x266940: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x266940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x266944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x266944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266948: 0x0  nop
    ctx->pc = 0x266948u;
    // NOP
    // 0x26694c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x26694cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x266950: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x266950u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_266954:
    // 0x266954: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x266954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x266958: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x266958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x26695c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x26695cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x266960: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x266960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x266964: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x266964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x266968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x266968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26696c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x26696cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x266970: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x266970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x266974: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x266974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266978: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x266978u;
    {
        const bool branch_taken_0x266978 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x266978) {
            ctx->pc = 0x266990u;
            goto label_266990;
        }
    }
    ctx->pc = 0x266980u;
    // 0x266980: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x266980u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x266984: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x266984u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x266988: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x266988u;
    {
        const bool branch_taken_0x266988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266988u;
        // 0x26698c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266988) {
            ctx->pc = 0x2669ACu;
            goto label_2669ac;
        }
    }
    ctx->pc = 0x266990u;
label_266990:
    // 0x266990: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x266990u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266994: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x266994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x266998: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x266998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26699c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x26699cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2669a0: 0x0  nop
    ctx->pc = 0x2669a0u;
    // NOP
    // 0x2669a4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2669a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2669a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2669a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2669ac:
    // 0x2669ac: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2669ACu;
    SET_GPR_U32(ctx, 31, 0x2669B4u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2669ACu, 0x2669B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669B4u;
label_2669b4:
    // 0x2669b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2669B4u;
    {
        const bool branch_taken_0x2669b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2669b4) {
            ctx->pc = 0x2669C8u;
            goto label_2669c8;
        }
    }
    ctx->pc = 0x2669BCu;
    // 0x2669bc: 0x0  nop
    ctx->pc = 0x2669bcu;
    // NOP
label_2669c0:
    // 0x2669c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2669c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2669c4: 0x0  nop
    ctx->pc = 0x2669c4u;
    // NOP
label_2669c8:
    // 0x2669c8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2669c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2669cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2669ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2669d0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2669D0u;
    {
        const bool branch_taken_0x2669d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669D0u;
        // 0x2669d4: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669d0) {
            ctx->pc = 0x266AB8u;
            goto label_266ab8;
        }
    }
    ctx->pc = 0x2669D8u;
label_2669d8:
    // 0x2669d8: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x2669d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2669dc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2669DCu;
    {
        const bool branch_taken_0x2669dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2669dc) {
            ctx->pc = 0x266A78u;
            goto label_266a78;
        }
    }
    ctx->pc = 0x2669E4u;
    // 0x2669e4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2669E4u;
    {
        const bool branch_taken_0x2669e4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2669E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669E4u;
        // 0x2669e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669e4) {
            ctx->pc = 0x2669F8u;
            goto label_2669f8;
        }
    }
    ctx->pc = 0x2669ECu;
    // 0x2669ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2669ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2669f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2669F0u;
    {
        const bool branch_taken_0x2669f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669F0u;
        // 0x2669f4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669f0) {
            ctx->pc = 0x266A10u;
            goto label_266a10;
        }
    }
    ctx->pc = 0x2669F8u;
label_2669f8:
    // 0x2669f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2669f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2669fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2669fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x266a00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x266a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266a04: 0x0  nop
    ctx->pc = 0x266a04u;
    // NOP
    // 0x266a08: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x266a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x266a0c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x266a0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_266a10:
    // 0x266a10: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x266a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x266a14: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x266a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x266a18: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x266a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x266a1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x266a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x266a20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x266a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x266a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x266a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266a28: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x266a28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x266a2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x266a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x266a30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x266a30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266a34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x266A34u;
    {
        const bool branch_taken_0x266a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x266a34) {
            ctx->pc = 0x266A4Cu;
            goto label_266a4c;
        }
    }
    ctx->pc = 0x266A3Cu;
    // 0x266a3c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x266a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x266a40: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x266a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x266a44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x266A44u;
    {
        const bool branch_taken_0x266a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A44u;
        // 0x266a48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a44) {
            ctx->pc = 0x266A68u;
            goto label_266a68;
        }
    }
    ctx->pc = 0x266A4Cu;
label_266a4c:
    // 0x266a4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x266a4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266a50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x266a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x266a54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x266a54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x266a58: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x266a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x266a5c: 0x0  nop
    ctx->pc = 0x266a5cu;
    // NOP
    // 0x266a60: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x266a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x266a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x266a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266a68:
    // 0x266a68: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x266A68u;
    SET_GPR_U32(ctx, 31, 0x266A70u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x266A68u, 0x266A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A70u;
label_266a70:
    // 0x266a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266A70u;
    {
        const bool branch_taken_0x266a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266a70) {
            ctx->pc = 0x266A80u;
            goto label_266a80;
        }
    }
    ctx->pc = 0x266A78u;
label_266a78:
    // 0x266a78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x266a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266a7c: 0x0  nop
    ctx->pc = 0x266a7cu;
    // NOP
label_266a80:
    // 0x266a80: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x266a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x266a84: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x266a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x266a88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266A88u;
    {
        const bool branch_taken_0x266a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266a88) {
            ctx->pc = 0x266A98u;
            goto label_266a98;
        }
    }
    ctx->pc = 0x266A90u;
    // 0x266a90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x266a94: 0xa6020036  sh          $v0, 0x36($s0)
    ctx->pc = 0x266a94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 2));
label_266a98:
    // 0x266a98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x266A98u;
    {
        const bool branch_taken_0x266a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A98u;
        // 0x266a9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a98) {
            ctx->pc = 0x266AC0u;
            goto label_266ac0;
        }
    }
    ctx->pc = 0x266AA0u;
label_266aa0:
    // 0x266aa0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x266aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x266aa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x266aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266aa8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x266aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x266aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x266AACu;
    {
        const bool branch_taken_0x266aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AACu;
        // 0x266ab0: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266aac) {
            ctx->pc = 0x266AC0u;
            goto label_266ac0;
        }
    }
    ctx->pc = 0x266AB4u;
    // 0x266ab4: 0x0  nop
    ctx->pc = 0x266ab4u;
    // NOP
label_266ab8:
    // 0x266ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266abc: 0x0  nop
    ctx->pc = 0x266abcu;
    // NOP
label_266ac0:
    // 0x266ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x266AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AC8u;
        // 0x266acc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266AD0u;
label_266ad0:
    // 0x266ad0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x266ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x266ad4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266ad8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x266ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266adc: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x266adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x266ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266ae4: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x266AE4u;
    {
        const bool branch_taken_0x266ae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x266AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AE4u;
        // 0x266ae8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ae4) {
            ctx->pc = 0x266BD0u;
            goto label_266bd0;
        }
    }
    ctx->pc = 0x266AECu;
    // 0x266aec: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x266aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x266af0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x266af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266af4: 0x246357d0  addiu       $v1, $v1, 0x57D0
    ctx->pc = 0x266af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22480));
    // 0x266af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266afc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266b00: 0x400008  jr          $v0
    ctx->pc = 0x266B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x266B08u: goto label_266b08;
            case 0x266B20u: goto label_266b20;
            case 0x266B38u: goto label_266b38;
            case 0x266B50u: goto label_266b50;
            case 0x266B68u: goto label_266b68;
            case 0x266B88u: goto label_266b88;
            case 0x266BA0u: goto label_266ba0;
            case 0x266BB8u: goto label_266bb8;
            case 0x266BD0u: goto label_266bd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266B00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x266B08u;
label_266b08:
    // 0x266b08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x266b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266b0c: 0xc0a927c  jal         func_2A49F0
    ctx->pc = 0x266B0Cu;
    SET_GPR_U32(ctx, 31, 0x266B14u);
    ctx->pc = 0x266B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B0Cu;
    // 0x266b10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A49F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A49F0u, 0x266B0Cu, 0x266B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B14u;
label_266b14:
    // 0x266b14: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x266B14u;
    {
        const bool branch_taken_0x266b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b14) {
            ctx->pc = 0x266BE0u;
            goto label_266be0;
        }
    }
    ctx->pc = 0x266B1Cu;
    // 0x266b1c: 0x0  nop
    ctx->pc = 0x266b1cu;
    // NOP
label_266b20:
    // 0x266b20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x266b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266b24: 0xc0a928c  jal         func_2A4A30
    ctx->pc = 0x266B24u;
    SET_GPR_U32(ctx, 31, 0x266B2Cu);
    ctx->pc = 0x266B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B24u;
    // 0x266b28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4A30u, 0x266B24u, 0x266B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B2Cu;
label_266b2c:
    // 0x266b2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x266B2Cu;
    {
        const bool branch_taken_0x266b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b2c) {
            ctx->pc = 0x266BE0u;
            goto label_266be0;
        }
    }
    ctx->pc = 0x266B34u;
    // 0x266b34: 0x0  nop
    ctx->pc = 0x266b34u;
    // NOP
label_266b38:
    // 0x266b38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x266b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266b3c: 0xc0a92ac  jal         func_2A4AB0
    ctx->pc = 0x266B3Cu;
    SET_GPR_U32(ctx, 31, 0x266B44u);
    ctx->pc = 0x266B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B3Cu;
    // 0x266b40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4AB0u, 0x266B3Cu, 0x266B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B44u;
label_266b44:
    // 0x266b44: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x266B44u;
    {
        const bool branch_taken_0x266b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b44) {
            ctx->pc = 0x266BE0u;
            goto label_266be0;
        }
    }
    ctx->pc = 0x266B4Cu;
    // 0x266b4c: 0x0  nop
    ctx->pc = 0x266b4cu;
    // NOP
label_266b50:
    // 0x266b50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x266b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266b54: 0xc0a929c  jal         func_2A4A70
    ctx->pc = 0x266B54u;
    SET_GPR_U32(ctx, 31, 0x266B5Cu);
    ctx->pc = 0x266B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B54u;
    // 0x266b58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4A70u, 0x266B54u, 0x266B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B5Cu;
label_266b5c:
    // 0x266b5c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x266B5Cu;
    {
        const bool branch_taken_0x266b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b5c) {
            ctx->pc = 0x266BE0u;
            goto label_266be0;
        }
    }
    ctx->pc = 0x266B64u;
    // 0x266b64: 0x0  nop
    ctx->pc = 0x266b64u;
    // NOP
label_266b68:
    // 0x266b68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x266b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x266b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x266b70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x266b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266b74: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x266b74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x266b78: 0xc0a9134  jal         func_2A44D0
    ctx->pc = 0x266B78u;
    SET_GPR_U32(ctx, 31, 0x266B80u);
    ctx->pc = 0x266B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B78u;
    // 0x266b7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A44D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A44D0u, 0x266B78u, 0x266B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B80u;
label_266b80:
    // 0x266b80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x266B80u;
    {
        const bool branch_taken_0x266b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b80) {
            ctx->pc = 0x266BE0u;
            goto label_266be0;
        }
    }
    ctx->pc = 0x266B88u;
label_266b88:
    // 0x266b88: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x266b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x266b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266b90: 0xc0a9168  jal         func_2A45A0
    ctx->pc = 0x266B90u;
    SET_GPR_U32(ctx, 31, 0x266B98u);
    ctx->pc = 0x266B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B90u;
    // 0x266b94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A45A0u, 0x266B90u, 0x266B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B98u;
label_266b98:
    // 0x266b98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x266B98u;
    {
        const bool branch_taken_0x266b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b98) {
            ctx->pc = 0x266BE0u;
            goto label_266be0;
        }
    }
    ctx->pc = 0x266BA0u;
label_266ba0:
    // 0x266ba0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x266ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ba4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x266ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266ba8: 0xc0a9198  jal         func_2A4660
    ctx->pc = 0x266BA8u;
    SET_GPR_U32(ctx, 31, 0x266BB0u);
    ctx->pc = 0x266BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266BA8u;
    // 0x266bac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4660u, 0x266BA8u, 0x266BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BB0u;
label_266bb0:
    // 0x266bb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x266BB0u;
    {
        const bool branch_taken_0x266bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266bb0) {
            ctx->pc = 0x266BE0u;
            goto label_266be0;
        }
    }
    ctx->pc = 0x266BB8u;
label_266bb8:
    // 0x266bb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x266bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266bbc: 0xc0a92bc  jal         func_2A4AF0
    ctx->pc = 0x266BBCu;
    SET_GPR_U32(ctx, 31, 0x266BC4u);
    ctx->pc = 0x266BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266BBCu;
    // 0x266bc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4AF0u, 0x266BBCu, 0x266BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BC4u;
label_266bc4:
    // 0x266bc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266BC4u;
    {
        const bool branch_taken_0x266bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266bc4) {
            ctx->pc = 0x266BE0u;
            goto label_266be0;
        }
    }
    ctx->pc = 0x266BCCu;
    // 0x266bcc: 0x0  nop
    ctx->pc = 0x266bccu;
    // NOP
label_266bd0:
    // 0x266bd0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x266bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266bd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x266bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266bd8: 0xc0a9198  jal         func_2A4660
    ctx->pc = 0x266BD8u;
    SET_GPR_U32(ctx, 31, 0x266BE0u);
    ctx->pc = 0x266BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266BD8u;
    // 0x266bdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4660u, 0x266BD8u, 0x266BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BE0u;
label_266be0:
    // 0x266be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266be4: 0x3e00008  jr          $ra
    ctx->pc = 0x266BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BE4u;
        // 0x266be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266BECu;
}
