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

// Function: sub_0022C4E8
// Address: 0x22c4e8 - 0x22c638
void sub_0022C4E8_0x22c4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C4E8_0x22c4e8");
#endif

    switch (ctx->pc) {
        case 0x22c4e8u: goto label_22c4e8;
        case 0x22c4ecu: goto label_22c4ec;
        case 0x22c4f0u: goto label_22c4f0;
        case 0x22c4f4u: goto label_22c4f4;
        case 0x22c4f8u: goto label_22c4f8;
        case 0x22c4fcu: goto label_22c4fc;
        case 0x22c500u: goto label_22c500;
        case 0x22c504u: goto label_22c504;
        case 0x22c508u: goto label_22c508;
        case 0x22c50cu: goto label_22c50c;
        case 0x22c510u: goto label_22c510;
        case 0x22c514u: goto label_22c514;
        case 0x22c518u: goto label_22c518;
        case 0x22c51cu: goto label_22c51c;
        case 0x22c520u: goto label_22c520;
        case 0x22c524u: goto label_22c524;
        case 0x22c528u: goto label_22c528;
        case 0x22c52cu: goto label_22c52c;
        case 0x22c530u: goto label_22c530;
        case 0x22c534u: goto label_22c534;
        case 0x22c538u: goto label_22c538;
        case 0x22c53cu: goto label_22c53c;
        case 0x22c540u: goto label_22c540;
        case 0x22c544u: goto label_22c544;
        case 0x22c548u: goto label_22c548;
        case 0x22c54cu: goto label_22c54c;
        case 0x22c550u: goto label_22c550;
        case 0x22c554u: goto label_22c554;
        case 0x22c558u: goto label_22c558;
        case 0x22c55cu: goto label_22c55c;
        case 0x22c560u: goto label_22c560;
        case 0x22c564u: goto label_22c564;
        case 0x22c568u: goto label_22c568;
        case 0x22c56cu: goto label_22c56c;
        case 0x22c570u: goto label_22c570;
        case 0x22c574u: goto label_22c574;
        case 0x22c578u: goto label_22c578;
        case 0x22c57cu: goto label_22c57c;
        case 0x22c580u: goto label_22c580;
        case 0x22c584u: goto label_22c584;
        case 0x22c588u: goto label_22c588;
        case 0x22c58cu: goto label_22c58c;
        case 0x22c590u: goto label_22c590;
        case 0x22c594u: goto label_22c594;
        case 0x22c598u: goto label_22c598;
        case 0x22c59cu: goto label_22c59c;
        case 0x22c5a0u: goto label_22c5a0;
        case 0x22c5a4u: goto label_22c5a4;
        case 0x22c5a8u: goto label_22c5a8;
        case 0x22c5acu: goto label_22c5ac;
        case 0x22c5b0u: goto label_22c5b0;
        case 0x22c5b4u: goto label_22c5b4;
        case 0x22c5b8u: goto label_22c5b8;
        case 0x22c5bcu: goto label_22c5bc;
        case 0x22c5c0u: goto label_22c5c0;
        case 0x22c5c4u: goto label_22c5c4;
        case 0x22c5c8u: goto label_22c5c8;
        case 0x22c5ccu: goto label_22c5cc;
        case 0x22c5d0u: goto label_22c5d0;
        case 0x22c5d4u: goto label_22c5d4;
        case 0x22c5d8u: goto label_22c5d8;
        case 0x22c5dcu: goto label_22c5dc;
        case 0x22c5e0u: goto label_22c5e0;
        case 0x22c5e4u: goto label_22c5e4;
        case 0x22c5e8u: goto label_22c5e8;
        case 0x22c5ecu: goto label_22c5ec;
        case 0x22c5f0u: goto label_22c5f0;
        case 0x22c5f4u: goto label_22c5f4;
        case 0x22c5f8u: goto label_22c5f8;
        case 0x22c5fcu: goto label_22c5fc;
        case 0x22c600u: goto label_22c600;
        case 0x22c604u: goto label_22c604;
        case 0x22c608u: goto label_22c608;
        case 0x22c60cu: goto label_22c60c;
        case 0x22c610u: goto label_22c610;
        case 0x22c614u: goto label_22c614;
        case 0x22c618u: goto label_22c618;
        case 0x22c61cu: goto label_22c61c;
        case 0x22c620u: goto label_22c620;
        case 0x22c624u: goto label_22c624;
        case 0x22c628u: goto label_22c628;
        case 0x22c62cu: goto label_22c62c;
        case 0x22c630u: goto label_22c630;
        case 0x22c634u: goto label_22c634;
        default: break;
    }

    ctx->pc = 0x22c4e8u;

