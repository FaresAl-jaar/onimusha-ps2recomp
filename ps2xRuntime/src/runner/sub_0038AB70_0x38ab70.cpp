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

// Function: sub_0038AB70
// Address: 0x38ab70 - 0x38ac2c
void sub_0038AB70_0x38ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AB70_0x38ab70");
#endif

    switch (ctx->pc) {
        case 0x38aba0u: goto label_38aba0;
        case 0x38abd0u: goto label_38abd0;
        case 0x38abe4u: goto label_38abe4;
        default: break;
    }

    ctx->pc = 0x38ab70u;

    // 0x38ab70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38ab74: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x38ab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x38ab78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38ab7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38ab7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ab80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38ab84: 0x8c258718  lw          $a1, -0x78E8($at)
    ctx->pc = 0x38ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B8718u));
    // 0x38ab88: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x38ab88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x38ab8c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x38AB8Cu;
    {
        const bool branch_taken_0x38ab8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB8Cu;
        // 0x38ab90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ab8c) {
            ctx->pc = 0x38AC18u;
            goto label_38ac18;
        }
    }
    ctx->pc = 0x38AB94u;
    // 0x38ab94: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x38ab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x38ab98: 0x8c268730  lw          $a2, -0x78D0($at)
    ctx->pc = 0x38ab98u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B8730u));
    // 0x38ab9c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x38ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_38aba0:
    // 0x38aba0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x38aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x38aba4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x38aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x38aba8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x38aba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38abac: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x38ABACu;
    {
        const bool branch_taken_0x38abac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x38abac) {
            ctx->pc = 0x38AC08u;
            goto label_38ac08;
        }
    }
    ctx->pc = 0x38ABB4u;
    // 0x38abb4: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x38abb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x38abb8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x38ABB8u;
    {
        const bool branch_taken_0x38abb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38abb8) {
            ctx->pc = 0x38AC08u;
            goto label_38ac08;
        }
    }
    ctx->pc = 0x38ABC0u;
    // 0x38abc0: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x38abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x38abc4: 0x24e60020  addiu       $a2, $a3, 0x20
    ctx->pc = 0x38abc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x38abc8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x38ABC8u;
    SET_GPR_U32(ctx, 31, 0x38ABD0u);
    ctx->pc = 0x38ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABC8u;
    // 0x38abcc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x38ABC8u, 0x38ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABD0u;
label_38abd0:
    // 0x38abd0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x38abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38abd4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x38abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38abd8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38abd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38abdc: 0xc07cd48  jal         func_1F3520
    ctx->pc = 0x38ABDCu;
    SET_GPR_U32(ctx, 31, 0x38ABE4u);
    ctx->pc = 0x38ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABDCu;
    // 0x38abe0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3520u, 0x38ABDCu, 0x38ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABE4u;
label_38abe4:
    // 0x38abe4: 0x3c02481c  lui         $v0, 0x481C
    ctx->pc = 0x38abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18460 << 16));
    // 0x38abe8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x38abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x38abec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38abecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38abf0: 0x0  nop
    ctx->pc = 0x38abf0u;
    // NOP
    // 0x38abf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x38abf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38abf8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x38ABF8u;
    {
        const bool branch_taken_0x38abf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38abf8) {
            ctx->pc = 0x38AC18u;
            goto label_38ac18;
        }
    }
    ctx->pc = 0x38AC00u;
    // 0x38ac00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38AC00u;
    {
        const bool branch_taken_0x38ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC00u;
        // 0x38ac04: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ac00) {
            ctx->pc = 0x38AC18u;
            goto label_38ac18;
        }
    }
    ctx->pc = 0x38AC08u;
label_38ac08:
    // 0x38ac08: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x38ac08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x38ac0c: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x38ac0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x38ac10: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x38AC10u;
    {
        const bool branch_taken_0x38ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ac10) {
            ctx->pc = 0x38ABA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38aba0;
        }
    }
    ctx->pc = 0x38AC18u;
label_38ac18:
    // 0x38ac18: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x38ac18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x38ac1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38ac1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ac20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ac20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ac24: 0x3e00008  jr          $ra
    ctx->pc = 0x38AC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC24u;
        // 0x38ac28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AC2Cu;
}
