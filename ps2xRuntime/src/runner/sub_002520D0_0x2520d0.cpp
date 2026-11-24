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

// Function: sub_002520D0
// Address: 0x2520d0 - 0x252150
void sub_002520D0_0x2520d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002520D0_0x2520d0");
#endif

    switch (ctx->pc) {
        case 0x252114u: goto label_252114;
        case 0x252128u: goto label_252128;
        default: break;
    }

    ctx->pc = 0x2520d0u;

    // 0x2520d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2520d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2520d4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2520D4u;
    {
        const bool branch_taken_0x2520d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2520D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520D4u;
        // 0x2520d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520d4) {
            ctx->pc = 0x2520F0u;
            goto label_2520f0;
        }
    }
    ctx->pc = 0x2520DCu;
    // 0x2520dc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2520dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2520e0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2520e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2520e4: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x2520e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x2520e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2520E8u;
    {
        const bool branch_taken_0x2520e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520E8u;
        // 0x2520ec: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520e8) {
            ctx->pc = 0x25210Cu;
            goto label_25210c;
        }
    }
    ctx->pc = 0x2520F0u;
label_2520f0:
    // 0x2520f0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x2520f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2520f4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2520F4u;
    {
        const bool branch_taken_0x2520f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2520f4) {
            ctx->pc = 0x2520F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2520F4u;
            // 0x2520f8: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252120u;
            goto label_252120;
        }
    }
    ctx->pc = 0x2520FCu;
    // 0x2520fc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2520fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x252100: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x252100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x252104: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x252104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x252108: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x252108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
label_25210c:
    // 0x25210c: 0xc0944dc  jal         func_251370
    ctx->pc = 0x25210Cu;
    SET_GPR_U32(ctx, 31, 0x252114u);
    ctx->pc = 0x251370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251370u, 0x25210Cu, 0x252114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252114u;
label_252114:
    // 0x252114: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x252114u;
    {
        const bool branch_taken_0x252114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252114u;
        // 0x252118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252114) {
            ctx->pc = 0x252144u;
            goto label_252144;
        }
    }
    ctx->pc = 0x25211Cu;
    // 0x25211c: 0x0  nop
    ctx->pc = 0x25211cu;
    // NOP
label_252120:
    // 0x252120: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252120u;
    {
        const bool branch_taken_0x252120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252120u;
        // 0x252124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252120) {
            ctx->pc = 0x252144u;
            goto label_252144;
        }
    }
    ctx->pc = 0x252128u;
label_252128:
    // 0x252128: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x252128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25212c: 0x0  nop
    ctx->pc = 0x25212cu;
    // NOP
    // 0x252130: 0x0  nop
    ctx->pc = 0x252130u;
    // NOP
    // 0x252134: 0x0  nop
    ctx->pc = 0x252134u;
    // NOP
    // 0x252138: 0x0  nop
    ctx->pc = 0x252138u;
    // NOP
    // 0x25213c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25213Cu;
    {
        const bool branch_taken_0x25213c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25213Cu;
        // 0x252140: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25213c) {
            ctx->pc = 0x252128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252128;
        }
    }
    ctx->pc = 0x252144u;
label_252144:
    // 0x252144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252148: 0x3e00008  jr          $ra
    ctx->pc = 0x252148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252148u;
        // 0x25214c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252150u;
}
