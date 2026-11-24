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

// Function: sub_001EC460
// Address: 0x1ec460 - 0x1ec5b0
void sub_001EC460_0x1ec460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC460_0x1ec460");
#endif

    switch (ctx->pc) {
        case 0x1ec460u: goto label_1ec460;
        case 0x1ec464u: goto label_1ec464;
        case 0x1ec468u: goto label_1ec468;
        case 0x1ec46cu: goto label_1ec46c;
        case 0x1ec470u: goto label_1ec470;
        case 0x1ec474u: goto label_1ec474;
        case 0x1ec478u: goto label_1ec478;
        case 0x1ec47cu: goto label_1ec47c;
        case 0x1ec480u: goto label_1ec480;
        case 0x1ec484u: goto label_1ec484;
        case 0x1ec488u: goto label_1ec488;
        case 0x1ec48cu: goto label_1ec48c;
        case 0x1ec490u: goto label_1ec490;
        case 0x1ec494u: goto label_1ec494;
        case 0x1ec498u: goto label_1ec498;
        case 0x1ec49cu: goto label_1ec49c;
        case 0x1ec4a0u: goto label_1ec4a0;
        case 0x1ec4a4u: goto label_1ec4a4;
        case 0x1ec4a8u: goto label_1ec4a8;
        case 0x1ec4acu: goto label_1ec4ac;
        case 0x1ec4b0u: goto label_1ec4b0;
        case 0x1ec4b4u: goto label_1ec4b4;
        case 0x1ec4b8u: goto label_1ec4b8;
        case 0x1ec4bcu: goto label_1ec4bc;
        case 0x1ec4c0u: goto label_1ec4c0;
        case 0x1ec4c4u: goto label_1ec4c4;
        case 0x1ec4c8u: goto label_1ec4c8;
        case 0x1ec4ccu: goto label_1ec4cc;
        case 0x1ec4d0u: goto label_1ec4d0;
        case 0x1ec4d4u: goto label_1ec4d4;
        case 0x1ec4d8u: goto label_1ec4d8;
        case 0x1ec4dcu: goto label_1ec4dc;
        case 0x1ec4e0u: goto label_1ec4e0;
        case 0x1ec4e4u: goto label_1ec4e4;
        case 0x1ec4e8u: goto label_1ec4e8;
        case 0x1ec4ecu: goto label_1ec4ec;
        case 0x1ec4f0u: goto label_1ec4f0;
        case 0x1ec4f4u: goto label_1ec4f4;
        case 0x1ec4f8u: goto label_1ec4f8;
        case 0x1ec4fcu: goto label_1ec4fc;
        case 0x1ec500u: goto label_1ec500;
        case 0x1ec504u: goto label_1ec504;
        case 0x1ec508u: goto label_1ec508;
        case 0x1ec50cu: goto label_1ec50c;
        case 0x1ec510u: goto label_1ec510;
        case 0x1ec514u: goto label_1ec514;
        case 0x1ec518u: goto label_1ec518;
        case 0x1ec51cu: goto label_1ec51c;
        case 0x1ec520u: goto label_1ec520;
        case 0x1ec524u: goto label_1ec524;
        case 0x1ec528u: goto label_1ec528;
        case 0x1ec52cu: goto label_1ec52c;
        case 0x1ec530u: goto label_1ec530;
        case 0x1ec534u: goto label_1ec534;
        case 0x1ec538u: goto label_1ec538;
        case 0x1ec53cu: goto label_1ec53c;
        case 0x1ec540u: goto label_1ec540;
        case 0x1ec544u: goto label_1ec544;
        case 0x1ec548u: goto label_1ec548;
        case 0x1ec54cu: goto label_1ec54c;
        case 0x1ec550u: goto label_1ec550;
        case 0x1ec554u: goto label_1ec554;
        case 0x1ec558u: goto label_1ec558;
        case 0x1ec55cu: goto label_1ec55c;
        case 0x1ec560u: goto label_1ec560;
        case 0x1ec564u: goto label_1ec564;
        case 0x1ec568u: goto label_1ec568;
        case 0x1ec56cu: goto label_1ec56c;
        case 0x1ec570u: goto label_1ec570;
        case 0x1ec574u: goto label_1ec574;
        case 0x1ec578u: goto label_1ec578;
        case 0x1ec57cu: goto label_1ec57c;
        case 0x1ec580u: goto label_1ec580;
        case 0x1ec584u: goto label_1ec584;
        case 0x1ec588u: goto label_1ec588;
        case 0x1ec58cu: goto label_1ec58c;
        case 0x1ec590u: goto label_1ec590;
        case 0x1ec594u: goto label_1ec594;
        case 0x1ec598u: goto label_1ec598;
        case 0x1ec59cu: goto label_1ec59c;
        case 0x1ec5a0u: goto label_1ec5a0;
        case 0x1ec5a4u: goto label_1ec5a4;
        case 0x1ec5a8u: goto label_1ec5a8;
        case 0x1ec5acu: goto label_1ec5ac;
        default: break;
    }

    ctx->pc = 0x1ec460u;

