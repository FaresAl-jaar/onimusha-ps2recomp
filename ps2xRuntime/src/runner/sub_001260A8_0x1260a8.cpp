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

// Function: sub_001260A8
// Address: 0x1260a8 - 0x12610c
void sub_001260A8_0x1260a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001260A8_0x1260a8");
#endif

    switch (ctx->pc) {
        case 0x1260d4u: goto label_1260d4;
        default: break;
    }

    ctx->pc = 0x1260a8u;

    // 0x1260a8: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x1260a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1260ac: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x1260acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1260b0: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x1260b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1260b4: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1260B4u;
    {
        const bool branch_taken_0x1260b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1260B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260B4u;
        // 0x1260b8: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260b4) {
            ctx->pc = 0x126104u;
            goto label_126104;
        }
    }
    ctx->pc = 0x1260BCu;
    // 0x1260bc: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1260bcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1260c0: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1260c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1260c4: 0x24af0014  addiu       $t7, $a1, 0x14
    ctx->pc = 0x1260c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x1260c8: 0x8e5821  addu        $t3, $a0, $t6
    ctx->pc = 0x1260c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x1260cc: 0x1ee2821  addu        $a1, $t7, $t6
    ctx->pc = 0x1260ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1260d0: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x1260d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_1260d4:
    // 0x1260d4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x1260d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1260d8: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x1260d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1260dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1260e0: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x1260e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1260e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1260e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1260e8: 0x8b502b  sltu        $t2, $a0, $t3
    ctx->pc = 0x1260e8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1260ec: 0x18d702b  sltu        $t6, $t4, $t5
    ctx->pc = 0x1260ecu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1260f0: 0x158d0004  bne         $t4, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1260F0u;
    {
        const bool branch_taken_0x1260f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x1260F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260F0u;
        // 0x1260f4: 0x1ee100a  movz        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260f0) {
            ctx->pc = 0x126104u;
            goto label_126104;
        }
    }
    ctx->pc = 0x1260F8u;
    // 0x1260f8: 0x5540fff6  bnel        $t2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1260F8u;
    {
        const bool branch_taken_0x1260f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1260f8) {
            ctx->pc = 0x1260FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1260F8u;
            // 0x1260fc: 0x256bfffc  addiu       $t3, $t3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1260D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1260d4;
        }
    }
    ctx->pc = 0x126100u;
    // 0x126100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126104:
    // 0x126104: 0x3e00008  jr          $ra
    ctx->pc = 0x126104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12610Cu;
}
