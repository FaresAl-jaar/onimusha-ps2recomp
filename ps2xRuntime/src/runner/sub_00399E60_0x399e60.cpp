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

// Function: sub_00399E60
// Address: 0x399e60 - 0x399eb4
void sub_00399E60_0x399e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399E60_0x399e60");
#endif

    switch (ctx->pc) {
        case 0x399e98u: goto label_399e98;
        case 0x399ea8u: goto label_399ea8;
        default: break;
    }

    ctx->pc = 0x399e60u;

    // 0x399e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399e64: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x399e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x399e68: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x399E68u;
    {
        const bool branch_taken_0x399e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x399E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E68u;
        // 0x399e6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399e68) {
            ctx->pc = 0x399EA0u;
            goto label_399ea0;
        }
    }
    ctx->pc = 0x399E70u;
    // 0x399e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x399e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399e74: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x399E74u;
    {
        const bool branch_taken_0x399e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x399E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E74u;
        // 0x399e78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399e74) {
            ctx->pc = 0x399E90u;
            goto label_399e90;
        }
    }
    ctx->pc = 0x399E7Cu;
    // 0x399e7c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x399E7Cu;
    {
        const bool branch_taken_0x399e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x399e7c) {
            ctx->pc = 0x399EA8u;
            goto label_399ea8;
        }
    }
    ctx->pc = 0x399E84u;
    // 0x399e84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x399E84u;
    {
        const bool branch_taken_0x399e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399e84) {
            ctx->pc = 0x399EA8u;
            goto label_399ea8;
        }
    }
    ctx->pc = 0x399E8Cu;
    // 0x399e8c: 0x0  nop
    ctx->pc = 0x399e8cu;
    // NOP
label_399e90:
    // 0x399e90: 0xc0e6558  jal         func_399560
    ctx->pc = 0x399E90u;
    SET_GPR_U32(ctx, 31, 0x399E98u);
    ctx->pc = 0x399E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E90u;
    // 0x399e94: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399560u, 0x399E90u, 0x399E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399E98u;
label_399e98:
    // 0x399e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x399E98u;
    {
        const bool branch_taken_0x399e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399e98) {
            ctx->pc = 0x399EA8u;
            goto label_399ea8;
        }
    }
    ctx->pc = 0x399EA0u;
label_399ea0:
    // 0x399ea0: 0xc0e6580  jal         func_399600
    ctx->pc = 0x399EA0u;
    SET_GPR_U32(ctx, 31, 0x399EA8u);
    ctx->pc = 0x399EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399EA0u;
    // 0x399ea4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399600u, 0x399EA0u, 0x399EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399EA8u;
label_399ea8:
    // 0x399ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399eac: 0x3e00008  jr          $ra
    ctx->pc = 0x399EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EACu;
        // 0x399eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399EB4u;
}