label_1ec460:
    // 0x1ec460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ec464:
    // 0x1ec464: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ec464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1ec468:
    // 0x1ec468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ec46c:
    // 0x1ec46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ec470:
    // 0x1ec470: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ec470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1ec474:
    // 0x1ec474: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ec478:
    if (ctx->pc == 0x1EC478u) {
        ctx->pc = 0x1EC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC474u;
        // 0x1ec478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC47Cu;
        goto label_1ec47c;
    }
    ctx->pc = 0x1EC474u;
    {
        const bool branch_taken_0x1ec474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC474u;
        // 0x1ec478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec474) {
            ctx->pc = 0x1EC488u;
            goto label_1ec488;
        }
    }
    ctx->pc = 0x1EC47Cu;
label_1ec47c:
    // 0x1ec47c: 0x10000048  b           . + 4 + (0x48 << 2)
label_1ec480:
    if (ctx->pc == 0x1EC480u) {
        ctx->pc = 0x1EC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC47Cu;
        // 0x1ec480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC484u;
        goto label_1ec484;
    }
    ctx->pc = 0x1EC47Cu;
    {
        const bool branch_taken_0x1ec47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC47Cu;
        // 0x1ec480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec47c) {
            ctx->pc = 0x1EC5A0u;
            goto label_1ec5a0;
        }
    }
    ctx->pc = 0x1EC484u;
label_1ec484:
    // 0x1ec484: 0x0  nop
    ctx->pc = 0x1ec484u;
    // NOP
label_1ec488:
    // 0x1ec488: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x1ec488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
label_1ec48c:
    // 0x1ec48c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1ec48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1ec490:
    // 0x1ec490: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1ec490u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1ec494:
    // 0x1ec494: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1ec494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ec498:
    // 0x1ec498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ec498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ec49c:
    // 0x1ec49c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1ec49cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ec4a0:
    // 0x1ec4a0: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x1ec4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_1ec4a4:
    // 0x1ec4a4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1ec4a8:
    if (ctx->pc == 0x1EC4A8u) {
        ctx->pc = 0x1EC4ACu;
        goto label_1ec4ac;
    }
    ctx->pc = 0x1EC4A4u;
    {
        const bool branch_taken_0x1ec4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec4a4) {
            ctx->pc = 0x1EC4C8u;
            goto label_1ec4c8;
        }
    }
    ctx->pc = 0x1EC4ACu;
label_1ec4ac:
    // 0x1ec4ac: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ec4acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ec4b0:
    // 0x1ec4b0: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1ec4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1ec4b4:
    // 0x1ec4b4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ec4b8:
    if (ctx->pc == 0x1EC4B8u) {
        ctx->pc = 0x1EC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4B4u;
        // 0x1ec4b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4BCu;
        goto label_1ec4bc;
    }
    ctx->pc = 0x1EC4B4u;
    {
        const bool branch_taken_0x1ec4b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4B4u;
        // 0x1ec4b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4b4) {
            ctx->pc = 0x1EC4F0u;
            goto label_1ec4f0;
        }
    }
    ctx->pc = 0x1EC4BCu;
label_1ec4bc:
    // 0x1ec4bc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1ec4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ec4c0:
    // 0x1ec4c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ec4c4:
    if (ctx->pc == 0x1EC4C4u) {
        ctx->pc = 0x1EC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4C0u;
        // 0x1ec4c4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4C8u;
        goto label_1ec4c8;
    }
    ctx->pc = 0x1EC4C0u;
    {
        const bool branch_taken_0x1ec4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4C0u;
        // 0x1ec4c4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4c0) {
            ctx->pc = 0x1EC4F0u;
            goto label_1ec4f0;
        }
    }
    ctx->pc = 0x1EC4C8u;
