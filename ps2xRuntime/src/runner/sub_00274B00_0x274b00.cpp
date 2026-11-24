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

// Function: sub_00274B00
// Address: 0x274b00 - 0x274b60
void sub_00274B00_0x274b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274B00_0x274b00");
#endif

    switch (ctx->pc) {
        case 0x274b14u: goto label_274b14;
        case 0x274b20u: goto label_274b20;
        default: break;
    }

    ctx->pc = 0x274b00u;

    // 0x274b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274b0c: 0xc09d230  jal         func_2748C0
    ctx->pc = 0x274B0Cu;
    SET_GPR_U32(ctx, 31, 0x274B14u);
    ctx->pc = 0x274B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B0Cu;
    // 0x274b10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2748C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748C0u, 0x274B0Cu, 0x274B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B14u;
label_274b14:
    // 0x274b14: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x274b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x274b18: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x274b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x274b1c: 0x0  nop
    ctx->pc = 0x274b1cu;
    // NOP
label_274b20:
    // 0x274b20: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x274b20u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x274b24: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x274b24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x274b28: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x274b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x274b2c: 0x0  nop
    ctx->pc = 0x274b2cu;
    // NOP
    // 0x274b30: 0x0  nop
    ctx->pc = 0x274b30u;
    // NOP
    // 0x274b34: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x274B34u;
    {
        const bool branch_taken_0x274b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x274b34) {
            ctx->pc = 0x274B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274b20;
        }
    }
    ctx->pc = 0x274B3Cu;
    // 0x274b3c: 0xfe000038  sd          $zero, 0x38($s0)
    ctx->pc = 0x274b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 0));
    // 0x274b40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x274b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b44: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x274b44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x274b48: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x274b48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x274b4c: 0xfe000040  sd          $zero, 0x40($s0)
    ctx->pc = 0x274b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 0));
    // 0x274b50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274b58: 0x3e00008  jr          $ra
    ctx->pc = 0x274B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B58u;
        // 0x274b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274B60u;
}
