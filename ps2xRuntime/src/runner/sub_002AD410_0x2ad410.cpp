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

// Function: sub_002AD410
// Address: 0x2ad410 - 0x2ad6e0
void sub_002AD410_0x2ad410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD410_0x2ad410");
#endif

    switch (ctx->pc) {
        case 0x2ad410u: goto label_2ad410;
        case 0x2ad414u: goto label_2ad414;
        case 0x2ad418u: goto label_2ad418;
        case 0x2ad41cu: goto label_2ad41c;
        case 0x2ad420u: goto label_2ad420;
        case 0x2ad424u: goto label_2ad424;
        case 0x2ad428u: goto label_2ad428;
        case 0x2ad42cu: goto label_2ad42c;
        case 0x2ad430u: goto label_2ad430;
        case 0x2ad434u: goto label_2ad434;
        case 0x2ad438u: goto label_2ad438;
        case 0x2ad43cu: goto label_2ad43c;
        case 0x2ad440u: goto label_2ad440;
        case 0x2ad444u: goto label_2ad444;
        case 0x2ad448u: goto label_2ad448;
        case 0x2ad44cu: goto label_2ad44c;
        case 0x2ad450u: goto label_2ad450;
        case 0x2ad454u: goto label_2ad454;
        case 0x2ad458u: goto label_2ad458;
        case 0x2ad45cu: goto label_2ad45c;
        case 0x2ad460u: goto label_2ad460;
        case 0x2ad464u: goto label_2ad464;
        case 0x2ad468u: goto label_2ad468;
        case 0x2ad46cu: goto label_2ad46c;
        case 0x2ad470u: goto label_2ad470;
        case 0x2ad474u: goto label_2ad474;
        case 0x2ad478u: goto label_2ad478;
        case 0x2ad47cu: goto label_2ad47c;
        case 0x2ad480u: goto label_2ad480;
        case 0x2ad484u: goto label_2ad484;
        case 0x2ad488u: goto label_2ad488;
        case 0x2ad48cu: goto label_2ad48c;
        case 0x2ad490u: goto label_2ad490;
        case 0x2ad494u: goto label_2ad494;
        case 0x2ad498u: goto label_2ad498;
        case 0x2ad49cu: goto label_2ad49c;
        case 0x2ad4a0u: goto label_2ad4a0;
        case 0x2ad4a4u: goto label_2ad4a4;
        case 0x2ad4a8u: goto label_2ad4a8;
        case 0x2ad4acu: goto label_2ad4ac;
        case 0x2ad4b0u: goto label_2ad4b0;
        case 0x2ad4b4u: goto label_2ad4b4;
        case 0x2ad4b8u: goto label_2ad4b8;
        case 0x2ad4bcu: goto label_2ad4bc;
        case 0x2ad4c0u: goto label_2ad4c0;
        case 0x2ad4c4u: goto label_2ad4c4;
        case 0x2ad4c8u: goto label_2ad4c8;
        case 0x2ad4ccu: goto label_2ad4cc;
        case 0x2ad4d0u: goto label_2ad4d0;
        case 0x2ad4d4u: goto label_2ad4d4;
        case 0x2ad4d8u: goto label_2ad4d8;
        case 0x2ad4dcu: goto label_2ad4dc;
        case 0x2ad4e0u: goto label_2ad4e0;
        case 0x2ad4e4u: goto label_2ad4e4;
        case 0x2ad4e8u: goto label_2ad4e8;
        case 0x2ad4ecu: goto label_2ad4ec;
        case 0x2ad4f0u: goto label_2ad4f0;
        case 0x2ad4f4u: goto label_2ad4f4;
        case 0x2ad4f8u: goto label_2ad4f8;
        case 0x2ad4fcu: goto label_2ad4fc;
        case 0x2ad500u: goto label_2ad500;
        case 0x2ad504u: goto label_2ad504;
        case 0x2ad508u: goto label_2ad508;
        case 0x2ad50cu: goto label_2ad50c;
        case 0x2ad510u: goto label_2ad510;
        case 0x2ad514u: goto label_2ad514;
        case 0x2ad518u: goto label_2ad518;
        case 0x2ad51cu: goto label_2ad51c;
        case 0x2ad520u: goto label_2ad520;
        case 0x2ad524u: goto label_2ad524;
        case 0x2ad528u: goto label_2ad528;
        case 0x2ad52cu: goto label_2ad52c;
        case 0x2ad530u: goto label_2ad530;
        case 0x2ad534u: goto label_2ad534;
        case 0x2ad538u: goto label_2ad538;
        case 0x2ad53cu: goto label_2ad53c;
        case 0x2ad540u: goto label_2ad540;
        case 0x2ad544u: goto label_2ad544;
        case 0x2ad548u: goto label_2ad548;
        case 0x2ad54cu: goto label_2ad54c;
        case 0x2ad550u: goto label_2ad550;
        case 0x2ad554u: goto label_2ad554;
        case 0x2ad558u: goto label_2ad558;
        case 0x2ad55cu: goto label_2ad55c;
        case 0x2ad560u: goto label_2ad560;
        case 0x2ad564u: goto label_2ad564;
        case 0x2ad568u: goto label_2ad568;
        case 0x2ad56cu: goto label_2ad56c;
        case 0x2ad570u: goto label_2ad570;
        case 0x2ad574u: goto label_2ad574;
        case 0x2ad578u: goto label_2ad578;
        case 0x2ad57cu: goto label_2ad57c;
        case 0x2ad580u: goto label_2ad580;
        case 0x2ad584u: goto label_2ad584;
        case 0x2ad588u: goto label_2ad588;
        case 0x2ad58cu: goto label_2ad58c;
        case 0x2ad590u: goto label_2ad590;
        case 0x2ad594u: goto label_2ad594;
        case 0x2ad598u: goto label_2ad598;
        case 0x2ad59cu: goto label_2ad59c;
        case 0x2ad5a0u: goto label_2ad5a0;
        case 0x2ad5a4u: goto label_2ad5a4;
        case 0x2ad5a8u: goto label_2ad5a8;
        case 0x2ad5acu: goto label_2ad5ac;
        case 0x2ad5b0u: goto label_2ad5b0;
        case 0x2ad5b4u: goto label_2ad5b4;
        case 0x2ad5b8u: goto label_2ad5b8;
        case 0x2ad5bcu: goto label_2ad5bc;
        case 0x2ad5c0u: goto label_2ad5c0;
        case 0x2ad5c4u: goto label_2ad5c4;
        case 0x2ad5c8u: goto label_2ad5c8;
        case 0x2ad5ccu: goto label_2ad5cc;
        case 0x2ad5d0u: goto label_2ad5d0;
        case 0x2ad5d4u: goto label_2ad5d4;
        case 0x2ad5d8u: goto label_2ad5d8;
        case 0x2ad5dcu: goto label_2ad5dc;
        case 0x2ad5e0u: goto label_2ad5e0;
        case 0x2ad5e4u: goto label_2ad5e4;
        case 0x2ad5e8u: goto label_2ad5e8;
        case 0x2ad5ecu: goto label_2ad5ec;
        case 0x2ad5f0u: goto label_2ad5f0;
        case 0x2ad5f4u: goto label_2ad5f4;
        case 0x2ad5f8u: goto label_2ad5f8;
        case 0x2ad5fcu: goto label_2ad5fc;
        case 0x2ad600u: goto label_2ad600;
        case 0x2ad604u: goto label_2ad604;
        case 0x2ad608u: goto label_2ad608;
        case 0x2ad60cu: goto label_2ad60c;
        case 0x2ad610u: goto label_2ad610;
        case 0x2ad614u: goto label_2ad614;
        case 0x2ad618u: goto label_2ad618;
        case 0x2ad61cu: goto label_2ad61c;
        case 0x2ad620u: goto label_2ad620;
        case 0x2ad624u: goto label_2ad624;
        case 0x2ad628u: goto label_2ad628;
        case 0x2ad62cu: goto label_2ad62c;
        case 0x2ad630u: goto label_2ad630;
        case 0x2ad634u: goto label_2ad634;
        case 0x2ad638u: goto label_2ad638;
        case 0x2ad63cu: goto label_2ad63c;
        case 0x2ad640u: goto label_2ad640;
        case 0x2ad644u: goto label_2ad644;
        case 0x2ad648u: goto label_2ad648;
        case 0x2ad64cu: goto label_2ad64c;
        case 0x2ad650u: goto label_2ad650;
        case 0x2ad654u: goto label_2ad654;
        case 0x2ad658u: goto label_2ad658;
        case 0x2ad65cu: goto label_2ad65c;
        case 0x2ad660u: goto label_2ad660;
        case 0x2ad664u: goto label_2ad664;
        case 0x2ad668u: goto label_2ad668;
        case 0x2ad66cu: goto label_2ad66c;
        case 0x2ad670u: goto label_2ad670;
        case 0x2ad674u: goto label_2ad674;
        case 0x2ad678u: goto label_2ad678;
        case 0x2ad67cu: goto label_2ad67c;
        case 0x2ad680u: goto label_2ad680;
        case 0x2ad684u: goto label_2ad684;
        case 0x2ad688u: goto label_2ad688;
        case 0x2ad68cu: goto label_2ad68c;
        case 0x2ad690u: goto label_2ad690;
        case 0x2ad694u: goto label_2ad694;
        case 0x2ad698u: goto label_2ad698;
        case 0x2ad69cu: goto label_2ad69c;
        case 0x2ad6a0u: goto label_2ad6a0;
        case 0x2ad6a4u: goto label_2ad6a4;
        case 0x2ad6a8u: goto label_2ad6a8;
        case 0x2ad6acu: goto label_2ad6ac;
        case 0x2ad6b0u: goto label_2ad6b0;
        case 0x2ad6b4u: goto label_2ad6b4;
        case 0x2ad6b8u: goto label_2ad6b8;
        case 0x2ad6bcu: goto label_2ad6bc;
        case 0x2ad6c0u: goto label_2ad6c0;
        case 0x2ad6c4u: goto label_2ad6c4;
        case 0x2ad6c8u: goto label_2ad6c8;
        case 0x2ad6ccu: goto label_2ad6cc;
        case 0x2ad6d0u: goto label_2ad6d0;
        case 0x2ad6d4u: goto label_2ad6d4;
        case 0x2ad6d8u: goto label_2ad6d8;
        case 0x2ad6dcu: goto label_2ad6dc;
        default: break;
    }

    ctx->pc = 0x2ad410u;

