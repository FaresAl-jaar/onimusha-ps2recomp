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

// Function: sub_00391C80
// Address: 0x391c80 - 0x391d48
void sub_00391C80_0x391c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391C80_0x391c80");
#endif

    switch (ctx->pc) {
        case 0x391ca0u: goto label_391ca0;
        case 0x391cecu: goto label_391cec;
        case 0x391d38u: goto label_391d38;
        default: break;
    }

    ctx->pc = 0x391c80u;

    // 0x391c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x391c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x391c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x391c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x391c88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x391c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x391c8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x391c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x391c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x391c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391c94: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x391c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x391c98: 0xc0e47fc  jal         func_391FF0
    ctx->pc = 0x391C98u;
    SET_GPR_U32(ctx, 31, 0x391CA0u);
    ctx->pc = 0x391C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C98u;
    // 0x391c9c: 0x24843090  addiu       $a0, $a0, 0x3090 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391FF0u, 0x391C98u, 0x391CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391CA0u;
label_391ca0:
    // 0x391ca0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x391ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x391ca4: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x391ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x391ca8: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x391ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x391cac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x391CACu;
    {
        const bool branch_taken_0x391cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x391cac) {
            ctx->pc = 0x391CF8u;
            goto label_391cf8;
        }
    }
    ctx->pc = 0x391CB4u;
    // 0x391cb4: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x391cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x391cb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x391cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391cbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x391cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x391cc0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x391cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x391cc4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x391cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x391cc8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x391cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x391ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cd0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x391cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x391cd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x391cd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x391cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391ce0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x391ce0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391ce4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x391CE4u;
    SET_GPR_U32(ctx, 31, 0x391CECu);
    ctx->pc = 0x391CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391CE4u;
    // 0x391ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x391CE4u, 0x391CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391CECu;
label_391cec:
    // 0x391cec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x391CECu;
    {
        const bool branch_taken_0x391cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391cec) {
            ctx->pc = 0x391D38u;
            goto label_391d38;
        }
    }
    ctx->pc = 0x391CF4u;
    // 0x391cf4: 0x0  nop
    ctx->pc = 0x391cf4u;
    // NOP
label_391cf8:
    // 0x391cf8: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x391cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x391cfc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x391CFCu;
    {
        const bool branch_taken_0x391cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x391cfc) {
            ctx->pc = 0x391D38u;
            goto label_391d38;
        }
    }
    ctx->pc = 0x391D04u;
    // 0x391d04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x391d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391d08: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x391d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x391d0c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x391d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x391d10: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x391d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x391d14: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x391d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x391d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x391d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d1c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x391d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x391d20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x391d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x391d28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x391d2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d30: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x391D30u;
    SET_GPR_U32(ctx, 31, 0x391D38u);
    ctx->pc = 0x391D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D30u;
    // 0x391d34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x391D30u, 0x391D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D38u;
label_391d38:
    // 0x391d38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x391d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x391d3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x391d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391d40: 0x3e00008  jr          $ra
    ctx->pc = 0x391D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D40u;
        // 0x391d44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391D48u;
}
