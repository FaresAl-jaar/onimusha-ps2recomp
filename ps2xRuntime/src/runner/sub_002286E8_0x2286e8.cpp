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

// Function: sub_002286E8
// Address: 0x2286e8 - 0x22890c
void sub_002286E8_0x2286e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002286E8_0x2286e8");
#endif

    switch (ctx->pc) {
        case 0x2286e8u: goto label_2286e8;
        case 0x2286ecu: goto label_2286ec;
        case 0x2286f0u: goto label_2286f0;
        case 0x2286f4u: goto label_2286f4;
        case 0x2286f8u: goto label_2286f8;
        case 0x2286fcu: goto label_2286fc;
        case 0x228700u: goto label_228700;
        case 0x228704u: goto label_228704;
        case 0x228708u: goto label_228708;
        case 0x22870cu: goto label_22870c;
        case 0x228710u: goto label_228710;
        case 0x228714u: goto label_228714;
        case 0x228718u: goto label_228718;
        case 0x22871cu: goto label_22871c;
        case 0x228720u: goto label_228720;
        case 0x228724u: goto label_228724;
        case 0x228728u: goto label_228728;
        case 0x22872cu: goto label_22872c;
        case 0x228730u: goto label_228730;
        case 0x228734u: goto label_228734;
        case 0x228738u: goto label_228738;
        case 0x22873cu: goto label_22873c;
        case 0x228740u: goto label_228740;
        case 0x228744u: goto label_228744;
        case 0x228748u: goto label_228748;
        case 0x22874cu: goto label_22874c;
        case 0x228750u: goto label_228750;
        case 0x228754u: goto label_228754;
        case 0x228758u: goto label_228758;
        case 0x22875cu: goto label_22875c;
        case 0x228760u: goto label_228760;
        case 0x228764u: goto label_228764;
        case 0x228768u: goto label_228768;
        case 0x22876cu: goto label_22876c;
        case 0x228770u: goto label_228770;
        case 0x228774u: goto label_228774;
        case 0x228778u: goto label_228778;
        case 0x22877cu: goto label_22877c;
        case 0x228780u: goto label_228780;
        case 0x228784u: goto label_228784;
        case 0x228788u: goto label_228788;
        case 0x22878cu: goto label_22878c;
        case 0x228790u: goto label_228790;
        case 0x228794u: goto label_228794;
        case 0x228798u: goto label_228798;
        case 0x22879cu: goto label_22879c;
        case 0x2287a0u: goto label_2287a0;
        case 0x2287a4u: goto label_2287a4;
        case 0x2287a8u: goto label_2287a8;
        case 0x2287acu: goto label_2287ac;
        case 0x2287b0u: goto label_2287b0;
        case 0x2287b4u: goto label_2287b4;
        case 0x2287b8u: goto label_2287b8;
        case 0x2287bcu: goto label_2287bc;
        case 0x2287c0u: goto label_2287c0;
        case 0x2287c4u: goto label_2287c4;
        case 0x2287c8u: goto label_2287c8;
        case 0x2287ccu: goto label_2287cc;
        case 0x2287d0u: goto label_2287d0;
        case 0x2287d4u: goto label_2287d4;
        case 0x2287d8u: goto label_2287d8;
        case 0x2287dcu: goto label_2287dc;
        case 0x2287e0u: goto label_2287e0;
        case 0x2287e4u: goto label_2287e4;
        case 0x2287e8u: goto label_2287e8;
        case 0x2287ecu: goto label_2287ec;
        case 0x2287f0u: goto label_2287f0;
        case 0x2287f4u: goto label_2287f4;
        case 0x2287f8u: goto label_2287f8;
        case 0x2287fcu: goto label_2287fc;
        case 0x228800u: goto label_228800;
        case 0x228804u: goto label_228804;
        case 0x228808u: goto label_228808;
        case 0x22880cu: goto label_22880c;
        case 0x228810u: goto label_228810;
        case 0x228814u: goto label_228814;
        case 0x228818u: goto label_228818;
        case 0x22881cu: goto label_22881c;
        case 0x228820u: goto label_228820;
        case 0x228824u: goto label_228824;
        case 0x228828u: goto label_228828;
        case 0x22882cu: goto label_22882c;
        case 0x228830u: goto label_228830;
        case 0x228834u: goto label_228834;
        case 0x228838u: goto label_228838;
        case 0x22883cu: goto label_22883c;
        case 0x228840u: goto label_228840;
        case 0x228844u: goto label_228844;
        case 0x228848u: goto label_228848;
        case 0x22884cu: goto label_22884c;
        case 0x228850u: goto label_228850;
        case 0x228854u: goto label_228854;
        case 0x228858u: goto label_228858;
        case 0x22885cu: goto label_22885c;
        case 0x228860u: goto label_228860;
        case 0x228864u: goto label_228864;
        case 0x228868u: goto label_228868;
        case 0x22886cu: goto label_22886c;
        case 0x228870u: goto label_228870;
        case 0x228874u: goto label_228874;
        case 0x228878u: goto label_228878;
        case 0x22887cu: goto label_22887c;
        case 0x228880u: goto label_228880;
        case 0x228884u: goto label_228884;
        case 0x228888u: goto label_228888;
        case 0x22888cu: goto label_22888c;
        case 0x228890u: goto label_228890;
        case 0x228894u: goto label_228894;
        case 0x228898u: goto label_228898;
        case 0x22889cu: goto label_22889c;
        case 0x2288a0u: goto label_2288a0;
        case 0x2288a4u: goto label_2288a4;
        case 0x2288a8u: goto label_2288a8;
        case 0x2288acu: goto label_2288ac;
        case 0x2288b0u: goto label_2288b0;
        case 0x2288b4u: goto label_2288b4;
        case 0x2288b8u: goto label_2288b8;
        case 0x2288bcu: goto label_2288bc;
        case 0x2288c0u: goto label_2288c0;
        case 0x2288c4u: goto label_2288c4;
        case 0x2288c8u: goto label_2288c8;
        case 0x2288ccu: goto label_2288cc;
        case 0x2288d0u: goto label_2288d0;
        case 0x2288d4u: goto label_2288d4;
        case 0x2288d8u: goto label_2288d8;
        case 0x2288dcu: goto label_2288dc;
        case 0x2288e0u: goto label_2288e0;
        case 0x2288e4u: goto label_2288e4;
        case 0x2288e8u: goto label_2288e8;
        case 0x2288ecu: goto label_2288ec;
        case 0x2288f0u: goto label_2288f0;
        case 0x2288f4u: goto label_2288f4;
        case 0x2288f8u: goto label_2288f8;
        case 0x2288fcu: goto label_2288fc;
        case 0x228900u: goto label_228900;
        case 0x228904u: goto label_228904;
        case 0x228908u: goto label_228908;
        default: break;
    }

    ctx->pc = 0x2286e8u;

