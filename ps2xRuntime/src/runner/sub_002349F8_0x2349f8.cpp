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

// Function: sub_002349F8
// Address: 0x2349f8 - 0x234a74
void sub_002349F8_0x2349f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002349F8_0x2349f8");
#endif

    switch (ctx->pc) {
        case 0x234a30u: goto label_234a30;
        case 0x234a54u: goto label_234a54;
        default: break;
    }

    ctx->pc = 0x2349f8u;

    // 0x2349f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2349f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2349fc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2349fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x234a00: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x234a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x234a04: 0x2451fc6c  addiu       $s1, $v0, -0x394
    ctx->pc = 0x234a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966380));
    // 0x234a08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x234a08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BFC6Cu));
    // 0x234a0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234a10: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x234a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x234a14: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x234A14u;
    {
        const bool branch_taken_0x234a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x234A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A14u;
        // 0x234a18: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a14) {
            ctx->pc = 0x234A60u;
            goto label_234a60;
        }
    }
    ctx->pc = 0x234A1Cu;
    // 0x234a1c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x234a20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x234a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a24: 0x2450fcb8  addiu       $s0, $v0, -0x348
    ctx->pc = 0x234a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966456));
    // 0x234a28: 0xc0437b8  jal         func_10DEE0
    ctx->pc = 0x234A28u;
    SET_GPR_U32(ctx, 31, 0x234A30u);
    ctx->pc = 0x234A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A28u;
    // 0x234a2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DEE0u, 0x234A28u, 0x234A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A30u;
label_234a30:
    // 0x234a30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x234a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234a34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x234a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x234a38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234A38u;
    {
        const bool branch_taken_0x234a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A38u;
        // 0x234a3c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a38) {
            ctx->pc = 0x234A48u;
            goto label_234a48;
        }
    }
    ctx->pc = 0x234A40u;
    // 0x234a40: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x234A40u;
    {
        const bool branch_taken_0x234a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x234a40) {
            ctx->pc = 0x234A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234A40u;
            // 0x234a44: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A64u;
            goto label_234a64;
        }
    }
    ctx->pc = 0x234A48u;
label_234a48:
    // 0x234a48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x234a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234a4c: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x234A4Cu;
    SET_GPR_U32(ctx, 31, 0x234A54u);
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x234A4Cu, 0x234A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A54u;
label_234a54:
    // 0x234a54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x234a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234a58: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x234A58u;
    {
        const bool branch_taken_0x234a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x234a58) {
            ctx->pc = 0x234A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234A58u;
            // 0x234a5c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A60u;
            goto label_234a60;
        }
    }
    ctx->pc = 0x234A60u;
label_234a60:
    // 0x234a60: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x234a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_234a64:
    // 0x234a64: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x234a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x234a68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x234a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x234A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A6Cu;
        // 0x234a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234A74u;
}
