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

// Function: sub_002441F0
// Address: 0x2441f0 - 0x244258
void sub_002441F0_0x2441f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002441F0_0x2441f0");
#endif

    switch (ctx->pc) {
        case 0x2441f0u: goto label_2441f0;
        case 0x2441f4u: goto label_2441f4;
        case 0x2441f8u: goto label_2441f8;
        case 0x2441fcu: goto label_2441fc;
        case 0x244200u: goto label_244200;
        case 0x244204u: goto label_244204;
        case 0x244208u: goto label_244208;
        case 0x24420cu: goto label_24420c;
        case 0x244210u: goto label_244210;
        case 0x244214u: goto label_244214;
        case 0x244218u: goto label_244218;
        case 0x24421cu: goto label_24421c;
        case 0x244220u: goto label_244220;
        case 0x244224u: goto label_244224;
        case 0x244228u: goto label_244228;
        case 0x24422cu: goto label_24422c;
        case 0x244230u: goto label_244230;
        case 0x244234u: goto label_244234;
        case 0x244238u: goto label_244238;
        case 0x24423cu: goto label_24423c;
        case 0x244240u: goto label_244240;
        case 0x244244u: goto label_244244;
        case 0x244248u: goto label_244248;
        case 0x24424cu: goto label_24424c;
        case 0x244250u: goto label_244250;
        case 0x244254u: goto label_244254;
        default: break;
    }

    ctx->pc = 0x2441f0u;

label_2441f0:
    // 0x2441f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2441f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2441f4:
    // 0x2441f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2441f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2441f8:
    // 0x2441f8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2441fc:
    if (ctx->pc == 0x2441FCu) {
        ctx->pc = 0x2441FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441F8u;
        // 0x2441fc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244200u;
        goto label_244200;
    }
    ctx->pc = 0x2441F8u;
    {
        const bool branch_taken_0x2441f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2441FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441F8u;
        // 0x2441fc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441f8) {
            ctx->pc = 0x244218u;
            goto label_244218;
        }
    }
    ctx->pc = 0x244200u;
label_244200:
    // 0x244200: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244204:
    // 0x244204: 0xc090d8a  jal         func_243628
label_244208:
    if (ctx->pc == 0x244208u) {
        ctx->pc = 0x244208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244204u;
        // 0x244208: 0x2484bdb8  addiu       $a0, $a0, -0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24420Cu;
        goto label_24420c;
    }
    ctx->pc = 0x244204u;
    SET_GPR_U32(ctx, 31, 0x24420Cu);
    ctx->pc = 0x244208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244204u;
    // 0x244208: 0x2484bdb8  addiu       $a0, $a0, -0x4248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244204u, 0x24420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24420Cu;
label_24420c:
    // 0x24420c: 0x1000000e  b           . + 4 + (0xE << 2)
label_244210:
    if (ctx->pc == 0x244210u) {
        ctx->pc = 0x244210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24420Cu;
        // 0x244210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244214u;
        goto label_244214;
    }
    ctx->pc = 0x24420Cu;
    {
        const bool branch_taken_0x24420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24420Cu;
        // 0x244210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24420c) {
            ctx->pc = 0x244248u;
            goto label_244248;
        }
    }
    ctx->pc = 0x244214u;
label_244214:
    // 0x244214: 0x0  nop
    ctx->pc = 0x244214u;
    // NOP
label_244218:
    // 0x244218: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x244218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24421c:
    // 0x24421c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x24421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_244220:
    // 0x244220: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_244224:
    if (ctx->pc == 0x244224u) {
        ctx->pc = 0x244224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244220u;
        // 0x244224: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244228u;
        goto label_244228;
    }
    ctx->pc = 0x244220u;
    {
        const bool branch_taken_0x244220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244220) {
            ctx->pc = 0x244224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244220u;
            // 0x244224: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244238u;
            goto label_244238;
        }
    }
    ctx->pc = 0x244228u;
label_244228:
    // 0x244228: 0x40f809  jalr        $v0
label_24422c:
    if (ctx->pc == 0x24422Cu) {
        ctx->pc = 0x24422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244228u;
        // 0x24422c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244230u;
        goto label_244230;
    }
    ctx->pc = 0x244228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244230u);
        ctx->pc = 0x24422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244228u;
        // 0x24422c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244228u, 0x244230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244230u;
label_244230:
    // 0x244230: 0x10000004  b           . + 4 + (0x4 << 2)
label_244234:
    if (ctx->pc == 0x244234u) {
        ctx->pc = 0x244234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244230u;
        // 0x244234: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244238u;
        goto label_244238;
    }
    ctx->pc = 0x244230u;
    {
        const bool branch_taken_0x244230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244230u;
        // 0x244234: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244230) {
            ctx->pc = 0x244244u;
            goto label_244244;
        }
    }
    ctx->pc = 0x244238u;
label_244238:
    // 0x244238: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x244238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24423c:
    // 0x24423c: 0xc090d8a  jal         func_243628
label_244240:
    if (ctx->pc == 0x244240u) {
        ctx->pc = 0x244240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24423Cu;
        // 0x244240: 0x2484bdd8  addiu       $a0, $a0, -0x4228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244244u;
        goto label_244244;
    }
    ctx->pc = 0x24423Cu;
    SET_GPR_U32(ctx, 31, 0x244244u);
    ctx->pc = 0x244240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24423Cu;
    // 0x244240: 0x2484bdd8  addiu       $a0, $a0, -0x4228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x24423Cu, 0x244244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244244u;
label_244244:
    // 0x244244: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244248:
    // 0x244248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24424c:
    // 0x24424c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24424cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_244250:
    // 0x244250: 0x3e00008  jr          $ra
label_244254:
    if (ctx->pc == 0x244254u) {
        ctx->pc = 0x244254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244250u;
        // 0x244254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244258u;
        goto label_fallthrough_0x244250;
    }
    ctx->pc = 0x244250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244250u;
        // 0x244254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244250:
    ctx->pc = 0x244258u;
}
