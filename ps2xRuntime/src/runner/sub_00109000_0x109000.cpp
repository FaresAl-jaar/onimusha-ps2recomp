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

// Function: sub_00109000
// Address: 0x109000 - 0x1090fc
void sub_00109000_0x109000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109000_0x109000");
#endif

    switch (ctx->pc) {
        case 0x109028u: goto label_109028;
        case 0x109060u: goto label_109060;
        default: break;
    }

    ctx->pc = 0x109000u;

    // 0x109000: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109000u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109004: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109008: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10900c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x10900cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109010: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109010u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109014: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109014u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x109018: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x109018u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10901c: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x10901cu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x109020: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x109020u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109024: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x109024u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109028:
    // 0x109028: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10902c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10902cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109030: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109030u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109034: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x109034u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109038: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109038u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x10903c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10903cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109040: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109040u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x109044: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109048: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x109048u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x10904c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x10904cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109050: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109050u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109054: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x109054u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109058: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x109058u;
    {
        const bool branch_taken_0x109058 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109058u;
        // 0x10905c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109058) {
            ctx->pc = 0x1090B4u;
            goto label_1090b4;
        }
    }
    ctx->pc = 0x109060u;
label_109060:
    // 0x109060: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x109060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x109064: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109064u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109068: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x109068u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10906c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x10906cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109070: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109070u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109074: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x109074u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109078: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x109078u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x10907c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x10907cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x109080: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109084: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x109084u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x109088: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x109088u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10908c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10908cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109090: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x109090u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x109094: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x109094u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x109098: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x109098u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10909c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10909cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1090a0: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x1090a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1090a4: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x1090a4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x1090a8: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1090a8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1090ac: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1090ACu;
    {
        const bool branch_taken_0x1090ac = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x1090B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090ACu;
        // 0x1090b0: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090ac) {
            ctx->pc = 0x109060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109060;
        }
    }
    ctx->pc = 0x1090B4u;
label_1090b4:
    // 0x1090b4: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1090b4u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1090b8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1090b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1090bc: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1090bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1090c0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1090c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1090c4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1090c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1090c8: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1090C8u;
    {
        const bool branch_taken_0x1090c8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1090CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090C8u;
        // 0x1090cc: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090c8) {
            ctx->pc = 0x109060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109060;
        }
    }
    ctx->pc = 0x1090D0u;
    // 0x1090d0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1090d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1090d4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1090d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1090d8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1090d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1090dc: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1090dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1090e0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1090e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1090e4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1090e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1090e8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1090e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1090ec: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1090ECu;
    {
        const bool branch_taken_0x1090ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1090F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090ECu;
        // 0x1090f0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090ec) {
            ctx->pc = 0x109028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109028;
        }
    }
    ctx->pc = 0x1090F4u;
    // 0x1090f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1090F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1090F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1090FCu;
}
