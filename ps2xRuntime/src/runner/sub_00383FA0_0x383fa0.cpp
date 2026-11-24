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

// Function: sub_00383FA0
// Address: 0x383fa0 - 0x38401c
void sub_00383FA0_0x383fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383FA0_0x383fa0");
#endif

    switch (ctx->pc) {
        case 0x383fc8u: goto label_383fc8;
        case 0x383fdcu: goto label_383fdc;
        case 0x384000u: goto label_384000;
        case 0x384008u: goto label_384008;
        default: break;
    }

    ctx->pc = 0x383fa0u;

    // 0x383fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x383fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x383fa4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x383fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x383fa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x383fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x383fac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x383fb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x383fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x383fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x383fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383fb8: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x383fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x383fbc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x383fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x383fc0: 0xc0ce31c  jal         func_338C70
    ctx->pc = 0x383FC0u;
    SET_GPR_U32(ctx, 31, 0x383FC8u);
    ctx->pc = 0x383FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FC0u;
    // 0x383fc4: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x383FC0u, 0x383FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FC8u;
label_383fc8:
    // 0x383fc8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x383fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x383fcc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x383fccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x383fd0: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x383fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x383fd4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x383FD4u;
    SET_GPR_U32(ctx, 31, 0x383FDCu);
    ctx->pc = 0x383FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FD4u;
    // 0x383fd8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x383FD4u, 0x383FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FDCu;
label_383fdc:
    // 0x383fdc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x383FDCu;
    {
        const bool branch_taken_0x383fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383FDCu;
        // 0x383fe0: 0x101c3c  dsll32      $v1, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383fdc) {
            ctx->pc = 0x384008u;
            goto label_384008;
        }
    }
    ctx->pc = 0x383FE4u;
    // 0x383fe4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x383fe4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x383fe8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x383FE8u;
    {
        const bool branch_taken_0x383fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x383FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383FE8u;
        // 0x383fec: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383fe8) {
            ctx->pc = 0x384008u;
            goto label_384008;
        }
    }
    ctx->pc = 0x383FF0u;
    // 0x383ff0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x383ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x383ff4: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x383ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16568)));
    // 0x383ff8: 0xc0ce3f8  jal         func_338FE0
    ctx->pc = 0x383FF8u;
    SET_GPR_U32(ctx, 31, 0x384000u);
    ctx->pc = 0x383FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FF8u;
    // 0x383ffc: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FE0u, 0x383FF8u, 0x384000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384000u;
label_384000:
    // 0x384000: 0xc0e1008  jal         func_384020
    ctx->pc = 0x384000u;
    SET_GPR_U32(ctx, 31, 0x384008u);
    ctx->pc = 0x384004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384000u;
    // 0x384004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384020u, 0x384000u, 0x384008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384008u;
label_384008:
    // 0x384008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38400c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38400cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384014: 0x3e00008  jr          $ra
    ctx->pc = 0x384014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384014u;
        // 0x384018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38401Cu;
}
