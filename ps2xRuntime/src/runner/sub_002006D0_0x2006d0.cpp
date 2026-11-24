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

// Function: sub_002006D0
// Address: 0x2006d0 - 0x200828
void sub_002006D0_0x2006d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002006D0_0x2006d0");
#endif

    switch (ctx->pc) {
        case 0x2006d0u: goto label_2006d0;
        case 0x2006d4u: goto label_2006d4;
        case 0x2006d8u: goto label_2006d8;
        case 0x2006dcu: goto label_2006dc;
        case 0x2006e0u: goto label_2006e0;
        case 0x2006e4u: goto label_2006e4;
        case 0x2006e8u: goto label_2006e8;
        case 0x2006ecu: goto label_2006ec;
        case 0x2006f0u: goto label_2006f0;
        case 0x2006f4u: goto label_2006f4;
        case 0x2006f8u: goto label_2006f8;
        case 0x2006fcu: goto label_2006fc;
        case 0x200700u: goto label_200700;
        case 0x200704u: goto label_200704;
        case 0x200708u: goto label_200708;
        case 0x20070cu: goto label_20070c;
        case 0x200710u: goto label_200710;
        case 0x200714u: goto label_200714;
        case 0x200718u: goto label_200718;
        case 0x20071cu: goto label_20071c;
        case 0x200720u: goto label_200720;
        case 0x200724u: goto label_200724;
        case 0x200728u: goto label_200728;
        case 0x20072cu: goto label_20072c;
        case 0x200730u: goto label_200730;
        case 0x200734u: goto label_200734;
        case 0x200738u: goto label_200738;
        case 0x20073cu: goto label_20073c;
        case 0x200740u: goto label_200740;
        case 0x200744u: goto label_200744;
        case 0x200748u: goto label_200748;
        case 0x20074cu: goto label_20074c;
        case 0x200750u: goto label_200750;
        case 0x200754u: goto label_200754;
        case 0x200758u: goto label_200758;
        case 0x20075cu: goto label_20075c;
        case 0x200760u: goto label_200760;
        case 0x200764u: goto label_200764;
        case 0x200768u: goto label_200768;
        case 0x20076cu: goto label_20076c;
        case 0x200770u: goto label_200770;
        case 0x200774u: goto label_200774;
        case 0x200778u: goto label_200778;
        case 0x20077cu: goto label_20077c;
        case 0x200780u: goto label_200780;
        case 0x200784u: goto label_200784;
        case 0x200788u: goto label_200788;
        case 0x20078cu: goto label_20078c;
        case 0x200790u: goto label_200790;
        case 0x200794u: goto label_200794;
        case 0x200798u: goto label_200798;
        case 0x20079cu: goto label_20079c;
        case 0x2007a0u: goto label_2007a0;
        case 0x2007a4u: goto label_2007a4;
        case 0x2007a8u: goto label_2007a8;
        case 0x2007acu: goto label_2007ac;
        case 0x2007b0u: goto label_2007b0;
        case 0x2007b4u: goto label_2007b4;
        case 0x2007b8u: goto label_2007b8;
        case 0x2007bcu: goto label_2007bc;
        case 0x2007c0u: goto label_2007c0;
        case 0x2007c4u: goto label_2007c4;
        case 0x2007c8u: goto label_2007c8;
        case 0x2007ccu: goto label_2007cc;
        case 0x2007d0u: goto label_2007d0;
        case 0x2007d4u: goto label_2007d4;
        case 0x2007d8u: goto label_2007d8;
        case 0x2007dcu: goto label_2007dc;
        case 0x2007e0u: goto label_2007e0;
        case 0x2007e4u: goto label_2007e4;
        case 0x2007e8u: goto label_2007e8;
        case 0x2007ecu: goto label_2007ec;
        case 0x2007f0u: goto label_2007f0;
        case 0x2007f4u: goto label_2007f4;
        case 0x2007f8u: goto label_2007f8;
        case 0x2007fcu: goto label_2007fc;
        case 0x200800u: goto label_200800;
        case 0x200804u: goto label_200804;
        case 0x200808u: goto label_200808;
        case 0x20080cu: goto label_20080c;
        case 0x200810u: goto label_200810;
        case 0x200814u: goto label_200814;
        case 0x200818u: goto label_200818;
        case 0x20081cu: goto label_20081c;
        case 0x200820u: goto label_200820;
        case 0x200824u: goto label_200824;
        default: break;
    }

    ctx->pc = 0x2006d0u;

label_2006d0:
    // 0x2006d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2006d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2006d4:
    // 0x2006d4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2006d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2006d8:
    // 0x2006d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2006d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2006dc:
    // 0x2006dc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2006dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2006e0:
    // 0x2006e0: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2006e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2006e4:
    // 0x2006e4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2006e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2006e8:
    // 0x2006e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2006e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2006ec:
    // 0x2006ec: 0x10000032  b           . + 4 + (0x32 << 2)
