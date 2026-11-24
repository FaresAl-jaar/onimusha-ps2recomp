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

// Function: sub_003033F0
// Address: 0x3033f0 - 0x3034e0
void sub_003033F0_0x3033f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003033F0_0x3033f0");
#endif

    ctx->pc = 0x3033f0u;

    // 0x3033f0: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x3033f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3033f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3033f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3033f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3033F8u;
    {
        const bool branch_taken_0x3033f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3033FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033F8u;
        // 0x3033fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033f8) {
            ctx->pc = 0x303428u;
            goto label_303428;
        }
    }
    ctx->pc = 0x303400u;
    // 0x303400: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x303400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x303404: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x303404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x303408: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x303408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30340c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30340cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303410: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x303410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303414: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x303414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x303418: 0x94420062  lhu         $v0, 0x62($v0)
    ctx->pc = 0x303418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x30341c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30341Cu;
    {
        const bool branch_taken_0x30341c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x30341c) {
            ctx->pc = 0x303428u;
            goto label_303428;
        }
    }
    ctx->pc = 0x303424u;
    // 0x303424: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x303424u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_303428:
    // 0x303428: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x303428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x30342c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30342Cu;
    {
        const bool branch_taken_0x30342c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30342Cu;
        // 0x303430: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30342c) {
            ctx->pc = 0x303448u;
            goto label_303448;
        }
    }
    ctx->pc = 0x303434u;
    // 0x303434: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x303434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x303438: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x303438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30343c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30343cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x303440u;
    {
        const bool branch_taken_0x303440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303440u;
        // 0x303444: 0x824021  addu        $t0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303440) {
            ctx->pc = 0x30344Cu;
            goto label_30344c;
        }
    }
    ctx->pc = 0x303448u;
label_303448:
    // 0x303448: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x303448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30344c:
    // 0x30344c: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x30344cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x303450: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x303450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x303454: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x303454u;
    {
        const bool branch_taken_0x303454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303454u;
        // 0x303458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303454) {
            ctx->pc = 0x303488u;
            goto label_303488;
        }
    }
    ctx->pc = 0x30345Cu;
    // 0x30345c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x30345cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x303460: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x303460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x303464: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x303464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x303468: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x303468u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30346c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30346cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x303470: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x303470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x303474: 0x94420062  lhu         $v0, 0x62($v0)
    ctx->pc = 0x303474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x303478: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303478u;
    {
        const bool branch_taken_0x303478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x303478) {
            ctx->pc = 0x303488u;
            goto label_303488;
        }
    }
    ctx->pc = 0x303480u;
    // 0x303480: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x303480u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x303484: 0x0  nop
    ctx->pc = 0x303484u;
    // NOP
label_303488:
    // 0x303488: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x303488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x30348c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30348Cu;
    {
        const bool branch_taken_0x30348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30348Cu;
        // 0x303490: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30348c) {
            ctx->pc = 0x3034A8u;
            goto label_3034a8;
        }
    }
    ctx->pc = 0x303494u;
    // 0x303494: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x303494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x303498: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x303498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30349c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3034a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3034A0u;
    {
        const bool branch_taken_0x3034a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034A0u;
        // 0x3034a4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034a0) {
            ctx->pc = 0x3034ACu;
            goto label_3034ac;
        }
    }
    ctx->pc = 0x3034A8u;
label_3034a8:
    // 0x3034a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3034a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3034ac:
    // 0x3034ac: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3034ACu;
    {
        const bool branch_taken_0x3034ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3034ac) {
            ctx->pc = 0x3034D0u;
            goto label_3034d0;
        }
    }
    ctx->pc = 0x3034B4u;
    // 0x3034b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3034B4u;
    {
        const bool branch_taken_0x3034b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3034b4) {
            ctx->pc = 0x3034D0u;
            goto label_3034d0;
        }
    }
    ctx->pc = 0x3034BCu;
    // 0x3034bc: 0x8d030064  lw          $v1, 0x64($t0)
    ctx->pc = 0x3034bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x3034c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3034c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3034c4: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x3034c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
    // 0x3034c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3034C8u;
    {
        const bool branch_taken_0x3034c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3034CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034C8u;
        // 0x3034cc: 0xad060064  sw          $a2, 0x64($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3034c8) {
            ctx->pc = 0x3034D8u;
            goto label_3034d8;
        }
    }
    ctx->pc = 0x3034D0u;
label_3034d0:
    // 0x3034d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3034d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3034d4: 0x0  nop
    ctx->pc = 0x3034d4u;
    // NOP
label_3034d8:
    // 0x3034d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3034D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3034D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3034E0u;
}
