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

// Function: sub_00209558
// Address: 0x209558 - 0x2096a4
void sub_00209558_0x209558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209558_0x209558");
#endif

    switch (ctx->pc) {
        case 0x209558u: goto label_209558;
        case 0x20955cu: goto label_20955c;
        case 0x209560u: goto label_209560;
        case 0x209564u: goto label_209564;
        case 0x209568u: goto label_209568;
        case 0x20956cu: goto label_20956c;
        case 0x209570u: goto label_209570;
        case 0x209574u: goto label_209574;
        case 0x209578u: goto label_209578;
        case 0x20957cu: goto label_20957c;
        case 0x209580u: goto label_209580;
        case 0x209584u: goto label_209584;
        case 0x209588u: goto label_209588;
        case 0x20958cu: goto label_20958c;
        case 0x209590u: goto label_209590;
        case 0x209594u: goto label_209594;
        case 0x209598u: goto label_209598;
        case 0x20959cu: goto label_20959c;
        case 0x2095a0u: goto label_2095a0;
        case 0x2095a4u: goto label_2095a4;
        case 0x2095a8u: goto label_2095a8;
        case 0x2095acu: goto label_2095ac;
        case 0x2095b0u: goto label_2095b0;
        case 0x2095b4u: goto label_2095b4;
        case 0x2095b8u: goto label_2095b8;
        case 0x2095bcu: goto label_2095bc;
        case 0x2095c0u: goto label_2095c0;
        case 0x2095c4u: goto label_2095c4;
        case 0x2095c8u: goto label_2095c8;
        case 0x2095ccu: goto label_2095cc;
        case 0x2095d0u: goto label_2095d0;
        case 0x2095d4u: goto label_2095d4;
        case 0x2095d8u: goto label_2095d8;
        case 0x2095dcu: goto label_2095dc;
        case 0x2095e0u: goto label_2095e0;
        case 0x2095e4u: goto label_2095e4;
        case 0x2095e8u: goto label_2095e8;
        case 0x2095ecu: goto label_2095ec;
        case 0x2095f0u: goto label_2095f0;
        case 0x2095f4u: goto label_2095f4;
        case 0x2095f8u: goto label_2095f8;
        case 0x2095fcu: goto label_2095fc;
        case 0x209600u: goto label_209600;
        case 0x209604u: goto label_209604;
        case 0x209608u: goto label_209608;
        case 0x20960cu: goto label_20960c;
        case 0x209610u: goto label_209610;
        case 0x209614u: goto label_209614;
        case 0x209618u: goto label_209618;
        case 0x20961cu: goto label_20961c;
        case 0x209620u: goto label_209620;
        case 0x209624u: goto label_209624;
        case 0x209628u: goto label_209628;
        case 0x20962cu: goto label_20962c;
        case 0x209630u: goto label_209630;
        case 0x209634u: goto label_209634;
        case 0x209638u: goto label_209638;
        case 0x20963cu: goto label_20963c;
        case 0x209640u: goto label_209640;
        case 0x209644u: goto label_209644;
        case 0x209648u: goto label_209648;
        case 0x20964cu: goto label_20964c;
        case 0x209650u: goto label_209650;
        case 0x209654u: goto label_209654;
        case 0x209658u: goto label_209658;
        case 0x20965cu: goto label_20965c;
        case 0x209660u: goto label_209660;
        case 0x209664u: goto label_209664;
        case 0x209668u: goto label_209668;
        case 0x20966cu: goto label_20966c;
        case 0x209670u: goto label_209670;
        case 0x209674u: goto label_209674;
        case 0x209678u: goto label_209678;
        case 0x20967cu: goto label_20967c;
        case 0x209680u: goto label_209680;
        case 0x209684u: goto label_209684;
        case 0x209688u: goto label_209688;
        case 0x20968cu: goto label_20968c;
        case 0x209690u: goto label_209690;
        case 0x209694u: goto label_209694;
        case 0x209698u: goto label_209698;
        case 0x20969cu: goto label_20969c;
        case 0x2096a0u: goto label_2096a0;
        default: break;
    }

    ctx->pc = 0x209558u;

label_209558:
    // 0x209558: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x209558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20955c:
    // 0x20955c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209560:
    // 0x209560: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x209560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_209564:
    // 0x209564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209568:
    // 0x209568: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x209568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_20956c:
    // 0x20956c: 0x26110194  addiu       $s1, $s0, 0x194
    ctx->pc = 0x20956cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
