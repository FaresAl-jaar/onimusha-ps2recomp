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

// Function: sub_0017B9F0
// Address: 0x17b9f0 - 0x17bab8
void sub_0017B9F0_0x17b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B9F0_0x17b9f0");
#endif

    switch (ctx->pc) {
        case 0x17ba74u: goto label_17ba74;
        default: break;
    }

    ctx->pc = 0x17b9f0u;

    // 0x17b9f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b9f4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x17b9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17b9f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17b9fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17ba04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17ba04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17ba08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17ba08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ba10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17ba10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ba14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ba18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17ba18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ba1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ba20: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17ba20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba24: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17BA24u;
    {
        const bool branch_taken_0x17ba24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA24u;
        // 0x17ba28: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba24) {
            ctx->pc = 0x17BA60u;
            goto label_17ba60;
        }
    }
    ctx->pc = 0x17BA2Cu;
    // 0x17ba2c: 0x8f858658  lw          $a1, -0x79A8($gp)
    ctx->pc = 0x17ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936152)));
    // 0x17ba30: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x17ba30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17ba34: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x17BA34u;
    {
        const bool branch_taken_0x17ba34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba34) {
            ctx->pc = 0x17BA78u;
            goto label_17ba78;
        }
    }
    ctx->pc = 0x17BA3Cu;
    // 0x17ba3c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x17ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17ba40: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x17ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x17ba44: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x17ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17ba48: 0x2463df80  addiu       $v1, $v1, -0x2080
    ctx->pc = 0x17ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958976));
    // 0x17ba4c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17ba50: 0xaf828658  sw          $v0, -0x79A8($gp)
    ctx->pc = 0x17ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 2));
    // 0x17ba54: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x17ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17ba58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BA58u;
    {
        const bool branch_taken_0x17ba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA58u;
        // 0x17ba5c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba58) {
            ctx->pc = 0x17BA78u;
            goto label_17ba78;
        }
    }
    ctx->pc = 0x17BA60u;
label_17ba60:
    // 0x17ba60: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x17ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x17ba64: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x17ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x17ba68: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x17ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17ba6c: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x17BA6Cu;
    SET_GPR_U32(ctx, 31, 0x17BA74u);
    ctx->pc = 0x17BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA6Cu;
    // 0x17ba70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x17BA6Cu, 0x17BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA74u;
label_17ba74:
    // 0x17ba74: 0x0  nop
    ctx->pc = 0x17ba74u;
    // NOP
label_17ba78:
    // 0x17ba78: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x17ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x17ba7c: 0xa0520008  sb          $s2, 0x8($v0)
    ctx->pc = 0x17ba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x17ba80: 0xa0510009  sb          $s1, 0x9($v0)
    ctx->pc = 0x17ba80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x17ba84: 0xa050000a  sb          $s0, 0xA($v0)
    ctx->pc = 0x17ba84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 16));
    // 0x17ba88: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17ba8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17ba90: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x17ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x17ba94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17ba94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ba98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ba98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ba9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17ba9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17baa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17baa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17baa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17baa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17baa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17baa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17baac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17baacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAB0u;
        // 0x17bab4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BAB8u;
}
