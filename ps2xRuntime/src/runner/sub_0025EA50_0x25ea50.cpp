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

// Function: sub_0025EA50
// Address: 0x25ea50 - 0x25eae8
void sub_0025EA50_0x25ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EA50_0x25ea50");
#endif

    switch (ctx->pc) {
        case 0x25ea50u: goto label_25ea50;
        case 0x25ea54u: goto label_25ea54;
        case 0x25ea58u: goto label_25ea58;
        case 0x25ea5cu: goto label_25ea5c;
        case 0x25ea60u: goto label_25ea60;
        case 0x25ea64u: goto label_25ea64;
        case 0x25ea68u: goto label_25ea68;
        case 0x25ea6cu: goto label_25ea6c;
        case 0x25ea70u: goto label_25ea70;
        case 0x25ea74u: goto label_25ea74;
        case 0x25ea78u: goto label_25ea78;
        case 0x25ea7cu: goto label_25ea7c;
        case 0x25ea80u: goto label_25ea80;
        case 0x25ea84u: goto label_25ea84;
        case 0x25ea88u: goto label_25ea88;
        case 0x25ea8cu: goto label_25ea8c;
        case 0x25ea90u: goto label_25ea90;
        case 0x25ea94u: goto label_25ea94;
        case 0x25ea98u: goto label_25ea98;
        case 0x25ea9cu: goto label_25ea9c;
        case 0x25eaa0u: goto label_25eaa0;
        case 0x25eaa4u: goto label_25eaa4;
        case 0x25eaa8u: goto label_25eaa8;
        case 0x25eaacu: goto label_25eaac;
        case 0x25eab0u: goto label_25eab0;
        case 0x25eab4u: goto label_25eab4;
        case 0x25eab8u: goto label_25eab8;
        case 0x25eabcu: goto label_25eabc;
        case 0x25eac0u: goto label_25eac0;
        case 0x25eac4u: goto label_25eac4;
        case 0x25eac8u: goto label_25eac8;
        case 0x25eaccu: goto label_25eacc;
        case 0x25ead0u: goto label_25ead0;
        case 0x25ead4u: goto label_25ead4;
        case 0x25ead8u: goto label_25ead8;
        case 0x25eadcu: goto label_25eadc;
        case 0x25eae0u: goto label_25eae0;
        case 0x25eae4u: goto label_25eae4;
        default: break;
    }

    ctx->pc = 0x25ea50u;

label_25ea50:
    // 0x25ea50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25ea54:
    // 0x25ea54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25ea58:
    // 0x25ea58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25ea5c:
    // 0x25ea5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25ea60:
    // 0x25ea60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ea60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25ea64:
    // 0x25ea64: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_25ea68:
    if (ctx->pc == 0x25EA68u) {
        ctx->pc = 0x25EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA64u;
        // 0x25ea68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA6Cu;
        goto label_25ea6c;
    }
    ctx->pc = 0x25EA64u;
    {
        const bool branch_taken_0x25ea64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA64u;
        // 0x25ea68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea64) {
            ctx->pc = 0x25EAD0u;
            goto label_25ead0;
        }
    }
    ctx->pc = 0x25EA6Cu;
label_25ea6c:
    // 0x25ea6c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x25ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_25ea70:
    // 0x25ea70: 0x244273f0  addiu       $v0, $v0, 0x73F0
    ctx->pc = 0x25ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29680));
label_25ea74:
    // 0x25ea74: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x25ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_25ea78:
    // 0x25ea78: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x25ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_25ea7c:
    // 0x25ea7c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_25ea80:
    if (ctx->pc == 0x25EA80u) {
        ctx->pc = 0x25EA84u;
        goto label_25ea84;
    }
    ctx->pc = 0x25EA7Cu;
    {
        const bool branch_taken_0x25ea7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ea7c) {
            ctx->pc = 0x25EAA8u;
            goto label_25eaa8;
        }
    }
    ctx->pc = 0x25EA84u;
