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

// Function: sub_00290250
// Address: 0x290250 - 0x2902c4
void sub_00290250_0x290250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290250_0x290250");
#endif

    switch (ctx->pc) {
        case 0x290250u: goto label_290250;
        case 0x290254u: goto label_290254;
        case 0x290258u: goto label_290258;
        case 0x29025cu: goto label_29025c;
        case 0x290260u: goto label_290260;
        case 0x290264u: goto label_290264;
        case 0x290268u: goto label_290268;
        case 0x29026cu: goto label_29026c;
        case 0x290270u: goto label_290270;
        case 0x290274u: goto label_290274;
        case 0x290278u: goto label_290278;
        case 0x29027cu: goto label_29027c;
        case 0x290280u: goto label_290280;
        case 0x290284u: goto label_290284;
        case 0x290288u: goto label_290288;
        case 0x29028cu: goto label_29028c;
        case 0x290290u: goto label_290290;
        case 0x290294u: goto label_290294;
        case 0x290298u: goto label_290298;
        case 0x29029cu: goto label_29029c;
        case 0x2902a0u: goto label_2902a0;
        case 0x2902a4u: goto label_2902a4;
        case 0x2902a8u: goto label_2902a8;
        case 0x2902acu: goto label_2902ac;
        case 0x2902b0u: goto label_2902b0;
        case 0x2902b4u: goto label_2902b4;
        case 0x2902b8u: goto label_2902b8;
        case 0x2902bcu: goto label_2902bc;
        case 0x2902c0u: goto label_2902c0;
        default: break;
    }

    ctx->pc = 0x290250u;

label_290250:
    // 0x290250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_290254:
    // 0x290254: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x290254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_290258:
    // 0x290258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29025c:
    // 0x29025c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29025cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290260:
    // 0x290260: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x290260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_290264:
    // 0x290264: 0x24844900  addiu       $a0, $a0, 0x4900
    ctx->pc = 0x290264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18688));
label_290268:
    // 0x290268: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x290268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_29026c:
    // 0x29026c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_290270:
    if (ctx->pc == 0x290270u) {
        ctx->pc = 0x290270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29026Cu;
        // 0x290270: 0x3c02004e  lui         $v0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290274u;
        goto label_290274;
    }
    ctx->pc = 0x29026Cu;
    {
        const bool branch_taken_0x29026c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29026Cu;
        // 0x290270: 0x3c02004e  lui         $v0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29026c) {
            ctx->pc = 0x2902A0u;
            goto label_2902a0;
        }
    }
    ctx->pc = 0x290274u;
label_290274:
    // 0x290274: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x290274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_290278:
    // 0x290278: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x290278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_29027c:
    // 0x29027c: 0x24424900  addiu       $v0, $v0, 0x4900
    ctx->pc = 0x29027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18688));
label_290280:
    // 0x290280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x290280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_290284:
    // 0x290284: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x290284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_290288:
    // 0x290288: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x290288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29028c:
    // 0x29028c: 0x40f809  jalr        $v0
label_290290:
    if (ctx->pc == 0x290290u) {
        ctx->pc = 0x290290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29028Cu;
        // 0x290290: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290294u;
        goto label_290294;
    }
    ctx->pc = 0x29028Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290294u);
        ctx->pc = 0x290290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29028Cu;
        // 0x290290: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29028Cu, 0x290294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290294u;
label_290294:
    // 0x290294: 0x10000008  b           . + 4 + (0x8 << 2)
label_290298:
    if (ctx->pc == 0x290298u) {
        ctx->pc = 0x290298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290294u;
        // 0x290298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29029Cu;
        goto label_29029c;
    }
    ctx->pc = 0x290294u;
    {
        const bool branch_taken_0x290294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290294u;
        // 0x290298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290294) {
            ctx->pc = 0x2902B8u;
            goto label_2902b8;
        }
    }
    ctx->pc = 0x29029Cu;
label_29029c:
    // 0x29029c: 0x0  nop
    ctx->pc = 0x29029cu;
    // NOP
label_2902a0:
    // 0x2902a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2902a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2902a4:
    // 0x2902a4: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x2902a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
label_2902a8:
    // 0x2902a8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2902ac:
    if (ctx->pc == 0x2902ACu) {
        ctx->pc = 0x2902ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902A8u;
        // 0x2902ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2902B0u;
        goto label_2902b0;
    }
    ctx->pc = 0x2902A8u;
    {
        const bool branch_taken_0x2902a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2902ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902A8u;
        // 0x2902ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902a8) {
            ctx->pc = 0x290268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290268;
        }
    }
    ctx->pc = 0x2902B0u;
label_2902b0:
    // 0x2902b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2902b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2902b4:
    // 0x2902b4: 0x0  nop
    ctx->pc = 0x2902b4u;
    // NOP
label_2902b8:
    // 0x2902b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2902b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2902bc:
    // 0x2902bc: 0x3e00008  jr          $ra
label_2902c0:
    if (ctx->pc == 0x2902C0u) {
        ctx->pc = 0x2902C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902BCu;
        // 0x2902c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2902C4u;
        goto label_fallthrough_0x2902bc;
    }
    ctx->pc = 0x2902BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2902C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902BCu;
        // 0x2902c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2902BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2902bc:
    ctx->pc = 0x2902C4u;
}
