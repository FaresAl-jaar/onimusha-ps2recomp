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

// Function: sub_002395C0
// Address: 0x2395c0 - 0x239794
void sub_002395C0_0x2395c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002395C0_0x2395c0");
#endif

    switch (ctx->pc) {
        case 0x2395c0u: goto label_2395c0;
        case 0x2395c4u: goto label_2395c4;
        case 0x2395c8u: goto label_2395c8;
        case 0x2395ccu: goto label_2395cc;
        case 0x2395d0u: goto label_2395d0;
        case 0x2395d4u: goto label_2395d4;
        case 0x2395d8u: goto label_2395d8;
        case 0x2395dcu: goto label_2395dc;
        case 0x2395e0u: goto label_2395e0;
        case 0x2395e4u: goto label_2395e4;
        case 0x2395e8u: goto label_2395e8;
        case 0x2395ecu: goto label_2395ec;
        case 0x2395f0u: goto label_2395f0;
        case 0x2395f4u: goto label_2395f4;
        case 0x2395f8u: goto label_2395f8;
        case 0x2395fcu: goto label_2395fc;
        case 0x239600u: goto label_239600;
        case 0x239604u: goto label_239604;
        case 0x239608u: goto label_239608;
        case 0x23960cu: goto label_23960c;
        case 0x239610u: goto label_239610;
        case 0x239614u: goto label_239614;
        case 0x239618u: goto label_239618;
        case 0x23961cu: goto label_23961c;
        case 0x239620u: goto label_239620;
        case 0x239624u: goto label_239624;
        case 0x239628u: goto label_239628;
        case 0x23962cu: goto label_23962c;
        case 0x239630u: goto label_239630;
        case 0x239634u: goto label_239634;
        case 0x239638u: goto label_239638;
        case 0x23963cu: goto label_23963c;
        case 0x239640u: goto label_239640;
        case 0x239644u: goto label_239644;
        case 0x239648u: goto label_239648;
        case 0x23964cu: goto label_23964c;
        case 0x239650u: goto label_239650;
        case 0x239654u: goto label_239654;
        case 0x239658u: goto label_239658;
        case 0x23965cu: goto label_23965c;
        case 0x239660u: goto label_239660;
        case 0x239664u: goto label_239664;
        case 0x239668u: goto label_239668;
        case 0x23966cu: goto label_23966c;
        case 0x239670u: goto label_239670;
        case 0x239674u: goto label_239674;
        case 0x239678u: goto label_239678;
        case 0x23967cu: goto label_23967c;
        case 0x239680u: goto label_239680;
        case 0x239684u: goto label_239684;
        case 0x239688u: goto label_239688;
        case 0x23968cu: goto label_23968c;
        case 0x239690u: goto label_239690;
        case 0x239694u: goto label_239694;
        case 0x239698u: goto label_239698;
        case 0x23969cu: goto label_23969c;
        case 0x2396a0u: goto label_2396a0;
        case 0x2396a4u: goto label_2396a4;
        case 0x2396a8u: goto label_2396a8;
        case 0x2396acu: goto label_2396ac;
        case 0x2396b0u: goto label_2396b0;
        case 0x2396b4u: goto label_2396b4;
        case 0x2396b8u: goto label_2396b8;
        case 0x2396bcu: goto label_2396bc;
        case 0x2396c0u: goto label_2396c0;
        case 0x2396c4u: goto label_2396c4;
        case 0x2396c8u: goto label_2396c8;
        case 0x2396ccu: goto label_2396cc;
        case 0x2396d0u: goto label_2396d0;
        case 0x2396d4u: goto label_2396d4;
        case 0x2396d8u: goto label_2396d8;
        case 0x2396dcu: goto label_2396dc;
        case 0x2396e0u: goto label_2396e0;
        case 0x2396e4u: goto label_2396e4;
        case 0x2396e8u: goto label_2396e8;
        case 0x2396ecu: goto label_2396ec;
        case 0x2396f0u: goto label_2396f0;
        case 0x2396f4u: goto label_2396f4;
        case 0x2396f8u: goto label_2396f8;
        case 0x2396fcu: goto label_2396fc;
        case 0x239700u: goto label_239700;
        case 0x239704u: goto label_239704;
        case 0x239708u: goto label_239708;
        case 0x23970cu: goto label_23970c;
        case 0x239710u: goto label_239710;
        case 0x239714u: goto label_239714;
        case 0x239718u: goto label_239718;
        case 0x23971cu: goto label_23971c;
        case 0x239720u: goto label_239720;
        case 0x239724u: goto label_239724;
        case 0x239728u: goto label_239728;
        case 0x23972cu: goto label_23972c;
        case 0x239730u: goto label_239730;
        case 0x239734u: goto label_239734;
        case 0x239738u: goto label_239738;
        case 0x23973cu: goto label_23973c;
        case 0x239740u: goto label_239740;
        case 0x239744u: goto label_239744;
        case 0x239748u: goto label_239748;
        case 0x23974cu: goto label_23974c;
        case 0x239750u: goto label_239750;
        case 0x239754u: goto label_239754;
        case 0x239758u: goto label_239758;
        case 0x23975cu: goto label_23975c;
        case 0x239760u: goto label_239760;
        case 0x239764u: goto label_239764;
        case 0x239768u: goto label_239768;
        case 0x23976cu: goto label_23976c;
        case 0x239770u: goto label_239770;
        case 0x239774u: goto label_239774;
        case 0x239778u: goto label_239778;
        case 0x23977cu: goto label_23977c;
        case 0x239780u: goto label_239780;
        case 0x239784u: goto label_239784;
        case 0x239788u: goto label_239788;
        case 0x23978cu: goto label_23978c;
        case 0x239790u: goto label_239790;
        default: break;
    }

    ctx->pc = 0x2395c0u;

