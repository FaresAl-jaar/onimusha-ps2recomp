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

// Function: sub_00403670
// Address: 0x403670 - 0x403854
void sub_00403670_0x403670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403670_0x403670");
#endif

    switch (ctx->pc) {
        case 0x403670u: goto label_403670;
        case 0x403674u: goto label_403674;
        case 0x403678u: goto label_403678;
        case 0x40367cu: goto label_40367c;
        case 0x403680u: goto label_403680;
        case 0x403684u: goto label_403684;
        case 0x403688u: goto label_403688;
        case 0x40368cu: goto label_40368c;
        case 0x403690u: goto label_403690;
        case 0x403694u: goto label_403694;
        case 0x403698u: goto label_403698;
        case 0x40369cu: goto label_40369c;
        case 0x4036a0u: goto label_4036a0;
        case 0x4036a4u: goto label_4036a4;
        case 0x4036a8u: goto label_4036a8;
        case 0x4036acu: goto label_4036ac;
        case 0x4036b0u: goto label_4036b0;
        case 0x4036b4u: goto label_4036b4;
        case 0x4036b8u: goto label_4036b8;
        case 0x4036bcu: goto label_4036bc;
        case 0x4036c0u: goto label_4036c0;
        case 0x4036c4u: goto label_4036c4;
        case 0x4036c8u: goto label_4036c8;
        case 0x4036ccu: goto label_4036cc;
        case 0x4036d0u: goto label_4036d0;
        case 0x4036d4u: goto label_4036d4;
        case 0x4036d8u: goto label_4036d8;
        case 0x4036dcu: goto label_4036dc;
        case 0x4036e0u: goto label_4036e0;
        case 0x4036e4u: goto label_4036e4;
        case 0x4036e8u: goto label_4036e8;
        case 0x4036ecu: goto label_4036ec;
        case 0x4036f0u: goto label_4036f0;
        case 0x4036f4u: goto label_4036f4;
        case 0x4036f8u: goto label_4036f8;
        case 0x4036fcu: goto label_4036fc;
        case 0x403700u: goto label_403700;
        case 0x403704u: goto label_403704;
        case 0x403708u: goto label_403708;
        case 0x40370cu: goto label_40370c;
        case 0x403710u: goto label_403710;
        case 0x403714u: goto label_403714;
        case 0x403718u: goto label_403718;
        case 0x40371cu: goto label_40371c;
        case 0x403720u: goto label_403720;
        case 0x403724u: goto label_403724;
        case 0x403728u: goto label_403728;
        case 0x40372cu: goto label_40372c;
        case 0x403730u: goto label_403730;
        case 0x403734u: goto label_403734;
        case 0x403738u: goto label_403738;
        case 0x40373cu: goto label_40373c;
        case 0x403740u: goto label_403740;
        case 0x403744u: goto label_403744;
        case 0x403748u: goto label_403748;
        case 0x40374cu: goto label_40374c;
        case 0x403750u: goto label_403750;
        case 0x403754u: goto label_403754;
        case 0x403758u: goto label_403758;
        case 0x40375cu: goto label_40375c;
        case 0x403760u: goto label_403760;
        case 0x403764u: goto label_403764;
        case 0x403768u: goto label_403768;
        case 0x40376cu: goto label_40376c;
        case 0x403770u: goto label_403770;
        case 0x403774u: goto label_403774;
        case 0x403778u: goto label_403778;
        case 0x40377cu: goto label_40377c;
        case 0x403780u: goto label_403780;
        case 0x403784u: goto label_403784;
        case 0x403788u: goto label_403788;
        case 0x40378cu: goto label_40378c;
        case 0x403790u: goto label_403790;
        case 0x403794u: goto label_403794;
        case 0x403798u: goto label_403798;
        case 0x40379cu: goto label_40379c;
        case 0x4037a0u: goto label_4037a0;
        case 0x4037a4u: goto label_4037a4;
        case 0x4037a8u: goto label_4037a8;
        case 0x4037acu: goto label_4037ac;
        case 0x4037b0u: goto label_4037b0;
        case 0x4037b4u: goto label_4037b4;
        case 0x4037b8u: goto label_4037b8;
        case 0x4037bcu: goto label_4037bc;
        case 0x4037c0u: goto label_4037c0;
        case 0x4037c4u: goto label_4037c4;
        case 0x4037c8u: goto label_4037c8;
        case 0x4037ccu: goto label_4037cc;
        case 0x4037d0u: goto label_4037d0;
        case 0x4037d4u: goto label_4037d4;
        case 0x4037d8u: goto label_4037d8;
        case 0x4037dcu: goto label_4037dc;
        case 0x4037e0u: goto label_4037e0;
        case 0x4037e4u: goto label_4037e4;
        case 0x4037e8u: goto label_4037e8;
        case 0x4037ecu: goto label_4037ec;
        case 0x4037f0u: goto label_4037f0;
        case 0x4037f4u: goto label_4037f4;
        case 0x4037f8u: goto label_4037f8;
        case 0x4037fcu: goto label_4037fc;
        case 0x403800u: goto label_403800;
        case 0x403804u: goto label_403804;
        case 0x403808u: goto label_403808;
        case 0x40380cu: goto label_40380c;
        case 0x403810u: goto label_403810;
        case 0x403814u: goto label_403814;
        case 0x403818u: goto label_403818;
        case 0x40381cu: goto label_40381c;
        case 0x403820u: goto label_403820;
        case 0x403824u: goto label_403824;
        case 0x403828u: goto label_403828;
        case 0x40382cu: goto label_40382c;
        case 0x403830u: goto label_403830;
        case 0x403834u: goto label_403834;
        case 0x403838u: goto label_403838;
        case 0x40383cu: goto label_40383c;
        case 0x403840u: goto label_403840;
        case 0x403844u: goto label_403844;
        case 0x403848u: goto label_403848;
        case 0x40384cu: goto label_40384c;
        case 0x403850u: goto label_403850;
        default: break;
    }

    ctx->pc = 0x403670u;

