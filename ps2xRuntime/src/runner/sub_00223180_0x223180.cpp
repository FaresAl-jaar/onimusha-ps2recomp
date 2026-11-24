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

// Function: sub_00223180
// Address: 0x223180 - 0x2231fc
void sub_00223180_0x223180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223180_0x223180");
#endif

    switch (ctx->pc) {
        case 0x2231a0u: goto label_2231a0;
        case 0x2231b0u: goto label_2231b0;
        case 0x2231c0u: goto label_2231c0;
        default: break;
    }

    ctx->pc = 0x223180u;

    // 0x223180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223184: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x223184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x223188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22318c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22318cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223198: 0xc0888fc  jal         func_2223F0
    ctx->pc = 0x223198u;
    SET_GPR_U32(ctx, 31, 0x2231A0u);
    ctx->pc = 0x22319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223198u;
    // 0x22319c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223F0u, 0x223198u, 0x2231A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231A0u;
label_2231a0:
    // 0x2231a0: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2231A0u;
    {
        const bool branch_taken_0x2231a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2231A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231A0u;
        // 0x2231a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231a0) {
            ctx->pc = 0x2231E8u;
            goto label_2231e8;
        }
    }
    ctx->pc = 0x2231A8u;
    // 0x2231a8: 0xc08408e  jal         func_210238
    ctx->pc = 0x2231A8u;
    SET_GPR_U32(ctx, 31, 0x2231B0u);
    ctx->pc = 0x2231ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231A8u;
    // 0x2231ac: 0x8e052160  lw          $a1, 0x2160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210238u, 0x2231A8u, 0x2231B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231B0u;
label_2231b0:
    // 0x2231b0: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2231B0u;
    {
        const bool branch_taken_0x2231b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2231B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231B0u;
        // 0x2231b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231b0) {
            ctx->pc = 0x2231E8u;
            goto label_2231e8;
        }
    }
    ctx->pc = 0x2231B8u;
    // 0x2231b8: 0xc088c80  jal         func_223200
    ctx->pc = 0x2231B8u;
    SET_GPR_U32(ctx, 31, 0x2231C0u);
    ctx->pc = 0x223200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223200u, 0x2231B8u, 0x2231C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231C0u;
label_2231c0:
    // 0x2231c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2231C0u;
    {
        const bool branch_taken_0x2231c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231C0u;
        // 0x2231c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231c0) {
            ctx->pc = 0x2231E8u;
            goto label_2231e8;
        }
    }
    ctx->pc = 0x2231C8u;
    // 0x2231c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2231c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2231cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2231ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2231d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2231d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2231d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2231d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2231d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2231d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2231dc: 0x80888f6  j           func_2223D8
    ctx->pc = 0x2231DCu;
    ctx->pc = 0x2231E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2231DCu;
    // 0x2231e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223D8u;
    sub_002223D8_0x2223d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2231E4u;
    // 0x2231e4: 0x0  nop
    ctx->pc = 0x2231e4u;
    // NOP
label_2231e8:
    // 0x2231e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2231e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2231ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2231ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2231f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2231f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2231f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2231F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2231F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2231F4u;
        // 0x2231f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2231F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2231FCu;
}
