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

// Function: sub_00226BC0
// Address: 0x226bc0 - 0x226c40
void sub_00226BC0_0x226bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226BC0_0x226bc0");
#endif

    switch (ctx->pc) {
        case 0x226c1cu: goto label_226c1c;
        default: break;
    }

    ctx->pc = 0x226bc0u;

    // 0x226bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x226bc4: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x226bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x226bc8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x226bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x226bcc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x226bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226bd0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x226bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x226bd4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x226bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226bd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x226bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x226bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226be0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x226be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226be4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x226BE4u;
    {
        const bool branch_taken_0x226be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x226be4) {
            ctx->pc = 0x226BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226BE4u;
            // 0x226be8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226BFCu;
            goto label_226bfc;
        }
    }
    ctx->pc = 0x226BECu;
    // 0x226bec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x226becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226bf0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x226BF0u;
    {
        const bool branch_taken_0x226bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226bf0) {
            ctx->pc = 0x226BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226BF0u;
            // 0x226bf4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226C08u;
            goto label_226c08;
        }
    }
    ctx->pc = 0x226BF8u;
    // 0x226bf8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x226bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_226bfc:
    // 0x226bfc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x226BFCu;
    {
        const bool branch_taken_0x226bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BFCu;
        // 0x226c00: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bfc) {
            ctx->pc = 0x226C2Cu;
            goto label_226c2c;
        }
    }
    ctx->pc = 0x226C04u;
    // 0x226c04: 0x0  nop
    ctx->pc = 0x226c04u;
    // NOP
label_226c08:
    // 0x226c08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x226c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226c0c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x226c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x226c10: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x226c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x226c14: 0xc0948e4  jal         func_252390
    ctx->pc = 0x226C14u;
    SET_GPR_U32(ctx, 31, 0x226C1Cu);
    ctx->pc = 0x226C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C14u;
    // 0x226c18: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252390u, 0x226C14u, 0x226C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C1Cu;
label_226c1c:
    // 0x226c1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x226c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226c20: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x226c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x226c24: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x226c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x226c28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x226c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_226c2c:
    // 0x226c2c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x226c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226c30: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x226c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226c34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x226c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226c38: 0x3e00008  jr          $ra
    ctx->pc = 0x226C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C38u;
        // 0x226c3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226C40u;
}
