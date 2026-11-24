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

// Function: sub_0025ED50
// Address: 0x25ed50 - 0x25ede8
void sub_0025ED50_0x25ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ED50_0x25ed50");
#endif

    switch (ctx->pc) {
        case 0x25ed50u: goto label_25ed50;
        case 0x25ed54u: goto label_25ed54;
        case 0x25ed58u: goto label_25ed58;
        case 0x25ed5cu: goto label_25ed5c;
        case 0x25ed60u: goto label_25ed60;
        case 0x25ed64u: goto label_25ed64;
        case 0x25ed68u: goto label_25ed68;
        case 0x25ed6cu: goto label_25ed6c;
        case 0x25ed70u: goto label_25ed70;
        case 0x25ed74u: goto label_25ed74;
        case 0x25ed78u: goto label_25ed78;
        case 0x25ed7cu: goto label_25ed7c;
        case 0x25ed80u: goto label_25ed80;
        case 0x25ed84u: goto label_25ed84;
        case 0x25ed88u: goto label_25ed88;
        case 0x25ed8cu: goto label_25ed8c;
        case 0x25ed90u: goto label_25ed90;
        case 0x25ed94u: goto label_25ed94;
        case 0x25ed98u: goto label_25ed98;
        case 0x25ed9cu: goto label_25ed9c;
        case 0x25eda0u: goto label_25eda0;
        case 0x25eda4u: goto label_25eda4;
        case 0x25eda8u: goto label_25eda8;
        case 0x25edacu: goto label_25edac;
        case 0x25edb0u: goto label_25edb0;
        case 0x25edb4u: goto label_25edb4;
        case 0x25edb8u: goto label_25edb8;
        case 0x25edbcu: goto label_25edbc;
        case 0x25edc0u: goto label_25edc0;
        case 0x25edc4u: goto label_25edc4;
        case 0x25edc8u: goto label_25edc8;
        case 0x25edccu: goto label_25edcc;
        case 0x25edd0u: goto label_25edd0;
        case 0x25edd4u: goto label_25edd4;
        case 0x25edd8u: goto label_25edd8;
        case 0x25eddcu: goto label_25eddc;
        case 0x25ede0u: goto label_25ede0;
        case 0x25ede4u: goto label_25ede4;
        default: break;
    }

    ctx->pc = 0x25ed50u;

label_25ed50:
    // 0x25ed50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25ed54:
    // 0x25ed54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25ed58:
    // 0x25ed58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25ed5c:
    // 0x25ed5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25ed60:
    // 0x25ed60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ed60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25ed64:
    // 0x25ed64: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_25ed68:
    if (ctx->pc == 0x25ED68u) {
        ctx->pc = 0x25ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED64u;
        // 0x25ed68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED6Cu;
        goto label_25ed6c;
    }
    ctx->pc = 0x25ED64u;
    {
        const bool branch_taken_0x25ed64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED64u;
        // 0x25ed68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ed64) {
            ctx->pc = 0x25EDD0u;
            goto label_25edd0;
        }
    }
    ctx->pc = 0x25ED6Cu;
label_25ed6c:
    // 0x25ed6c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x25ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_25ed70:
    // 0x25ed70: 0x244273d0  addiu       $v0, $v0, 0x73D0
    ctx->pc = 0x25ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29648));
label_25ed74:
    // 0x25ed74: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x25ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_25ed78:
    // 0x25ed78: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x25ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_25ed7c:
    // 0x25ed7c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_25ed80:
    if (ctx->pc == 0x25ED80u) {
        ctx->pc = 0x25ED84u;
        goto label_25ed84;
    }
    ctx->pc = 0x25ED7Cu;
    {
        const bool branch_taken_0x25ed7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed7c) {
            ctx->pc = 0x25EDA8u;
            goto label_25eda8;
        }
    }
    ctx->pc = 0x25ED84u;
label_25ed84:
    // 0x25ed84: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_25ed88:
    if (ctx->pc == 0x25ED88u) {
        ctx->pc = 0x25ED8Cu;
        goto label_25ed8c;
    }
    ctx->pc = 0x25ED84u;
    {
        const bool branch_taken_0x25ed84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed84) {
            ctx->pc = 0x25EDA0u;
            goto label_25eda0;
        }
    }
    ctx->pc = 0x25ED8Cu;
label_25ed8c:
    // 0x25ed8c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x25ed8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_25ed90:
    // 0x25ed90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x25ed90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_25ed94:
    // 0x25ed94: 0x320f809  jalr        $t9
label_25ed98:
    if (ctx->pc == 0x25ED98u) {
        ctx->pc = 0x25ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED94u;
        // 0x25ed98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ED9Cu;
        goto label_25ed9c;
    }
    ctx->pc = 0x25ED94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25ED9Cu);
        ctx->pc = 0x25ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED94u;
        // 0x25ed98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ED94u, 0x25ED9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25ED9Cu;
label_25ed9c:
    // 0x25ed9c: 0x0  nop
    ctx->pc = 0x25ed9cu;
    // NOP
label_25eda0:
    // 0x25eda0: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x25eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_25eda4:
    // 0x25eda4: 0x0  nop
    ctx->pc = 0x25eda4u;
    // NOP
label_25eda8:
    // 0x25eda8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25eda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25edac:
    // 0x25edac: 0xc096b20  jal         func_25AC80
label_25edb0:
    if (ctx->pc == 0x25EDB0u) {
        ctx->pc = 0x25EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDACu;
        // 0x25edb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EDB4u;
        goto label_25edb4;
    }
    ctx->pc = 0x25EDACu;
    SET_GPR_U32(ctx, 31, 0x25EDB4u);
    ctx->pc = 0x25EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EDACu;
    // 0x25edb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x25EDACu, 0x25EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDB4u;
label_25edb4:
    // 0x25edb4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x25edb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_25edb8:
    // 0x25edb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25edb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_25edbc:
    // 0x25edbc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_25edc0:
    if (ctx->pc == 0x25EDC0u) {
        ctx->pc = 0x25EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDBCu;
        // 0x25edc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EDC4u;
        goto label_25edc4;
    }
    ctx->pc = 0x25EDBCu;
    {
        const bool branch_taken_0x25edbc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x25EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDBCu;
        // 0x25edc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25edbc) {
            ctx->pc = 0x25EDD0u;
            goto label_25edd0;
        }
    }
    ctx->pc = 0x25EDC4u;
label_25edc4:
    // 0x25edc4: 0xc0741a8  jal         func_1D06A0
label_25edc8:
    if (ctx->pc == 0x25EDC8u) {
        ctx->pc = 0x25EDCCu;
        goto label_25edcc;
    }
    ctx->pc = 0x25EDC4u;
    SET_GPR_U32(ctx, 31, 0x25EDCCu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x25EDC4u, 0x25EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EDCCu;
label_25edcc:
    // 0x25edcc: 0x0  nop
    ctx->pc = 0x25edccu;
    // NOP
label_25edd0:
    // 0x25edd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25edd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25edd4:
    // 0x25edd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25edd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25edd8:
    // 0x25edd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25edd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25eddc:
    // 0x25eddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25eddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25ede0:
    // 0x25ede0: 0x3e00008  jr          $ra
label_25ede4:
    if (ctx->pc == 0x25EDE4u) {
        ctx->pc = 0x25EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDE0u;
        // 0x25ede4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EDE8u;
        goto label_fallthrough_0x25ede0;
    }
    ctx->pc = 0x25EDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDE0u;
        // 0x25ede4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25ede0:
    ctx->pc = 0x25EDE8u;
}
