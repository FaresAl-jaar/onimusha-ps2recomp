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

// Function: sub_001DEF90
// Address: 0x1def90 - 0x1defe4
void sub_001DEF90_0x1def90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEF90_0x1def90");
#endif

    switch (ctx->pc) {
        case 0x1def90u: goto label_1def90;
        case 0x1def94u: goto label_1def94;
        case 0x1def98u: goto label_1def98;
        case 0x1def9cu: goto label_1def9c;
        case 0x1defa0u: goto label_1defa0;
        case 0x1defa4u: goto label_1defa4;
        case 0x1defa8u: goto label_1defa8;
        case 0x1defacu: goto label_1defac;
        case 0x1defb0u: goto label_1defb0;
        case 0x1defb4u: goto label_1defb4;
        case 0x1defb8u: goto label_1defb8;
        case 0x1defbcu: goto label_1defbc;
        case 0x1defc0u: goto label_1defc0;
        case 0x1defc4u: goto label_1defc4;
        case 0x1defc8u: goto label_1defc8;
        case 0x1defccu: goto label_1defcc;
        case 0x1defd0u: goto label_1defd0;
        case 0x1defd4u: goto label_1defd4;
        case 0x1defd8u: goto label_1defd8;
        case 0x1defdcu: goto label_1defdc;
        case 0x1defe0u: goto label_1defe0;
        default: break;
    }

    ctx->pc = 0x1def90u;

label_1def90:
    // 0x1def90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1def90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1def94:
    // 0x1def94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1def94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1def98:
    // 0x1def98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1def98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1def9c:
    // 0x1def9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1def9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1defa0:
    // 0x1defa0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1defa4:
    if (ctx->pc == 0x1DEFA4u) {
        ctx->pc = 0x1DEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFA0u;
        // 0x1defa4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFA8u;
        goto label_1defa8;
    }
    ctx->pc = 0x1DEFA0u;
    {
        const bool branch_taken_0x1defa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFA0u;
        // 0x1defa4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defa0) {
            ctx->pc = 0x1DEFD0u;
            goto label_1defd0;
        }
    }
    ctx->pc = 0x1DEFA8u;
label_1defa8:
    // 0x1defa8: 0x24426430  addiu       $v0, $v0, 0x6430
    ctx->pc = 0x1defa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25648));
label_1defac:
    // 0x1defac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1defacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1defb0:
    // 0x1defb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1defb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1defb4:
    // 0x1defb4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1defb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1defb8:
    // 0x1defb8: 0x320f809  jalr        $t9
label_1defbc:
    if (ctx->pc == 0x1DEFBCu) {
        ctx->pc = 0x1DEFC0u;
        goto label_1defc0;
    }
    ctx->pc = 0x1DEFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEFC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEFB8u, 0x1DEFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DEFC0u;
label_1defc0:
    // 0x1defc0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1defc4:
    if (ctx->pc == 0x1DEFC4u) {
        ctx->pc = 0x1DEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFC0u;
        // 0x1defc4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFC8u;
        goto label_1defc8;
    }
    ctx->pc = 0x1DEFC0u;
    {
        const bool branch_taken_0x1defc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFC0u;
        // 0x1defc4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defc0) {
            ctx->pc = 0x1DEFD0u;
            goto label_1defd0;
        }
    }
    ctx->pc = 0x1DEFC8u;
label_1defc8:
    // 0x1defc8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1defcc:
    // 0x1defcc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1defccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1defd0:
    // 0x1defd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1defd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1defd4:
    // 0x1defd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1defd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1defd8:
    // 0x1defd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1defd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1defdc:
    // 0x1defdc: 0x3e00008  jr          $ra
label_1defe0:
    if (ctx->pc == 0x1DEFE0u) {
        ctx->pc = 0x1DEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFDCu;
        // 0x1defe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEFE4u;
        goto label_fallthrough_0x1defdc;
    }
    ctx->pc = 0x1DEFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFDCu;
        // 0x1defe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1defdc:
    ctx->pc = 0x1DEFE4u;
}
