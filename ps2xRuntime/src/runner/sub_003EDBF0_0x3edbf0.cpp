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

// Function: sub_003EDBF0
// Address: 0x3edbf0 - 0x3edc50
void sub_003EDBF0_0x3edbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDBF0_0x3edbf0");
#endif

    switch (ctx->pc) {
        case 0x3edc0cu: goto label_3edc0c;
        case 0x3edc1cu: goto label_3edc1c;
        case 0x3edc38u: goto label_3edc38;
        default: break;
    }

    ctx->pc = 0x3edbf0u;

    // 0x3edbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3edbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3edbf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3edbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3edbf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3edbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3edbfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3edbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc00: 0x86052b60  lh          $a1, 0x2B60($s0)
    ctx->pc = 0x3edc00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x3edc04: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EDC04u;
    SET_GPR_U32(ctx, 31, 0x3EDC0Cu);
    ctx->pc = 0x3EDC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC04u;
    // 0x3edc08: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EDC04u, 0x3EDC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC0Cu;
label_3edc0c:
    // 0x3edc0c: 0xc60c2b58  lwc1        $f12, 0x2B58($s0)
    ctx->pc = 0x3edc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3edc10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3edc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3edc14: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3EDC14u;
    SET_GPR_U32(ctx, 31, 0x3EDC1Cu);
    ctx->pc = 0x3EDC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC14u;
    // 0x3edc18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3EDC14u, 0x3EDC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC1Cu;
label_3edc1c:
    // 0x3edc1c: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3edc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3edc20: 0x26042b40  addiu       $a0, $s0, 0x2B40
    ctx->pc = 0x3edc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    // 0x3edc24: 0x78225920  lq          $v0, 0x5920($at)
    ctx->pc = 0x3edc24u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x685920u));
    // 0x3edc28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3edc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edc2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3edc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3edc30: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3EDC30u;
    SET_GPR_U32(ctx, 31, 0x3EDC38u);
    ctx->pc = 0x3EDC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDC30u;
    // 0x3edc34: 0x7e022b40  sq          $v0, 0x2B40($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 11072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3EDC30u, 0x3EDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDC38u;
label_3edc38:
    // 0x3edc38: 0xc6002b5c  lwc1        $f0, 0x2B5C($s0)
    ctx->pc = 0x3edc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3edc3c: 0xe6002b44  swc1        $f0, 0x2B44($s0)
    ctx->pc = 0x3edc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11076), bits); }
    // 0x3edc40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3edc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3edc44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3edc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edc48: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDC48u;
        // 0x3edc4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDC50u;
}
