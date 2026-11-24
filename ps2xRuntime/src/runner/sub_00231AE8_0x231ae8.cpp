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

// Function: sub_00231AE8
// Address: 0x231ae8 - 0x231b1c
void sub_00231AE8_0x231ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231AE8_0x231ae8");
#endif

    ctx->pc = 0x231ae8u;

    // 0x231ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231aec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x231aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231af4: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x231af4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x231af8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x231AF8u;
    {
        const bool branch_taken_0x231af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x231AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AF8u;
        // 0x231afc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231af8) {
            ctx->pc = 0x231B10u;
            goto label_231b10;
        }
    }
    ctx->pc = 0x231B00u;
    // 0x231b00: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x231b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x231b04: 0x2484a9e0  addiu       $a0, $a0, -0x5620
    ctx->pc = 0x231b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945248));
    // 0x231b08: 0x808baa4  j           func_22EA90
    ctx->pc = 0x231B08u;
    ctx->pc = 0x231B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B08u;
    // 0x231b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x231B10u;
label_231b10:
    // 0x231b10: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x231b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x231b14: 0x3e00008  jr          $ra
    ctx->pc = 0x231B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B14u;
        // 0x231b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231B1Cu;
}
