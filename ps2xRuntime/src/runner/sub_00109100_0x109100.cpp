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

// Function: sub_00109100
// Address: 0x109100 - 0x10919c
void sub_00109100_0x109100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109100_0x109100");
#endif

    switch (ctx->pc) {
        case 0x109124u: goto label_109124;
        default: break;
    }

    ctx->pc = 0x109100u;

    // 0x109100: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x109100u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109104: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x109104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x109108: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x109108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10910c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x10910cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x109110: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x109110u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109114: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x109114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x109118: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x109118u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10911c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x10911cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109120: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x109120u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_109124:
    // 0x109124: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x109124u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x109128: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x109128u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10912c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x10912cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x109130: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x109130u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x109134: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x109134u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x109138: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x109138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10913c: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x10913cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x109140: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x109140u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x109144: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x109144u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x109148: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x109148u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10914c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x10914cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x109150: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x109150u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x109154: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x109154u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109158: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x109158u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x10915c: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x10915cu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x109160: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x109160u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x109164: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x109164u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x109168: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x109168u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x10916c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x10916cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x109170: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x109170u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x109174: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x109174u;
    {
        const bool branch_taken_0x109174 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x109178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109174u;
        // 0x109178: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109174) {
            ctx->pc = 0x109124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109124;
        }
    }
    ctx->pc = 0x10917Cu;
    // 0x10917c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10917cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x109180: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x109180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x109184: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x109184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x109188: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x109188u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10918c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x10918Cu;
    {
        const bool branch_taken_0x10918c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x109190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10918Cu;
        // 0x109190: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10918c) {
            ctx->pc = 0x109124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109124;
        }
    }
    ctx->pc = 0x109194u;
    // 0x109194: 0x3e00008  jr          $ra
    ctx->pc = 0x109194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10919Cu;
}
