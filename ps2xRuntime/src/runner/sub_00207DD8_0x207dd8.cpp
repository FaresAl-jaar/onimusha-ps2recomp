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

// Function: sub_00207DD8
// Address: 0x207dd8 - 0x207e54
void sub_00207DD8_0x207dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207DD8_0x207dd8");
#endif

    switch (ctx->pc) {
        case 0x207df4u: goto label_207df4;
        case 0x207e0cu: goto label_207e0c;
        default: break;
    }

    ctx->pc = 0x207dd8u;

    // 0x207dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207de0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207de4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x207de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207dec: 0xc081d84  jal         func_207610
    ctx->pc = 0x207DECu;
    SET_GPR_U32(ctx, 31, 0x207DF4u);
    ctx->pc = 0x207DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DECu;
    // 0x207df0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207DECu, 0x207DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DF4u;
label_207df4:
    // 0x207df4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207dfc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207DFCu;
    {
        const bool branch_taken_0x207dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DFCu;
        // 0x207e00: 0x24847a08  addiu       $a0, $a0, 0x7A08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207dfc) {
            ctx->pc = 0x207E18u;
            goto label_207e18;
        }
    }
    ctx->pc = 0x207E04u;
    // 0x207e04: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207E04u;
    SET_GPR_U32(ctx, 31, 0x207E0Cu);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207E04u, 0x207E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E0Cu;
label_207e0c:
    // 0x207e0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x207E0Cu;
    {
        const bool branch_taken_0x207e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E0Cu;
        // 0x207e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e0c) {
            ctx->pc = 0x207E40u;
            goto label_207e40;
        }
    }
    ctx->pc = 0x207E14u;
    // 0x207e14: 0x0  nop
    ctx->pc = 0x207e14u;
    // NOP
label_207e18:
    // 0x207e18: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x207e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x207e1c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x207E1Cu;
    {
        const bool branch_taken_0x207e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E1Cu;
        // 0x207e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e1c) {
            ctx->pc = 0x207E40u;
            goto label_207e40;
        }
    }
    ctx->pc = 0x207E24u;
    // 0x207e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e38: 0x8081ab8  j           func_206AE0
    ctx->pc = 0x207E38u;
    ctx->pc = 0x207E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E38u;
    // 0x207e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206AE0u;
    sub_00206AE0_0x206ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x207E40u;
label_207e40:
    // 0x207e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207e44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207e48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x207E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E4Cu;
        // 0x207e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207E54u;
}
