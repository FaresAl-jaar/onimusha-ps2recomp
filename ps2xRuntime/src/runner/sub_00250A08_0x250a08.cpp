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

// Function: sub_00250A08
// Address: 0x250a08 - 0x250a8c
void sub_00250A08_0x250a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250A08_0x250a08");
#endif

    switch (ctx->pc) {
        case 0x250a78u: goto label_250a78;
        default: break;
    }

    ctx->pc = 0x250a08u;

    // 0x250a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a14: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x250A14u;
    {
        const bool branch_taken_0x250a14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x250A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A14u;
        // 0x250a18: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a14) {
            ctx->pc = 0x250A40u;
            goto label_250a40;
        }
    }
    ctx->pc = 0x250A1Cu;
    // 0x250a1c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x250a20: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x250a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250a28: 0x2484eb18  addiu       $a0, $a0, -0x14E8
    ctx->pc = 0x250a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961944));
    // 0x250a2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x250a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250a30: 0x24a5eb28  addiu       $a1, $a1, -0x14D8
    ctx->pc = 0x250a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961960));
    // 0x250a34: 0x80941da  j           func_250768
    ctx->pc = 0x250A34u;
    ctx->pc = 0x250A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A34u;
    // 0x250a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x250A3Cu;
    // 0x250a3c: 0x0  nop
    ctx->pc = 0x250a3cu;
    // NOP
label_250a40:
    // 0x250a40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x250a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x250a44: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x250A44u;
    {
        const bool branch_taken_0x250a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A44u;
        // 0x250a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a44) {
            ctx->pc = 0x250A70u;
            goto label_250a70;
        }
    }
    ctx->pc = 0x250A4Cu;
    // 0x250a4c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x250a50: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x250a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250a58: 0x2484eb48  addiu       $a0, $a0, -0x14B8
    ctx->pc = 0x250a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961992));
    // 0x250a5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x250a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250a60: 0x24a5eb58  addiu       $a1, $a1, -0x14A8
    ctx->pc = 0x250a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962008));
    // 0x250a64: 0x80941da  j           func_250768
    ctx->pc = 0x250A64u;
    ctx->pc = 0x250A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A64u;
    // 0x250a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250768u;
    sub_00250768_0x250768(rdram, ctx, runtime); return;
    ctx->pc = 0x250A6Cu;
    // 0x250a6c: 0x0  nop
    ctx->pc = 0x250a6cu;
    // NOP
label_250a70:
    // 0x250a70: 0xc049590  jal         func_125640
    ctx->pc = 0x250A70u;
    SET_GPR_U32(ctx, 31, 0x250A78u);
    ctx->pc = 0x250A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A70u;
    // 0x250a74: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x250A70u, 0x250A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A78u;
label_250a78:
    // 0x250a78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x250a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x250a7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x250a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250a84: 0x3e00008  jr          $ra
    ctx->pc = 0x250A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A84u;
        // 0x250a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250A8Cu;
}
