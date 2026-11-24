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

// Function: sub_003034E0
// Address: 0x3034e0 - 0x303944
void sub_003034E0_0x3034e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003034E0_0x3034e0");
#endif

    switch (ctx->pc) {
        case 0x303560u: goto label_303560;
        case 0x3035b0u: goto label_3035b0;
        case 0x303600u: goto label_303600;
        case 0x303620u: goto label_303620;
        case 0x303670u: goto label_303670;
        case 0x3036b0u: goto label_3036b0;
        case 0x303868u: goto label_303868;
        case 0x3038d4u: goto label_3038d4;
        default: break;
    }

    ctx->pc = 0x3034e0u;

    // 0x3034e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3034e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3034e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x3034e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x3034e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3034e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3034ec: 0x3463494c  ori         $v1, $v1, 0x494C
    ctx->pc = 0x3034ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18764);
    // 0x3034f0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3034f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3034f4: 0x14c30110  bne         $a2, $v1, . + 4 + (0x110 << 2)
    ctx->pc = 0x3034F4u;
    {
        const bool branch_taken_0x3034f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x3034f4) {
            ctx->pc = 0x303938u;
            goto label_303938;
        }
    }
    ctx->pc = 0x3034FCu;
    // 0x3034fc: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x3034fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x303500: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x303500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x303504: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x303504u;
    {
        const bool branch_taken_0x303504 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x303508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303504u;
        // 0x303508: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303504) {
            ctx->pc = 0x303518u;
            goto label_303518;
        }
    }
    ctx->pc = 0x30350Cu;
    // 0x30350c: 0x14c3010a  bne         $a2, $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x30350Cu;
    {
        const bool branch_taken_0x30350c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x30350c) {
            ctx->pc = 0x303938u;
            goto label_303938;
        }
    }
    ctx->pc = 0x303514u;
    // 0x303514: 0x0  nop
    ctx->pc = 0x303514u;
    // NOP
label_303518:
    // 0x303518: 0xac851d04  sw          $a1, 0x1D04($a0)
    ctx->pc = 0x303518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7428), GPR_U32(ctx, 5));
    // 0x30351c: 0x8c861d04  lw          $a2, 0x1D04($a0)
    ctx->pc = 0x30351cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x303520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303524: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x303524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x303528: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x303528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30352c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x30352cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x303530: 0x8c861d04  lw          $a2, 0x1D04($a0)
    ctx->pc = 0x303530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303534: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x303534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x303538: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x303538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30353c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x30353cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x303540: 0x8c861d04  lw          $a2, 0x1D04($a0)
    ctx->pc = 0x303540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303544: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x303544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x303548: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x303548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30354c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x30354cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x303550: 0x8c831d04  lw          $v1, 0x1D04($a0)
    ctx->pc = 0x303550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303554: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x303554u;
    {
        const bool branch_taken_0x303554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303554u;
        // 0x303558: 0x24680014  addiu       $t0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303554) {
            ctx->pc = 0x303578u;
            goto label_303578;
        }
    }
    ctx->pc = 0x30355Cu;
    // 0x30355c: 0x0  nop
    ctx->pc = 0x30355cu;
    // NOP
label_303560:
    // 0x303560: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x303560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x303564: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x303564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x303568: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x303568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30356c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x30356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x303570: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x303570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x303574: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x303574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_303578:
    // 0x303578: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x303578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30357c: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x30357cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303580: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x303580u;
    {
        const bool branch_taken_0x303580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303580) {
            ctx->pc = 0x303560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303560;
        }
    }
    ctx->pc = 0x303588u;
    // 0x303588: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x303588u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30358c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x30358cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x303590: 0x14c30013  bne         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x303590u;
    {
        const bool branch_taken_0x303590 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x303590) {
            ctx->pc = 0x3035E0u;
            goto label_3035e0;
        }
    }
    ctx->pc = 0x303598u;
    // 0x303598: 0x8c831d04  lw          $v1, 0x1D04($a0)
    ctx->pc = 0x303598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x30359c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30359cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035a0: 0x640700f8  daddiu      $a3, $zero, 0xF8
    ctx->pc = 0x3035a0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)248);
    // 0x3035a4: 0x2406ff07  addiu       $a2, $zero, -0xF9
    ctx->pc = 0x3035a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967047));
    // 0x3035a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3035A8u;
    {
        const bool branch_taken_0x3035a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3035ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035A8u;
        // 0x3035ac: 0x246a0014  addiu       $t2, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035a8) {
            ctx->pc = 0x3035D0u;
            goto label_3035d0;
        }
    }
    ctx->pc = 0x3035B0u;