label_2ad410:
    // 0x2ad410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ad414:
    // 0x2ad414: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ad414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ad418:
    // 0x2ad418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ad41c:
    // 0x2ad41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ad420:
    // 0x2ad420: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2ad420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad424:
    // 0x2ad424: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x2ad424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
label_2ad428:
    // 0x2ad428: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2ad428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2ad42c:
    // 0x2ad42c: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2ad42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad430:
    // 0x2ad430: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x2ad430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
label_2ad434:
    // 0x2ad434: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2ad434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2ad438:
    // 0x2ad438: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2ad438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad43c:
    // 0x2ad43c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x2ad43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_2ad440:
    // 0x2ad440: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2ad440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2ad444:
    // 0x2ad444: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2ad444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad448:
    // 0x2ad448: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x2ad448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
label_2ad44c:
    // 0x2ad44c: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2ad44cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2ad450:
    // 0x2ad450: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2ad450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2ad454:
    // 0x2ad454: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x2ad454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_2ad458:
    // 0x2ad458: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2ad458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_2ad45c:
    // 0x2ad45c: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x2ad45cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_2ad460:
    // 0x2ad460: 0x10a30085  beq         $a1, $v1, . + 4 + (0x85 << 2)
label_2ad464:
    if (ctx->pc == 0x2AD464u) {
        ctx->pc = 0x2AD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD460u;
        // 0x2ad464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD468u;
        goto label_2ad468;
    }
    ctx->pc = 0x2AD460u;
    {
        const bool branch_taken_0x2ad460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD460u;
        // 0x2ad464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad460) {
            ctx->pc = 0x2AD678u;
            goto label_2ad678;
        }
    }
    ctx->pc = 0x2AD468u;
