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

// Function: sub_003B5AB0
// Address: 0x3b5ab0 - 0x3b5b10
void sub_003B5AB0_0x3b5ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5AB0_0x3b5ab0");
#endif

    switch (ctx->pc) {
        case 0x3b5ac4u: goto label_3b5ac4;
        case 0x3b5af8u: goto label_3b5af8;
        default: break;
    }

    ctx->pc = 0x3b5ab0u;

    // 0x3b5ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b5ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b5ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b5ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b5ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b5abc: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x3B5ABCu;
    SET_GPR_U32(ctx, 31, 0x3B5AC4u);
    ctx->pc = 0x3B5AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5ABCu;
    // 0x3b5ac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x3B5ABCu, 0x3B5AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5AC4u;
label_3b5ac4:
    // 0x3b5ac4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3b5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3b5ac8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5acc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x3b5accu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b5ad0: 0x24020166  addiu       $v0, $zero, 0x166
    ctx->pc = 0x3b5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x3b5ad4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3b5ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b5ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b5ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b5adc: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3b5adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b5ae0: 0x240201d0  addiu       $v0, $zero, 0x1D0
    ctx->pc = 0x3b5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x3b5ae4: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x3b5ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b5ae8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5aec: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x3b5aecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b5af0: 0xc095018  jal         func_254060
    ctx->pc = 0x3B5AF0u;
    SET_GPR_U32(ctx, 31, 0x3B5AF8u);
    ctx->pc = 0x3B5AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5AF0u;
    // 0x3b5af4: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x3B5AF0u, 0x3B5AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5AF8u;
label_3b5af8:
    // 0x3b5af8: 0x24430186  addiu       $v1, $v0, 0x186
    ctx->pc = 0x3b5af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 390));
    // 0x3b5afc: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x3b5afcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b5b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b5b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b5b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5b08: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B08u;
        // 0x3b5b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5B10u;
}