label_2395c0:
    // 0x2395c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2395c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2395c4:
    // 0x2395c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2395c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2395c8:
    // 0x2395c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2395c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2395cc:
    // 0x2395cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2395ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2395d0:
    // 0x2395d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2395d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2395d4:
    // 0x2395d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2395d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2395d8:
    // 0x2395d8: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_2395dc:
    if (ctx->pc == 0x2395DCu) {
        ctx->pc = 0x2395DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395D8u;
        // 0x2395dc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2395E0u;
        goto label_2395e0;
    }
    ctx->pc = 0x2395D8u;
    {
        const bool branch_taken_0x2395d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2395DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395D8u;
        // 0x2395dc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395d8) {
            ctx->pc = 0x239608u;
            goto label_239608;
        }
    }
    ctx->pc = 0x2395E0u;
label_2395e0:
    // 0x2395e0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2395e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2395e4:
    // 0x2395e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2395e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2395e8:
    // 0x2395e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2395e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2395ec:
    // 0x2395ec: 0x2484b030  addiu       $a0, $a0, -0x4FD0
    ctx->pc = 0x2395ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946864));
label_2395f0:
    // 0x2395f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2395f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2395f4:
    // 0x2395f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2395f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2395f8:
    // 0x2395f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2395f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2395fc:
    // 0x2395fc: 0x808baa4  j           func_22EA90
label_239600:
    if (ctx->pc == 0x239600u) {
        ctx->pc = 0x239600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395FCu;
        // 0x239600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239604u;
        goto label_239604;
    }
    ctx->pc = 0x2395FCu;
    ctx->pc = 0x239600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2395FCu;
    // 0x239600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x239604u;
label_239604:
    // 0x239604: 0x0  nop
    ctx->pc = 0x239604u;
    // NOP
label_239608:
    // 0x239608: 0xc08e546  jal         func_239518
label_23960c:
    if (ctx->pc == 0x23960Cu) {
        ctx->pc = 0x239610u;
        goto label_239610;
    }
    ctx->pc = 0x239608u;
    SET_GPR_U32(ctx, 31, 0x239610u);
    ctx->pc = 0x239518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239518u, 0x239608u, 0x239610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239610u;
label_239610:
    // 0x239610: 0xc08e550  jal         func_239540
label_239614:
    if (ctx->pc == 0x239614u) {
        ctx->pc = 0x239614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239610u;
        // 0x239614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239618u;
        goto label_239618;
    }
    ctx->pc = 0x239610u;
    SET_GPR_U32(ctx, 31, 0x239618u);
    ctx->pc = 0x239614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239610u;
    // 0x239614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239540u, 0x239610u, 0x239618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239618u;
label_239618:
    // 0x239618: 0xc08e55a  jal         func_239568
label_23961c:
    if (ctx->pc == 0x23961Cu) {
        ctx->pc = 0x23961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239618u;
        // 0x23961c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239620u;
        goto label_239620;
    }
    ctx->pc = 0x239618u;
    SET_GPR_U32(ctx, 31, 0x239620u);
    ctx->pc = 0x23961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239618u;
    // 0x23961c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239568u, 0x239618u, 0x239620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239620u;