label_2006f0:
    if (ctx->pc == 0x2006F0u) {
        ctx->pc = 0x2006F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006ECu;
        // 0x2006f0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006F4u;
        goto label_2006f4;
    }
    ctx->pc = 0x2006ECu;
    {
        const bool branch_taken_0x2006ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2006F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006ECu;
        // 0x2006f0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006ec) {
            ctx->pc = 0x2007B8u;
            goto label_2007b8;
        }
    }
    ctx->pc = 0x2006F4u;
label_2006f4:
    // 0x2006f4: 0x0  nop
    ctx->pc = 0x2006f4u;
    // NOP
label_2006f8:
    // 0x2006f8: 0xc07f6bc  jal         func_1FDAF0
label_2006fc:
    if (ctx->pc == 0x2006FCu) {
        ctx->pc = 0x2006FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006F8u;
        // 0x2006fc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200700u;
        goto label_200700;
    }
    ctx->pc = 0x2006F8u;
    SET_GPR_U32(ctx, 31, 0x200700u);
    ctx->pc = 0x2006FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006F8u;
    // 0x2006fc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x2006F8u, 0x200700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200700u;
label_200700:
    // 0x200700: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x200700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_200704:
    // 0x200704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200708:
    // 0x200708: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20070c:
    // 0x20070c: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
label_200710:
    if (ctx->pc == 0x200710u) {
        ctx->pc = 0x200710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20070Cu;
        // 0x200710: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200714u;
        goto label_200714;
    }
    ctx->pc = 0x20070Cu;
    {
        const bool branch_taken_0x20070c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x200710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20070Cu;
        // 0x200710: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20070c) {
            ctx->pc = 0x200758u;
            goto label_200758;
        }
    }
    ctx->pc = 0x200714u;
label_200714:
    // 0x200714: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x200714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_200718:
    // 0x200718: 0xc094854  jal         func_252150
label_20071c:
    if (ctx->pc == 0x20071Cu) {
        ctx->pc = 0x20071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200718u;
        // 0x20071c: 0x24a5fffd  addiu       $a1, $a1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200720u;
        goto label_200720;
    }
    ctx->pc = 0x200718u;
    SET_GPR_U32(ctx, 31, 0x200720u);
    ctx->pc = 0x20071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200718u;
    // 0x20071c: 0x24a5fffd  addiu       $a1, $a1, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x200718u, 0x200720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200720u;
label_200720:
    // 0x200720: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x200720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200724:
    // 0x200724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200728:
    // 0x200728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20072c:
    // 0x20072c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_200730:
    // 0x200730: 0x40f809  jalr        $v0
label_200734:
    if (ctx->pc == 0x200734u) {
        ctx->pc = 0x200734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200730u;
        // 0x200734: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200738u;
        goto label_200738;
    }
    ctx->pc = 0x200730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200738u);
        ctx->pc = 0x200734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200730u;
        // 0x200734: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200730u, 0x200738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200738u;
label_200738:
    // 0x200738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x200738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20073c:
    // 0x20073c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20073cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200740:
    // 0x200740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200744:
    // 0x200744: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x200744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_200748:
    // 0x200748: 0x40f809  jalr        $v0
label_20074c:
    if (ctx->pc == 0x20074Cu) {
        ctx->pc = 0x20074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200748u;
        // 0x20074c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200750u;
        goto label_200750;
    }
    ctx->pc = 0x200748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200750u);
        ctx->pc = 0x20074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200748u;
        // 0x20074c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200748u, 0x200750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200750u;
label_200750:
    // 0x200750: 0x1000001a  b           . + 4 + (0x1A << 2)
label_200754:
    if (ctx->pc == 0x200754u) {
        ctx->pc = 0x200754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200750u;
        // 0x200754: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200758u;
        goto label_200758;
    }
    ctx->pc = 0x200750u;
    {
        const bool branch_taken_0x200750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200750u;
        // 0x200754: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200750) {
            ctx->pc = 0x2007BCu;
            goto label_2007bc;
        }
    }
    ctx->pc = 0x200758u;
label_200758:
    // 0x200758: 0xc07f656  jal         func_1FD958
label_20075c:
    if (ctx->pc == 0x20075Cu) {
        ctx->pc = 0x20075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200758u;
        // 0x20075c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200760u;
        goto label_200760;
    }
    ctx->pc = 0x200758u;
    SET_GPR_U32(ctx, 31, 0x200760u);
    ctx->pc = 0x20075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200758u;
    // 0x20075c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x200758u, 0x200760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200760u;
label_200760:
    // 0x200760: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x200760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_200764:
    // 0x200764: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_200768:
    // 0x200768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20076c:
    // 0x20076c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20076cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200770:
    // 0x200770: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x200770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200774:
    // 0x200774: 0xc094854  jal         func_252150
