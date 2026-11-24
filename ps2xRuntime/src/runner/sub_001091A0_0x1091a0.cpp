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

// Function: sub_001091A0
// Address: 0x1091a0 - 0x10924c
void sub_001091A0_0x1091a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001091A0_0x1091a0");
#endif

    switch (ctx->pc) {
        case 0x1091c0u: goto label_1091c0;
        case 0x1091c8u: goto label_1091c8;
        default: break;
    }

    ctx->pc = 0x1091a0u;

    // 0x1091a0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1091a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1091a4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1091a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1091a8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1091a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1091ac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1091acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1091b0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1091b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1091b4: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1091b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1091b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1091b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1091bc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1091bcu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_1091c0:
    // 0x1091c0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1091c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1091c4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1091c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1091c8:
    // 0x1091c8: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1091c8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1091cc: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1091ccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1091d0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1091d0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1091d4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1091d4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1091d8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1091d8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1091dc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1091dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1091e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1091e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1091e4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1091e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1091e8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1091e8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1091ec: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1091ecu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1091f0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1091f0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1091f4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1091f4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1091f8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1091f8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1091fc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1091fcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109200: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x109200u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x109204: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x109204u;
    {
        const bool branch_taken_0x109204 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x109208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109204u;
        // 0x109208: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109204) {
            ctx->pc = 0x1091C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1091c8;
        }
    }
    ctx->pc = 0x10920Cu;
    // 0x10920c: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x10920cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x109210: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x109210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x109214: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109218: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x109218u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10921c: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x10921Cu;
    {
        const bool branch_taken_0x10921c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10921Cu;
        // 0x109220: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10921c) {
            ctx->pc = 0x1091C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1091c8;
        }
    }
    ctx->pc = 0x109224u;
    // 0x109224: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109224u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109228: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10922c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x10922cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109230: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x109230u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x109234: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x109234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x109238: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x109238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x10923c: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x10923Cu;
    {
        const bool branch_taken_0x10923c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x109240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10923Cu;
        // 0x109240: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10923c) {
            ctx->pc = 0x1091C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1091c0;
        }
    }
    ctx->pc = 0x109244u;
    // 0x109244: 0x3e00008  jr          $ra
    ctx->pc = 0x109244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10924Cu;
}
