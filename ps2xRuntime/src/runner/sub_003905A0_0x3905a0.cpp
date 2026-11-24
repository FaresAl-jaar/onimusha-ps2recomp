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

// Function: sub_003905A0
// Address: 0x3905a0 - 0x390aac
void sub_003905A0_0x3905a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003905A0_0x3905a0");
#endif

    switch (ctx->pc) {
        case 0x3905c4u: goto label_3905c4;
        case 0x3905f0u: goto label_3905f0;
        case 0x390670u: goto label_390670;
        case 0x390688u: goto label_390688;
        case 0x39069cu: goto label_39069c;
        case 0x3906f4u: goto label_3906f4;
        case 0x390704u: goto label_390704;
        case 0x390714u: goto label_390714;
        case 0x39078cu: goto label_39078c;
        case 0x3907b4u: goto label_3907b4;
        case 0x3907ccu: goto label_3907cc;
        case 0x3907e0u: goto label_3907e0;
        case 0x3907f0u: goto label_3907f0;
        case 0x390820u: goto label_390820;
        case 0x3908a8u: goto label_3908a8;
        case 0x3908e4u: goto label_3908e4;
        case 0x390920u: goto label_390920;
        case 0x390948u: goto label_390948;
        case 0x390990u: goto label_390990;
        case 0x3909d8u: goto label_3909d8;
        case 0x3909e8u: goto label_3909e8;
        case 0x390a98u: goto label_390a98;
        default: break;
    }

    ctx->pc = 0x3905a0u;

    // 0x3905a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3905a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3905a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3905a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3905a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3905a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3905ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3905acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3905b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3905b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3905b4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3905B4u;
    {
        const bool branch_taken_0x3905b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3905B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905B4u;
        // 0x3905b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3905b4) {
            ctx->pc = 0x3905D0u;
            goto label_3905d0;
        }
    }
    ctx->pc = 0x3905BCu;
    // 0x3905bc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3905BCu;
    SET_GPR_U32(ctx, 31, 0x3905C4u);
    ctx->pc = 0x3905C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3905BCu;
    // 0x3905c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3905BCu, 0x3905C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3905C4u;
label_3905c4:
    // 0x3905c4: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x3905C4u;
    {
        const bool branch_taken_0x3905c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3905c4) {
            ctx->pc = 0x390A98u;
            goto label_390a98;
        }
    }
    ctx->pc = 0x3905CCu;
    // 0x3905cc: 0x0  nop
    ctx->pc = 0x3905ccu;
    // NOP
label_3905d0:
    // 0x3905d0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3905D0u;
    {
        const bool branch_taken_0x3905d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3905d0) {
            ctx->pc = 0x3905F8u;
            goto label_3905f8;
        }
    }
    ctx->pc = 0x3905D8u;
    // 0x3905d8: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3905d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3905dc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3905dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3905e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3905E0u;
    {
        const bool branch_taken_0x3905e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3905E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3905E0u;
        // 0x3905e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3905e0) {
            ctx->pc = 0x3905F8u;
            goto label_3905f8;
        }
    }
    ctx->pc = 0x3905E8u;
    // 0x3905e8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3905E8u;
    SET_GPR_U32(ctx, 31, 0x3905F0u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3905E8u, 0x3905F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3905F0u;
label_3905f0:
    // 0x3905f0: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x3905F0u;
    {
        const bool branch_taken_0x3905f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3905f0) {
            ctx->pc = 0x390A98u;
            goto label_390a98;
        }
    }
    ctx->pc = 0x3905F8u;
label_3905f8:
    // 0x3905f8: 0x92240521  lbu         $a0, 0x521($s1)
    ctx->pc = 0x3905f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3905fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3905fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390600: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x390600u;
    {
        const bool branch_taken_0x390600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x390604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390600u;
        // 0x390604: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390600) {
            ctx->pc = 0x3906D0u;
            goto label_3906d0;
        }
    }
    ctx->pc = 0x390608u;
    // 0x390608: 0x10860029  beq         $a0, $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x390608u;
    {
        const bool branch_taken_0x390608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x390608) {
            ctx->pc = 0x3906B0u;
            goto label_3906b0;
        }
    }
    ctx->pc = 0x390610u;
    // 0x390610: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390610u;
    {
        const bool branch_taken_0x390610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x390610) {
            ctx->pc = 0x390620u;
            goto label_390620;
        }
    }
    ctx->pc = 0x390618u;
    // 0x390618: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x390618u;
    {
        const bool branch_taken_0x390618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390618) {
            ctx->pc = 0x390A98u;
            goto label_390a98;
        }
    }
    ctx->pc = 0x390620u;
