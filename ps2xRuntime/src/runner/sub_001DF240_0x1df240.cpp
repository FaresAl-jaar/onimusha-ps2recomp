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

// Function: sub_001DF240
// Address: 0x1df240 - 0x1df294
void sub_001DF240_0x1df240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF240_0x1df240");
#endif

    switch (ctx->pc) {
        case 0x1df240u: goto label_1df240;
        case 0x1df244u: goto label_1df244;
        case 0x1df248u: goto label_1df248;
        case 0x1df24cu: goto label_1df24c;
        case 0x1df250u: goto label_1df250;
        case 0x1df254u: goto label_1df254;
        case 0x1df258u: goto label_1df258;
        case 0x1df25cu: goto label_1df25c;
        case 0x1df260u: goto label_1df260;
        case 0x1df264u: goto label_1df264;
        case 0x1df268u: goto label_1df268;
        case 0x1df26cu: goto label_1df26c;
        case 0x1df270u: goto label_1df270;
        case 0x1df274u: goto label_1df274;
        case 0x1df278u: goto label_1df278;
        case 0x1df27cu: goto label_1df27c;
        case 0x1df280u: goto label_1df280;
        case 0x1df284u: goto label_1df284;
        case 0x1df288u: goto label_1df288;
        case 0x1df28cu: goto label_1df28c;
        case 0x1df290u: goto label_1df290;
        default: break;
    }

    ctx->pc = 0x1df240u;

label_1df240:
    // 0x1df240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1df244:
    // 0x1df244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1df244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1df248:
    // 0x1df248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1df24c:
    // 0x1df24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df250:
    // 0x1df250: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1df254:
    if (ctx->pc == 0x1DF254u) {
        ctx->pc = 0x1DF254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF250u;
        // 0x1df254: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF258u;
        goto label_1df258;
    }
    ctx->pc = 0x1DF250u;
    {
        const bool branch_taken_0x1df250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF250u;
        // 0x1df254: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df250) {
            ctx->pc = 0x1DF280u;
            goto label_1df280;
        }
    }
    ctx->pc = 0x1DF258u;
label_1df258:
    // 0x1df258: 0x24426470  addiu       $v0, $v0, 0x6470
    ctx->pc = 0x1df258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25712));
label_1df25c:
    // 0x1df25c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1df25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1df260:
    // 0x1df260: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1df260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1df264:
    // 0x1df264: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1df264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1df268:
    // 0x1df268: 0x320f809  jalr        $t9
label_1df26c:
    if (ctx->pc == 0x1DF26Cu) {
        ctx->pc = 0x1DF270u;
        goto label_1df270;
    }
    ctx->pc = 0x1DF268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF270u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF268u, 0x1DF270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF270u;
label_1df270:
    // 0x1df270: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1df274:
    if (ctx->pc == 0x1DF274u) {
        ctx->pc = 0x1DF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF270u;
        // 0x1df274: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF278u;
        goto label_1df278;
    }
    ctx->pc = 0x1DF270u;
    {
        const bool branch_taken_0x1df270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF270u;
        // 0x1df274: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df270) {
            ctx->pc = 0x1DF280u;
            goto label_1df280;
        }
    }
    ctx->pc = 0x1DF278u;
label_1df278:
    // 0x1df278: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1df278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1df27c:
    // 0x1df27c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1df27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1df280:
    // 0x1df280: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df284:
    // 0x1df284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1df288:
    // 0x1df288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1df28c:
    // 0x1df28c: 0x3e00008  jr          $ra
label_1df290:
    if (ctx->pc == 0x1DF290u) {
        ctx->pc = 0x1DF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF28Cu;
        // 0x1df290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF294u;
        goto label_fallthrough_0x1df28c;
    }
    ctx->pc = 0x1DF28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF28Cu;
        // 0x1df290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1df28c:
    ctx->pc = 0x1DF294u;
}
