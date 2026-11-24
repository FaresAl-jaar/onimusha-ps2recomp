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

// Function: sub_0021AA58
// Address: 0x21aa58 - 0x21aad8
void sub_0021AA58_0x21aa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AA58_0x21aa58");
#endif

    switch (ctx->pc) {
        case 0x21aa78u: goto label_21aa78;
        case 0x21aa98u: goto label_21aa98;
        case 0x21aac0u: goto label_21aac0;
        default: break;
    }

    ctx->pc = 0x21aa58u;

    // 0x21aa58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21aa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21aa5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21aa60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21aa60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21aa68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21aa68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21aa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21aa70: 0xc043808  jal         func_10E020
    ctx->pc = 0x21AA70u;
    SET_GPR_U32(ctx, 31, 0x21AA78u);
    ctx->pc = 0x21AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA70u;
    // 0x21aa74: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x21AA70u, 0x21AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA78u;
label_21aa78:
    // 0x21aa78: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x21aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21aa7c: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x21aa7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21aa80: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x21aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21aa84: 0x51102f  dsubu       $v0, $v0, $s1
    ctx->pc = 0x21aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    // 0x21aa88: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x21aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x21aa8c: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21AA8Cu;
    {
        const bool branch_taken_0x21aa8c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x21AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA8Cu;
        // 0x21aa90: 0xfe020048  sd          $v0, 0x48($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aa8c) {
            ctx->pc = 0x21AAB8u;
            goto label_21aab8;
        }
    }
    ctx->pc = 0x21AA94u;
    // 0x21aa94: 0x0  nop
    ctx->pc = 0x21aa94u;
    // NOP
label_21aa98:
    // 0x21aa98: 0x0  nop
    ctx->pc = 0x21aa98u;
    // NOP
    // 0x21aa9c: 0x0  nop
    ctx->pc = 0x21aa9cu;
    // NOP
    // 0x21aaa0: 0x0  nop
    ctx->pc = 0x21aaa0u;
    // NOP
    // 0x21aaa4: 0x0  nop
    ctx->pc = 0x21aaa4u;
    // NOP
    // 0x21aaa8: 0x0  nop
    ctx->pc = 0x21aaa8u;
    // NOP
    // 0x21aaac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x21AAACu;
    {
        const bool branch_taken_0x21aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aaac) {
            ctx->pc = 0x21AA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aa98;
        }
    }
    ctx->pc = 0x21AAB4u;
    // 0x21aab4: 0x0  nop
    ctx->pc = 0x21aab4u;
    // NOP
label_21aab8:
    // 0x21aab8: 0xc043800  jal         func_10E000
    ctx->pc = 0x21AAB8u;
    SET_GPR_U32(ctx, 31, 0x21AAC0u);
    ctx->pc = 0x21AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AAB8u;
    // 0x21aabc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x21AAB8u, 0x21AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AAC0u;
label_21aac0:
    // 0x21aac0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21aac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21aac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21aac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21aacc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21aaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aad0: 0x3e00008  jr          $ra
    ctx->pc = 0x21AAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAD0u;
        // 0x21aad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AAD8u;
}