label_2286e8:
    // 0x2286e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2286e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2286ec:
    // 0x2286ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2286ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2286f0:
    // 0x2286f0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2286f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2286f4:
    // 0x2286f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2286f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2286f8:
    // 0x2286f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2286f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2286fc:
    // 0x2286fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2286fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_228700:
    // 0x228700: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_228704:
    // 0x228704: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_228708:
    if (ctx->pc == 0x228708u) {
        ctx->pc = 0x228708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228704u;
        // 0x228708: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22870Cu;
        goto label_22870c;
    }
    ctx->pc = 0x228704u;
    {
        const bool branch_taken_0x228704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x228704) {
            ctx->pc = 0x228708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228704u;
            // 0x228708: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228718u;
            goto label_228718;
        }
    }
    ctx->pc = 0x22870Cu;
label_22870c:
    // 0x22870c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_228710:
    // 0x228710: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x228710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_228714:
    // 0x228714: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x228714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_228718:
    // 0x228718: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_22871c:
    if (ctx->pc == 0x22871Cu) {
        ctx->pc = 0x22871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228718u;
        // 0x22871c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228720u;
        goto label_228720;
    }
    ctx->pc = 0x228718u;
    {
        const bool branch_taken_0x228718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x228718) {
            ctx->pc = 0x22871Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228718u;
            // 0x22871c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228748u;
            goto label_228748;
        }
    }
    ctx->pc = 0x228720u;
label_228720:
    // 0x228720: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x228720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_228724:
    // 0x228724: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228728:
    // 0x228728: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x228728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_22872c:
    // 0x22872c: 0x40f809  jalr        $v0
label_228730:
    if (ctx->pc == 0x228730u) {
        ctx->pc = 0x228730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22872Cu;
        // 0x228730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228734u;
        goto label_228734;
    }
    ctx->pc = 0x22872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228734u);
        ctx->pc = 0x228730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22872Cu;
        // 0x228730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22872Cu, 0x228734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228734u;
