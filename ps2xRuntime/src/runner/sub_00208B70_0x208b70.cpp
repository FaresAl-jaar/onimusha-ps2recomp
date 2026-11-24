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

// Function: sub_00208B70
// Address: 0x208b70 - 0x208be4
void sub_00208B70_0x208b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208B70_0x208b70");
#endif

    switch (ctx->pc) {
        case 0x208b8cu: goto label_208b8c;
        case 0x208b9cu: goto label_208b9c;
        case 0x208bc0u: goto label_208bc0;
        case 0x208bccu: goto label_208bcc;
        default: break;
    }

    ctx->pc = 0x208b70u;

    // 0x208b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208b78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208b84: 0xc0822fa  jal         func_208BE8
    ctx->pc = 0x208B84u;
    SET_GPR_U32(ctx, 31, 0x208B8Cu);
    ctx->pc = 0x208B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B84u;
    // 0x208b88: 0x24b10060  addiu       $s1, $a1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208BE8u, 0x208B84u, 0x208B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B8Cu;
label_208b8c:
    // 0x208b8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x208b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x208b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208b94: 0xc082316  jal         func_208C58
    ctx->pc = 0x208B94u;
    SET_GPR_U32(ctx, 31, 0x208B9Cu);
    ctx->pc = 0x208B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B94u;
    // 0x208b98: 0x26100088  addiu       $s0, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208C58u, 0x208B94u, 0x208B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B9Cu;
label_208b9c:
    // 0x208b9c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x208ba0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x208ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x208ba4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x208ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x208ba8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x208ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x208bac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x208bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x208bb0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x208bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x208bb4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x208bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x208bb8: 0xc082332  jal         func_208CC8
    ctx->pc = 0x208BB8u;
    SET_GPR_U32(ctx, 31, 0x208BC0u);
    ctx->pc = 0x208BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BB8u;
    // 0x208bbc: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208CC8u, 0x208BB8u, 0x208BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BC0u;
label_208bc0:
    // 0x208bc0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x208bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x208bc4: 0xc082332  jal         func_208CC8
    ctx->pc = 0x208BC4u;
    SET_GPR_U32(ctx, 31, 0x208BCCu);
    ctx->pc = 0x208BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BC4u;
    // 0x208bc8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208CC8u, 0x208BC4u, 0x208BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BCCu;
label_208bcc:
    // 0x208bcc: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x208bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x208bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208bd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x208BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BDCu;
        // 0x208be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208BE4u;
}
