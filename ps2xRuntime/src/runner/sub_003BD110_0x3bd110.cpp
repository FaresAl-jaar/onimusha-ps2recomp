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

// Function: sub_003BD110
// Address: 0x3bd110 - 0x3bd180
void sub_003BD110_0x3bd110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD110_0x3bd110");
#endif

    switch (ctx->pc) {
        case 0x3bd144u: goto label_3bd144;
        case 0x3bd14cu: goto label_3bd14c;
        default: break;
    }

    ctx->pc = 0x3bd110u;

    // 0x3bd110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bd110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bd114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bd114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bd118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bd118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bd11c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bd11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd120: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BD120u;
    {
        const bool branch_taken_0x3bd120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD120u;
        // 0x3bd124: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd120) {
            ctx->pc = 0x3BD170u;
            goto label_3bd170;
        }
    }
    ctx->pc = 0x3BD128u;
    // 0x3bd128: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3bd128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3bd12c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3bd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3bd130: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3bd130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3bd134: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3bd134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3bd138: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3bd138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3bd13c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3BD13Cu;
    SET_GPR_U32(ctx, 31, 0x3BD144u);
    ctx->pc = 0x3BD140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD13Cu;
    // 0x3bd140: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3BD13Cu, 0x3BD144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD144u;
label_3bd144:
    // 0x3bd144: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3BD144u;
    SET_GPR_U32(ctx, 31, 0x3BD14Cu);
    ctx->pc = 0x3BD148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD144u;
    // 0x3bd148: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3BD144u, 0x3BD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD14Cu;
label_3bd14c:
    // 0x3bd14c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3bd14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3bd150: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3bd150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bd154: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3bd154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3bd158: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3bd158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3bd15c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3bd15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3bd160: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3bd160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3bd164: 0x2463a5b0  addiu       $v1, $v1, -0x5A50
    ctx->pc = 0x3bd164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944176));
    // 0x3bd168: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3bd168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3bd16c: 0x0  nop
    ctx->pc = 0x3bd16cu;
    // NOP
label_3bd170:
    // 0x3bd170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bd170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bd174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd178: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD178u;
        // 0x3bd17c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD180u;
}