label_403670:
    // 0x403670: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x403670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_403674:
    // 0x403674: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x403674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_403678:
    // 0x403678: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x403678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_40367c:
    // 0x40367c: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x40367cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_403680:
    // 0x403680: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x403680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_403684:
    // 0x403684: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x403684u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_403688:
    // 0x403688: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x403688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_40368c:
    // 0x40368c: 0x3c178007  lui         $s7, 0x8007
    ctx->pc = 0x40368cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32775 << 16));
label_403690:
    // 0x403690: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x403690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_403694:
    // 0x403694: 0x3c168007  lui         $s6, 0x8007
    ctx->pc = 0x403694u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32775 << 16));
label_403698:
    // 0x403698: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x403698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_40369c:
    // 0x40369c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x40369cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4036a0:
    // 0x4036a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4036a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_4036a4:
    // 0x4036a4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4036a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4036a8:
    // 0x4036a8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4036a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_4036ac:
    // 0x4036ac: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x4036acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
label_4036b0:
    // 0x4036b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4036b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_4036b4:
    // 0x4036b4: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x4036b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_4036b8:
    // 0x4036b8: 0x8c484728  lw          $t0, 0x4728($v0)
    ctx->pc = 0x4036b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_4036bc:
    // 0x4036bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4036bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4036c0:
    // 0x4036c0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4036c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4036c4:
    // 0x4036c4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4036c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_4036c8:
    // 0x4036c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4036c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_4036cc:
    // 0x4036cc: 0x8d130000  lw          $s3, 0x0($t0)
    ctx->pc = 0x4036ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4036d0:
    // 0x4036d0: 0x8c624730  lw          $v0, 0x4730($v1)
    ctx->pc = 0x4036d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18224)));
label_4036d4:
    // 0x4036d4: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x4036d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_4036d8:
    // 0x4036d8: 0x40f809  jalr        $v0
label_4036dc:
    if (ctx->pc == 0x4036DCu) {
        ctx->pc = 0x4036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4036D8u;
        // 0x4036dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4036E0u;
        goto label_4036e0;
    }
    ctx->pc = 0x4036D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4036E0u);
        ctx->pc = 0x4036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4036D8u;
        // 0x4036dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4036D8u, 0x4036E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4036E0u;
