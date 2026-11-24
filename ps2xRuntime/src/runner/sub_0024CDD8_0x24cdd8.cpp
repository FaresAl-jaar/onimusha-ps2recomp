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

// Function: sub_0024CDD8
// Address: 0x24cdd8 - 0x24ce5c
void sub_0024CDD8_0x24cdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CDD8_0x24cdd8");
#endif

    switch (ctx->pc) {
        case 0x24ce18u: goto label_24ce18;
        case 0x24ce34u: goto label_24ce34;
        case 0x24ce48u: goto label_24ce48;
        default: break;
    }

    ctx->pc = 0x24cdd8u;

    // 0x24cdd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24cdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24cddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cde0: 0x1c800005  bgtz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CDE0u;
    {
        const bool branch_taken_0x24cde0 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x24CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDE0u;
        // 0x24cde4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cde0) {
            ctx->pc = 0x24CDF8u;
            goto label_24cdf8;
        }
    }
    ctx->pc = 0x24CDE8u;
    // 0x24cde8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24cde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24cdec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cdf0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24CDF0u;
    {
        const bool branch_taken_0x24cdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDF0u;
        // 0x24cdf4: 0x24a5dd80  addiu       $a1, $a1, -0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdf0) {
            ctx->pc = 0x24CE2Cu;
            goto label_24ce2c;
        }
    }
    ctx->pc = 0x24CDF8u;
label_24cdf8:
    // 0x24cdf8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CDF8u;
    {
        const bool branch_taken_0x24cdf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDF8u;
        // 0x24cdfc: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdf8) {
            ctx->pc = 0x24CE10u;
            goto label_24ce10;
        }
    }
    ctx->pc = 0x24CE00u;
    // 0x24ce00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24ce00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24CE04u;
    {
        const bool branch_taken_0x24ce04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE04u;
        // 0x24ce08: 0x24a5ddb0  addiu       $a1, $a1, -0x2250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce04) {
            ctx->pc = 0x24CE2Cu;
            goto label_24ce2c;
        }
    }
    ctx->pc = 0x24CE0Cu;
    // 0x24ce0c: 0x0  nop
    ctx->pc = 0x24ce0cu;
    // NOP
label_24ce10:
    // 0x24ce10: 0xc093204  jal         func_24C810
    ctx->pc = 0x24CE10u;
    SET_GPR_U32(ctx, 31, 0x24CE18u);
    ctx->pc = 0x24C810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C810u, 0x24CE10u, 0x24CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE18u;
label_24ce18:
    // 0x24ce18: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24ce18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24ce1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24ce1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce20: 0x24a5ddd8  addiu       $a1, $a1, -0x2228
    ctx->pc = 0x24ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958552));
    // 0x24ce24: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CE24u;
    {
        const bool branch_taken_0x24ce24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE24u;
        // 0x24ce28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce24) {
            ctx->pc = 0x24CE40u;
            goto label_24ce40;
        }
    }
    ctx->pc = 0x24CE2Cu;
label_24ce2c:
    // 0x24ce2c: 0xc093184  jal         func_24C610
    ctx->pc = 0x24CE2Cu;
    SET_GPR_U32(ctx, 31, 0x24CE34u);
    ctx->pc = 0x24C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C610u, 0x24CE2Cu, 0x24CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE34u;
label_24ce34:
    // 0x24ce34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24CE34u;
    {
        const bool branch_taken_0x24ce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE34u;
        // 0x24ce38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce34) {
            ctx->pc = 0x24CE4Cu;
            goto label_24ce4c;
        }
    }
    ctx->pc = 0x24CE3Cu;
    // 0x24ce3c: 0x0  nop
    ctx->pc = 0x24ce3cu;
    // NOP
label_24ce40:
    // 0x24ce40: 0xc093222  jal         func_24C888
    ctx->pc = 0x24CE40u;
    SET_GPR_U32(ctx, 31, 0x24CE48u);
    ctx->pc = 0x24CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE40u;
    // 0x24ce44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C888u, 0x24CE40u, 0x24CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE48u;
label_24ce48:
    // 0x24ce48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ce48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ce4c:
    // 0x24ce4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ce4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ce50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24ce50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ce54: 0x3e00008  jr          $ra
    ctx->pc = 0x24CE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE54u;
        // 0x24ce58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CE5Cu;
}
