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

// Function: sub_003471B0
// Address: 0x3471b0 - 0x34727c
void sub_003471B0_0x3471b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003471B0_0x3471b0");
#endif

    switch (ctx->pc) {
        case 0x347210u: goto label_347210;
        case 0x347220u: goto label_347220;
        case 0x347230u: goto label_347230;
        case 0x347240u: goto label_347240;
        case 0x347250u: goto label_347250;
        case 0x347260u: goto label_347260;
        default: break;
    }

    ctx->pc = 0x3471b0u;

    // 0x3471b0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3471b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x3471b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3471b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3471b8: 0x34436641  ori         $v1, $v0, 0x6641
    ctx->pc = 0x3471b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26177);
    // 0x3471bc: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3471BCu;
    {
        const bool branch_taken_0x3471bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471BCu;
        // 0x3471c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3471bc) {
            ctx->pc = 0x347258u;
            goto label_347258;
        }
    }
    ctx->pc = 0x3471C4u;
    // 0x3471c4: 0x34422f95  ori         $v0, $v0, 0x2F95
    ctx->pc = 0x3471c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12181);
    // 0x3471c8: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3471C8u;
    {
        const bool branch_taken_0x3471c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3471c8) {
            ctx->pc = 0x347248u;
            goto label_347248;
        }
    }
    ctx->pc = 0x3471D0u;
    // 0x3471d0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3471d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3471d4: 0x34421a4a  ori         $v0, $v0, 0x1A4A
    ctx->pc = 0x3471d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6730);
    // 0x3471d8: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3471D8u;
    {
        const bool branch_taken_0x3471d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3471DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471D8u;
        // 0x3471dc: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3471d8) {
            ctx->pc = 0x347238u;
            goto label_347238;
        }
    }
    ctx->pc = 0x3471E0u;
    // 0x3471e0: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3471E0u;
    {
        const bool branch_taken_0x3471e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3471e0) {
            ctx->pc = 0x347228u;
            goto label_347228;
        }
    }
    ctx->pc = 0x3471E8u;
    // 0x3471e8: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x3471e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x3471ec: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3471ECu;
    {
        const bool branch_taken_0x3471ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3471F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471ECu;
        // 0x3471f0: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3471ec) {
            ctx->pc = 0x347218u;
            goto label_347218;
        }
    }
    ctx->pc = 0x3471F4u;
    // 0x3471f4: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3471F4u;
    {
        const bool branch_taken_0x3471f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3471f4) {
            ctx->pc = 0x347208u;
            goto label_347208;
        }
    }
    ctx->pc = 0x3471FCu;
    // 0x3471fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3471FCu;
    {
        const bool branch_taken_0x3471fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3471fc) {
            ctx->pc = 0x347268u;
            goto label_347268;
        }
    }
    ctx->pc = 0x347204u;
    // 0x347204: 0x0  nop
    ctx->pc = 0x347204u;
    // NOP
label_347208:
    // 0x347208: 0xc0d1ca0  jal         func_347280
    ctx->pc = 0x347208u;
    SET_GPR_U32(ctx, 31, 0x347210u);
    ctx->pc = 0x347280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347280u, 0x347208u, 0x347210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347210u;
label_347210:
    // 0x347210: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x347210u;
    {
        const bool branch_taken_0x347210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347210u;
        // 0x347214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347210) {
            ctx->pc = 0x347270u;
            goto label_347270;
        }
    }
    ctx->pc = 0x347218u;
label_347218:
    // 0x347218: 0xc0d1cd4  jal         func_347350
    ctx->pc = 0x347218u;
    SET_GPR_U32(ctx, 31, 0x347220u);
    ctx->pc = 0x347350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347350u, 0x347218u, 0x347220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347220u;
label_347220:
    // 0x347220: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x347220u;
    {
        const bool branch_taken_0x347220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347220u;
        // 0x347224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347220) {
            ctx->pc = 0x347270u;
            goto label_347270;
        }
    }
    ctx->pc = 0x347228u;
label_347228:
    // 0x347228: 0xc0d1cf4  jal         func_3473D0
    ctx->pc = 0x347228u;
    SET_GPR_U32(ctx, 31, 0x347230u);
    ctx->pc = 0x3473D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3473D0u, 0x347228u, 0x347230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347230u;
label_347230:
    // 0x347230: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x347230u;
    {
        const bool branch_taken_0x347230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347230u;
        // 0x347234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347230) {
            ctx->pc = 0x347270u;
            goto label_347270;
        }
    }
    ctx->pc = 0x347238u;
label_347238:
    // 0x347238: 0xc0d1d18  jal         func_347460
    ctx->pc = 0x347238u;
    SET_GPR_U32(ctx, 31, 0x347240u);
    ctx->pc = 0x347460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347460u, 0x347238u, 0x347240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347240u;
label_347240:
    // 0x347240: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x347240u;
    {
        const bool branch_taken_0x347240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347240u;
        // 0x347244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347240) {
            ctx->pc = 0x347270u;
            goto label_347270;
        }
    }
    ctx->pc = 0x347248u;
label_347248:
    // 0x347248: 0xc0d1d28  jal         func_3474A0
    ctx->pc = 0x347248u;
    SET_GPR_U32(ctx, 31, 0x347250u);
    ctx->pc = 0x3474A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3474A0u, 0x347248u, 0x347250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347250u;
label_347250:
    // 0x347250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x347250u;
    {
        const bool branch_taken_0x347250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347250u;
        // 0x347254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347250) {
            ctx->pc = 0x347270u;
            goto label_347270;
        }
    }
    ctx->pc = 0x347258u;
label_347258:
    // 0x347258: 0xc0d1d4c  jal         func_347530
    ctx->pc = 0x347258u;
    SET_GPR_U32(ctx, 31, 0x347260u);
    ctx->pc = 0x347530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347530u, 0x347258u, 0x347260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347260u;
label_347260:
    // 0x347260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x347260u;
    {
        const bool branch_taken_0x347260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347260u;
        // 0x347264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347260) {
            ctx->pc = 0x347270u;
            goto label_347270;
        }
    }
    ctx->pc = 0x347268u;
label_347268:
    // 0x347268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x347268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34726c: 0x0  nop
    ctx->pc = 0x34726cu;
    // NOP
label_347270:
    // 0x347270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347274: 0x3e00008  jr          $ra
    ctx->pc = 0x347274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347274u;
        // 0x347278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34727Cu;
}
