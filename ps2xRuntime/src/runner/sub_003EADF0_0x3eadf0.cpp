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

// Function: sub_003EADF0
// Address: 0x3eadf0 - 0x3eae3c
void sub_003EADF0_0x3eadf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EADF0_0x3eadf0");
#endif

    switch (ctx->pc) {
        case 0x3eae0cu: goto label_3eae0c;
        default: break;
    }

    ctx->pc = 0x3eadf0u;

    // 0x3eadf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eadf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3eadf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eadf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eadf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3eadf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3eadfc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3eadfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3eae00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3eae04: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3EAE04u;
    SET_GPR_U32(ctx, 31, 0x3EAE0Cu);
    ctx->pc = 0x3EAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAE04u;
    // 0x3eae08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3EAE04u, 0x3EAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAE0Cu;
label_3eae0c:
    // 0x3eae0c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3eae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3eae10: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3eae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3eae14: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3eae14u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eae18: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3eae18u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3eae1c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3eae1cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eae20: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3eae20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3eae24: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3eae24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3eae28: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3eae28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3eae2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3eae2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eae30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3eae30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eae34: 0x3e00008  jr          $ra
    ctx->pc = 0x3EAE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE34u;
        // 0x3eae38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAE3Cu;
}
