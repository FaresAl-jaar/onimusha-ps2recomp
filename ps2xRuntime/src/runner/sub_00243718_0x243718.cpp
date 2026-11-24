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

// Function: sub_00243718
// Address: 0x243718 - 0x24381c
void sub_00243718_0x243718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243718_0x243718");
#endif

    switch (ctx->pc) {
        case 0x243718u: goto label_243718;
        case 0x24371cu: goto label_24371c;
        case 0x243720u: goto label_243720;
        case 0x243724u: goto label_243724;
        case 0x243728u: goto label_243728;
        case 0x24372cu: goto label_24372c;
        case 0x243730u: goto label_243730;
        case 0x243734u: goto label_243734;
        case 0x243738u: goto label_243738;
        case 0x24373cu: goto label_24373c;
        case 0x243740u: goto label_243740;
        case 0x243744u: goto label_243744;
        case 0x243748u: goto label_243748;
        case 0x24374cu: goto label_24374c;
        case 0x243750u: goto label_243750;
        case 0x243754u: goto label_243754;
        case 0x243758u: goto label_243758;
        case 0x24375cu: goto label_24375c;
        case 0x243760u: goto label_243760;
        case 0x243764u: goto label_243764;
        case 0x243768u: goto label_243768;
        case 0x24376cu: goto label_24376c;
        case 0x243770u: goto label_243770;
        case 0x243774u: goto label_243774;
        case 0x243778u: goto label_243778;
        case 0x24377cu: goto label_24377c;
        case 0x243780u: goto label_243780;
        case 0x243784u: goto label_243784;
        case 0x243788u: goto label_243788;
        case 0x24378cu: goto label_24378c;
        case 0x243790u: goto label_243790;
        case 0x243794u: goto label_243794;
        case 0x243798u: goto label_243798;
        case 0x24379cu: goto label_24379c;
        case 0x2437a0u: goto label_2437a0;
        case 0x2437a4u: goto label_2437a4;
        case 0x2437a8u: goto label_2437a8;
        case 0x2437acu: goto label_2437ac;
        case 0x2437b0u: goto label_2437b0;
        case 0x2437b4u: goto label_2437b4;
        case 0x2437b8u: goto label_2437b8;
        case 0x2437bcu: goto label_2437bc;
        case 0x2437c0u: goto label_2437c0;
        case 0x2437c4u: goto label_2437c4;
        case 0x2437c8u: goto label_2437c8;
        case 0x2437ccu: goto label_2437cc;
        case 0x2437d0u: goto label_2437d0;
        case 0x2437d4u: goto label_2437d4;
        case 0x2437d8u: goto label_2437d8;
        case 0x2437dcu: goto label_2437dc;
        case 0x2437e0u: goto label_2437e0;
        case 0x2437e4u: goto label_2437e4;
        case 0x2437e8u: goto label_2437e8;
        case 0x2437ecu: goto label_2437ec;
        case 0x2437f0u: goto label_2437f0;
        case 0x2437f4u: goto label_2437f4;
        case 0x2437f8u: goto label_2437f8;
        case 0x2437fcu: goto label_2437fc;
        case 0x243800u: goto label_243800;
        case 0x243804u: goto label_243804;
        case 0x243808u: goto label_243808;
        case 0x24380cu: goto label_24380c;
        case 0x243810u: goto label_243810;
        case 0x243814u: goto label_243814;
        case 0x243818u: goto label_243818;
        default: break;
    }

    ctx->pc = 0x243718u;

label_243718:
    // 0x243718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x243718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24371c:
    // 0x24371c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24371cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
label_243720:
    // 0x243720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_243724:
    // 0x243724: 0x2463e97c  addiu       $v1, $v1, -0x1684
    ctx->pc = 0x243724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961532));
label_243728:
    // 0x243728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x243728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_24372c:
    // 0x24372c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24372cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_243730:
    // 0x243730: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x243730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_243734:
    // 0x243734: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x243734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_243738:
    // 0x243738: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x243738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_24373c:
    // 0x24373c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24373cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_243740:
    // 0x243740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_243744:
    // 0x243744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_243748:
    // 0x243748: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_24374c:
    if (ctx->pc == 0x24374Cu) {
        ctx->pc = 0x24374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243748u;
        // 0x24374c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243750u;
        goto label_243750;
    }
    ctx->pc = 0x243748u;
    {
        const bool branch_taken_0x243748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243748u;
        // 0x24374c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243748) {
            ctx->pc = 0x2437F8u;
            goto label_2437f8;
        }
    }
    ctx->pc = 0x243750u;
label_243750:
    // 0x243750: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x243750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_243754:
    // 0x243754: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243758:
    // 0x243758: 0x24545e00  addiu       $s4, $v0, 0x5E00
    ctx->pc = 0x243758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 24064));
label_24375c:
    // 0x24375c: 0x26950004  addiu       $s5, $s4, 0x4
    ctx->pc = 0x24375cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_243760:
    // 0x243760: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x243760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_243764:
    // 0x243764: 0x0  nop
    ctx->pc = 0x243764u;
    // NOP
label_243768:
    // 0x243768: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x243768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24376c:
    // 0x24376c: 0x1198c0  sll         $s3, $s1, 3
    ctx->pc = 0x24376cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_243770:
    // 0x243770: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_243774:
    if (ctx->pc == 0x243774u) {
        ctx->pc = 0x243774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243770u;
        // 0x243774: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243778u;
        goto label_243778;
    }
    ctx->pc = 0x243770u;
    {
        const bool branch_taken_0x243770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243770u;
        // 0x243774: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243770) {
            ctx->pc = 0x243790u;
            goto label_243790;
        }
    }
    ctx->pc = 0x243778u;
