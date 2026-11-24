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

// Function: sub_003E94C0
// Address: 0x3e94c0 - 0x3e96d8
void sub_003E94C0_0x3e94c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E94C0_0x3e94c0");
#endif

    switch (ctx->pc) {
        case 0x3e94c0u: goto label_3e94c0;
        case 0x3e94c4u: goto label_3e94c4;
        case 0x3e94c8u: goto label_3e94c8;
        case 0x3e94ccu: goto label_3e94cc;
        case 0x3e94d0u: goto label_3e94d0;
        case 0x3e94d4u: goto label_3e94d4;
        case 0x3e94d8u: goto label_3e94d8;
        case 0x3e94dcu: goto label_3e94dc;
        case 0x3e94e0u: goto label_3e94e0;
        case 0x3e94e4u: goto label_3e94e4;
        case 0x3e94e8u: goto label_3e94e8;
        case 0x3e94ecu: goto label_3e94ec;
        case 0x3e94f0u: goto label_3e94f0;
        case 0x3e94f4u: goto label_3e94f4;
        case 0x3e94f8u: goto label_3e94f8;
        case 0x3e94fcu: goto label_3e94fc;
        case 0x3e9500u: goto label_3e9500;
        case 0x3e9504u: goto label_3e9504;
        case 0x3e9508u: goto label_3e9508;
        case 0x3e950cu: goto label_3e950c;
        case 0x3e9510u: goto label_3e9510;
        case 0x3e9514u: goto label_3e9514;
        case 0x3e9518u: goto label_3e9518;
        case 0x3e951cu: goto label_3e951c;
        case 0x3e9520u: goto label_3e9520;
        case 0x3e9524u: goto label_3e9524;
        case 0x3e9528u: goto label_3e9528;
        case 0x3e952cu: goto label_3e952c;
        case 0x3e9530u: goto label_3e9530;
        case 0x3e9534u: goto label_3e9534;
        case 0x3e9538u: goto label_3e9538;
        case 0x3e953cu: goto label_3e953c;
        case 0x3e9540u: goto label_3e9540;
        case 0x3e9544u: goto label_3e9544;
        case 0x3e9548u: goto label_3e9548;
        case 0x3e954cu: goto label_3e954c;
        case 0x3e9550u: goto label_3e9550;
        case 0x3e9554u: goto label_3e9554;
        case 0x3e9558u: goto label_3e9558;
        case 0x3e955cu: goto label_3e955c;
        case 0x3e9560u: goto label_3e9560;
        case 0x3e9564u: goto label_3e9564;
        case 0x3e9568u: goto label_3e9568;
        case 0x3e956cu: goto label_3e956c;
        case 0x3e9570u: goto label_3e9570;
        case 0x3e9574u: goto label_3e9574;
        case 0x3e9578u: goto label_3e9578;
        case 0x3e957cu: goto label_3e957c;
        case 0x3e9580u: goto label_3e9580;
        case 0x3e9584u: goto label_3e9584;
        case 0x3e9588u: goto label_3e9588;
        case 0x3e958cu: goto label_3e958c;
        case 0x3e9590u: goto label_3e9590;
        case 0x3e9594u: goto label_3e9594;
        case 0x3e9598u: goto label_3e9598;
        case 0x3e959cu: goto label_3e959c;
        case 0x3e95a0u: goto label_3e95a0;
        case 0x3e95a4u: goto label_3e95a4;
        case 0x3e95a8u: goto label_3e95a8;
        case 0x3e95acu: goto label_3e95ac;
        case 0x3e95b0u: goto label_3e95b0;
        case 0x3e95b4u: goto label_3e95b4;
        case 0x3e95b8u: goto label_3e95b8;
        case 0x3e95bcu: goto label_3e95bc;
        case 0x3e95c0u: goto label_3e95c0;
        case 0x3e95c4u: goto label_3e95c4;
        case 0x3e95c8u: goto label_3e95c8;
        case 0x3e95ccu: goto label_3e95cc;
        case 0x3e95d0u: goto label_3e95d0;
        case 0x3e95d4u: goto label_3e95d4;
        case 0x3e95d8u: goto label_3e95d8;
        case 0x3e95dcu: goto label_3e95dc;
        case 0x3e95e0u: goto label_3e95e0;
        case 0x3e95e4u: goto label_3e95e4;
        case 0x3e95e8u: goto label_3e95e8;
        case 0x3e95ecu: goto label_3e95ec;
        case 0x3e95f0u: goto label_3e95f0;
        case 0x3e95f4u: goto label_3e95f4;
        case 0x3e95f8u: goto label_3e95f8;
        case 0x3e95fcu: goto label_3e95fc;
        case 0x3e9600u: goto label_3e9600;
        case 0x3e9604u: goto label_3e9604;
        case 0x3e9608u: goto label_3e9608;
        case 0x3e960cu: goto label_3e960c;
        case 0x3e9610u: goto label_3e9610;
        case 0x3e9614u: goto label_3e9614;
        case 0x3e9618u: goto label_3e9618;
        case 0x3e961cu: goto label_3e961c;
        case 0x3e9620u: goto label_3e9620;
        case 0x3e9624u: goto label_3e9624;
        case 0x3e9628u: goto label_3e9628;
        case 0x3e962cu: goto label_3e962c;
        case 0x3e9630u: goto label_3e9630;
        case 0x3e9634u: goto label_3e9634;
        case 0x3e9638u: goto label_3e9638;
        case 0x3e963cu: goto label_3e963c;
        case 0x3e9640u: goto label_3e9640;
        case 0x3e9644u: goto label_3e9644;
        case 0x3e9648u: goto label_3e9648;
        case 0x3e964cu: goto label_3e964c;
        case 0x3e9650u: goto label_3e9650;
        case 0x3e9654u: goto label_3e9654;
        case 0x3e9658u: goto label_3e9658;
        case 0x3e965cu: goto label_3e965c;
        case 0x3e9660u: goto label_3e9660;
        case 0x3e9664u: goto label_3e9664;
        case 0x3e9668u: goto label_3e9668;
        case 0x3e966cu: goto label_3e966c;
        case 0x3e9670u: goto label_3e9670;
        case 0x3e9674u: goto label_3e9674;
        case 0x3e9678u: goto label_3e9678;
        case 0x3e967cu: goto label_3e967c;
        case 0x3e9680u: goto label_3e9680;
        case 0x3e9684u: goto label_3e9684;
        case 0x3e9688u: goto label_3e9688;
        case 0x3e968cu: goto label_3e968c;
        case 0x3e9690u: goto label_3e9690;
        case 0x3e9694u: goto label_3e9694;
        case 0x3e9698u: goto label_3e9698;
        case 0x3e969cu: goto label_3e969c;
        case 0x3e96a0u: goto label_3e96a0;
        case 0x3e96a4u: goto label_3e96a4;
        case 0x3e96a8u: goto label_3e96a8;
        case 0x3e96acu: goto label_3e96ac;
        case 0x3e96b0u: goto label_3e96b0;
        case 0x3e96b4u: goto label_3e96b4;
        case 0x3e96b8u: goto label_3e96b8;
        case 0x3e96bcu: goto label_3e96bc;
        case 0x3e96c0u: goto label_3e96c0;
        case 0x3e96c4u: goto label_3e96c4;
        case 0x3e96c8u: goto label_3e96c8;
        case 0x3e96ccu: goto label_3e96cc;
        case 0x3e96d0u: goto label_3e96d0;
        case 0x3e96d4u: goto label_3e96d4;
        default: break;
    }

    ctx->pc = 0x3e94c0u;

