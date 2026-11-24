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

// Function: sub_0032D970
// Address: 0x32d970 - 0x32da6c
void sub_0032D970_0x32d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D970_0x32d970");
#endif

    switch (ctx->pc) {
        case 0x32d9a8u: goto label_32d9a8;
        default: break;
    }

    ctx->pc = 0x32d970u;

    // 0x32d970: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32d970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32d974: 0x8f888ba8  lw          $t0, -0x7458($gp)
    ctx->pc = 0x32d974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x32d978: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x32d978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32d97c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32d97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d980: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x32d980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32d984: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x32d984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x32d988: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x32d988u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32d98c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x32d98cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x32d990: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x32d990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32d994: 0x24c69930  addiu       $a2, $a2, -0x66D0
    ctx->pc = 0x32d994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940976));
    // 0x32d998: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32d99c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x32d99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x32d9a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32d9a4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x32d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_32d9a8:
    // 0x32d9a8: 0x90ca0000  lbu         $t2, 0x0($a2)
    ctx->pc = 0x32d9a8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32d9ac: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x32d9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x32d9b0: 0x28e90009  slti        $t1, $a3, 0x9
    ctx->pc = 0x32d9b0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x32d9b4: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32d9b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32d9b8: 0x814a0028  lb          $t2, 0x28($t2)
    ctx->pc = 0x32d9b8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x32d9bc: 0xa0aa0021  sb          $t2, 0x21($a1)
    ctx->pc = 0x32d9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 10));
    // 0x32d9c0: 0x90ca0001  lbu         $t2, 0x1($a2)
    ctx->pc = 0x32d9c0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x32d9c4: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32d9c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32d9c8: 0x814a0028  lb          $t2, 0x28($t2)
    ctx->pc = 0x32d9c8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x32d9cc: 0xa0aa0022  sb          $t2, 0x22($a1)
    ctx->pc = 0x32d9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 34), (uint8_t)GPR_U32(ctx, 10));
    // 0x32d9d0: 0x90ca0002  lbu         $t2, 0x2($a2)
    ctx->pc = 0x32d9d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x32d9d4: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32d9d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32d9d8: 0x814a0028  lb          $t2, 0x28($t2)
    ctx->pc = 0x32d9d8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x32d9dc: 0xa0aa0023  sb          $t2, 0x23($a1)
    ctx->pc = 0x32d9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 10));
    // 0x32d9e0: 0x90ca0003  lbu         $t2, 0x3($a2)
    ctx->pc = 0x32d9e0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x32d9e4: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32d9e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32d9e8: 0x814a0028  lb          $t2, 0x28($t2)
    ctx->pc = 0x32d9e8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x32d9ec: 0xa0aa0024  sb          $t2, 0x24($a1)
    ctx->pc = 0x32d9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 10));
    // 0x32d9f0: 0x90ca0004  lbu         $t2, 0x4($a2)
    ctx->pc = 0x32d9f0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32d9f4: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32d9f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32d9f8: 0x814a0028  lb          $t2, 0x28($t2)
    ctx->pc = 0x32d9f8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x32d9fc: 0xa0aa0025  sb          $t2, 0x25($a1)
    ctx->pc = 0x32d9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 10));
    // 0x32da00: 0x90ca0005  lbu         $t2, 0x5($a2)
    ctx->pc = 0x32da00u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x32da04: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32da04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32da08: 0x814a0028  lb          $t2, 0x28($t2)
    ctx->pc = 0x32da08u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x32da0c: 0xa0aa0026  sb          $t2, 0x26($a1)
    ctx->pc = 0x32da0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 10));
    // 0x32da10: 0x90ca0006  lbu         $t2, 0x6($a2)
    ctx->pc = 0x32da10u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x32da14: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32da14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32da18: 0x814a0028  lb          $t2, 0x28($t2)
    ctx->pc = 0x32da18u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x32da1c: 0xa0aa0027  sb          $t2, 0x27($a1)
    ctx->pc = 0x32da1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 39), (uint8_t)GPR_U32(ctx, 10));
    // 0x32da20: 0x90ca0007  lbu         $t2, 0x7($a2)
    ctx->pc = 0x32da20u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x32da24: 0x10a5021  addu        $t2, $t0, $t2
    ctx->pc = 0x32da24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x32da28: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x32da28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x32da2c: 0x814a0028  lb          $t2, 0x28($t2)
    ctx->pc = 0x32da2cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x32da30: 0xa0aa0028  sb          $t2, 0x28($a1)
    ctx->pc = 0x32da30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 10));
    // 0x32da34: 0x1520ffdc  bnez        $t1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x32DA34u;
    {
        const bool branch_taken_0x32da34 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA34u;
        // 0x32da38: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32da34) {
            ctx->pc = 0x32D9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d9a8;
        }
    }
    ctx->pc = 0x32DA3Cu;
    // 0x32da3c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x32da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32da40: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32da40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x32da44: 0x24639930  addiu       $v1, $v1, -0x66D0
    ctx->pc = 0x32da44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940976));
    // 0x32da48: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x32da48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x32da4c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x32da4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32da50: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x32da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x32da54: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x32da54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x32da58: 0x80a50028  lb          $a1, 0x28($a1)
    ctx->pc = 0x32da58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x32da5c: 0xa0650021  sb          $a1, 0x21($v1)
    ctx->pc = 0x32da5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 5));
    // 0x32da60: 0x9503003c  lhu         $v1, 0x3C($t0)
    ctx->pc = 0x32da60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x32da64: 0x3e00008  jr          $ra
    ctx->pc = 0x32DA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA64u;
        // 0x32da68: 0xa0830020  sb          $v1, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DA6Cu;
}