label_1ec4c8:
    // 0x1ec4c8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ec4c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ec4cc:
    // 0x1ec4cc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ec4ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ec4d0:
    // 0x1ec4d0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1ec4d4:
    if (ctx->pc == 0x1EC4D4u) {
        ctx->pc = 0x1EC4D8u;
        goto label_1ec4d8;
    }
    ctx->pc = 0x1EC4D0u;
    {
        const bool branch_taken_0x1ec4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec4d0) {
            ctx->pc = 0x1EC4F0u;
            goto label_1ec4f0;
        }
    }
    ctx->pc = 0x1EC4D8u;
label_1ec4d8:
    // 0x1ec4d8: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ec4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ec4dc:
    // 0x1ec4dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ec4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ec4e0:
    // 0x1ec4e0: 0x320f809  jalr        $t9
label_1ec4e4:
    if (ctx->pc == 0x1EC4E4u) {
        ctx->pc = 0x1EC4E8u;
        goto label_1ec4e8;
    }
    ctx->pc = 0x1EC4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EC4E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4E0u, 0x1EC4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC4E8u;
label_1ec4e8:
    // 0x1ec4e8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1ec4ec:
    if (ctx->pc == 0x1EC4ECu) {
        ctx->pc = 0x1EC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4E8u;
        // 0x1ec4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4F0u;
        goto label_1ec4f0;
    }
    ctx->pc = 0x1EC4E8u;
    {
        const bool branch_taken_0x1ec4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4E8u;
        // 0x1ec4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4e8) {
            ctx->pc = 0x1EC5A0u;
            goto label_1ec5a0;
        }
    }
    ctx->pc = 0x1EC4F0u;
label_1ec4f0:
    // 0x1ec4f0: 0xc0743c0  jal         func_1D0F00
label_1ec4f4:
    if (ctx->pc == 0x1EC4F4u) {
        ctx->pc = 0x1EC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4F0u;
        // 0x1ec4f4: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC4F8u;
        goto label_1ec4f8;
    }
    ctx->pc = 0x1EC4F0u;
    SET_GPR_U32(ctx, 31, 0x1EC4F8u);
    ctx->pc = 0x1EC4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4F0u;
    // 0x1ec4f4: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1EC4F0u, 0x1EC4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4F8u;
label_1ec4f8:
    // 0x1ec4f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ec4fc:
    if (ctx->pc == 0x1EC4FCu) {
        ctx->pc = 0x1EC500u;
        goto label_1ec500;
    }
    ctx->pc = 0x1EC4F8u;
    {
        const bool branch_taken_0x1ec4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec4f8) {
            ctx->pc = 0x1EC510u;
            goto label_1ec510;
        }
    }
    ctx->pc = 0x1EC500u;
label_1ec500:
    // 0x1ec500: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1ec500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ec504:
    // 0x1ec504: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ec504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ec508:
    // 0x1ec508: 0x320f809  jalr        $t9
label_1ec50c:
    if (ctx->pc == 0x1EC50Cu) {
        ctx->pc = 0x1EC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC508u;
        // 0x1ec50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC510u;
        goto label_1ec510;
    }
    ctx->pc = 0x1EC508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EC510u);
        ctx->pc = 0x1EC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC508u;
        // 0x1ec50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC508u, 0x1EC510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC510u;
label_1ec510:
    // 0x1ec510: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1ec510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1ec514:
    // 0x1ec514: 0xc076800  jal         func_1DA000
label_1ec518:
    if (ctx->pc == 0x1EC518u) {
        ctx->pc = 0x1EC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC514u;
        // 0x1ec518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC51Cu;
        goto label_1ec51c;
    }
    ctx->pc = 0x1EC514u;
    SET_GPR_U32(ctx, 31, 0x1EC51Cu);
    ctx->pc = 0x1EC518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC514u;
    // 0x1ec518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EC514u, 0x1EC51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC51Cu;
label_1ec51c:
    // 0x1ec51c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1ec51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1ec520:
    // 0x1ec520: 0xc076800  jal         func_1DA000
label_1ec524:
    if (ctx->pc == 0x1EC524u) {
        ctx->pc = 0x1EC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC520u;
        // 0x1ec524: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC528u;
        goto label_1ec528;
    }
    ctx->pc = 0x1EC520u;
    SET_GPR_U32(ctx, 31, 0x1EC528u);
    ctx->pc = 0x1EC524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC520u;
    // 0x1ec524: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EC520u, 0x1EC528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC528u;
