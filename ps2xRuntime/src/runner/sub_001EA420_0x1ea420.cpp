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

// Function: sub_001EA420
// Address: 0x1ea420 - 0x1ea590
void sub_001EA420_0x1ea420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA420_0x1ea420");
#endif

    switch (ctx->pc) {
        case 0x1ea420u: goto label_1ea420;
        case 0x1ea424u: goto label_1ea424;
        case 0x1ea428u: goto label_1ea428;
        case 0x1ea42cu: goto label_1ea42c;
        case 0x1ea430u: goto label_1ea430;
        case 0x1ea434u: goto label_1ea434;
        case 0x1ea438u: goto label_1ea438;
        case 0x1ea43cu: goto label_1ea43c;
        case 0x1ea440u: goto label_1ea440;
        case 0x1ea444u: goto label_1ea444;
        case 0x1ea448u: goto label_1ea448;
        case 0x1ea44cu: goto label_1ea44c;
        case 0x1ea450u: goto label_1ea450;
        case 0x1ea454u: goto label_1ea454;
        case 0x1ea458u: goto label_1ea458;
        case 0x1ea45cu: goto label_1ea45c;
        case 0x1ea460u: goto label_1ea460;
        case 0x1ea464u: goto label_1ea464;
        case 0x1ea468u: goto label_1ea468;
        case 0x1ea46cu: goto label_1ea46c;
        case 0x1ea470u: goto label_1ea470;
        case 0x1ea474u: goto label_1ea474;
        case 0x1ea478u: goto label_1ea478;
        case 0x1ea47cu: goto label_1ea47c;
        case 0x1ea480u: goto label_1ea480;
        case 0x1ea484u: goto label_1ea484;
        case 0x1ea488u: goto label_1ea488;
        case 0x1ea48cu: goto label_1ea48c;
        case 0x1ea490u: goto label_1ea490;
        case 0x1ea494u: goto label_1ea494;
        case 0x1ea498u: goto label_1ea498;
        case 0x1ea49cu: goto label_1ea49c;
        case 0x1ea4a0u: goto label_1ea4a0;
        case 0x1ea4a4u: goto label_1ea4a4;
        case 0x1ea4a8u: goto label_1ea4a8;
        case 0x1ea4acu: goto label_1ea4ac;
        case 0x1ea4b0u: goto label_1ea4b0;
        case 0x1ea4b4u: goto label_1ea4b4;
        case 0x1ea4b8u: goto label_1ea4b8;
        case 0x1ea4bcu: goto label_1ea4bc;
        case 0x1ea4c0u: goto label_1ea4c0;
        case 0x1ea4c4u: goto label_1ea4c4;
        case 0x1ea4c8u: goto label_1ea4c8;
        case 0x1ea4ccu: goto label_1ea4cc;
        case 0x1ea4d0u: goto label_1ea4d0;
        case 0x1ea4d4u: goto label_1ea4d4;
        case 0x1ea4d8u: goto label_1ea4d8;
        case 0x1ea4dcu: goto label_1ea4dc;
        case 0x1ea4e0u: goto label_1ea4e0;
        case 0x1ea4e4u: goto label_1ea4e4;
        case 0x1ea4e8u: goto label_1ea4e8;
        case 0x1ea4ecu: goto label_1ea4ec;
        case 0x1ea4f0u: goto label_1ea4f0;
        case 0x1ea4f4u: goto label_1ea4f4;
        case 0x1ea4f8u: goto label_1ea4f8;
        case 0x1ea4fcu: goto label_1ea4fc;
        case 0x1ea500u: goto label_1ea500;
        case 0x1ea504u: goto label_1ea504;
        case 0x1ea508u: goto label_1ea508;
        case 0x1ea50cu: goto label_1ea50c;
        case 0x1ea510u: goto label_1ea510;
        case 0x1ea514u: goto label_1ea514;
        case 0x1ea518u: goto label_1ea518;
        case 0x1ea51cu: goto label_1ea51c;
        case 0x1ea520u: goto label_1ea520;
        case 0x1ea524u: goto label_1ea524;
        case 0x1ea528u: goto label_1ea528;
        case 0x1ea52cu: goto label_1ea52c;
        case 0x1ea530u: goto label_1ea530;
        case 0x1ea534u: goto label_1ea534;
        case 0x1ea538u: goto label_1ea538;
        case 0x1ea53cu: goto label_1ea53c;
        case 0x1ea540u: goto label_1ea540;
        case 0x1ea544u: goto label_1ea544;
        case 0x1ea548u: goto label_1ea548;
        case 0x1ea54cu: goto label_1ea54c;
        case 0x1ea550u: goto label_1ea550;
        case 0x1ea554u: goto label_1ea554;
        case 0x1ea558u: goto label_1ea558;
        case 0x1ea55cu: goto label_1ea55c;
        case 0x1ea560u: goto label_1ea560;
        case 0x1ea564u: goto label_1ea564;
        case 0x1ea568u: goto label_1ea568;
        case 0x1ea56cu: goto label_1ea56c;
        case 0x1ea570u: goto label_1ea570;
        case 0x1ea574u: goto label_1ea574;
        case 0x1ea578u: goto label_1ea578;
        case 0x1ea57cu: goto label_1ea57c;
        case 0x1ea580u: goto label_1ea580;
        case 0x1ea584u: goto label_1ea584;
        case 0x1ea588u: goto label_1ea588;
        case 0x1ea58cu: goto label_1ea58c;
        default: break;
    }

    ctx->pc = 0x1ea420u;

