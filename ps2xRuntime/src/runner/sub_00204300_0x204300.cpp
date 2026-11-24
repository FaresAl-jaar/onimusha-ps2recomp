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

// Function: sub_00204300
// Address: 0x204300 - 0x204468
void sub_00204300_0x204300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204300_0x204300");
#endif

    switch (ctx->pc) {
        case 0x20432cu: goto label_20432c;
        case 0x204344u: goto label_204344;
        case 0x204354u: goto label_204354;
        case 0x204368u: goto label_204368;
        case 0x204370u: goto label_204370;
        case 0x204384u: goto label_204384;
        case 0x2043a8u: goto label_2043a8;
        case 0x2043b8u: goto label_2043b8;
        case 0x2043c8u: goto label_2043c8;
        case 0x2043e0u: goto label_2043e0;
        case 0x20440cu: goto label_20440c;
        case 0x20441cu: goto label_20441c;
        case 0x204438u: goto label_204438;
        default: break;
    }

    ctx->pc = 0x204300u;

    // 0x204300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x204300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x204304: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x204304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x204308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20430c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x204310: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x204310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x204314: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x204314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x204318: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x204318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20431c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20431cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x204320: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x204320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x204324: 0xc081d84  jal         func_207610
    ctx->pc = 0x204324u;
    SET_GPR_U32(ctx, 31, 0x20432Cu);
    ctx->pc = 0x204328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204324u;
    // 0x204328: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x204324u, 0x20432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20432Cu;
label_20432c:
    // 0x20432c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20432cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204330: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x204330u;
    {
        const bool branch_taken_0x204330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204330u;
        // 0x204334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204330) {
            ctx->pc = 0x204360u;
            goto label_204360;
        }
    }
    ctx->pc = 0x204338u;
    // 0x204338: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20433c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20433Cu;
    SET_GPR_U32(ctx, 31, 0x204344u);
    ctx->pc = 0x204340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20433Cu;
    // 0x204340: 0x24846b50  addiu       $a0, $a0, 0x6B50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20433Cu, 0x204344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204344u;
label_204344:
    // 0x204344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20434c: 0xc049590  jal         func_125640
    ctx->pc = 0x20434Cu;
    SET_GPR_U32(ctx, 31, 0x204354u);
    ctx->pc = 0x204350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20434Cu;
    // 0x204350: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x20434Cu, 0x204354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204354u;
label_204354:
    // 0x204354: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x204354u;
    {
        const bool branch_taken_0x204354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204354u;
        // 0x204358: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204354) {
            ctx->pc = 0x204444u;
            goto label_204444;
        }
    }
    ctx->pc = 0x20435Cu;
    // 0x20435c: 0x0  nop
    ctx->pc = 0x20435cu;
    // NOP
label_204360:
    // 0x204360: 0xc08111a  jal         func_204468
    ctx->pc = 0x204360u;
    SET_GPR_U32(ctx, 31, 0x204368u);
    ctx->pc = 0x204364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204360u;
    // 0x204364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204468u, 0x204360u, 0x204368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204368u;
label_204368:
    // 0x204368: 0xc081c12  jal         func_207048
    ctx->pc = 0x204368u;
    SET_GPR_U32(ctx, 31, 0x204370u);
    ctx->pc = 0x20436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204368u;
    // 0x20436c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x204368u, 0x204370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204370u;
label_204370:
    // 0x204370: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x204370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204374: 0x1220fff3  beqz        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x204374u;
    {
        const bool branch_taken_0x204374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x204378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204374u;
        // 0x204378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204374) {
            ctx->pc = 0x204344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204344;
        }
    }
    ctx->pc = 0x20437Cu;
    // 0x20437c: 0xc0878d8  jal         func_21E360
    ctx->pc = 0x20437Cu;
    SET_GPR_U32(ctx, 31, 0x204384u);
    ctx->pc = 0x204380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20437Cu;
    // 0x204380: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E360u, 0x20437Cu, 0x204384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204384u;