label_3035b0:
    // 0x3035b0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3035b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3035b4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3035b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3035b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3035b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3035bc: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x3035bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3035c0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3035c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3035c4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3035c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3035c8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3035c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3035cc: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x3035ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_3035d0:
    // 0x3035d0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x3035d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3035d4: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x3035d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3035d8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3035D8u;
    {
        const bool branch_taken_0x3035d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3035d8) {
            ctx->pc = 0x3035B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3035b0;
        }
    }
    ctx->pc = 0x3035E0u;
label_3035e0:
    // 0x3035e0: 0x8c831d04  lw          $v1, 0x1D04($a0)
    ctx->pc = 0x3035e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x3035e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3035e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3035e8: 0x8c6b0008  lw          $t3, 0x8($v1)
    ctx->pc = 0x3035e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3035ec: 0x8d660010  lw          $a2, 0x10($t3)
    ctx->pc = 0x3035ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x3035f0: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x3035f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x3035f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3035F4u;
    {
        const bool branch_taken_0x3035f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3035F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035F4u;
        // 0x3035f8: 0xc35018  mult        $t2, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035f4) {
            ctx->pc = 0x303650u;
            goto label_303650;
        }
    }
    ctx->pc = 0x3035FCu;
    // 0x3035fc: 0x0  nop
    ctx->pc = 0x3035fcu;
    // NOP
label_303600:
    // 0x303600: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x303600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x303604: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x303604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x303608: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x303608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x30360c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x303610: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x303610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x303614: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x303614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x303618: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x303618u;
    {
        const bool branch_taken_0x303618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303618u;
        // 0x30361c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303618) {
            ctx->pc = 0x303638u;
            goto label_303638;
        }
    }
    ctx->pc = 0x303620u;
label_303620:
    // 0x303620: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x303620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x303624: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x303624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x303628: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x303628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30362c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x30362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x303630: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x303630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x303634: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x303634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_303638:
    // 0x303638: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x303638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30363c: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x30363cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303640: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x303640u;
    {
        const bool branch_taken_0x303640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303640) {
            ctx->pc = 0x303620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303620;
        }
    }
    ctx->pc = 0x303648u;
    // 0x303648: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x303648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30364c: 0x0  nop
    ctx->pc = 0x30364cu;
    // NOP
label_303650:
    // 0x303650: 0x12a182b  sltu        $v1, $t1, $t2
    ctx->pc = 0x303650u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x303654: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x303654u;
    {
        const bool branch_taken_0x303654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303654) {
            ctx->pc = 0x303600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303600;
        }
    }
    ctx->pc = 0x30365Cu;
    // 0x30365c: 0x8c831d04  lw          $v1, 0x1D04($a0)
    ctx->pc = 0x30365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303660: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x303660u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x303664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x303664u;
    {
        const bool branch_taken_0x303664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303664u;
        // 0x303668: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303664) {
            ctx->pc = 0x303688u;
            goto label_303688;
        }
    }
    ctx->pc = 0x30366Cu;
    // 0x30366c: 0x0  nop
    ctx->pc = 0x30366cu;
    // NOP
