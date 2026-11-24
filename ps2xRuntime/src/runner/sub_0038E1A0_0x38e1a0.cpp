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

// Function: sub_0038E1A0
// Address: 0x38e1a0 - 0x38e1f0
void sub_0038E1A0_0x38e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E1A0_0x38e1a0");
#endif

    switch (ctx->pc) {
        case 0x38e1c0u: goto label_38e1c0;
        case 0x38e1c8u: goto label_38e1c8;
        default: break;
    }

    ctx->pc = 0x38e1a0u;

    // 0x38e1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38e1a4: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x38e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x38e1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38e1b0: 0xa4822b32  sh          $v0, 0x2B32($a0)
    ctx->pc = 0x38e1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11058), (uint16_t)GPR_U32(ctx, 2));
    // 0x38e1b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e1b8: 0xc0e3784  jal         func_38DE10
    ctx->pc = 0x38E1B8u;
    SET_GPR_U32(ctx, 31, 0x38E1C0u);
    ctx->pc = 0x38E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E1B8u;
    // 0x38e1bc: 0xa4802b40  sh          $zero, 0x2B40($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 11072), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DE10u, 0x38E1B8u, 0x38E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E1C0u;
label_38e1c0:
    // 0x38e1c0: 0xc0e379c  jal         func_38DE70
    ctx->pc = 0x38E1C0u;
    SET_GPR_U32(ctx, 31, 0x38E1C8u);
    ctx->pc = 0x38E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E1C0u;
    // 0x38e1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DE70u, 0x38E1C0u, 0x38E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E1C8u;
label_38e1c8:
    // 0x38e1c8: 0xc6002b20  lwc1        $f0, 0x2B20($s0)
    ctx->pc = 0x38e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38e1cc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x38e1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x38e1d0: 0xc6002b28  lwc1        $f0, 0x2B28($s0)
    ctx->pc = 0x38e1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38e1d4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x38e1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x38e1d8: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x38e1d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x38e1dc: 0xa60300c2  sh          $v1, 0xC2($s0)
    ctx->pc = 0x38e1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x38e1e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e1e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x38E1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1E8u;
        // 0x38e1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E1F0u;
}
