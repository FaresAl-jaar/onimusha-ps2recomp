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

// Function: sub_003DAA60
// Address: 0x3daa60 - 0x3dab18
void sub_003DAA60_0x3daa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAA60_0x3daa60");
#endif

    switch (ctx->pc) {
        case 0x3daaa8u: goto label_3daaa8;
        case 0x3daad4u: goto label_3daad4;
        case 0x3daae8u: goto label_3daae8;
        default: break;
    }

    ctx->pc = 0x3daa60u;

    // 0x3daa60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3daa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3daa64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3daa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3daa68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3daa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3daa6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3daa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3daa70: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3daa70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3daa74: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DAA74u;
    {
        const bool branch_taken_0x3daa74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAA74u;
        // 0x3daa78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa74) {
            ctx->pc = 0x3DAAE0u;
            goto label_3daae0;
        }
    }
    ctx->pc = 0x3DAA7Cu;
    // 0x3daa7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3daa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3daa80: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3DAA80u;
    {
        const bool branch_taken_0x3daa80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3daa80) {
            ctx->pc = 0x3DAAB8u;
            goto label_3daab8;
        }
    }
    ctx->pc = 0x3DAA88u;
    // 0x3daa88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DAA88u;
    {
        const bool branch_taken_0x3daa88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3daa88) {
            ctx->pc = 0x3DAA98u;
            goto label_3daa98;
        }
    }
    ctx->pc = 0x3DAA90u;
    // 0x3daa90: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3DAA90u;
    {
        const bool branch_taken_0x3daa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3daa90) {
            ctx->pc = 0x3DAB08u;
            goto label_3dab08;
        }
    }
    ctx->pc = 0x3DAA98u;
label_3daa98:
    // 0x3daa98: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3daa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3daa9c: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x3daa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3daaa0: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3DAAA0u;
    SET_GPR_U32(ctx, 31, 0x3DAAA8u);
    ctx->pc = 0x3DAAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAAA0u;
    // 0x3daaa4: 0x34460040  ori         $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3DAAA0u, 0x3DAAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAAA8u;
label_3daaa8:
    // 0x3daaa8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3daaa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3daaac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3daaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3daab0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3DAAB0u;
    {
        const bool branch_taken_0x3daab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAAB0u;
        // 0x3daab4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daab0) {
            ctx->pc = 0x3DAB08u;
            goto label_3dab08;
        }
    }
    ctx->pc = 0x3DAAB8u;
label_3daab8:
    // 0x3daab8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3daab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3daabc: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3daabcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3daac0: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x3daac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3daac4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DAAC4u;
    {
        const bool branch_taken_0x3daac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3daac4) {
            ctx->pc = 0x3DAB08u;
            goto label_3dab08;
        }
    }
    ctx->pc = 0x3DAACCu;
    // 0x3daacc: 0xc0f711c  jal         func_3DC470
    ctx->pc = 0x3DAACCu;
    SET_GPR_U32(ctx, 31, 0x3DAAD4u);
    ctx->pc = 0x3DC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC470u, 0x3DAACCu, 0x3DAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAAD4u;
label_3daad4:
    // 0x3daad4: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3daad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3daad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3daad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3daadc: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3daadcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_3daae0:
    // 0x3daae0: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3DAAE0u;
    SET_GPR_U32(ctx, 31, 0x3DAAE8u);
    ctx->pc = 0x3DAAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAAE0u;
    // 0x3daae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3DAAE0u, 0x3DAAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAAE8u;
label_3daae8:
    // 0x3daae8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DAAE8u;
    {
        const bool branch_taken_0x3daae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAAE8u;
        // 0x3daaec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daae8) {
            ctx->pc = 0x3DAB08u;
            goto label_3dab08;
        }
    }
    ctx->pc = 0x3DAAF0u;
    // 0x3daaf0: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3daaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3daaf4: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3daaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3daaf8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3daaf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3daafc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3daafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dab00: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3dab00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dab04: 0x0  nop
    ctx->pc = 0x3dab04u;
    // NOP
label_3dab08:
    // 0x3dab08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dab08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dab0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dab0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dab10: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB10u;
        // 0x3dab14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAB18u;
}
