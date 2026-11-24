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

// Function: sub_0017CF50
// Address: 0x17cf50 - 0x17d010
void sub_0017CF50_0x17cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CF50_0x17cf50");
#endif

    switch (ctx->pc) {
        case 0x17cfa0u: goto label_17cfa0;
        default: break;
    }

    ctx->pc = 0x17cf50u;

    // 0x17cf50: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x17cf50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x17cf54: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x17CF54u;
    {
        const bool branch_taken_0x17cf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF54u;
        // 0x17cf58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf54) {
            ctx->pc = 0x17CFE0u;
            goto label_17cfe0;
        }
    }
    ctx->pc = 0x17CF5Cu;
    // 0x17cf5c: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x17cf5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17cf60: 0x8d050014  lw          $a1, 0x14($t0)
    ctx->pc = 0x17cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x17cf64: 0x95030010  lhu         $v1, 0x10($t0)
    ctx->pc = 0x17cf64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x17cf68: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x17cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17cf6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17cf70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17cf74: 0x9463fffc  lhu         $v1, -0x4($v1)
    ctx->pc = 0x17cf74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x17cf78: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x17cf78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17cf7c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CF7Cu;
    {
        const bool branch_taken_0x17cf7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cf7c) {
            ctx->pc = 0x17CF88u;
            goto label_17cf88;
        }
    }
    ctx->pc = 0x17CF84u;
    // 0x17cf84: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x17cf84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17cf88:
    // 0x17cf88: 0x91060004  lbu         $a2, 0x4($t0)
    ctx->pc = 0x17cf88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x17cf8c: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x17cf8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17cf90: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x17CF90u;
    {
        const bool branch_taken_0x17cf90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF90u;
        // 0x17cf94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf90) {
            ctx->pc = 0x17D008u;
            goto label_17d008;
        }
    }
    ctx->pc = 0x17CF98u;
    // 0x17cf98: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x17cf98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf9c: 0x0  nop
    ctx->pc = 0x17cf9cu;
    // NOP
label_17cfa0:
    // 0x17cfa0: 0x8ce5001c  lw          $a1, 0x1C($a3)
    ctx->pc = 0x17cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17cfa4: 0x94e30018  lhu         $v1, 0x18($a3)
    ctx->pc = 0x17cfa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x17cfa8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x17cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17cfac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17cfb0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17cfb4: 0x9463fffc  lhu         $v1, -0x4($v1)
    ctx->pc = 0x17cfb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x17cfb8: 0x123082b  sltu        $at, $t1, $v1
    ctx->pc = 0x17cfb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17cfbc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CFBCu;
    {
        const bool branch_taken_0x17cfbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cfbc) {
            ctx->pc = 0x17CFC8u;
            goto label_17cfc8;
        }
    }
    ctx->pc = 0x17CFC4u;
    // 0x17cfc4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x17cfc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17cfc8:
    // 0x17cfc8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x17cfc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x17cfcc: 0x146182a  slt         $v1, $t2, $a2
    ctx->pc = 0x17cfccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17cfd0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x17CFD0u;
    {
        const bool branch_taken_0x17cfd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFD0u;
        // 0x17cfd4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfd0) {
            ctx->pc = 0x17CFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17cfa0;
        }
    }
    ctx->pc = 0x17CFD8u;
    // 0x17cfd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17CFD8u;
    {
        const bool branch_taken_0x17cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cfd8) {
            ctx->pc = 0x17D008u;
            goto label_17d008;
        }
    }
    ctx->pc = 0x17CFE0u;
label_17cfe0:
    // 0x17cfe0: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x17cfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17cfe4: 0x9085001c  lbu         $a1, 0x1C($a0)
    ctx->pc = 0x17cfe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x17cfe8: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x17cfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17cfec: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x17cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17cff0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17cff4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17cff8: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x17cff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x17cffc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x17cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17d000: 0x8c690004  lw          $t1, 0x4($v1)
    ctx->pc = 0x17d000u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17d004: 0x0  nop
    ctx->pc = 0x17d004u;
    // NOP
label_17d008:
    // 0x17d008: 0x3e00008  jr          $ra
    ctx->pc = 0x17D008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D008u;
        // 0x17d00c: 0xac89002c  sw          $t1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D010u;
}