label_390620:
    // 0x390620: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x390620u;
    {
        const bool branch_taken_0x390620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x390620) {
            ctx->pc = 0x390690u;
            goto label_390690;
        }
    }
    ctx->pc = 0x390628u;
    // 0x390628: 0x9225055d  lbu         $a1, 0x55D($s1)
    ctx->pc = 0x390628u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1373)));
    // 0x39062c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x39062cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x390630: 0x24632218  addiu       $v1, $v1, 0x2218
    ctx->pc = 0x390630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8728));
    // 0x390634: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x390634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x390638: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x390638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x39063c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x39063cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x390640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x390640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x390644: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x390644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x390648: 0x1066000b  beq         $v1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x390648u;
    {
        const bool branch_taken_0x390648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x390648) {
            ctx->pc = 0x390678u;
            goto label_390678;
        }
    }
    ctx->pc = 0x390650u;
    // 0x390650: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x390650u;
    {
        const bool branch_taken_0x390650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390650) {
            ctx->pc = 0x390660u;
            goto label_390660;
        }
    }
    ctx->pc = 0x390658u;
    // 0x390658: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x390658u;
    {
        const bool branch_taken_0x390658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390658) {
            ctx->pc = 0x3906A0u;
            goto label_3906a0;
        }
    }
    ctx->pc = 0x390660u;
label_390660:
    // 0x390660: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x390660u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x390664: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x390664u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x390668: 0xc0aa234  jal         func_2A88D0
    ctx->pc = 0x390668u;
    SET_GPR_U32(ctx, 31, 0x390670u);
    ctx->pc = 0x39066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390668u;
    // 0x39066c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A88D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A88D0u, 0x390668u, 0x390670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390670u;
label_390670:
    // 0x390670: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x390670u;
    {
        const bool branch_taken_0x390670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390670u;
        // 0x390674: 0xae220554  sw          $v0, 0x554($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390670) {
            ctx->pc = 0x3906A0u;
            goto label_3906a0;
        }
    }
    ctx->pc = 0x390678u;
label_390678:
    // 0x390678: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x390678u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x39067c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x39067cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x390680: 0xc0aa244  jal         func_2A8910
    ctx->pc = 0x390680u;
    SET_GPR_U32(ctx, 31, 0x390688u);
    ctx->pc = 0x390684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390680u;
    // 0x390684: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8910u, 0x390680u, 0x390688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390688u;
label_390688:
    // 0x390688: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x390688u;
    {
        const bool branch_taken_0x390688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390688u;
        // 0x39068c: 0xae220554  sw          $v0, 0x554($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390688) {
            ctx->pc = 0x3906A0u;
            goto label_3906a0;
        }
    }
    ctx->pc = 0x390690u;
label_390690:
    // 0x390690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x390690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390694: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x390694u;
    SET_GPR_U32(ctx, 31, 0x39069Cu);
    ctx->pc = 0x390698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390694u;
    // 0x390698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x390694u, 0x39069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39069Cu;
label_39069c:
    // 0x39069c: 0x0  nop
    ctx->pc = 0x39069cu;
    // NOP
label_3906a0:
    // 0x3906a0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3906a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3906a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3906a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3906a8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x3906A8u;
    {
        const bool branch_taken_0x3906a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3906ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906A8u;
        // 0x3906ac: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906a8) {
            ctx->pc = 0x390A98u;
            goto label_390a98;
        }
    }
    ctx->pc = 0x3906B0u;
