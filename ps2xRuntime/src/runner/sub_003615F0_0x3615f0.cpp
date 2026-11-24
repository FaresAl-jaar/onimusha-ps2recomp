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

// Function: sub_003615F0
// Address: 0x3615f0 - 0x361660
void sub_003615F0_0x3615f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003615F0_0x3615f0");
#endif

    switch (ctx->pc) {
        case 0x361624u: goto label_361624;
        case 0x36162cu: goto label_36162c;
        default: break;
    }

    ctx->pc = 0x3615f0u;

    // 0x3615f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3615f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3615f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3615f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3615f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3615f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3615fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3615fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361600: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x361600u;
    {
        const bool branch_taken_0x361600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x361604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361600u;
        // 0x361604: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361600) {
            ctx->pc = 0x361650u;
            goto label_361650;
        }
    }
    ctx->pc = 0x361608u;
    // 0x361608: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x361608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36160c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x36160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x361610: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x361610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x361614: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x361614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x361618: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x361618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x36161c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x36161Cu;
    SET_GPR_U32(ctx, 31, 0x361624u);
    ctx->pc = 0x361620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36161Cu;
    // 0x361620: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x36161Cu, 0x361624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361624u;
label_361624:
    // 0x361624: 0xc09d694  jal         func_275A50
    ctx->pc = 0x361624u;
    SET_GPR_U32(ctx, 31, 0x36162Cu);
    ctx->pc = 0x361628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361624u;
    // 0x361628: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x361624u, 0x36162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36162Cu;
label_36162c:
    // 0x36162c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x36162cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x361630: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x361630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361634: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x361634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x361638: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x361638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x36163c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x36163cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x361640: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x361640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x361644: 0x246392f0  addiu       $v1, $v1, -0x6D10
    ctx->pc = 0x361644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939376));
    // 0x361648: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x361648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x36164c: 0x0  nop
    ctx->pc = 0x36164cu;
    // NOP
label_361650:
    // 0x361650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x361650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361658: 0x3e00008  jr          $ra
    ctx->pc = 0x361658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361658u;
        // 0x36165c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361660u;
}
