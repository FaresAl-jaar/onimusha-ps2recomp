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

// Function: sub_00214D60
// Address: 0x214d60 - 0x214e04
void sub_00214D60_0x214d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214D60_0x214d60");
#endif

    switch (ctx->pc) {
        case 0x214d94u: goto label_214d94;
        case 0x214de0u: goto label_214de0;
        default: break;
    }

    ctx->pc = 0x214d60u;

    // 0x214d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214d68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x214d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214d70: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x214d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214d78: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x214d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214d80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x214d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x214d88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x214d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x214d8c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x214D8Cu;
    SET_GPR_U32(ctx, 31, 0x214D94u);
    ctx->pc = 0x214D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D8Cu;
    // 0x214d90: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x214D8Cu, 0x214D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D94u;
label_214d94:
    // 0x214d94: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x214d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x214d98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x214d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d9c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214da0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x214da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214da4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x214da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214da8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214DA8u;
    {
        const bool branch_taken_0x214da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DA8u;
        // 0x214dac: 0x34a50184  ori         $a1, $a1, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)388);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214da8) {
            ctx->pc = 0x214DD0u;
            goto label_214dd0;
        }
    }
    ctx->pc = 0x214DB0u;
    // 0x214db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214db8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214dbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214dbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214dc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x214dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214dc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x214dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214dc8: 0x80848e0  j           func_212380
    ctx->pc = 0x214DC8u;
    ctx->pc = 0x214DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DC8u;
    // 0x214dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x214DD0u;
label_214dd0:
    // 0x214dd0: 0x8e621fc0  lw          $v0, 0x1FC0($s3)
    ctx->pc = 0x214dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8128)));
    // 0x214dd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x214dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dd8: 0xc07fb8e  jal         func_1FEE38
    ctx->pc = 0x214DD8u;
    SET_GPR_U32(ctx, 31, 0x214DE0u);
    ctx->pc = 0x214DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DD8u;
    // 0x214ddc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE38u, 0x214DD8u, 0x214DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214DE0u;
label_214de0:
    // 0x214de0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214dec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214df0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214df4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x214df4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214df8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x214df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x214DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DFCu;
        // 0x214e00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214E04u;
}