label_3906b0:
    // 0x3906b0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3906b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3906b4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3906b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3906b8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3906b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3906bc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3906bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3906c0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3906c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3906c4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3906c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3906c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3906c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3906cc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3906ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3906d0:
    // 0x3906d0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3906d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3906d4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3906d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3906d8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3906d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3906dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3906dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3906e0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3906e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3906e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3906e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3906e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3906e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3906ec: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3906ECu;
    SET_GPR_U32(ctx, 31, 0x3906F4u);
    ctx->pc = 0x3906F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3906ECu;
    // 0x3906f0: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3906ECu, 0x3906F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3906F4u;
label_3906f4:
    // 0x3906f4: 0x8e260554  lw          $a2, 0x554($s1)
    ctx->pc = 0x3906f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x3906f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3906f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3906fc: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3906FCu;
    SET_GPR_U32(ctx, 31, 0x390704u);
    ctx->pc = 0x390700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3906FCu;
    // 0x390700: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3906FCu, 0x390704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390704u;
label_390704:
    // 0x390704: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x390704u;
    {
        const bool branch_taken_0x390704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390704u;
        // 0x390708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390704) {
            ctx->pc = 0x390718u;
            goto label_390718;
        }
    }
    ctx->pc = 0x39070Cu;
    // 0x39070c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39070Cu;
    SET_GPR_U32(ctx, 31, 0x390714u);
    ctx->pc = 0x390710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39070Cu;
    // 0x390710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39070Cu, 0x390714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390714u;
label_390714:
    // 0x390714: 0x0  nop
    ctx->pc = 0x390714u;
    // NOP
label_390718:
    // 0x390718: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x390718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39071c: 0x782a5c20  lq          $t2, 0x5C20($at)
    ctx->pc = 0x39071cu;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x665C20u));
    // 0x390720: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x390720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x390724: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x390724u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x390728: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x390728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
    // 0x39072c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39072cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390730: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x390730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x390734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x390734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390738: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x390738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39073c: 0x7faa0060  sq          $t2, 0x60($sp)
    ctx->pc = 0x39073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 10));
    // 0x390740: 0x78295c30  lq          $t1, 0x5C30($at)
    ctx->pc = 0x390740u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C30u));
    // 0x390744: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x390744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x390748: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x390748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
    // 0x39074c: 0x78265c40  lq          $a2, 0x5C40($at)
    ctx->pc = 0x39074cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C40u));
    // 0x390750: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x390750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x390754: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x390754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
    // 0x390758: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x390758u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x39075c: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x39075cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
    // 0x390760: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x390760u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x390764: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x390764u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
    // 0x390768: 0x9226055d  lbu         $a2, 0x55D($s1)
    ctx->pc = 0x390768u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1373)));
    // 0x39076c: 0xc62c0558  lwc1        $f12, 0x558($s1)
    ctx->pc = 0x39076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x390770: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x390770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x390774: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x390774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x390778: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x390778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39077c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390780: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x390780u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x390784: 0xc0c0900  jal         func_302400
    ctx->pc = 0x390784u;
    SET_GPR_U32(ctx, 31, 0x39078Cu);
    ctx->pc = 0x390788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390784u;
    // 0x390788: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x390784u, 0x39078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39078Cu;
label_39078c:
    // 0x39078c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39078cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x390790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x390790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390794: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x390794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x390798: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x390798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x39079c: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x39079cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3907a0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3907a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3907a4: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3907a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3907a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3907a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3907ac: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3907ACu;
    SET_GPR_U32(ctx, 31, 0x3907B4u);
    ctx->pc = 0x3907B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3907ACu;
    // 0x3907b0: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3907ACu, 0x3907B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3907B4u;
label_3907b4:
    // 0x3907b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3907B4u;
    {
        const bool branch_taken_0x3907b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3907b4) {
            ctx->pc = 0x390820u;
            goto label_390820;
        }
    }
    ctx->pc = 0x3907BCu;
    // 0x3907bc: 0x8e260554  lw          $a2, 0x554($s1)
    ctx->pc = 0x3907bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x3907c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3907c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3907c4: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3907C4u;
    SET_GPR_U32(ctx, 31, 0x3907CCu);
    ctx->pc = 0x3907C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3907C4u;
    // 0x3907c8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3907C4u, 0x3907CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3907CCu;
