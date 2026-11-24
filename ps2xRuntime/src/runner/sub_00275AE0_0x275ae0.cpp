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

// Function: sub_00275AE0
// Address: 0x275ae0 - 0x275b48
void sub_00275AE0_0x275ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275AE0_0x275ae0");
#endif

    switch (ctx->pc) {
        case 0x275b30u: goto label_275b30;
        default: break;
    }

    ctx->pc = 0x275ae0u;

    // 0x275ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275aec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x275aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x275af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275af4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x275af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x275af8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x275af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x275afc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x275afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x275b00: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x275B00u;
    {
        const bool branch_taken_0x275b00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B00u;
        // 0x275b04: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b00) {
            ctx->pc = 0x275B10u;
            goto label_275b10;
        }
    }
    ctx->pc = 0x275B08u;
    // 0x275b08: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x275b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x275b0c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x275b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_275b10:
    // 0x275b10: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x275b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x275b14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x275b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x275b18: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x275B18u;
    {
        const bool branch_taken_0x275b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B18u;
        // 0x275b1c: 0xa2030018  sb          $v1, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b18) {
            ctx->pc = 0x275B38u;
            goto label_275b38;
        }
    }
    ctx->pc = 0x275B20u;
    // 0x275b20: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x275b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x275b24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x275b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b28: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x275B28u;
    SET_GPR_U32(ctx, 31, 0x275B30u);
    ctx->pc = 0x275B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B28u;
    // 0x275b2c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x275B28u, 0x275B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B30u;
label_275b30:
    // 0x275b30: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x275b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x275b34: 0x0  nop
    ctx->pc = 0x275b34u;
    // NOP
label_275b38:
    // 0x275b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275b40: 0x3e00008  jr          $ra
    ctx->pc = 0x275B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B40u;
        // 0x275b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275B48u;
}