label_1ea420:
    // 0x1ea420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ea424:
    // 0x1ea424: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1ea428:
    // 0x1ea428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ea42c:
    // 0x1ea42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ea430:
    // 0x1ea430: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ea430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1ea434:
    // 0x1ea434: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ea438:
    if (ctx->pc == 0x1EA438u) {
        ctx->pc = 0x1EA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA434u;
        // 0x1ea438: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA43Cu;
        goto label_1ea43c;
    }
    ctx->pc = 0x1EA434u;
    {
        const bool branch_taken_0x1ea434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA434u;
        // 0x1ea438: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea434) {
            ctx->pc = 0x1EA448u;
            goto label_1ea448;
        }
    }
    ctx->pc = 0x1EA43Cu;
label_1ea43c:
    // 0x1ea43c: 0x10000050  b           . + 4 + (0x50 << 2)
label_1ea440:
    if (ctx->pc == 0x1EA440u) {
        ctx->pc = 0x1EA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA43Cu;
        // 0x1ea440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA444u;
        goto label_1ea444;
    }
    ctx->pc = 0x1EA43Cu;
    {
        const bool branch_taken_0x1ea43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA43Cu;
        // 0x1ea440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea43c) {
            ctx->pc = 0x1EA580u;
            goto label_1ea580;
        }
    }
    ctx->pc = 0x1EA444u;
label_1ea444:
    // 0x1ea444: 0x0  nop
    ctx->pc = 0x1ea444u;
    // NOP
label_1ea448:
    // 0x1ea448: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1ea448u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1ea44c:
    // 0x1ea44c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1ea44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1ea450:
    // 0x1ea450: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1ea450u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1ea454:
    // 0x1ea454: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ea458:
    // 0x1ea458: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ea458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ea45c:
    // 0x1ea45c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1ea45cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ea460:
    // 0x1ea460: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1ea460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1ea464:
    // 0x1ea464: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1ea468:
    if (ctx->pc == 0x1EA468u) {
        ctx->pc = 0x1EA46Cu;
        goto label_1ea46c;
    }
    ctx->pc = 0x1EA464u;
    {
        const bool branch_taken_0x1ea464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ea464) {
            ctx->pc = 0x1EA488u;
            goto label_1ea488;
        }
    }
    ctx->pc = 0x1EA46Cu;
label_1ea46c:
    // 0x1ea46c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ea46cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ea470:
    // 0x1ea470: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1ea470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1ea474:
    // 0x1ea474: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ea478:
    if (ctx->pc == 0x1EA478u) {
        ctx->pc = 0x1EA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA474u;
        // 0x1ea478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA47Cu;
        goto label_1ea47c;
    }
    ctx->pc = 0x1EA474u;
    {
        const bool branch_taken_0x1ea474 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA474u;
        // 0x1ea478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea474) {
            ctx->pc = 0x1EA4B0u;
            goto label_1ea4b0;
        }
    }
    ctx->pc = 0x1EA47Cu;
label_1ea47c:
    // 0x1ea47c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1ea47cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ea480:
    // 0x1ea480: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ea484:
    if (ctx->pc == 0x1EA484u) {
        ctx->pc = 0x1EA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA480u;
        // 0x1ea484: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA488u;
        goto label_1ea488;
    }
    ctx->pc = 0x1EA480u;
    {
        const bool branch_taken_0x1ea480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA480u;
        // 0x1ea484: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea480) {
            ctx->pc = 0x1EA4B0u;
            goto label_1ea4b0;
        }
    }
    ctx->pc = 0x1EA488u;
