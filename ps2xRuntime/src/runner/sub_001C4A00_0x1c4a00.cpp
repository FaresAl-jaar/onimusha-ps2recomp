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

// Function: sub_001C4A00
// Address: 0x1c4a00 - 0x1c4a78
void sub_001C4A00_0x1c4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4A00_0x1c4a00");
#endif

    switch (ctx->pc) {
        case 0x1c4a20u: goto label_1c4a20;
        default: break;
    }

    ctx->pc = 0x1c4a00u;

    // 0x1c4a00: 0x94860068  lhu         $a2, 0x68($a0)
    ctx->pc = 0x1c4a00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1c4a04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a08: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x1c4a08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c4a0c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C4A0Cu;
    {
        const bool branch_taken_0x1c4a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A0Cu;
        // 0x1c4a10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a0c) {
            ctx->pc = 0x1C4A70u;
            goto label_1c4a70;
        }
    }
    ctx->pc = 0x1C4A14u;
    // 0x1c4a14: 0x8c87007c  lw          $a3, 0x7C($a0)
    ctx->pc = 0x1c4a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1c4a18: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x1c4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1c4a1c: 0x0  nop
    ctx->pc = 0x1c4a1cu;
    // NOP
label_1c4a20:
    // 0x1c4a20: 0x90830028  lbu         $v1, 0x28($a0)
    ctx->pc = 0x1c4a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1c4a24: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1c4a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1c4a28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4A28u;
    {
        const bool branch_taken_0x1c4a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a28) {
            ctx->pc = 0x1C4A58u;
            goto label_1c4a58;
        }
    }
    ctx->pc = 0x1C4A30u;
    // 0x1c4a30: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x1c4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1c4a34: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1c4a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4a38: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x1c4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1c4a3c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1c4a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4a40: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1c4a40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1c4a44: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4A44u;
    {
        const bool branch_taken_0x1c4a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c4a44) {
            ctx->pc = 0x1C4A58u;
            goto label_1c4a58;
        }
    }
    ctx->pc = 0x1C4A4Cu;
    // 0x1c4a4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4A4Cu;
    {
        const bool branch_taken_0x1c4a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A4Cu;
        // 0x1c4a50: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a4c) {
            ctx->pc = 0x1C4A70u;
            goto label_1c4a70;
        }
    }
    ctx->pc = 0x1C4A54u;
    // 0x1c4a54: 0x0  nop
    ctx->pc = 0x1c4a54u;
    // NOP
label_1c4a58:
    // 0x1c4a58: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1c4a58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1c4a5c: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x1c4a5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c4a60: 0x24e701f0  addiu       $a3, $a3, 0x1F0
    ctx->pc = 0x1c4a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 496));
    // 0x1c4a64: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C4A64u;
    {
        const bool branch_taken_0x1c4a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A64u;
        // 0x1c4a68: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a64) {
            ctx->pc = 0x1C4A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4a20;
        }
    }
    ctx->pc = 0x1C4A6Cu;
    // 0x1c4a6c: 0x0  nop
    ctx->pc = 0x1c4a6cu;
    // NOP
label_1c4a70:
    // 0x1c4a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4A78u;
}
