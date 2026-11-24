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

// Function: sub_00341B70
// Address: 0x341b70 - 0x341c48
void sub_00341B70_0x341b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341B70_0x341b70");
#endif

    switch (ctx->pc) {
        case 0x341bd0u: goto label_341bd0;
        case 0x341be0u: goto label_341be0;
        case 0x341bf0u: goto label_341bf0;
        case 0x341c00u: goto label_341c00;
        case 0x341c24u: goto label_341c24;
        default: break;
    }

    ctx->pc = 0x341b70u;

    // 0x341b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x341b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x341b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x341b7c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x341b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x341b80: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x341B80u;
    {
        const bool branch_taken_0x341b80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x341B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B80u;
        // 0x341b84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b80) {
            ctx->pc = 0x341B90u;
            goto label_341b90;
        }
    }
    ctx->pc = 0x341B88u;
    // 0x341b88: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x341B88u;
    {
        const bool branch_taken_0x341b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B88u;
        // 0x341b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b88) {
            ctx->pc = 0x341C38u;
            goto label_341c38;
        }
    }
    ctx->pc = 0x341B90u;
label_341b90:
    // 0x341b90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x341b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x341b94: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x341B94u;
    {
        const bool branch_taken_0x341b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x341B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B94u;
        // 0x341b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b94) {
            ctx->pc = 0x341BF8u;
            goto label_341bf8;
        }
    }
    ctx->pc = 0x341B9Cu;
    // 0x341b9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x341b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x341ba0: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x341BA0u;
    {
        const bool branch_taken_0x341ba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x341BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BA0u;
        // 0x341ba4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ba0) {
            ctx->pc = 0x341BE8u;
            goto label_341be8;
        }
    }
    ctx->pc = 0x341BA8u;
    // 0x341ba8: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x341BA8u;
    {
        const bool branch_taken_0x341ba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x341ba8) {
            ctx->pc = 0x341BD8u;
            goto label_341bd8;
        }
    }
    ctx->pc = 0x341BB0u;
    // 0x341bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x341bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341bb4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x341BB4u;
    {
        const bool branch_taken_0x341bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x341bb4) {
            ctx->pc = 0x341BC8u;
            goto label_341bc8;
        }
    }
    ctx->pc = 0x341BBCu;
    // 0x341bbc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x341BBCu;
    {
        const bool branch_taken_0x341bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341bbc) {
            ctx->pc = 0x341C00u;
            goto label_341c00;
        }
    }
    ctx->pc = 0x341BC4u;
    // 0x341bc4: 0x0  nop
    ctx->pc = 0x341bc4u;
    // NOP
label_341bc8:
    // 0x341bc8: 0xc0d0910  jal         func_342440
    ctx->pc = 0x341BC8u;
    SET_GPR_U32(ctx, 31, 0x341BD0u);
    ctx->pc = 0x342440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342440u, 0x341BC8u, 0x341BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BD0u;
label_341bd0:
    // 0x341bd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x341BD0u;
    {
        const bool branch_taken_0x341bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341bd0) {
            ctx->pc = 0x341C00u;
            goto label_341c00;
        }
    }
    ctx->pc = 0x341BD8u;
label_341bd8:
    // 0x341bd8: 0xc0d09d4  jal         func_342750
    ctx->pc = 0x341BD8u;
    SET_GPR_U32(ctx, 31, 0x341BE0u);
    ctx->pc = 0x342750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342750u, 0x341BD8u, 0x341BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BE0u;
label_341be0:
    // 0x341be0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341BE0u;
    {
        const bool branch_taken_0x341be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341be0) {
            ctx->pc = 0x341C00u;
            goto label_341c00;
        }
    }
    ctx->pc = 0x341BE8u;
label_341be8:
    // 0x341be8: 0xc0d075c  jal         func_341D70
    ctx->pc = 0x341BE8u;
    SET_GPR_U32(ctx, 31, 0x341BF0u);
    ctx->pc = 0x341D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341D70u, 0x341BE8u, 0x341BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BF0u;
label_341bf0:
    // 0x341bf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x341BF0u;
    {
        const bool branch_taken_0x341bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341bf0) {
            ctx->pc = 0x341C00u;
            goto label_341c00;
        }
    }
    ctx->pc = 0x341BF8u;
label_341bf8:
    // 0x341bf8: 0xc0d0854  jal         func_342150
    ctx->pc = 0x341BF8u;
    SET_GPR_U32(ctx, 31, 0x341C00u);
    ctx->pc = 0x342150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342150u, 0x341BF8u, 0x341C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C00u;
label_341c00:
    // 0x341c00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x341c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341c04: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x341C04u;
    {
        const bool branch_taken_0x341c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x341c04) {
            ctx->pc = 0x341C30u;
            goto label_341c30;
        }
    }
    ctx->pc = 0x341C0Cu;
    // 0x341c0c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x341c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x341c10: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x341C10u;
    {
        const bool branch_taken_0x341c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x341C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C10u;
        // 0x341c14: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c10) {
            ctx->pc = 0x341C28u;
            goto label_341c28;
        }
    }
    ctx->pc = 0x341C18u;
    // 0x341c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x341c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341c1c: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x341C1Cu;
    SET_GPR_U32(ctx, 31, 0x341C24u);
    ctx->pc = 0x341C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341C1Cu;
    // 0x341c20: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x341C1Cu, 0x341C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C24u;
label_341c24:
    // 0x341c24: 0x0  nop
    ctx->pc = 0x341c24u;
    // NOP
label_341c28:
    // 0x341c28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x341c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x341c2c: 0x0  nop
    ctx->pc = 0x341c2cu;
    // NOP
label_341c30:
    // 0x341c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341c34: 0x0  nop
    ctx->pc = 0x341c34u;
    // NOP
label_341c38:
    // 0x341c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x341c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341c40: 0x3e00008  jr          $ra
    ctx->pc = 0x341C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C40u;
        // 0x341c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341C48u;
}