label_4036e0:
    // 0x4036e0: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4036e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4036e4:
    // 0x4036e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4036e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4036e8:
    // 0x4036e8: 0x8c624734  lw          $v0, 0x4734($v1)
    ctx->pc = 0x4036e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18228)));
label_4036ec:
    // 0x4036ec: 0x40f809  jalr        $v0
label_4036f0:
    if (ctx->pc == 0x4036F0u) {
        ctx->pc = 0x4036F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4036ECu;
        // 0x4036f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4036F4u;
        goto label_4036f4;
    }
    ctx->pc = 0x4036ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4036F4u);
        ctx->pc = 0x4036F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4036ECu;
        // 0x4036f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4036ECu, 0x4036F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4036F4u;
label_4036f4:
    // 0x4036f4: 0x0  nop
    ctx->pc = 0x4036f4u;
    // NOP
label_4036f8:
    // 0x4036f8: 0x8ec24748  lw          $v0, 0x4748($s6)
    ctx->pc = 0x4036f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_4036fc:
    // 0x4036fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4036fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_403700:
    // 0x403700: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x403700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_403704:
    // 0x403704: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_403708:
    if (ctx->pc == 0x403708u) {
        ctx->pc = 0x403708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403704u;
        // 0x403708: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40370Cu;
        goto label_40370c;
    }
    ctx->pc = 0x403704u;
    {
        const bool branch_taken_0x403704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x403704) {
            ctx->pc = 0x403708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x403704u;
            // 0x403708: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403748u;
            goto label_403748;
        }
    }
    ctx->pc = 0x40370Cu;
label_40370c:
    // 0x40370c: 0x5213000e  beql        $s0, $s3, . + 4 + (0xE << 2)
label_403710:
    if (ctx->pc == 0x403710u) {
        ctx->pc = 0x403710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40370Cu;
        // 0x403710: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403714u;
        goto label_403714;
    }
    ctx->pc = 0x40370Cu;
    {
        const bool branch_taken_0x40370c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x40370c) {
            ctx->pc = 0x403710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40370Cu;
            // 0x403710: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403748u;
            goto label_403748;
        }
    }
    ctx->pc = 0x403714u;
label_403714:
    // 0x403714: 0x145e0006  bne         $v0, $fp, . + 4 + (0x6 << 2)
label_403718:
    if (ctx->pc == 0x403718u) {
        ctx->pc = 0x403718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403714u;
        // 0x403718: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40371Cu;
        goto label_40371c;
    }
    ctx->pc = 0x403714u;
    {
        const bool branch_taken_0x403714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x403718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403714u;
        // 0x403718: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403714) {
            ctx->pc = 0x403730u;
            goto label_403730;
        }
    }
    ctx->pc = 0x40371Cu;
label_40371c:
    // 0x40371c: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x40371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_403720:
    // 0x403720: 0x40f809  jalr        $v0
label_403724:
    if (ctx->pc == 0x403724u) {
        ctx->pc = 0x403724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403720u;
        // 0x403724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403728u;
        goto label_403728;
    }
    ctx->pc = 0x403720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x403728u);
        ctx->pc = 0x403724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403720u;
        // 0x403724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403720u, 0x403728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403728u;
label_403728:
    // 0x403728: 0x10000007  b           . + 4 + (0x7 << 2)
label_40372c:
    if (ctx->pc == 0x40372Cu) {
        ctx->pc = 0x40372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403728u;
        // 0x40372c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403730u;
        goto label_403730;
    }
    ctx->pc = 0x403728u;
    {
        const bool branch_taken_0x403728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403728u;
        // 0x40372c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403728) {
            ctx->pc = 0x403748u;
            goto label_403748;
        }
    }
    ctx->pc = 0x403730u;
label_403730:
    // 0x403730: 0x40f809  jalr        $v0
label_403734:
    if (ctx->pc == 0x403734u) {
        ctx->pc = 0x403734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403730u;
        // 0x403734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403738u;
        goto label_403738;
    }
    ctx->pc = 0x403730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x403738u);
        ctx->pc = 0x403734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403730u;
        // 0x403734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403730u, 0x403738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403738u;
