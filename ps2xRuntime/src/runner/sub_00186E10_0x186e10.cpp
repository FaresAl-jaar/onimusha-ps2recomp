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

// Function: sub_00186E10
// Address: 0x186e10 - 0x186e48
void sub_00186E10_0x186e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186E10_0x186e10");
#endif

    switch (ctx->pc) {
        case 0x186e24u: goto label_186e24;
        default: break;
    }

    ctx->pc = 0x186e10u;

    // 0x186e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186e18: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x186e18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x186e1c: 0xc060d40  jal         func_183500
    ctx->pc = 0x186E1Cu;
    SET_GPR_U32(ctx, 31, 0x186E24u);
    ctx->pc = 0x186E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186E1Cu;
    // 0x186e20: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x186E1Cu, 0x186E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186E24u;
label_186e24:
    // 0x186e24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186E24u;
    {
        const bool branch_taken_0x186e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E24u;
        // 0x186e28: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e24) {
            ctx->pc = 0x186E38u;
            goto label_186e38;
        }
    }
    ctx->pc = 0x186E2Cu;
    // 0x186e2c: 0xac4311f4  sw          $v1, 0x11F4($v0)
    ctx->pc = 0x186e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4596), GPR_U32(ctx, 3));
    // 0x186e30: 0xe45411f8  swc1        $f20, 0x11F8($v0)
    ctx->pc = 0x186e30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4600), bits); }
    // 0x186e34: 0x0  nop
    ctx->pc = 0x186e34u;
    // NOP
label_186e38:
    // 0x186e38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186e3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x186e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186e40: 0x3e00008  jr          $ra
    ctx->pc = 0x186E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E40u;
        // 0x186e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186E48u;
}
