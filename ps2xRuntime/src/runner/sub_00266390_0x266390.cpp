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

// Function: sub_00266390
// Address: 0x266390 - 0x2663ec
void sub_00266390_0x266390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266390_0x266390");
#endif

    switch (ctx->pc) {
        case 0x2663a4u: goto label_2663a4;
        default: break;
    }

    ctx->pc = 0x266390u;

    // 0x266390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26639c: 0xc0998d8  jal         func_266360
    ctx->pc = 0x26639Cu;
    SET_GPR_U32(ctx, 31, 0x2663A4u);
    ctx->pc = 0x2663A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26639Cu;
    // 0x2663a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266360u, 0x26639Cu, 0x2663A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663A4u;
label_2663a4:
    // 0x2663a4: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x2663a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x2663a8: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2663a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2663ac: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x2663acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
    // 0x2663b0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2663b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2663b4: 0x8c23f804  lw          $v1, -0x7FC($at)
    ctx->pc = 0x2663b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8BF804u));
    // 0x2663b8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2663b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2663bc: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2663bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2663c0: 0x8c23f804  lw          $v1, -0x7FC($at)
    ctx->pc = 0x2663c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8BF804u));
    // 0x2663c4: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x2663c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
    // 0x2663c8: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2663c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2663cc: 0x97838868  lhu         $v1, -0x7798($gp)
    ctx->pc = 0x2663ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936680)));
    // 0x2663d0: 0xac30f804  sw          $s0, -0x7FC($at)
    ctx->pc = 0x2663d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x8BF804u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF804u, _value); } while (0);
    // 0x2663d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2663d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2663d8: 0xa7838868  sh          $v1, -0x7798($gp)
    ctx->pc = 0x2663d8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936680), (uint16_t)GPR_U32(ctx, 3));
    // 0x2663dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2663dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2663e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2663e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2663e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2663E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2663E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663E4u;
        // 0x2663e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2663E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2663ECu;
}
