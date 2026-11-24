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

// Function: sub_00109250
// Address: 0x109250 - 0x10932c
void sub_00109250_0x109250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109250_0x109250");
#endif

    switch (ctx->pc) {
        case 0x109294u: goto label_109294;
        default: break;
    }

    ctx->pc = 0x109250u;

    // 0x109250: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109250u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109254: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109258: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10925c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x10925cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109260: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109260u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109264: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x109268: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109268u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10926c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x10926cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x109270: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x109270u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109274: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x109274u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109278: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109278u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x10927c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x10927cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x109280: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x109280u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x109284: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x109284u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x109288: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x109288u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10928c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x10928Cu;
    {
        const bool branch_taken_0x10928c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10928Cu;
        // 0x109290: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10928c) {
            ctx->pc = 0x10930Cu;
            goto label_10930c;
        }
    }
    ctx->pc = 0x109294u;
label_109294:
    // 0x109294: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x109294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x109298: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x109298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x10929c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x10929cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1092a0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1092a0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1092a4: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1092a4u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1092a8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1092a8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1092ac: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1092acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1092b0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1092b0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1092b4: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x1092b4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1092b8: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x1092b8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x1092bc: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x1092bcu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1092c0: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x1092c0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x1092c4: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x1092c4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1092c8: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x1092c8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1092cc: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x1092ccu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x1092d0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x1092d0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x1092d4: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x1092d4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1092d8: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x1092d8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1092dc: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x1092dcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1092e0: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x1092e0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x1092e4: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x1092e4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1092e8: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1092e8u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1092ec: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x1092ecu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1092f0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x1092f0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x1092f4: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x1092f4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x1092f8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1092f8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1092fc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1092fcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x109300: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x109300u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x109304: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x109304u;
    {
        const bool branch_taken_0x109304 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x109308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109304u;
        // 0x109308: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109304) {
            ctx->pc = 0x109294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109294;
        }
    }
    ctx->pc = 0x10930Cu;
label_10930c:
    // 0x10930c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x109310: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x109310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x109314: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109318: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x109318u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10931c: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x10931Cu;
    {
        const bool branch_taken_0x10931c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x109320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10931Cu;
        // 0x109320: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10931c) {
            ctx->pc = 0x109294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109294;
        }
    }
    ctx->pc = 0x109324u;
    // 0x109324: 0x3e00008  jr          $ra
    ctx->pc = 0x109324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10932Cu;
}
