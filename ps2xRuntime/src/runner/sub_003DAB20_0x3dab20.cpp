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

// Function: sub_003DAB20
// Address: 0x3dab20 - 0x3dabe0
void sub_003DAB20_0x3dab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAB20_0x3dab20");
#endif

    switch (ctx->pc) {
        case 0x3dab68u: goto label_3dab68;
        case 0x3dab94u: goto label_3dab94;
        case 0x3dabb0u: goto label_3dabb0;
        default: break;
    }

    ctx->pc = 0x3dab20u;

    // 0x3dab20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dab24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dab28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dab2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dab2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dab30: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3dab30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3dab34: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DAB34u;
    {
        const bool branch_taken_0x3dab34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB34u;
        // 0x3dab38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab34) {
            ctx->pc = 0x3DABA8u;
            goto label_3daba8;
        }
    }
    ctx->pc = 0x3DAB3Cu;
    // 0x3dab3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dab40: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3DAB40u;
    {
        const bool branch_taken_0x3dab40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dab40) {
            ctx->pc = 0x3DAB78u;
            goto label_3dab78;
        }
    }
    ctx->pc = 0x3DAB48u;
    // 0x3dab48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DAB48u;
    {
        const bool branch_taken_0x3dab48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dab48) {
            ctx->pc = 0x3DAB58u;
            goto label_3dab58;
        }
    }
    ctx->pc = 0x3DAB50u;
    // 0x3dab50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3DAB50u;
    {
        const bool branch_taken_0x3dab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dab50) {
            ctx->pc = 0x3DABD0u;
            goto label_3dabd0;
        }
    }
    ctx->pc = 0x3DAB58u;
label_3dab58:
    // 0x3dab58: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3dab58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3dab5c: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x3dab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3dab60: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3DAB60u;
    SET_GPR_U32(ctx, 31, 0x3DAB68u);
    ctx->pc = 0x3DAB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAB60u;
    // 0x3dab64: 0x34460040  ori         $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3DAB60u, 0x3DAB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB68u;
label_3dab68:
    // 0x3dab68: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3dab68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3dab6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dab70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3DAB70u;
    {
        const bool branch_taken_0x3dab70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB70u;
        // 0x3dab74: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab70) {
            ctx->pc = 0x3DABD0u;
            goto label_3dabd0;
        }
    }
    ctx->pc = 0x3DAB78u;
label_3dab78:
    // 0x3dab78: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3dab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3dab7c: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3dab7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3dab80: 0x28630067  slti        $v1, $v1, 0x67
    ctx->pc = 0x3dab80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)103) ? 1 : 0);
    // 0x3dab84: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3DAB84u;
    {
        const bool branch_taken_0x3dab84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dab84) {
            ctx->pc = 0x3DABD0u;
            goto label_3dabd0;
        }
    }
    ctx->pc = 0x3DAB8Cu;
    // 0x3dab8c: 0xc0f7224  jal         func_3DC890
    ctx->pc = 0x3DAB8Cu;
    SET_GPR_U32(ctx, 31, 0x3DAB94u);
    ctx->pc = 0x3DC890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC890u, 0x3DAB8Cu, 0x3DAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB94u;
label_3dab94:
    // 0x3dab94: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3dab94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3dab98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dab9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DAB9Cu;
    {
        const bool branch_taken_0x3dab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB9Cu;
        // 0x3daba0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab9c) {
            ctx->pc = 0x3DABD0u;
            goto label_3dabd0;
        }
    }
    ctx->pc = 0x3DABA4u;
    // 0x3daba4: 0x0  nop
    ctx->pc = 0x3daba4u;
    // NOP
label_3daba8:
    // 0x3daba8: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3DABA8u;
    SET_GPR_U32(ctx, 31, 0x3DABB0u);
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3DABA8u, 0x3DABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DABB0u;
label_3dabb0:
    // 0x3dabb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DABB0u;
    {
        const bool branch_taken_0x3dabb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABB0u;
        // 0x3dabb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dabb0) {
            ctx->pc = 0x3DABD0u;
            goto label_3dabd0;
        }
    }
    ctx->pc = 0x3DABB8u;
    // 0x3dabb8: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3dabb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dabbc: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3dabbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dabc0: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3dabc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3dabc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dabc8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3dabc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dabcc: 0x0  nop
    ctx->pc = 0x3dabccu;
    // NOP
label_3dabd0:
    // 0x3dabd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dabd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dabd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dabd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dabd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DABD8u;
        // 0x3dabdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DABD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DABE0u;
}