label_303670:
    // 0x303670: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x303670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x303674: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x303674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x303678: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x303678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30367c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x30367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x303680: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x303680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x303684: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x303684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_303688:
    // 0x303688: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x303688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30368c: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x30368cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303690: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x303690u;
    {
        const bool branch_taken_0x303690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303690) {
            ctx->pc = 0x303670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303670;
        }
    }
    ctx->pc = 0x303698u;
    // 0x303698: 0xac801d08  sw          $zero, 0x1D08($a0)
    ctx->pc = 0x303698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7432), GPR_U32(ctx, 0));
    // 0x30369c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30369cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3036a0: 0x8c831d04  lw          $v1, 0x1D04($a0)
    ctx->pc = 0x3036a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x3036a4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3036a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3036a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3036A8u;
    {
        const bool branch_taken_0x3036a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036A8u;
        // 0x3036ac: 0x24690014  addiu       $t1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036a8) {
            ctx->pc = 0x303708u;
            goto label_303708;
        }
    }
    ctx->pc = 0x3036B0u;
label_3036b0:
    // 0x3036b0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x3036b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3036b4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3036b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3036b8: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x3036b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3036bc: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x3036bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3036c0: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3036c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3036c4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3036C4u;
    {
        const bool branch_taken_0x3036c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3036C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036C4u;
        // 0x3036c8: 0x30c30040  andi        $v1, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036c4) {
            ctx->pc = 0x303700u;
            goto label_303700;
        }
    }
    ctx->pc = 0x3036CCu;
    // 0x3036cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3036CCu;
    {
        const bool branch_taken_0x3036cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3036cc) {
            ctx->pc = 0x3036F0u;
            goto label_3036f0;
        }
    }
    ctx->pc = 0x3036D4u;
    // 0x3036d4: 0x8c831d08  lw          $v1, 0x1D08($a0)
    ctx->pc = 0x3036d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7432)));
    // 0x3036d8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x3036d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3036dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3036dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3036e0: 0xac861d08  sw          $a2, 0x1D08($a0)
    ctx->pc = 0x3036e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7432), GPR_U32(ctx, 6));
    // 0x3036e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3036e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3036e8: 0xac671d0c  sw          $a3, 0x1D0C($v1)
    ctx->pc = 0x3036e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7436), GPR_U32(ctx, 7));
    // 0x3036ec: 0x0  nop
    ctx->pc = 0x3036ecu;
    // NOP
label_3036f0:
    // 0x3036f0: 0x8c831d08  lw          $v1, 0x1D08($a0)
    ctx->pc = 0x3036f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7432)));
    // 0x3036f4: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3036F4u;
    {
        const bool branch_taken_0x3036f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3036f4) {
            ctx->pc = 0x303718u;
            goto label_303718;
        }
    }
    ctx->pc = 0x3036FCu;
    // 0x3036fc: 0x0  nop
    ctx->pc = 0x3036fcu;
    // NOP
label_303700:
    // 0x303700: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x303700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x303704: 0x0  nop
    ctx->pc = 0x303704u;
    // NOP
label_303708:
    // 0x303708: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x303708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x30370c: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x30370cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303710: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x303710u;
    {
        const bool branch_taken_0x303710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303710) {
            ctx->pc = 0x3036B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3036b0;
        }
    }
    ctx->pc = 0x303718u;
label_303718:
    // 0x303718: 0x8c831d08  lw          $v1, 0x1D08($a0)
    ctx->pc = 0x303718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7432)));
    // 0x30371c: 0x14600086  bnez        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x30371Cu;
    {
        const bool branch_taken_0x30371c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30371Cu;
        // 0x303720: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30371c) {
            ctx->pc = 0x303938u;
            goto label_303938;
        }
    }
    ctx->pc = 0x303724u;
    // 0x303724: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x303724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303728: 0x94256ac4  lhu         $a1, 0x6AC4($at)
    ctx->pc = 0x303728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x30372c: 0x24030648  addiu       $v1, $zero, 0x648
    ctx->pc = 0x30372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1608));
    // 0x303730: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x303730u;
    {
        const bool branch_taken_0x303730 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x303734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303730u;
        // 0x303734: 0xaf868ad0  sw          $a2, -0x7530($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937296), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303730) {
            ctx->pc = 0x303758u;
            goto label_303758;
        }
    }
    ctx->pc = 0x303738u;
    // 0x303738: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x303738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30373c: 0xa3868ad7  sb          $a2, -0x7529($gp)
    ctx->pc = 0x30373cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937303), (uint8_t)GPR_U32(ctx, 6));
    // 0x303740: 0xa3838ad4  sb          $v1, -0x752C($gp)
    ctx->pc = 0x303740u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937300), (uint8_t)GPR_U32(ctx, 3));
    // 0x303744: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x303744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x303748: 0xa3808ad6  sb          $zero, -0x752A($gp)
    ctx->pc = 0x303748u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937302), (uint8_t)GPR_U32(ctx, 0));
    // 0x30374c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30374Cu;
    {
        const bool branch_taken_0x30374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30374Cu;
        // 0x303750: 0xa3838ad5  sb          $v1, -0x752B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937301), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30374c) {
            ctx->pc = 0x303770u;
            goto label_303770;
        }
    }
    ctx->pc = 0x303754u;
    // 0x303754: 0x0  nop
    ctx->pc = 0x303754u;
    // NOP