label_1ea488:
    // 0x1ea488: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ea488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ea48c:
    // 0x1ea48c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ea48cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ea490:
    // 0x1ea490: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1ea494:
    if (ctx->pc == 0x1EA494u) {
        ctx->pc = 0x1EA498u;
        goto label_1ea498;
    }
    ctx->pc = 0x1EA490u;
    {
        const bool branch_taken_0x1ea490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea490) {
            ctx->pc = 0x1EA4B0u;
            goto label_1ea4b0;
        }
    }
    ctx->pc = 0x1EA498u;
label_1ea498:
    // 0x1ea498: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ea498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ea49c:
    // 0x1ea49c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ea49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ea4a0:
    // 0x1ea4a0: 0x320f809  jalr        $t9
label_1ea4a4:
    if (ctx->pc == 0x1EA4A4u) {
        ctx->pc = 0x1EA4A8u;
        goto label_1ea4a8;
    }
    ctx->pc = 0x1EA4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EA4A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA4A0u, 0x1EA4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA4A8u;
label_1ea4a8:
    // 0x1ea4a8: 0x10000035  b           . + 4 + (0x35 << 2)
label_1ea4ac:
    if (ctx->pc == 0x1EA4ACu) {
        ctx->pc = 0x1EA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4A8u;
        // 0x1ea4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4B0u;
        goto label_1ea4b0;
    }
    ctx->pc = 0x1EA4A8u;
    {
        const bool branch_taken_0x1ea4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4A8u;
        // 0x1ea4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4a8) {
            ctx->pc = 0x1EA580u;
            goto label_1ea580;
        }
    }
    ctx->pc = 0x1EA4B0u;
label_1ea4b0:
    // 0x1ea4b0: 0xc0743c0  jal         func_1D0F00
label_1ea4b4:
    if (ctx->pc == 0x1EA4B4u) {
        ctx->pc = 0x1EA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4B0u;
        // 0x1ea4b4: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4B8u;
        goto label_1ea4b8;
    }
    ctx->pc = 0x1EA4B0u;
    SET_GPR_U32(ctx, 31, 0x1EA4B8u);
    ctx->pc = 0x1EA4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4B0u;
    // 0x1ea4b4: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1EA4B0u, 0x1EA4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4B8u;
label_1ea4b8:
    // 0x1ea4b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ea4bc:
    if (ctx->pc == 0x1EA4BCu) {
        ctx->pc = 0x1EA4C0u;
        goto label_1ea4c0;
    }
    ctx->pc = 0x1EA4B8u;
    {
        const bool branch_taken_0x1ea4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea4b8) {
            ctx->pc = 0x1EA4D0u;
            goto label_1ea4d0;
        }
    }
    ctx->pc = 0x1EA4C0u;
label_1ea4c0:
    // 0x1ea4c0: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1ea4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ea4c4:
    // 0x1ea4c4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ea4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ea4c8:
    // 0x1ea4c8: 0x320f809  jalr        $t9
label_1ea4cc:
    if (ctx->pc == 0x1EA4CCu) {
        ctx->pc = 0x1EA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4C8u;
        // 0x1ea4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4D0u;
        goto label_1ea4d0;
    }
    ctx->pc = 0x1EA4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EA4D0u);
        ctx->pc = 0x1EA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4C8u;
        // 0x1ea4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA4C8u, 0x1EA4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA4D0u;
label_1ea4d0:
    // 0x1ea4d0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1ea4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1ea4d4:
    // 0x1ea4d4: 0xc076800  jal         func_1DA000
label_1ea4d8:
    if (ctx->pc == 0x1EA4D8u) {
        ctx->pc = 0x1EA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4D4u;
        // 0x1ea4d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4DCu;
        goto label_1ea4dc;
    }
    ctx->pc = 0x1EA4D4u;
    SET_GPR_U32(ctx, 31, 0x1EA4DCu);
    ctx->pc = 0x1EA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4D4u;
    // 0x1ea4d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EA4D4u, 0x1EA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4DCu;
label_1ea4dc:
    // 0x1ea4dc: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1ea4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ea4e0:
    // 0x1ea4e0: 0xc076800  jal         func_1DA000
label_1ea4e4:
    if (ctx->pc == 0x1EA4E4u) {
        ctx->pc = 0x1EA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4E0u;
        // 0x1ea4e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4E8u;
        goto label_1ea4e8;
    }
    ctx->pc = 0x1EA4E0u;
    SET_GPR_U32(ctx, 31, 0x1EA4E8u);
    ctx->pc = 0x1EA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4E0u;
    // 0x1ea4e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EA4E0u, 0x1EA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4E8u;
