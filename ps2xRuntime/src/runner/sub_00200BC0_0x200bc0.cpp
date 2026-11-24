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

// Function: sub_00200BC0
// Address: 0x200bc0 - 0x200c0c
void sub_00200BC0_0x200bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200BC0_0x200bc0");
#endif

    switch (ctx->pc) {
        case 0x200bd4u: goto label_200bd4;
        case 0x200bf0u: goto label_200bf0;
        default: break;
    }

    ctx->pc = 0x200bc0u;

    // 0x200bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200bc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200bcc: 0xc080304  jal         func_200C10
    ctx->pc = 0x200BCCu;
    SET_GPR_U32(ctx, 31, 0x200BD4u);
    ctx->pc = 0x200BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200BCCu;
    // 0x200bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200C10u, 0x200BCCu, 0x200BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BD4u;
label_200bd4:
    // 0x200bd4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x200bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x200bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bdc: 0x24a58168  addiu       $a1, $a1, -0x7E98
    ctx->pc = 0x200bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934888));
    // 0x200be0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200BE0u;
    {
        const bool branch_taken_0x200be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BE0u;
        // 0x200be4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200be0) {
            ctx->pc = 0x200BFCu;
            goto label_200bfc;
        }
    }
    ctx->pc = 0x200BE8u;
    // 0x200be8: 0xc07ec0c  jal         func_1FB030
    ctx->pc = 0x200BE8u;
    SET_GPR_U32(ctx, 31, 0x200BF0u);
    ctx->pc = 0x1FB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB030u, 0x200BE8u, 0x200BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BF0u;
label_200bf0:
    // 0x200bf0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x200bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x200bf4: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x200bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x200bf8: 0xac62815c  sw          $v0, -0x7EA4($v1)
    ctx->pc = 0x200bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B815Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B815Cu, _value); } while (0);
label_200bfc:
    // 0x200bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200c00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x200c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200c04: 0x3e00008  jr          $ra
    ctx->pc = 0x200C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C04u;
        // 0x200c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200C0Cu;
}
