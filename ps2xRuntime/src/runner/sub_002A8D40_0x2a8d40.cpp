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

// Function: sub_002A8D40
// Address: 0x2a8d40 - 0x2a8dd4
void sub_002A8D40_0x2a8d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8D40_0x2a8d40");
#endif

    switch (ctx->pc) {
        case 0x2a8d90u: goto label_2a8d90;
        case 0x2a8dbcu: goto label_2a8dbc;
        default: break;
    }

    ctx->pc = 0x2a8d40u;

    // 0x2a8d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a8d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a8d44: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x2a8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x2a8d48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a8d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a8d4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a8d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a8d54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8d54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a8d5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a8d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a8d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a8d64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a8d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d6c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a8d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a8d70: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a8d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a8d74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d78: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x2a8d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x2a8d7c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2a8d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a8d80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8d80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a8d84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d88: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A8D88u;
    SET_GPR_U32(ctx, 31, 0x2A8D90u);
    ctx->pc = 0x2A8D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D88u;
    // 0x2a8d8c: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A8D88u, 0x2A8D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D90u;
label_2a8d90:
    // 0x2a8d90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8d94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a8d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d98: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a8d98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d9c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a8d9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8da0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8da4: 0x34454b08  ori         $a1, $v0, 0x4B08
    ctx->pc = 0x2a8da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19208);
    // 0x2a8da8: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2a8da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2a8dac: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8db0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8db0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8db4: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A8DB4u;
    SET_GPR_U32(ctx, 31, 0x2A8DBCu);
    ctx->pc = 0x2A8DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8DB4u;
    // 0x2a8db8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A8DB4u, 0x2A8DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8DBCu;
label_2a8dbc:
    // 0x2a8dbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a8dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8dc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a8dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8dc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a8dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8dc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a8dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8DCCu;
        // 0x2a8dd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8DD4u;
}
