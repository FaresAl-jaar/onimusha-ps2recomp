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

// Function: sub_0024E9E8
// Address: 0x24e9e8 - 0x24ea78
void sub_0024E9E8_0x24e9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E9E8_0x24e9e8");
#endif

    switch (ctx->pc) {
        case 0x24ea64u: goto label_24ea64;
        default: break;
    }

    ctx->pc = 0x24e9e8u;

    // 0x24e9e8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e9ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24e9ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24e9f0: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e9f4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x24e9f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e9fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24e9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24ea00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24ea00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24ea04: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EA04u;
    {
        const bool branch_taken_0x24ea04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA04u;
        // 0x24ea08: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea04) {
            ctx->pc = 0x24EA1Cu;
            goto label_24ea1c;
        }
    }
    ctx->pc = 0x24EA0Cu;
    // 0x24ea0c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24ea10: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24ea14: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x24EA14u;
    {
        const bool branch_taken_0x24ea14 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA14u;
        // 0x24ea18: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea14) {
            ctx->pc = 0x24EA6Cu;
            goto label_24ea6c;
        }
    }
    ctx->pc = 0x24EA1Cu;
label_24ea1c:
    // 0x24ea1c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24EA1Cu;
    {
        const bool branch_taken_0x24ea1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA1Cu;
        // 0x24ea20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea1c) {
            ctx->pc = 0x24EA6Cu;
            goto label_24ea6c;
        }
    }
    ctx->pc = 0x24EA24u;
    // 0x24ea24: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24ea28: 0x8c437504  lw          $v1, 0x7504($v0)
    ctx->pc = 0x24ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D7504u));
    // 0x24ea2c: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x24EA2Cu;
    {
        const bool branch_taken_0x24ea2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x24EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA2Cu;
        // 0x24ea30: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea2c) {
            ctx->pc = 0x24EA6Cu;
            goto label_24ea6c;
        }
    }
    ctx->pc = 0x24EA34u;
    // 0x24ea34: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x24ea34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x24ea38: 0x26107510  addiu       $s0, $s0, 0x7510
    ctx->pc = 0x24ea38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29968));
    // 0x24ea3c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24ea3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24ea40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24ea44: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24EA44u;
    {
        const bool branch_taken_0x24ea44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x24EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA44u;
        // 0x24ea48: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea44) {
            ctx->pc = 0x24EA68u;
            goto label_24ea68;
        }
    }
    ctx->pc = 0x24EA4Cu;
    // 0x24ea4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24ea4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ea54: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x24ea54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x24ea58: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x24ea58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ea5c: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24EA5Cu;
    SET_GPR_U32(ctx, 31, 0x24EA64u);
    ctx->pc = 0x24EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EA5Cu;
    // 0x24ea60: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24EA5Cu, 0x24EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA64u;
label_24ea64:
    // 0x24ea64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24ea64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24ea68:
    // 0x24ea68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24ea68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24ea6c:
    // 0x24ea6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24ea6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24ea70: 0x3e00008  jr          $ra
    ctx->pc = 0x24EA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA70u;
        // 0x24ea74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EA78u;
}