label_3e94c0:
    // 0x3e94c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e94c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e94c4:
    // 0x3e94c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e94c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e94c8:
    // 0x3e94c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e94c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e94cc:
    // 0x3e94cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e94d0:
    // 0x3e94d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e94d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e94d4:
    // 0x3e94d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e94d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e94d8:
    // 0x3e94d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e94d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e94dc:
    // 0x3e94dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e94dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e94e0:
    // 0x3e94e0: 0x240400f2  addiu       $a0, $zero, 0xF2
    ctx->pc = 0x3e94e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
label_3e94e4:
    // 0x3e94e4: 0xc0b2ebc  jal         func_2CBAF0
label_3e94e8:
    if (ctx->pc == 0x3E94E8u) {
        ctx->pc = 0x3E94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94E4u;
        // 0x3e94e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E94ECu;
        goto label_3e94ec;
    }
    ctx->pc = 0x3E94E4u;
    SET_GPR_U32(ctx, 31, 0x3E94ECu);
    ctx->pc = 0x3E94E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E94E4u;
    // 0x3e94e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x3E94E4u, 0x3E94ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E94ECu;
label_3e94ec:
    // 0x3e94ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e94ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e94f0:
    // 0x3e94f0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_3e94f4:
    if (ctx->pc == 0x3E94F4u) {
        ctx->pc = 0x3E94F8u;
        goto label_3e94f8;
    }
    ctx->pc = 0x3E94F0u;
    {
        const bool branch_taken_0x3e94f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e94f0) {
            ctx->pc = 0x3E9500u;
            goto label_3e9500;
        }
    }
    ctx->pc = 0x3E94F8u;