label_204384:
    // 0x204384: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x204384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204388: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x204388u;
    {
        const bool branch_taken_0x204388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204388) {
            ctx->pc = 0x20438Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204388u;
            // 0x20438c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204444u;
            goto label_204444;
        }
    }
    ctx->pc = 0x204390u;
    // 0x204390: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x204394: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x204394u;
    {
        const bool branch_taken_0x204394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204394u;
        // 0x204398: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204394) {
            ctx->pc = 0x2043ECu;
            goto label_2043ec;
        }
    }
    ctx->pc = 0x20439Cu;
    // 0x20439c: 0x8e140018  lw          $s4, 0x18($s0)
    ctx->pc = 0x20439cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2043a0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2043a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2043a4: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x2043a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2043a8:
    // 0x2043a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2043A8u;
    {
        const bool branch_taken_0x2043a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A8u;
        // 0x2043ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043a8) {
            ctx->pc = 0x2043E8u;
            goto label_2043e8;
        }
    }
    ctx->pc = 0x2043B0u;
    // 0x2043b0: 0xc081336  jal         func_204CD8
    ctx->pc = 0x2043B0u;
    SET_GPR_U32(ctx, 31, 0x2043B8u);
    ctx->pc = 0x2043B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2043B0u;
    // 0x2043b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204CD8u, 0x2043B0u, 0x2043B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043B8u;
label_2043b8:
    // 0x2043b8: 0x1455000b  bne         $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2043B8u;
    {
        const bool branch_taken_0x2043b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2043BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043B8u;
        // 0x2043bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043b8) {
            ctx->pc = 0x2043E8u;
            goto label_2043e8;
        }
    }
    ctx->pc = 0x2043C0u;
    // 0x2043c0: 0xc087916  jal         func_21E458
    ctx->pc = 0x2043C0u;
    SET_GPR_U32(ctx, 31, 0x2043C8u);
    ctx->pc = 0x2043C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2043C0u;
    // 0x2043c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E458u, 0x2043C0u, 0x2043C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043C8u;
label_2043c8:
    // 0x2043c8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x2043c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2043cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2043ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2043d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2043d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2043d8: 0xc0878d8  jal         func_21E360
    ctx->pc = 0x2043D8u;
    SET_GPR_U32(ctx, 31, 0x2043E0u);
    ctx->pc = 0x2043DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2043D8u;
    // 0x2043dc: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E360u, 0x2043D8u, 0x2043E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043E0u;
label_2043e0:
    // 0x2043e0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x2043E0u;
    {
        const bool branch_taken_0x2043e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043E0u;
        // 0x2043e4: 0x274102a  slt         $v0, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043e0) {
            ctx->pc = 0x2043A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2043a8;
        }
    }
    ctx->pc = 0x2043E8u;
label_2043e8:
    // 0x2043e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2043ec:
    // 0x2043ec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2043ECu;
    {
        const bool branch_taken_0x2043ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2043F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043ECu;
        // 0x2043f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043ec) {
            ctx->pc = 0x204440u;
            goto label_204440;
        }
    }
    ctx->pc = 0x2043F4u;
    // 0x2043f4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2043f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2043f8: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x2043f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x2043fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2043fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204400: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x204400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204404: 0xc081242  jal         func_204908
    ctx->pc = 0x204404u;
    SET_GPR_U32(ctx, 31, 0x20440Cu);
    ctx->pc = 0x204408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204404u;
    // 0x204408: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x204404u, 0x20440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20440Cu;
label_20440c:
    // 0x20440c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204410: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x204410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204414: 0xc081140  jal         func_204500
    ctx->pc = 0x204414u;
    SET_GPR_U32(ctx, 31, 0x20441Cu);
    ctx->pc = 0x204418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204414u;
    // 0x204418: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204500u, 0x204414u, 0x20441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20441Cu;
label_20441c:
    // 0x20441c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x20441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x204420: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x204420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x204424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204428: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x204428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x20442c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20442cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204430: 0xc08112c  jal         func_2044B0
    ctx->pc = 0x204430u;
    SET_GPR_U32(ctx, 31, 0x204438u);
    ctx->pc = 0x204434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204430u;
    // 0x204434: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044B0u, 0x204430u, 0x204438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204438u;
label_204438:
    // 0x204438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204438u;
    {
        const bool branch_taken_0x204438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204438u;
        // 0x20443c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204438) {
            ctx->pc = 0x204448u;
            goto label_204448;
        }
    }
    ctx->pc = 0x204440u;
label_204440:
    // 0x204440: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x204440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_204444:
    // 0x204444: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x204444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_204448:
    // 0x204448: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x204448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20444c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20444cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204450: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x204450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x204454: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x204454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204458: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x204458u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20445c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20445cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204460: 0x3e00008  jr          $ra
    ctx->pc = 0x204460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204460u;
        // 0x204464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204468u;
}
