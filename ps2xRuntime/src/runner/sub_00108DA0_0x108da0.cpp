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

// Function: sub_00108DA0
// Address: 0x108da0 - 0x108e4c
void sub_00108DA0_0x108da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108DA0_0x108da0");
#endif

    switch (ctx->pc) {
        case 0x108dccu: goto label_108dcc;
        default: break;
    }

    ctx->pc = 0x108da0u;

    // 0x108da0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108da0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108da4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108da8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108dac: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x108dacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108db0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108db0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108db4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108db8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108db8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108dbc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108dbcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x108dc0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x108dc0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108dc4: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x108dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x108dc8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x108dc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108dcc:
    // 0x108dcc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x108dccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108dd0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x108dd0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108dd4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108dd4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108dd8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x108dd8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x108ddc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x108ddcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x108de0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x108de0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108de4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108de4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108de8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x108de8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x108dec: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x108decu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108df0: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x108df0u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x108df4: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x108df4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108df8: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x108df8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108dfc: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x108dfcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x108e00: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x108e00u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x108e04: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x108e04u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x108e08: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x108e08u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x108e0c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x108e0cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x108e10: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x108e10u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x108e14: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x108e14u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x108e18: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x108e18u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x108e1c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x108e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x108e20: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x108e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x108e24: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x108E24u;
    {
        const bool branch_taken_0x108e24 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x108E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E24u;
        // 0x108e28: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e24) {
            ctx->pc = 0x108DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108dcc;
        }
    }
    ctx->pc = 0x108E2Cu;
    // 0x108e2c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108e30: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x108e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x108e34: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108e34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108e38: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x108e38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x108e3c: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x108E3Cu;
    {
        const bool branch_taken_0x108e3c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x108E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E3Cu;
        // 0x108e40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e3c) {
            ctx->pc = 0x108DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108dcc;
        }
    }
    ctx->pc = 0x108E44u;
    // 0x108e44: 0x3e00008  jr          $ra
    ctx->pc = 0x108E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108E4Cu;
}
