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

// Function: sub_00212B68
// Address: 0x212b68 - 0x212bb4
void sub_00212B68_0x212b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212B68_0x212b68");
#endif

    switch (ctx->pc) {
        case 0x212b8cu: goto label_212b8c;
        default: break;
    }

    ctx->pc = 0x212b68u;

    // 0x212b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212b78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x212b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x212b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x212b80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x212b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b84: 0xc083d78  jal         func_20F5E0
    ctx->pc = 0x212B84u;
    SET_GPR_U32(ctx, 31, 0x212B8Cu);
    ctx->pc = 0x212B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B84u;
    // 0x212b88: 0x8e051f84  lw          $a1, 0x1F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F5E0u, 0x212B84u, 0x212B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B8Cu;
label_212b8c:
    // 0x212b8c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x212B8Cu;
    {
        const bool branch_taken_0x212b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212b8c) {
            ctx->pc = 0x212B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212B8Cu;
            // 0x212b90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212BA4u;
            goto label_212ba4;
        }
    }
    ctx->pc = 0x212B94u;
    // 0x212b94: 0x8e0337a8  lw          $v1, 0x37A8($s0)
    ctx->pc = 0x212b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14248)));
    // 0x212b98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x212b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x212b9c: 0xae0337a8  sw          $v1, 0x37A8($s0)
    ctx->pc = 0x212b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14248), GPR_U32(ctx, 3));
    // 0x212ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212ba4:
    // 0x212ba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212ba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212bac: 0x3e00008  jr          $ra
    ctx->pc = 0x212BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BACu;
        // 0x212bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212BB4u;
}
