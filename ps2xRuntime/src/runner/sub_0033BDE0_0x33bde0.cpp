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

// Function: sub_0033BDE0
// Address: 0x33bde0 - 0x33be48
void sub_0033BDE0_0x33bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BDE0_0x33bde0");
#endif

    switch (ctx->pc) {
        case 0x33be14u: goto label_33be14;
        default: break;
    }

    ctx->pc = 0x33bde0u;

    // 0x33bde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33bde4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33bde8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33bdec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33bdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdf0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33BDF0u;
    {
        const bool branch_taken_0x33bdf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDF0u;
        // 0x33bdf4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bdf0) {
            ctx->pc = 0x33BE38u;
            goto label_33be38;
        }
    }
    ctx->pc = 0x33BDF8u;
    // 0x33bdf8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33bdfc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x33bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x33be00: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x33be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x33be04: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33be04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33be08: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x33be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x33be0c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x33BE0Cu;
    SET_GPR_U32(ctx, 31, 0x33BE14u);
    ctx->pc = 0x33BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE0Cu;
    // 0x33be10: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x33BE0Cu, 0x33BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE14u;
label_33be14:
    // 0x33be14: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x33be14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33be18: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x33be18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x33be1c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x33be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x33be20: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x33be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x33be24: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33be24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33be28: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x33be28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33be2c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x33be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x33be30: 0x24638930  addiu       $v1, $v1, -0x76D0
    ctx->pc = 0x33be30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936880));
    // 0x33be34: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33be34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_33be38:
    // 0x33be38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33be38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33be3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33be3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33be40: 0x3e00008  jr          $ra
    ctx->pc = 0x33BE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE40u;
        // 0x33be44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BE48u;
}
