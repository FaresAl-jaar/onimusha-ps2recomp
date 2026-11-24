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

// Function: sub_002E6E50
// Address: 0x2e6e50 - 0x2e6ed0
void sub_002E6E50_0x2e6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6E50_0x2e6e50");
#endif

    switch (ctx->pc) {
        case 0x2e6e7cu: goto label_2e6e7c;
        case 0x2e6eb4u: goto label_2e6eb4;
        case 0x2e6ec0u: goto label_2e6ec0;
        default: break;
    }

    ctx->pc = 0x2e6e50u;

    // 0x2e6e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e6e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e6e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6e5c: 0x8c852b60  lw          $a1, 0x2B60($a0)
    ctx->pc = 0x2e6e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11104)));
    // 0x2e6e60: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E6E60u;
    {
        const bool branch_taken_0x2e6e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E60u;
        // 0x2e6e64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e60) {
            ctx->pc = 0x2E6E90u;
            goto label_2e6e90;
        }
    }
    ctx->pc = 0x2E6E68u;
    // 0x2e6e68: 0x92020782  lbu         $v0, 0x782($s0)
    ctx->pc = 0x2e6e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1922)));
    // 0x2e6e6c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6E6Cu;
    {
        const bool branch_taken_0x2e6e6c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2E6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E6Cu;
        // 0x2e6e70: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e6c) {
            ctx->pc = 0x2E6E90u;
            goto label_2e6e90;
        }
    }
    ctx->pc = 0x2E6E74u;
    // 0x2e6e74: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2E6E74u;
    SET_GPR_U32(ctx, 31, 0x2E6E7Cu);
    ctx->pc = 0x2E6E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E74u;
    // 0x2e6e78: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E6E74u, 0x2E6E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E7Cu;
label_2e6e7c:
    // 0x2e6e7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6E7Cu;
    {
        const bool branch_taken_0x2e6e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e7c) {
            ctx->pc = 0x2E6E90u;
            goto label_2e6e90;
        }
    }
    ctx->pc = 0x2E6E84u;
    // 0x2e6e84: 0x92030782  lbu         $v1, 0x782($s0)
    ctx->pc = 0x2e6e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1922)));
    // 0x2e6e88: 0xa0432b68  sb          $v1, 0x2B68($v0)
    ctx->pc = 0x2e6e88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e6e8c: 0x0  nop
    ctx->pc = 0x2e6e8cu;
    // NOP
label_2e6e90:
    // 0x2e6e90: 0x8e022b60  lw          $v0, 0x2B60($s0)
    ctx->pc = 0x2e6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x2e6e94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6E94u;
    {
        const bool branch_taken_0x2e6e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e94) {
            ctx->pc = 0x2E6EB8u;
            goto label_2e6eb8;
        }
    }
    ctx->pc = 0x2E6E9Cu;
    // 0x2e6e9c: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2e6e9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2e6ea0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e6ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e6ea4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6EA4u;
    {
        const bool branch_taken_0x2e6ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EA4u;
        // 0x2e6ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ea4) {
            ctx->pc = 0x2E6EB8u;
            goto label_2e6eb8;
        }
    }
    ctx->pc = 0x2E6EACu;
    // 0x2e6eac: 0xc0b9c9c  jal         func_2E7270
    ctx->pc = 0x2E6EACu;
    SET_GPR_U32(ctx, 31, 0x2E6EB4u);
    ctx->pc = 0x2E7270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7270u, 0x2E6EACu, 0x2E6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EB4u;
label_2e6eb4:
    // 0x2e6eb4: 0x0  nop
    ctx->pc = 0x2e6eb4u;
    // NOP
label_2e6eb8:
    // 0x2e6eb8: 0xc0a6188  jal         func_298620
    ctx->pc = 0x2E6EB8u;
    SET_GPR_U32(ctx, 31, 0x2E6EC0u);
    ctx->pc = 0x2E6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EB8u;
    // 0x2e6ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x2E6EB8u, 0x2E6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EC0u;
label_2e6ec0:
    // 0x2e6ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e6ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EC8u;
        // 0x2e6ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6ED0u;
}