label_3e94f8:
    // 0x3e94f8: 0x10000071  b           . + 4 + (0x71 << 2)
label_3e94fc:
    if (ctx->pc == 0x3E94FCu) {
        ctx->pc = 0x3E94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94F8u;
        // 0x3e94fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9500u;
        goto label_3e9500;
    }
    ctx->pc = 0x3E94F8u;
    {
        const bool branch_taken_0x3e94f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94F8u;
        // 0x3e94fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e94f8) {
            ctx->pc = 0x3E96C0u;
            goto label_3e96c0;
        }
    }
    ctx->pc = 0x3E9500u;
label_3e9500:
    // 0x3e9500: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3e9500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3e9504:
    // 0x3e9504: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3e9504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3e9508:
    // 0x3e9508: 0x320f809  jalr        $t9
label_3e950c:
    if (ctx->pc == 0x3E950Cu) {
        ctx->pc = 0x3E950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9508u;
        // 0x3e950c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9510u;
        goto label_3e9510;
    }
    ctx->pc = 0x3E9508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E9510u);
        ctx->pc = 0x3E950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9508u;
        // 0x3e950c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9508u, 0x3E9510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9510u;
label_3e9510:
    // 0x3e9510: 0x7a460000  lq          $a2, 0x0($s2)
    ctx->pc = 0x3e9510u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3e9514:
    // 0x3e9514: 0x3c024510  lui         $v0, 0x4510
    ctx->pc = 0x3e9514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17680 << 16));
label_3e9518:
    // 0x3e9518: 0x344514f6  ori         $a1, $v0, 0x14F6
    ctx->pc = 0x3e9518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5366);
label_3e951c:
    // 0x3e951c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3e951cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3e9520:
    // 0x3e9520: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3e9520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3e9524:
    // 0x3e9524: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x3e9524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3e9528:
    // 0x3e9528: 0x7e060020  sq          $a2, 0x20($s0)
    ctx->pc = 0x3e9528u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 6));
label_3e952c:
    // 0x3e952c: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x3e952cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
label_3e9530:
    // 0x3e9530: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x3e9530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
label_3e9534:
    // 0x3e9534: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e9534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3e9538:
    // 0x3e9538: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e9538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3e953c:
    // 0x3e953c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9540:
    // 0x3e9540: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e9540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3e9544:
    // 0x3e9544: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3e9544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3e9548:
    // 0x3e9548: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x3e9548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_3e954c:
    // 0x3e954c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3e954cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_3e9550:
    // 0x3e9550: 0x2c410801  sltiu       $at, $v0, 0x801
    ctx->pc = 0x3e9550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