label_228734:
    // 0x228734: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
label_228738:
    if (ctx->pc == 0x228738u) {
        ctx->pc = 0x228738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228734u;
        // 0x228738: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22873Cu;
        goto label_22873c;
    }
    ctx->pc = 0x228734u;
    {
        const bool branch_taken_0x228734 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x228734) {
            ctx->pc = 0x228738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228734u;
            // 0x228738: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228748u;
            goto label_228748;
        }
    }
    ctx->pc = 0x22873Cu;
label_22873c:
    // 0x22873c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_228740:
    // 0x228740: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x228740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_228744:
    // 0x228744: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x228744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_228748:
    // 0x228748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x228748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22874c:
    // 0x22874c: 0x1462006b  bne         $v1, $v0, . + 4 + (0x6B << 2)
label_228750:
    if (ctx->pc == 0x228750u) {
        ctx->pc = 0x228750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22874Cu;
        // 0x228750: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228754u;
        goto label_228754;
    }
    ctx->pc = 0x22874Cu;
    {
        const bool branch_taken_0x22874c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x228750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22874Cu;
        // 0x228750: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22874c) {
            ctx->pc = 0x2288FCu;
            goto label_2288fc;
        }
    }
    ctx->pc = 0x228754u;
label_228754:
    // 0x228754: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x228754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_228758:
    // 0x228758: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22875c:
    // 0x22875c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x22875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_228760:
    // 0x228760: 0x40f809  jalr        $v0
label_228764:
    if (ctx->pc == 0x228764u) {
        ctx->pc = 0x228764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228760u;
        // 0x228764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228768u;
        goto label_228768;
    }
    ctx->pc = 0x228760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228768u);
        ctx->pc = 0x228764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228760u;
        // 0x228764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228760u, 0x228768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228768u;
label_228768:
    // 0x228768: 0x28421800  slti        $v0, $v0, 0x1800
    ctx->pc = 0x228768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6144) ? 1 : 0);
label_22876c:
    // 0x22876c: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_228770:
    if (ctx->pc == 0x228770u) {
        ctx->pc = 0x228770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22876Cu;
        // 0x228770: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228774u;
        goto label_228774;
    }
    ctx->pc = 0x22876Cu;
    {
        const bool branch_taken_0x22876c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22876Cu;
        // 0x228770: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22876c) {
            ctx->pc = 0x2288FCu;
            goto label_2288fc;
        }
    }
    ctx->pc = 0x228774u;
label_228774:
    // 0x228774: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x228774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_228778:
    // 0x228778: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x228778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_22877c:
    // 0x22877c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x22877cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228780:
    // 0x228780: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x228780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_228784:
    // 0x228784: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228788:
    // 0x228788: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x228788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_22878c:
    // 0x22878c: 0x40f809  jalr        $v0
label_228790:
    if (ctx->pc == 0x228790u) {
        ctx->pc = 0x228790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22878Cu;
        // 0x228790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228794u;
        goto label_228794;
    }
    ctx->pc = 0x22878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228794u);
        ctx->pc = 0x228790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22878Cu;
        // 0x228790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22878Cu, 0x228794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228794u;
label_228794:
    // 0x228794: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x228794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_228798:
    // 0x228798: 0xc08a244  jal         func_228910
label_22879c:
    if (ctx->pc == 0x22879Cu) {
        ctx->pc = 0x22879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228798u;
        // 0x22879c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287A0u;
        goto label_2287a0;
    }
    ctx->pc = 0x228798u;
    SET_GPR_U32(ctx, 31, 0x2287A0u);
    ctx->pc = 0x22879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228798u;
    // 0x22879c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228910u, 0x228798u, 0x2287A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287A0u;
label_2287a0:
    // 0x2287a0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2287a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2287a4:
    // 0x2287a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2287a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2287a8:
    // 0x2287a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2287a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2287ac:
    // 0x2287ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2287acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2287b0:
    // 0x2287b0: 0xc094854  jal         func_252150
label_2287b4:
    if (ctx->pc == 0x2287B4u) {
        ctx->pc = 0x2287B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287B0u;
        // 0x2287b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287B8u;
        goto label_2287b8;
    }
    ctx->pc = 0x2287B0u;
    SET_GPR_U32(ctx, 31, 0x2287B8u);
    ctx->pc = 0x2287B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2287B0u;
    // 0x2287b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x2287B0u, 0x2287B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287B8u;
