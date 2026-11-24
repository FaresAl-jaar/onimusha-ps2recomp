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

// Function: sub_00245720
// Address: 0x245720 - 0x2457c0
void sub_00245720_0x245720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245720_0x245720");
#endif

    switch (ctx->pc) {
        case 0x245720u: goto label_245720;
        case 0x245724u: goto label_245724;
        case 0x245728u: goto label_245728;
        case 0x24572cu: goto label_24572c;
        case 0x245730u: goto label_245730;
        case 0x245734u: goto label_245734;
        case 0x245738u: goto label_245738;
        case 0x24573cu: goto label_24573c;
        case 0x245740u: goto label_245740;
        case 0x245744u: goto label_245744;
        case 0x245748u: goto label_245748;
        case 0x24574cu: goto label_24574c;
        case 0x245750u: goto label_245750;
        case 0x245754u: goto label_245754;
        case 0x245758u: goto label_245758;
        case 0x24575cu: goto label_24575c;
        case 0x245760u: goto label_245760;
        case 0x245764u: goto label_245764;
        case 0x245768u: goto label_245768;
        case 0x24576cu: goto label_24576c;
        case 0x245770u: goto label_245770;
        case 0x245774u: goto label_245774;
        case 0x245778u: goto label_245778;
        case 0x24577cu: goto label_24577c;
        case 0x245780u: goto label_245780;
        case 0x245784u: goto label_245784;
        case 0x245788u: goto label_245788;
        case 0x24578cu: goto label_24578c;
        case 0x245790u: goto label_245790;
        case 0x245794u: goto label_245794;
        case 0x245798u: goto label_245798;
        case 0x24579cu: goto label_24579c;
        case 0x2457a0u: goto label_2457a0;
        case 0x2457a4u: goto label_2457a4;
        case 0x2457a8u: goto label_2457a8;
        case 0x2457acu: goto label_2457ac;
        case 0x2457b0u: goto label_2457b0;
        case 0x2457b4u: goto label_2457b4;
        case 0x2457b8u: goto label_2457b8;
        case 0x2457bcu: goto label_2457bc;
        default: break;
    }

    ctx->pc = 0x245720u;

label_245720:
    // 0x245720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_245724:
    // 0x245724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_245728:
    // 0x245728: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x245728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24572c:
    // 0x24572c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24572cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_245730:
    // 0x245730: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_245734:
    if (ctx->pc == 0x245734u) {
        ctx->pc = 0x245734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245730u;
        // 0x245734: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245738u;
        goto label_245738;
    }
    ctx->pc = 0x245730u;
    {
        const bool branch_taken_0x245730 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x245734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245730u;
        // 0x245734: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245730) {
            ctx->pc = 0x245750u;
            goto label_245750;
        }
    }
    ctx->pc = 0x245738u;
label_245738:
    // 0x245738: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24573c:
    // 0x24573c: 0xc090d8a  jal         func_243628
label_245740:
    if (ctx->pc == 0x245740u) {
        ctx->pc = 0x245740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24573Cu;
        // 0x245740: 0x2484c7e0  addiu       $a0, $a0, -0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245744u;
        goto label_245744;
    }
    ctx->pc = 0x24573Cu;
    SET_GPR_U32(ctx, 31, 0x245744u);
    ctx->pc = 0x245740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24573Cu;
    // 0x245740: 0x2484c7e0  addiu       $a0, $a0, -0x3820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x24573Cu, 0x245744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245744u;
label_245744:
    // 0x245744: 0x10000019  b           . + 4 + (0x19 << 2)
label_245748:
    if (ctx->pc == 0x245748u) {
        ctx->pc = 0x245748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245744u;
        // 0x245748: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24574Cu;
        goto label_24574c;
    }
    ctx->pc = 0x245744u;
    {
        const bool branch_taken_0x245744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245744u;
        // 0x245748: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245744) {
            ctx->pc = 0x2457ACu;
            goto label_2457ac;
        }
    }
    ctx->pc = 0x24574Cu;
label_24574c:
    // 0x24574c: 0x0  nop
    ctx->pc = 0x24574cu;
    // NOP
label_245750:
    // 0x245750: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x245750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_245754:
    // 0x245754: 0x3c107fff  lui         $s0, 0x7FFF
    ctx->pc = 0x245754u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
label_245758:
    // 0x245758: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x245758u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_24575c:
    // 0x24575c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x24575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_245760:
    // 0x245760: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_245764:
    if (ctx->pc == 0x245764u) {
        ctx->pc = 0x245764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245760u;
        // 0x245764: 0x2405012d  addiu       $a1, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245768u;
        goto label_245768;
    }
    ctx->pc = 0x245760u;
    {
        const bool branch_taken_0x245760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245760u;
        // 0x245764: 0x2405012d  addiu       $a1, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245760) {
            ctx->pc = 0x2457A8u;
            goto label_2457a8;
        }
    }
    ctx->pc = 0x245768u;
label_245768:
    // 0x245768: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x245768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24576c:
    // 0x24576c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24576cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245770:
    // 0x245770: 0x40f809  jalr        $v0
label_245774:
    if (ctx->pc == 0x245774u) {
        ctx->pc = 0x245774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245770u;
        // 0x245774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245778u;
        goto label_245778;
    }
    ctx->pc = 0x245770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245778u);
        ctx->pc = 0x245774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245770u;
        // 0x245774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245770u, 0x245778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245778u;
label_245778:
    // 0x245778: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x245778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24577c:
    // 0x24577c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24577cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245780:
    // 0x245780: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x245780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_245784:
    // 0x245784: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x245784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_245788:
    // 0x245788: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x245788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_24578c:
    // 0x24578c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24578cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245790:
    // 0x245790: 0x40f809  jalr        $v0
label_245794:
    if (ctx->pc == 0x245794u) {
        ctx->pc = 0x245794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245790u;
        // 0x245794: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245798u;
        goto label_245798;
    }
    ctx->pc = 0x245790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245798u);
        ctx->pc = 0x245794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245790u;
        // 0x245794: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245790u, 0x245798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245798u;
label_245798:
    // 0x245798: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x245798u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_24579c:
    // 0x24579c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2457a0:
    // 0x2457a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2457a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2457a4:
    // 0x2457a4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2457a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_2457a8:
    // 0x2457a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2457a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2457ac:
    // 0x2457ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2457acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2457b0:
    // 0x2457b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2457b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2457b4:
    // 0x2457b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2457b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2457b8:
    // 0x2457b8: 0x3e00008  jr          $ra
label_2457bc:
    if (ctx->pc == 0x2457BCu) {
        ctx->pc = 0x2457BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457B8u;
        // 0x2457bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2457C0u;
        goto label_fallthrough_0x2457b8;
    }
    ctx->pc = 0x2457B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2457BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457B8u;
        // 0x2457bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2457B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2457b8:
    ctx->pc = 0x2457C0u;
}
