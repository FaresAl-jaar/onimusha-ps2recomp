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

// Function: sub_002304D8
// Address: 0x2304d8 - 0x2305ac
void sub_002304D8_0x2304d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002304D8_0x2304d8");
#endif

    switch (ctx->pc) {
        case 0x230510u: goto label_230510;
        case 0x230534u: goto label_230534;
        case 0x230564u: goto label_230564;
        case 0x23056cu: goto label_23056c;
        case 0x230580u: goto label_230580;
        default: break;
    }

    ctx->pc = 0x2304d8u;

    // 0x2304d8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2304d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2304dc: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2304dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2304e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2304e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304e4: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x2304e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x2304e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2304e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2304ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2304f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2304f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304f8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x2304f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2304fc: 0x27a80104  addiu       $t0, $sp, 0x104
    ctx->pc = 0x2304fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x230500: 0x27a90108  addiu       $t1, $sp, 0x108
    ctx->pc = 0x230500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x230504: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x230504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x230508: 0xc08c5d6  jal         func_231758
    ctx->pc = 0x230508u;
    SET_GPR_U32(ctx, 31, 0x230510u);
    ctx->pc = 0x23050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230508u;
    // 0x23050c: 0x27aa010c  addiu       $t2, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231758u, 0x230508u, 0x230510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230510u;
label_230510:
    // 0x230510: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230510u;
    {
        const bool branch_taken_0x230510 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x230514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230510u;
        // 0x230514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230510) {
            ctx->pc = 0x230520u;
            goto label_230520;
        }
    }
    ctx->pc = 0x230518u;
    // 0x230518: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x230518u;
    {
        const bool branch_taken_0x230518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230518u;
        // 0x23051c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230518) {
            ctx->pc = 0x230598u;
            goto label_230598;
        }
    }
    ctx->pc = 0x230520u;
label_230520:
    // 0x230520: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x230520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x230524: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x230524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x230528: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x230528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x23052c: 0xc08c648  jal         func_231920
    ctx->pc = 0x23052Cu;
    SET_GPR_U32(ctx, 31, 0x230534u);
    ctx->pc = 0x230530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23052Cu;
    // 0x230530: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231920u, 0x23052Cu, 0x230534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230534u;
label_230534:
    // 0x230534: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x230534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x230538: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x230538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x23053c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23053cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230540: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x230540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x230544: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x230544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x230548: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x230548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x23054c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x23054cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230550: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x230550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230554: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x230554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x230558: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x230558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x23055c: 0xc08dd1c  jal         func_237470
    ctx->pc = 0x23055Cu;
    SET_GPR_U32(ctx, 31, 0x230564u);
    ctx->pc = 0x230560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23055Cu;
    // 0x230560: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237470u, 0x23055Cu, 0x230564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230564u;
label_230564:
    // 0x230564: 0xc08dd84  jal         func_237610
    ctx->pc = 0x230564u;
    SET_GPR_U32(ctx, 31, 0x23056Cu);
    ctx->pc = 0x230568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230564u;
    // 0x230568: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x230564u, 0x23056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23056Cu;
label_23056c:
    // 0x23056c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230570: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x230570u;
    {
        const bool branch_taken_0x230570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230570) {
            ctx->pc = 0x230574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230570u;
            // 0x230574: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230588u;
            goto label_230588;
        }
    }
    ctx->pc = 0x230578u;
    // 0x230578: 0xc08dd62  jal         func_237588
    ctx->pc = 0x230578u;
    SET_GPR_U32(ctx, 31, 0x230580u);
    ctx->pc = 0x23057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230578u;
    // 0x23057c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237588u, 0x230578u, 0x230580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230580u;
label_230580:
    // 0x230580: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x230580u;
    {
        const bool branch_taken_0x230580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230580u;
        // 0x230584: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230580) {
            ctx->pc = 0x230598u;
            goto label_230598;
        }
    }
    ctx->pc = 0x230588u;
label_230588:
    // 0x230588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23058c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x23058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x230590: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x230590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x230594: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x230594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_230598:
    // 0x230598: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x230598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23059c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x23059cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2305a0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2305a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2305a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2305A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2305A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305A4u;
        // 0x2305a8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2305A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2305ACu;
}
