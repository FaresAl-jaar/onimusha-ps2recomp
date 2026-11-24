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

// Function: sub_001E94F0
// Address: 0x1e94f0 - 0x1e9640
void sub_001E94F0_0x1e94f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E94F0_0x1e94f0");
#endif

    switch (ctx->pc) {
        case 0x1e94f0u: goto label_1e94f0;
        case 0x1e94f4u: goto label_1e94f4;
        case 0x1e94f8u: goto label_1e94f8;
        case 0x1e94fcu: goto label_1e94fc;
        case 0x1e9500u: goto label_1e9500;
        case 0x1e9504u: goto label_1e9504;
        case 0x1e9508u: goto label_1e9508;
        case 0x1e950cu: goto label_1e950c;
        case 0x1e9510u: goto label_1e9510;
        case 0x1e9514u: goto label_1e9514;
        case 0x1e9518u: goto label_1e9518;
        case 0x1e951cu: goto label_1e951c;
        case 0x1e9520u: goto label_1e9520;
        case 0x1e9524u: goto label_1e9524;
        case 0x1e9528u: goto label_1e9528;
        case 0x1e952cu: goto label_1e952c;
        case 0x1e9530u: goto label_1e9530;
        case 0x1e9534u: goto label_1e9534;
        case 0x1e9538u: goto label_1e9538;
        case 0x1e953cu: goto label_1e953c;
        case 0x1e9540u: goto label_1e9540;
        case 0x1e9544u: goto label_1e9544;
        case 0x1e9548u: goto label_1e9548;
        case 0x1e954cu: goto label_1e954c;
        case 0x1e9550u: goto label_1e9550;
        case 0x1e9554u: goto label_1e9554;
        case 0x1e9558u: goto label_1e9558;
        case 0x1e955cu: goto label_1e955c;
        case 0x1e9560u: goto label_1e9560;
        case 0x1e9564u: goto label_1e9564;
        case 0x1e9568u: goto label_1e9568;
        case 0x1e956cu: goto label_1e956c;
        case 0x1e9570u: goto label_1e9570;
        case 0x1e9574u: goto label_1e9574;
        case 0x1e9578u: goto label_1e9578;
        case 0x1e957cu: goto label_1e957c;
        case 0x1e9580u: goto label_1e9580;
        case 0x1e9584u: goto label_1e9584;
        case 0x1e9588u: goto label_1e9588;
        case 0x1e958cu: goto label_1e958c;
        case 0x1e9590u: goto label_1e9590;
        case 0x1e9594u: goto label_1e9594;
        case 0x1e9598u: goto label_1e9598;
        case 0x1e959cu: goto label_1e959c;
        case 0x1e95a0u: goto label_1e95a0;
        case 0x1e95a4u: goto label_1e95a4;
        case 0x1e95a8u: goto label_1e95a8;
        case 0x1e95acu: goto label_1e95ac;
        case 0x1e95b0u: goto label_1e95b0;
        case 0x1e95b4u: goto label_1e95b4;
        case 0x1e95b8u: goto label_1e95b8;
        case 0x1e95bcu: goto label_1e95bc;
        case 0x1e95c0u: goto label_1e95c0;
        case 0x1e95c4u: goto label_1e95c4;
        case 0x1e95c8u: goto label_1e95c8;
        case 0x1e95ccu: goto label_1e95cc;
        case 0x1e95d0u: goto label_1e95d0;
        case 0x1e95d4u: goto label_1e95d4;
        case 0x1e95d8u: goto label_1e95d8;
        case 0x1e95dcu: goto label_1e95dc;
        case 0x1e95e0u: goto label_1e95e0;
        case 0x1e95e4u: goto label_1e95e4;
        case 0x1e95e8u: goto label_1e95e8;
        case 0x1e95ecu: goto label_1e95ec;
        case 0x1e95f0u: goto label_1e95f0;
        case 0x1e95f4u: goto label_1e95f4;
        case 0x1e95f8u: goto label_1e95f8;
        case 0x1e95fcu: goto label_1e95fc;
        case 0x1e9600u: goto label_1e9600;
        case 0x1e9604u: goto label_1e9604;
        case 0x1e9608u: goto label_1e9608;
        case 0x1e960cu: goto label_1e960c;
        case 0x1e9610u: goto label_1e9610;
        case 0x1e9614u: goto label_1e9614;
        case 0x1e9618u: goto label_1e9618;
        case 0x1e961cu: goto label_1e961c;
        case 0x1e9620u: goto label_1e9620;
        case 0x1e9624u: goto label_1e9624;
        case 0x1e9628u: goto label_1e9628;
        case 0x1e962cu: goto label_1e962c;
        case 0x1e9630u: goto label_1e9630;
        case 0x1e9634u: goto label_1e9634;
        case 0x1e9638u: goto label_1e9638;
        case 0x1e963cu: goto label_1e963c;
        default: break;
    }

    ctx->pc = 0x1e94f0u;