label_239620:
    // 0x239620: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x239620u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_239624:
    // 0x239624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239628:
    // 0x239628: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_23962c:
    if (ctx->pc == 0x23962Cu) {
        ctx->pc = 0x23962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239628u;
        // 0x23962c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239630u;
        goto label_239630;
    }
    ctx->pc = 0x239628u;
    {
        const bool branch_taken_0x239628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239628) {
            ctx->pc = 0x23962Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239628u;
            // 0x23962c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23963Cu;
            goto label_23963c;
        }
    }
    ctx->pc = 0x239630u;
label_239630:
    // 0x239630: 0xc08e700  jal         func_239C00
label_239634:
    if (ctx->pc == 0x239634u) {
        ctx->pc = 0x239634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239630u;
        // 0x239634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239638u;
        goto label_239638;
    }
    ctx->pc = 0x239630u;
    SET_GPR_U32(ctx, 31, 0x239638u);
    ctx->pc = 0x239634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239630u;
    // 0x239634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C00u, 0x239630u, 0x239638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239638u;
label_239638:
    // 0x239638: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23963c:
    // 0x23963c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_239640:
    if (ctx->pc == 0x239640u) {
        ctx->pc = 0x239640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23963Cu;
        // 0x239640: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239644u;
        goto label_239644;
    }
    ctx->pc = 0x23963Cu;
    {
        const bool branch_taken_0x23963c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23963c) {
            ctx->pc = 0x239640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23963Cu;
            // 0x239640: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239650u;
            goto label_239650;
        }
    }
    ctx->pc = 0x239644u;
label_239644:
    // 0x239644: 0xc08d538  jal         func_2354E0
label_239648:
    if (ctx->pc == 0x239648u) {
        ctx->pc = 0x239648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239644u;
        // 0x239648: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23964Cu;
        goto label_23964c;
    }
    ctx->pc = 0x239644u;
    SET_GPR_U32(ctx, 31, 0x23964Cu);
    ctx->pc = 0x239648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239644u;
    // 0x239648: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354E0u, 0x239644u, 0x23964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23964Cu;
label_23964c:
    // 0x23964c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x23964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_239650:
    // 0x239650: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_239654:
    if (ctx->pc == 0x239654u) {
        ctx->pc = 0x239654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239650u;
        // 0x239654: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239658u;
        goto label_239658;
    }
    ctx->pc = 0x239650u;
    {
        const bool branch_taken_0x239650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239650) {
            ctx->pc = 0x239654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239650u;
            // 0x239654: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239664u;
            goto label_239664;
        }
    }
    ctx->pc = 0x239658u;
label_239658:
    // 0x239658: 0xc08d69a  jal         func_235A68
label_23965c:
    if (ctx->pc == 0x23965Cu) {
        ctx->pc = 0x23965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239658u;
        // 0x23965c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239660u;
        goto label_239660;
    }
    ctx->pc = 0x239658u;
    SET_GPR_U32(ctx, 31, 0x239660u);
    ctx->pc = 0x23965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239658u;
    // 0x23965c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A68u, 0x239658u, 0x239660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239660u;
label_239660:
    // 0x239660: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x239660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_239664:
    // 0x239664: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_239668:
    if (ctx->pc == 0x239668u) {
        ctx->pc = 0x239668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239664u;
        // 0x239668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23966Cu;
        goto label_23966c;
    }
    ctx->pc = 0x239664u;
    {
        const bool branch_taken_0x239664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239664u;
        // 0x239668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239664) {
            ctx->pc = 0x239684u;
            goto label_239684;
        }
    }
    ctx->pc = 0x23966Cu;
label_23966c:
    // 0x23966c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x23966cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_239670:
    // 0x239670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239674:
    // 0x239674: 0xc08de58  jal         func_237960
label_239678:
    if (ctx->pc == 0x239678u) {
        ctx->pc = 0x239678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239674u;
        // 0x239678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23967Cu;
        goto label_23967c;
    }
    ctx->pc = 0x239674u;
    SET_GPR_U32(ctx, 31, 0x23967Cu);
    ctx->pc = 0x239678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239674u;
    // 0x239678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237960u, 0x239674u, 0x23967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23967Cu;
label_23967c:
    // 0x23967c: 0xc08dcc0  jal         func_237300
label_239680:
    if (ctx->pc == 0x239680u) {
        ctx->pc = 0x239680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23967Cu;
        // 0x239680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239684u;
        goto label_239684;
    }
    ctx->pc = 0x23967Cu;
    SET_GPR_U32(ctx, 31, 0x239684u);
    ctx->pc = 0x239680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23967Cu;
    // 0x239680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237300u, 0x23967Cu, 0x239684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239684u;
