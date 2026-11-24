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

// Function: sub_00323410
// Address: 0x323410 - 0x323444
void sub_00323410_0x323410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323410_0x323410");
#endif

    switch (ctx->pc) {
        case 0x323430u: goto label_323430;
        default: break;
    }

    ctx->pc = 0x323410u;

    // 0x323410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32341c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32341cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323420: 0x9084053b  lbu         $a0, 0x53B($a0)
    ctx->pc = 0x323420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1339)));
    // 0x323424: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x323424u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x323428: 0xc0a9ce0  jal         func_2A7380
    ctx->pc = 0x323428u;
    SET_GPR_U32(ctx, 31, 0x323430u);
    ctx->pc = 0x32342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323428u;
    // 0x32342c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7380u, 0x323428u, 0x323430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323430u;
label_323430:
    // 0x323430: 0xae0205c4  sw          $v0, 0x5C4($s0)
    ctx->pc = 0x323430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1476), GPR_U32(ctx, 2));
    // 0x323434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32343c: 0x3e00008  jr          $ra
    ctx->pc = 0x32343Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32343Cu;
        // 0x323440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32343Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323444u;
}
