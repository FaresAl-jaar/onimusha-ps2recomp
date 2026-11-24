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

// Function: sub_0036C120
// Address: 0x36c120 - 0x36c19c
void sub_0036C120_0x36c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C120_0x36c120");
#endif

    switch (ctx->pc) {
        case 0x36c140u: goto label_36c140;
        case 0x36c188u: goto label_36c188;
        default: break;
    }

    ctx->pc = 0x36c120u;

    // 0x36c120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c124: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x36c124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c12c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36c12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c134: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c138: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x36c138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c13c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x36c13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_36c140:
    // 0x36c140: 0x908200e0  lbu         $v0, 0xE0($a0)
    ctx->pc = 0x36c140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x36c144: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C144u;
    {
        const bool branch_taken_0x36c144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c144) {
            ctx->pc = 0x36C158u;
            goto label_36c158;
        }
    }
    ctx->pc = 0x36C14Cu;
    // 0x36c14c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36C14Cu;
    {
        const bool branch_taken_0x36c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C14Cu;
        // 0x36c150: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c14c) {
            ctx->pc = 0x36C168u;
            goto label_36c168;
        }
    }
    ctx->pc = 0x36C154u;
    // 0x36c154: 0x0  nop
    ctx->pc = 0x36c154u;
    // NOP
label_36c158:
    // 0x36c158: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36c158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36c15c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x36c15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36c160: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36C160u;
    {
        const bool branch_taken_0x36c160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C160u;
        // 0x36c164: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c160) {
            ctx->pc = 0x36C140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c140;
        }
    }
    ctx->pc = 0x36C168u;
label_36c168:
    // 0x36c168: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c16c: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36C16Cu;
    {
        const bool branch_taken_0x36c16c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x36c16c) {
            ctx->pc = 0x36C178u;
            goto label_36c178;
        }
    }
    ctx->pc = 0x36C174u;
    // 0x36c174: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36c174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c178:
    // 0x36c178: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36c178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c17c: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x36c17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x36c180: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x36C180u;
    SET_GPR_U32(ctx, 31, 0x36C188u);
    ctx->pc = 0x36C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C180u;
    // 0x36c184: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x36C180u, 0x36C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C188u;
label_36c188:
    // 0x36c188: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x36c188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x36c18c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c194: 0x3e00008  jr          $ra
    ctx->pc = 0x36C194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C194u;
        // 0x36c198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C19Cu;
}
