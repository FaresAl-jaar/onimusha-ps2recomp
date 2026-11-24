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

// Function: sub_00386C50
// Address: 0x386c50 - 0x386d10
void sub_00386C50_0x386c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386C50_0x386c50");
#endif

    switch (ctx->pc) {
        case 0x386cb4u: goto label_386cb4;
        case 0x386cc8u: goto label_386cc8;
        case 0x386ce4u: goto label_386ce4;
        default: break;
    }

    ctx->pc = 0x386c50u;

    // 0x386c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x386c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x386c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x386c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x386c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x386c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x386c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x386c60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x386c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x386c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x386c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c68: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x386c68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x386c6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x386C6Cu;
    {
        const bool branch_taken_0x386c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C6Cu;
        // 0x386c70: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c6c) {
            ctx->pc = 0x386C78u;
            goto label_386c78;
        }
    }
    ctx->pc = 0x386C74u;
    // 0x386c74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x386c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386c78:
    // 0x386c78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x386c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x386c7c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x386c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x386c80: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x386c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x386c84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x386c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x386c88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x386C88u;
    {
        const bool branch_taken_0x386c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386c88) {
            ctx->pc = 0x386C98u;
            goto label_386c98;
        }
    }
    ctx->pc = 0x386C90u;
    // 0x386c90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x386c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c94: 0x0  nop
    ctx->pc = 0x386c94u;
    // NOP
label_386c98:
    // 0x386c98: 0x8f8286e4  lw          $v0, -0x791C($gp)
    ctx->pc = 0x386c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936292)));
    // 0x386c9c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x386C9Cu;
    {
        const bool branch_taken_0x386c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386c9c) {
            ctx->pc = 0x386CA8u;
            goto label_386ca8;
        }
    }
    ctx->pc = 0x386CA4u;
    // 0x386ca4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x386ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386ca8:
    // 0x386ca8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x386ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x386cac: 0xc095150  jal         func_254540
    ctx->pc = 0x386CACu;
    SET_GPR_U32(ctx, 31, 0x386CB4u);
    ctx->pc = 0x386CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386CACu;
    // 0x386cb0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x386CACu, 0x386CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386CB4u;
label_386cb4:
    // 0x386cb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x386CB4u;
    {
        const bool branch_taken_0x386cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CB4u;
        // 0x386cb8: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386cb4) {
            ctx->pc = 0x386CC0u;
            goto label_386cc0;
        }
    }
    ctx->pc = 0x386CBCu;
    // 0x386cbc: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x386cbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_386cc0:
    // 0x386cc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x386cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386cc4: 0x0  nop
    ctx->pc = 0x386cc4u;
    // NOP
label_386cc8:
    // 0x386cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x386cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386ccc: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x386cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x386cd0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x386cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x386cd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x386CD4u;
    {
        const bool branch_taken_0x386cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CD4u;
        // 0x386cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386cd4) {
            ctx->pc = 0x386CE8u;
            goto label_386ce8;
        }
    }
    ctx->pc = 0x386CDCu;
    // 0x386cdc: 0xc0e1b44  jal         func_386D10
    ctx->pc = 0x386CDCu;
    SET_GPR_U32(ctx, 31, 0x386CE4u);
    ctx->pc = 0x386CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386CDCu;
    // 0x386ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386D10u, 0x386CDCu, 0x386CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386CE4u;
label_386ce4:
    // 0x386ce4: 0x0  nop
    ctx->pc = 0x386ce4u;
    // NOP
label_386ce8:
    // 0x386ce8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x386ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x386cec: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x386cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x386cf0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x386CF0u;
    {
        const bool branch_taken_0x386cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x386cf0) {
            ctx->pc = 0x386CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386cc8;
        }
    }
    ctx->pc = 0x386CF8u;
    // 0x386cf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x386cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386cfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x386cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x386d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x386d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386d08: 0x3e00008  jr          $ra
    ctx->pc = 0x386D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D08u;
        // 0x386d0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386D10u;
}