label_200778:
    if (ctx->pc == 0x200778u) {
        ctx->pc = 0x200778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200774u;
        // 0x200778: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20077Cu;
        goto label_20077c;
    }
    ctx->pc = 0x200774u;
    SET_GPR_U32(ctx, 31, 0x20077Cu);
    ctx->pc = 0x200778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200774u;
    // 0x200778: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x200774u, 0x20077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20077Cu;
label_20077c:
    // 0x20077c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200780:
    // 0x200780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200784:
    // 0x200784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200788:
    // 0x200788: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20078c:
    // 0x20078c: 0x40f809  jalr        $v0
label_200790:
    if (ctx->pc == 0x200790u) {
        ctx->pc = 0x200790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20078Cu;
        // 0x200790: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200794u;
        goto label_200794;
    }
    ctx->pc = 0x20078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200794u);
        ctx->pc = 0x200790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20078Cu;
        // 0x200790: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20078Cu, 0x200794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200794u;
label_200794:
    // 0x200794: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x200794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200798:
    // 0x200798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20079c:
    // 0x20079c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20079cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2007a0:
    // 0x2007a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2007a4:
    // 0x2007a4: 0x40f809  jalr        $v0
label_2007a8:
    if (ctx->pc == 0x2007A8u) {
        ctx->pc = 0x2007A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A4u;
        // 0x2007a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007ACu;
        goto label_2007ac;
    }
    ctx->pc = 0x2007A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2007ACu);
        ctx->pc = 0x2007A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A4u;
        // 0x2007a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007A4u, 0x2007ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2007ACu;
label_2007ac:
    // 0x2007ac: 0x10000017  b           . + 4 + (0x17 << 2)
label_2007b0:
    if (ctx->pc == 0x2007B0u) {
        ctx->pc = 0x2007B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007ACu;
        // 0x2007b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007B4u;
        goto label_2007b4;
    }
    ctx->pc = 0x2007ACu;
    {
        const bool branch_taken_0x2007ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2007B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007ACu;
        // 0x2007b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007ac) {
            ctx->pc = 0x20080Cu;
            goto label_20080c;
        }
    }
    ctx->pc = 0x2007B4u;
label_2007b4:
    // 0x2007b4: 0x0  nop
    ctx->pc = 0x2007b4u;
    // NOP
label_2007b8:
    // 0x2007b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2007b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2007bc:
    // 0x2007bc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x2007bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_2007c0:
    // 0x2007c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2007c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2007c4:
    // 0x2007c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2007c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2007c8:
    // 0x2007c8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2007c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2007cc:
    // 0x2007cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2007ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2007d0:
    // 0x2007d0: 0x40f809  jalr        $v0
label_2007d4:
    if (ctx->pc == 0x2007D4u) {
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007D8u;
        goto label_2007d8;
    }
    ctx->pc = 0x2007D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2007D8u);
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007D0u, 0x2007D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2007D8u;
label_2007d8:
    // 0x2007d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2007d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2007dc:
    // 0x2007dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2007dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2007e0:
    // 0x2007e0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2007e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2007e4:
    // 0x2007e4: 0x1040ffc4  beqz        $v0, . + 4 + (-0x3C << 2)
label_2007e8:
    if (ctx->pc == 0x2007E8u) {
        ctx->pc = 0x2007E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E4u;
        // 0x2007e8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007ECu;
        goto label_2007ec;
    }
    ctx->pc = 0x2007E4u;
    {
        const bool branch_taken_0x2007e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2007E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E4u;
        // 0x2007e8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007e4) {
            ctx->pc = 0x2006F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2006f8;
        }
    }
    ctx->pc = 0x2007ECu;
label_2007ec:
    // 0x2007ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2007ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2007f0:
    // 0x2007f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2007f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2007f4:
    // 0x2007f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2007f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2007f8:
    // 0x2007f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2007f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2007fc:
    // 0x2007fc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2007fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_200800:
    // 0x200800: 0x40f809  jalr        $v0
label_200804:
    if (ctx->pc == 0x200804u) {
        ctx->pc = 0x200804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200800u;
        // 0x200804: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200808u;
        goto label_200808;
    }
    ctx->pc = 0x200800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200808u);
        ctx->pc = 0x200804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200800u;
        // 0x200804: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200800u, 0x200808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200808u;
label_200808:
    // 0x200808: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x200808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20080c:
    // 0x20080c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20080cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_200810:
    // 0x200810: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x200810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_200814:
    // 0x200814: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x200814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_200818:
    // 0x200818: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x200818u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_20081c:
    // 0x20081c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20081cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_200820:
    // 0x200820: 0x3e00008  jr          $ra
label_200824:
    if (ctx->pc == 0x200824u) {
        ctx->pc = 0x200824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200820u;
        // 0x200824: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200828u;
        goto label_fallthrough_0x200820;
    }
    ctx->pc = 0x200820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200820u;
        // 0x200824: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200820:
    ctx->pc = 0x200828u;
}