label_3e9554:
    // 0x3e9554: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_3e9558:
    if (ctx->pc == 0x3E9558u) {
        ctx->pc = 0x3E9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9554u;
        // 0x3e9558: 0x831018  mult        $v0, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E955Cu;
        goto label_3e955c;
    }
    ctx->pc = 0x3E9554u;
    {
        const bool branch_taken_0x3e9554 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9554u;
        // 0x3e9558: 0x831018  mult        $v0, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9554) {
            ctx->pc = 0x3E9578u;
            goto label_3e9578;
        }
    }
    ctx->pc = 0x3E955Cu;
label_3e955c:
    // 0x3e955c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e955cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9560:
    // 0x3e9560: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e9560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3e9564:
    // 0x3e9564: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e9564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3e9568:
    // 0x3e9568: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3e9568u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3e956c:
    // 0x3e956c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3e956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_3e9570:
    // 0x3e9570: 0x10000017  b           . + 4 + (0x17 << 2)
label_3e9574:
    if (ctx->pc == 0x3E9574u) {
        ctx->pc = 0x3E9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9570u;
        // 0x3e9574: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9578u;
        goto label_3e9578;
    }
    ctx->pc = 0x3E9570u;
    {
        const bool branch_taken_0x3e9570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9570u;
        // 0x3e9574: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9570) {
            ctx->pc = 0x3E95D0u;
            goto label_3e95d0;
        }
    }
    ctx->pc = 0x3E9578u;
label_3e9578:
    // 0x3e9578: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x3e9578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3e957c:
    // 0x3e957c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9580:
    // 0x3e9580: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e9580u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3e9584:
    // 0x3e9584: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3e9584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3e9588:
    // 0x3e9588: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x3e9588u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_3e958c:
    // 0x3e958c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3e958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_3e9590:
    // 0x3e9590: 0x2c41f800  sltiu       $at, $v0, -0x800
    ctx->pc = 0x3e9590u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294965248) ? 1 : 0);
label_3e9594:
    // 0x3e9594: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_3e9598:
    if (ctx->pc == 0x3E9598u) {
        ctx->pc = 0x3E9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9594u;
        // 0x3e9598: 0x831018  mult        $v0, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E959Cu;
        goto label_3e959c;
    }
    ctx->pc = 0x3E9594u;
    {
        const bool branch_taken_0x3e9594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9594u;
        // 0x3e9598: 0x831018  mult        $v0, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9594) {
            ctx->pc = 0x3E95B8u;
            goto label_3e95b8;
        }
    }
    ctx->pc = 0x3E959Cu;
label_3e959c:
    // 0x3e959c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e95a0:
    // 0x3e95a0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e95a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3e95a4:
    // 0x3e95a4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3e95a8:
    // 0x3e95a8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3e95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3e95ac:
    // 0x3e95ac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3e95acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_3e95b0:
    // 0x3e95b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e95b4:
    if (ctx->pc == 0x3E95B4u) {
        ctx->pc = 0x3E95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95B0u;
        // 0x3e95b4: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E95B8u;
        goto label_3e95b8;
    }
    ctx->pc = 0x3E95B0u;
    {
        const bool branch_taken_0x3e95b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95B0u;
        // 0x3e95b4: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e95b0) {
            ctx->pc = 0x3E95D0u;
            goto label_3e95d0;
        }
    }
    ctx->pc = 0x3E95B8u;
label_3e95b8:
    // 0x3e95b8: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x3e95b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3e95bc:
    // 0x3e95bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e95c0:
    // 0x3e95c0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e95c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3e95c4:
    // 0x3e95c4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3e95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3e95c8:
    // 0x3e95c8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3e95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3e95cc:
    // 0x3e95cc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3e95ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_3e95d0:
    // 0x3e95d0: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3e95d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_3e95d4:
    // 0x3e95d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e95d8:
    // 0x3e95d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e95d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e95dc:
    // 0x3e95dc: 0xae022b28  sw          $v0, 0x2B28($s0)
    ctx->pc = 0x3e95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11048), GPR_U32(ctx, 2));
