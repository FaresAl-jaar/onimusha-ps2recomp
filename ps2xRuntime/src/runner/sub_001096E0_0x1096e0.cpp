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

// Function: sub_001096E0
// Address: 0x1096e0 - 0x1097f4
void sub_001096E0_0x1096e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001096E0_0x1096e0");
#endif

    switch (ctx->pc) {
        case 0x109708u: goto label_109708;
        case 0x109740u: goto label_109740;
        default: break;
    }

    ctx->pc = 0x1096e0u;

    // 0x1096e0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1096e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1096e4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1096e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1096e8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1096e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1096ec: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1096ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1096f0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1096f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1096f4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1096f4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1096f8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1096f8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1096fc: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1096fcu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x109700: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x109700u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109704: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x109704u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109708:
    // 0x109708: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10970c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10970cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109710: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109710u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109714: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109714u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109718: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109718u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x10971c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10971cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109720: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109720u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x109724: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109728: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x109728u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x10972c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x10972cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109730: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109730u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109734: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x109734u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109738: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x109738u;
    {
        const bool branch_taken_0x109738 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109738u;
        // 0x10973c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109738) {
            ctx->pc = 0x1097ACu;
            goto label_1097ac;
        }
    }
    ctx->pc = 0x109740u;
label_109740:
    // 0x109740: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x109740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109744: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109744u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109748: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109748u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10974c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x10974cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109750: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109750u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109754: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109754u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109758: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109758u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10975c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10975cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109760: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109764: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109764u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109768: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109768u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10976c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10976cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109770: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x109770u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109774: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x109774u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x109778: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x109778u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10977c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10977cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x109780: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x109780u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x109784: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x109784u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x109788: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x109788u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x10978c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x10978cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x109790: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x109790u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x109794: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x109794u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x109798: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x109798u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x10979c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10979cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1097a0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1097a0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1097a4: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1097A4u;
    {
        const bool branch_taken_0x1097a4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x1097A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A4u;
        // 0x1097a8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097a4) {
            ctx->pc = 0x109740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109740;
        }
    }
    ctx->pc = 0x1097ACu;
label_1097ac:
    // 0x1097ac: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1097acu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1097b0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1097b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1097b4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1097b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1097b8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1097b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1097bc: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1097bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1097c0: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1097C0u;
    {
        const bool branch_taken_0x1097c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1097C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097C0u;
        // 0x1097c4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097c0) {
            ctx->pc = 0x109740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109740;
        }
    }
    ctx->pc = 0x1097C8u;
    // 0x1097c8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1097c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1097cc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1097ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1097d0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1097d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1097d4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1097d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1097d8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1097d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1097dc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1097dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1097e0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1097e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1097e4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1097E4u;
    {
        const bool branch_taken_0x1097e4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1097E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097E4u;
        // 0x1097e8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097e4) {
            ctx->pc = 0x109708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109708;
        }
    }
    ctx->pc = 0x1097ECu;
    // 0x1097ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1097ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1097ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1097F4u;
}
