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

// Function: sub_001EB440
// Address: 0x1eb440 - 0x1eb5c8
void sub_001EB440_0x1eb440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB440_0x1eb440");
#endif

    switch (ctx->pc) {
        case 0x1eb440u: goto label_1eb440;
        case 0x1eb444u: goto label_1eb444;
        case 0x1eb448u: goto label_1eb448;
        case 0x1eb44cu: goto label_1eb44c;
        case 0x1eb450u: goto label_1eb450;
        case 0x1eb454u: goto label_1eb454;
        case 0x1eb458u: goto label_1eb458;
        case 0x1eb45cu: goto label_1eb45c;
        case 0x1eb460u: goto label_1eb460;
        case 0x1eb464u: goto label_1eb464;
        case 0x1eb468u: goto label_1eb468;
        case 0x1eb46cu: goto label_1eb46c;
        case 0x1eb470u: goto label_1eb470;
        case 0x1eb474u: goto label_1eb474;
        case 0x1eb478u: goto label_1eb478;
        case 0x1eb47cu: goto label_1eb47c;
        case 0x1eb480u: goto label_1eb480;
        case 0x1eb484u: goto label_1eb484;
        case 0x1eb488u: goto label_1eb488;
        case 0x1eb48cu: goto label_1eb48c;
        case 0x1eb490u: goto label_1eb490;
        case 0x1eb494u: goto label_1eb494;
        case 0x1eb498u: goto label_1eb498;
        case 0x1eb49cu: goto label_1eb49c;
        case 0x1eb4a0u: goto label_1eb4a0;
        case 0x1eb4a4u: goto label_1eb4a4;
        case 0x1eb4a8u: goto label_1eb4a8;
        case 0x1eb4acu: goto label_1eb4ac;
        case 0x1eb4b0u: goto label_1eb4b0;
        case 0x1eb4b4u: goto label_1eb4b4;
        case 0x1eb4b8u: goto label_1eb4b8;
        case 0x1eb4bcu: goto label_1eb4bc;
        case 0x1eb4c0u: goto label_1eb4c0;
        case 0x1eb4c4u: goto label_1eb4c4;
        case 0x1eb4c8u: goto label_1eb4c8;
        case 0x1eb4ccu: goto label_1eb4cc;
        case 0x1eb4d0u: goto label_1eb4d0;
        case 0x1eb4d4u: goto label_1eb4d4;
        case 0x1eb4d8u: goto label_1eb4d8;
        case 0x1eb4dcu: goto label_1eb4dc;
        case 0x1eb4e0u: goto label_1eb4e0;
        case 0x1eb4e4u: goto label_1eb4e4;
        case 0x1eb4e8u: goto label_1eb4e8;
        case 0x1eb4ecu: goto label_1eb4ec;
        case 0x1eb4f0u: goto label_1eb4f0;
        case 0x1eb4f4u: goto label_1eb4f4;
        case 0x1eb4f8u: goto label_1eb4f8;
        case 0x1eb4fcu: goto label_1eb4fc;
        case 0x1eb500u: goto label_1eb500;
        case 0x1eb504u: goto label_1eb504;
        case 0x1eb508u: goto label_1eb508;
        case 0x1eb50cu: goto label_1eb50c;
        case 0x1eb510u: goto label_1eb510;
        case 0x1eb514u: goto label_1eb514;
        case 0x1eb518u: goto label_1eb518;
        case 0x1eb51cu: goto label_1eb51c;
        case 0x1eb520u: goto label_1eb520;
        case 0x1eb524u: goto label_1eb524;
        case 0x1eb528u: goto label_1eb528;
        case 0x1eb52cu: goto label_1eb52c;
        case 0x1eb530u: goto label_1eb530;
        case 0x1eb534u: goto label_1eb534;
        case 0x1eb538u: goto label_1eb538;
        case 0x1eb53cu: goto label_1eb53c;
        case 0x1eb540u: goto label_1eb540;
        case 0x1eb544u: goto label_1eb544;
        case 0x1eb548u: goto label_1eb548;
        case 0x1eb54cu: goto label_1eb54c;
        case 0x1eb550u: goto label_1eb550;
        case 0x1eb554u: goto label_1eb554;
        case 0x1eb558u: goto label_1eb558;
        case 0x1eb55cu: goto label_1eb55c;
        case 0x1eb560u: goto label_1eb560;
        case 0x1eb564u: goto label_1eb564;
        case 0x1eb568u: goto label_1eb568;
        case 0x1eb56cu: goto label_1eb56c;
        case 0x1eb570u: goto label_1eb570;
        case 0x1eb574u: goto label_1eb574;
        case 0x1eb578u: goto label_1eb578;
        case 0x1eb57cu: goto label_1eb57c;
        case 0x1eb580u: goto label_1eb580;
        case 0x1eb584u: goto label_1eb584;
        case 0x1eb588u: goto label_1eb588;
        case 0x1eb58cu: goto label_1eb58c;
        case 0x1eb590u: goto label_1eb590;
        case 0x1eb594u: goto label_1eb594;
        case 0x1eb598u: goto label_1eb598;
        case 0x1eb59cu: goto label_1eb59c;
        case 0x1eb5a0u: goto label_1eb5a0;
        case 0x1eb5a4u: goto label_1eb5a4;
        case 0x1eb5a8u: goto label_1eb5a8;
        case 0x1eb5acu: goto label_1eb5ac;
        case 0x1eb5b0u: goto label_1eb5b0;
        case 0x1eb5b4u: goto label_1eb5b4;
        case 0x1eb5b8u: goto label_1eb5b8;
        case 0x1eb5bcu: goto label_1eb5bc;
        case 0x1eb5c0u: goto label_1eb5c0;
        case 0x1eb5c4u: goto label_1eb5c4;
        default: break;
    }

    ctx->pc = 0x1eb440u;