label_3e95e0:
    // 0x3e95e0: 0x922208e8  lbu         $v0, 0x8E8($s1)
    ctx->pc = 0x3e95e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_3e95e4:
    // 0x3e95e4: 0xc0fa5f4  jal         func_3E97D0
label_3e95e8:
    if (ctx->pc == 0x3E95E8u) {
        ctx->pc = 0x3E95E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95E4u;
        // 0x3e95e8: 0xa6022b2c  sh          $v0, 0x2B2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11052), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E95ECu;
        goto label_3e95ec;
    }
    ctx->pc = 0x3E95E4u;
    SET_GPR_U32(ctx, 31, 0x3E95ECu);
    ctx->pc = 0x3E95E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E95E4u;
    // 0x3e95e8: 0xa6022b2c  sh          $v0, 0x2B2C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11052), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E97D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E97D0u, 0x3E95E4u, 0x3E95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E95ECu;
label_3e95ec:
    // 0x3e95ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e95ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e95f0:
    // 0x3e95f0: 0xc0fa5b8  jal         func_3E96E0
label_3e95f4:
    if (ctx->pc == 0x3E95F4u) {
        ctx->pc = 0x3E95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95F0u;
        // 0x3e95f4: 0xa2022b54  sb          $v0, 0x2B54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11092), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E95F8u;
        goto label_3e95f8;
    }
    ctx->pc = 0x3E95F0u;
    SET_GPR_U32(ctx, 31, 0x3E95F8u);
    ctx->pc = 0x3E95F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E95F0u;
    // 0x3e95f4: 0xa2022b54  sb          $v0, 0x2B54($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11092), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E96E0u, 0x3E95F0u, 0x3E95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E95F8u;
label_3e95f8:
    // 0x3e95f8: 0xa2022b55  sb          $v0, 0x2B55($s0)
    ctx->pc = 0x3e95f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 2));
label_3e95fc:
    // 0x3e95fc: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3e95fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
label_3e9600:
    // 0x3e9600: 0x82072b55  lb          $a3, 0x2B55($s0)
    ctx->pc = 0x3e9600u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
label_3e9604:
    // 0x3e9604: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3e9604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
label_3e9608:
    // 0x3e9608: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e9608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_3e960c:
    // 0x3e960c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_3e9610:
    // 0x3e9610: 0x24a549f0  addiu       $a1, $a1, 0x49F0
    ctx->pc = 0x3e9610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18928));
label_3e9614:
    // 0x3e9614: 0x248449f4  addiu       $a0, $a0, 0x49F4
    ctx->pc = 0x3e9614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18932));
label_3e9618:
    // 0x3e9618: 0x246349f8  addiu       $v1, $v1, 0x49F8
    ctx->pc = 0x3e9618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18936));
label_3e961c:
    // 0x3e961c: 0x244249fa  addiu       $v0, $v0, 0x49FA
    ctx->pc = 0x3e961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18938));
label_3e9620:
    // 0x3e9620: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x3e9620u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3e9624:
    // 0x3e9624: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3e9624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3e9628:
    // 0x3e9628: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3e9628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3e962c:
    // 0x3e962c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3e9630:
    // 0x3e9630: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3e9630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e9634:
    // 0x3e9634: 0xe6002b58  swc1        $f0, 0x2B58($s0)
    ctx->pc = 0x3e9634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11096), bits); }
label_3e9638:
    // 0x3e9638: 0x82062b55  lb          $a2, 0x2B55($s0)
    ctx->pc = 0x3e9638u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
