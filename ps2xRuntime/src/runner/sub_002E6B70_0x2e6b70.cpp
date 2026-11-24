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

// Function: sub_002E6B70
// Address: 0x2e6b70 - 0x2e6c18
void sub_002E6B70_0x2e6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6B70_0x2e6b70");
#endif

    switch (ctx->pc) {
        case 0x2e6be0u: goto label_2e6be0;
        case 0x2e6c00u: goto label_2e6c00;
        case 0x2e6c08u: goto label_2e6c08;
        default: break;
    }

    ctx->pc = 0x2e6b70u;

    // 0x2e6b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e6b74: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x2e6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2e6b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e6b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e6b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6b80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e6b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e6b84: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E6B84u;
    {
        const bool branch_taken_0x2e6b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B84u;
        // 0x2e6b88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b84) {
            ctx->pc = 0x2E6C00u;
            goto label_2e6c00;
        }
    }
    ctx->pc = 0x2E6B8Cu;
    // 0x2e6b8c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2e6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2e6b90: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2e6b90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6b94: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E6B94u;
    {
        const bool branch_taken_0x2e6b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b94) {
            ctx->pc = 0x2E6C00u;
            goto label_2e6c00;
        }
    }
    ctx->pc = 0x2E6B9Cu;
    // 0x2e6b9c: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x2e6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x2e6ba0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e6ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e6ba4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E6BA4u;
    {
        const bool branch_taken_0x2e6ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ba4) {
            ctx->pc = 0x2E6BE8u;
            goto label_2e6be8;
        }
    }
    ctx->pc = 0x2E6BACu;
    // 0x2e6bac: 0x9202065d  lbu         $v0, 0x65D($s0)
    ctx->pc = 0x2e6bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1629)));
    // 0x2e6bb0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x2e6bb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e6bb4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2E6BB4u;
    {
        const bool branch_taken_0x2e6bb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6bb4) {
            ctx->pc = 0x2E6BE8u;
            goto label_2e6be8;
        }
    }
    ctx->pc = 0x2E6BBCu;
    // 0x2e6bbc: 0x96020282  lhu         $v0, 0x282($s0)
    ctx->pc = 0x2e6bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 642)));
    // 0x2e6bc0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e6bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e6bc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6BC4u;
    {
        const bool branch_taken_0x2e6bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6bc4) {
            ctx->pc = 0x2E6BE8u;
            goto label_2e6be8;
        }
    }
    ctx->pc = 0x2E6BCCu;
    // 0x2e6bcc: 0x86022b22  lh          $v0, 0x2B22($s0)
    ctx->pc = 0x2e6bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x2e6bd0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2e6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2e6bd4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2e6bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e6bd8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2E6BD8u;
    SET_GPR_U32(ctx, 31, 0x2E6BE0u);
    ctx->pc = 0x2E6BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BD8u;
    // 0x2e6bdc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2E6BD8u, 0x2E6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6BE0u;
label_2e6be0:
    // 0x2e6be0: 0xa6022b22  sh          $v0, 0x2B22($s0)
    ctx->pc = 0x2e6be0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e6be4: 0x0  nop
    ctx->pc = 0x2e6be4u;
    // NOP
label_2e6be8:
    // 0x2e6be8: 0x86052b22  lh          $a1, 0x2B22($s0)
    ctx->pc = 0x2e6be8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x2e6bec: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x2e6becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x2e6bf0: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6BF0u;
    {
        const bool branch_taken_0x2e6bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BF0u;
        // 0x2e6bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bf0) {
            ctx->pc = 0x2E6C00u;
            goto label_2e6c00;
        }
    }
    ctx->pc = 0x2E6BF8u;
    // 0x2e6bf8: 0xc0a23b0  jal         func_288EC0
    ctx->pc = 0x2E6BF8u;
    SET_GPR_U32(ctx, 31, 0x2E6C00u);
    ctx->pc = 0x2E6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BF8u;
    // 0x2e6bfc: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288EC0u, 0x2E6BF8u, 0x2E6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C00u;
label_2e6c00:
    // 0x2e6c00: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x2E6C00u;
    SET_GPR_U32(ctx, 31, 0x2E6C08u);
    ctx->pc = 0x2E6C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C00u;
    // 0x2e6c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x2E6C00u, 0x2E6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C08u;
label_2e6c08:
    // 0x2e6c08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e6c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6c0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6c10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C10u;
        // 0x2e6c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6C18u;
}