label_303758:
    // 0x303758: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x303758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30375c: 0xa3868ad4  sb          $a2, -0x752C($gp)
    ctx->pc = 0x30375cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937300), (uint8_t)GPR_U32(ctx, 6));
    // 0x303760: 0xa3808ad6  sb          $zero, -0x752A($gp)
    ctx->pc = 0x303760u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937302), (uint8_t)GPR_U32(ctx, 0));
    // 0x303764: 0xa3838ad5  sb          $v1, -0x752B($gp)
    ctx->pc = 0x303764u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937301), (uint8_t)GPR_U32(ctx, 3));
    // 0x303768: 0xa3808ad7  sb          $zero, -0x7529($gp)
    ctx->pc = 0x303768u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937303), (uint8_t)GPR_U32(ctx, 0));
    // 0x30376c: 0x0  nop
    ctx->pc = 0x30376cu;
    // NOP
label_303770:
    // 0x303770: 0x8c8f1d04  lw          $t7, 0x1D04($a0)
    ctx->pc = 0x303770u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303774: 0x27988ad0  addiu       $t8, $gp, -0x7530
    ctx->pc = 0x303774u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937296));
    // 0x303778: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x303778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x30377c: 0x34698080  ori         $t1, $v1, 0x8080
    ctx->pc = 0x30377cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x303780: 0x3c08008e  lui         $t0, 0x8E
    ctx->pc = 0x303780u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)142 << 16));
    // 0x303784: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x303784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x303788: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x303788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x30378c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x30378cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x303790: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x303790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x303794: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x303794u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x303798: 0x240dfff8  addiu       $t5, $zero, -0x8
    ctx->pc = 0x303798u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x30379c: 0xadf80010  sw          $t8, 0x10($t7)
    ctx->pc = 0x30379cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 24));
    // 0x3037a0: 0x640e0001  daddiu      $t6, $zero, 0x1
    ctx->pc = 0x3037a0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3037a4: 0xac801d08  sw          $zero, 0x1D08($a0)
    ctx->pc = 0x3037a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7432), GPR_U32(ctx, 0));
    // 0x3037a8: 0x240bff07  addiu       $t3, $zero, -0xF9
    ctx->pc = 0x3037a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967047));
    // 0x3037ac: 0xa026ff01  sb          $a2, -0xFF($at)
    ctx->pc = 0x3037acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967041), (uint8_t)GPR_U32(ctx, 6));
    // 0x3037b0: 0x640c0038  daddiu      $t4, $zero, 0x38
    ctx->pc = 0x3037b0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)56);
    // 0x3037b4: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3037b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3037b8: 0x2508ff00  addiu       $t0, $t0, -0x100
    ctx->pc = 0x3037b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967040));
    // 0x3037bc: 0xac2aff04  sw          $t2, -0xFC($at)
    ctx->pc = 0x3037bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x8DFF04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF04u, _value); } while (0);
    // 0x3037c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3037c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3037c4: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3037c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3037c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3037c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3037cc: 0xac29ff08  sw          $t1, -0xF8($at)
    ctx->pc = 0x3037ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x8DFF08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF08u, _value); } while (0);
    // 0x3037d0: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3037d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3037d4: 0xac25ff14  sw          $a1, -0xEC($at)
    ctx->pc = 0x3037d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8DFF14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF14u, _value); } while (0);
    // 0x3037d8: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3037d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3037dc: 0xa020ff02  sb          $zero, -0xFE($at)
    ctx->pc = 0x3037dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8DFF02u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DFF02u, _value); } while (0);
    // 0x3037e0: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3037e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3037e4: 0xa020ff03  sb          $zero, -0xFD($at)
    ctx->pc = 0x3037e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8DFF03u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DFF03u, _value); } while (0);
    // 0x3037e8: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3037e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3037ec: 0xac27ff0c  sw          $a3, -0xF4($at)
    ctx->pc = 0x3037ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8DFF0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF0Cu, _value); } while (0);
    // 0x3037f0: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3037f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3037f4: 0xac27ff1c  sw          $a3, -0xE4($at)
    ctx->pc = 0x3037f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8DFF1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF1Cu, _value); } while (0);
    // 0x3037f8: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3037f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3037fc: 0xac20ff10  sw          $zero, -0xF0($at)
    ctx->pc = 0x3037fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8DFF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF10u, _value); } while (0);
    // 0x303800: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x303800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x303804: 0xac20ff18  sw          $zero, -0xE8($at)
    ctx->pc = 0x303804u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8DFF18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF18u, _value); } while (0);
    // 0x303808: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x303808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x30380c: 0x9025ff00  lbu         $a1, -0x100($at)
    ctx->pc = 0x30380cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8DFF00u));
    // 0x303810: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x303810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x303814: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x303814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x303818: 0xae2825  or          $a1, $a1, $t6
    ctx->pc = 0x303818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 14));
    // 0x30381c: 0xa025ff00  sb          $a1, -0x100($at)
    ctx->pc = 0x30381cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8DFF00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DFF00u, _value); } while (0);
    // 0x303820: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x303820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x303824: 0x9025ff00  lbu         $a1, -0x100($at)
    ctx->pc = 0x303824u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8DFF00u));
    // 0x303828: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x303828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x30382c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x30382cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x303830: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x303830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x303834: 0xa025ff00  sb          $a1, -0x100($at)
    ctx->pc = 0x303834u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8DFF00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DFF00u, _value); } while (0);
    // 0x303838: 0x8c851d08  lw          $a1, 0x1D08($a0)
    ctx->pc = 0x303838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7432)));
    // 0x30383c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x30383cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x303840: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x303840u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x303844: 0xac871d08  sw          $a3, 0x1D08($a0)
    ctx->pc = 0x303844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7432), GPR_U32(ctx, 7));
    // 0x303848: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x303848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30384c: 0xaca81d0c  sw          $t0, 0x1D0C($a1)
    ctx->pc = 0x30384cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7436), GPR_U32(ctx, 8));
    // 0x303850: 0x8c841d04  lw          $a0, 0x1D04($a0)
    ctx->pc = 0x303850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303854: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x303854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x303858: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x303858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30385c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x30385Cu;
    {
        const bool branch_taken_0x30385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30385Cu;
        // 0x303860: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30385c) {
            ctx->pc = 0x3038F0u;
            goto label_3038f0;
        }
    }
    ctx->pc = 0x303864u;
    // 0x303864: 0x0  nop
    ctx->pc = 0x303864u;
    // NOP
