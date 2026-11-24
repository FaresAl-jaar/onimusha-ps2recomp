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

// Function: sub_00220BE0
// Address: 0x220be0 - 0x220c3c
void sub_00220BE0_0x220be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220BE0_0x220be0");
#endif

    switch (ctx->pc) {
        case 0x220bf4u: goto label_220bf4;
        default: break;
    }

    ctx->pc = 0x220be0u;

    // 0x220be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x220bec: 0xc084968  jal         func_2125A0
    ctx->pc = 0x220BECu;
    SET_GPR_U32(ctx, 31, 0x220BF4u);
    ctx->pc = 0x220BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220BECu;
    // 0x220bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x220BECu, 0x220BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BF4u;
label_220bf4:
    // 0x220bf4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x220bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x220bf8: 0x26060d30  addiu       $a2, $s0, 0xD30
    ctx->pc = 0x220bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x220bfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220C00u;
    {
        const bool branch_taken_0x220c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C00u;
        // 0x220c04: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c00) {
            ctx->pc = 0x220C18u;
            goto label_220c18;
        }
    }
    ctx->pc = 0x220C08u;
    // 0x220c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220c0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220c10: 0x80848e0  j           func_212380
    ctx->pc = 0x220C10u;
    ctx->pc = 0x220C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C10u;
    // 0x220c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x220C18u;
label_220c18:
    // 0x220c18: 0x8cc302a4  lw          $v1, 0x2A4($a2)
    ctx->pc = 0x220c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 676)));
    // 0x220c1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x220c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220c20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220c24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x220c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x220c28: 0xacc302a4  sw          $v1, 0x2A4($a2)
    ctx->pc = 0x220c28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 676), GPR_U32(ctx, 3));
    // 0x220c2c: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x220c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x220c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220c34: 0x3e00008  jr          $ra
    ctx->pc = 0x220C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C34u;
        // 0x220c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220C3Cu;
}
