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

// Function: sub_00336FA0
// Address: 0x336fa0 - 0x337030
void sub_00336FA0_0x336fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336FA0_0x336fa0");
#endif

    switch (ctx->pc) {
        case 0x336fdcu: goto label_336fdc;
        case 0x337018u: goto label_337018;
        default: break;
    }

    ctx->pc = 0x336fa0u;

    // 0x336fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x336fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x336fa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x336fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x336fa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336fac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x336fb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x336fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336fb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336fb8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x336fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x336fbc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x336fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336fc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x336fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336fc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x336fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336fc8: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x336fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x336fcc: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x336fccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336fd0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x336fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336fd4: 0xc0bd30c  jal         func_2F4C30
    ctx->pc = 0x336FD4u;
    SET_GPR_U32(ctx, 31, 0x336FDCu);
    ctx->pc = 0x336FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336FD4u;
    // 0x336fd8: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C30u, 0x336FD4u, 0x336FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336FDCu;
label_336fdc:
    // 0x336fdc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x336FDCu;
    {
        const bool branch_taken_0x336fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336fdc) {
            ctx->pc = 0x337008u;
            goto label_337008;
        }
    }
    ctx->pc = 0x336FE4u;
    // 0x336fe4: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x336fe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x336fe8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336fec: 0x64040003  daddiu      $a0, $zero, 0x3
    ctx->pc = 0x336fecu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x336ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336ff4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336ff8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336ffc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336FFCu;
    {
        const bool branch_taken_0x336ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FFCu;
        // 0x337000: 0xa2030008  sb          $v1, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ffc) {
            ctx->pc = 0x337018u;
            goto label_337018;
        }
    }
    ctx->pc = 0x337004u;
    // 0x337004: 0x0  nop
    ctx->pc = 0x337004u;
    // NOP
label_337008:
    // 0x337008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x337008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33700c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33700cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337010: 0xc0cda94  jal         func_336A50
    ctx->pc = 0x337010u;
    SET_GPR_U32(ctx, 31, 0x337018u);
    ctx->pc = 0x337014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337010u;
    // 0x337014: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A50u, 0x337010u, 0x337018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337018u;
label_337018:
    // 0x337018: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x337018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33701c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33701cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337028: 0x3e00008  jr          $ra
    ctx->pc = 0x337028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337028u;
        // 0x33702c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337030u;
}