label_3907cc:
    // 0x3907cc: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3907ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3907d0: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3907d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3907d4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3907d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3907d8: 0xc0aa254  jal         func_2A8950
    ctx->pc = 0x3907D8u;
    SET_GPR_U32(ctx, 31, 0x3907E0u);
    ctx->pc = 0x3907DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3907D8u;
    // 0x3907dc: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8950u, 0x3907D8u, 0x3907E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3907E0u;
label_3907e0:
    // 0x3907e0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x3907e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3907e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3907e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3907e8: 0xc07687c  jal         func_1DA1F0
    ctx->pc = 0x3907E8u;
    SET_GPR_U32(ctx, 31, 0x3907F0u);
    ctx->pc = 0x3907ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3907E8u;
    // 0x3907ec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA1F0u, 0x3907E8u, 0x3907F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3907F0u;
label_3907f0:
    // 0x3907f0: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x3907f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x3907f4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3907f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3907f8: 0x9226055d  lbu         $a2, 0x55D($s1)
    ctx->pc = 0x3907f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1373)));
    // 0x3907fc: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x3907fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x390800: 0x24422214  addiu       $v0, $v0, 0x2214
    ctx->pc = 0x390800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8724));
    // 0x390804: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x390804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x390808: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x390808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x39080c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39080cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x390810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x390810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x390814: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x390814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x390818: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x390818u;
    SET_GPR_U32(ctx, 31, 0x390820u);
    ctx->pc = 0x39081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390818u;
    // 0x39081c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x390818u, 0x390820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390820u;
label_390820:
    // 0x390820: 0x8625055e  lh          $a1, 0x55E($s1)
    ctx->pc = 0x390820u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1374)));
    // 0x390824: 0x24047ff0  addiu       $a0, $zero, 0x7FF0
    ctx->pc = 0x390824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
    // 0x390828: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x390828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x39082c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x390830: 0xa625055e  sh          $a1, 0x55E($s1)
    ctx->pc = 0x390830u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1374), (uint16_t)GPR_U32(ctx, 5));
    // 0x390834: 0x8625055e  lh          $a1, 0x55E($s1)
    ctx->pc = 0x390834u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1374)));
    // 0x390838: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x390838u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39083c: 0x0  nop
    ctx->pc = 0x39083cu;
    // NOP
    // 0x390840: 0x0  nop
    ctx->pc = 0x390840u;
    // NOP
    // 0x390844: 0x2010  mfhi        $a0
    ctx->pc = 0x390844u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x390848: 0xa624055e  sh          $a0, 0x55E($s1)
    ctx->pc = 0x390848u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1374), (uint16_t)GPR_U32(ctx, 4));
    // 0x39084c: 0x8624055e  lh          $a0, 0x55E($s1)
    ctx->pc = 0x39084cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1374)));
    // 0x390850: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x390850u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x390854: 0x0  nop
    ctx->pc = 0x390854u;
    // NOP
    // 0x390858: 0x0  nop
    ctx->pc = 0x390858u;
    // NOP
    // 0x39085c: 0x1810  mfhi        $v1
    ctx->pc = 0x39085cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x390860: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x390860u;
    {
        const bool branch_taken_0x390860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x390860) {
            ctx->pc = 0x3908E8u;
            goto label_3908e8;
        }
    }
    ctx->pc = 0x390868u;
    // 0x390868: 0x92220569  lbu         $v0, 0x569($s1)
    ctx->pc = 0x390868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1385)));
    // 0x39086c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x39086Cu;
    {
        const bool branch_taken_0x39086c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39086c) {
            ctx->pc = 0x3908B0u;
            goto label_3908b0;
        }
    }
    ctx->pc = 0x390874u;
    // 0x390874: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x390874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x390878: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x390878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39087c: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x39087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x390880: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x390880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x390884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x390884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390888: 0x34455002  ori         $a1, $v0, 0x5002
    ctx->pc = 0x390888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20482);
    // 0x39088c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x39088cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x390890: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x390890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390894: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x390894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390898: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x390898u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39089c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39089cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3908a0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3908A0u;
    SET_GPR_U32(ctx, 31, 0x3908A8u);
    ctx->pc = 0x3908A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3908A0u;
    // 0x3908a4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3908A0u, 0x3908A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3908A8u;
