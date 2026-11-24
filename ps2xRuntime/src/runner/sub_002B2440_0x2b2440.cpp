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

// Function: sub_002B2440
// Address: 0x2b2440 - 0x2b2560
void sub_002B2440_0x2b2440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2440_0x2b2440");
#endif

    switch (ctx->pc) {
        case 0x2b24a0u: goto label_2b24a0;
        case 0x2b24b0u: goto label_2b24b0;
        case 0x2b24d8u: goto label_2b24d8;
        case 0x2b2528u: goto label_2b2528;
        default: break;
    }

    ctx->pc = 0x2b2440u;

    // 0x2b2440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b2448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b244c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2b244cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b2450: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2b2450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b2454: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x2b2454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b2458: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2458u;
    {
        const bool branch_taken_0x2b2458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2458u;
        // 0x2b245c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2458) {
            ctx->pc = 0x2B2468u;
            goto label_2b2468;
        }
    }
    ctx->pc = 0x2B2460u;
    // 0x2b2460: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2b2460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b2464: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2b2464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2b2468:
    // 0x2b2468: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2b2468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b246c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b246cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b2470: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B2470u;
    {
        const bool branch_taken_0x2b2470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2470) {
            ctx->pc = 0x2B24B8u;
            goto label_2b24b8;
        }
    }
    ctx->pc = 0x2B2478u;
    // 0x2b2478: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b2478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b247c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2b247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b2480: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2b2480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b2484: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B2484u;
    {
        const bool branch_taken_0x2b2484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2484) {
            ctx->pc = 0x2B24B8u;
            goto label_2b24b8;
        }
    }
    ctx->pc = 0x2B248Cu;
    // 0x2b248c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2b248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b2490: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2490u;
    {
        const bool branch_taken_0x2b2490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2490u;
        // 0x2b2494: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2490) {
            ctx->pc = 0x2B24A0u;
            goto label_2b24a0;
        }
    }
    ctx->pc = 0x2B2498u;
    // 0x2b2498: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x2B2498u;
    SET_GPR_U32(ctx, 31, 0x2B24A0u);
    ctx->pc = 0x2B249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2498u;
    // 0x2b249c: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x2B2498u, 0x2B24A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24A0u;
label_2b24a0:
    // 0x2b24a0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b24a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b24a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b24a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b24a8: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B24A8u;
    SET_GPR_U32(ctx, 31, 0x2B24B0u);
    ctx->pc = 0x2B24ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24A8u;
    // 0x2b24ac: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B24A8u, 0x2B24B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24B0u;
label_2b24b0:
    // 0x2b24b0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2B24B0u;
    {
        const bool branch_taken_0x2b24b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b24b0) {
            ctx->pc = 0x2B2550u;
            goto label_2b2550;
        }
    }
    ctx->pc = 0x2B24B8u;
label_2b24b8:
    // 0x2b24b8: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x2b24b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b24bc: 0x11400024  beqz        $t2, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B24BCu;
    {
        const bool branch_taken_0x2b24bc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b24bc) {
            ctx->pc = 0x2B2550u;
            goto label_2b2550;
        }
    }
    ctx->pc = 0x2B24C4u;
    // 0x2b24c4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2b24c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b24c8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2b24c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b24cc: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2b24ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2b24d0: 0xc0ac220  jal         func_2B0880
    ctx->pc = 0x2B24D0u;
    SET_GPR_U32(ctx, 31, 0x2B24D8u);
    ctx->pc = 0x2B24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24D0u;
    // 0x2b24d4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0880u, 0x2B24D0u, 0x2B24D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24D8u;
label_2b24d8:
    // 0x2b24d8: 0x9205000c  lbu         $a1, 0xC($s0)
    ctx->pc = 0x2b24d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b24dc: 0x2423c  dsll32      $t0, $v0, 8
    ctx->pc = 0x2b24dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 8));
    // 0x2b24e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b24e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2b24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b24e8: 0x8423e  dsrl32      $t0, $t0, 8
    ctx->pc = 0x2b24e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 8));
    // 0x2b24ec: 0x23602  srl         $a2, $v0, 24
    ctx->pc = 0x2b24ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2b24f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b24f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b24f4: 0xa1450001  sb          $a1, 0x1($t2)
    ctx->pc = 0x2b24f4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b24f8: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x2b24f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x2b24fc: 0xad440064  sw          $a0, 0x64($t2)
    ctx->pc = 0x2b24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 100), GPR_U32(ctx, 4));
    // 0x2b2500: 0xa1400054  sb          $zero, 0x54($t2)
    ctx->pc = 0x2b2500u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2504: 0xa1430055  sb          $v1, 0x55($t2)
    ctx->pc = 0x2b2504u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2508: 0xad480014  sw          $t0, 0x14($t2)
    ctx->pc = 0x2b2508u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 8));
    // 0x2b250c: 0xad480018  sw          $t0, 0x18($t2)
    ctx->pc = 0x2b250cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 8));
    // 0x2b2510: 0xad440088  sw          $a0, 0x88($t2)
    ctx->pc = 0x2b2510u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 136), GPR_U32(ctx, 4));
    // 0x2b2514: 0xa1400078  sb          $zero, 0x78($t2)
    ctx->pc = 0x2b2514u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2518: 0xa1430079  sb          $v1, 0x79($t2)
    ctx->pc = 0x2b2518u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b251c: 0xa1460068  sb          $a2, 0x68($t2)
    ctx->pc = 0x2b251cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 104), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b2520: 0xa1460069  sb          $a2, 0x69($t2)
    ctx->pc = 0x2b2520u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 105), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b2524: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2b2524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2b2528:
    // 0x2b2528: 0x1472821  addu        $a1, $t2, $a3
    ctx->pc = 0x2b2528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2b252c: 0xa0a4008c  sb          $a0, 0x8C($a1)
    ctx->pc = 0x2b252cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2530: 0x24e70005  addiu       $a3, $a3, 0x5
    ctx->pc = 0x2b2530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x2b2534: 0xa0a4008d  sb          $a0, 0x8D($a1)
    ctx->pc = 0x2b2534u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 141), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2538: 0x2ce3000a  sltiu       $v1, $a3, 0xA
    ctx->pc = 0x2b2538u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2b253c: 0xa0a4008e  sb          $a0, 0x8E($a1)
    ctx->pc = 0x2b253cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 142), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2540: 0xa0a4008f  sb          $a0, 0x8F($a1)
    ctx->pc = 0x2b2540u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 143), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2544: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B2544u;
    {
        const bool branch_taken_0x2b2544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2544u;
        // 0x2b2548: 0xa0a40090  sb          $a0, 0x90($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 144), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2544) {
            ctx->pc = 0x2B2528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2528;
        }
    }
    ctx->pc = 0x2B254Cu;
    // 0x2b254c: 0x0  nop
    ctx->pc = 0x2b254cu;
    // NOP
label_2b2550:
    // 0x2b2550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2558: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2558u;
        // 0x2b255c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2560u;
}
