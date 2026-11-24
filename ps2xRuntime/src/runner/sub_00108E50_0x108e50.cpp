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

// Function: sub_00108E50
// Address: 0x108e50 - 0x108f08
void sub_00108E50_0x108e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108E50_0x108e50");
#endif

    switch (ctx->pc) {
        case 0x108e78u: goto label_108e78;
        case 0x108e80u: goto label_108e80;
        default: break;
    }

    ctx->pc = 0x108e50u;

    // 0x108e50: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108e50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108e54: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108e58: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108e5c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x108e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108e60: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108e60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108e64: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108e64u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108e68: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108e68u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x108e6c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x108e6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108e70: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x108e70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108e74: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x108e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_108e78:
    // 0x108e78: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108e78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108e7c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x108e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108e80:
    // 0x108e80: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x108e80u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108e84: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x108e84u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108e88: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x108e88u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108e8c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108e8cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108e90: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x108e90u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108e94: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x108e94u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x108e98: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108e98u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108e9c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x108e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108ea0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x108ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x108ea4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x108ea4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108ea8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x108ea8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108eac: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x108eacu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108eb0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x108eb0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108eb4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x108eb4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x108eb8: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x108eb8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x108ebc: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x108ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x108ec0: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x108EC0u;
    {
        const bool branch_taken_0x108ec0 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x108EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EC0u;
        // 0x108ec4: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ec0) {
            ctx->pc = 0x108E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e80;
        }
    }
    ctx->pc = 0x108EC8u;
    // 0x108ec8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x108ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x108ecc: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x108eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x108ed0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108ed4: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x108ed4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x108ed8: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x108ED8u;
    {
        const bool branch_taken_0x108ed8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108ED8u;
        // 0x108edc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ed8) {
            ctx->pc = 0x108E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e80;
        }
    }
    ctx->pc = 0x108EE0u;
    // 0x108ee0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108ee0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108ee4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108ee8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108eec: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x108eecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x108ef0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x108ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x108ef4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x108ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x108ef8: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x108EF8u;
    {
        const bool branch_taken_0x108ef8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x108EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF8u;
        // 0x108efc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ef8) {
            ctx->pc = 0x108E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e78;
        }
    }
    ctx->pc = 0x108F00u;
    // 0x108f00: 0x3e00008  jr          $ra
    ctx->pc = 0x108F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108F08u;
}
