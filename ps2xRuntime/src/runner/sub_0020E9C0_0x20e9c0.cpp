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

// Function: sub_0020E9C0
// Address: 0x20e9c0 - 0x20ea2c
void sub_0020E9C0_0x20e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E9C0_0x20e9c0");
#endif

    switch (ctx->pc) {
        case 0x20e9e0u: goto label_20e9e0;
        case 0x20e9f0u: goto label_20e9f0;
        default: break;
    }

    ctx->pc = 0x20e9c0u;

    // 0x20e9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e9c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20e9c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20e9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e9d8: 0xc0888fc  jal         func_2223F0
    ctx->pc = 0x20E9D8u;
    SET_GPR_U32(ctx, 31, 0x20E9E0u);
    ctx->pc = 0x20E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E9D8u;
    // 0x20e9dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223F0u, 0x20E9D8u, 0x20E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9E0u;
label_20e9e0:
    // 0x20e9e0: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x20E9E0u;
    {
        const bool branch_taken_0x20e9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x20E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9E0u;
        // 0x20e9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9e0) {
            ctx->pc = 0x20EA18u;
            goto label_20ea18;
        }
    }
    ctx->pc = 0x20E9E8u;
    // 0x20e9e8: 0xc08408e  jal         func_210238
    ctx->pc = 0x20E9E8u;
    SET_GPR_U32(ctx, 31, 0x20E9F0u);
    ctx->pc = 0x20E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E9E8u;
    // 0x20e9ec: 0x8e05211c  lw          $a1, 0x211C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210238u, 0x20E9E8u, 0x20E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E9F0u;
label_20e9f0:
    // 0x20e9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20e9f8: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20E9F8u;
    {
        const bool branch_taken_0x20e9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x20E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9F8u;
        // 0x20e9fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9f8) {
            ctx->pc = 0x20EA18u;
            goto label_20ea18;
        }
    }
    ctx->pc = 0x20EA00u;
    // 0x20ea00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ea00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ea04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ea04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ea08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ea08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ea0c: 0x80888f6  j           func_2223D8
    ctx->pc = 0x20EA0Cu;
    ctx->pc = 0x20EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA0Cu;
    // 0x20ea10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223D8u;
    sub_002223D8_0x2223d8(rdram, ctx, runtime); return;
    ctx->pc = 0x20EA14u;
    // 0x20ea14: 0x0  nop
    ctx->pc = 0x20ea14u;
    // NOP
label_20ea18:
    // 0x20ea18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ea18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ea1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ea1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ea20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ea24: 0x3e00008  jr          $ra
    ctx->pc = 0x20EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA24u;
        // 0x20ea28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EA2Cu;
}
