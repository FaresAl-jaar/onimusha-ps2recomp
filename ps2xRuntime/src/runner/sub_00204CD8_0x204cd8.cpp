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

// Function: sub_00204CD8
// Address: 0x204cd8 - 0x204d48
void sub_00204CD8_0x204cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204CD8_0x204cd8");
#endif

    switch (ctx->pc) {
        case 0x204cecu: goto label_204cec;
        case 0x204d04u: goto label_204d04;
        case 0x204d18u: goto label_204d18;
        default: break;
    }

    ctx->pc = 0x204cd8u;

    // 0x204cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204ce0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x204ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x204ce4: 0xc081d84  jal         func_207610
    ctx->pc = 0x204CE4u;
    SET_GPR_U32(ctx, 31, 0x204CECu);
    ctx->pc = 0x204CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CE4u;
    // 0x204ce8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x204CE4u, 0x204CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CECu;
label_204cec:
    // 0x204cec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204cf0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x204CF0u;
    {
        const bool branch_taken_0x204cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CF0u;
        // 0x204cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cf0) {
            ctx->pc = 0x204D10u;
            goto label_204d10;
        }
    }
    ctx->pc = 0x204CF8u;
    // 0x204cf8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x204cfc: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x204CFCu;
    SET_GPR_U32(ctx, 31, 0x204D04u);
    ctx->pc = 0x204D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CFCu;
    // 0x204d00: 0x24846cc8  addiu       $a0, $a0, 0x6CC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x204CFCu, 0x204D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D04u;
label_204d04:
    // 0x204d04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x204D04u;
    {
        const bool branch_taken_0x204d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D04u;
        // 0x204d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d04) {
            ctx->pc = 0x204D38u;
            goto label_204d38;
        }
    }
    ctx->pc = 0x204D0Cu;
    // 0x204d0c: 0x0  nop
    ctx->pc = 0x204d0cu;
    // NOP
label_204d10:
    // 0x204d10: 0xc081c12  jal         func_207048
    ctx->pc = 0x204D10u;
    SET_GPR_U32(ctx, 31, 0x204D18u);
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x204D10u, 0x204D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D18u;
label_204d18:
    // 0x204d18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204d18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x204D1Cu;
    {
        const bool branch_taken_0x204d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D1Cu;
        // 0x204d20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d1c) {
            ctx->pc = 0x204D38u;
            goto label_204d38;
        }
    }
    ctx->pc = 0x204D24u;
    // 0x204d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x204d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204d2c: 0x80868f8  j           func_21A3E0
    ctx->pc = 0x204D2Cu;
    ctx->pc = 0x204D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D2Cu;
    // 0x204d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A3E0u;
    sub_0021A3E0_0x21a3e0(rdram, ctx, runtime); return;
    ctx->pc = 0x204D34u;
    // 0x204d34: 0x0  nop
    ctx->pc = 0x204d34u;
    // NOP
label_204d38:
    // 0x204d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x204d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204d40: 0x3e00008  jr          $ra
    ctx->pc = 0x204D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D40u;
        // 0x204d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D48u;
}