label_1eb440:
    // 0x1eb440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eb444:
    // 0x1eb444: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1eb444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1eb448:
    // 0x1eb448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eb448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eb44c:
    // 0x1eb44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eb450:
    // 0x1eb450: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1eb450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1eb454:
    // 0x1eb454: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1eb458:
    if (ctx->pc == 0x1EB458u) {
        ctx->pc = 0x1EB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB454u;
        // 0x1eb458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB45Cu;
        goto label_1eb45c;
    }
    ctx->pc = 0x1EB454u;
    {
        const bool branch_taken_0x1eb454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB454u;
        // 0x1eb458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb454) {
            ctx->pc = 0x1EB468u;
            goto label_1eb468;
        }
    }
    ctx->pc = 0x1EB45Cu;
label_1eb45c:
    // 0x1eb45c: 0x10000056  b           . + 4 + (0x56 << 2)
label_1eb460:
    if (ctx->pc == 0x1EB460u) {
        ctx->pc = 0x1EB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB45Cu;
        // 0x1eb460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB464u;
        goto label_1eb464;
    }
    ctx->pc = 0x1EB45Cu;
    {
        const bool branch_taken_0x1eb45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB45Cu;
        // 0x1eb460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb45c) {
            ctx->pc = 0x1EB5B8u;
            goto label_1eb5b8;
        }
    }
    ctx->pc = 0x1EB464u;
label_1eb464:
    // 0x1eb464: 0x0  nop
    ctx->pc = 0x1eb464u;
    // NOP
label_1eb468:
    // 0x1eb468: 0x7a0300a0  lq          $v1, 0xA0($s0)
    ctx->pc = 0x1eb468u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 160)));
label_1eb46c:
    // 0x1eb46c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1eb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1eb470:
    // 0x1eb470: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1eb470u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1eb474:
    // 0x1eb474: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1eb474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb478:
    // 0x1eb478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1eb47c:
    // 0x1eb47c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1eb47cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1eb480:
    // 0x1eb480: 0x86030040  lh          $v1, 0x40($s0)
    ctx->pc = 0x1eb480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1eb484:
    // 0x1eb484: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1eb488:
    if (ctx->pc == 0x1EB488u) {
        ctx->pc = 0x1EB48Cu;
        goto label_1eb48c;
    }
    ctx->pc = 0x1EB484u;
    {
        const bool branch_taken_0x1eb484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb484) {
            ctx->pc = 0x1EB4A8u;
            goto label_1eb4a8;
        }
    }
    ctx->pc = 0x1EB48Cu;