label_303868:
    // 0x303868: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x303868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30386c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x30386cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x303870: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x303870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x303874: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x303874u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x303878: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x303878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x30387c: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x30387Cu;
    {
        const bool branch_taken_0x30387c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30387c) {
            ctx->pc = 0x3038E8u;
            goto label_3038e8;
        }
    }
    ctx->pc = 0x303884u;
    // 0x303884: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x303884u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x303888: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x303888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x30388c: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x30388Cu;
    {
        const bool branch_taken_0x30388c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x30388c) {
            ctx->pc = 0x3038E8u;
            goto label_3038e8;
        }
    }
    ctx->pc = 0x303894u;
    // 0x303894: 0xc4e1001c  lwc1        $f1, 0x1C($a3)
    ctx->pc = 0x303894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303898: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x303898u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30389c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x30389Cu;
    {
        const bool branch_taken_0x30389c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30389c) {
            ctx->pc = 0x3038E8u;
            goto label_3038e8;
        }
    }
    ctx->pc = 0x3038A4u;
    // 0x3038a4: 0x3c03008e  lui         $v1, 0x8E
    ctx->pc = 0x3038a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)142 << 16));
    // 0x3038a8: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x3038a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3038ac: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x3038acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
    // 0x3038b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3038b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x8DFF10u));
    // 0x3038b4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3038b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3038b8: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3038b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3038bc: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x3038bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3038c0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3038c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3038c4: 0x3c05008e  lui         $a1, 0x8E
    ctx->pc = 0x3038c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)142 << 16));
    // 0x3038c8: 0x2484ff10  addiu       $a0, $a0, -0xF0
    ctx->pc = 0x3038c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967056));
    // 0x3038cc: 0xc04d7e0  jal         func_135F80
    ctx->pc = 0x3038CCu;
    SET_GPR_U32(ctx, 31, 0x3038D4u);
    ctx->pc = 0x3038D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3038CCu;
    // 0x3038d0: 0x24a5ff10  addiu       $a1, $a1, -0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F80u, 0x3038CCu, 0x3038D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038D4u;