label_3908a8:
    // 0x3908a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3908A8u;
    {
        const bool branch_taken_0x3908a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3908a8) {
            ctx->pc = 0x3908E8u;
            goto label_3908e8;
        }
    }
    ctx->pc = 0x3908B0u;
label_3908b0:
    // 0x3908b0: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3908b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3908b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3908b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3908b8: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x3908b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x3908bc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3908bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3908c0: 0x34455002  ori         $a1, $v0, 0x5002
    ctx->pc = 0x3908c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20482);
    // 0x3908c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3908c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3908c8: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3908c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3908cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3908ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3908d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3908d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3908d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3908d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3908d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3908d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3908dc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3908DCu;
    SET_GPR_U32(ctx, 31, 0x3908E4u);
    ctx->pc = 0x3908E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3908DCu;
    // 0x3908e0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3908DCu, 0x3908E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3908E4u;
label_3908e4:
    // 0x3908e4: 0x0  nop
    ctx->pc = 0x3908e4u;
    // NOP
label_3908e8:
    // 0x3908e8: 0x9224053a  lbu         $a0, 0x53A($s1)
    ctx->pc = 0x3908e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
    // 0x3908ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3908ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3908f0: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3908F0u;
    {
        const bool branch_taken_0x3908f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3908F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908F0u;
        // 0x3908f4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908f0) {
            ctx->pc = 0x3909D0u;
            goto label_3909d0;
        }
    }
    ctx->pc = 0x3908F8u;
    // 0x3908f8: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3908F8u;
    {
        const bool branch_taken_0x3908f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3908f8) {
            ctx->pc = 0x390988u;
            goto label_390988;
        }
    }
    ctx->pc = 0x390900u;
    // 0x390900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390904: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x390904u;
    {
        const bool branch_taken_0x390904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x390904) {
            ctx->pc = 0x390918u;
            goto label_390918;
        }
    }
    ctx->pc = 0x39090Cu;
    // 0x39090c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x39090Cu;
    {
        const bool branch_taken_0x39090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39090c) {
            ctx->pc = 0x3909F0u;
            goto label_3909f0;
        }
    }
    ctx->pc = 0x390914u;
    // 0x390914: 0x0  nop
    ctx->pc = 0x390914u;
    // NOP
label_390918:
    // 0x390918: 0xc0e406c  jal         func_3901B0
    ctx->pc = 0x390918u;
    SET_GPR_U32(ctx, 31, 0x390920u);
    ctx->pc = 0x39091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390918u;
    // 0x39091c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3901B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3901B0u, 0x390918u, 0x390920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390920u;
label_390920:
    // 0x390920: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x390920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390924: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x390924u;
    {
        const bool branch_taken_0x390924 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x390924) {
            ctx->pc = 0x390968u;
            goto label_390968;
        }
    }
    ctx->pc = 0x39092Cu;
    // 0x39092c: 0x9224052e  lbu         $a0, 0x52E($s1)
    ctx->pc = 0x39092cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x390930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x390930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390934: 0x922a055d  lbu         $t2, 0x55D($s1)
    ctx->pc = 0x390934u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1373)));
    // 0x390938: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x390938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39093c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39093cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390940: 0xc0bc748  jal         func_2F1D20
    ctx->pc = 0x390940u;
    SET_GPR_U32(ctx, 31, 0x390948u);
    ctx->pc = 0x390944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390940u;
    // 0x390944: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1D20u, 0x390940u, 0x390948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390948u;
label_390948:
    // 0x390948: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x390948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x39094c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390950: 0x92240568  lbu         $a0, 0x568($s1)
    ctx->pc = 0x390950u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x390954: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x390954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x390958: 0xa2240568  sb          $a0, 0x568($s1)
    ctx->pc = 0x390958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1384), (uint8_t)GPR_U32(ctx, 4));
    // 0x39095c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39095Cu;
    {
        const bool branch_taken_0x39095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39095Cu;
        // 0x390960: 0xa2230569  sb          $v1, 0x569($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1385), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39095c) {
            ctx->pc = 0x390980u;
            goto label_390980;
        }
    }
    ctx->pc = 0x390964u;
    // 0x390964: 0x0  nop
    ctx->pc = 0x390964u;
    // NOP
