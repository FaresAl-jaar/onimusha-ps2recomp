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

// Function: sub_00338730
// Address: 0x338730 - 0x338818
void sub_00338730_0x338730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338730_0x338730");
#endif

    ctx->pc = 0x338730u;

    // 0x338730: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x338730u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338734: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x338734u;
    {
        const bool branch_taken_0x338734 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x338738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338734u;
        // 0x338738: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338734) {
            ctx->pc = 0x338758u;
            goto label_338758;
        }
    }
    ctx->pc = 0x33873Cu;
    // 0x33873c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x33873cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x338740: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x338740u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x338744: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x338744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x338748: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x338748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x33874c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33874cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338750: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x338750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x338754: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x338754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_338758:
    // 0x338758: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x338758u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x33875c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x33875Cu;
    {
        const bool branch_taken_0x33875c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33875c) {
            ctx->pc = 0x338780u;
            goto label_338780;
        }
    }
    ctx->pc = 0x338764u;
    // 0x338764: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x338764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x338768: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x338768u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x33876c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33876cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x338770: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x338770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x338774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338778: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x338778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x33877c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33877cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_338780:
    // 0x338780: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x338780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x338784: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x338784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x338788: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x338788u;
    {
        const bool branch_taken_0x338788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x338788) {
            ctx->pc = 0x338810u;
            goto label_338810;
        }
    }
    ctx->pc = 0x338790u;
    // 0x338790: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x338790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338794: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x338794u;
    {
        const bool branch_taken_0x338794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x338798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338794u;
        // 0x338798: 0x948a0008  lhu         $t2, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338794) {
            ctx->pc = 0x3387D0u;
            goto label_3387d0;
        }
    }
    ctx->pc = 0x33879Cu;
    // 0x33879c: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x33879cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3387a0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x3387a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3387a4: 0x24890002  addiu       $t1, $a0, 0x2
    ctx->pc = 0x3387a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3387a8: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x3387a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3387ac: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x3387acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3387b0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x3387b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3387b4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3387b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3387b8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3387b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3387bc: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3387bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3387c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3387c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3387c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3387c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3387c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3387C8u;
    {
        const bool branch_taken_0x3387c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387C8u;
        // 0x3387cc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387c8) {
            ctx->pc = 0x3387D4u;
            goto label_3387d4;
        }
    }
    ctx->pc = 0x3387D0u;
label_3387d0:
    // 0x3387d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3387d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3387d4:
    // 0x3387d4: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x3387d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3387d8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x3387D8u;
    {
        const bool branch_taken_0x3387d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3387d8) {
            ctx->pc = 0x338810u;
            goto label_338810;
        }
    }
    ctx->pc = 0x3387E0u;
    // 0x3387e0: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3387e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3387e4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x3387e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3387e8: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x3387e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3387ec: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3387ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3387f0: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3387f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3387f4: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x3387f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3387f8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x3387f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3387fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3387fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x338800: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x338800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x338804: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x338804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x338808: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x338808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33880c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33880cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_338810:
    // 0x338810: 0x3e00008  jr          $ra
    ctx->pc = 0x338810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338818u;
}
