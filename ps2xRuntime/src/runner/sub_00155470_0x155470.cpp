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

// Function: sub_00155470
// Address: 0x155470 - 0x15559c
void sub_00155470_0x155470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155470_0x155470");
#endif

    switch (ctx->pc) {
        case 0x155498u: goto label_155498;
        case 0x1554c4u: goto label_1554c4;
        case 0x155528u: goto label_155528;
        case 0x15553cu: goto label_15553c;
        case 0x155560u: goto label_155560;
        default: break;
    }

    ctx->pc = 0x155470u;

    // 0x155470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x155474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x155474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x155478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15547c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155480: 0x8f8285c0  lw          $v0, -0x7A40($gp)
    ctx->pc = 0x155480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x155484: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x155484u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x155488: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x155488u;
    {
        const bool branch_taken_0x155488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155488u;
        // 0x15548c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155488) {
            ctx->pc = 0x155518u;
            goto label_155518;
        }
    }
    ctx->pc = 0x155490u;
    // 0x155490: 0x3c100080  lui         $s0, 0x80
    ctx->pc = 0x155490u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)128 << 16));
    // 0x155494: 0x2610eeb0  addiu       $s0, $s0, -0x1150
    ctx->pc = 0x155494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962864));
label_155498:
    // 0x155498: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x155498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15549c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1554a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1554A0u;
    {
        const bool branch_taken_0x1554a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1554A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554A0u;
        // 0x1554a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554a0) {
            ctx->pc = 0x1554B0u;
            goto label_1554b0;
        }
    }
    ctx->pc = 0x1554A8u;
    // 0x1554a8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1554A8u;
    {
        const bool branch_taken_0x1554a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554a8) {
            ctx->pc = 0x155588u;
            goto label_155588;
        }
    }
    ctx->pc = 0x1554B0u;
label_1554b0:
    // 0x1554b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1554b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1554b4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1554B4u;
    {
        const bool branch_taken_0x1554b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554b4) {
            ctx->pc = 0x155500u;
            goto label_155500;
        }
    }
    ctx->pc = 0x1554BCu;
    // 0x1554bc: 0xc08c550  jal         func_231540
    ctx->pc = 0x1554BCu;
    SET_GPR_U32(ctx, 31, 0x1554C4u);
    ctx->pc = 0x231540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231540u, 0x1554BCu, 0x1554C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554C4u;
label_1554c4:
    // 0x1554c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1554c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1554c8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1554C8u;
    {
        const bool branch_taken_0x1554c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1554CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554C8u;
        // 0x1554cc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554c8) {
            ctx->pc = 0x1554F8u;
            goto label_1554f8;
        }
    }
    ctx->pc = 0x1554D0u;
    // 0x1554d0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1554D0u;
    {
        const bool branch_taken_0x1554d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1554d0) {
            ctx->pc = 0x1554F0u;
            goto label_1554f0;
        }
    }
    ctx->pc = 0x1554D8u;
    // 0x1554d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1554dc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1554DCu;
    {
        const bool branch_taken_0x1554dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1554dc) {
            ctx->pc = 0x155500u;
            goto label_155500;
        }
    }
    ctx->pc = 0x1554E4u;
    // 0x1554e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1554E4u;
    {
        const bool branch_taken_0x1554e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554e4) {
            ctx->pc = 0x155500u;
            goto label_155500;
        }
    }
    ctx->pc = 0x1554ECu;
    // 0x1554ec: 0x0  nop
    ctx->pc = 0x1554ecu;
    // NOP
label_1554f0:
    // 0x1554f0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1554F0u;
    {
        const bool branch_taken_0x1554f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554F0u;
        // 0x1554f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554f0) {
            ctx->pc = 0x155588u;
            goto label_155588;
        }
    }
    ctx->pc = 0x1554F8u;
label_1554f8:
    // 0x1554f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1554F8u;
    {
        const bool branch_taken_0x1554f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554F8u;
        // 0x1554fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554f8) {
            ctx->pc = 0x155588u;
            goto label_155588;
        }
    }
    ctx->pc = 0x155500u;
label_155500:
    // 0x155500: 0x8f8285c0  lw          $v0, -0x7A40($gp)
    ctx->pc = 0x155500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x155504: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x155504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x155508: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x155508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15550c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x15550Cu;
    {
        const bool branch_taken_0x15550c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15550Cu;
        // 0x155510: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15550c) {
            ctx->pc = 0x155498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155498;
        }
    }
    ctx->pc = 0x155514u;
    // 0x155514: 0x0  nop
    ctx->pc = 0x155514u;
    // NOP
label_155518:
    // 0x155518: 0x3c110080  lui         $s1, 0x80
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)128 << 16));
    // 0x15551c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15551cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155520: 0x2631f090  addiu       $s1, $s1, -0xF70
    ctx->pc = 0x155520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963344));
    // 0x155524: 0x0  nop
    ctx->pc = 0x155524u;
    // NOP
label_155528:
    // 0x155528: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x155528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15552c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15552Cu;
    {
        const bool branch_taken_0x15552c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15552c) {
            ctx->pc = 0x155570u;
            goto label_155570;
        }
    }
    ctx->pc = 0x155534u;
    // 0x155534: 0xc08c550  jal         func_231540
    ctx->pc = 0x155534u;
    SET_GPR_U32(ctx, 31, 0x15553Cu);
    ctx->pc = 0x231540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231540u, 0x155534u, 0x15553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15553Cu;
label_15553c:
    // 0x15553c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15553cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155540: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x155540u;
    {
        const bool branch_taken_0x155540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x155540) {
            ctx->pc = 0x155570u;
            goto label_155570;
        }
    }
    ctx->pc = 0x155548u;
    // 0x155548: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x155548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15554c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15554cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x155550: 0x2442f090  addiu       $v0, $v0, -0xF70
    ctx->pc = 0x155550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963344));
    // 0x155554: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x155554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155558: 0xc08c1c2  jal         func_230708
    ctx->pc = 0x155558u;
    SET_GPR_U32(ctx, 31, 0x155560u);
    ctx->pc = 0x15555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155558u;
    // 0x15555c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230708u, 0x155558u, 0x155560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155560u;
label_155560:
    // 0x155560: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x155560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x155564: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x155564u;
    {
        const bool branch_taken_0x155564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155564u;
        // 0x155568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155564) {
            ctx->pc = 0x155588u;
            goto label_155588;
        }
    }
    ctx->pc = 0x15556Cu;
    // 0x15556c: 0x0  nop
    ctx->pc = 0x15556cu;
    // NOP
label_155570:
    // 0x155570: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x155570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x155574: 0x2e020024  sltiu       $v0, $s0, 0x24
    ctx->pc = 0x155574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x155578: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x155578u;
    {
        const bool branch_taken_0x155578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155578u;
        // 0x15557c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155578) {
            ctx->pc = 0x155528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155528;
        }
    }
    ctx->pc = 0x155580u;
    // 0x155580: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155584: 0x0  nop
    ctx->pc = 0x155584u;
    // NOP
label_155588:
    // 0x155588: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x155588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15558c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15558cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155594: 0x3e00008  jr          $ra
    ctx->pc = 0x155594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155594u;
        // 0x155598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15559Cu;
}
