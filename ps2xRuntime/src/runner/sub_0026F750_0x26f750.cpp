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

// Function: sub_0026F750
// Address: 0x26f750 - 0x26f7e0
void sub_0026F750_0x26f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F750_0x26f750");
#endif

    switch (ctx->pc) {
        case 0x26f768u: goto label_26f768;
        case 0x26f774u: goto label_26f774;
        case 0x26f780u: goto label_26f780;
        case 0x26f7b0u: goto label_26f7b0;
        case 0x26f7bcu: goto label_26f7bc;
        case 0x26f7c4u: goto label_26f7c4;
        default: break;
    }

    ctx->pc = 0x26f750u;

    // 0x26f750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f760: 0xc09bfd8  jal         func_26FF60
    ctx->pc = 0x26F760u;
    SET_GPR_U32(ctx, 31, 0x26F768u);
    ctx->pc = 0x26F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F760u;
    // 0x26f764: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FF60u, 0x26F760u, 0x26F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F768u;
label_26f768:
    // 0x26f768: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26f768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f76c: 0xc09bf64  jal         func_26FD90
    ctx->pc = 0x26F76Cu;
    SET_GPR_U32(ctx, 31, 0x26F774u);
    ctx->pc = 0x26F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F76Cu;
    // 0x26f770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FD90u, 0x26F76Cu, 0x26F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F774u;
label_26f774:
    // 0x26f774: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26f774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26f778: 0xc063d48  jal         func_18F520
    ctx->pc = 0x26F778u;
    SET_GPR_U32(ctx, 31, 0x26F780u);
    ctx->pc = 0x26F77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F778u;
    // 0x26f77c: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x26F778u, 0x26F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F780u;
label_26f780:
    // 0x26f780: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26F780u;
    {
        const bool branch_taken_0x26f780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F780u;
        // 0x26f784: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f780) {
            ctx->pc = 0x26F7D0u;
            goto label_26f7d0;
        }
    }
    ctx->pc = 0x26F788u;
    // 0x26f788: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x26f788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x26f78c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x26f790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f794: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26f794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26f798: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f79c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f7a0: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x26f7a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26f7a4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f7a8: 0xc04ccb0  jal         func_1332C0
    ctx->pc = 0x26F7A8u;
    SET_GPR_U32(ctx, 31, 0x26F7B0u);
    ctx->pc = 0x26F7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7A8u;
    // 0x26f7ac: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332C0u, 0x26F7A8u, 0x26F7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7B0u;
label_26f7b0:
    // 0x26f7b0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26f7b4: 0xc05e38c  jal         func_178E30
    ctx->pc = 0x26F7B4u;
    SET_GPR_U32(ctx, 31, 0x26F7BCu);
    ctx->pc = 0x26F7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7B4u;
    // 0x26f7b8: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E30u, 0x26F7B4u, 0x26F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7BCu;
label_26f7bc:
    // 0x26f7bc: 0xc09bf54  jal         func_26FD50
    ctx->pc = 0x26F7BCu;
    SET_GPR_U32(ctx, 31, 0x26F7C4u);
    ctx->pc = 0x26FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FD50u, 0x26F7BCu, 0x26F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7C4u;
label_26f7c4:
    // 0x26f7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f7c8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x26f7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f7cc: 0x0  nop
    ctx->pc = 0x26f7ccu;
    // NOP
label_26f7d0:
    // 0x26f7d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f7d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x26F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7D8u;
        // 0x26f7dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F7E0u;
}