label_2ad468:
    // 0x2ad468: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ad468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ad46c:
    // 0x2ad46c: 0x10a30068  beq         $a1, $v1, . + 4 + (0x68 << 2)
label_2ad470:
    if (ctx->pc == 0x2AD470u) {
        ctx->pc = 0x2AD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD46Cu;
        // 0x2ad470: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD474u;
        goto label_2ad474;
    }
    ctx->pc = 0x2AD46Cu;
    {
        const bool branch_taken_0x2ad46c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD46Cu;
        // 0x2ad470: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad46c) {
            ctx->pc = 0x2AD610u;
            goto label_2ad610;
        }
    }
    ctx->pc = 0x2AD474u;
label_2ad474:
    // 0x2ad474: 0x10a70014  beq         $a1, $a3, . + 4 + (0x14 << 2)
label_2ad478:
    if (ctx->pc == 0x2AD478u) {
        ctx->pc = 0x2AD47Cu;
        goto label_2ad47c;
    }
    ctx->pc = 0x2AD474u;
    {
        const bool branch_taken_0x2ad474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ad474) {
            ctx->pc = 0x2AD4C8u;
            goto label_2ad4c8;
        }
    }
    ctx->pc = 0x2AD47Cu;
label_2ad47c:
    // 0x2ad47c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2ad480:
    if (ctx->pc == 0x2AD480u) {
        ctx->pc = 0x2AD484u;
        goto label_2ad484;
    }
    ctx->pc = 0x2AD47Cu;
    {
        const bool branch_taken_0x2ad47c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad47c) {
            ctx->pc = 0x2AD490u;
            goto label_2ad490;
        }
    }
    ctx->pc = 0x2AD484u;
