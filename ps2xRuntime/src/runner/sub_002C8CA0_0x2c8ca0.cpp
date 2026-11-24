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

// Function: sub_002C8CA0
// Address: 0x2c8ca0 - 0x2c8d84
void sub_002C8CA0_0x2c8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8CA0_0x2c8ca0");
#endif

    switch (ctx->pc) {
        case 0x2c8cdcu: goto label_2c8cdc;
        case 0x2c8d04u: goto label_2c8d04;
        case 0x2c8d24u: goto label_2c8d24;
        case 0x2c8d38u: goto label_2c8d38;
        default: break;
    }

    ctx->pc = 0x2c8ca0u;

    // 0x2c8ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c8ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c8ca4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8ca8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c8cac: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c8cb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c8cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c8cb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c8cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c8cb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c8cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c8cbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8cc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c8cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c8cc4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c8cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c8cc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8ccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8cd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8cd4: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C8CD4u;
    SET_GPR_U32(ctx, 31, 0x2C8CDCu);
    ctx->pc = 0x2C8CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8CD4u;
    // 0x2c8cd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C8CD4u, 0x2C8CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CDCu;
label_2c8cdc:
    // 0x2c8cdc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c8cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c8ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ce4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c8ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c8ce8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8cec: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c8cf0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c8cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c8cf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8cfc: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C8CFCu;
    SET_GPR_U32(ctx, 31, 0x2C8D04u);
    ctx->pc = 0x2C8D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8CFCu;
    // 0x2c8d00: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C8CFCu, 0x2C8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D04u;
label_2c8d04:
    // 0x2c8d04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c8d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d08: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C8D08u;
    {
        const bool branch_taken_0x2c8d08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d08) {
            ctx->pc = 0x2C8D60u;
            goto label_2c8d60;
        }
    }
    ctx->pc = 0x2C8D10u;
    // 0x2c8d10: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C8D10u;
    {
        const bool branch_taken_0x2c8d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D10u;
        // 0x2c8d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d10) {
            ctx->pc = 0x2C8D60u;
            goto label_2c8d60;
        }
    }
    ctx->pc = 0x2C8D18u;
    // 0x2c8d18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d1c: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2C8D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D24u);
    ctx->pc = 0x2C8D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D1Cu;
    // 0x2c8d20: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2C8D1Cu, 0x2C8D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D24u;
label_2c8d24:
    // 0x2c8d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c8d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c8d2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c8d30: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2C8D30u;
    SET_GPR_U32(ctx, 31, 0x2C8D38u);
    ctx->pc = 0x2C8D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8D30u;
    // 0x2c8d34: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2C8D30u, 0x2C8D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D38u;
label_2c8d38:
    // 0x2c8d38: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c8d38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8d3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8D3Cu;
    {
        const bool branch_taken_0x2c8d3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8d3c) {
            ctx->pc = 0x2C8D4Cu;
            goto label_2c8d4c;
        }
    }
    ctx->pc = 0x2C8D44u;
    // 0x2c8d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8D44u;
    {
        const bool branch_taken_0x2c8d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D44u;
        // 0x2c8d48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d44) {
            ctx->pc = 0x2C8D54u;
            goto label_2c8d54;
        }
    }
    ctx->pc = 0x2C8D4Cu;
label_2c8d4c:
    // 0x2c8d4c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2c8d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d54:
    // 0x2c8d54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8D54u;
    {
        const bool branch_taken_0x2c8d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d54) {
            ctx->pc = 0x2C8D68u;
            goto label_2c8d68;
        }
    }
    ctx->pc = 0x2C8D5Cu;
    // 0x2c8d5c: 0x0  nop
    ctx->pc = 0x2c8d5cu;
    // NOP
label_2c8d60:
    // 0x2c8d60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d64: 0x0  nop
    ctx->pc = 0x2c8d64u;
    // NOP
label_2c8d68:
    // 0x2c8d68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c8d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8d6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c8d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8d70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c8d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c8d74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c8d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8d78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c8d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D7Cu;
        // 0x2c8d80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8D84u;
}
