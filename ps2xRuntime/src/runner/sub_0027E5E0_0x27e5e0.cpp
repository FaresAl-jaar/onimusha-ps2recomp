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

// Function: sub_0027E5E0
// Address: 0x27e5e0 - 0x27e658
void sub_0027E5E0_0x27e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E5E0_0x27e5e0");
#endif

    switch (ctx->pc) {
        case 0x27e608u: goto label_27e608;
        case 0x27e61cu: goto label_27e61c;
        case 0x27e630u: goto label_27e630;
        default: break;
    }

    ctx->pc = 0x27e5e0u;

    // 0x27e5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27e5e4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x27e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x27e5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e5ec: 0x24840950  addiu       $a0, $a0, 0x950
    ctx->pc = 0x27e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
    // 0x27e5f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e5f4: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x27e5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x27e5f8: 0xa7808920  sh          $zero, -0x76E0($gp)
    ctx->pc = 0x27e5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936864), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e5fc: 0xa7808924  sh          $zero, -0x76DC($gp)
    ctx->pc = 0x27e5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936868), (uint16_t)GPR_U32(ctx, 0));
    // 0x27e600: 0xc049590  jal         func_125640
    ctx->pc = 0x27E600u;
    SET_GPR_U32(ctx, 31, 0x27E608u);
    ctx->pc = 0x27E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E600u;
    // 0x27e604: 0xa7808928  sh          $zero, -0x76D8($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936872), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x27E600u, 0x27E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E608u;
label_27e608:
    // 0x27e608: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x27e608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x27e60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e610: 0x248431a0  addiu       $a0, $a0, 0x31A0
    ctx->pc = 0x27e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12704));
    // 0x27e614: 0xc049590  jal         func_125640
    ctx->pc = 0x27E614u;
    SET_GPR_U32(ctx, 31, 0x27E61Cu);
    ctx->pc = 0x27E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E614u;
    // 0x27e618: 0x24062800  addiu       $a2, $zero, 0x2800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x27E614u, 0x27E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E61Cu;
label_27e61c:
    // 0x27e61c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x27e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x27e620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e624: 0x248459f0  addiu       $a0, $a0, 0x59F0
    ctx->pc = 0x27e624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23024));
    // 0x27e628: 0xc049590  jal         func_125640
    ctx->pc = 0x27E628u;
    SET_GPR_U32(ctx, 31, 0x27E630u);
    ctx->pc = 0x27E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E628u;
    // 0x27e62c: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x27E628u, 0x27E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E630u;
label_27e630:
    // 0x27e630: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x27e630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27e634: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x27e634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x27e638: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x27e638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x27e63c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27e63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27e640: 0xfc233150  sd          $v1, 0x3150($at)
    ctx->pc = 0x27e640u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 12624), GPR_U64(ctx, 3));
    // 0x27e644: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x27e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x27e648: 0xfc2359a0  sd          $v1, 0x59A0($at)
    ctx->pc = 0x27e648u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8C59A0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x8C59A0u, _value); } while (0);
    // 0x27e64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e650: 0x3e00008  jr          $ra
    ctx->pc = 0x27E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E650u;
        // 0x27e654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E658u;
}
