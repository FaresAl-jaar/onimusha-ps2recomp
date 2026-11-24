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

// Function: sub_001094F0
// Address: 0x1094f0 - 0x1095c0
void sub_001094F0_0x1094f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001094F0_0x1094f0");
#endif

    switch (ctx->pc) {
        case 0x109518u: goto label_109518;
        case 0x109520u: goto label_109520;
        default: break;
    }

    ctx->pc = 0x1094f0u;

    // 0x1094f0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1094f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1094f4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1094f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1094f8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1094f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1094fc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1094fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109500: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109500u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109504: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109504u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109508: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109508u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10950c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x10950cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109510: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x109510u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109514: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x109514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_109518:
    // 0x109518: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10951c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x10951cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109520:
    // 0x109520: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109520u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109524: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109524u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109528: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109528u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10952c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10952cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109530: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109530u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109534: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109534u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x109538: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x109538u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x10953c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x109540: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x109540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x109544: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109544u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109548: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109548u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10954c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10954cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109550: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x109550u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109554: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x109554u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x109558: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x109558u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10955c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x10955cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109560: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x109560u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x109564: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x109564u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109568: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x109568u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x10956c: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x10956cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x109570: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x109570u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109574: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x109574u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x109578: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x109578u;
    {
        const bool branch_taken_0x109578 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x10957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109578u;
        // 0x10957c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109578) {
            ctx->pc = 0x109520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109520;
        }
    }
    ctx->pc = 0x109580u;
    // 0x109580: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x109580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x109584: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x109584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x109588: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10958c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10958cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x109590: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x109590u;
    {
        const bool branch_taken_0x109590 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109590u;
        // 0x109594: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109590) {
            ctx->pc = 0x109520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109520;
        }
    }
    ctx->pc = 0x109598u;
    // 0x109598: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109598u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10959c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10959cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1095a0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1095a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1095a4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1095a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1095a8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1095a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1095ac: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1095acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1095b0: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1095B0u;
    {
        const bool branch_taken_0x1095b0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1095B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095B0u;
        // 0x1095b4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1095b0) {
            ctx->pc = 0x109518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109518;
        }
    }
    ctx->pc = 0x1095B8u;
    // 0x1095b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1095B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1095B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1095C0u;
}
