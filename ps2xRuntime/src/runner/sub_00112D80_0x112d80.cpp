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

// Function: sub_00112D80
// Address: 0x112d80 - 0x112e20
void sub_00112D80_0x112d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112D80_0x112d80");
#endif

    switch (ctx->pc) {
        case 0x112db4u: goto label_112db4;
        case 0x112dccu: goto label_112dcc;
        case 0x112dd4u: goto label_112dd4;
        case 0x112df4u: goto label_112df4;
        case 0x112dfcu: goto label_112dfc;
        default: break;
    }

    ctx->pc = 0x112d80u;

    // 0x112d80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x112d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x112d84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x112d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x112d88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x112d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x112d8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x112d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d90: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x112d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x112d94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x112d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112d9c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x112d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x112da0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x112da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x112da4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x112da4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x112da8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x112da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x112dac: 0xc044b50  jal         func_112D40
    ctx->pc = 0x112DACu;
    SET_GPR_U32(ctx, 31, 0x112DB4u);
    ctx->pc = 0x112DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DACu;
    // 0x112db0: 0x26140400  addiu       $s4, $s0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x112DACu, 0x112DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DB4u;
label_112db4:
    // 0x112db4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x112db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x112db8: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x112db8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x112dbc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x112DBCu;
    {
        const bool branch_taken_0x112dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112dbc) {
            ctx->pc = 0x112DCCu;
            goto label_112dcc;
        }
    }
    ctx->pc = 0x112DC4u;
    // 0x112dc4: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x112DC4u;
    SET_GPR_U32(ctx, 31, 0x112DCCu);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x112DC4u, 0x112DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DCCu;
label_112dcc:
    // 0x112dcc: 0xc046028  jal         func_1180A0
    ctx->pc = 0x112DCCu;
    SET_GPR_U32(ctx, 31, 0x112DD4u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x112DCCu, 0x112DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DD4u;
label_112dd4:
    // 0x112dd4: 0x8e110400  lw          $s1, 0x400($s0)
    ctx->pc = 0x112dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
    // 0x112dd8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x112dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x112ddc: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x112ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
    // 0x112de0: 0xae130400  sw          $s3, 0x400($s0)
    ctx->pc = 0x112de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 19));
    // 0x112de4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112DE4u;
    {
        const bool branch_taken_0x112de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DE4u;
        // 0x112de8: 0xac7c0440  sw          $gp, 0x440($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1088), GPR_U32(ctx, 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112de4) {
            ctx->pc = 0x112DF4u;
            goto label_112df4;
        }
    }
    ctx->pc = 0x112DECu;
    // 0x112dec: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x112DECu;
    SET_GPR_U32(ctx, 31, 0x112DF4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x112DECu, 0x112DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DF4u;
label_112df4:
    // 0x112df4: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x112DF4u;
    SET_GPR_U32(ctx, 31, 0x112DFCu);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x112DF4u, 0x112DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DFCu;
label_112dfc:
    // 0x112dfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x112dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x112e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112e04: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x112e04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112e08: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x112e08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112e0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x112e0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112e10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112e18: 0x3e00008  jr          $ra
    ctx->pc = 0x112E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E18u;
        // 0x112e1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112E20u;
}
