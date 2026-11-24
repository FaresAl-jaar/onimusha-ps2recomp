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

// Function: sub_0017BAC0
// Address: 0x17bac0 - 0x17bb88
void sub_0017BAC0_0x17bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BAC0_0x17bac0");
#endif

    switch (ctx->pc) {
        case 0x17bb44u: goto label_17bb44;
        default: break;
    }

    ctx->pc = 0x17bac0u;

    // 0x17bac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17bac4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x17bac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17bac8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17bac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17bacc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17baccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bad0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17bad4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17bad8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17bad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17badc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17bae0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17bae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17bae8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17bae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17baec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17baecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17baf0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17baf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17baf4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17BAF4u;
    {
        const bool branch_taken_0x17baf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAF4u;
        // 0x17baf8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17baf4) {
            ctx->pc = 0x17BB30u;
            goto label_17bb30;
        }
    }
    ctx->pc = 0x17BAFCu;
    // 0x17bafc: 0x8f858658  lw          $a1, -0x79A8($gp)
    ctx->pc = 0x17bafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936152)));
    // 0x17bb00: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x17bb00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17bb04: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x17BB04u;
    {
        const bool branch_taken_0x17bb04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb04) {
            ctx->pc = 0x17BB48u;
            goto label_17bb48;
        }
    }
    ctx->pc = 0x17BB0Cu;
    // 0x17bb0c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x17bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17bb10: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x17bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x17bb14: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x17bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17bb18: 0x2463df80  addiu       $v1, $v1, -0x2080
    ctx->pc = 0x17bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958976));
    // 0x17bb1c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17bb20: 0xaf828658  sw          $v0, -0x79A8($gp)
    ctx->pc = 0x17bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 2));
    // 0x17bb24: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x17bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17bb28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BB28u;
    {
        const bool branch_taken_0x17bb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB28u;
        // 0x17bb2c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb28) {
            ctx->pc = 0x17BB48u;
            goto label_17bb48;
        }
    }
    ctx->pc = 0x17BB30u;
label_17bb30:
    // 0x17bb30: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x17bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x17bb34: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x17bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x17bb38: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x17bb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17bb3c: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x17BB3Cu;
    SET_GPR_U32(ctx, 31, 0x17BB44u);
    ctx->pc = 0x17BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB3Cu;
    // 0x17bb40: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x17BB3Cu, 0x17BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB44u;
label_17bb44:
    // 0x17bb44: 0x0  nop
    ctx->pc = 0x17bb44u;
    // NOP
label_17bb48:
    // 0x17bb48: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x17bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x17bb4c: 0xa0520008  sb          $s2, 0x8($v0)
    ctx->pc = 0x17bb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x17bb50: 0xa0510009  sb          $s1, 0x9($v0)
    ctx->pc = 0x17bb50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x17bb54: 0xa050000a  sb          $s0, 0xA($v0)
    ctx->pc = 0x17bb54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 16));
    // 0x17bb58: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x17bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17bb5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17bb60: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x17bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x17bb64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17bb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17bb68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17bb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17bb6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17bb70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17bb70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bb74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17bb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bb78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17bb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bb80: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB80u;
        // 0x17bb84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB88u;
}
