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

// Function: sub_00250668
// Address: 0x250668 - 0x250738
void sub_00250668_0x250668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250668_0x250668");
#endif

    switch (ctx->pc) {
        case 0x250668u: goto label_250668;
        case 0x25066cu: goto label_25066c;
        case 0x250670u: goto label_250670;
        case 0x250674u: goto label_250674;
        case 0x250678u: goto label_250678;
        case 0x25067cu: goto label_25067c;
        case 0x250680u: goto label_250680;
        case 0x250684u: goto label_250684;
        case 0x250688u: goto label_250688;
        case 0x25068cu: goto label_25068c;
        case 0x250690u: goto label_250690;
        case 0x250694u: goto label_250694;
        case 0x250698u: goto label_250698;
        case 0x25069cu: goto label_25069c;
        case 0x2506a0u: goto label_2506a0;
        case 0x2506a4u: goto label_2506a4;
        case 0x2506a8u: goto label_2506a8;
        case 0x2506acu: goto label_2506ac;
        case 0x2506b0u: goto label_2506b0;
        case 0x2506b4u: goto label_2506b4;
        case 0x2506b8u: goto label_2506b8;
        case 0x2506bcu: goto label_2506bc;
        case 0x2506c0u: goto label_2506c0;
        case 0x2506c4u: goto label_2506c4;
        case 0x2506c8u: goto label_2506c8;
        case 0x2506ccu: goto label_2506cc;
        case 0x2506d0u: goto label_2506d0;
        case 0x2506d4u: goto label_2506d4;
        case 0x2506d8u: goto label_2506d8;
        case 0x2506dcu: goto label_2506dc;
        case 0x2506e0u: goto label_2506e0;
        case 0x2506e4u: goto label_2506e4;
        case 0x2506e8u: goto label_2506e8;
        case 0x2506ecu: goto label_2506ec;
        case 0x2506f0u: goto label_2506f0;
        case 0x2506f4u: goto label_2506f4;
        case 0x2506f8u: goto label_2506f8;
        case 0x2506fcu: goto label_2506fc;
        case 0x250700u: goto label_250700;
        case 0x250704u: goto label_250704;
        case 0x250708u: goto label_250708;
        case 0x25070cu: goto label_25070c;
        case 0x250710u: goto label_250710;
        case 0x250714u: goto label_250714;
        case 0x250718u: goto label_250718;
        case 0x25071cu: goto label_25071c;
        case 0x250720u: goto label_250720;
        case 0x250724u: goto label_250724;
        case 0x250728u: goto label_250728;
        case 0x25072cu: goto label_25072c;
        case 0x250730u: goto label_250730;
        case 0x250734u: goto label_250734;
        default: break;
    }

    ctx->pc = 0x250668u;

label_250668:
    // 0x250668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25066c:
    // 0x25066c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_250670:
    // 0x250670: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x250670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_250674:
    // 0x250674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x250674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_250678:
    // 0x250678: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x250678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25067c:
    // 0x25067c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_250680:
    // 0x250680: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_250684:
    if (ctx->pc == 0x250684u) {
        ctx->pc = 0x250684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250680u;
        // 0x250684: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250688u;
        goto label_250688;
    }
    ctx->pc = 0x250680u;
    {
        const bool branch_taken_0x250680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x250684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250680u;
        // 0x250684: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250680) {
            ctx->pc = 0x2506A0u;
            goto label_2506a0;
        }
    }
    ctx->pc = 0x250688u;
label_250688:
    // 0x250688: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_25068c:
    // 0x25068c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x25068cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_250690:
    // 0x250690: 0x2484ead8  addiu       $a0, $a0, -0x1528
    ctx->pc = 0x250690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961880));
label_250694:
    // 0x250694: 0x10000009  b           . + 4 + (0x9 << 2)
label_250698:
    if (ctx->pc == 0x250698u) {
        ctx->pc = 0x250698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250694u;
        // 0x250698: 0x24a5e9c8  addiu       $a1, $a1, -0x1638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25069Cu;
        goto label_25069c;
    }
    ctx->pc = 0x250694u;
    {
        const bool branch_taken_0x250694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250694u;
        // 0x250698: 0x24a5e9c8  addiu       $a1, $a1, -0x1638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250694) {
            ctx->pc = 0x2506BCu;
            goto label_2506bc;
        }
    }
    ctx->pc = 0x25069Cu;
label_25069c:
    // 0x25069c: 0x0  nop
    ctx->pc = 0x25069cu;
    // NOP
label_2506a0:
    // 0x2506a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2506a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2506a4:
    // 0x2506a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2506a8:
    if (ctx->pc == 0x2506A8u) {
        ctx->pc = 0x2506ACu;
        goto label_2506ac;
    }
    ctx->pc = 0x2506A4u;
    {
        const bool branch_taken_0x2506a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2506a4) {
            ctx->pc = 0x2506D0u;
            goto label_2506d0;
        }
    }
    ctx->pc = 0x2506ACu;
label_2506ac:
    // 0x2506ac: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2506acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2506b0:
    // 0x2506b0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2506b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2506b4:
    // 0x2506b4: 0x2484eae8  addiu       $a0, $a0, -0x1518
    ctx->pc = 0x2506b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961896));
