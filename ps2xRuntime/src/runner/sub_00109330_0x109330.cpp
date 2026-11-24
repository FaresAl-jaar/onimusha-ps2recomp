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

// Function: sub_00109330
// Address: 0x109330 - 0x109414
void sub_00109330_0x109330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109330_0x109330");
#endif

    switch (ctx->pc) {
        case 0x109358u: goto label_109358;
        case 0x109378u: goto label_109378;
        default: break;
    }

    ctx->pc = 0x109330u;

    // 0x109330: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109330u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109334: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109338: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10933c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x10933cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109340: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109340u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109344: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109344u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109348: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109348u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10934c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x10934cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109350: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x109350u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x109354: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109354u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_109358:
    // 0x109358: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10935c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10935cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109360: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109360u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109364: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109364u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109368: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109368u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10936c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x10936cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x109370: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x109370u;
    {
        const bool branch_taken_0x109370 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109370u;
        // 0x109374: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109370) {
            ctx->pc = 0x1093CCu;
            goto label_1093cc;
        }
    }
    ctx->pc = 0x109378u;
label_109378:
    // 0x109378: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x10937c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x10937cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109380: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109380u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109384: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109384u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109388: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109388u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10938c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10938cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109390: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x109390u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x109394: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x109394u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109398: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x109398u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x10939c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x10939cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1093a0: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x1093a0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1093a4: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1093a4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1093a8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1093a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1093ac: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x1093acu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x1093b0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1093b0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1093b4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1093b4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1093b8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1093b8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x1093bc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1093bcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1093c0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1093c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1093c4: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1093C4u;
    {
        const bool branch_taken_0x1093c4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x1093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C4u;
        // 0x1093c8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093c4) {
            ctx->pc = 0x109378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109378;
        }
    }
    ctx->pc = 0x1093CCu;
label_1093cc:
    // 0x1093cc: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1093ccu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1093d0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1093d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1093d4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1093d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1093d8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1093d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1093dc: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1093dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1093e0: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1093E0u;
    {
        const bool branch_taken_0x1093e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1093E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093E0u;
        // 0x1093e4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093e0) {
            ctx->pc = 0x109378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109378;
        }
    }
    ctx->pc = 0x1093E8u;
    // 0x1093e8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1093e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1093ec: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1093ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1093f0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1093f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1093f4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1093f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1093f8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1093f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1093fc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1093fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x109400: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x109400u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x109404: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x109404u;
    {
        const bool branch_taken_0x109404 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109404u;
        // 0x109408: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109404) {
            ctx->pc = 0x109358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109358;
        }
    }
    ctx->pc = 0x10940Cu;
    // 0x10940c: 0x3e00008  jr          $ra
    ctx->pc = 0x10940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10940Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109414u;
}