label_1e94f0:
    // 0x1e94f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e94f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e94f4:
    // 0x1e94f4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e94f8:
    // 0x1e94f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e94f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e94fc:
    // 0x1e94fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e94fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9500:
    // 0x1e9500: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e9500u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9504:
    // 0x1e9504: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e9508:
    if (ctx->pc == 0x1E9508u) {
        ctx->pc = 0x1E9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9504u;
        // 0x1e9508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E950Cu;
        goto label_1e950c;
    }
    ctx->pc = 0x1E9504u;
    {
        const bool branch_taken_0x1e9504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9504u;
        // 0x1e9508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9504) {
            ctx->pc = 0x1E9518u;
            goto label_1e9518;
        }
    }
    ctx->pc = 0x1E950Cu;
label_1e950c:
    // 0x1e950c: 0x10000048  b           . + 4 + (0x48 << 2)
label_1e9510:
    if (ctx->pc == 0x1E9510u) {
        ctx->pc = 0x1E9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E950Cu;
        // 0x1e9510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9514u;
        goto label_1e9514;
    }
    ctx->pc = 0x1E950Cu;
    {
        const bool branch_taken_0x1e950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E950Cu;
        // 0x1e9510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e950c) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E9514u;
label_1e9514:
    // 0x1e9514: 0x0  nop
    ctx->pc = 0x1e9514u;
    // NOP
label_1e9518:
    // 0x1e9518: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e9518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e951c:
    // 0x1e951c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e9520:
    // 0x1e9520: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e9520u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e9524:
    // 0x1e9524: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e9524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9528:
    // 0x1e9528: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e9528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e952c:
    // 0x1e952c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e952cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e9530:
    // 0x1e9530: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1e9530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1e9534:
    // 0x1e9534: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e9538:
    if (ctx->pc == 0x1E9538u) {
        ctx->pc = 0x1E953Cu;
        goto label_1e953c;
    }
    ctx->pc = 0x1E9534u;
    {
        const bool branch_taken_0x1e9534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9534) {
            ctx->pc = 0x1E9558u;
            goto label_1e9558;
        }
    }
    ctx->pc = 0x1E953Cu;
label_1e953c:
    // 0x1e953c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e953cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9540:
    // 0x1e9540: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e9540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e9544:
    // 0x1e9544: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e9548:
    if (ctx->pc == 0x1E9548u) {
        ctx->pc = 0x1E9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9544u;
        // 0x1e9548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E954Cu;
        goto label_1e954c;
    }
    ctx->pc = 0x1E9544u;
    {
        const bool branch_taken_0x1e9544 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9544u;
        // 0x1e9548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9544) {
            ctx->pc = 0x1E9580u;
            goto label_1e9580;
        }
    }
    ctx->pc = 0x1E954Cu;
label_1e954c:
    // 0x1e954c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e954cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e9550:
    // 0x1e9550: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e9554:
    if (ctx->pc == 0x1E9554u) {
        ctx->pc = 0x1E9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9550u;
        // 0x1e9554: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9558u;
        goto label_1e9558;
    }
    ctx->pc = 0x1E9550u;
    {
        const bool branch_taken_0x1e9550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9550u;
        // 0x1e9554: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9550) {
            ctx->pc = 0x1E9580u;
            goto label_1e9580;
        }
    }
    ctx->pc = 0x1E9558u;
