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

// Function: sub_00108B80
// Address: 0x108b80 - 0x108c14
void sub_00108B80_0x108b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108B80_0x108b80");
#endif

    switch (ctx->pc) {
        case 0x108ba0u: goto label_108ba0;
        case 0x108ba8u: goto label_108ba8;
        default: break;
    }

    ctx->pc = 0x108b80u;

    // 0x108b80: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x108b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108b84: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x108b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108b88: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x108b88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108b8c: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x108b8cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108b90: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x108b90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108b94: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x108b94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x108b98: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x108b98u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108b9c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x108b9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108ba0:
    // 0x108ba0: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x108ba0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108ba4: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x108ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_108ba8:
    // 0x108ba8: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x108ba8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108bac: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x108bacu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x108bb0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x108bb0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108bb4: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x108bb4u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108bb8: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x108bb8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x108bbc: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x108bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x108bc0: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x108bc0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x108bc4: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x108bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x108bc8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x108bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x108bcc: 0x1de0fff6  bgtz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x108BCCu;
    {
        const bool branch_taken_0x108bcc = (GPR_S64(ctx, 15) > 0);
        ctx->pc = 0x108BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BCCu;
        // 0x108bd0: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bcc) {
            ctx->pc = 0x108BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108ba8;
        }
    }
    ctx->pc = 0x108BD4u;
    // 0x108bd4: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x108bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x108bd8: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x108bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x108bdc: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x108bdcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108be0: 0x32f5024  and         $t2, $t9, $t7
    ctx->pc = 0x108be0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x108be4: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x108BE4u;
    {
        const bool branch_taken_0x108be4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BE4u;
        // 0x108be8: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108be4) {
            ctx->pc = 0x108BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108ba8;
        }
    }
    ctx->pc = 0x108BECu;
    // 0x108bec: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x108becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108bf0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x108bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108bf4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x108bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108bf8: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108bfc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x108bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x108c00: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x108c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x108c04: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x108C04u;
    {
        const bool branch_taken_0x108c04 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x108C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C04u;
        // 0x108c08: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c04) {
            ctx->pc = 0x108BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108ba0;
        }
    }
    ctx->pc = 0x108C0Cu;
    // 0x108c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x108C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108C14u;
}