label_403738:
    // 0x403738: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x403738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_40373c:
    // 0x40373c: 0x40f809  jalr        $v0
label_403740:
    if (ctx->pc == 0x403740u) {
        ctx->pc = 0x403740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40373Cu;
        // 0x403740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403744u;
        goto label_403744;
    }
    ctx->pc = 0x40373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x403744u);
        ctx->pc = 0x403740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40373Cu;
        // 0x403740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40373Cu, 0x403744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403744u;
label_403744:
    // 0x403744: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x403744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_403748:
    // 0x403748: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x403748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_40374c:
    // 0x40374c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_403750:
    if (ctx->pc == 0x403750u) {
        ctx->pc = 0x403750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40374Cu;
        // 0x403750: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403754u;
        goto label_403754;
    }
    ctx->pc = 0x40374Cu;
    {
        const bool branch_taken_0x40374c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40374Cu;
        // 0x403750: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40374c) {
            ctx->pc = 0x4036F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4036f8;
        }
    }
    ctx->pc = 0x403754u;
label_403754:
    // 0x403754: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x403754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_403758:
    // 0x403758: 0x8c62473c  lw          $v0, 0x473C($v1)
    ctx->pc = 0x403758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18236)));
label_40375c:
    // 0x40375c: 0x40f809  jalr        $v0
label_403760:
    if (ctx->pc == 0x403760u) {
        ctx->pc = 0x403760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40375Cu;
        // 0x403760: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403764u;
        goto label_403764;
    }
    ctx->pc = 0x40375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x403764u);
        ctx->pc = 0x403760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40375Cu;
        // 0x403760: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40375Cu, 0x403764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403764u;
label_403764:
    // 0x403764: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x403764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_403768:
    // 0x403768: 0x8c624738  lw          $v0, 0x4738($v1)
    ctx->pc = 0x403768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18232)));
label_40376c:
    // 0x40376c: 0x40f809  jalr        $v0
label_403770:
    if (ctx->pc == 0x403770u) {
        ctx->pc = 0x403774u;
        goto label_403774;
    }
    ctx->pc = 0x40376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x403774u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40376Cu, 0x403774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403774u;
label_403774:
    // 0x403774: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x403774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_403778:
    // 0x403778: 0x8c62472c  lw          $v0, 0x472C($v1)
    ctx->pc = 0x403778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18220)));
label_40377c:
    // 0x40377c: 0xc01d0f2  jal         func_0743C8
label_403780:
    if (ctx->pc == 0x403780u) {
        ctx->pc = 0x403780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40377Cu;
        // 0x403780: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403784u;
        goto label_403784;
    }
    ctx->pc = 0x40377Cu;
    SET_GPR_U32(ctx, 31, 0x403784u);
    ctx->pc = 0x403780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40377Cu;
    // 0x403780: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x743C8u, 0x40377Cu, 0x403784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403784u;
label_403784:
    // 0x403784: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x403784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_403788:
    // 0x403788: 0x1a80000d  blez        $s4, . + 4 + (0xD << 2)
label_40378c:
    if (ctx->pc == 0x40378Cu) {
        ctx->pc = 0x40378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403788u;
        // 0x40378c: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403790u;
        goto label_403790;
    }
    ctx->pc = 0x403788u;
    {
        const bool branch_taken_0x403788 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x40378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403788u;
        // 0x40378c: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403788) {
            ctx->pc = 0x4037C0u;
            goto label_4037c0;
        }
    }
    ctx->pc = 0x403790u;
label_403790:
    // 0x403790: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x403790u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
label_403794:
    // 0x403794: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x403794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_403798:
    // 0x403798: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x403798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_40379c:
    // 0x40379c: 0x8e224770  lw          $v0, 0x4770($s1)
    ctx->pc = 0x40379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18288)));
label_4037a0:
    // 0x4037a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4037a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4037a4:
    // 0x4037a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4037a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4037a8:
    // 0x4037a8: 0x40f809  jalr        $v0
label_4037ac:
    if (ctx->pc == 0x4037ACu) {
        ctx->pc = 0x4037ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4037A8u;
        // 0x4037ac: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4037B0u;
        goto label_4037b0;
    }
    ctx->pc = 0x4037A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4037B0u);
        ctx->pc = 0x4037ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4037A8u;
        // 0x4037ac: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4037A8u, 0x4037B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4037B0u;
