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

// Function: sub_00323930
// Address: 0x323930 - 0x323998
void sub_00323930_0x323930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323930_0x323930");
#endif

    switch (ctx->pc) {
        case 0x323964u: goto label_323964;
        default: break;
    }

    ctx->pc = 0x323930u;

    // 0x323930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32393c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323940: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x323940u;
    {
        const bool branch_taken_0x323940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x323944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323940u;
        // 0x323944: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323940) {
            ctx->pc = 0x323988u;
            goto label_323988;
        }
    }
    ctx->pc = 0x323948u;
    // 0x323948: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x323948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32394c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x32394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x323950: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x323950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x323954: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x323954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x323958: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x323958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x32395c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x32395Cu;
    SET_GPR_U32(ctx, 31, 0x323964u);
    ctx->pc = 0x323960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32395Cu;
    // 0x323960: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x32395Cu, 0x323964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323964u;
label_323964:
    // 0x323964: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x323964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x323968: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x323968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x32396c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x32396cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x323970: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x323970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x323974: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x323974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x323978: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x323978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x32397c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x32397cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x323980: 0x24638640  addiu       $v1, $v1, -0x79C0
    ctx->pc = 0x323980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936128));
    // 0x323984: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x323984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_323988:
    // 0x323988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32398c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32398cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323990: 0x3e00008  jr          $ra
    ctx->pc = 0x323990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323990u;
        // 0x323994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323998u;
}