label_209570:
    // 0x209570: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x209570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_209574:
    // 0x209574: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x209574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_209578:
    // 0x209578: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x209578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_20957c:
    // 0x20957c: 0x8e12017c  lw          $s2, 0x17C($s0)
    ctx->pc = 0x20957cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_209580:
    // 0x209580: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x209580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_209584:
    // 0x209584: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x209584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_209588:
    // 0x209588: 0x40f809  jalr        $v0
label_20958c:
    if (ctx->pc == 0x20958Cu) {
        ctx->pc = 0x20958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209588u;
        // 0x20958c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209590u;
        goto label_209590;
    }
    ctx->pc = 0x209588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209590u);
        ctx->pc = 0x20958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209588u;
        // 0x20958c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209588u, 0x209590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209590u;
label_209590:
    // 0x209590: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x209590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_209594:
    // 0x209594: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x209594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_209598:
    // 0x209598: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x209598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20959c:
    // 0x20959c: 0x24a57fe8  addiu       $a1, $a1, 0x7FE8
    ctx->pc = 0x20959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32744));
label_2095a0:
    // 0x2095a0: 0x24c67ff0  addiu       $a2, $a2, 0x7FF0
    ctx->pc = 0x2095a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32752));
label_2095a4:
    // 0x2095a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2095a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2095a8:
    // 0x2095a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2095ac:
    if (ctx->pc == 0x2095ACu) {
        ctx->pc = 0x2095ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095A8u;
        // 0x2095ac: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095B0u;
        goto label_2095b0;
    }
    ctx->pc = 0x2095A8u;
    {
        const bool branch_taken_0x2095a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095A8u;
        // 0x2095ac: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095a8) {
            ctx->pc = 0x2095C8u;
            goto label_2095c8;
        }
    }
    ctx->pc = 0x2095B0u;
label_2095b0:
    // 0x2095b0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x2095b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_2095b4:
    // 0x2095b4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2095b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2095b8:
    // 0x2095b8: 0xc0948e4  jal         func_252390
label_2095bc:
    if (ctx->pc == 0x2095BCu) {
        ctx->pc = 0x2095BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095B8u;
        // 0x2095bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095C0u;
        goto label_2095c0;
    }
    ctx->pc = 0x2095B8u;
    SET_GPR_U32(ctx, 31, 0x2095C0u);
    ctx->pc = 0x2095BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095B8u;
    // 0x2095bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252390u, 0x2095B8u, 0x2095C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095C0u;
label_2095c0:
    // 0x2095c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2095c4:
    if (ctx->pc == 0x2095C4u) {
        ctx->pc = 0x2095C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095C0u;
        // 0x2095c4: 0x26130188  addiu       $s3, $s0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095C8u;
        goto label_2095c8;
    }
    ctx->pc = 0x2095C0u;
    {
        const bool branch_taken_0x2095c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2095C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095C0u;
        // 0x2095c4: 0x26130188  addiu       $s3, $s0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095c0) {
            ctx->pc = 0x2095E0u;
            goto label_2095e0;
        }
    }
    ctx->pc = 0x2095C8u;
label_2095c8:
    // 0x2095c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2095c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2095cc:
    // 0x2095cc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2095ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2095d0:
    // 0x2095d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2095d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2095d4:
    // 0x2095d4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2095d8:
    if (ctx->pc == 0x2095D8u) {
        ctx->pc = 0x2095D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D4u;
        // 0x2095d8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095DCu;
        goto label_2095dc;
    }
    ctx->pc = 0x2095D4u;
    {
        const bool branch_taken_0x2095d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D4u;
        // 0x2095d8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095d4) {
            ctx->pc = 0x209688u;
            goto label_209688;
        }
    }
    ctx->pc = 0x2095DCu;
label_2095dc:
    // 0x2095dc: 0x0  nop
    ctx->pc = 0x2095dcu;
    // NOP
label_2095e0:
    // 0x2095e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2095e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2095e4:
    // 0x2095e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2095e8:
    if (ctx->pc == 0x2095E8u) {
        ctx->pc = 0x2095E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095E4u;
        // 0x2095e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095ECu;
        goto label_2095ec;
    }
    ctx->pc = 0x2095E4u;
    {
        const bool branch_taken_0x2095e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095E4u;
        // 0x2095e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095e4) {
            ctx->pc = 0x209668u;
            goto label_209668;
        }
    }
    ctx->pc = 0x2095ECu;
label_2095ec:
    // 0x2095ec: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2095f0:
    // 0x2095f0: 0xc049522  jal         func_125488
