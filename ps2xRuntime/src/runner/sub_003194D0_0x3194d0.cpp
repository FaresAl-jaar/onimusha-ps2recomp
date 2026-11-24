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

// Function: sub_003194D0
// Address: 0x3194d0 - 0x3196a8
void sub_003194D0_0x3194d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003194D0_0x3194d0");
#endif

    ctx->pc = 0x3194d0u;

    // 0x3194d0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3194D0u;
    {
        const bool branch_taken_0x3194d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3194D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194D0u;
        // 0x3194d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194d0) {
            ctx->pc = 0x3194E0u;
            goto label_3194e0;
        }
    }
    ctx->pc = 0x3194D8u;
    // 0x3194d8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3194D8u;
    {
        const bool branch_taken_0x3194d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3194d8) {
            ctx->pc = 0x3196A0u;
            goto label_3196a0;
        }
    }
    ctx->pc = 0x3194E0u;
label_3194e0:
    // 0x3194e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3194e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3194e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3194e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3194e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3194E8u;
    {
        const bool branch_taken_0x3194e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3194ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194E8u;
        // 0x3194ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194e8) {
            ctx->pc = 0x3194F8u;
            goto label_3194f8;
        }
    }
    ctx->pc = 0x3194F0u;
    // 0x3194f0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3194F0u;
    {
        const bool branch_taken_0x3194f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3194f0) {
            ctx->pc = 0x3196A0u;
            goto label_3196a0;
        }
    }
    ctx->pc = 0x3194F8u;
label_3194f8:
    // 0x3194f8: 0x8c832000  lw          $v1, 0x2000($a0)
    ctx->pc = 0x3194f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8192)));
    // 0x3194fc: 0x2c620080  sltiu       $v0, $v1, 0x80
    ctx->pc = 0x3194fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x319500: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319500u;
    {
        const bool branch_taken_0x319500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319500u;
        // 0x319504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319500) {
            ctx->pc = 0x319510u;
            goto label_319510;
        }
    }
    ctx->pc = 0x319508u;
    // 0x319508: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x319508u;
    {
        const bool branch_taken_0x319508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319508) {
            ctx->pc = 0x3196A0u;
            goto label_3196a0;
        }
    }
    ctx->pc = 0x319510u;
label_319510:
    // 0x319510: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x319510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x319514: 0xac822000  sw          $v0, 0x2000($a0)
    ctx->pc = 0x319514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8192), GPR_U32(ctx, 2));
    // 0x319518: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x319518u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x31951c: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x31951cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x319520: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x319520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x319524: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x319524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x319528: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x319528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x31952c: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x31952Cu;
    {
        const bool branch_taken_0x31952c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x319530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31952Cu;
        // 0x319530: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31952c) {
            ctx->pc = 0x3196A0u;
            goto label_3196a0;
        }
    }
    ctx->pc = 0x319534u;
    // 0x319534: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x319534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x319538: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x319538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x31953c: 0x24a5c950  addiu       $a1, $a1, -0x36B0
    ctx->pc = 0x31953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953296));
    // 0x319540: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x319540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x319544: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x319544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x319548: 0x600008  jr          $v1
    ctx->pc = 0x319548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x319550u: goto label_319550;
            case 0x319598u: goto label_319598;
            case 0x3195E8u: goto label_3195e8;
            case 0x319620u: goto label_319620;
            case 0x319658u: goto label_319658;
            case 0x3196A0u: goto label_3196a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319548u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x319550u;
label_319550:
    // 0x319550: 0x3c05be80  lui         $a1, 0xBE80
    ctx->pc = 0x319550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48768 << 16));
    // 0x319554: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x319554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x319558: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x319558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x31955c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x31955cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x319560: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x319560u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x319564: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x319564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x319568: 0x3c03c528  lui         $v1, 0xC528
    ctx->pc = 0x319568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50472 << 16));
    // 0x31956c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x31956cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x319570: 0x3466c000  ori         $a2, $v1, 0xC000
    ctx->pc = 0x319570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x319574: 0xac470024  sw          $a3, 0x24($v0)
    ctx->pc = 0x319574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 7));
    // 0x319578: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x319578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x31957c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x31957cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x319580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x319580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319584: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x319584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    // 0x319588: 0xac470030  sw          $a3, 0x30($v0)
    ctx->pc = 0x319588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
    // 0x31958c: 0xa0450034  sb          $a1, 0x34($v0)
    ctx->pc = 0x31958cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 5));
    // 0x319590: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x319590u;
    {
        const bool branch_taken_0x319590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319590u;
        // 0x319594: 0xa0832015  sb          $v1, 0x2015($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8213), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319590) {
            ctx->pc = 0x3196A0u;
            goto label_3196a0;
        }
    }
    ctx->pc = 0x319598u;