label_2287b8:
    // 0x2287b8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2287b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2287bc:
    // 0x2287bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2287bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2287c0:
    // 0x2287c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2287c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2287c4:
    // 0x2287c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2287c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2287c8:
    // 0x2287c8: 0x40f809  jalr        $v0
label_2287cc:
    if (ctx->pc == 0x2287CCu) {
        ctx->pc = 0x2287CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287C8u;
        // 0x2287cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287D0u;
        goto label_2287d0;
    }
    ctx->pc = 0x2287C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2287D0u);
        ctx->pc = 0x2287CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287C8u;
        // 0x2287cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287C8u, 0x2287D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2287D0u;
label_2287d0:
    // 0x2287d0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2287d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2287d4:
    // 0x2287d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2287d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2287d8:
    // 0x2287d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2287d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2287dc:
    // 0x2287dc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2287dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2287e0:
    // 0x2287e0: 0x40f809  jalr        $v0
label_2287e4:
    if (ctx->pc == 0x2287E4u) {
        ctx->pc = 0x2287E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287E0u;
        // 0x2287e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287E8u;
        goto label_2287e8;
    }
    ctx->pc = 0x2287E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2287E8u);
        ctx->pc = 0x2287E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287E0u;
        // 0x2287e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287E0u, 0x2287E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2287E8u;
label_2287e8:
    // 0x2287e8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2287e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2287ec:
    // 0x2287ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2287ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2287f0:
    // 0x2287f0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2287f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2287f4:
    // 0x2287f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2287f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2287f8:
    // 0x2287f8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2287f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2287fc:
    // 0x2287fc: 0x60f809  jalr        $v1
label_228800:
    if (ctx->pc == 0x228800u) {
        ctx->pc = 0x228800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287FCu;
        // 0x228800: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228804u;
        goto label_228804;
    }
    ctx->pc = 0x2287FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x228804u);
        ctx->pc = 0x228800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287FCu;
        // 0x228800: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287FCu, 0x228804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228804u;
label_228804:
    // 0x228804: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x228804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_228808:
    // 0x228808: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x228808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_22880c:
    // 0x22880c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_228810:
    if (ctx->pc == 0x228810u) {
        ctx->pc = 0x228810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22880Cu;
        // 0x228810: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228814u;
        goto label_228814;
    }
    ctx->pc = 0x22880Cu;
    {
        const bool branch_taken_0x22880c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22880Cu;
        // 0x228810: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22880c) {
            ctx->pc = 0x228838u;
            goto label_228838;
        }
    }
    ctx->pc = 0x228814u;
label_228814:
    // 0x228814: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x228814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_228818:
    // 0x228818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x228818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22881c:
    // 0x22881c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228820:
    // 0x228820: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x228820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_228824:
    // 0x228824: 0x40f809  jalr        $v0
label_228828:
    if (ctx->pc == 0x228828u) {
        ctx->pc = 0x228828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228824u;
        // 0x228828: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22882Cu;
        goto label_22882c;
    }
    ctx->pc = 0x228824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22882Cu);
        ctx->pc = 0x228828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228824u;
        // 0x228828: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228824u, 0x22882Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22882Cu;
label_22882c:
    // 0x22882c: 0x10000033  b           . + 4 + (0x33 << 2)
label_228830:
    if (ctx->pc == 0x228830u) {
        ctx->pc = 0x228830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22882Cu;
        // 0x228830: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228834u;
        goto label_228834;
    }
    ctx->pc = 0x22882Cu;
    {
        const bool branch_taken_0x22882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22882Cu;
        // 0x228830: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22882c) {
            ctx->pc = 0x2288FCu;
            goto label_2288fc;
        }
    }
    ctx->pc = 0x228834u;
label_228834:
    // 0x228834: 0x0  nop
    ctx->pc = 0x228834u;
    // NOP
label_228838:
    // 0x228838: 0xc08a25e  jal         func_228978
label_22883c:
    if (ctx->pc == 0x22883Cu) {
        ctx->pc = 0x22883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228838u;
        // 0x22883c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228840u;
        goto label_228840;
    }
    ctx->pc = 0x228838u;
    SET_GPR_U32(ctx, 31, 0x228840u);
    ctx->pc = 0x22883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228838u;
    // 0x22883c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228978u, 0x228838u, 0x228840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228840u;