label_3e963c:
    // 0x3e963c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x3e963cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3e9640:
    // 0x3e9640: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e9640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3e9644:
    // 0x3e9644: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3e9644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3e9648:
    // 0x3e9648: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e9648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e964c:
    // 0x3e964c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3e964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e9650:
    // 0x3e9650: 0xe6002b5c  swc1        $f0, 0x2B5C($s0)
    ctx->pc = 0x3e9650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11100), bits); }
label_3e9654:
    // 0x3e9654: 0x82052b55  lb          $a1, 0x2B55($s0)
    ctx->pc = 0x3e9654u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
label_3e9658:
    // 0x3e9658: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3e9658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e965c:
    // 0x3e965c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e965cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e9660:
    // 0x3e9660: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e9660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3e9664:
    // 0x3e9664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e9664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e9668:
    // 0x3e9668: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e9668u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3e966c:
    // 0x3e966c: 0xa6032b60  sh          $v1, 0x2B60($s0)
    ctx->pc = 0x3e966cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11104), (uint16_t)GPR_U32(ctx, 3));
label_3e9670:
    // 0x3e9670: 0xae002b64  sw          $zero, 0x2B64($s0)
    ctx->pc = 0x3e9670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11108), GPR_U32(ctx, 0));
label_3e9674:
    // 0x3e9674: 0x82042b55  lb          $a0, 0x2B55($s0)
    ctx->pc = 0x3e9674u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
label_3e9678:
    // 0x3e9678: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3e9678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3e967c:
    // 0x3e967c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e9680:
    // 0x3e9680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e9680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e9684:
    // 0x3e9684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e9684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e9688:
    // 0x3e9688: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3e9688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3e968c:
    // 0x3e968c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_3e9690:
    if (ctx->pc == 0x3E9690u) {
        ctx->pc = 0x3E9694u;
        goto label_3e9694;
    }
    ctx->pc = 0x3E968Cu;
    {
        const bool branch_taken_0x3e968c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3e968c) {
            ctx->pc = 0x3E96A8u;
            goto label_3e96a8;
        }
    }
    ctx->pc = 0x3E9694u;
label_3e9694:
    // 0x3e9694: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3e9694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_3e9698:
    // 0x3e9698: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e9698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3e969c:
    // 0x3e969c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e969cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e96a0:
    // 0x3e96a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e96a4:
    if (ctx->pc == 0x3E96A4u) {
        ctx->pc = 0x3E96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96A0u;
        // 0x3e96a4: 0xe6002b68  swc1        $f0, 0x2B68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E96A8u;
        goto label_3e96a8;
    }
    ctx->pc = 0x3E96A0u;
    {
        const bool branch_taken_0x3e96a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96A0u;
        // 0x3e96a4: 0xe6002b68  swc1        $f0, 0x2B68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e96a0) {
            ctx->pc = 0x3E96B8u;
            goto label_3e96b8;
        }
    }
    ctx->pc = 0x3E96A8u;
label_3e96a8:
    // 0x3e96a8: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x3e96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_3e96ac:
    // 0x3e96ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e96acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3e96b0:
    // 0x3e96b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e96b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e96b4:
    // 0x3e96b4: 0xe6002b68  swc1        $f0, 0x2B68($s0)
    ctx->pc = 0x3e96b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11112), bits); }
label_3e96b8:
    // 0x3e96b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e96bc:
    // 0x3e96bc: 0x0  nop
    ctx->pc = 0x3e96bcu;
    // NOP
label_3e96c0:
    // 0x3e96c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e96c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e96c4:
    // 0x3e96c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e96c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e96c8:
    // 0x3e96c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e96c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e96cc:
    // 0x3e96cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e96ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e96d0:
    // 0x3e96d0: 0x3e00008  jr          $ra
label_3e96d4:
    if (ctx->pc == 0x3E96D4u) {
        ctx->pc = 0x3E96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96D0u;
        // 0x3e96d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E96D8u;
        goto label_fallthrough_0x3e96d0;
    }
    ctx->pc = 0x3E96D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E96D0u;
        // 0x3e96d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E96D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e96d0:
    ctx->pc = 0x3E96D8u;
}
