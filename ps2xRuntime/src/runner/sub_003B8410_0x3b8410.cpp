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

// Function: sub_003B8410
// Address: 0x3b8410 - 0x3b84ac
void sub_003B8410_0x3b8410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8410_0x3b8410");
#endif

    switch (ctx->pc) {
        case 0x3b8444u: goto label_3b8444;
        case 0x3b8468u: goto label_3b8468;
        default: break;
    }

    ctx->pc = 0x3b8410u;

    // 0x3b8410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b8410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b8414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b8414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b8418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b8418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b841c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x3b841cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b8420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b8420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b8424: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x3b8424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b8428: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B8428u;
    {
        const bool branch_taken_0x3b8428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8428u;
        // 0x3b842c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8428) {
            ctx->pc = 0x3B8460u;
            goto label_3b8460;
        }
    }
    ctx->pc = 0x3B8430u;
    // 0x3b8430: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x3b8430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3b8434: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3B8434u;
    {
        const bool branch_taken_0x3b8434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8434) {
            ctx->pc = 0x3B8460u;
            goto label_3b8460;
        }
    }
    ctx->pc = 0x3B843Cu;
    // 0x3b843c: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3B843Cu;
    SET_GPR_U32(ctx, 31, 0x3B8444u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3B843Cu, 0x3B8444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8444u;
label_3b8444:
    // 0x3b8444: 0x2622fffb  addiu       $v0, $s1, -0x5
    ctx->pc = 0x3b8444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
    // 0x3b8448: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x3b8448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b844c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B844Cu;
    {
        const bool branch_taken_0x3b844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B844Cu;
        // 0x3b8450: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b844c) {
            ctx->pc = 0x3B8470u;
            goto label_3b8470;
        }
    }
    ctx->pc = 0x3B8454u;
    // 0x3b8454: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3b8454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b8458: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8458u;
    {
        const bool branch_taken_0x3b8458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8458u;
        // 0x3b845c: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8458) {
            ctx->pc = 0x3B8470u;
            goto label_3b8470;
        }
    }
    ctx->pc = 0x3B8460u;
label_3b8460:
    // 0x3b8460: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3B8460u;
    SET_GPR_U32(ctx, 31, 0x3B8468u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3B8460u, 0x3B8468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8468u;
label_3b8468:
    // 0x3b8468: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x3b8468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b846c: 0x0  nop
    ctx->pc = 0x3b846cu;
    // NOP
label_3b8470:
    // 0x3b8470: 0x92022b4a  lbu         $v0, 0x2B4A($s0)
    ctx->pc = 0x3b8470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11082)));
    // 0x3b8474: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3b8474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3b8478: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3b8478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b847c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B847Cu;
    {
        const bool branch_taken_0x3b847c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B847Cu;
        // 0x3b8480: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b847c) {
            ctx->pc = 0x3B8488u;
            goto label_3b8488;
        }
    }
    ctx->pc = 0x3B8484u;
    // 0x3b8484: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3b8484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b8488:
    // 0x3b8488: 0xa2042b4a  sb          $a0, 0x2B4A($s0)
    ctx->pc = 0x3b8488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11082), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b848c: 0x92022b4a  lbu         $v0, 0x2B4A($s0)
    ctx->pc = 0x3b848cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11082)));
    // 0x3b8490: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b8490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b8494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b8494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b849c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3b849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x3b84a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b84a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b84a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B84A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84A4u;
        // 0x3b84a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B84A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B84ACu;
}
