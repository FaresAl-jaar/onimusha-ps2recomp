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

// Function: sub_0024FFD8
// Address: 0x24ffd8 - 0x25005c
void sub_0024FFD8_0x24ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FFD8_0x24ffd8");
#endif

    switch (ctx->pc) {
        case 0x250048u: goto label_250048;
        default: break;
    }

    ctx->pc = 0x24ffd8u;

    // 0x24ffd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ffdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ffe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ffe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ffe4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x24FFE4u;
    {
        const bool branch_taken_0x24ffe4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFE4u;
        // 0x24ffe8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffe4) {
            ctx->pc = 0x250010u;
            goto label_250010;
        }
    }
    ctx->pc = 0x24FFECu;
    // 0x24ffec: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24fff0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24fff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24fff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24fff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fff8: 0x2484e9b8  addiu       $a0, $a0, -0x1648
    ctx->pc = 0x24fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961592));
    // 0x24fffc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24fffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250000: 0x24a5e9c8  addiu       $a1, $a1, -0x1638
    ctx->pc = 0x250000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961608));
    // 0x250004: 0x8093f54  j           func_24FD50
    ctx->pc = 0x250004u;
    ctx->pc = 0x250008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250004u;
    // 0x250008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x25000Cu;
    // 0x25000c: 0x0  nop
    ctx->pc = 0x25000cu;
    // NOP
label_250010:
    // 0x250010: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x250010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x250014: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x250014u;
    {
        const bool branch_taken_0x250014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250014u;
        // 0x250018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250014) {
            ctx->pc = 0x250040u;
            goto label_250040;
        }
    }
    ctx->pc = 0x25001Cu;
    // 0x25001c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x25001cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x250020: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x250024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250028: 0x2484e9e8  addiu       $a0, $a0, -0x1618
    ctx->pc = 0x250028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961640));
    // 0x25002c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25002cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250030: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x250030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
    // 0x250034: 0x8093f54  j           func_24FD50
    ctx->pc = 0x250034u;
    ctx->pc = 0x250038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250034u;
    // 0x250038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x25003Cu;
    // 0x25003c: 0x0  nop
    ctx->pc = 0x25003cu;
    // NOP
label_250040:
    // 0x250040: 0xc049590  jal         func_125640
    ctx->pc = 0x250040u;
    SET_GPR_U32(ctx, 31, 0x250048u);
    ctx->pc = 0x250044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250040u;
    // 0x250044: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x250040u, 0x250048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250048u;
label_250048:
    // 0x250048: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x250048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x25004c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25004cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250054: 0x3e00008  jr          $ra
    ctx->pc = 0x250054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250054u;
        // 0x250058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25005Cu;
}
