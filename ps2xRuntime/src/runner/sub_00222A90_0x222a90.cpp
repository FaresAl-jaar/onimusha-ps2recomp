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

// Function: sub_00222A90
// Address: 0x222a90 - 0x222af0
void sub_00222A90_0x222a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222A90_0x222a90");
#endif

    switch (ctx->pc) {
        case 0x222ad4u: goto label_222ad4;
        default: break;
    }

    ctx->pc = 0x222a90u;

    // 0x222a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x222a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x222aa0: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x222aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x222aa4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x222aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x222aa8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x222aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x222aac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x222AACu;
    {
        const bool branch_taken_0x222aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222aac) {
            ctx->pc = 0x222AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222AACu;
            // 0x222ab0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x222AB4u;
            goto label_222ab4;
        }
    }
    ctx->pc = 0x222AB4u;
label_222ab4:
    // 0x222ab4: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x222ab4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x222ab8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x222abc: 0x1010  mfhi        $v0
    ctx->pc = 0x222abcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x222ac0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x222ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x222ac4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x222ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x222ac8: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x222ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x222acc: 0xc088ad4  jal         func_222B50
    ctx->pc = 0x222ACCu;
    SET_GPR_U32(ctx, 31, 0x222AD4u);
    ctx->pc = 0x222AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222ACCu;
    // 0x222ad0: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B50u, 0x222ACCu, 0x222AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AD4u;
label_222ad4:
    // 0x222ad4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x222ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x222ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222adc: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x222adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
    // 0x222ae0: 0xae0301a4  sw          $v1, 0x1A4($s0)
    ctx->pc = 0x222ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 3));
    // 0x222ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x222AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AE8u;
        // 0x222aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222AF0u;
}
