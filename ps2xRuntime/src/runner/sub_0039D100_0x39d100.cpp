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

// Function: sub_0039D100
// Address: 0x39d100 - 0x39d14c
void sub_0039D100_0x39d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D100_0x39d100");
#endif

    switch (ctx->pc) {
        case 0x39d134u: goto label_39d134;
        case 0x39d13cu: goto label_39d13c;
        default: break;
    }

    ctx->pc = 0x39d100u;

    // 0x39d100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39d100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39d104: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x39d104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x39d108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39d10c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x39d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x39d110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39d114: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x39d114u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39d118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39d118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d11c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x39d11cu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39d120: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x39d120u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39d124: 0xe48206a0  swc1        $f2, 0x6A0($a0)
    ctx->pc = 0x39d124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x39d128: 0xe48106a4  swc1        $f1, 0x6A4($a0)
    ctx->pc = 0x39d128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1700), bits); }
    // 0x39d12c: 0xc0e71b8  jal         func_39C6E0
    ctx->pc = 0x39D12Cu;
    SET_GPR_U32(ctx, 31, 0x39D134u);
    ctx->pc = 0x39D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D12Cu;
    // 0x39d130: 0xe48006a8  swc1        $f0, 0x6A8($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C6E0u, 0x39D12Cu, 0x39D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D134u;
label_39d134:
    // 0x39d134: 0xc0e70f0  jal         func_39C3C0
    ctx->pc = 0x39D134u;
    SET_GPR_U32(ctx, 31, 0x39D13Cu);
    ctx->pc = 0x39D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D134u;
    // 0x39d138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3C0u, 0x39D134u, 0x39D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D13Cu;
label_39d13c:
    // 0x39d13c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39d13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39d140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d144: 0x3e00008  jr          $ra
    ctx->pc = 0x39D144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D144u;
        // 0x39d148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D14Cu;
}