label_1ea4e8:
    // 0x1ea4e8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1ea4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1ea4ec:
    // 0x1ea4ec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1ea4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1ea4f0:
    // 0x1ea4f0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1ea4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1ea4f4:
    // 0x1ea4f4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1ea4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1ea4f8:
    // 0x1ea4f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1ea4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1ea4fc:
    // 0x1ea4fc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1ea4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1ea500:
    // 0x1ea500: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1ea500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ea504:
    // 0x1ea504: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1ea504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1ea508:
    // 0x1ea508: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1ea508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1ea50c:
    // 0x1ea50c: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x1ea50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1ea510:
    // 0x1ea510: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ea514:
    // 0x1ea514: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1ea518:
    if (ctx->pc == 0x1EA518u) {
        ctx->pc = 0x1EA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA514u;
        // 0x1ea518: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA51Cu;
        goto label_1ea51c;
    }
    ctx->pc = 0x1EA514u;
    {
        const bool branch_taken_0x1ea514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA514u;
        // 0x1ea518: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea514) {
            ctx->pc = 0x1EA578u;
            goto label_1ea578;
        }
    }
    ctx->pc = 0x1EA51Cu;
label_1ea51c:
    // 0x1ea51c: 0xc0743e0  jal         func_1D0F80
label_1ea520:
    if (ctx->pc == 0x1EA520u) {
        ctx->pc = 0x1EA524u;
        goto label_1ea524;
    }
    ctx->pc = 0x1EA51Cu;
    SET_GPR_U32(ctx, 31, 0x1EA524u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1EA51Cu, 0x1EA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA524u;
label_1ea524:
    // 0x1ea524: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ea524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ea528:
    // 0x1ea528: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1ea528u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1ea52c:
    // 0x1ea52c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1ea52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1ea530:
    // 0x1ea530: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ea530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ea534:
    // 0x1ea534: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ea538:
    if (ctx->pc == 0x1EA538u) {
        ctx->pc = 0x1EA53Cu;
        goto label_1ea53c;
    }
    ctx->pc = 0x1EA534u;
    {
        const bool branch_taken_0x1ea534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea534) {
            ctx->pc = 0x1EA550u;
            goto label_1ea550;
        }
    }
    ctx->pc = 0x1EA53Cu;
label_1ea53c:
    // 0x1ea53c: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1ea53cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ea540:
    // 0x1ea540: 0x0  nop
    ctx->pc = 0x1ea540u;
    // NOP
label_1ea544:
    // 0x1ea544: 0x0  nop
    ctx->pc = 0x1ea544u;
    // NOP
label_1ea548:
    // 0x1ea548: 0x1010  mfhi        $v0
    ctx->pc = 0x1ea548u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ea54c:
    // 0x1ea54c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1ea54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1ea550:
    // 0x1ea550: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1ea550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1ea554:
    // 0x1ea554: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1ea554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1ea558:
    // 0x1ea558: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ea55c:
    if (ctx->pc == 0x1EA55Cu) {
        ctx->pc = 0x1EA560u;
        goto label_1ea560;
    }
    ctx->pc = 0x1EA558u;
    {
        const bool branch_taken_0x1ea558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea558) {
            ctx->pc = 0x1EA578u;
            goto label_1ea578;
        }
    }
    ctx->pc = 0x1EA560u;
label_1ea560:
    // 0x1ea560: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1ea560u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ea564:
    // 0x1ea564: 0x0  nop
    ctx->pc = 0x1ea564u;
    // NOP
label_1ea568:
    // 0x1ea568: 0x0  nop
    ctx->pc = 0x1ea568u;
    // NOP
label_1ea56c:
    // 0x1ea56c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ea56cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ea570:
    // 0x1ea570: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1ea570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1ea574:
    // 0x1ea574: 0x0  nop
    ctx->pc = 0x1ea574u;
    // NOP
label_1ea578:
    // 0x1ea578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea57c:
    // 0x1ea57c: 0x0  nop
    ctx->pc = 0x1ea57cu;
    // NOP
label_1ea580:
    // 0x1ea580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea584:
    // 0x1ea584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea588:
    // 0x1ea588: 0x3e00008  jr          $ra
label_1ea58c:
    if (ctx->pc == 0x1EA58Cu) {
        ctx->pc = 0x1EA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA588u;
        // 0x1ea58c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA590u;
        goto label_fallthrough_0x1ea588;
    }
    ctx->pc = 0x1EA588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA588u;
        // 0x1ea58c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ea588:
    ctx->pc = 0x1EA590u;
}
