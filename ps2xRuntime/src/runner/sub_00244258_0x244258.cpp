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

// Function: sub_00244258
// Address: 0x244258 - 0x2442bc
void sub_00244258_0x244258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244258_0x244258");
#endif

    switch (ctx->pc) {
        case 0x244258u: goto label_244258;
        case 0x24425cu: goto label_24425c;
        case 0x244260u: goto label_244260;
        case 0x244264u: goto label_244264;
        case 0x244268u: goto label_244268;
        case 0x24426cu: goto label_24426c;
        case 0x244270u: goto label_244270;
        case 0x244274u: goto label_244274;
        case 0x244278u: goto label_244278;
        case 0x24427cu: goto label_24427c;
        case 0x244280u: goto label_244280;
        case 0x244284u: goto label_244284;
        case 0x244288u: goto label_244288;
        case 0x24428cu: goto label_24428c;
        case 0x244290u: goto label_244290;
        case 0x244294u: goto label_244294;
        case 0x244298u: goto label_244298;
        case 0x24429cu: goto label_24429c;
        case 0x2442a0u: goto label_2442a0;
        case 0x2442a4u: goto label_2442a4;
        case 0x2442a8u: goto label_2442a8;
        case 0x2442acu: goto label_2442ac;
        case 0x2442b0u: goto label_2442b0;
        case 0x2442b4u: goto label_2442b4;
        case 0x2442b8u: goto label_2442b8;
        default: break;
    }

    ctx->pc = 0x244258u;

label_244258:
    // 0x244258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24425c:
    // 0x24425c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_244260:
    // 0x244260: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x244260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244264:
    // 0x244264: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_244268:
    if (ctx->pc == 0x244268u) {
        ctx->pc = 0x244268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244264u;
        // 0x244268: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24426Cu;
        goto label_24426c;
    }
    ctx->pc = 0x244264u;
    {
        const bool branch_taken_0x244264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244264u;
        // 0x244268: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244264) {
            ctx->pc = 0x244280u;
            goto label_244280;
        }
    }
    ctx->pc = 0x24426Cu;
label_24426c:
    // 0x24426c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24426cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244270:
    // 0x244270: 0xc090d8a  jal         func_243628
label_244274:
    if (ctx->pc == 0x244274u) {
        ctx->pc = 0x244274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244270u;
        // 0x244274: 0x2484bdf0  addiu       $a0, $a0, -0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244278u;
        goto label_244278;
    }
    ctx->pc = 0x244270u;
    SET_GPR_U32(ctx, 31, 0x244278u);
    ctx->pc = 0x244274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244270u;
    // 0x244274: 0x2484bdf0  addiu       $a0, $a0, -0x4210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244270u, 0x244278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244278u;
label_244278:
    // 0x244278: 0x1000000c  b           . + 4 + (0xC << 2)
label_24427c:
    if (ctx->pc == 0x24427Cu) {
        ctx->pc = 0x24427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244278u;
        // 0x24427c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244280u;
        goto label_244280;
    }
    ctx->pc = 0x244278u;
    {
        const bool branch_taken_0x244278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244278u;
        // 0x24427c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244278) {
            ctx->pc = 0x2442ACu;
            goto label_2442ac;
        }
    }
    ctx->pc = 0x244280u;
label_244280:
    // 0x244280: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x244280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244284:
    // 0x244284: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x244284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_244288:
    // 0x244288: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_24428c:
    if (ctx->pc == 0x24428Cu) {
        ctx->pc = 0x24428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244288u;
        // 0x24428c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244290u;
        goto label_244290;
    }
    ctx->pc = 0x244288u;
    {
        const bool branch_taken_0x244288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244288) {
            ctx->pc = 0x24428Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244288u;
            // 0x24428c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442A0u;
            goto label_2442a0;
        }
    }
    ctx->pc = 0x244290u;
label_244290:
    // 0x244290: 0x40f809  jalr        $v0
label_244294:
    if (ctx->pc == 0x244294u) {
        ctx->pc = 0x244294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244290u;
        // 0x244294: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244298u;
        goto label_244298;
    }
    ctx->pc = 0x244290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244298u);
        ctx->pc = 0x244294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244290u;
        // 0x244294: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244290u, 0x244298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244298u;
label_244298:
    // 0x244298: 0x10000003  b           . + 4 + (0x3 << 2)
label_24429c:
    if (ctx->pc == 0x24429Cu) {
        ctx->pc = 0x24429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244298u;
        // 0x24429c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442A0u;
        goto label_2442a0;
    }
    ctx->pc = 0x244298u;
    {
        const bool branch_taken_0x244298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244298u;
        // 0x24429c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244298) {
            ctx->pc = 0x2442A8u;
            goto label_2442a8;
        }
    }
    ctx->pc = 0x2442A0u;
label_2442a0:
    // 0x2442a0: 0xc090d8a  jal         func_243628
label_2442a4:
    if (ctx->pc == 0x2442A4u) {
        ctx->pc = 0x2442A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442A0u;
        // 0x2442a4: 0x2484be10  addiu       $a0, $a0, -0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442A8u;
        goto label_2442a8;
    }
    ctx->pc = 0x2442A0u;
    SET_GPR_U32(ctx, 31, 0x2442A8u);
    ctx->pc = 0x2442A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442A0u;
    // 0x2442a4: 0x2484be10  addiu       $a0, $a0, -0x41F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2442A0u, 0x2442A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442A8u;
label_2442a8:
    // 0x2442a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2442a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2442ac:
    // 0x2442ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2442acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2442b0:
    // 0x2442b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2442b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2442b4:
    // 0x2442b4: 0x3e00008  jr          $ra
label_2442b8:
    if (ctx->pc == 0x2442B8u) {
        ctx->pc = 0x2442B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442B4u;
        // 0x2442b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442BCu;
        goto label_fallthrough_0x2442b4;
    }
    ctx->pc = 0x2442B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2442B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442B4u;
        // 0x2442b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2442B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2442b4:
    ctx->pc = 0x2442BCu;
}