label_2ad484:
    // 0x2ad484: 0x10000092  b           . + 4 + (0x92 << 2)
label_2ad488:
    if (ctx->pc == 0x2AD488u) {
        ctx->pc = 0x2AD48Cu;
        goto label_2ad48c;
    }
    ctx->pc = 0x2AD484u;
    {
        const bool branch_taken_0x2ad484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad484) {
            ctx->pc = 0x2AD6D0u;
            goto label_2ad6d0;
        }
    }
    ctx->pc = 0x2AD48Cu;
label_2ad48c:
    // 0x2ad48c: 0x0  nop
    ctx->pc = 0x2ad48cu;
    // NOP
label_2ad490:
    // 0x2ad490: 0x860608a0  lh          $a2, 0x8A0($s0)
    ctx->pc = 0x2ad490u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2208)));
label_2ad494:
    // 0x2ad494: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad498:
    // 0x2ad498: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x2ad498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_2ad49c:
    // 0x2ad49c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ad49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ad4a0:
    // 0x2ad4a0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ad4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ad4a4:
    // 0x2ad4a4: 0xa60600c2  sh          $a2, 0xC2($s0)
    ctx->pc = 0x2ad4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 6));
label_2ad4a8:
    // 0x2ad4a8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ad4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ad4ac:
    // 0x2ad4ac: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ad4acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ad4b0:
    // 0x2ad4b0: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x2ad4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
label_2ad4b4:
    // 0x2ad4b4: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x2ad4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
label_2ad4b8:
    // 0x2ad4b8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ad4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_2ad4bc:
    // 0x2ad4bc: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x2ad4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
label_2ad4c0:
    // 0x2ad4c0: 0xa2070821  sb          $a3, 0x821($s0)
    ctx->pc = 0x2ad4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 7));
label_2ad4c4:
    // 0x2ad4c4: 0x0  nop
    ctx->pc = 0x2ad4c4u;
    // NOP
label_2ad4c8:
    // 0x2ad4c8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ad4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_2ad4cc:
    // 0x2ad4cc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2ad4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ad4d0:
    // 0x2ad4d0: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2ad4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
label_2ad4d4:
    // 0x2ad4d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2ad4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ad4d8:
    // 0x2ad4d8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2ad4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_2ad4dc:
    // 0x2ad4dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ad4dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ad4e0:
    // 0x2ad4e0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2ad4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2ad4e4:
    // 0x2ad4e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ad4e8:
    // 0x2ad4e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2ad4e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2ad4ec:
    // 0x2ad4ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ad4ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2ad4f0:
    // 0x2ad4f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ad4f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ad4f4:
    // 0x2ad4f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2ad4f8:
    if (ctx->pc == 0x2AD4F8u) {
        ctx->pc = 0x2AD4FCu;
        goto label_2ad4fc;
    }
    ctx->pc = 0x2AD4F4u;
    {
        const bool branch_taken_0x2ad4f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ad4f4) {
            ctx->pc = 0x2AD50Cu;
            goto label_2ad50c;
        }
    }
    ctx->pc = 0x2AD4FCu;
label_2ad4fc:
    // 0x2ad4fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad4fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad500:
    // 0x2ad500: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2ad500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2ad504:
    // 0x2ad504: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ad508:
    if (ctx->pc == 0x2AD508u) {
        ctx->pc = 0x2AD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD504u;
        // 0x2ad508: 0x96040826  lhu         $a0, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD50Cu;
        goto label_2ad50c;
    }
    ctx->pc = 0x2AD504u;
    {
        const bool branch_taken_0x2ad504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD504u;
        // 0x2ad508: 0x96040826  lhu         $a0, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad504) {
            ctx->pc = 0x2AD528u;
            goto label_2ad528;
        }
    }
    ctx->pc = 0x2AD50Cu;
