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

// Function: sub_002A1500
// Address: 0x2a1500 - 0x2a15d0
void sub_002A1500_0x2a1500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1500_0x2a1500");
#endif

    ctx->pc = 0x2a1500u;

    // 0x2a1500: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a1500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a1504: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x2a1504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2a1508: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x2a1508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a150c: 0x8c860078  lw          $a2, 0x78($a0)
    ctx->pc = 0x2a150cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a1510: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x2a1510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1514: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2a1514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a1518: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x2a1518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a151c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2a151cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a1520: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a1520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a1524: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x2a1524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1528: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2a1528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a152c: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A152Cu;
    {
        const bool branch_taken_0x2a152c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A152Cu;
        // 0x2a1530: 0x24a30010  addiu       $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a152c) {
            ctx->pc = 0x2A1548u;
            goto label_2a1548;
        }
    }
    ctx->pc = 0x2A1534u;
    // 0x2a1534: 0x250300f7  addiu       $v1, $t0, 0xF7
    ctx->pc = 0x2a1534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 247));
    // 0x2a1538: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2a1538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2a153c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2A153Cu;
    {
        const bool branch_taken_0x2a153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A153Cu;
        // 0x2a1540: 0xacc30150  sw          $v1, 0x150($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a153c) {
            ctx->pc = 0x2A15C8u;
            goto label_2a15c8;
        }
    }
    ctx->pc = 0x2A1544u;
    // 0x2a1544: 0x0  nop
    ctx->pc = 0x2a1544u;
    // NOP
label_2a1548:
    // 0x2a1548: 0x9064001a  lbu         $a0, 0x1A($v1)
    ctx->pc = 0x2a1548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x2a154c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1550: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A1550u;
    {
        const bool branch_taken_0x2a1550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a1550) {
            ctx->pc = 0x2A1598u;
            goto label_2a1598;
        }
    }
    ctx->pc = 0x2A1558u;
    // 0x2a1558: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1558u;
    {
        const bool branch_taken_0x2a1558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1558) {
            ctx->pc = 0x2A1568u;
            goto label_2a1568;
        }
    }
    ctx->pc = 0x2A1560u;
    // 0x2a1560: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A1560u;
    {
        const bool branch_taken_0x2a1560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1560) {
            ctx->pc = 0x2A15C8u;
            goto label_2a15c8;
        }
    }
    ctx->pc = 0x2A1568u;
label_2a1568:
    // 0x2a1568: 0x62b02  srl         $a1, $a2, 12
    ctx->pc = 0x2a1568u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x2a156c: 0x62102  srl         $a0, $a2, 4
    ctx->pc = 0x2a156cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2a1570: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x2a1570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a1574: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x2a1574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x2a1578: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2a1578u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2a157c: 0x0  nop
    ctx->pc = 0x2a157cu;
    // NOP
    // 0x2a1580: 0x0  nop
    ctx->pc = 0x2a1580u;
    // NOP
    // 0x2a1584: 0x1810  mfhi        $v1
    ctx->pc = 0x2a1584u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2a1588: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x2a1588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2a158c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2a158cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2a1590: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A1590u;
    {
        const bool branch_taken_0x2a1590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1590u;
        // 0x2a1594: 0xacc30150  sw          $v1, 0x150($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1590) {
            ctx->pc = 0x2A15C8u;
            goto label_2a15c8;
        }
    }
    ctx->pc = 0x2A1598u;
label_2a1598:
    // 0x2a1598: 0x62b02  srl         $a1, $a2, 12
    ctx->pc = 0x2a1598u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x2a159c: 0x62102  srl         $a0, $a2, 4
    ctx->pc = 0x2a159cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2a15a0: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x2a15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a15a4: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x2a15a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x2a15a8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2a15a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2a15ac: 0x0  nop
    ctx->pc = 0x2a15acu;
    // NOP
    // 0x2a15b0: 0x0  nop
    ctx->pc = 0x2a15b0u;
    // NOP
    // 0x2a15b4: 0x1810  mfhi        $v1
    ctx->pc = 0x2a15b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2a15b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a15bc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2a15bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2a15c0: 0xacc30150  sw          $v1, 0x150($a2)
    ctx->pc = 0x2a15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 336), GPR_U32(ctx, 3));
    // 0x2a15c4: 0x0  nop
    ctx->pc = 0x2a15c4u;
    // NOP
label_2a15c8:
    // 0x2a15c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A15C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A15C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A15D0u;
}