label_1eb48c:
    // 0x1eb48c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1eb48cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb490:
    // 0x1eb490: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1eb490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1eb494:
    // 0x1eb494: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1eb498:
    if (ctx->pc == 0x1EB498u) {
        ctx->pc = 0x1EB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB494u;
        // 0x1eb498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB49Cu;
        goto label_1eb49c;
    }
    ctx->pc = 0x1EB494u;
    {
        const bool branch_taken_0x1eb494 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB494u;
        // 0x1eb498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb494) {
            ctx->pc = 0x1EB4D0u;
            goto label_1eb4d0;
        }
    }
    ctx->pc = 0x1EB49Cu;
label_1eb49c:
    // 0x1eb49c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1eb49cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1eb4a0:
    // 0x1eb4a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1eb4a4:
    if (ctx->pc == 0x1EB4A4u) {
        ctx->pc = 0x1EB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4A0u;
        // 0x1eb4a4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4A8u;
        goto label_1eb4a8;
    }
    ctx->pc = 0x1EB4A0u;
    {
        const bool branch_taken_0x1eb4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4A0u;
        // 0x1eb4a4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4a0) {
            ctx->pc = 0x1EB4D0u;
            goto label_1eb4d0;
        }
    }
    ctx->pc = 0x1EB4A8u;
label_1eb4a8:
    // 0x1eb4a8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1eb4a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1eb4ac:
    // 0x1eb4ac: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1eb4acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb4b0:
    // 0x1eb4b0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1eb4b4:
    if (ctx->pc == 0x1EB4B4u) {
        ctx->pc = 0x1EB4B8u;
        goto label_1eb4b8;
    }
    ctx->pc = 0x1EB4B0u;
    {
        const bool branch_taken_0x1eb4b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb4b0) {
            ctx->pc = 0x1EB4D0u;
            goto label_1eb4d0;
        }
    }
    ctx->pc = 0x1EB4B8u;
label_1eb4b8:
    // 0x1eb4b8: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1eb4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1eb4bc:
    // 0x1eb4bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1eb4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1eb4c0:
    // 0x1eb4c0: 0x320f809  jalr        $t9
label_1eb4c4:
    if (ctx->pc == 0x1EB4C4u) {
        ctx->pc = 0x1EB4C8u;
        goto label_1eb4c8;
    }
    ctx->pc = 0x1EB4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EB4C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB4C0u, 0x1EB4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB4C8u;
label_1eb4c8:
    // 0x1eb4c8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1eb4cc:
    if (ctx->pc == 0x1EB4CCu) {
        ctx->pc = 0x1EB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4C8u;
        // 0x1eb4cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4D0u;
        goto label_1eb4d0;
    }
    ctx->pc = 0x1EB4C8u;
    {
        const bool branch_taken_0x1eb4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4C8u;
        // 0x1eb4cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4c8) {
            ctx->pc = 0x1EB5B8u;
            goto label_1eb5b8;
        }
    }
    ctx->pc = 0x1EB4D0u;
label_1eb4d0:
    // 0x1eb4d0: 0xc0743c0  jal         func_1D0F00
label_1eb4d4:
    if (ctx->pc == 0x1EB4D4u) {
        ctx->pc = 0x1EB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4D0u;
        // 0x1eb4d4: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4D8u;
        goto label_1eb4d8;
    }
    ctx->pc = 0x1EB4D0u;
    SET_GPR_U32(ctx, 31, 0x1EB4D8u);
    ctx->pc = 0x1EB4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB4D0u;
    // 0x1eb4d4: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1EB4D0u, 0x1EB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB4D8u;