label_2ad50c:
    // 0x2ad50c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ad50cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ad510:
    // 0x2ad510: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad514:
    // 0x2ad514: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad518:
    // 0x2ad518: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2ad518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2ad51c:
    // 0x2ad51c: 0x0  nop
    ctx->pc = 0x2ad51cu;
    // NOP
label_2ad520:
    // 0x2ad520: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2ad520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2ad524:
    // 0x2ad524: 0x96040826  lhu         $a0, 0x826($s0)
    ctx->pc = 0x2ad524u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
label_2ad528:
    // 0x2ad528: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2ad528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ad52c:
    // 0x2ad52c: 0x14850010  bne         $a0, $a1, . + 4 + (0x10 << 2)
label_2ad530:
    if (ctx->pc == 0x2AD530u) {
        ctx->pc = 0x2AD530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD52Cu;
        // 0x2ad530: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD534u;
        goto label_2ad534;
    }
    ctx->pc = 0x2AD52Cu;
    {
        const bool branch_taken_0x2ad52c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AD530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD52Cu;
        // 0x2ad530: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad52c) {
            ctx->pc = 0x2AD570u;
            goto label_2ad570;
        }
    }
    ctx->pc = 0x2AD534u;
label_2ad534:
    // 0x2ad534: 0x8e0308b0  lw          $v1, 0x8B0($s0)
    ctx->pc = 0x2ad534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2224)));
label_2ad538:
    // 0x2ad538: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2ad53c:
    if (ctx->pc == 0x2AD53Cu) {
        ctx->pc = 0x2AD540u;
        goto label_2ad540;
    }
    ctx->pc = 0x2AD538u;
    {
        const bool branch_taken_0x2ad538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad538) {
            ctx->pc = 0x2AD550u;
            goto label_2ad550;
        }
    }
    ctx->pc = 0x2AD540u;
label_2ad540:
    // 0x2ad540: 0x60f809  jalr        $v1
label_2ad544:
    if (ctx->pc == 0x2AD544u) {
        ctx->pc = 0x2AD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD540u;
        // 0x2ad544: 0x8e0408b4  lw          $a0, 0x8B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD548u;
        goto label_2ad548;
    }
    ctx->pc = 0x2AD540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AD548u);
        ctx->pc = 0x2AD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD540u;
        // 0x2ad544: 0x8e0408b4  lw          $a0, 0x8B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD540u, 0x2AD548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD548u;
label_2ad548:
    // 0x2ad548: 0xae0008b0  sw          $zero, 0x8B0($s0)
    ctx->pc = 0x2ad548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2224), GPR_U32(ctx, 0));
label_2ad54c:
    // 0x2ad54c: 0x0  nop
    ctx->pc = 0x2ad54cu;
    // NOP
label_2ad550:
    // 0x2ad550: 0x8e0508c8  lw          $a1, 0x8C8($s0)
    ctx->pc = 0x2ad550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2248)));
label_2ad554:
    // 0x2ad554: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
label_2ad558:
    if (ctx->pc == 0x2AD558u) {
        ctx->pc = 0x2AD55Cu;
        goto label_2ad55c;
    }
    ctx->pc = 0x2AD554u;
    {
        const bool branch_taken_0x2ad554 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x2ad554) {
            ctx->pc = 0x2AD570u;
            goto label_2ad570;
        }
    }
    ctx->pc = 0x2AD55Cu;
label_2ad55c:
    // 0x2ad55c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2ad55cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ad560:
    // 0x2ad560: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2ad560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_2ad564:
    // 0x2ad564: 0xc0e360c  jal         func_38D830
label_2ad568:
    if (ctx->pc == 0x2AD568u) {
        ctx->pc = 0x2AD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD564u;
        // 0x2ad568: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD56Cu;
        goto label_2ad56c;
    }
    ctx->pc = 0x2AD564u;
    SET_GPR_U32(ctx, 31, 0x2AD56Cu);
    ctx->pc = 0x2AD568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD564u;
    // 0x2ad568: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x2AD564u, 0x2AD56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD56Cu;
label_2ad56c:
    // 0x2ad56c: 0xae0008c8  sw          $zero, 0x8C8($s0)
    ctx->pc = 0x2ad56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2248), GPR_U32(ctx, 0));
