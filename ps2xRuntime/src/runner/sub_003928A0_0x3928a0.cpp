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

// Function: sub_003928A0
// Address: 0x3928a0 - 0x3928ec
void sub_003928A0_0x3928a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003928A0_0x3928a0");
#endif

    switch (ctx->pc) {
        case 0x3928d0u: goto label_3928d0;
        default: break;
    }

    ctx->pc = 0x3928a0u;

    // 0x3928a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3928a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3928a4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3928a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3928a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3928a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3928ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3928acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3928b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3928b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3928b4: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x3928b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x3928b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3928b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3928bc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3928bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3928c0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3928c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3928c4: 0x24460013  addiu       $a2, $v0, 0x13
    ctx->pc = 0x3928c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x3928c8: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3928C8u;
    SET_GPR_U32(ctx, 31, 0x3928D0u);
    ctx->pc = 0x3928CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3928C8u;
    // 0x3928cc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3928C8u, 0x3928D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3928D0u;
label_3928d0:
    // 0x3928d0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3928d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3928d4: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x3928d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x3928d8: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x3928d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3928dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3928dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3928e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3928e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3928e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3928E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3928E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928E4u;
        // 0x3928e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3928E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3928ECu;
}
