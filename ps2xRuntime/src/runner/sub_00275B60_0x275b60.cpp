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

// Function: sub_00275B60
// Address: 0x275b60 - 0x275bf8
void sub_00275B60_0x275b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275B60_0x275b60");
#endif

    switch (ctx->pc) {
        case 0x275ba4u: goto label_275ba4;
        case 0x275bc4u: goto label_275bc4;
        case 0x275bd4u: goto label_275bd4;
        case 0x275bdcu: goto label_275bdc;
        default: break;
    }

    ctx->pc = 0x275b60u;

    // 0x275b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x275b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x275b64: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x275b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x275b68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x275b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x275b6c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x275b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x275b70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x275b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x275b74: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x275b74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x275b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275b7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x275b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275b80: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x275b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x275b84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275b88: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x275b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275b8c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x275b8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275b90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275b94: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x275B94u;
    {
        const bool branch_taken_0x275b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B94u;
        // 0x275b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b94) {
            ctx->pc = 0x275BC8u;
            goto label_275bc8;
        }
    }
    ctx->pc = 0x275B9Cu;
    // 0x275b9c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x275B9Cu;
    SET_GPR_U32(ctx, 31, 0x275BA4u);
    ctx->pc = 0x275BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B9Cu;
    // 0x275ba0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x275B9Cu, 0x275BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BA4u;
label_275ba4:
    // 0x275ba4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x275ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x275ba8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x275ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275bac: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x275BACu;
    {
        const bool branch_taken_0x275bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x275bac) {
            ctx->pc = 0x275BE0u;
            goto label_275be0;
        }
    }
    ctx->pc = 0x275BB4u;
    // 0x275bb4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x275bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x275bb8: 0x92070018  lbu         $a3, 0x18($s0)
    ctx->pc = 0x275bb8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x275bbc: 0xc09d5d4  jal         func_275750
    ctx->pc = 0x275BBCu;
    SET_GPR_U32(ctx, 31, 0x275BC4u);
    ctx->pc = 0x275BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275BBCu;
    // 0x275bc0: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275750u, 0x275BBCu, 0x275BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BC4u;
label_275bc4:
    // 0x275bc4: 0x0  nop
    ctx->pc = 0x275bc4u;
    // NOP
label_275bc8:
    // 0x275bc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x275bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x275bcc: 0xc09d628  jal         func_2758A0
    ctx->pc = 0x275BCCu;
    SET_GPR_U32(ctx, 31, 0x275BD4u);
    ctx->pc = 0x275BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275BCCu;
    // 0x275bd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2758A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2758A0u, 0x275BCCu, 0x275BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BD4u;
label_275bd4:
    // 0x275bd4: 0xc09d654  jal         func_275950
    ctx->pc = 0x275BD4u;
    SET_GPR_U32(ctx, 31, 0x275BDCu);
    ctx->pc = 0x275BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275BD4u;
    // 0x275bd8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275950u, 0x275BD4u, 0x275BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BDCu;
label_275bdc:
    // 0x275bdc: 0x0  nop
    ctx->pc = 0x275bdcu;
    // NOP
label_275be0:
    // 0x275be0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x275be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275be4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x275be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x275BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BF0u;
        // 0x275bf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275BF8u;
}
