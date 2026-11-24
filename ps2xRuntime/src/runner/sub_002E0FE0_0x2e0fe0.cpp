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

// Function: sub_002E0FE0
// Address: 0x2e0fe0 - 0x2e1038
void sub_002E0FE0_0x2e0fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0FE0_0x2e0fe0");
#endif

    switch (ctx->pc) {
        case 0x2e1004u: goto label_2e1004;
        case 0x2e1020u: goto label_2e1020;
        case 0x2e1028u: goto label_2e1028;
        default: break;
    }

    ctx->pc = 0x2e0fe0u;

    // 0x2e0fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0fec: 0x90820033  lbu         $v0, 0x33($a0)
    ctx->pc = 0x2e0fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x2e0ff0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e0ff4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0FF4u;
    {
        const bool branch_taken_0x2e0ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FF4u;
        // 0x2e0ff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ff4) {
            ctx->pc = 0x2E1008u;
            goto label_2e1008;
        }
    }
    ctx->pc = 0x2E0FFCu;
    // 0x2e0ffc: 0xc0b87e4  jal         func_2E1F90
    ctx->pc = 0x2E0FFCu;
    SET_GPR_U32(ctx, 31, 0x2E1004u);
    ctx->pc = 0x2E1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FFCu;
    // 0x2e1000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1F90u, 0x2E0FFCu, 0x2E1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1004u;
label_2e1004:
    // 0x2e1004: 0x0  nop
    ctx->pc = 0x2e1004u;
    // NOP
label_2e1008:
    // 0x2e1008: 0x8e05060c  lw          $a1, 0x60C($s0)
    ctx->pc = 0x2e1008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x2e100c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E100Cu;
    {
        const bool branch_taken_0x2e100c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2E1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E100Cu;
        // 0x2e1010: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e100c) {
            ctx->pc = 0x2E1020u;
            goto label_2e1020;
        }
    }
    ctx->pc = 0x2E1014u;
    // 0x2e1014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e1014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1018: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x2E1018u;
    SET_GPR_U32(ctx, 31, 0x2E1020u);
    ctx->pc = 0x2E101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1018u;
    // 0x2e101c: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x2E1018u, 0x2E1020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1020u;
label_2e1020:
    // 0x2e1020: 0xc0b8410  jal         func_2E1040
    ctx->pc = 0x2E1020u;
    SET_GPR_U32(ctx, 31, 0x2E1028u);
    ctx->pc = 0x2E1024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1020u;
    // 0x2e1024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1040u, 0x2E1020u, 0x2E1028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1028u;
label_2e1028:
    // 0x2e1028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e1028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e102c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e102cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1030: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1030u;
        // 0x2e1034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1038u;
}