label_22c4e8:
    // 0x22c4e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22c4ec:
    // 0x22c4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c4f0:
    // 0x22c4f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22c4f4:
    // 0x22c4f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c4f8:
    // 0x22c4f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22c4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22c4fc:
    // 0x22c4fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22c4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22c500:
    // 0x22c500: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22c500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_22c504:
    // 0x22c504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22c508:
    // 0x22c508: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22c508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22c50c:
    // 0x22c50c: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_22c510:
    if (ctx->pc == 0x22C510u) {
        ctx->pc = 0x22C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C50Cu;
        // 0x22c510: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C514u;
        goto label_22c514;
    }
    ctx->pc = 0x22C50Cu;
    {
        const bool branch_taken_0x22c50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c50c) {
            ctx->pc = 0x22C510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C50Cu;
            // 0x22c510: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C55Cu;
            goto label_22c55c;
        }
    }
    ctx->pc = 0x22C514u;
label_22c514:
    // 0x22c514: 0xc08f924  jal         func_23E490
label_22c518:
    if (ctx->pc == 0x22C518u) {
        ctx->pc = 0x22C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C514u;
        // 0x22c518: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C51Cu;
        goto label_22c51c;
    }
    ctx->pc = 0x22C514u;
    SET_GPR_U32(ctx, 31, 0x22C51Cu);
    ctx->pc = 0x22C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C514u;
    // 0x22c518: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22C514u, 0x22C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C51Cu;
label_22c51c:
    // 0x22c51c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_22c520:
    if (ctx->pc == 0x22C520u) {
        ctx->pc = 0x22C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C51Cu;
        // 0x22c520: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C524u;
        goto label_22c524;
    }
    ctx->pc = 0x22C51Cu;
    {
        const bool branch_taken_0x22c51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c51c) {
            ctx->pc = 0x22C520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C51Cu;
            // 0x22c520: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C558u;
            goto label_22c558;
        }
    }
    ctx->pc = 0x22C524u;
label_22c524:
    // 0x22c524: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22c528:
    // 0x22c528: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22c528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22c52c:
    // 0x22c52c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22c530:
    // 0x22c530: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22c530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22c534:
    // 0x22c534: 0x40f809  jalr        $v0
label_22c538:
    if (ctx->pc == 0x22C538u) {
        ctx->pc = 0x22C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C534u;
        // 0x22c538: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C53Cu;
        goto label_22c53c;
    }
    ctx->pc = 0x22C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C53Cu);
        ctx->pc = 0x22C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C534u;
        // 0x22c538: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C534u, 0x22C53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C53Cu;
label_22c53c:
    // 0x22c53c: 0xc08b066  jal         func_22C198
label_22c540:
    if (ctx->pc == 0x22C540u) {
        ctx->pc = 0x22C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C53Cu;
        // 0x22c540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C544u;
        goto label_22c544;
    }
    ctx->pc = 0x22C53Cu;
    SET_GPR_U32(ctx, 31, 0x22C544u);
    ctx->pc = 0x22C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C53Cu;
    // 0x22c540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C198u, 0x22C53Cu, 0x22C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C544u;
label_22c544:
    // 0x22c544: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22c548:
    // 0x22c548: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22c548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22c54c:
    // 0x22c54c: 0x10000003  b           . + 4 + (0x3 << 2)
label_22c550:
    if (ctx->pc == 0x22C550u) {
        ctx->pc = 0x22C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C54Cu;
        // 0x22c550: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C554u;
        goto label_22c554;
    }
    ctx->pc = 0x22C54Cu;
    {
        const bool branch_taken_0x22c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C54Cu;
        // 0x22c550: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c54c) {
            ctx->pc = 0x22C55Cu;
            goto label_22c55c;
        }
    }
    ctx->pc = 0x22C554u;
label_22c554:
    // 0x22c554: 0x0  nop
    ctx->pc = 0x22c554u;
    // NOP
label_22c558:
    // 0x22c558: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22c558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22c55c:
    // 0x22c55c: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