label_239684:
    // 0x239684: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x239684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_239688:
    // 0x239688: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_23968c:
    if (ctx->pc == 0x23968Cu) {
        ctx->pc = 0x239690u;
        goto label_239690;
    }
    ctx->pc = 0x239688u;
    {
        const bool branch_taken_0x239688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239688) {
            ctx->pc = 0x239698u;
            goto label_239698;
        }
    }
    ctx->pc = 0x239690u;
label_239690:
    // 0x239690: 0xc092cda  jal         func_24B368
label_239694:
    if (ctx->pc == 0x239694u) {
        ctx->pc = 0x239694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239690u;
        // 0x239694: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239698u;
        goto label_239698;
    }
    ctx->pc = 0x239690u;
    SET_GPR_U32(ctx, 31, 0x239698u);
    ctx->pc = 0x239694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239690u;
    // 0x239694: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B368u, 0x239690u, 0x239698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239698u;
label_239698:
    // 0x239698: 0xc08b528  jal         func_22D4A0
label_23969c:
    if (ctx->pc == 0x23969Cu) {
        ctx->pc = 0x2396A0u;
        goto label_2396a0;
    }
    ctx->pc = 0x239698u;
    SET_GPR_U32(ctx, 31, 0x2396A0u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x239698u, 0x2396A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396A0u;
label_2396a0:
    // 0x2396a0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2396a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2396a4:
    // 0x2396a4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2396a8:
    if (ctx->pc == 0x2396A8u) {
        ctx->pc = 0x2396A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396A4u;
        // 0x2396a8: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396ACu;
        goto label_2396ac;
    }
    ctx->pc = 0x2396A4u;
    {
        const bool branch_taken_0x2396a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2396a4) {
            ctx->pc = 0x2396A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2396A4u;
            // 0x2396a8: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2396C4u;
            goto label_2396c4;
        }
    }
    ctx->pc = 0x2396ACu;
label_2396ac:
    // 0x2396ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2396acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2396b0:
    // 0x2396b0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2396b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2396b4:
    // 0x2396b4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2396b8:
    // 0x2396b8: 0x40f809  jalr        $v0
label_2396bc:
    if (ctx->pc == 0x2396BCu) {
        ctx->pc = 0x2396C0u;
        goto label_2396c0;
    }
    ctx->pc = 0x2396B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2396C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2396B8u, 0x2396C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2396C0u;
label_2396c0:
    // 0x2396c0: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x2396c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2396c4:
    // 0x2396c4: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_2396c8:
    if (ctx->pc == 0x2396C8u) {
        ctx->pc = 0x2396C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396C4u;
        // 0x2396c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396CCu;
        goto label_2396cc;
    }
    ctx->pc = 0x2396C4u;
    {
        const bool branch_taken_0x2396c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2396C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396C4u;
        // 0x2396c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396c4) {
            ctx->pc = 0x239750u;
            goto label_239750;
        }
    }
    ctx->pc = 0x2396CCu;
label_2396cc:
    // 0x2396cc: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x2396ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_2396d0:
    // 0x2396d0: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x2396d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2396d4:
    // 0x2396d4: 0x0  nop
    ctx->pc = 0x2396d4u;
    // NOP
label_2396d8:
    // 0x2396d8: 0x8e03ffa0  lw          $v1, -0x60($s0)
    ctx->pc = 0x2396d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967200)));
label_2396dc:
    // 0x2396dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2396e0:
    if (ctx->pc == 0x2396E0u) {
        ctx->pc = 0x2396E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396DCu;
        // 0x2396e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396E4u;
        goto label_2396e4;
    }
    ctx->pc = 0x2396DCu;
    {
        const bool branch_taken_0x2396dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396DCu;
        // 0x2396e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396dc) {
            ctx->pc = 0x2396F8u;
            goto label_2396f8;
        }
    }
    ctx->pc = 0x2396E4u;
label_2396e4:
    // 0x2396e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2396e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2396e8:
    // 0x2396e8: 0xae00ffa0  sw          $zero, -0x60($s0)
    ctx->pc = 0x2396e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967200), GPR_U32(ctx, 0));
label_2396ec:
    // 0x2396ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2396ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2396f0:
    // 0x2396f0: 0x40f809  jalr        $v0
label_2396f4:
    if (ctx->pc == 0x2396F4u) {
        ctx->pc = 0x2396F8u;
        goto label_2396f8;
    }
    ctx->pc = 0x2396F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2396F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2396F0u, 0x2396F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2396F8u;
