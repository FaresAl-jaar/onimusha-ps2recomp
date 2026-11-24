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

// Function: sub_00113138
// Address: 0x113138 - 0x113278
void sub_00113138_0x113138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113138_0x113138");
#endif

    switch (ctx->pc) {
        case 0x11315cu: goto label_11315c;
        case 0x113174u: goto label_113174;
        case 0x11317cu: goto label_11317c;
        case 0x11318cu: goto label_11318c;
        case 0x1131a0u: goto label_1131a0;
        case 0x1131b0u: goto label_1131b0;
        case 0x1131f0u: goto label_1131f0;
        case 0x113238u: goto label_113238;
        case 0x113248u: goto label_113248;
        case 0x11325cu: goto label_11325c;
        default: break;
    }

    ctx->pc = 0x113138u;

    // 0x113138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11313c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x113140: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x113140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x113144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x113148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11314c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11314cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113150: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x113150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x113154: 0xc044b50  jal         func_112D40
    ctx->pc = 0x113154u;
    SET_GPR_U32(ctx, 31, 0x11315Cu);
    ctx->pc = 0x113158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113154u;
    // 0x113158: 0x240400fe  addiu       $a0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x113154u, 0x11315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11315Cu;
label_11315c:
    // 0x11315c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11315cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x113160: 0x8c622b3c  lw          $v0, 0x2B3C($v1)
    ctx->pc = 0x113160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x113164: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113164u;
    {
        const bool branch_taken_0x113164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113164) {
            ctx->pc = 0x113174u;
            goto label_113174;
        }
    }
    ctx->pc = 0x11316Cu;
    // 0x11316c: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x11316Cu;
    SET_GPR_U32(ctx, 31, 0x113174u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x11316Cu, 0x113174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113174u;
label_113174:
    // 0x113174: 0xc044c1c  jal         func_113070
    ctx->pc = 0x113174u;
    SET_GPR_U32(ctx, 31, 0x11317Cu);
    ctx->pc = 0x113070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113070u, 0x113174u, 0x11317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11317Cu;
label_11317c:
    // 0x11317c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11317Cu;
    {
        const bool branch_taken_0x11317c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11317c) {
            ctx->pc = 0x113198u;
            goto label_113198;
        }
    }
    ctx->pc = 0x113184u;
    // 0x113184: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x113184u;
    SET_GPR_U32(ctx, 31, 0x11318Cu);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x113184u, 0x11318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11318Cu;
label_11318c:
    // 0x11318c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x11318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x113190: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x113190u;
    {
        const bool branch_taken_0x113190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113190u;
        // 0x113194: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113190) {
            ctx->pc = 0x113260u;
            goto label_113260;
        }
    }
    ctx->pc = 0x113198u;
label_113198:
    // 0x113198: 0xc0449b2  jal         func_1126C8
    ctx->pc = 0x113198u;
    SET_GPR_U32(ctx, 31, 0x1131A0u);
    ctx->pc = 0x1126C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126C8u, 0x113198u, 0x1131A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131A0u;
label_1131a0:
    // 0x1131a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1131A0u;
    {
        const bool branch_taken_0x1131a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131A0u;
        // 0x1131a4: 0x32023fff  andi        $v0, $s0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131a0) {
            ctx->pc = 0x1131B8u;
            goto label_1131b8;
        }
    }
    ctx->pc = 0x1131A8u;
    // 0x1131a8: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1131A8u;
    SET_GPR_U32(ctx, 31, 0x1131B0u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1131A8u, 0x1131B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131B0u;
label_1131b0:
    // 0x1131b0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1131B0u;
    {
        const bool branch_taken_0x1131b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131B0u;
        // 0x1131b4: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131b0) {
            ctx->pc = 0x113260u;
            goto label_113260;
        }
    }
    ctx->pc = 0x1131B8u;