label_22c560:
    if (ctx->pc == 0x22C560u) {
        ctx->pc = 0x22C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C55Cu;
        // 0x22c560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C564u;
        goto label_22c564;
    }
    ctx->pc = 0x22C55Cu;
    {
        const bool branch_taken_0x22c55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22c55c) {
            ctx->pc = 0x22C560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C55Cu;
            // 0x22c560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C620u;
            goto label_22c620;
        }
    }
    ctx->pc = 0x22C564u;
label_22c564:
    // 0x22c564: 0xc08f968  jal         func_23E5A0
label_22c568:
    if (ctx->pc == 0x22C568u) {
        ctx->pc = 0x22C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C564u;
        // 0x22c568: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C56Cu;
        goto label_22c56c;
    }
    ctx->pc = 0x22C564u;
    SET_GPR_U32(ctx, 31, 0x22C56Cu);
    ctx->pc = 0x22C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C564u;
    // 0x22c568: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E5A0u, 0x22C564u, 0x22C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C56Cu;
label_22c56c:
    // 0x22c56c: 0xc08f924  jal         func_23E490
label_22c570:
    if (ctx->pc == 0x22C570u) {
        ctx->pc = 0x22C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C56Cu;
        // 0x22c570: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C574u;
        goto label_22c574;
    }
    ctx->pc = 0x22C56Cu;
    SET_GPR_U32(ctx, 31, 0x22C574u);
    ctx->pc = 0x22C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C56Cu;
    // 0x22c570: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22C56Cu, 0x22C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C574u;
label_22c574:
    // 0x22c574: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22c574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22c578:
    // 0x22c578: 0x54430029  bnel        $v0, $v1, . + 4 + (0x29 << 2)
label_22c57c:
    if (ctx->pc == 0x22C57Cu) {
        ctx->pc = 0x22C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C578u;
        // 0x22c57c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C580u;
        goto label_22c580;
    }
    ctx->pc = 0x22C578u;
    {
        const bool branch_taken_0x22c578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c578) {
            ctx->pc = 0x22C57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C578u;
            // 0x22c57c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C620u;
            goto label_22c620;
        }
    }
    ctx->pc = 0x22C580u;
label_22c580:
    // 0x22c580: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x22c580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_22c584:
    // 0x22c584: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_22c588:
    if (ctx->pc == 0x22C588u) {
        ctx->pc = 0x22C58Cu;
        goto label_22c58c;
    }
    ctx->pc = 0x22C584u;
    {
        const bool branch_taken_0x22c584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c584) {
            ctx->pc = 0x22C5F0u;
            goto label_22c5f0;
        }
    }
    ctx->pc = 0x22C58Cu;
label_22c58c:
    // 0x22c58c: 0xc08b528  jal         func_22D4A0
label_22c590:
    if (ctx->pc == 0x22C590u) {
        ctx->pc = 0x22C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C58Cu;
        // 0x22c590: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C594u;
        goto label_22c594;
    }
    ctx->pc = 0x22C58Cu;
    SET_GPR_U32(ctx, 31, 0x22C594u);
    ctx->pc = 0x22C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C58Cu;
    // 0x22c590: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x22C58Cu, 0x22C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C594u;
label_22c594:
    // 0x22c594: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x22c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_22c598:
    // 0x22c598: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22c598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_22c59c:
    // 0x22c59c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_22c5a0:
    if (ctx->pc == 0x22C5A0u) {
        ctx->pc = 0x22C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C59Cu;
        // 0x22c5a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5A4u;
        goto label_22c5a4;
    }
    ctx->pc = 0x22C59Cu;
    {
        const bool branch_taken_0x22c59c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x22C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C59Cu;
        // 0x22c5a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c59c) {
            ctx->pc = 0x22C5E8u;
            goto label_22c5e8;
        }
    }
    ctx->pc = 0x22C5A4u;
label_22c5a4:
    // 0x22c5a4: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x22c5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
label_22c5a8:
    // 0x22c5a8: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x22c5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22c5ac:
    // 0x22c5ac: 0x0  nop
    ctx->pc = 0x22c5acu;
    // NOP
label_22c5b0:
    // 0x22c5b0: 0x123840  sll         $a3, $s2, 1
    ctx->pc = 0x22c5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_22c5b4:
    // 0x22c5b4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x22c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22c5b8:
    // 0x22c5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c5bc:
    // 0x22c5bc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x22c5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_22c5c0:
    // 0x22c5c0: 0x8e63b2f4  lw          $v1, -0x4D0C($s3)
    ctx->pc = 0x22c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947572)));