label_4037b0:
    // 0x4037b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4037b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4037b4:
    // 0x4037b4: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x4037b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_4037b8:
    // 0x4037b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4037bc:
    if (ctx->pc == 0x4037BCu) {
        ctx->pc = 0x4037BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4037B8u;
        // 0x4037bc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4037C0u;
        goto label_4037c0;
    }
    ctx->pc = 0x4037B8u;
    {
        const bool branch_taken_0x4037b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4037BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4037B8u;
        // 0x4037bc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4037b8) {
            ctx->pc = 0x403798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403798;
        }
    }
    ctx->pc = 0x4037C0u;
label_4037c0:
    // 0x4037c0: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x4037c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_4037c4:
    // 0x4037c4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4037c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4037c8:
    // 0x4037c8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x4037c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4037cc:
    // 0x4037cc: 0x8ec54748  lw          $a1, 0x4748($s6)
    ctx->pc = 0x4037ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_4037d0:
    // 0x4037d0: 0x8c644778  lw          $a0, 0x4778($v1)
    ctx->pc = 0x4037d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
label_4037d4:
    // 0x4037d4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x4037d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_4037d8:
    // 0x4037d8: 0x8c66476c  lw          $a2, 0x476C($v1)
    ctx->pc = 0x4037d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18284)));
label_4037dc:
    // 0x4037dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4037dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4037e0:
    // 0x4037e0: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x4037e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
label_4037e4:
    // 0x4037e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4037e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4037e8:
    // 0x4037e8: 0xac540034  sw          $s4, 0x34($v0)
    ctx->pc = 0x4037e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 20));
label_4037ec:
    // 0x4037ec: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x4037ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_4037f0:
    // 0x4037f0: 0xac550030  sw          $s5, 0x30($v0)
    ctx->pc = 0x4037f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 21));
label_4037f4:
    // 0x4037f4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x4037f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_4037f8:
    // 0x4037f8: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x4037f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
label_4037fc:
    // 0x4037fc: 0xa4400018  sh          $zero, 0x18($v0)
    ctx->pc = 0x4037fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
label_403800:
    // 0x403800: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x403800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_403804:
    // 0x403804: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x403804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_403808:
    // 0x403808: 0xc0f809  jalr        $a2
label_40380c:
    if (ctx->pc == 0x40380Cu) {
        ctx->pc = 0x40380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403808u;
        // 0x40380c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403810u;
        goto label_403810;
    }
    ctx->pc = 0x403808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x403810u);
        ctx->pc = 0x40380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403808u;
        // 0x40380c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403808u, 0x403810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403810u;
label_403810:
    // 0x403810: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x403810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_403814:
    // 0x403814: 0x8c434768  lw          $v1, 0x4768($v0)
    ctx->pc = 0x403814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
label_403818:
    // 0x403818: 0x60f809  jalr        $v1
label_40381c:
    if (ctx->pc == 0x40381Cu) {
        ctx->pc = 0x403820u;
        goto label_403820;
    }
    ctx->pc = 0x403818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x403820u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403818u, 0x403820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x403820u;
label_403820:
    // 0x403820: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x403820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_403824:
    // 0x403824: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x403824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_403828:
    // 0x403828: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x403828u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_40382c:
    // 0x40382c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x40382cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_403830:
    // 0x403830: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x403830u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_403834:
    // 0x403834: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x403834u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_403838:
    // 0x403838: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x403838u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_40383c:
    // 0x40383c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x40383cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_403840:
    // 0x403840: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x403840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_403844:
    // 0x403844: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x403844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_403848:
    // 0x403848: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x403848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40384c:
    // 0x40384c: 0x3e00008  jr          $ra
label_403850:
    if (ctx->pc == 0x403850u) {
        ctx->pc = 0x403850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40384Cu;
        // 0x403850: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403854u;
        goto label_fallthrough_0x40384c;
    }
    ctx->pc = 0x40384Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40384Cu;
        // 0x403850: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40384Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40384c:
    ctx->pc = 0x403854u;
}