label_390968:
    // 0x390968: 0x92240568  lbu         $a0, 0x568($s1)
    ctx->pc = 0x390968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x39096c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390970: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x390970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x390974: 0xa2240568  sb          $a0, 0x568($s1)
    ctx->pc = 0x390974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1384), (uint8_t)GPR_U32(ctx, 4));
    // 0x390978: 0xa2230569  sb          $v1, 0x569($s1)
    ctx->pc = 0x390978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1385), (uint8_t)GPR_U32(ctx, 3));
    // 0x39097c: 0x0  nop
    ctx->pc = 0x39097cu;
    // NOP
label_390980:
    // 0x390980: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x390980u;
    {
        const bool branch_taken_0x390980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390980u;
        // 0x390984: 0xa220053a  sb          $zero, 0x53A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390980) {
            ctx->pc = 0x3909F0u;
            goto label_3909f0;
        }
    }
    ctx->pc = 0x390988u;
label_390988:
    // 0x390988: 0xc0c0890  jal         func_302240
    ctx->pc = 0x390988u;
    SET_GPR_U32(ctx, 31, 0x390990u);
    ctx->pc = 0x39098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390988u;
    // 0x39098c: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x390988u, 0x390990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390990u;
label_390990:
    // 0x390990: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390990u;
    {
        const bool branch_taken_0x390990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390990u;
        // 0x390994: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390990) {
            ctx->pc = 0x3909A0u;
            goto label_3909a0;
        }
    }
    ctx->pc = 0x390998u;
    // 0x390998: 0xa043053a  sb          $v1, 0x53A($v0)
    ctx->pc = 0x390998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1338), (uint8_t)GPR_U32(ctx, 3));
    // 0x39099c: 0x0  nop
    ctx->pc = 0x39099cu;
    // NOP
label_3909a0:
    // 0x3909a0: 0x92230568  lbu         $v1, 0x568($s1)
    ctx->pc = 0x3909a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3909a4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x3909a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3909a8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3909A8u;
    {
        const bool branch_taken_0x3909a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3909ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909A8u;
        // 0x3909ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909a8) {
            ctx->pc = 0x3909C0u;
            goto label_3909c0;
        }
    }
    ctx->pc = 0x3909B0u;
    // 0x3909b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3909b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3909b4: 0xa2240569  sb          $a0, 0x569($s1)
    ctx->pc = 0x3909b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1385), (uint8_t)GPR_U32(ctx, 4));
    // 0x3909b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3909B8u;
    {
        const bool branch_taken_0x3909b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909B8u;
        // 0x3909bc: 0xa223053a  sb          $v1, 0x53A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909b8) {
            ctx->pc = 0x3909F0u;
            goto label_3909f0;
        }
    }
    ctx->pc = 0x3909C0u;
label_3909c0:
    // 0x3909c0: 0xa2200569  sb          $zero, 0x569($s1)
    ctx->pc = 0x3909c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1385), (uint8_t)GPR_U32(ctx, 0));
    // 0x3909c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3909C4u;
    {
        const bool branch_taken_0x3909c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909C4u;
        // 0x3909c8: 0xa220053a  sb          $zero, 0x53A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909c4) {
            ctx->pc = 0x3909F0u;
            goto label_3909f0;
        }
    }
    ctx->pc = 0x3909CCu;
    // 0x3909cc: 0x0  nop
    ctx->pc = 0x3909ccu;
    // NOP
label_3909d0:
    // 0x3909d0: 0xc0c0890  jal         func_302240
    ctx->pc = 0x3909D0u;
    SET_GPR_U32(ctx, 31, 0x3909D8u);
    ctx->pc = 0x3909D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3909D0u;
    // 0x3909d4: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x3909D0u, 0x3909D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909D8u;
label_3909d8:
    // 0x3909d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3909D8u;
    {
        const bool branch_taken_0x3909d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3909DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909D8u;
        // 0x3909dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909d8) {
            ctx->pc = 0x3909F0u;
            goto label_3909f0;
        }
    }
    ctx->pc = 0x3909E0u;
    // 0x3909e0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3909E0u;
    SET_GPR_U32(ctx, 31, 0x3909E8u);
    ctx->pc = 0x3909E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3909E0u;
    // 0x3909e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3909E0u, 0x3909E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909E8u;