label_22c5c4:
    // 0x22c5c4: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x22c5c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_22c5c8:
    // 0x22c5c8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x22c5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22c5cc:
    // 0x22c5cc: 0x60f809  jalr        $v1
label_22c5d0:
    if (ctx->pc == 0x22C5D0u) {
        ctx->pc = 0x22C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5CCu;
        // 0x22c5d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5D4u;
        goto label_22c5d4;
    }
    ctx->pc = 0x22C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22C5D4u);
        ctx->pc = 0x22C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5CCu;
        // 0x22c5d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C5CCu, 0x22C5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C5D4u;
label_22c5d4:
    // 0x22c5d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x22c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_22c5d8:
    // 0x22c5d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_22c5dc:
    // 0x22c5dc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x22c5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22c5e0:
    // 0x22c5e0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_22c5e4:
    if (ctx->pc == 0x22C5E4u) {
        ctx->pc = 0x22C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5E0u;
        // 0x22c5e4: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5E8u;
        goto label_22c5e8;
    }
    ctx->pc = 0x22C5E0u;
    {
        const bool branch_taken_0x22c5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c5e0) {
            ctx->pc = 0x22C5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C5E0u;
            // 0x22c5e4: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c5b0;
        }
    }
    ctx->pc = 0x22C5E8u;
label_22c5e8:
    // 0x22c5e8: 0xc08b52e  jal         func_22D4B8
label_22c5ec:
    if (ctx->pc == 0x22C5ECu) {
        ctx->pc = 0x22C5F0u;
        goto label_22c5f0;
    }
    ctx->pc = 0x22C5E8u;
    SET_GPR_U32(ctx, 31, 0x22C5F0u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x22C5E8u, 0x22C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5F0u;
label_22c5f0:
    // 0x22c5f0: 0xc08b0d8  jal         func_22C360
label_22c5f4:
    if (ctx->pc == 0x22C5F4u) {
        ctx->pc = 0x22C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5F0u;
        // 0x22c5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5F8u;
        goto label_22c5f8;
    }
    ctx->pc = 0x22C5F0u;
    SET_GPR_U32(ctx, 31, 0x22C5F8u);
    ctx->pc = 0x22C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5F0u;
    // 0x22c5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C360u, 0x22C5F0u, 0x22C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5F8u;
label_22c5f8:
    // 0x22c5f8: 0xc08f95c  jal         func_23E570
label_22c5fc:
    if (ctx->pc == 0x22C5FCu) {
        ctx->pc = 0x22C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5F8u;
        // 0x22c5fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C600u;
        goto label_22c600;
    }
    ctx->pc = 0x22C5F8u;
    SET_GPR_U32(ctx, 31, 0x22C600u);
    ctx->pc = 0x22C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5F8u;
    // 0x22c5fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E570u, 0x22C5F8u, 0x22C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C600u;
label_22c600:
    // 0x22c600: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22c600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22c604:
    // 0x22c604: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22c604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22c608:
    // 0x22c608: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22c608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22c60c:
    // 0x22c60c: 0x60f809  jalr        $v1
label_22c610:
    if (ctx->pc == 0x22C610u) {
        ctx->pc = 0x22C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C60Cu;
        // 0x22c610: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C614u;
        goto label_22c614;
    }
    ctx->pc = 0x22C60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22C614u);
        ctx->pc = 0x22C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C60Cu;
        // 0x22c610: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C60Cu, 0x22C614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C614u;
label_22c614:
    // 0x22c614: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22c614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22c618:
    // 0x22c618: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22c618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22c61c:
    // 0x22c61c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c61cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c620:
    // 0x22c620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22c620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22c624:
    // 0x22c624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22c624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22c628:
    // 0x22c628: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22c628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22c62c:
    // 0x22c62c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22c630:
    // 0x22c630: 0x3e00008  jr          $ra
label_22c634:
    if (ctx->pc == 0x22C634u) {
        ctx->pc = 0x22C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C630u;
        // 0x22c634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C638u;
        goto label_fallthrough_0x22c630;
    }
    ctx->pc = 0x22C630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C630u;
        // 0x22c634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22c630:
    ctx->pc = 0x22C638u;
}