label_2ad570:
    // 0x2ad570: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ad570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_2ad574:
    // 0x2ad574: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
label_2ad578:
    if (ctx->pc == 0x2AD578u) {
        ctx->pc = 0x2AD57Cu;
        goto label_2ad57c;
    }
    ctx->pc = 0x2AD574u;
    {
        const bool branch_taken_0x2ad574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad574) {
            ctx->pc = 0x2AD6D0u;
            goto label_2ad6d0;
        }
    }
    ctx->pc = 0x2AD57Cu;
label_2ad57c:
    // 0x2ad57c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2ad57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ad580:
    // 0x2ad580: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ad580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_2ad584:
    // 0x2ad584: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2ad584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ad588:
    // 0x2ad588: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2ad588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_2ad58c:
    // 0x2ad58c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2ad58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_2ad590:
    // 0x2ad590: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2ad590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2ad594:
    // 0x2ad594: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2ad594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2ad598:
    // 0x2ad598: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ad598u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ad59c:
    // 0x2ad59c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ad5a0:
    // 0x2ad5a0: 0x0  nop
    ctx->pc = 0x2ad5a0u;
    // NOP
label_2ad5a4:
    // 0x2ad5a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ad5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2ad5a8:
    // 0x2ad5a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ad5a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ad5ac:
    // 0x2ad5ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2ad5b0:
    if (ctx->pc == 0x2AD5B0u) {
        ctx->pc = 0x2AD5B4u;
        goto label_2ad5b4;
    }
    ctx->pc = 0x2AD5ACu;
    {
        const bool branch_taken_0x2ad5ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ad5ac) {
            ctx->pc = 0x2AD5C4u;
            goto label_2ad5c4;
        }
    }
    ctx->pc = 0x2AD5B4u;
label_2ad5b4:
    // 0x2ad5b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad5b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad5b8:
    // 0x2ad5b8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ad5b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ad5bc:
    // 0x2ad5bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ad5c0:
    if (ctx->pc == 0x2AD5C0u) {
        ctx->pc = 0x2AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5BCu;
        // 0x2ad5c0: 0xa6040828  sh          $a0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD5C4u;
        goto label_2ad5c4;
    }
    ctx->pc = 0x2AD5BCu;
    {
        const bool branch_taken_0x2ad5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5BCu;
        // 0x2ad5c0: 0xa6040828  sh          $a0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5bc) {
            ctx->pc = 0x2AD5E0u;
            goto label_2ad5e0;
        }
    }
    ctx->pc = 0x2AD5C4u;
label_2ad5c4:
    // 0x2ad5c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ad5c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ad5c8:
    // 0x2ad5c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad5cc:
    // 0x2ad5cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ad5ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2ad5d0:
    // 0x2ad5d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2ad5d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2ad5d4:
    // 0x2ad5d4: 0x0  nop
    ctx->pc = 0x2ad5d4u;
    // NOP
label_2ad5d8:
    // 0x2ad5d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ad5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2ad5dc:
    // 0x2ad5dc: 0xa6040828  sh          $a0, 0x828($s0)
    ctx->pc = 0x2ad5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
label_2ad5e0:
    // 0x2ad5e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ad5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ad5e4:
    // 0x2ad5e4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ad5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ad5e8:
    // 0x2ad5e8: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ad5e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ad5ec:
    // 0x2ad5ec: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x2ad5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_2ad5f0:
    // 0x2ad5f0: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ad5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ad5f4:
    // 0x2ad5f4: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x2ad5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
label_2ad5f8:
    // 0x2ad5f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ad5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ad5fc:
    // 0x2ad5fc: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2ad5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ad600:
    // 0x2ad600: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2ad600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
label_2ad604:
    // 0x2ad604: 0x10000032  b           . + 4 + (0x32 << 2)
label_2ad608:
    if (ctx->pc == 0x2AD608u) {
        ctx->pc = 0x2AD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD604u;
        // 0x2ad608: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD60Cu;
        goto label_2ad60c;
    }
    ctx->pc = 0x2AD604u;
    {
        const bool branch_taken_0x2ad604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD604u;
        // 0x2ad608: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad604) {
            ctx->pc = 0x2AD6D0u;
            goto label_2ad6d0;
        }
    }
    ctx->pc = 0x2AD60Cu;
label_2ad60c:
    // 0x2ad60c: 0x0  nop
    ctx->pc = 0x2ad60cu;
    // NOP
