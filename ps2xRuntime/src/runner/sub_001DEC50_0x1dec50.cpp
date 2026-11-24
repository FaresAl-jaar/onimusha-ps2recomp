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

// Function: sub_001DEC50
// Address: 0x1dec50 - 0x1deca4
void sub_001DEC50_0x1dec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEC50_0x1dec50");
#endif

    switch (ctx->pc) {
        case 0x1dec50u: goto label_1dec50;
        case 0x1dec54u: goto label_1dec54;
        case 0x1dec58u: goto label_1dec58;
        case 0x1dec5cu: goto label_1dec5c;
        case 0x1dec60u: goto label_1dec60;
        case 0x1dec64u: goto label_1dec64;
        case 0x1dec68u: goto label_1dec68;
        case 0x1dec6cu: goto label_1dec6c;
        case 0x1dec70u: goto label_1dec70;
        case 0x1dec74u: goto label_1dec74;
        case 0x1dec78u: goto label_1dec78;
        case 0x1dec7cu: goto label_1dec7c;
        case 0x1dec80u: goto label_1dec80;
        case 0x1dec84u: goto label_1dec84;
        case 0x1dec88u: goto label_1dec88;
        case 0x1dec8cu: goto label_1dec8c;
        case 0x1dec90u: goto label_1dec90;
        case 0x1dec94u: goto label_1dec94;
        case 0x1dec98u: goto label_1dec98;
        case 0x1dec9cu: goto label_1dec9c;
        case 0x1deca0u: goto label_1deca0;
        default: break;
    }

    ctx->pc = 0x1dec50u;

label_1dec50:
    // 0x1dec50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dec54:
    // 0x1dec54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dec58:
    // 0x1dec58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dec5c:
    // 0x1dec5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dec5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dec60:
    // 0x1dec60: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1dec64:
    if (ctx->pc == 0x1DEC64u) {
        ctx->pc = 0x1DEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC60u;
        // 0x1dec64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEC68u;
        goto label_1dec68;
    }
    ctx->pc = 0x1DEC60u;
    {
        const bool branch_taken_0x1dec60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC60u;
        // 0x1dec64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec60) {
            ctx->pc = 0x1DEC90u;
            goto label_1dec90;
        }
    }
    ctx->pc = 0x1DEC68u;
label_1dec68:
    // 0x1dec68: 0x244263f0  addiu       $v0, $v0, 0x63F0
    ctx->pc = 0x1dec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25584));
label_1dec6c:
    // 0x1dec6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dec70:
    // 0x1dec70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dec70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dec74:
    // 0x1dec74: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dec74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dec78:
    // 0x1dec78: 0x320f809  jalr        $t9
label_1dec7c:
    if (ctx->pc == 0x1DEC7Cu) {
        ctx->pc = 0x1DEC80u;
        goto label_1dec80;
    }
    ctx->pc = 0x1DEC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEC80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC78u, 0x1DEC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DEC80u;
label_1dec80:
    // 0x1dec80: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1dec84:
    if (ctx->pc == 0x1DEC84u) {
        ctx->pc = 0x1DEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC80u;
        // 0x1dec84: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEC88u;
        goto label_1dec88;
    }
    ctx->pc = 0x1DEC80u;
    {
        const bool branch_taken_0x1dec80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC80u;
        // 0x1dec84: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec80) {
            ctx->pc = 0x1DEC90u;
            goto label_1dec90;
        }
    }
    ctx->pc = 0x1DEC88u;
label_1dec88:
    // 0x1dec88: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1dec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1dec8c:
    // 0x1dec8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dec90:
    // 0x1dec90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dec90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dec94:
    // 0x1dec94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dec98:
    // 0x1dec98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dec98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dec9c:
    // 0x1dec9c: 0x3e00008  jr          $ra
label_1deca0:
    if (ctx->pc == 0x1DECA0u) {
        ctx->pc = 0x1DECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC9Cu;
        // 0x1deca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DECA4u;
        goto label_fallthrough_0x1dec9c;
    }
    ctx->pc = 0x1DEC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC9Cu;
        // 0x1deca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dec9c:
    ctx->pc = 0x1DECA4u;
}
