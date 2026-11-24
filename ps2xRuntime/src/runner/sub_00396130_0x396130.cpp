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

// Function: sub_00396130
// Address: 0x396130 - 0x396278
void sub_00396130_0x396130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396130_0x396130");
#endif

    switch (ctx->pc) {
        case 0x396144u: goto label_396144;
        case 0x39615cu: goto label_39615c;
        case 0x3961c0u: goto label_3961c0;
        case 0x3961dcu: goto label_3961dc;
        case 0x3961f0u: goto label_3961f0;
        case 0x396210u: goto label_396210;
        case 0x396220u: goto label_396220;
        case 0x396230u: goto label_396230;
        case 0x396240u: goto label_396240;
        case 0x396250u: goto label_396250;
        case 0x396260u: goto label_396260;
        case 0x396268u: goto label_396268;
        default: break;
    }

    ctx->pc = 0x396130u;

    // 0x396130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39613c: 0xc0e57f0  jal         func_395FC0
    ctx->pc = 0x39613Cu;
    SET_GPR_U32(ctx, 31, 0x396144u);
    ctx->pc = 0x396140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39613Cu;
    // 0x396140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395FC0u, 0x39613Cu, 0x396144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396144u;
label_396144:
    // 0x396144: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x396144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x396148: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x396148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x39614c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39614Cu;
    {
        const bool branch_taken_0x39614c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39614Cu;
        // 0x396150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39614c) {
            ctx->pc = 0x396160u;
            goto label_396160;
        }
    }
    ctx->pc = 0x396154u;
    // 0x396154: 0xc0e5808  jal         func_396020
    ctx->pc = 0x396154u;
    SET_GPR_U32(ctx, 31, 0x39615Cu);
    ctx->pc = 0x396020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396020u, 0x396154u, 0x39615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39615Cu;
label_39615c:
    // 0x39615c: 0x0  nop
    ctx->pc = 0x39615cu;
    // NOP
label_396160:
    // 0x396160: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x396160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x396164: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x396164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x396168: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x396168u;
    {
        const bool branch_taken_0x396168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396168u;
        // 0x39616c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396168) {
            ctx->pc = 0x396258u;
            goto label_396258;
        }
    }
    ctx->pc = 0x396170u;
    // 0x396170: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x396170u;
    {
        const bool branch_taken_0x396170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x396170) {
            ctx->pc = 0x396248u;
            goto label_396248;
        }
    }
    ctx->pc = 0x396178u;
    // 0x396178: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x396178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39617c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x39617Cu;
    {
        const bool branch_taken_0x39617c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x396180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39617Cu;
        // 0x396180: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39617c) {
            ctx->pc = 0x396238u;
            goto label_396238;
        }
    }
    ctx->pc = 0x396184u;
    // 0x396184: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x396184u;
    {
        const bool branch_taken_0x396184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x396184) {
            ctx->pc = 0x396228u;
            goto label_396228;
        }
    }
    ctx->pc = 0x39618Cu;
    // 0x39618c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x39618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x396190: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x396190u;
    {
        const bool branch_taken_0x396190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x396194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396190u;
        // 0x396194: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396190) {
            ctx->pc = 0x396218u;
            goto label_396218;
        }
    }
    ctx->pc = 0x396198u;
    // 0x396198: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x396198u;
    {
        const bool branch_taken_0x396198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x396198) {
            ctx->pc = 0x396208u;
            goto label_396208;
        }
    }
    ctx->pc = 0x3961A0u;
    // 0x3961a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3961a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3961a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3961A4u;
    {
        const bool branch_taken_0x3961a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3961a4) {
            ctx->pc = 0x3961B8u;
            goto label_3961b8;
        }
    }
    ctx->pc = 0x3961ACu;
    // 0x3961ac: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3961ACu;
    {
        const bool branch_taken_0x3961ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3961ac) {
            ctx->pc = 0x396260u;
            goto label_396260;
        }
    }
    ctx->pc = 0x3961B4u;
    // 0x3961b4: 0x0  nop
    ctx->pc = 0x3961b4u;
    // NOP
label_3961b8:
    // 0x3961b8: 0xc09759c  jal         func_25D670
    ctx->pc = 0x3961B8u;
    SET_GPR_U32(ctx, 31, 0x3961C0u);
    ctx->pc = 0x3961BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3961B8u;
    // 0x3961bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D670u, 0x3961B8u, 0x3961C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3961C0u;
label_3961c0:
    // 0x3961c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3961C0u;
    {
        const bool branch_taken_0x3961c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3961c0) {
            ctx->pc = 0x3961F8u;
            goto label_3961f8;
        }
    }
    ctx->pc = 0x3961C8u;
    // 0x3961c8: 0x92022b36  lbu         $v0, 0x2B36($s0)
    ctx->pc = 0x3961c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11062)));
    // 0x3961cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3961CCu;
    {
        const bool branch_taken_0x3961cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3961D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3961CCu;
        // 0x3961d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3961cc) {
            ctx->pc = 0x3961E8u;
            goto label_3961e8;
        }
    }
    ctx->pc = 0x3961D4u;
    // 0x3961d4: 0xc0e569c  jal         func_395A70
    ctx->pc = 0x3961D4u;
    SET_GPR_U32(ctx, 31, 0x3961DCu);
    ctx->pc = 0x395A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395A70u, 0x3961D4u, 0x3961DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3961DCu;
