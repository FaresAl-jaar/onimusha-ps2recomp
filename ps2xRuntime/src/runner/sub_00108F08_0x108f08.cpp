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

// Function: sub_00108F08
// Address: 0x108f08 - 0x109000
void sub_00108F08_0x108f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108F08_0x108f08");
#endif

    switch (ctx->pc) {
        case 0x108f6cu: goto label_108f6c;
        default: break;
    }

    ctx->pc = 0x108f08u;

    // 0x108f08: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108f08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108f0c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108f10: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108f14: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x108f14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108f18: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108f18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108f1c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108f20: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108f20u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108f24: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108f24u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x108f28: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x108f28u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x108f2c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x108f2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108f30: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x108f30u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108f34: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x108f34u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108f38: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108f38u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108f3c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x108f3cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108f40: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x108f40u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x108f44: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x108f44u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108f48: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x108f48u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108f4c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x108f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108f50: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x108f50u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108f54: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x108f54u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x108f58: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x108f58u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x108f5c: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x108f5cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x108f60: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x108f60u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x108f64: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x108F64u;
    {
        const bool branch_taken_0x108f64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F64u;
        // 0x108f68: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f64) {
            ctx->pc = 0x108FE0u;
            goto label_108fe0;
        }
    }
    ctx->pc = 0x108F6Cu;
label_108f6c:
    // 0x108f6c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x108f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x108f70: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x108f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x108f74: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x108f74u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108f78: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x108f78u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108f7c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108f7cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108f80: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x108f80u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x108f84: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x108f84u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x108f88: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x108f88u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108f8c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108f8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108f90: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x108f90u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108f94: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x108f94u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108f98: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x108f98u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x108f9c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x108f9cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108fa0: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x108fa0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108fa4: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x108fa4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x108fa8: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x108fa8u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x108fac: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x108facu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x108fb0: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x108fb0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x108fb4: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x108fb4u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108fb8: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x108fb8u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x108fbc: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x108fbcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x108fc0: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x108fc0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x108fc4: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x108fc4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x108fc8: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x108fc8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x108fcc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x108fccu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x108fd0: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x108fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x108fd4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x108fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x108fd8: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x108FD8u;
    {
        const bool branch_taken_0x108fd8 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x108FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FD8u;
        // 0x108fdc: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fd8) {
            ctx->pc = 0x108F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108f6c;
        }
    }
    ctx->pc = 0x108FE0u;
label_108fe0:
    // 0x108fe0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108fe4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x108fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x108fe8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108fec: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x108fecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x108ff0: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x108FF0u;
    {
        const bool branch_taken_0x108ff0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FF0u;
        // 0x108ff4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ff0) {
            ctx->pc = 0x108F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108f6c;
        }
    }
    ctx->pc = 0x108FF8u;
    // 0x108ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x108FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109000u;
}
