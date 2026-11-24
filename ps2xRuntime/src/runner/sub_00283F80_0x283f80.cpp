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

// Function: sub_00283F80
// Address: 0x283f80 - 0x284010
void sub_00283F80_0x283f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283F80_0x283f80");
#endif

    switch (ctx->pc) {
        case 0x283fbcu: goto label_283fbc;
        case 0x283fdcu: goto label_283fdc;
        case 0x283ff8u: goto label_283ff8;
        default: break;
    }

    ctx->pc = 0x283f80u;

    // 0x283f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x283f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x283f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283f94: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x283F94u;
    {
        const bool branch_taken_0x283f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F94u;
        // 0x283f98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f94) {
            ctx->pc = 0x283FF8u;
            goto label_283ff8;
        }
    }
    ctx->pc = 0x283F9Cu;
    // 0x283f9c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x283f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x283fa0: 0x24427540  addiu       $v0, $v0, 0x7540
    ctx->pc = 0x283fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30016));
    // 0x283fa4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x283fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x283fa8: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x283fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x283fac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283FACu;
    {
        const bool branch_taken_0x283fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x283fac) {
            ctx->pc = 0x283FC0u;
            goto label_283fc0;
        }
    }
    ctx->pc = 0x283FB4u;
    // 0x283fb4: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x283FB4u;
    SET_GPR_U32(ctx, 31, 0x283FBCu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x283FB4u, 0x283FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FBCu;
label_283fbc:
    // 0x283fbc: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x283fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_283fc0:
    // 0x283fc0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x283FC0u;
    {
        const bool branch_taken_0x283fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x283FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FC0u;
        // 0x283fc4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fc0) {
            ctx->pc = 0x283FE0u;
            goto label_283fe0;
        }
    }
    ctx->pc = 0x283FC8u;
    // 0x283fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fcc: 0x24427570  addiu       $v0, $v0, 0x7570
    ctx->pc = 0x283fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30064));
    // 0x283fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fd4: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x283FD4u;
    SET_GPR_U32(ctx, 31, 0x283FDCu);
    ctx->pc = 0x283FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283FD4u;
    // 0x283fd8: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x283FD4u, 0x283FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FDCu;
label_283fdc:
    // 0x283fdc: 0x0  nop
    ctx->pc = 0x283fdcu;
    // NOP
label_283fe0:
    // 0x283fe0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x283fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x283fe4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x283fe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x283fe8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283FE8u;
    {
        const bool branch_taken_0x283fe8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x283FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FE8u;
        // 0x283fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fe8) {
            ctx->pc = 0x283FF8u;
            goto label_283ff8;
        }
    }
    ctx->pc = 0x283FF0u;
    // 0x283ff0: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x283FF0u;
    SET_GPR_U32(ctx, 31, 0x283FF8u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x283FF0u, 0x283FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FF8u;
label_283ff8:
    // 0x283ff8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x283ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x283ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x284000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284008: 0x3e00008  jr          $ra
    ctx->pc = 0x284008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284008u;
        // 0x28400c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284010u;
}
