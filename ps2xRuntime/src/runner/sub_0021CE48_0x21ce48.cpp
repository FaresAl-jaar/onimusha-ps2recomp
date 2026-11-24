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

// Function: sub_0021CE48
// Address: 0x21ce48 - 0x21cec8
void sub_0021CE48_0x21ce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CE48_0x21ce48");
#endif

    switch (ctx->pc) {
        case 0x21ce48u: goto label_21ce48;
        case 0x21ce4cu: goto label_21ce4c;
        case 0x21ce50u: goto label_21ce50;
        case 0x21ce54u: goto label_21ce54;
        case 0x21ce58u: goto label_21ce58;
        case 0x21ce5cu: goto label_21ce5c;
        case 0x21ce60u: goto label_21ce60;
        case 0x21ce64u: goto label_21ce64;
        case 0x21ce68u: goto label_21ce68;
        case 0x21ce6cu: goto label_21ce6c;
        case 0x21ce70u: goto label_21ce70;
        case 0x21ce74u: goto label_21ce74;
        case 0x21ce78u: goto label_21ce78;
        case 0x21ce7cu: goto label_21ce7c;
        case 0x21ce80u: goto label_21ce80;
        case 0x21ce84u: goto label_21ce84;
        case 0x21ce88u: goto label_21ce88;
        case 0x21ce8cu: goto label_21ce8c;
        case 0x21ce90u: goto label_21ce90;
        case 0x21ce94u: goto label_21ce94;
        case 0x21ce98u: goto label_21ce98;
        case 0x21ce9cu: goto label_21ce9c;
        case 0x21cea0u: goto label_21cea0;
        case 0x21cea4u: goto label_21cea4;
        case 0x21cea8u: goto label_21cea8;
        case 0x21ceacu: goto label_21ceac;
        case 0x21ceb0u: goto label_21ceb0;
        case 0x21ceb4u: goto label_21ceb4;
        case 0x21ceb8u: goto label_21ceb8;
        case 0x21cebcu: goto label_21cebc;
        case 0x21cec0u: goto label_21cec0;
        case 0x21cec4u: goto label_21cec4;
        default: break;
    }

    ctx->pc = 0x21ce48u;

label_21ce48:
    // 0x21ce48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ce48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21ce4c:
    // 0x21ce4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ce4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21ce50:
    // 0x21ce50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ce50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21ce54:
    // 0x21ce54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ce54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_21ce58:
    // 0x21ce58: 0x8e03200c  lw          $v1, 0x200C($s0)
    ctx->pc = 0x21ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8204)));
label_21ce5c:
    // 0x21ce5c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x21ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_21ce60:
    // 0x21ce60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21ce64:
    // 0x21ce64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21ce68:
    // 0x21ce68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21ce6c:
    // 0x21ce6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21ce70:
    // 0x21ce70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x21ce70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_21ce74:
    // 0x21ce74: 0x26101320  addiu       $s0, $s0, 0x1320
    ctx->pc = 0x21ce74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4896));
label_21ce78:
    // 0x21ce78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21ce7c:
    // 0x21ce7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21ce80:
    // 0x21ce80: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_21ce84:
    // 0x21ce84: 0x40f809  jalr        $v0
label_21ce88:
    if (ctx->pc == 0x21CE88u) {
        ctx->pc = 0x21CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE84u;
        // 0x21ce88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CE8Cu;
        goto label_21ce8c;
    }
    ctx->pc = 0x21CE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21CE8Cu);
        ctx->pc = 0x21CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE84u;
        // 0x21ce88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CE84u, 0x21CE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21CE8Cu;
label_21ce8c:
    // 0x21ce8c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x21ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_21ce90:
    // 0x21ce90: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x21ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_21ce94:
    // 0x21ce94: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x21ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21ce98:
    // 0x21ce98: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_21ce9c:
    if (ctx->pc == 0x21CE9Cu) {
        ctx->pc = 0x21CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CE98u;
        // 0x21ce9c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CEA0u;
        goto label_21cea0;
    }
    ctx->pc = 0x21CE98u;
    {
        const bool branch_taken_0x21ce98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ce98) {
            ctx->pc = 0x21CE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CE98u;
            // 0x21ce9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CEA0u;
            goto label_21cea0;
        }
    }
    ctx->pc = 0x21CEA0u;
label_21cea0:
    // 0x21cea0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21cea4:
    // 0x21cea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21cea8:
    // 0x21cea8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21ceac:
    // 0x21ceac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21ceb0:
    // 0x21ceb0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x21ceb0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21ceb4:
    // 0x21ceb4: 0x1812  mflo        $v1
    ctx->pc = 0x21ceb4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_21ceb8:
    // 0x21ceb8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21ceb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21cebc:
    // 0x21cebc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x21cebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21cec0:
    // 0x21cec0: 0x3e00008  jr          $ra
label_21cec4:
    if (ctx->pc == 0x21CEC4u) {
        ctx->pc = 0x21CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEC0u;
        // 0x21cec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CEC8u;
        goto label_fallthrough_0x21cec0;
    }
    ctx->pc = 0x21CEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEC0u;
        // 0x21cec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21cec0:
    ctx->pc = 0x21CEC8u;
}