label_1131b8:
    // 0x1131b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1131B8u;
    {
        const bool branch_taken_0x1131b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1131b8) {
            ctx->pc = 0x1131E8u;
            goto label_1131e8;
        }
    }
    ctx->pc = 0x1131C0u;
    // 0x1131c0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1131C0u;
    {
        const bool branch_taken_0x1131c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131C0u;
        // 0x1131c4: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131c0) {
            ctx->pc = 0x1131E8u;
            goto label_1131e8;
        }
    }
    ctx->pc = 0x1131C8u;
    // 0x1131c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1131c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1131cc: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1131ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1131d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1131D0u;
    {
        const bool branch_taken_0x1131d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1131d0) {
            ctx->pc = 0x1131E8u;
            goto label_1131e8;
        }
    }
    ctx->pc = 0x1131D8u;
    // 0x1131d8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1131D8u;
    {
        const bool branch_taken_0x1131d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131D8u;
        // 0x1131dc: 0x2e220021  sltiu       $v0, $s1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131d8) {
            ctx->pc = 0x1131E8u;
            goto label_1131e8;
        }
    }
    ctx->pc = 0x1131E0u;
    // 0x1131e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1131E0u;
    {
        const bool branch_taken_0x1131e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1131E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131E0u;
        // 0x1131e4: 0x3c030069  lui         $v1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131e0) {
            ctx->pc = 0x1131F8u;
            goto label_1131f8;
        }
    }
    ctx->pc = 0x1131E8u;
label_1131e8:
    // 0x1131e8: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1131E8u;
    SET_GPR_U32(ctx, 31, 0x1131F0u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1131E8u, 0x1131F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131F0u;
label_1131f0:
    // 0x1131f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1131F0u;
    {
        const bool branch_taken_0x1131f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131F0u;
        // 0x1131f4: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131f0) {
            ctx->pc = 0x113260u;
            goto label_113260;
        }
    }
    ctx->pc = 0x1131F8u;
label_1131f8:
    // 0x1131f8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1131f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1131fc: 0x2467ec80  addiu       $a3, $v1, -0x1380
    ctx->pc = 0x1131fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x113200: 0xac70ec80  sw          $s0, -0x1380($v1)
    ctx->pc = 0x113200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962304), GPR_U32(ctx, 16));
    // 0x113204: 0xacf10004  sw          $s1, 0x4($a3)
    ctx->pc = 0x113204u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 17));
    // 0x113208: 0x2452f8c0  addiu       $s2, $v0, -0x740
    ctx->pc = 0x113208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x11320c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11320cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x113210: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113214: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x113214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x113218: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11321c: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x11321cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x113220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113224: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x113224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x113228: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x113228u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11322c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11322cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113230: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x113230u;
    SET_GPR_U32(ctx, 31, 0x113238u);
    ctx->pc = 0x113234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113230u;
    // 0x113234: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x113230u, 0x113238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113238u;
label_113238:
    // 0x113238: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113238u;
    {
        const bool branch_taken_0x113238 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x11323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113238u;
        // 0x11323c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113238) {
            ctx->pc = 0x113250u;
            goto label_113250;
        }
    }
    ctx->pc = 0x113240u;
    // 0x113240: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x113240u;
    SET_GPR_U32(ctx, 31, 0x113248u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x113240u, 0x113248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113248u;
label_113248:
    // 0x113248: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113248u;
    {
        const bool branch_taken_0x113248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113248u;
        // 0x11324c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113248) {
            ctx->pc = 0x113260u;
            goto label_113260;
        }
    }
    ctx->pc = 0x113250u;
label_113250:
    // 0x113250: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x113250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x113254: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x113254u;
    SET_GPR_U32(ctx, 31, 0x11325Cu);
    ctx->pc = 0x113258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113254u;
    // 0x113258: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x113254u, 0x11325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11325Cu;
label_11325c:
    // 0x11325c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11325cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113260:
    // 0x113260: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x113260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113264: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x113264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113268: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x113268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11326c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11326cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113270: 0x3e00008  jr          $ra
    ctx->pc = 0x113270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113270u;
        // 0x113274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113278u;
}
