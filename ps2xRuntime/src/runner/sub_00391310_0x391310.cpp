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

// Function: sub_00391310
// Address: 0x391310 - 0x391380
void sub_00391310_0x391310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391310_0x391310");
#endif

    switch (ctx->pc) {
        case 0x391344u: goto label_391344;
        case 0x39134cu: goto label_39134c;
        default: break;
    }

    ctx->pc = 0x391310u;

    // 0x391310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x391310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x391314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x391314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x391318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x391318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39131c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39131cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391320: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x391320u;
    {
        const bool branch_taken_0x391320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x391324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391320u;
        // 0x391324: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391320) {
            ctx->pc = 0x391370u;
            goto label_391370;
        }
    }
    ctx->pc = 0x391328u;
    // 0x391328: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x391328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39132c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x39132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x391330: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x391330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x391334: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x391334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x391338: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x391338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x39133c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x39133Cu;
    SET_GPR_U32(ctx, 31, 0x391344u);
    ctx->pc = 0x391340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39133Cu;
    // 0x391340: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x39133Cu, 0x391344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391344u;
label_391344:
    // 0x391344: 0xc09d694  jal         func_275A50
    ctx->pc = 0x391344u;
    SET_GPR_U32(ctx, 31, 0x39134Cu);
    ctx->pc = 0x391348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391344u;
    // 0x391348: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x391344u, 0x39134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39134Cu;
label_39134c:
    // 0x39134c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x39134cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x391350: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x391350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x391354: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x391354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x391358: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x391358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x39135c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x39135cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x391360: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x391360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x391364: 0x24639d30  addiu       $v1, $v1, -0x62D0
    ctx->pc = 0x391364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942000));
    // 0x391368: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x391368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x39136c: 0x0  nop
    ctx->pc = 0x39136cu;
    // NOP
label_391370:
    // 0x391370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x391370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x391374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391378: 0x3e00008  jr          $ra
    ctx->pc = 0x391378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391378u;
        // 0x39137c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391380u;
}
