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

// Function: sub_00389C50
// Address: 0x389c50 - 0x389ccc
void sub_00389C50_0x389c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389C50_0x389c50");
#endif

    switch (ctx->pc) {
        case 0x389c70u: goto label_389c70;
        case 0x389cc0u: goto label_389cc0;
        default: break;
    }

    ctx->pc = 0x389c50u;

    // 0x389c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x389c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x389c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389c58: 0x93838c3c  lbu         $v1, -0x73C4($gp)
    ctx->pc = 0x389c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x389c5c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x389C5Cu;
    {
        const bool branch_taken_0x389c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C5Cu;
        // 0x389c60: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389c5c) {
            ctx->pc = 0x389CC0u;
            goto label_389cc0;
        }
    }
    ctx->pc = 0x389C64u;
    // 0x389c64: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x389c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x389c68: 0xc05e360  jal         func_178D80
    ctx->pc = 0x389C68u;
    SET_GPR_U32(ctx, 31, 0x389C70u);
    ctx->pc = 0x389C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389C68u;
    // 0x389c6c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x389C68u, 0x389C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389C70u;
label_389c70:
    // 0x389c70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x389c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x389c74: 0x3c031418  lui         $v1, 0x1418
    ctx->pc = 0x389c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5144 << 16));
    // 0x389c78: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x389c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x389c7c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x389c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x389c80: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x389c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x389c84: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x389c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x389c88: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x389c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x389c8c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x389c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x389c90: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x389c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x389c94: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x389c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x389c98: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x389c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x389c9c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x389c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x389ca0: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x389ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x389ca4: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x389ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x389ca8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x389ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x389cac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x389cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389cb0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x389cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x389cb4: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x389cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x389cb8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x389CB8u;
    SET_GPR_U32(ctx, 31, 0x389CC0u);
    ctx->pc = 0x389CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389CB8u;
    // 0x389cbc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x389CB8u, 0x389CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389CC0u;
label_389cc0:
    // 0x389cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x389CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CC4u;
        // 0x389cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389CCCu;
}
