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

// Function: sub_00179A00
// Address: 0x179a00 - 0x179a88
void sub_00179A00_0x179a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179A00_0x179a00");
#endif

    switch (ctx->pc) {
        case 0x179a18u: goto label_179a18;
        default: break;
    }

    ctx->pc = 0x179a00u;

    // 0x179a00: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x179a00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x179a04: 0x5423c  dsll32      $t0, $a1, 8
    ctx->pc = 0x179a04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 8));
    // 0x179a08: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x179a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x179a0c: 0x8423e  dsrl32      $t0, $t0, 8
    ctx->pc = 0x179a0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 8));
    // 0x179a10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x179a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a14: 0x0  nop
    ctx->pc = 0x179a14u;
    // NOP
label_179a18:
    // 0x179a18: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x179a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179a1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x179A1Cu;
    {
        const bool branch_taken_0x179a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179a1c) {
            ctx->pc = 0x179A68u;
            goto label_179a68;
        }
    }
    ctx->pc = 0x179A24u;
    // 0x179a24: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x179a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x179a28: 0x1449000f  bne         $v0, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x179A28u;
    {
        const bool branch_taken_0x179a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x179a28) {
            ctx->pc = 0x179A68u;
            goto label_179a68;
        }
    }
    ctx->pc = 0x179A30u;
    // 0x179a30: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x179a30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x179a34: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x179a34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x179a38: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x179a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x179a3c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x179a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x179a40: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x179a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x179a44: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x179a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x179a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179a4c: 0x15020006  bne         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179A4Cu;
    {
        const bool branch_taken_0x179a4c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x179a4c) {
            ctx->pc = 0x179A68u;
            goto label_179a68;
        }
    }
    ctx->pc = 0x179A54u;
    // 0x179a54: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x179a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x179a58: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x179A58u;
    {
        const bool branch_taken_0x179a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x179A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A58u;
        // 0x179a5c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a58) {
            ctx->pc = 0x179A68u;
            goto label_179a68;
        }
    }
    ctx->pc = 0x179A60u;
    // 0x179a60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x179A60u;
    {
        const bool branch_taken_0x179a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179a60) {
            ctx->pc = 0x179A80u;
            goto label_179a80;
        }
    }
    ctx->pc = 0x179A68u;
label_179a68:
    // 0x179a68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x179a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x179a6c: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x179a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x179a70: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x179A70u;
    {
        const bool branch_taken_0x179a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A70u;
        // 0x179a74: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a70) {
            ctx->pc = 0x179A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179a18;
        }
    }
    ctx->pc = 0x179A78u;
    // 0x179a78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a7c: 0x0  nop
    ctx->pc = 0x179a7cu;
    // NOP
label_179a80:
    // 0x179a80: 0x3e00008  jr          $ra
    ctx->pc = 0x179A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179A88u;
}
