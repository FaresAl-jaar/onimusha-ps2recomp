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

// Function: sub_0033CBB0
// Address: 0x33cbb0 - 0x33cc44
void sub_0033CBB0_0x33cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CBB0_0x33cbb0");
#endif

    switch (ctx->pc) {
        case 0x33cbd8u: goto label_33cbd8;
        case 0x33cbe0u: goto label_33cbe0;
        case 0x33cbf0u: goto label_33cbf0;
        case 0x33cbf8u: goto label_33cbf8;
        case 0x33cc08u: goto label_33cc08;
        case 0x33cc2cu: goto label_33cc2c;
        default: break;
    }

    ctx->pc = 0x33cbb0u;

    // 0x33cbb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x33cbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33cbb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33cbbc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x33cbbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33cbc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33cbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cbc4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33cbc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33cbc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33cbcc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x33cbccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x33cbd0: 0xc04150c  jal         func_105430
    ctx->pc = 0x33CBD0u;
    SET_GPR_U32(ctx, 31, 0x33CBD8u);
    ctx->pc = 0x33CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBD0u;
    // 0x33cbd4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x33CBD0u, 0x33CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBD8u;
label_33cbd8:
    // 0x33cbd8: 0xc09681c  jal         func_25A070
    ctx->pc = 0x33CBD8u;
    SET_GPR_U32(ctx, 31, 0x33CBE0u);
    ctx->pc = 0x33CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBD8u;
    // 0x33cbdc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x33CBD8u, 0x33CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBE0u;
label_33cbe0:
    // 0x33cbe0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33cbe4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33cbe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x33cbe8: 0xc04155e  jal         func_105578
    ctx->pc = 0x33CBE8u;
    SET_GPR_U32(ctx, 31, 0x33CBF0u);
    ctx->pc = 0x33CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBE8u;
    // 0x33cbec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105578u, 0x33CBE8u, 0x33CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBF0u;
label_33cbf0:
    // 0x33cbf0: 0xc09681c  jal         func_25A070
    ctx->pc = 0x33CBF0u;
    SET_GPR_U32(ctx, 31, 0x33CBF8u);
    ctx->pc = 0x33CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBF0u;
    // 0x33cbf4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x33CBF0u, 0x33CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBF8u;
label_33cbf8:
    // 0x33cbf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33cbfc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33cbfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x33cc00: 0xc041588  jal         func_105620
    ctx->pc = 0x33CC00u;
    SET_GPR_U32(ctx, 31, 0x33CC08u);
    ctx->pc = 0x33CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC00u;
    // 0x33cc04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x33CC00u, 0x33CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC08u;
label_33cc08:
    // 0x33cc08: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x33cc0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33cc10: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x33cc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc18: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x33cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x33cc1c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x33cc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33cc20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33cc20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc24: 0xc041442  jal         func_105108
    ctx->pc = 0x33CC24u;
    SET_GPR_U32(ctx, 31, 0x33CC2Cu);
    ctx->pc = 0x33CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC24u;
    // 0x33cc28: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x33CC24u, 0x33CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC2Cu;
label_33cc2c:
    // 0x33cc2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33cc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33cc30: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x33cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33cc34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33cc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cc38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33cc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x33CC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC3Cu;
        // 0x33cc40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CC44u;
}
