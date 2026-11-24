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

// Function: sub_0023ADC8
// Address: 0x23adc8 - 0x23ae24
void sub_0023ADC8_0x23adc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ADC8_0x23adc8");
#endif

    switch (ctx->pc) {
        case 0x23adf4u: goto label_23adf4;
        case 0x23ae08u: goto label_23ae08;
        default: break;
    }

    ctx->pc = 0x23adc8u;

    // 0x23adc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23adc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23adcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23adccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23add0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23add0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23add4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23add8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23add8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23addc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23ade0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23ade0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ade4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23ade4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23ade8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23adec: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23ADECu;
    SET_GPR_U32(ctx, 31, 0x23ADF4u);
    ctx->pc = 0x23ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADECu;
    // 0x23adf0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23ADECu, 0x23ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADF4u;
label_23adf4:
    // 0x23adf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23adf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23adf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23adf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23adfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23adfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae00: 0xc08eb8a  jal         func_23AE28
    ctx->pc = 0x23AE00u;
    SET_GPR_U32(ctx, 31, 0x23AE08u);
    ctx->pc = 0x23AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE00u;
    // 0x23ae04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AE28u, 0x23AE00u, 0x23AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE08u;
label_23ae08:
    // 0x23ae08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ae08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ae0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ae0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ae10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23ae10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ae14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23ae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ae18: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ae1c: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23AE1Cu;
    ctx->pc = 0x23AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE1Cu;
    // 0x23ae20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23AE24u;
}
