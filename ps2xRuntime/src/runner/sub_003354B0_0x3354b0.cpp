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

// Function: sub_003354B0
// Address: 0x3354b0 - 0x3355ac
void sub_003354B0_0x3354b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003354B0_0x3354b0");
#endif

    switch (ctx->pc) {
        case 0x335500u: goto label_335500;
        case 0x335528u: goto label_335528;
        default: break;
    }

    ctx->pc = 0x3354b0u;

    // 0x3354b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3354b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3354b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3354b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3354b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3354b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3354bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3354bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3354c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3354c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3354c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3354c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3354c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3354ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3354d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3354d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3354d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3354d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3354d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3354dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3354e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354e4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x3354e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x3354e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3354e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3354ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354f0: 0x24070740  addiu       $a3, $zero, 0x740
    ctx->pc = 0x3354f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
    // 0x3354f4: 0x25085450  addiu       $t0, $t0, 0x5450
    ctx->pc = 0x3354f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21584));
    // 0x3354f8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3354F8u;
    SET_GPR_U32(ctx, 31, 0x335500u);
    ctx->pc = 0x3354FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3354F8u;
    // 0x3354fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3354F8u, 0x335500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335500u;
label_335500:
    // 0x335500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x335500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335504: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x335504u;
    {
        const bool branch_taken_0x335504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335504u;
        // 0x335508: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335504) {
            ctx->pc = 0x335580u;
            goto label_335580;
        }
    }
    ctx->pc = 0x33550Cu;
    // 0x33550c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x33550cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335510: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x335510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335514: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x335514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x335518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33551c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x33551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x335520: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x335520u;
    SET_GPR_U32(ctx, 31, 0x335528u);
    ctx->pc = 0x335524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335520u;
    // 0x335524: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x335520u, 0x335528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335528u;
label_335528:
    // 0x335528: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x335528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x33552c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335530: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x335530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x335534: 0xa600052a  sh          $zero, 0x52A($s0)
    ctx->pc = 0x335534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 0));
    // 0x335538: 0xa6000528  sh          $zero, 0x528($s0)
    ctx->pc = 0x335538u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x33553c: 0xa2020520  sb          $v0, 0x520($s0)
    ctx->pc = 0x33553cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    // 0x335540: 0xa2000730  sb          $zero, 0x730($s0)
    ctx->pc = 0x335540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1840), (uint8_t)GPR_U32(ctx, 0));
    // 0x335544: 0xa2110731  sb          $s1, 0x731($s0)
    ctx->pc = 0x335544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1841), (uint8_t)GPR_U32(ctx, 17));
    // 0x335548: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x335548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x33554c: 0xa6000594  sh          $zero, 0x594($s0)
    ctx->pc = 0x33554cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1428), (uint16_t)GPR_U32(ctx, 0));
    // 0x335550: 0xae0005e0  sw          $zero, 0x5E0($s0)
    ctx->pc = 0x335550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 0));
    // 0x335554: 0xa60005e4  sh          $zero, 0x5E4($s0)
    ctx->pc = 0x335554u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1508), (uint16_t)GPR_U32(ctx, 0));
    // 0x335558: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x335558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x33555c: 0xa6000634  sh          $zero, 0x634($s0)
    ctx->pc = 0x33555cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1588), (uint16_t)GPR_U32(ctx, 0));
    // 0x335560: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x335560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x335564: 0xa6000684  sh          $zero, 0x684($s0)
    ctx->pc = 0x335564u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1668), (uint16_t)GPR_U32(ctx, 0));
    // 0x335568: 0xae0006d0  sw          $zero, 0x6D0($s0)
    ctx->pc = 0x335568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 0));
    // 0x33556c: 0xa60006d4  sh          $zero, 0x6D4($s0)
    ctx->pc = 0x33556cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1748), (uint16_t)GPR_U32(ctx, 0));
    // 0x335570: 0xae000720  sw          $zero, 0x720($s0)
    ctx->pc = 0x335570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1824), GPR_U32(ctx, 0));
    // 0x335574: 0xa6000724  sh          $zero, 0x724($s0)
    ctx->pc = 0x335574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1828), (uint16_t)GPR_U32(ctx, 0));
    // 0x335578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x335578u;
    {
        const bool branch_taken_0x335578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335578u;
        // 0x33557c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335578) {
            ctx->pc = 0x335588u;
            goto label_335588;
        }
    }
    ctx->pc = 0x335580u;
label_335580:
    // 0x335580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x335580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335584: 0x0  nop
    ctx->pc = 0x335584u;
    // NOP
label_335588:
    // 0x335588: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x335588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33558c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33558cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335590: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x335590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335594: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x335594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335598: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x335598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33559c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33559cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3355a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3355a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3355a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3355A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3355A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3355A4u;
        // 0x3355a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3355A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3355ACu;
}
