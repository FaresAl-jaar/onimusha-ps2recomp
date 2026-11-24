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

// Function: sub_00236B40
// Address: 0x236b40 - 0x236ba0
void sub_00236B40_0x236b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236B40_0x236b40");
#endif

    switch (ctx->pc) {
        case 0x236b5cu: goto label_236b5c;
        case 0x236b88u: goto label_236b88;
        default: break;
    }

    ctx->pc = 0x236b40u;

    // 0x236b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236b48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236b50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236b54: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x236B54u;
    SET_GPR_U32(ctx, 31, 0x236B5Cu);
    ctx->pc = 0x236B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B54u;
    // 0x236b58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x236B54u, 0x236B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B5Cu;
label_236b5c:
    // 0x236b5c: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x236B5Cu;
    {
        const bool branch_taken_0x236b5c = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x236b5c) {
            ctx->pc = 0x236B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236B5Cu;
            // 0x236b60: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236B78u;
            goto label_236b78;
        }
    }
    ctx->pc = 0x236B64u;
    // 0x236b64: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x236b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x236b68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x236b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x236b6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x236B6Cu;
    {
        const bool branch_taken_0x236b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B6Cu;
        // 0x236b70: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b6c) {
            ctx->pc = 0x236B80u;
            goto label_236b80;
        }
    }
    ctx->pc = 0x236B74u;
    // 0x236b74: 0x0  nop
    ctx->pc = 0x236b74u;
    // NOP
label_236b78:
    // 0x236b78: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x236b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x236b7c: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x236b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_236b80:
    // 0x236b80: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x236B80u;
    SET_GPR_U32(ctx, 31, 0x236B88u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x236B80u, 0x236B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B88u;
label_236b88:
    // 0x236b88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x236b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b98: 0x3e00008  jr          $ra
    ctx->pc = 0x236B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B98u;
        // 0x236b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236BA0u;
}