label_1eb4d8:
    // 0x1eb4d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1eb4dc:
    if (ctx->pc == 0x1EB4DCu) {
        ctx->pc = 0x1EB4E0u;
        goto label_1eb4e0;
    }
    ctx->pc = 0x1EB4D8u;
    {
        const bool branch_taken_0x1eb4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb4d8) {
            ctx->pc = 0x1EB4F0u;
            goto label_1eb4f0;
        }
    }
    ctx->pc = 0x1EB4E0u;
label_1eb4e0:
    // 0x1eb4e0: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1eb4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1eb4e4:
    // 0x1eb4e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1eb4e8:
    // 0x1eb4e8: 0x320f809  jalr        $t9
label_1eb4ec:
    if (ctx->pc == 0x1EB4ECu) {
        ctx->pc = 0x1EB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4E8u;
        // 0x1eb4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4F0u;
        goto label_1eb4f0;
    }
    ctx->pc = 0x1EB4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EB4F0u);
        ctx->pc = 0x1EB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4E8u;
        // 0x1eb4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB4E8u, 0x1EB4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB4F0u;
label_1eb4f0:
    // 0x1eb4f0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1eb4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1eb4f4:
    // 0x1eb4f4: 0xc076800  jal         func_1DA000
label_1eb4f8:
    if (ctx->pc == 0x1EB4F8u) {
        ctx->pc = 0x1EB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4F4u;
        // 0x1eb4f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4FCu;
        goto label_1eb4fc;
    }
    ctx->pc = 0x1EB4F4u;
    SET_GPR_U32(ctx, 31, 0x1EB4FCu);
    ctx->pc = 0x1EB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB4F4u;
    // 0x1eb4f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EB4F4u, 0x1EB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB4FCu;
label_1eb4fc:
    // 0x1eb4fc: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1eb4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1eb500:
    // 0x1eb500: 0xc076800  jal         func_1DA000
label_1eb504:
    if (ctx->pc == 0x1EB504u) {
        ctx->pc = 0x1EB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB500u;
        // 0x1eb504: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB508u;
        goto label_1eb508;
    }
    ctx->pc = 0x1EB500u;
    SET_GPR_U32(ctx, 31, 0x1EB508u);
    ctx->pc = 0x1EB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB500u;
    // 0x1eb504: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EB500u, 0x1EB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB508u;
label_1eb508:
    // 0x1eb508: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1eb508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1eb50c:
    // 0x1eb50c: 0xc076800  jal         func_1DA000
label_1eb510:
    if (ctx->pc == 0x1EB510u) {
        ctx->pc = 0x1EB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB50Cu;
        // 0x1eb510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB514u;
        goto label_1eb514;
    }
    ctx->pc = 0x1EB50Cu;
    SET_GPR_U32(ctx, 31, 0x1EB514u);
    ctx->pc = 0x1EB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB50Cu;
    // 0x1eb510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EB50Cu, 0x1EB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB514u;
label_1eb514:
    // 0x1eb514: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x1eb514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_1eb518:
    // 0x1eb518: 0xc076800  jal         func_1DA000
label_1eb51c:
    if (ctx->pc == 0x1EB51Cu) {
        ctx->pc = 0x1EB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB518u;
        // 0x1eb51c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB520u;
        goto label_1eb520;
    }
    ctx->pc = 0x1EB518u;
    SET_GPR_U32(ctx, 31, 0x1EB520u);
    ctx->pc = 0x1EB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB518u;
    // 0x1eb51c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EB518u, 0x1EB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB520u;
label_1eb520:
    // 0x1eb520: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1eb520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1eb524:
    // 0x1eb524: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1eb524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1eb528:
    // 0x1eb528: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1eb528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1eb52c:
    // 0x1eb52c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1eb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1eb530:
    // 0x1eb530: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1eb530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1eb534:
    // 0x1eb534: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1eb534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1eb538:
    // 0x1eb538: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1eb538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1eb53c:
    // 0x1eb53c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1eb53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1eb540:
    // 0x1eb540: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1eb540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1eb544:
    // 0x1eb544: 0x92020033  lbu         $v0, 0x33($s0)
    ctx->pc = 0x1eb544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_1eb548:
    // 0x1eb548: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1eb54c:
    // 0x1eb54c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1eb550:
    if (ctx->pc == 0x1EB550u) {
        ctx->pc = 0x1EB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB54Cu;
        // 0x1eb550: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB554u;
        goto label_1eb554;
    }
    ctx->pc = 0x1EB54Cu;
    {
        const bool branch_taken_0x1eb54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB54Cu;
        // 0x1eb550: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb54c) {
            ctx->pc = 0x1EB5B0u;
            goto label_1eb5b0;
        }
    }
    ctx->pc = 0x1EB554u;
