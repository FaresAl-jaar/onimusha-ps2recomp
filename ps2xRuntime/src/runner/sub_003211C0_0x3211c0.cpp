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

// Function: sub_003211C0
// Address: 0x3211c0 - 0x321284
void sub_003211C0_0x3211c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003211C0_0x3211c0");
#endif

    switch (ctx->pc) {
        case 0x3211f0u: goto label_3211f0;
        case 0x3211fcu: goto label_3211fc;
        case 0x321208u: goto label_321208;
        case 0x321220u: goto label_321220;
        case 0x32122cu: goto label_32122c;
        case 0x321238u: goto label_321238;
        case 0x321250u: goto label_321250;
        case 0x32125cu: goto label_32125c;
        case 0x321268u: goto label_321268;
        default: break;
    }

    ctx->pc = 0x3211c0u;

    // 0x3211c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3211c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3211c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3211c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3211c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3211c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3211cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3211ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3211d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3211d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3211d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3211d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3211d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3211d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3211dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3211dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3211e0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3211e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3211e4: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x3211e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3211e8: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x3211E8u;
    SET_GPR_U32(ctx, 31, 0x3211F0u);
    ctx->pc = 0x3211ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3211E8u;
    // 0x3211ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211B0u, 0x3211E8u, 0x3211F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3211F0u;
label_3211f0:
    // 0x3211f0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x3211f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3211f4: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x3211F4u;
    SET_GPR_U32(ctx, 31, 0x3211FCu);
    ctx->pc = 0x3211F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3211F4u;
    // 0x3211f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211B0u, 0x3211F4u, 0x3211FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3211FCu;
label_3211fc:
    // 0x3211fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3211fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321200: 0xc0c8440  jal         func_321100
    ctx->pc = 0x321200u;
    SET_GPR_U32(ctx, 31, 0x321208u);
    ctx->pc = 0x321204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321200u;
    // 0x321204: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321100u, 0x321200u, 0x321208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321208u;
label_321208:
    // 0x321208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321208u;
    {
        const bool branch_taken_0x321208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321208) {
            ctx->pc = 0x321218u;
            goto label_321218;
        }
    }
    ctx->pc = 0x321210u;
    // 0x321210: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x321210u;
    {
        const bool branch_taken_0x321210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321210u;
        // 0x321214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321210) {
            ctx->pc = 0x321268u;
            goto label_321268;
        }
    }
    ctx->pc = 0x321218u;
label_321218:
    // 0x321218: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x321218u;
    SET_GPR_U32(ctx, 31, 0x321220u);
    ctx->pc = 0x32121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321218u;
    // 0x32121c: 0x92640006  lbu         $a0, 0x6($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211B0u, 0x321218u, 0x321220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321220u;
label_321220:
    // 0x321220: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x321220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x321224: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x321224u;
    SET_GPR_U32(ctx, 31, 0x32122Cu);
    ctx->pc = 0x321228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321224u;
    // 0x321228: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211B0u, 0x321224u, 0x32122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32122Cu;
label_32122c:
    // 0x32122c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32122cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321230: 0xc0c8440  jal         func_321100
    ctx->pc = 0x321230u;
    SET_GPR_U32(ctx, 31, 0x321238u);
    ctx->pc = 0x321234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321230u;
    // 0x321234: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321100u, 0x321230u, 0x321238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321238u;
label_321238:
    // 0x321238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321238u;
    {
        const bool branch_taken_0x321238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321238) {
            ctx->pc = 0x321248u;
            goto label_321248;
        }
    }
    ctx->pc = 0x321240u;
    // 0x321240: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x321240u;
    {
        const bool branch_taken_0x321240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321240u;
        // 0x321244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321240) {
            ctx->pc = 0x321268u;
            goto label_321268;
        }
    }
    ctx->pc = 0x321248u;
label_321248:
    // 0x321248: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x321248u;
    SET_GPR_U32(ctx, 31, 0x321250u);
    ctx->pc = 0x32124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321248u;
    // 0x32124c: 0x92640007  lbu         $a0, 0x7($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211B0u, 0x321248u, 0x321250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321250u;
label_321250:
    // 0x321250: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x321250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x321254: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x321254u;
    SET_GPR_U32(ctx, 31, 0x32125Cu);
    ctx->pc = 0x321258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321254u;
    // 0x321258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211B0u, 0x321254u, 0x32125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32125Cu;
label_32125c:
    // 0x32125c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32125cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321260: 0xc0c8440  jal         func_321100
    ctx->pc = 0x321260u;
    SET_GPR_U32(ctx, 31, 0x321268u);
    ctx->pc = 0x321264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321260u;
    // 0x321264: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321100u, 0x321260u, 0x321268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321268u;
label_321268:
    // 0x321268: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x321268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32126c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32126cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32127c: 0x3e00008  jr          $ra
    ctx->pc = 0x32127Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32127Cu;
        // 0x321280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32127Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321284u;
}
