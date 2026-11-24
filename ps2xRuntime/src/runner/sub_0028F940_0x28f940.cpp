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

// Function: sub_0028F940
// Address: 0x28f940 - 0x28f97c
void sub_0028F940_0x28f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F940_0x28f940");
#endif

    switch (ctx->pc) {
        case 0x28f96cu: goto label_28f96c;
        default: break;
    }

    ctx->pc = 0x28f940u;

    // 0x28f940: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x28f940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f944: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f948: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28f948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f94c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x28f94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f950: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x28f950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f954: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x28f954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x28f958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f95c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x28f95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f960: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x28f960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x28f964: 0xc0bd218  jal         func_2F4860
    ctx->pc = 0x28F964u;
    SET_GPR_U32(ctx, 31, 0x28F96Cu);
    ctx->pc = 0x28F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F964u;
    // 0x28f968: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4860u, 0x28F964u, 0x28F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F96Cu;
label_28f96c:
    // 0x28f96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f974: 0x3e00008  jr          $ra
    ctx->pc = 0x28F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F974u;
        // 0x28f978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F97Cu;
}