label_1ec528:
    // 0x1ec528: 0x92020048  lbu         $v0, 0x48($s0)
    ctx->pc = 0x1ec528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
label_1ec52c:
    // 0x1ec52c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ec530:
    // 0x1ec530: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1ec534:
    if (ctx->pc == 0x1EC534u) {
        ctx->pc = 0x1EC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC530u;
        // 0x1ec534: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC538u;
        goto label_1ec538;
    }
    ctx->pc = 0x1EC530u;
    {
        const bool branch_taken_0x1ec530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC530u;
        // 0x1ec534: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec530) {
            ctx->pc = 0x1EC598u;
            goto label_1ec598;
        }
    }
    ctx->pc = 0x1EC538u;
label_1ec538:
    // 0x1ec538: 0xc0743e0  jal         func_1D0F80
label_1ec53c:
    if (ctx->pc == 0x1EC53Cu) {
        ctx->pc = 0x1EC540u;
        goto label_1ec540;
    }
    ctx->pc = 0x1EC538u;
    SET_GPR_U32(ctx, 31, 0x1EC540u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1EC538u, 0x1EC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC540u;
label_1ec540:
    // 0x1ec540: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ec540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ec544:
    // 0x1ec544: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1ec544u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1ec548:
    // 0x1ec548: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1ec548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1ec54c:
    // 0x1ec54c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ec54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ec550:
    // 0x1ec550: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ec554:
    if (ctx->pc == 0x1EC554u) {
        ctx->pc = 0x1EC558u;
        goto label_1ec558;
    }
    ctx->pc = 0x1EC550u;
    {
        const bool branch_taken_0x1ec550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec550) {
            ctx->pc = 0x1EC570u;
            goto label_1ec570;
        }
    }
    ctx->pc = 0x1EC558u;
label_1ec558:
    // 0x1ec558: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1ec558u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ec55c:
    // 0x1ec55c: 0x0  nop
    ctx->pc = 0x1ec55cu;
    // NOP
label_1ec560:
    // 0x1ec560: 0x0  nop
    ctx->pc = 0x1ec560u;
    // NOP
label_1ec564:
    // 0x1ec564: 0x1010  mfhi        $v0
    ctx->pc = 0x1ec564u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ec568:
    // 0x1ec568: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1ec568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1ec56c:
    // 0x1ec56c: 0x0  nop
    ctx->pc = 0x1ec56cu;
    // NOP
label_1ec570:
    // 0x1ec570: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1ec570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ec574:
    // 0x1ec574: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1ec574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1ec578:
    // 0x1ec578: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ec57c:
    if (ctx->pc == 0x1EC57Cu) {
        ctx->pc = 0x1EC580u;
        goto label_1ec580;
    }
    ctx->pc = 0x1EC578u;
    {
        const bool branch_taken_0x1ec578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec578) {
            ctx->pc = 0x1EC598u;
            goto label_1ec598;
        }
    }
    ctx->pc = 0x1EC580u;
label_1ec580:
    // 0x1ec580: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1ec580u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ec584:
    // 0x1ec584: 0x0  nop
    ctx->pc = 0x1ec584u;
    // NOP
label_1ec588:
    // 0x1ec588: 0x0  nop
    ctx->pc = 0x1ec588u;
    // NOP
label_1ec58c:
    // 0x1ec58c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ec58cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ec590:
    // 0x1ec590: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1ec590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1ec594:
    // 0x1ec594: 0x0  nop
    ctx->pc = 0x1ec594u;
    // NOP
label_1ec598:
    // 0x1ec598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec59c:
    // 0x1ec59c: 0x0  nop
    ctx->pc = 0x1ec59cu;
    // NOP
label_1ec5a0:
    // 0x1ec5a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec5a4:
    // 0x1ec5a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec5a8:
    // 0x1ec5a8: 0x3e00008  jr          $ra
label_1ec5ac:
    if (ctx->pc == 0x1EC5ACu) {
        ctx->pc = 0x1EC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5A8u;
        // 0x1ec5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC5B0u;
        goto label_fallthrough_0x1ec5a8;
    }
    ctx->pc = 0x1EC5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5A8u;
        // 0x1ec5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ec5a8:
    ctx->pc = 0x1EC5B0u;
}