label_2ad610:
    // 0x2ad610: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x2ad610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
label_2ad614:
    // 0x2ad614: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2ad618:
    if (ctx->pc == 0x2AD618u) {
        ctx->pc = 0x2AD61Cu;
        goto label_2ad61c;
    }
    ctx->pc = 0x2AD614u;
    {
        const bool branch_taken_0x2ad614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad614) {
            ctx->pc = 0x2AD628u;
            goto label_2ad628;
        }
    }
    ctx->pc = 0x2AD61Cu;
label_2ad61c:
    // 0x2ad61c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ad61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ad620:
    // 0x2ad620: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x2ad620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2ad624:
    // 0x2ad624: 0x0  nop
    ctx->pc = 0x2ad624u;
    // NOP
label_2ad628:
    // 0x2ad628: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ad628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_2ad62c:
    // 0x2ad62c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2ad630:
    if (ctx->pc == 0x2AD630u) {
        ctx->pc = 0x2AD634u;
        goto label_2ad634;
    }
    ctx->pc = 0x2AD62Cu;
    {
        const bool branch_taken_0x2ad62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad62c) {
            ctx->pc = 0x2AD640u;
            goto label_2ad640;
        }
    }
    ctx->pc = 0x2AD634u;
label_2ad634:
    // 0x2ad634: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x2ad634u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
label_2ad638:
    // 0x2ad638: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_2ad63c:
    if (ctx->pc == 0x2AD63Cu) {
        ctx->pc = 0x2AD640u;
        goto label_2ad640;
    }
    ctx->pc = 0x2AD638u;
    {
        const bool branch_taken_0x2ad638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad638) {
            ctx->pc = 0x2AD6D0u;
            goto label_2ad6d0;
        }
    }
    ctx->pc = 0x2AD640u;
label_2ad640:
    // 0x2ad640: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ad640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2ad644:
    // 0x2ad644: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ad644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2ad648:
    // 0x2ad648: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2ad648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2ad64c:
    // 0x2ad64c: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x2ad64cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
label_2ad650:
    // 0x2ad650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ad654:
    // 0x2ad654: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ad654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2ad658:
    // 0x2ad658: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2ad658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2ad65c:
    // 0x2ad65c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2ad65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2ad660:
    // 0x2ad660: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x2ad660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_2ad664:
    // 0x2ad664: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ad664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ad668:
    // 0x2ad668: 0xc0ab4b4  jal         func_2AD2D0
label_2ad66c:
    if (ctx->pc == 0x2AD66Cu) {
        ctx->pc = 0x2AD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD668u;
        // 0x2ad66c: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD670u;
        goto label_2ad670;
    }
    ctx->pc = 0x2AD668u;
    SET_GPR_U32(ctx, 31, 0x2AD670u);
    ctx->pc = 0x2AD66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD668u;
    // 0x2ad66c: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD2D0u, 0x2AD668u, 0x2AD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD670u;
label_2ad670:
    // 0x2ad670: 0x10000017  b           . + 4 + (0x17 << 2)
label_2ad674:
    if (ctx->pc == 0x2AD674u) {
        ctx->pc = 0x2AD678u;
        goto label_2ad678;
    }
    ctx->pc = 0x2AD670u;
    {
        const bool branch_taken_0x2ad670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad670) {
            ctx->pc = 0x2AD6D0u;
            goto label_2ad6d0;
        }
    }
    ctx->pc = 0x2AD678u;
label_2ad678:
    // 0x2ad678: 0xc0a6c74  jal         func_29B1D0
label_2ad67c:
    if (ctx->pc == 0x2AD67Cu) {
        ctx->pc = 0x2AD680u;
        goto label_2ad680;
    }
    ctx->pc = 0x2AD678u;
    SET_GPR_U32(ctx, 31, 0x2AD680u);
    ctx->pc = 0x29B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B1D0u, 0x2AD678u, 0x2AD680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD680u;
label_2ad680:
    // 0x2ad680: 0x8e0308b0  lw          $v1, 0x8B0($s0)
    ctx->pc = 0x2ad680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2224)));
label_2ad684:
    // 0x2ad684: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2ad688:
    if (ctx->pc == 0x2AD688u) {
        ctx->pc = 0x2AD68Cu;
        goto label_2ad68c;
    }
    ctx->pc = 0x2AD684u;
    {
        const bool branch_taken_0x2ad684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad684) {
            ctx->pc = 0x2AD698u;
            goto label_2ad698;
        }
    }
    ctx->pc = 0x2AD68Cu;
