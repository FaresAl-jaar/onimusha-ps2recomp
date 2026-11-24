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

// Function: sub_0039D9A0
// Address: 0x39d9a0 - 0x39d9fc
void sub_0039D9A0_0x39d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D9A0_0x39d9a0");
#endif

    switch (ctx->pc) {
        case 0x39d9bcu: goto label_39d9bc;
        case 0x39d9e4u: goto label_39d9e4;
        case 0x39d9ecu: goto label_39d9ec;
        default: break;
    }

    ctx->pc = 0x39d9a0u;

    // 0x39d9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39d9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39d9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39d9ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x39d9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39d9b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39d9b4: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x39D9B4u;
    SET_GPR_U32(ctx, 31, 0x39D9BCu);
    ctx->pc = 0x39D9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D9B4u;
    // 0x39d9b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x39D9B4u, 0x39D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D9BCu;
label_39d9bc:
    // 0x39d9bc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x39d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x39d9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d9c4: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x39d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x39d9c8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x39d9c8u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39d9cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x39d9ccu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39d9d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x39d9d0u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39d9d4: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x39d9d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x39d9d8: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x39d9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x39d9dc: 0xc0e71b8  jal         func_39C6E0
    ctx->pc = 0x39D9DCu;
    SET_GPR_U32(ctx, 31, 0x39D9E4u);
    ctx->pc = 0x39D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D9DCu;
    // 0x39d9e0: 0xe60006a8  swc1        $f0, 0x6A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C6E0u, 0x39D9DCu, 0x39D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D9E4u;
label_39d9e4:
    // 0x39d9e4: 0xc0e70f0  jal         func_39C3C0
    ctx->pc = 0x39D9E4u;
    SET_GPR_U32(ctx, 31, 0x39D9ECu);
    ctx->pc = 0x39D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D9E4u;
    // 0x39d9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3C0u, 0x39D9E4u, 0x39D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D9ECu;
label_39d9ec:
    // 0x39d9ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39d9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39d9f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x39D9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D9F4u;
        // 0x39d9f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D9FCu;
}
