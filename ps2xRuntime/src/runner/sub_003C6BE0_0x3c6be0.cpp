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

// Function: sub_003C6BE0
// Address: 0x3c6be0 - 0x3c6c60
void sub_003C6BE0_0x3c6be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6BE0_0x3c6be0");
#endif

    switch (ctx->pc) {
        case 0x3c6c04u: goto label_3c6c04;
        case 0x3c6c2cu: goto label_3c6c2c;
        case 0x3c6c4cu: goto label_3c6c4c;
        default: break;
    }

    ctx->pc = 0x3c6be0u;

    // 0x3c6be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c6be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c6be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c6be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c6be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c6be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c6bec: 0x9085057c  lbu         $a1, 0x57C($a0)
    ctx->pc = 0x3c6becu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3c6bf0: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x3c6bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3c6bf4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C6BF4u;
    {
        const bool branch_taken_0x3c6bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6BF4u;
        // 0x3c6bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6bf4) {
            ctx->pc = 0x3C6C18u;
            goto label_3c6c18;
        }
    }
    ctx->pc = 0x3C6BFCu;
    // 0x3c6bfc: 0xc0f1b8c  jal         func_3C6E30
    ctx->pc = 0x3C6BFCu;
    SET_GPR_U32(ctx, 31, 0x3C6C04u);
    ctx->pc = 0x3C6E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6E30u, 0x3C6BFCu, 0x3C6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6C04u;
label_3c6c04:
    // 0x3c6c04: 0x9203057c  lbu         $v1, 0x57C($s0)
    ctx->pc = 0x3c6c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1404)));
    // 0x3c6c08: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x3c6c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x3c6c0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C6C0Cu;
    {
        const bool branch_taken_0x3c6c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C0Cu;
        // 0x3c6c10: 0xa203057c  sb          $v1, 0x57C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1404), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6c0c) {
            ctx->pc = 0x3C6C50u;
            goto label_3c6c50;
        }
    }
    ctx->pc = 0x3C6C14u;
    // 0x3c6c14: 0x0  nop
    ctx->pc = 0x3c6c14u;
    // NOP
label_3c6c18:
    // 0x3c6c18: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3c6c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3c6c1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6C1Cu;
    {
        const bool branch_taken_0x3c6c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6c1c) {
            ctx->pc = 0x3C6C38u;
            goto label_3c6c38;
        }
    }
    ctx->pc = 0x3C6C24u;
    // 0x3c6c24: 0xc0f1c58  jal         func_3C7160
    ctx->pc = 0x3C6C24u;
    SET_GPR_U32(ctx, 31, 0x3C6C2Cu);
    ctx->pc = 0x3C7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7160u, 0x3C6C24u, 0x3C6C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6C2Cu;
label_3c6c2c:
    // 0x3c6c2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C6C2Cu;
    {
        const bool branch_taken_0x3c6c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6c2c) {
            ctx->pc = 0x3C6C50u;
            goto label_3c6c50;
        }
    }
    ctx->pc = 0x3C6C34u;
    // 0x3c6c34: 0x0  nop
    ctx->pc = 0x3c6c34u;
    // NOP
label_3c6c38:
    // 0x3c6c38: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x3c6c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x3c6c3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C6C3Cu;
    {
        const bool branch_taken_0x3c6c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6c3c) {
            ctx->pc = 0x3C6C50u;
            goto label_3c6c50;
        }
    }
    ctx->pc = 0x3C6C44u;
    // 0x3c6c44: 0xc0f1d14  jal         func_3C7450
    ctx->pc = 0x3C6C44u;
    SET_GPR_U32(ctx, 31, 0x3C6C4Cu);
    ctx->pc = 0x3C7450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7450u, 0x3C6C44u, 0x3C6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6C4Cu;
label_3c6c4c:
    // 0x3c6c4c: 0x0  nop
    ctx->pc = 0x3c6c4cu;
    // NOP
label_3c6c50:
    // 0x3c6c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c6c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c6c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c6c58: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6C58u;
        // 0x3c6c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6C60u;
}
