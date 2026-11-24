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

// Function: sub_002C89B0
// Address: 0x2c89b0 - 0x2c8a1c
void sub_002C89B0_0x2c89b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C89B0_0x2c89b0");
#endif

    switch (ctx->pc) {
        case 0x2c89d0u: goto label_2c89d0;
        default: break;
    }

    ctx->pc = 0x2c89b0u;

    // 0x2c89b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c89b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c89b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c89b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c89b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c89b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c89bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c89bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89c0: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x2c89c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2c89c4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c89c8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C89C8u;
    SET_GPR_U32(ctx, 31, 0x2C89D0u);
    ctx->pc = 0x2C89CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89C8u;
    // 0x2c89cc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C89C8u, 0x2C89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89D0u;
label_2c89d0:
    // 0x2c89d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C89D0u;
    {
        const bool branch_taken_0x2c89d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c89d0) {
            ctx->pc = 0x2C8A08u;
            goto label_2c8a08;
        }
    }
    ctx->pc = 0x2C89D8u;
    // 0x2c89d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2c89d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c89dc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2c89dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2c89e0: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2c89e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c89e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C89E4u;
    {
        const bool branch_taken_0x2c89e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89E4u;
        // 0x2c89e8: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89e4) {
            ctx->pc = 0x2C89F0u;
            goto label_2c89f0;
        }
    }
    ctx->pc = 0x2C89ECu;
    // 0x2c89ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c89ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c89f0:
    // 0x2c89f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C89F0u;
    {
        const bool branch_taken_0x2c89f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c89f0) {
            ctx->pc = 0x2C8A08u;
            goto label_2c8a08;
        }
    }
    ctx->pc = 0x2C89F8u;
    // 0x2c89f8: 0x904305b3  lbu         $v1, 0x5B3($v0)
    ctx->pc = 0x2c89f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1459)));
    // 0x2c89fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c8a00: 0xa04305b3  sb          $v1, 0x5B3($v0)
    ctx->pc = 0x2c8a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1459), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8a04: 0x0  nop
    ctx->pc = 0x2c8a04u;
    // NOP
label_2c8a08:
    // 0x2c8a08: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2c8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2c8a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8a14: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A14u;
        // 0x2c8a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8A1Cu;
}