label_2095f4:
    if (ctx->pc == 0x2095F4u) {
        ctx->pc = 0x2095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F0u;
        // 0x2095f4: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095F8u;
        goto label_2095f8;
    }
    ctx->pc = 0x2095F0u;
    SET_GPR_U32(ctx, 31, 0x2095F8u);
    ctx->pc = 0x2095F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095F0u;
    // 0x2095f4: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2095F0u, 0x2095F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095F8u;
label_2095f8:
    // 0x2095f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2095f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2095fc:
    // 0x2095fc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2095fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_209600:
    // 0x209600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209604:
    // 0x209604: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x209604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_209608:
    // 0x209608: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x209608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20960c:
    // 0x20960c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20960cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209610:
    // 0x209610: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x209610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_209614:
    // 0x209614: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x209614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_209618:
    // 0x209618: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x209618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20961c:
    // 0x20961c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x20961cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_209620:
    // 0x209620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209624:
    // 0x209624: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x209624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_209628:
    // 0x209628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20962c:
    // 0x20962c: 0x40f809  jalr        $v0
label_209630:
    if (ctx->pc == 0x209630u) {
        ctx->pc = 0x209630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20962Cu;
        // 0x209630: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209634u;
        goto label_209634;
    }
    ctx->pc = 0x20962Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209634u);
        ctx->pc = 0x209630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20962Cu;
        // 0x209630: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20962Cu, 0x209634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209634u;
label_209634:
    // 0x209634: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x209634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_209638:
    // 0x209638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x209638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20963c:
    // 0x20963c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20963cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209640:
    // 0x209640: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x209640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_209644:
    // 0x209644: 0x40f809  jalr        $v0
label_209648:
    if (ctx->pc == 0x209648u) {
        ctx->pc = 0x209648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209644u;
        // 0x209648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20964Cu;
        goto label_20964c;
    }
    ctx->pc = 0x209644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20964Cu);
        ctx->pc = 0x209648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209644u;
        // 0x209648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209644u, 0x20964Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20964Cu;
label_20964c:
    // 0x20964c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_209650:
    // 0x209650: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x209650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_209654:
    // 0x209654: 0x40f809  jalr        $v0
label_209658:
    if (ctx->pc == 0x209658u) {
        ctx->pc = 0x209658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209654u;
        // 0x209658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20965Cu;
        goto label_20965c;
    }
    ctx->pc = 0x209654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20965Cu);
        ctx->pc = 0x209658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209654u;
        // 0x209658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209654u, 0x20965Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20965Cu;
label_20965c:
    // 0x20965c: 0x1000000b  b           . + 4 + (0xB << 2)
label_209660:
    if (ctx->pc == 0x209660u) {
        ctx->pc = 0x209660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20965Cu;
        // 0x209660: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209664u;
        goto label_209664;
    }
    ctx->pc = 0x20965Cu;
    {
        const bool branch_taken_0x20965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20965Cu;
        // 0x209660: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20965c) {
            ctx->pc = 0x20968Cu;
            goto label_20968c;
        }
    }
    ctx->pc = 0x209664u;
label_209664:
    // 0x209664: 0x0  nop
    ctx->pc = 0x209664u;
    // NOP
label_209668:
    // 0x209668: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x209668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_20966c:
    // 0x20966c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20966cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209670:
    // 0x209670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x209670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_209674:
    // 0x209674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209678:
    // 0x209678: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x209678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_20967c:
    // 0x20967c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20967cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_209680:
    // 0x209680: 0xc0825ec  jal         func_2097B0
label_209684:
    if (ctx->pc == 0x209684u) {
        ctx->pc = 0x209684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209680u;
        // 0x209684: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209688u;
        goto label_209688;
    }
    ctx->pc = 0x209680u;
    SET_GPR_U32(ctx, 31, 0x209688u);
    ctx->pc = 0x209684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209680u;
    // 0x209684: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2097B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2097B0u, 0x209680u, 0x209688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209688u;
label_209688:
    // 0x209688: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x209688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20968c:
    // 0x20968c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x20968cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_209690:
    // 0x209690: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x209690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_209694:
    // 0x209694: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x209694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_209698:
    // 0x209698: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x209698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20969c:
    // 0x20969c: 0x3e00008  jr          $ra
label_2096a0:
    if (ctx->pc == 0x2096A0u) {
        ctx->pc = 0x2096A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20969Cu;
        // 0x2096a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096A4u;
        goto label_fallthrough_0x20969c;
    }
    ctx->pc = 0x20969Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2096A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20969Cu;
        // 0x2096a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20969Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20969c:
    ctx->pc = 0x2096A4u;
}