label_3038d4:
    // 0x3038d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3038d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3038d8: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3038d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3038dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3038DCu;
    {
        const bool branch_taken_0x3038dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3038E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038DCu;
        // 0x3038e0: 0xac23ff1c  sw          $v1, -0xE4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967068), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038dc) {
            ctx->pc = 0x303900u;
            goto label_303900;
        }
    }
    ctx->pc = 0x3038E4u;
    // 0x3038e4: 0x0  nop
    ctx->pc = 0x3038e4u;
    // NOP
label_3038e8:
    // 0x3038e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3038e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3038ec: 0x0  nop
    ctx->pc = 0x3038ecu;
    // NOP
label_3038f0:
    // 0x3038f0: 0x65202b  sltu        $a0, $v1, $a1
    ctx->pc = 0x3038f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3038f4: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3038F4u;
    {
        const bool branch_taken_0x3038f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3038f4) {
            ctx->pc = 0x303868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303868;
        }
    }
    ctx->pc = 0x3038FCu;
    // 0x3038fc: 0x0  nop
    ctx->pc = 0x3038fcu;
    // NOP
label_303900:
    // 0x303900: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x303900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x303904: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x303904u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x303908: 0x240302c1  addiu       $v1, $zero, 0x2C1
    ctx->pc = 0x303908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
    // 0x30390c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30390Cu;
    {
        const bool branch_taken_0x30390c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x303910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30390Cu;
        // 0x303910: 0x3c01008e  lui         $at, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30390c) {
            ctx->pc = 0x303938u;
            goto label_303938;
        }
    }
    ctx->pc = 0x303914u;
    // 0x303914: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303918: 0xac20ff10  sw          $zero, -0xF0($at)
    ctx->pc = 0x303918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967056), GPR_U32(ctx, 0));
    // 0x30391c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x30391cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x303920: 0xac23ff14  sw          $v1, -0xEC($at)
    ctx->pc = 0x303920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8DFF14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF14u, _value); } while (0);
    // 0x303924: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x303924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x303928: 0xac23ff1c  sw          $v1, -0xE4($at)
    ctx->pc = 0x303928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8DFF1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF1Cu, _value); } while (0);
    // 0x30392c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x30392cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x303930: 0xac20ff18  sw          $zero, -0xE8($at)
    ctx->pc = 0x303930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8DFF18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8DFF18u, _value); } while (0);
    // 0x303934: 0x0  nop
    ctx->pc = 0x303934u;
    // NOP
label_303938:
    // 0x303938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30393c: 0x3e00008  jr          $ra
    ctx->pc = 0x30393Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30393Cu;
        // 0x303940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30393Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303944u;
}
