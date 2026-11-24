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

// Function: sub_003E9910
// Address: 0x3e9910 - 0x3e9980
void sub_003E9910_0x3e9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9910_0x3e9910");
#endif

    switch (ctx->pc) {
        case 0x3e9944u: goto label_3e9944;
        case 0x3e994cu: goto label_3e994c;
        default: break;
    }

    ctx->pc = 0x3e9910u;

    // 0x3e9910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e9914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e9918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e991c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e991cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9920: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3E9920u;
    {
        const bool branch_taken_0x3e9920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9920u;
        // 0x3e9924: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9920) {
            ctx->pc = 0x3E9970u;
            goto label_3e9970;
        }
    }
    ctx->pc = 0x3E9928u;
    // 0x3e9928: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e9928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e992c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3e992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3e9930: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3e9930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3e9934: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3e9934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3e9938: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3e9938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3e993c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3E993Cu;
    SET_GPR_U32(ctx, 31, 0x3E9944u);
    ctx->pc = 0x3E9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E993Cu;
    // 0x3e9940: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3E993Cu, 0x3E9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9944u;
label_3e9944:
    // 0x3e9944: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3E9944u;
    SET_GPR_U32(ctx, 31, 0x3E994Cu);
    ctx->pc = 0x3E9948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9944u;
    // 0x3e9948: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3E9944u, 0x3E994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E994Cu;
label_3e994c:
    // 0x3e994c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e994cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e9950: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3e9950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e9954: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3e9954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3e9958: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3e9958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3e995c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3e995cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3e9960: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3e9960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e9964: 0x2463b130  addiu       $v1, $v1, -0x4ED0
    ctx->pc = 0x3e9964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947120));
    // 0x3e9968: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3e9968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3e996c: 0x0  nop
    ctx->pc = 0x3e996cu;
    // NOP
label_3e9970:
    // 0x3e9970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e9974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9978: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9978u;
        // 0x3e997c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9980u;
}
