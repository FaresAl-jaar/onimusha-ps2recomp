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

// Function: sub_00338BF0
// Address: 0x338bf0 - 0x338c6c
void sub_00338BF0_0x338bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338BF0_0x338bf0");
#endif

    switch (ctx->pc) {
        case 0x338c40u: goto label_338c40;
        default: break;
    }

    ctx->pc = 0x338bf0u;

    // 0x338bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338bf4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x338bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x338bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338bfc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x338bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x338c00: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x338c00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE4u));
    // 0x338c04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x338c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x338c08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x338C08u;
    {
        const bool branch_taken_0x338c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C08u;
        // 0x338c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c08) {
            ctx->pc = 0x338C18u;
            goto label_338c18;
        }
    }
    ctx->pc = 0x338C10u;
    // 0x338c10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x338C10u;
    {
        const bool branch_taken_0x338c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338c10) {
            ctx->pc = 0x338C60u;
            goto label_338c60;
        }
    }
    ctx->pc = 0x338C18u;
label_338c18:
    // 0x338c18: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x338c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x338c1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x338c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x338c20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x338c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338c24: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338C24u;
    {
        const bool branch_taken_0x338c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x338C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C24u;
        // 0x338c28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c24) {
            ctx->pc = 0x338C38u;
            goto label_338c38;
        }
    }
    ctx->pc = 0x338C2Cu;
    // 0x338c2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x338C2Cu;
    {
        const bool branch_taken_0x338c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338c2c) {
            ctx->pc = 0x338C60u;
            goto label_338c60;
        }
    }
    ctx->pc = 0x338C34u;
    // 0x338c34: 0x0  nop
    ctx->pc = 0x338c34u;
    // NOP
label_338c38:
    // 0x338c38: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x338C38u;
    SET_GPR_U32(ctx, 31, 0x338C40u);
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x338C38u, 0x338C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C40u;
label_338c40:
    // 0x338c40: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x338c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x338c44: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x338c44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x338c48: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x338C48u;
    {
        const bool branch_taken_0x338c48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x338C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C48u;
        // 0x338c4c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c48) {
            ctx->pc = 0x338C58u;
            goto label_338c58;
        }
    }
    ctx->pc = 0x338C50u;
    // 0x338c50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x338c50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c54: 0x0  nop
    ctx->pc = 0x338c54u;
    // NOP
label_338c58:
    // 0x338c58: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x338c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x338c5c: 0x0  nop
    ctx->pc = 0x338c5cu;
    // NOP
label_338c60:
    // 0x338c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338c64: 0x3e00008  jr          $ra
    ctx->pc = 0x338C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C64u;
        // 0x338c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338C6Cu;
}