label_228840:
    // 0x228840: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_228844:
    if (ctx->pc == 0x228844u) {
        ctx->pc = 0x228844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228840u;
        // 0x228844: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228848u;
        goto label_228848;
    }
    ctx->pc = 0x228840u;
    {
        const bool branch_taken_0x228840 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x228844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228840u;
        // 0x228844: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228840) {
            ctx->pc = 0x2288D4u;
            goto label_2288d4;
        }
    }
    ctx->pc = 0x228848u;
label_228848:
    // 0x228848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22884c:
    // 0x22884c: 0xc08a2a6  jal         func_228A98
label_228850:
    if (ctx->pc == 0x228850u) {
        ctx->pc = 0x228850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22884Cu;
        // 0x228850: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228854u;
        goto label_228854;
    }
    ctx->pc = 0x22884Cu;
    SET_GPR_U32(ctx, 31, 0x228854u);
    ctx->pc = 0x228850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22884Cu;
    // 0x228850: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228A98u, 0x22884Cu, 0x228854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228854u;
label_228854:
    // 0x228854: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
label_228858:
    if (ctx->pc == 0x228858u) {
        ctx->pc = 0x228858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228854u;
        // 0x228858: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22885Cu;
        goto label_22885c;
    }
    ctx->pc = 0x228854u;
    {
        const bool branch_taken_0x228854 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x228858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228854u;
        // 0x228858: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228854) {
            ctx->pc = 0x2288D4u;
            goto label_2288d4;
        }
    }
    ctx->pc = 0x22885Cu;
label_22885c:
    // 0x22885c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x22885cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_228860:
    // 0x228860: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228864:
    // 0x228864: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x228864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_228868:
    // 0x228868: 0x40f809  jalr        $v0
label_22886c:
    if (ctx->pc == 0x22886Cu) {
        ctx->pc = 0x22886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228868u;
        // 0x22886c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228870u;
        goto label_228870;
    }
    ctx->pc = 0x228868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228870u);
        ctx->pc = 0x22886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228868u;
        // 0x22886c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228868u, 0x228870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228870u;
label_228870:
    // 0x228870: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x228870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_228874:
    // 0x228874: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228878:
    // 0x228878: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x228878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_22887c:
    // 0x22887c: 0x40f809  jalr        $v0
label_228880:
    if (ctx->pc == 0x228880u) {
        ctx->pc = 0x228880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22887Cu;
        // 0x228880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228884u;
        goto label_228884;
    }
    ctx->pc = 0x22887Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228884u);
        ctx->pc = 0x228880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22887Cu;
        // 0x228880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22887Cu, 0x228884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228884u;
label_228884:
    // 0x228884: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x228884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_228888:
    // 0x228888: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x228888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22888c:
    // 0x22888c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_228890:
    if (ctx->pc == 0x228890u) {
        ctx->pc = 0x228890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22888Cu;
        // 0x228890: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228894u;
        goto label_228894;
    }
    ctx->pc = 0x22888Cu;
    {
        const bool branch_taken_0x22888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22888Cu;
        // 0x228890: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22888c) {
            ctx->pc = 0x2288FCu;
            goto label_2288fc;
        }
    }
    ctx->pc = 0x228894u;
label_228894:
    // 0x228894: 0xc08a2bc  jal         func_228AF0
label_228898:
    if (ctx->pc == 0x228898u) {
        ctx->pc = 0x228898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228894u;
        // 0x228898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22889Cu;
        goto label_22889c;
    }
    ctx->pc = 0x228894u;
    SET_GPR_U32(ctx, 31, 0x22889Cu);
    ctx->pc = 0x228898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228894u;
    // 0x228898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228AF0u, 0x228894u, 0x22889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22889Cu;
label_22889c:
    // 0x22889c: 0xc08a2d0  jal         func_228B40
label_2288a0:
    if (ctx->pc == 0x2288A0u) {
        ctx->pc = 0x2288A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22889Cu;
        // 0x2288a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2288A4u;
        goto label_2288a4;
    }
    ctx->pc = 0x22889Cu;
    SET_GPR_U32(ctx, 31, 0x2288A4u);
    ctx->pc = 0x2288A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22889Cu;
    // 0x2288a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228B40u, 0x22889Cu, 0x2288A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288A4u;