label_1eb554:
    // 0x1eb554: 0xc0743e0  jal         func_1D0F80
label_1eb558:
    if (ctx->pc == 0x1EB558u) {
        ctx->pc = 0x1EB55Cu;
        goto label_1eb55c;
    }
    ctx->pc = 0x1EB554u;
    SET_GPR_U32(ctx, 31, 0x1EB55Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1EB554u, 0x1EB55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB55Cu;
label_1eb55c:
    // 0x1eb55c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1eb55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1eb560:
    // 0x1eb560: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1eb560u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1eb564:
    // 0x1eb564: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1eb564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1eb568:
    // 0x1eb568: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1eb568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1eb56c:
    // 0x1eb56c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1eb570:
    if (ctx->pc == 0x1EB570u) {
        ctx->pc = 0x1EB574u;
        goto label_1eb574;
    }
    ctx->pc = 0x1EB56Cu;
    {
        const bool branch_taken_0x1eb56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb56c) {
            ctx->pc = 0x1EB588u;
            goto label_1eb588;
        }
    }
    ctx->pc = 0x1EB574u;
label_1eb574:
    // 0x1eb574: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1eb574u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb578:
    // 0x1eb578: 0x0  nop
    ctx->pc = 0x1eb578u;
    // NOP
label_1eb57c:
    // 0x1eb57c: 0x0  nop
    ctx->pc = 0x1eb57cu;
    // NOP
label_1eb580:
    // 0x1eb580: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb580u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb584:
    // 0x1eb584: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1eb584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1eb588:
    // 0x1eb588: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1eb588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1eb58c:
    // 0x1eb58c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1eb58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1eb590:
    // 0x1eb590: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1eb594:
    if (ctx->pc == 0x1EB594u) {
        ctx->pc = 0x1EB598u;
        goto label_1eb598;
    }
    ctx->pc = 0x1EB590u;
    {
        const bool branch_taken_0x1eb590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb590) {
            ctx->pc = 0x1EB5B0u;
            goto label_1eb5b0;
        }
    }
    ctx->pc = 0x1EB598u;
label_1eb598:
    // 0x1eb598: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1eb598u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eb59c:
    // 0x1eb59c: 0x0  nop
    ctx->pc = 0x1eb59cu;
    // NOP
label_1eb5a0:
    // 0x1eb5a0: 0x0  nop
    ctx->pc = 0x1eb5a0u;
    // NOP
label_1eb5a4:
    // 0x1eb5a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1eb5a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eb5a8:
    // 0x1eb5a8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1eb5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1eb5ac:
    // 0x1eb5ac: 0x0  nop
    ctx->pc = 0x1eb5acu;
    // NOP
label_1eb5b0:
    // 0x1eb5b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb5b4:
    // 0x1eb5b4: 0x0  nop
    ctx->pc = 0x1eb5b4u;
    // NOP
label_1eb5b8:
    // 0x1eb5b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eb5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb5bc:
    // 0x1eb5bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb5c0:
    // 0x1eb5c0: 0x3e00008  jr          $ra
label_1eb5c4:
    if (ctx->pc == 0x1EB5C4u) {
        ctx->pc = 0x1EB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5C0u;
        // 0x1eb5c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB5C8u;
        goto label_fallthrough_0x1eb5c0;
    }
    ctx->pc = 0x1EB5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5C0u;
        // 0x1eb5c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eb5c0:
    ctx->pc = 0x1EB5C8u;
}
