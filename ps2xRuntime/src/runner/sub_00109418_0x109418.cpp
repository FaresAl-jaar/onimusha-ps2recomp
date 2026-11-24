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

// Function: sub_00109418
// Address: 0x109418 - 0x1094ec
void sub_00109418_0x109418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109418_0x109418");
#endif

    switch (ctx->pc) {
        case 0x109444u: goto label_109444;
        default: break;
    }

    ctx->pc = 0x109418u;

    // 0x109418: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109418u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10941c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10941cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109420: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x109424: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x109424u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109428: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109428u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10942c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x10942cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x109430: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109430u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109434: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109434u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x109438: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x109438u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10943c: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x10943cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x109440: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x109440u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109444:
    // 0x109444: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x109444u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109448: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x109448u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10944c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x10944cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109450: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x109450u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x109454: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x109454u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x109458: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x109458u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10945c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10945cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109460: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x109460u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x109464: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109464u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109468: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x109468u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x10946c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x10946cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x109470: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x109470u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x109474: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x109474u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x109478: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x109478u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10947c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x10947cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x109480: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x109480u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x109484: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x109484u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x109488: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x109488u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x10948c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x10948cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109490: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x109490u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x109494: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x109494u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x109498: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x109498u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x10949c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x10949cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1094a0: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1094a0u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1094a4: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x1094a4u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1094a8: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1094a8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1094ac: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x1094acu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x1094b0: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1094b0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1094b4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1094b4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1094b8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1094b8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1094bc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1094bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1094c0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1094c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1094c4: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1094C4u;
    {
        const bool branch_taken_0x1094c4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x1094C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094C4u;
        // 0x1094c8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094c4) {
            ctx->pc = 0x109444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109444;
        }
    }
    ctx->pc = 0x1094CCu;
    // 0x1094cc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1094ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1094d0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1094d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1094d4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1094d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1094d8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x1094d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1094dc: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1094DCu;
    {
        const bool branch_taken_0x1094dc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1094E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094DCu;
        // 0x1094e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1094dc) {
            ctx->pc = 0x109444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109444;
        }
    }
    ctx->pc = 0x1094E4u;
    // 0x1094e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1094E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1094E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1094ECu;
}