label_1e9558:
    // 0x1e9558: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e9558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e955c:
    // 0x1e955c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e955cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e9560:
    // 0x1e9560: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e9564:
    if (ctx->pc == 0x1E9564u) {
        ctx->pc = 0x1E9568u;
        goto label_1e9568;
    }
    ctx->pc = 0x1E9560u;
    {
        const bool branch_taken_0x1e9560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9560) {
            ctx->pc = 0x1E9580u;
            goto label_1e9580;
        }
    }
    ctx->pc = 0x1E9568u;
label_1e9568:
    // 0x1e9568: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e9568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e956c:
    // 0x1e956c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e956cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e9570:
    // 0x1e9570: 0x320f809  jalr        $t9
label_1e9574:
    if (ctx->pc == 0x1E9574u) {
        ctx->pc = 0x1E9578u;
        goto label_1e9578;
    }
    ctx->pc = 0x1E9570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9578u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9570u, 0x1E9578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9578u;
label_1e9578:
    // 0x1e9578: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e957c:
    if (ctx->pc == 0x1E957Cu) {
        ctx->pc = 0x1E957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9578u;
        // 0x1e957c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9580u;
        goto label_1e9580;
    }
    ctx->pc = 0x1E9578u;
    {
        const bool branch_taken_0x1e9578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9578u;
        // 0x1e957c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9578) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E9580u;
label_1e9580:
    // 0x1e9580: 0xc0743c0  jal         func_1D0F00
label_1e9584:
    if (ctx->pc == 0x1E9584u) {
        ctx->pc = 0x1E9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9580u;
        // 0x1e9584: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9588u;
        goto label_1e9588;
    }
    ctx->pc = 0x1E9580u;
    SET_GPR_U32(ctx, 31, 0x1E9588u);
    ctx->pc = 0x1E9584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9580u;
    // 0x1e9584: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1E9580u, 0x1E9588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9588u;
label_1e9588:
    // 0x1e9588: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e958c:
    if (ctx->pc == 0x1E958Cu) {
        ctx->pc = 0x1E9590u;
        goto label_1e9590;
    }
    ctx->pc = 0x1E9588u;
    {
        const bool branch_taken_0x1e9588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9588) {
            ctx->pc = 0x1E95A0u;
            goto label_1e95a0;
        }
    }
    ctx->pc = 0x1E9590u;
label_1e9590:
    // 0x1e9590: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e9594:
    // 0x1e9594: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e9594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e9598:
    // 0x1e9598: 0x320f809  jalr        $t9
label_1e959c:
    if (ctx->pc == 0x1E959Cu) {
        ctx->pc = 0x1E959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9598u;
        // 0x1e959c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E95A0u;
        goto label_1e95a0;
    }
    ctx->pc = 0x1E9598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E95A0u);
        ctx->pc = 0x1E959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9598u;
        // 0x1e959c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9598u, 0x1E95A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E95A0u;
label_1e95a0:
    // 0x1e95a0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e95a4:
    // 0x1e95a4: 0xc076800  jal         func_1DA000
label_1e95a8:
    if (ctx->pc == 0x1E95A8u) {
        ctx->pc = 0x1E95A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95A4u;
        // 0x1e95a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E95ACu;
        goto label_1e95ac;
    }
    ctx->pc = 0x1E95A4u;
    SET_GPR_U32(ctx, 31, 0x1E95ACu);
    ctx->pc = 0x1E95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E95A4u;
    // 0x1e95a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E95A4u, 0x1E95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E95ACu;
label_1e95ac:
    // 0x1e95ac: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e95acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e95b0:
    // 0x1e95b0: 0xc076800  jal         func_1DA000
label_1e95b4:
    if (ctx->pc == 0x1E95B4u) {
        ctx->pc = 0x1E95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95B0u;
        // 0x1e95b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E95B8u;
        goto label_1e95b8;
    }
    ctx->pc = 0x1E95B0u;
    SET_GPR_U32(ctx, 31, 0x1E95B8u);
    ctx->pc = 0x1E95B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E95B0u;
    // 0x1e95b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E95B0u, 0x1E95B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E95B8u;