label_243778:
    // 0x243778: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x243778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_24377c:
    // 0x24377c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x24377cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_243780:
    // 0x243780: 0x40f809  jalr        $v0
label_243784:
    if (ctx->pc == 0x243784u) {
        ctx->pc = 0x243784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243780u;
        // 0x243784: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243788u;
        goto label_243788;
    }
    ctx->pc = 0x243780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243788u);
        ctx->pc = 0x243784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243780u;
        // 0x243784: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243780u, 0x243788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243788u;
label_243788:
    // 0x243788: 0x10000003  b           . + 4 + (0x3 << 2)
label_24378c:
    if (ctx->pc == 0x24378Cu) {
        ctx->pc = 0x24378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243788u;
        // 0x24378c: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243790u;
        goto label_243790;
    }
    ctx->pc = 0x243788u;
    {
        const bool branch_taken_0x243788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243788u;
        // 0x24378c: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243788) {
            ctx->pc = 0x243798u;
            goto label_243798;
        }
    }
    ctx->pc = 0x243790u;
label_243790:
    // 0x243790: 0x26900004  addiu       $s0, $s4, 0x4
    ctx->pc = 0x243790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_243794:
    // 0x243794: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x243794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_243798:
    // 0x243798: 0x2a230028  slti        $v1, $s1, 0x28
    ctx->pc = 0x243798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_24379c:
    // 0x24379c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x24379cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2437a0:
    // 0x2437a0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2437a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2437a4:
    // 0x2437a4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_2437a8:
    if (ctx->pc == 0x2437A8u) {
        ctx->pc = 0x2437A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437A4u;
        // 0x2437a8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437ACu;
        goto label_2437ac;
    }
    ctx->pc = 0x2437A4u;
    {
        const bool branch_taken_0x2437a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2437A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437A4u;
        // 0x2437a8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437a4) {
            ctx->pc = 0x243768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243768;
        }
    }
    ctx->pc = 0x2437ACu;
label_2437ac:
    // 0x2437ac: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2437acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_2437b0:
    // 0x2437b0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x2437b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2437b4:
    // 0x2437b4: 0x24425f40  addiu       $v0, $v0, 0x5F40
    ctx->pc = 0x2437b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24384));
label_2437b8:
    // 0x2437b8: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x2437b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
label_2437bc:
    // 0x2437bc: 0x0  nop
    ctx->pc = 0x2437bcu;
    // NOP
label_2437c0:
    // 0x2437c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2437c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2437c4:
    // 0x2437c4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2437c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2437c8:
    // 0x2437c8: 0x0  nop
    ctx->pc = 0x2437c8u;
    // NOP
label_2437cc:
    // 0x2437cc: 0x0  nop
    ctx->pc = 0x2437ccu;
    // NOP
label_2437d0:
    // 0x2437d0: 0x0  nop
    ctx->pc = 0x2437d0u;
    // NOP
label_2437d4:
    // 0x2437d4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
label_2437d8:
    if (ctx->pc == 0x2437D8u) {
        ctx->pc = 0x2437D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437D4u;
        // 0x2437d8: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437DCu;
        goto label_2437dc;
    }
    ctx->pc = 0x2437D4u;
    {
        const bool branch_taken_0x2437d4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2437D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437D4u;
        // 0x2437d8: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437d4) {
            ctx->pc = 0x2437C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2437c0;
        }
    }
    ctx->pc = 0x2437DCu;
label_2437dc:
    // 0x2437dc: 0x3c100088  lui         $s0, 0x88
    ctx->pc = 0x2437dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)136 << 16));
label_2437e0:
    // 0x2437e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2437e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2437e4:
    // 0x2437e4: 0x26106140  addiu       $s0, $s0, 0x6140
    ctx->pc = 0x2437e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24896));
label_2437e8:
    // 0x2437e8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2437e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2437ec:
    // 0x2437ec: 0xc049590  jal         func_125640
label_2437f0:
    if (ctx->pc == 0x2437F0u) {
        ctx->pc = 0x2437F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437ECu;
        // 0x2437f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2437F4u;
        goto label_2437f4;
    }
    ctx->pc = 0x2437ECu;
    SET_GPR_U32(ctx, 31, 0x2437F4u);
    ctx->pc = 0x2437F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2437ECu;
    // 0x2437f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2437ECu, 0x2437F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437F4u;
label_2437f4:
    // 0x2437f4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2437f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2437f8:
    // 0x2437f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2437f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2437fc:
    // 0x2437fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2437fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_243800:
    // 0x243800: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x243800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_243804:
    // 0x243804: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x243804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_243808:
    // 0x243808: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x243808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24380c:
    // 0x24380c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24380cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_243810:
    // 0x243810: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x243810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_243814:
    // 0x243814: 0x3e00008  jr          $ra
label_243818:
    if (ctx->pc == 0x243818u) {
        ctx->pc = 0x243818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243814u;
        // 0x243818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24381Cu;
        goto label_fallthrough_0x243814;
    }
    ctx->pc = 0x243814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243814u;
        // 0x243818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x243814:
    ctx->pc = 0x24381Cu;
}