label_25ea84:
    // 0x25ea84: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_25ea88:
    if (ctx->pc == 0x25EA88u) {
        ctx->pc = 0x25EA8Cu;
        goto label_25ea8c;
    }
    ctx->pc = 0x25EA84u;
    {
        const bool branch_taken_0x25ea84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ea84) {
            ctx->pc = 0x25EAA0u;
            goto label_25eaa0;
        }
    }
    ctx->pc = 0x25EA8Cu;
label_25ea8c:
    // 0x25ea8c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x25ea8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_25ea90:
    // 0x25ea90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x25ea90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_25ea94:
    // 0x25ea94: 0x320f809  jalr        $t9
label_25ea98:
    if (ctx->pc == 0x25EA98u) {
        ctx->pc = 0x25EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA94u;
        // 0x25ea98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA9Cu;
        goto label_25ea9c;
    }
    ctx->pc = 0x25EA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EA9Cu);
        ctx->pc = 0x25EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA94u;
        // 0x25ea98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EA94u, 0x25EA9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EA9Cu;
label_25ea9c:
    // 0x25ea9c: 0x0  nop
    ctx->pc = 0x25ea9cu;
    // NOP
label_25eaa0:
    // 0x25eaa0: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x25eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_25eaa4:
    // 0x25eaa4: 0x0  nop
    ctx->pc = 0x25eaa4u;
    // NOP
label_25eaa8:
    // 0x25eaa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25eaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25eaac:
    // 0x25eaac: 0xc096b20  jal         func_25AC80
label_25eab0:
    if (ctx->pc == 0x25EAB0u) {
        ctx->pc = 0x25EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAACu;
        // 0x25eab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAB4u;
        goto label_25eab4;
    }
    ctx->pc = 0x25EAACu;
    SET_GPR_U32(ctx, 31, 0x25EAB4u);
    ctx->pc = 0x25EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EAACu;
    // 0x25eab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x25EAACu, 0x25EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAB4u;
label_25eab4:
    // 0x25eab4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x25eab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_25eab8:
    // 0x25eab8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25eab8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_25eabc:
    // 0x25eabc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_25eac0:
    if (ctx->pc == 0x25EAC0u) {
        ctx->pc = 0x25EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EABCu;
        // 0x25eac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAC4u;
        goto label_25eac4;
    }
    ctx->pc = 0x25EABCu;
    {
        const bool branch_taken_0x25eabc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x25EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EABCu;
        // 0x25eac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eabc) {
            ctx->pc = 0x25EAD0u;
            goto label_25ead0;
        }
    }
    ctx->pc = 0x25EAC4u;
label_25eac4:
    // 0x25eac4: 0xc0741a8  jal         func_1D06A0
label_25eac8:
    if (ctx->pc == 0x25EAC8u) {
        ctx->pc = 0x25EACCu;
        goto label_25eacc;
    }
    ctx->pc = 0x25EAC4u;
    SET_GPR_U32(ctx, 31, 0x25EACCu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x25EAC4u, 0x25EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EACCu;
label_25eacc:
    // 0x25eacc: 0x0  nop
    ctx->pc = 0x25eaccu;
    // NOP
label_25ead0:
    // 0x25ead0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25ead0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ead4:
    // 0x25ead4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25ead4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25ead8:
    // 0x25ead8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ead8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25eadc:
    // 0x25eadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25eadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25eae0:
    // 0x25eae0: 0x3e00008  jr          $ra
label_25eae4:
    if (ctx->pc == 0x25EAE4u) {
        ctx->pc = 0x25EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAE0u;
        // 0x25eae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAE8u;
        goto label_fallthrough_0x25eae0;
    }
    ctx->pc = 0x25EAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAE0u;
        // 0x25eae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25eae0:
    ctx->pc = 0x25EAE8u;
}
