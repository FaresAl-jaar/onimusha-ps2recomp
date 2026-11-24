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

// Function: sub_00367CB0
// Address: 0x367cb0 - 0x367d30
void sub_00367CB0_0x367cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367CB0_0x367cb0");
#endif

    switch (ctx->pc) {
        case 0x367cf0u: goto label_367cf0;
        case 0x367d08u: goto label_367d08;
        case 0x367d18u: goto label_367d18;
        default: break;
    }

    ctx->pc = 0x367cb0u;

    // 0x367cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x367cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x367cb4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x367cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x367cb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x367cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x367cbc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x367cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x367cc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x367cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x367cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x367cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x367cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x367ccc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x367cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x367cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x367cd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x367cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x367cd8: 0x944601c4  lhu         $a2, 0x1C4($v0)
    ctx->pc = 0x367cd8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x367cdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x367cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ce0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x367ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ce4: 0x2650011c  addiu       $s0, $s2, 0x11C
    ctx->pc = 0x367ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x367ce8: 0xc0d9f04  jal         func_367C10
    ctx->pc = 0x367CE8u;
    SET_GPR_U32(ctx, 31, 0x367CF0u);
    ctx->pc = 0x367CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367CE8u;
    // 0x367cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367C10u, 0x367CE8u, 0x367CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CF0u;
label_367cf0:
    // 0x367cf0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x367cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x367cf4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x367cf8: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x367cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x367cfc: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x367cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x367d00: 0xc0bce54  jal         func_2F3950
    ctx->pc = 0x367D00u;
    SET_GPR_U32(ctx, 31, 0x367D08u);
    ctx->pc = 0x367D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D00u;
    // 0x367d04: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3950u, 0x367D00u, 0x367D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D08u;
label_367d08:
    // 0x367d08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d0c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x367d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x367d10: 0xc0d9f04  jal         func_367C10
    ctx->pc = 0x367D10u;
    SET_GPR_U32(ctx, 31, 0x367D18u);
    ctx->pc = 0x367D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D10u;
    // 0x367d14: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367C10u, 0x367D10u, 0x367D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D18u;
label_367d18:
    // 0x367d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x367d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x367d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367d28: 0x3e00008  jr          $ra
    ctx->pc = 0x367D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D28u;
        // 0x367d2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367D30u;
}