label_2396f8:
    // 0x2396f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2396f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2396fc:
    // 0x2396fc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_239700:
    if (ctx->pc == 0x239700u) {
        ctx->pc = 0x239700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396FCu;
        // 0x239700: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239704u;
        goto label_239704;
    }
    ctx->pc = 0x2396FCu;
    {
        const bool branch_taken_0x2396fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2396fc) {
            ctx->pc = 0x239700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2396FCu;
            // 0x239700: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23971Cu;
            goto label_23971c;
        }
    }
    ctx->pc = 0x239704u;
label_239704:
    // 0x239704: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x239704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239708:
    // 0x239708: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x239708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_23970c:
    // 0x23970c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_239710:
    // 0x239710: 0x40f809  jalr        $v0
label_239714:
    if (ctx->pc == 0x239714u) {
        ctx->pc = 0x239718u;
        goto label_239718;
    }
    ctx->pc = 0x239710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239710u, 0x239718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239718u;
label_239718:
    // 0x239718: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23971c:
    // 0x23971c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_239720:
    if (ctx->pc == 0x239720u) {
        ctx->pc = 0x239720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23971Cu;
        // 0x239720: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239724u;
        goto label_239724;
    }
    ctx->pc = 0x23971Cu;
    {
        const bool branch_taken_0x23971c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23971c) {
            ctx->pc = 0x239720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23971Cu;
            // 0x239720: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23973Cu;
            goto label_23973c;
        }
    }
    ctx->pc = 0x239724u;
label_239724:
    // 0x239724: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x239724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239728:
    // 0x239728: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x239728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_23972c:
    // 0x23972c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_239730:
    // 0x239730: 0x40f809  jalr        $v0
label_239734:
    if (ctx->pc == 0x239734u) {
        ctx->pc = 0x239738u;
        goto label_239738;
    }
    ctx->pc = 0x239730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239738u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239730u, 0x239738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239738u;
label_239738:
    // 0x239738: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x239738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23973c:
    // 0x23973c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23973cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_239740:
    // 0x239740: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x239740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_239744:
    // 0x239744: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x239744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_239748:
    // 0x239748: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_23974c:
    if (ctx->pc == 0x23974Cu) {
        ctx->pc = 0x23974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239748u;
        // 0x23974c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239750u;
        goto label_239750;
    }
    ctx->pc = 0x239748u;
    {
        const bool branch_taken_0x239748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239748u;
        // 0x23974c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239748) {
            ctx->pc = 0x2396D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2396d8;
        }
    }
    ctx->pc = 0x239750u;
label_239750:
    // 0x239750: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x239750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_239754:
    // 0x239754: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_239758:
    if (ctx->pc == 0x239758u) {
        ctx->pc = 0x239758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239754u;
        // 0x239758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23975Cu;
        goto label_23975c;
    }
    ctx->pc = 0x239754u;
    {
        const bool branch_taken_0x239754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239754) {
            ctx->pc = 0x239758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239754u;
            // 0x239758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239768u;
            goto label_239768;
        }
    }
    ctx->pc = 0x23975Cu;
label_23975c:
    // 0x23975c: 0xc08a534  jal         func_2294D0
label_239760:
    if (ctx->pc == 0x239760u) {
        ctx->pc = 0x239760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23975Cu;
        // 0x239760: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239764u;
        goto label_239764;
    }
    ctx->pc = 0x23975Cu;
    SET_GPR_U32(ctx, 31, 0x239764u);
    ctx->pc = 0x239760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23975Cu;
    // 0x239760: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2294D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2294D0u, 0x23975Cu, 0x239764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239764u;
label_239764:
    // 0x239764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239768:
    // 0x239768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23976c:
    // 0x23976c: 0xc049590  jal         func_125640
label_239770:
    if (ctx->pc == 0x239770u) {
        ctx->pc = 0x239770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23976Cu;
        // 0x239770: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239774u;
        goto label_239774;
    }
    ctx->pc = 0x23976Cu;
    SET_GPR_U32(ctx, 31, 0x239774u);
    ctx->pc = 0x239770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23976Cu;
    // 0x239770: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23976Cu, 0x239774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239774u;
label_239774:
    // 0x239774: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x239774u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_239778:
    // 0x239778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23977c:
    // 0x23977c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23977cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239780:
    // 0x239780: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239784:
    // 0x239784: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_239788:
    // 0x239788: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x239788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23978c:
    // 0x23978c: 0x808b52e  j           func_22D4B8
label_239790:
    if (ctx->pc == 0x239790u) {
        ctx->pc = 0x239790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23978Cu;
        // 0x239790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239794u;
        goto label_fallthrough_0x23978c;
    }
    ctx->pc = 0x23978Cu;
    ctx->pc = 0x239790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23978Cu;
    // 0x239790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
label_fallthrough_0x23978c:
    ctx->pc = 0x239794u;
}