label_2288a4:
    // 0x2288a4: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_2288a8:
    if (ctx->pc == 0x2288A8u) {
        ctx->pc = 0x2288A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288A4u;
        // 0x2288a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2288ACu;
        goto label_2288ac;
    }
    ctx->pc = 0x2288A4u;
    {
        const bool branch_taken_0x2288a4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2288A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288A4u;
        // 0x2288a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288a4) {
            ctx->pc = 0x2288D4u;
            goto label_2288d4;
        }
    }
    ctx->pc = 0x2288ACu;
label_2288ac:
    // 0x2288ac: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2288acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2288b0:
    // 0x2288b0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2288b4:
    if (ctx->pc == 0x2288B4u) {
        ctx->pc = 0x2288B8u;
        goto label_2288b8;
    }
    ctx->pc = 0x2288B0u;
    {
        const bool branch_taken_0x2288b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2288b0) {
            ctx->pc = 0x2288C4u;
            goto label_2288c4;
        }
    }
    ctx->pc = 0x2288B8u;
label_2288b8:
    // 0x2288b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2288b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2288bc:
    // 0x2288bc: 0xc08a318  jal         func_228C60
label_2288c0:
    if (ctx->pc == 0x2288C0u) {
        ctx->pc = 0x2288C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288BCu;
        // 0x2288c0: 0x24051800  addiu       $a1, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2288C4u;
        goto label_2288c4;
    }
    ctx->pc = 0x2288BCu;
    SET_GPR_U32(ctx, 31, 0x2288C4u);
    ctx->pc = 0x2288C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2288BCu;
    // 0x2288c0: 0x24051800  addiu       $a1, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C60u, 0x2288BCu, 0x2288C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288C4u;
label_2288c4:
    // 0x2288c4: 0xc08a32a  jal         func_228CA8
label_2288c8:
    if (ctx->pc == 0x2288C8u) {
        ctx->pc = 0x2288C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288C4u;
        // 0x2288c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2288CCu;
        goto label_2288cc;
    }
    ctx->pc = 0x2288C4u;
    SET_GPR_U32(ctx, 31, 0x2288CCu);
    ctx->pc = 0x2288C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2288C4u;
    // 0x2288c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228CA8u, 0x2288C4u, 0x2288CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288CCu;
label_2288cc:
    // 0x2288cc: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_2288d0:
    if (ctx->pc == 0x2288D0u) {
        ctx->pc = 0x2288D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288CCu;
        // 0x2288d0: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2288D4u;
        goto label_2288d4;
    }
    ctx->pc = 0x2288CCu;
    {
        const bool branch_taken_0x2288cc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2288cc) {
            ctx->pc = 0x2288D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2288CCu;
            // 0x2288d0: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2288E0u;
            goto label_2288e0;
        }
    }
    ctx->pc = 0x2288D4u;
label_2288d4:
    // 0x2288d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2288d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2288d8:
    // 0x2288d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2288dc:
    if (ctx->pc == 0x2288DCu) {
        ctx->pc = 0x2288DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288D8u;
        // 0x2288dc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2288E0u;
        goto label_2288e0;
    }
    ctx->pc = 0x2288D8u;
    {
        const bool branch_taken_0x2288d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2288DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288D8u;
        // 0x2288dc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288d8) {
            ctx->pc = 0x2288F8u;
            goto label_2288f8;
        }
    }
    ctx->pc = 0x2288E0u;
label_2288e0:
    // 0x2288e0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2288e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2288e4:
    // 0x2288e4: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x2288e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2288e8:
    // 0x2288e8: 0x24631800  addiu       $v1, $v1, 0x1800
    ctx->pc = 0x2288e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
label_2288ec:
    // 0x2288ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2288ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2288f0:
    // 0x2288f0: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2288f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_2288f4:
    // 0x2288f4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2288f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2288f8:
    // 0x2288f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2288f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2288fc:
    // 0x2288fc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2288fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_228900:
    // 0x228900: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x228900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_228904:
    // 0x228904: 0x3e00008  jr          $ra
label_228908:
    if (ctx->pc == 0x228908u) {
        ctx->pc = 0x228908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228904u;
        // 0x228908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22890Cu;
        goto label_fallthrough_0x228904;
    }
    ctx->pc = 0x228904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228904u;
        // 0x228908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228904:
    ctx->pc = 0x22890Cu;
}