label_2506b8:
    // 0x2506b8: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x2506b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
label_2506bc:
    // 0x2506bc: 0xc093f54  jal         func_24FD50
label_2506c0:
    if (ctx->pc == 0x2506C0u) {
        ctx->pc = 0x2506C4u;
        goto label_2506c4;
    }
    ctx->pc = 0x2506BCu;
    SET_GPR_U32(ctx, 31, 0x2506C4u);
    ctx->pc = 0x24FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD50u, 0x2506BCu, 0x2506C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2506C4u;
label_2506c4:
    // 0x2506c4: 0x10000016  b           . + 4 + (0x16 << 2)
label_2506c8:
    if (ctx->pc == 0x2506C8u) {
        ctx->pc = 0x2506C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506C4u;
        // 0x2506c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2506CCu;
        goto label_2506cc;
    }
    ctx->pc = 0x2506C4u;
    {
        const bool branch_taken_0x2506c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2506C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506C4u;
        // 0x2506c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506c4) {
            ctx->pc = 0x250720u;
            goto label_250720;
        }
    }
    ctx->pc = 0x2506CCu;
label_2506cc:
    // 0x2506cc: 0x0  nop
    ctx->pc = 0x2506ccu;
    // NOP
label_2506d0:
    // 0x2506d0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_2506d4:
    if (ctx->pc == 0x2506D4u) {
        ctx->pc = 0x2506D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506D0u;
        // 0x2506d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2506D8u;
        goto label_2506d8;
    }
    ctx->pc = 0x2506D0u;
    {
        const bool branch_taken_0x2506d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2506D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506D0u;
        // 0x2506d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506d0) {
            ctx->pc = 0x250714u;
            goto label_250714;
        }
    }
    ctx->pc = 0x2506D8u;
label_2506d8:
    // 0x2506d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2506d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2506dc:
    // 0x2506dc: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
label_2506e0:
    if (ctx->pc == 0x2506E0u) {
        ctx->pc = 0x2506E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506DCu;
        // 0x2506e0: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2506E4u;
        goto label_2506e4;
    }
    ctx->pc = 0x2506DCu;
    {
        const bool branch_taken_0x2506dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2506dc) {
            ctx->pc = 0x2506E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2506DCu;
            // 0x2506e0: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250700u;
            goto label_250700;
        }
    }
    ctx->pc = 0x2506E4u;
label_2506e4:
    // 0x2506e4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2506e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2506e8:
    // 0x2506e8: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x2506e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2506ec:
    // 0x2506ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2506f0:
    if (ctx->pc == 0x2506F0u) {
        ctx->pc = 0x2506F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506ECu;
        // 0x2506f0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2506F4u;
        goto label_2506f4;
    }
    ctx->pc = 0x2506ECu;
    {
        const bool branch_taken_0x2506ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2506F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506ECu;
        // 0x2506f0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506ec) {
            ctx->pc = 0x250714u;
            goto label_250714;
        }
    }
    ctx->pc = 0x2506F4u;
label_2506f4:
    // 0x2506f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2506f8:
    if (ctx->pc == 0x2506F8u) {
        ctx->pc = 0x2506F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506F4u;
        // 0x2506f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2506FCu;
        goto label_2506fc;
    }
    ctx->pc = 0x2506F4u;
    {
        const bool branch_taken_0x2506f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2506F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506F4u;
        // 0x2506f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506f4) {
            ctx->pc = 0x250714u;
            goto label_250714;
        }
    }
    ctx->pc = 0x2506FCu;
label_2506fc:
    // 0x2506fc: 0x0  nop
    ctx->pc = 0x2506fcu;
    // NOP
label_250700:
    // 0x250700: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_250704:
    if (ctx->pc == 0x250704u) {
        ctx->pc = 0x250704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250700u;
        // 0x250704: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250708u;
        goto label_250708;
    }
    ctx->pc = 0x250700u;
    {
        const bool branch_taken_0x250700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250700u;
        // 0x250704: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250700) {
            ctx->pc = 0x250714u;
            goto label_250714;
        }
    }
    ctx->pc = 0x250708u;
label_250708:
    // 0x250708: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x250708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_25070c:
    // 0x25070c: 0x40f809  jalr        $v0
label_250710:
    if (ctx->pc == 0x250710u) {
        ctx->pc = 0x250710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25070Cu;
        // 0x250710: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250714u;
        goto label_250714;
    }
    ctx->pc = 0x25070Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250714u);
        ctx->pc = 0x250710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25070Cu;
        // 0x250710: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25070Cu, 0x250714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250714u;
label_250714:
    // 0x250714: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x250714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_250718:
    // 0x250718: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x250718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_25071c:
    // 0x25071c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x25071cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_250720:
    // 0x250720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250724:
    // 0x250724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_250728:
    // 0x250728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x250728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25072c:
    // 0x25072c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x25072cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_250730:
    // 0x250730: 0x3e00008  jr          $ra
label_250734:
    if (ctx->pc == 0x250734u) {
        ctx->pc = 0x250734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250730u;
        // 0x250734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250738u;
        goto label_fallthrough_0x250730;
    }
    ctx->pc = 0x250730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250730u;
        // 0x250734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x250730:
    ctx->pc = 0x250738u;
}
