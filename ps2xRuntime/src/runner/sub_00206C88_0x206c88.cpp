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

// Function: sub_00206C88
// Address: 0x206c88 - 0x206cc8
void sub_00206C88_0x206c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206C88_0x206c88");
#endif

    switch (ctx->pc) {
        case 0x206c88u: goto label_206c88;
        case 0x206c8cu: goto label_206c8c;
        case 0x206c90u: goto label_206c90;
        case 0x206c94u: goto label_206c94;
        case 0x206c98u: goto label_206c98;
        case 0x206c9cu: goto label_206c9c;
        case 0x206ca0u: goto label_206ca0;
        case 0x206ca4u: goto label_206ca4;
        case 0x206ca8u: goto label_206ca8;
        case 0x206cacu: goto label_206cac;
        case 0x206cb0u: goto label_206cb0;
        case 0x206cb4u: goto label_206cb4;
        case 0x206cb8u: goto label_206cb8;
        case 0x206cbcu: goto label_206cbc;
        case 0x206cc0u: goto label_206cc0;
        case 0x206cc4u: goto label_206cc4;
        default: break;
    }

    ctx->pc = 0x206c88u;

label_206c88:
    // 0x206c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206c8c:
    // 0x206c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_206c90:
    // 0x206c90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x206c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_206c94:
    // 0x206c94: 0xc081b1a  jal         func_206C68
label_206c98:
    if (ctx->pc == 0x206C98u) {
        ctx->pc = 0x206C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C94u;
        // 0x206c98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C9Cu;
        goto label_206c9c;
    }
    ctx->pc = 0x206C94u;
    SET_GPR_U32(ctx, 31, 0x206C9Cu);
    ctx->pc = 0x206C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C94u;
    // 0x206c98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206C68u, 0x206C94u, 0x206C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C9Cu;
label_206c9c:
    // 0x206c9c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x206c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_206ca0:
    // 0x206ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206ca4:
    // 0x206ca4: 0x8c629f7c  lw          $v0, -0x6084($v1)
    ctx->pc = 0x206ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942588)));
label_206ca8:
    // 0x206ca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_206cac:
    if (ctx->pc == 0x206CACu) {
        ctx->pc = 0x206CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CA8u;
        // 0x206cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CB0u;
        goto label_206cb0;
    }
    ctx->pc = 0x206CA8u;
    {
        const bool branch_taken_0x206ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CA8u;
        // 0x206cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ca8) {
            ctx->pc = 0x206CB8u;
            goto label_206cb8;
        }
    }
    ctx->pc = 0x206CB0u;
label_206cb0:
    // 0x206cb0: 0x40f809  jalr        $v0
label_206cb4:
    if (ctx->pc == 0x206CB4u) {
        ctx->pc = 0x206CB8u;
        goto label_206cb8;
    }
    ctx->pc = 0x206CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206CB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206CB0u, 0x206CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206CB8u;
label_206cb8:
    // 0x206cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206cbc:
    // 0x206cbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x206cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_206cc0:
    // 0x206cc0: 0x3e00008  jr          $ra
label_206cc4:
    if (ctx->pc == 0x206CC4u) {
        ctx->pc = 0x206CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CC0u;
        // 0x206cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CC8u;
        goto label_fallthrough_0x206cc0;
    }
    ctx->pc = 0x206CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CC0u;
        // 0x206cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206cc0:
    ctx->pc = 0x206CC8u;
}