label_3961dc:
    // 0x3961dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3961DCu;
    {
        const bool branch_taken_0x3961dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3961dc) {
            ctx->pc = 0x396260u;
            goto label_396260;
        }
    }
    ctx->pc = 0x3961E4u;
    // 0x3961e4: 0x0  nop
    ctx->pc = 0x3961e4u;
    // NOP
label_3961e8:
    // 0x3961e8: 0xc0e565c  jal         func_395970
    ctx->pc = 0x3961E8u;
    SET_GPR_U32(ctx, 31, 0x3961F0u);
    ctx->pc = 0x3961ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3961E8u;
    // 0x3961ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395970u, 0x3961E8u, 0x3961F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3961F0u;
label_3961f0:
    // 0x3961f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3961F0u;
    {
        const bool branch_taken_0x3961f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3961f0) {
            ctx->pc = 0x396260u;
            goto label_396260;
        }
    }
    ctx->pc = 0x3961F8u;
label_3961f8:
    // 0x3961f8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3961f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3961fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3961fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x396200: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x396200u;
    {
        const bool branch_taken_0x396200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396200u;
        // 0x396204: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396200) {
            ctx->pc = 0x396260u;
            goto label_396260;
        }
    }
    ctx->pc = 0x396208u;
label_396208:
    // 0x396208: 0xc0e5524  jal         func_395490
    ctx->pc = 0x396208u;
    SET_GPR_U32(ctx, 31, 0x396210u);
    ctx->pc = 0x39620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396208u;
    // 0x39620c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395490u, 0x396208u, 0x396210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396210u;
label_396210:
    // 0x396210: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x396210u;
    {
        const bool branch_taken_0x396210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396210) {
            ctx->pc = 0x396260u;
            goto label_396260;
        }
    }
    ctx->pc = 0x396218u;
label_396218:
    // 0x396218: 0xc0e5550  jal         func_395540
    ctx->pc = 0x396218u;
    SET_GPR_U32(ctx, 31, 0x396220u);
    ctx->pc = 0x39621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396218u;
    // 0x39621c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395540u, 0x396218u, 0x396220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396220u;
label_396220:
    // 0x396220: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x396220u;
    {
        const bool branch_taken_0x396220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396220) {
            ctx->pc = 0x396260u;
            goto label_396260;
        }
    }
    ctx->pc = 0x396228u;
label_396228:
    // 0x396228: 0xc0e5568  jal         func_3955A0
    ctx->pc = 0x396228u;
    SET_GPR_U32(ctx, 31, 0x396230u);
    ctx->pc = 0x39622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396228u;
    // 0x39622c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3955A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3955A0u, 0x396228u, 0x396230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396230u;
label_396230:
    // 0x396230: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x396230u;
    {
        const bool branch_taken_0x396230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396230) {
            ctx->pc = 0x396260u;
            goto label_396260;
        }
    }
    ctx->pc = 0x396238u;
label_396238:
    // 0x396238: 0xc0e55c4  jal         func_395710
    ctx->pc = 0x396238u;
    SET_GPR_U32(ctx, 31, 0x396240u);
    ctx->pc = 0x39623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396238u;
    // 0x39623c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395710u, 0x396238u, 0x396240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396240u;
label_396240:
    // 0x396240: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x396240u;
    {
        const bool branch_taken_0x396240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396240) {
            ctx->pc = 0x396260u;
            goto label_396260;
        }
    }
    ctx->pc = 0x396248u;
label_396248:
    // 0x396248: 0xc0e55dc  jal         func_395770
    ctx->pc = 0x396248u;
    SET_GPR_U32(ctx, 31, 0x396250u);
    ctx->pc = 0x39624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396248u;
    // 0x39624c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395770u, 0x396248u, 0x396250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396250u;
label_396250:
    // 0x396250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x396250u;
    {
        const bool branch_taken_0x396250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396250) {
            ctx->pc = 0x396260u;
            goto label_396260;
        }
    }
    ctx->pc = 0x396258u;
label_396258:
    // 0x396258: 0xc0e561c  jal         func_395870
    ctx->pc = 0x396258u;
    SET_GPR_U32(ctx, 31, 0x396260u);
    ctx->pc = 0x39625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396258u;
    // 0x39625c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395870u, 0x396258u, 0x396260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396260u;
label_396260:
    // 0x396260: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x396260u;
    SET_GPR_U32(ctx, 31, 0x396268u);
    ctx->pc = 0x396264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396260u;
    // 0x396264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x396260u, 0x396268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396268u;
label_396268:
    // 0x396268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39626c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39626cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396270: 0x3e00008  jr          $ra
    ctx->pc = 0x396270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396270u;
        // 0x396274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396278u;
}
