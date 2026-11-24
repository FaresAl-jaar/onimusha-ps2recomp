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

// Function: sub_0028CD60
// Address: 0x28cd60 - 0x28ce08
void sub_0028CD60_0x28cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CD60_0x28cd60");
#endif

    switch (ctx->pc) {
        case 0x28cd9cu: goto label_28cd9c;
        case 0x28cdb4u: goto label_28cdb4;
        case 0x28cdd4u: goto label_28cdd4;
        case 0x28cdf0u: goto label_28cdf0;
        default: break;
    }

    ctx->pc = 0x28cd60u;

    // 0x28cd60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28cd64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28cd68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28cd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28cd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28cd70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28cd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd74: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x28CD74u;
    {
        const bool branch_taken_0x28cd74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD74u;
        // 0x28cd78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd74) {
            ctx->pc = 0x28CDF0u;
            goto label_28cdf0;
        }
    }
    ctx->pc = 0x28CD7Cu;
    // 0x28cd7c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x28cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x28cd80: 0x24427630  addiu       $v0, $v0, 0x7630
    ctx->pc = 0x28cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30256));
    // 0x28cd84: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x28cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x28cd88: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x28cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x28cd8c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CD8Cu;
    {
        const bool branch_taken_0x28cd8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cd8c) {
            ctx->pc = 0x28CDA0u;
            goto label_28cda0;
        }
    }
    ctx->pc = 0x28CD94u;
    // 0x28cd94: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28CD94u;
    SET_GPR_U32(ctx, 31, 0x28CD9Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28CD94u, 0x28CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD9Cu;
label_28cd9c:
    // 0x28cd9c: 0xae200150  sw          $zero, 0x150($s1)
    ctx->pc = 0x28cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
label_28cda0:
    // 0x28cda0: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x28cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x28cda4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CDA4u;
    {
        const bool branch_taken_0x28cda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cda4) {
            ctx->pc = 0x28CDB8u;
            goto label_28cdb8;
        }
    }
    ctx->pc = 0x28CDACu;
    // 0x28cdac: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28CDACu;
    SET_GPR_U32(ctx, 31, 0x28CDB4u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28CDACu, 0x28CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDB4u;
label_28cdb4:
    // 0x28cdb4: 0xae200154  sw          $zero, 0x154($s1)
    ctx->pc = 0x28cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
label_28cdb8:
    // 0x28cdb8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CDB8u;
    {
        const bool branch_taken_0x28cdb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDB8u;
        // 0x28cdbc: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdb8) {
            ctx->pc = 0x28CDD8u;
            goto label_28cdd8;
        }
    }
    ctx->pc = 0x28CDC0u;
    // 0x28cdc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28cdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdc4: 0x244275e0  addiu       $v0, $v0, 0x75E0
    ctx->pc = 0x28cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30176));
    // 0x28cdc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28cdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdcc: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x28CDCCu;
    SET_GPR_U32(ctx, 31, 0x28CDD4u);
    ctx->pc = 0x28CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CDCCu;
    // 0x28cdd0: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x28CDCCu, 0x28CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDD4u;
label_28cdd4:
    // 0x28cdd4: 0x0  nop
    ctx->pc = 0x28cdd4u;
    // NOP
label_28cdd8:
    // 0x28cdd8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x28cdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28cddc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28cddcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28cde0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CDE0u;
    {
        const bool branch_taken_0x28cde0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x28CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDE0u;
        // 0x28cde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cde0) {
            ctx->pc = 0x28CDF0u;
            goto label_28cdf0;
        }
    }
    ctx->pc = 0x28CDE8u;
    // 0x28cde8: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28CDE8u;
    SET_GPR_U32(ctx, 31, 0x28CDF0u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28CDE8u, 0x28CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDF0u;
label_28cdf0:
    // 0x28cdf0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28cdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28cdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cdf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28cdf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cdfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28cdfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ce00: 0x3e00008  jr          $ra
    ctx->pc = 0x28CE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE00u;
        // 0x28ce04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CE08u;
}