label_1e95b8:
    // 0x1e95b8: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x1e95b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1e95bc:
    // 0x1e95bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e95bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e95c0:
    // 0x1e95c0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1e95c4:
    if (ctx->pc == 0x1E95C4u) {
        ctx->pc = 0x1E95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95C0u;
        // 0x1e95c4: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E95C8u;
        goto label_1e95c8;
    }
    ctx->pc = 0x1E95C0u;
    {
        const bool branch_taken_0x1e95c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95C0u;
        // 0x1e95c4: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95c0) {
            ctx->pc = 0x1E9628u;
            goto label_1e9628;
        }
    }
    ctx->pc = 0x1E95C8u;
label_1e95c8:
    // 0x1e95c8: 0xc0743e0  jal         func_1D0F80
label_1e95cc:
    if (ctx->pc == 0x1E95CCu) {
        ctx->pc = 0x1E95D0u;
        goto label_1e95d0;
    }
    ctx->pc = 0x1E95C8u;
    SET_GPR_U32(ctx, 31, 0x1E95D0u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1E95C8u, 0x1E95D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E95D0u;
label_1e95d0:
    // 0x1e95d0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e95d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e95d4:
    // 0x1e95d4: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1e95d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1e95d8:
    // 0x1e95d8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1e95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1e95dc:
    // 0x1e95dc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1e95dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e95e0:
    // 0x1e95e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e95e4:
    if (ctx->pc == 0x1E95E4u) {
        ctx->pc = 0x1E95E8u;
        goto label_1e95e8;
    }
    ctx->pc = 0x1E95E0u;
    {
        const bool branch_taken_0x1e95e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e95e0) {
            ctx->pc = 0x1E9600u;
            goto label_1e9600;
        }
    }
    ctx->pc = 0x1E95E8u;
label_1e95e8:
    // 0x1e95e8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1e95e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e95ec:
    // 0x1e95ec: 0x0  nop
    ctx->pc = 0x1e95ecu;
    // NOP
label_1e95f0:
    // 0x1e95f0: 0x0  nop
    ctx->pc = 0x1e95f0u;
    // NOP
label_1e95f4:
    // 0x1e95f4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e95f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e95f8:
    // 0x1e95f8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1e95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1e95fc:
    // 0x1e95fc: 0x0  nop
    ctx->pc = 0x1e95fcu;
    // NOP
label_1e9600:
    // 0x1e9600: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1e9600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1e9604:
    // 0x1e9604: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1e9604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1e9608:
    // 0x1e9608: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e960c:
    if (ctx->pc == 0x1E960Cu) {
        ctx->pc = 0x1E9610u;
        goto label_1e9610;
    }
    ctx->pc = 0x1E9608u;
    {
        const bool branch_taken_0x1e9608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9608) {
            ctx->pc = 0x1E9628u;
            goto label_1e9628;
        }
    }
    ctx->pc = 0x1E9610u;
label_1e9610:
    // 0x1e9610: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1e9610u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e9614:
    // 0x1e9614: 0x0  nop
    ctx->pc = 0x1e9614u;
    // NOP
label_1e9618:
    // 0x1e9618: 0x0  nop
    ctx->pc = 0x1e9618u;
    // NOP
label_1e961c:
    // 0x1e961c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e961cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e9620:
    // 0x1e9620: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1e9620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1e9624:
    // 0x1e9624: 0x0  nop
    ctx->pc = 0x1e9624u;
    // NOP
label_1e9628:
    // 0x1e9628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e962c:
    // 0x1e962c: 0x0  nop
    ctx->pc = 0x1e962cu;
    // NOP
label_1e9630:
    // 0x1e9630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9634:
    // 0x1e9634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9638:
    // 0x1e9638: 0x3e00008  jr          $ra
label_1e963c:
    if (ctx->pc == 0x1E963Cu) {
        ctx->pc = 0x1E963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9638u;
        // 0x1e963c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9640u;
        goto label_fallthrough_0x1e9638;
    }
    ctx->pc = 0x1E9638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9638u;
        // 0x1e963c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e9638:
    ctx->pc = 0x1E9640u;
}
