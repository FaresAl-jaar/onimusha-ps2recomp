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

// Function: sub_0024CF90
// Address: 0x24cf90 - 0x24cfc0
void sub_0024CF90_0x24cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CF90_0x24cf90");
#endif

    switch (ctx->pc) {
        case 0x24cf90u: goto label_24cf90;
        case 0x24cf94u: goto label_24cf94;
        case 0x24cf98u: goto label_24cf98;
        case 0x24cf9cu: goto label_24cf9c;
        case 0x24cfa0u: goto label_24cfa0;
        case 0x24cfa4u: goto label_24cfa4;
        case 0x24cfa8u: goto label_24cfa8;
        case 0x24cfacu: goto label_24cfac;
        case 0x24cfb0u: goto label_24cfb0;
        case 0x24cfb4u: goto label_24cfb4;
        case 0x24cfb8u: goto label_24cfb8;
        case 0x24cfbcu: goto label_24cfbc;
        default: break;
    }

    ctx->pc = 0x24cf90u;

label_24cf90:
    // 0x24cf90: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24cf94:
    // 0x24cf94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24cf94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24cf98:
    // 0x24cf98: 0x8c43651c  lw          $v1, 0x651C($v0)
    ctx->pc = 0x24cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25884)));
label_24cf9c:
    // 0x24cf9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24cf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24cfa0:
    // 0x24cfa0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_24cfa4:
    if (ctx->pc == 0x24CFA4u) {
        ctx->pc = 0x24CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFA0u;
        // 0x24cfa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFA8u;
        goto label_24cfa8;
    }
    ctx->pc = 0x24CFA0u;
    {
        const bool branch_taken_0x24cfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFA0u;
        // 0x24cfa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfa0) {
            ctx->pc = 0x24CFB4u;
            goto label_24cfb4;
        }
    }
    ctx->pc = 0x24CFA8u;
label_24cfa8:
    // 0x24cfa8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24cfac:
    // 0x24cfac: 0x60f809  jalr        $v1
label_24cfb0:
    if (ctx->pc == 0x24CFB0u) {
        ctx->pc = 0x24CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFACu;
        // 0x24cfb0: 0x8c446520  lw          $a0, 0x6520($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25888)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFB4u;
        goto label_24cfb4;
    }
    ctx->pc = 0x24CFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24CFB4u);
        ctx->pc = 0x24CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFACu;
        // 0x24cfb0: 0x8c446520  lw          $a0, 0x6520($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25888)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CFACu, 0x24CFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CFB4u;
label_24cfb4:
    // 0x24cfb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24cfb8:
    // 0x24cfb8: 0x3e00008  jr          $ra
label_24cfbc:
    if (ctx->pc == 0x24CFBCu) {
        ctx->pc = 0x24CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFB8u;
        // 0x24cfbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFC0u;
        goto label_fallthrough_0x24cfb8;
    }
    ctx->pc = 0x24CFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFB8u;
        // 0x24cfbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24cfb8:
    ctx->pc = 0x24CFC0u;
}