label_319598:
    // 0x319598: 0x3c05be80  lui         $a1, 0xBE80
    ctx->pc = 0x319598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48768 << 16));
    // 0x31959c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x31959cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x3195a0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3195a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3195a4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x3195a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x3195a8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x3195a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x3195ac: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x3195acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x3195b0: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x3195b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
    // 0x3195b4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x3195b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x3195b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3195b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3195bc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3195bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x3195c0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3195c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3195c4: 0xac470024  sw          $a3, 0x24($v0)
    ctx->pc = 0x3195c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 7));
    // 0x3195c8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x3195c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x3195cc: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x3195ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    // 0x3195d0: 0xa4450030  sh          $a1, 0x30($v0)
    ctx->pc = 0x3195d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x3195d4: 0xa0400032  sb          $zero, 0x32($v0)
    ctx->pc = 0x3195d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x3195d8: 0xa0430033  sb          $v1, 0x33($v0)
    ctx->pc = 0x3195d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x3195dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3195DCu;
    {
        const bool branch_taken_0x3195dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3195E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195DCu;
        // 0x3195e0: 0xa0852016  sb          $a1, 0x2016($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8214), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195dc) {
            ctx->pc = 0x3196A0u;
            goto label_3196a0;
        }
    }
    ctx->pc = 0x3195E4u;
    // 0x3195e4: 0x0  nop
    ctx->pc = 0x3195e4u;
    // NOP
label_3195e8:
    // 0x3195e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3195e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3195ec: 0xa0460010  sb          $a2, 0x10($v0)
    ctx->pc = 0x3195ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x3195f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3195f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3195f4: 0xa0460011  sb          $a2, 0x11($v0)
    ctx->pc = 0x3195f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x3195f8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3195f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3195fc: 0xa0430012  sb          $v1, 0x12($v0)
    ctx->pc = 0x3195fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x319600: 0xa0460013  sb          $a2, 0x13($v0)
    ctx->pc = 0x319600u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 6));
    // 0x319604: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x319604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x319608: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x319608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x31960c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x31960cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x319610: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x319610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x319614: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x319614u;
    {
        const bool branch_taken_0x319614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319614u;
        // 0x319618: 0xa0862017  sb          $a2, 0x2017($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8215), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319614) {
            ctx->pc = 0x3196A0u;
            goto label_3196a0;
        }
    }
    ctx->pc = 0x31961Cu;
    // 0x31961c: 0x0  nop
    ctx->pc = 0x31961cu;
    // NOP
label_319620:
    // 0x319620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x319620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319624: 0xa0460010  sb          $a2, 0x10($v0)
    ctx->pc = 0x319624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x319628: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x319628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31962c: 0xa0460011  sb          $a2, 0x11($v0)
    ctx->pc = 0x31962cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x319630: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x319630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x319634: 0xa0430012  sb          $v1, 0x12($v0)
    ctx->pc = 0x319634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x319638: 0xa0460013  sb          $a2, 0x13($v0)
    ctx->pc = 0x319638u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 6));
    // 0x31963c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x31963cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x319640: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x319640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x319644: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x319644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x319648: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x319648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x31964c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31964Cu;
    {
        const bool branch_taken_0x31964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31964Cu;
        // 0x319650: 0xa0862017  sb          $a2, 0x2017($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8215), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31964c) {
            ctx->pc = 0x3196A0u;
            goto label_3196a0;
        }
    }
    ctx->pc = 0x319654u;
    // 0x319654: 0x0  nop
    ctx->pc = 0x319654u;
    // NOP
label_319658:
    // 0x319658: 0x3c05be80  lui         $a1, 0xBE80
    ctx->pc = 0x319658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48768 << 16));
    // 0x31965c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x31965cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x319660: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x319660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x319664: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x319664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x319668: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x319668u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x31966c: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x31966cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x319670: 0x3c03c528  lui         $v1, 0xC528
    ctx->pc = 0x319670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50472 << 16));
    // 0x319674: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x319674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x319678: 0x3466c000  ori         $a2, $v1, 0xC000
    ctx->pc = 0x319678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x31967c: 0xac470024  sw          $a3, 0x24($v0)
    ctx->pc = 0x31967cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 7));
    // 0x319680: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x319680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x319684: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x319684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x319688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x319688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31968c: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x31968cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    // 0x319690: 0xac470030  sw          $a3, 0x30($v0)
    ctx->pc = 0x319690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
    // 0x319694: 0xa0450034  sb          $a1, 0x34($v0)
    ctx->pc = 0x319694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 5));
    // 0x319698: 0xa0832014  sb          $v1, 0x2014($a0)
    ctx->pc = 0x319698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8212), (uint8_t)GPR_U32(ctx, 3));
    // 0x31969c: 0x0  nop
    ctx->pc = 0x31969cu;
    // NOP
label_3196a0:
    // 0x3196a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3196A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3196A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3196A8u;
}