label_2ad68c:
    // 0x2ad68c: 0x60f809  jalr        $v1
label_2ad690:
    if (ctx->pc == 0x2AD690u) {
        ctx->pc = 0x2AD690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD68Cu;
        // 0x2ad690: 0x8e0408b4  lw          $a0, 0x8B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD694u;
        goto label_2ad694;
    }
    ctx->pc = 0x2AD68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AD694u);
        ctx->pc = 0x2AD690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD68Cu;
        // 0x2ad690: 0x8e0408b4  lw          $a0, 0x8B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD68Cu, 0x2AD694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD694u;
label_2ad694:
    // 0x2ad694: 0xae0008b0  sw          $zero, 0x8B0($s0)
    ctx->pc = 0x2ad694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2224), GPR_U32(ctx, 0));
label_2ad698:
    // 0x2ad698: 0x8e0508c8  lw          $a1, 0x8C8($s0)
    ctx->pc = 0x2ad698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2248)));
label_2ad69c:
    // 0x2ad69c: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
label_2ad6a0:
    if (ctx->pc == 0x2AD6A0u) {
        ctx->pc = 0x2AD6A4u;
        goto label_2ad6a4;
    }
    ctx->pc = 0x2AD69Cu;
    {
        const bool branch_taken_0x2ad69c = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x2ad69c) {
            ctx->pc = 0x2AD6B8u;
            goto label_2ad6b8;
        }
    }
    ctx->pc = 0x2AD6A4u;
label_2ad6a4:
    // 0x2ad6a4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2ad6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ad6a8:
    // 0x2ad6a8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2ad6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_2ad6ac:
    // 0x2ad6ac: 0xc0e360c  jal         func_38D830
label_2ad6b0:
    if (ctx->pc == 0x2AD6B0u) {
        ctx->pc = 0x2AD6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6ACu;
        // 0x2ad6b0: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD6B4u;
        goto label_2ad6b4;
    }
    ctx->pc = 0x2AD6ACu;
    SET_GPR_U32(ctx, 31, 0x2AD6B4u);
    ctx->pc = 0x2AD6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD6ACu;
    // 0x2ad6b0: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x2AD6ACu, 0x2AD6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD6B4u;
label_2ad6b4:
    // 0x2ad6b4: 0xae0008c8  sw          $zero, 0x8C8($s0)
    ctx->pc = 0x2ad6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2248), GPR_U32(ctx, 0));
label_2ad6b8:
    // 0x2ad6b8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ad6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_2ad6bc:
    // 0x2ad6bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2ad6c0:
    if (ctx->pc == 0x2AD6C0u) {
        ctx->pc = 0x2AD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6BCu;
        // 0x2ad6c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD6C4u;
        goto label_2ad6c4;
    }
    ctx->pc = 0x2AD6BCu;
    {
        const bool branch_taken_0x2ad6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6BCu;
        // 0x2ad6c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6bc) {
            ctx->pc = 0x2AD6D0u;
            goto label_2ad6d0;
        }
    }
    ctx->pc = 0x2AD6C4u;
label_2ad6c4:
    // 0x2ad6c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ad6c8:
    if (ctx->pc == 0x2AD6C8u) {
        ctx->pc = 0x2AD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6C4u;
        // 0x2ad6c8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD6CCu;
        goto label_2ad6cc;
    }
    ctx->pc = 0x2AD6C4u;
    {
        const bool branch_taken_0x2ad6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6C4u;
        // 0x2ad6c8: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6c4) {
            ctx->pc = 0x2AD6D0u;
            goto label_2ad6d0;
        }
    }
    ctx->pc = 0x2AD6CCu;
label_2ad6cc:
    // 0x2ad6cc: 0x0  nop
    ctx->pc = 0x2ad6ccu;
    // NOP
label_2ad6d0:
    // 0x2ad6d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad6d4:
    // 0x2ad6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad6d8:
    // 0x2ad6d8: 0x3e00008  jr          $ra
label_2ad6dc:
    if (ctx->pc == 0x2AD6DCu) {
        ctx->pc = 0x2AD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6D8u;
        // 0x2ad6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD6E0u;
        goto label_fallthrough_0x2ad6d8;
    }
    ctx->pc = 0x2AD6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6D8u;
        // 0x2ad6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ad6d8:
    ctx->pc = 0x2AD6E0u;
}