label_3909e8:
    // 0x3909e8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3909E8u;
    {
        const bool branch_taken_0x3909e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3909e8) {
            ctx->pc = 0x390A98u;
            goto label_390a98;
        }
    }
    ctx->pc = 0x3909F0u;
label_3909f0:
    // 0x3909f0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3909f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3909f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3909F4u;
    {
        const bool branch_taken_0x3909f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909F4u;
        // 0x3909f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909f4) {
            ctx->pc = 0x390A08u;
            goto label_390a08;
        }
    }
    ctx->pc = 0x3909FCu;
    // 0x3909fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3909FCu;
    {
        const bool branch_taken_0x3909fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3909fc) {
            ctx->pc = 0x390A88u;
            goto label_390a88;
        }
    }
    ctx->pc = 0x390A04u;
    // 0x390a04: 0x0  nop
    ctx->pc = 0x390a04u;
    // NOP
label_390a08:
    // 0x390a08: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x390a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x390a0c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x390a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x390a10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x390a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x390a14: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x390a14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x390a18: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x390a18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x390a1c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x390A1Cu;
    {
        const bool branch_taken_0x390a1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x390a1c) {
            ctx->pc = 0x390A58u;
            goto label_390a58;
        }
    }
    ctx->pc = 0x390A24u;
    // 0x390a24: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x390a24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x390a28: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x390a28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x390a2c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x390A2Cu;
    {
        const bool branch_taken_0x390a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x390A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A2Cu;
        // 0x390a30: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a2c) {
            ctx->pc = 0x390A80u;
            goto label_390a80;
        }
    }
    ctx->pc = 0x390A34u;
    // 0x390a34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390a38: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x390a38u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x390a3c: 0x0  nop
    ctx->pc = 0x390a3cu;
    // NOP
    // 0x390a40: 0x0  nop
    ctx->pc = 0x390a40u;
    // NOP
    // 0x390a44: 0x2010  mfhi        $a0
    ctx->pc = 0x390a44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x390a48: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x390a48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x390a4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x390A4Cu;
    {
        const bool branch_taken_0x390a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A4Cu;
        // 0x390a50: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a4c) {
            ctx->pc = 0x390A80u;
            goto label_390a80;
        }
    }
    ctx->pc = 0x390A54u;
    // 0x390a54: 0x0  nop
    ctx->pc = 0x390a54u;
    // NOP
label_390a58:
    // 0x390a58: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x390a58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x390a5c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x390a5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x390a60: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x390A60u;
    {
        const bool branch_taken_0x390a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x390a60) {
            ctx->pc = 0x390A80u;
            goto label_390a80;
        }
    }
    ctx->pc = 0x390A68u;
    // 0x390a68: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x390a68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x390a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390a70: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x390a70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x390a74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390A74u;
    {
        const bool branch_taken_0x390a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A74u;
        // 0x390a78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a74) {
            ctx->pc = 0x390A88u;
            goto label_390a88;
        }
    }
    ctx->pc = 0x390A7Cu;
    // 0x390a7c: 0x0  nop
    ctx->pc = 0x390a7cu;
    // NOP
label_390a80:
    // 0x390a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390a84: 0x0  nop
    ctx->pc = 0x390a84u;
    // NOP
label_390a88:
    // 0x390a88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x390A88u;
    {
        const bool branch_taken_0x390a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x390A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A88u;
        // 0x390a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a88) {
            ctx->pc = 0x390A98u;
            goto label_390a98;
        }
    }
    ctx->pc = 0x390A90u;
    // 0x390a90: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x390A90u;
    SET_GPR_U32(ctx, 31, 0x390A98u);
    ctx->pc = 0x390A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390A90u;
    // 0x390a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x390A90u, 0x390A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390A98u;
label_390a98:
    // 0x390a98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x390a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390a9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x390a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390aa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x390aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x390AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AA4u;
        // 0x390aa8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390AACu;
}
