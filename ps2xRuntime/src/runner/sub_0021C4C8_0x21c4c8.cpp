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

// Function: sub_0021C4C8
// Address: 0x21c4c8 - 0x21c588
void sub_0021C4C8_0x21c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C4C8_0x21c4c8");
#endif

    switch (ctx->pc) {
        case 0x21c4ecu: goto label_21c4ec;
        case 0x21c4fcu: goto label_21c4fc;
        case 0x21c550u: goto label_21c550;
        case 0x21c560u: goto label_21c560;
        default: break;
    }

    ctx->pc = 0x21c4c8u;

    // 0x21c4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c4cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c4d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c4d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c4dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c4e0: 0x8e320048  lw          $s2, 0x48($s1)
    ctx->pc = 0x21c4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x21c4e4: 0xc087162  jal         func_21C588
    ctx->pc = 0x21C4E4u;
    SET_GPR_U32(ctx, 31, 0x21C4ECu);
    ctx->pc = 0x21C4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4E4u;
    // 0x21c4e8: 0x8e30004c  lw          $s0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C588u, 0x21C4E4u, 0x21C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4ECu;
label_21c4ec:
    // 0x21c4ec: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x21C4ECu;
    {
        const bool branch_taken_0x21c4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c4ec) {
            ctx->pc = 0x21C4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C4ECu;
            // 0x21c4f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C570u;
            goto label_21c570;
        }
    }
    ctx->pc = 0x21C4F4u;
    // 0x21c4f4: 0xc08718e  jal         func_21C638
    ctx->pc = 0x21C4F4u;
    SET_GPR_U32(ctx, 31, 0x21C4FCu);
    ctx->pc = 0x21C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4F4u;
    // 0x21c4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C638u, 0x21C4F4u, 0x21C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4FCu;
label_21c4fc:
    // 0x21c4fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21c500: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21C500u;
    {
        const bool branch_taken_0x21c500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C500u;
        // 0x21c504: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c500) {
            ctx->pc = 0x21C568u;
            goto label_21c568;
        }
    }
    ctx->pc = 0x21C508u;
    // 0x21c508: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C508u;
    {
        const bool branch_taken_0x21c508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C508u;
        // 0x21c50c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c508) {
            ctx->pc = 0x21C528u;
            goto label_21c528;
        }
    }
    ctx->pc = 0x21C510u;
    // 0x21c510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c514: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21C514u;
    {
        const bool branch_taken_0x21c514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C514u;
        // 0x21c518: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c514) {
            ctx->pc = 0x21C540u;
            goto label_21c540;
        }
    }
    ctx->pc = 0x21C51Cu;
    // 0x21c51c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21C51Cu;
    {
        const bool branch_taken_0x21c51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C51Cu;
        // 0x21c520: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c51c) {
            ctx->pc = 0x21C574u;
            goto label_21c574;
        }
    }
    ctx->pc = 0x21C524u;
    // 0x21c524: 0x0  nop
    ctx->pc = 0x21c524u;
    // NOP
label_21c528:
    // 0x21c528: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C528u;
    {
        const bool branch_taken_0x21c528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C528u;
        // 0x21c52c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c528) {
            ctx->pc = 0x21C548u;
            goto label_21c548;
        }
    }
    ctx->pc = 0x21C530u;
    // 0x21c530: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C530u;
    {
        const bool branch_taken_0x21c530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C530u;
        // 0x21c534: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c530) {
            ctx->pc = 0x21C548u;
            goto label_21c548;
        }
    }
    ctx->pc = 0x21C538u;
    // 0x21c538: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21C538u;
    {
        const bool branch_taken_0x21c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C538u;
        // 0x21c53c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c538) {
            ctx->pc = 0x21C574u;
            goto label_21c574;
        }
    }
    ctx->pc = 0x21C540u;
label_21c540:
    // 0x21c540: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21C540u;
    {
        const bool branch_taken_0x21c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C540u;
        // 0x21c544: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c540) {
            ctx->pc = 0x21C56Cu;
            goto label_21c56c;
        }
    }
    ctx->pc = 0x21C548u;
label_21c548:
    // 0x21c548: 0xc08725e  jal         func_21C978
    ctx->pc = 0x21C548u;
    SET_GPR_U32(ctx, 31, 0x21C550u);
    ctx->pc = 0x21C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C548u;
    // 0x21c54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C978u, 0x21C548u, 0x21C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C550u;
label_21c550:
    // 0x21c550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C550u;
    {
        const bool branch_taken_0x21c550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C550u;
        // 0x21c554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c550) {
            ctx->pc = 0x21C568u;
            goto label_21c568;
        }
    }
    ctx->pc = 0x21C558u;
    // 0x21c558: 0xc08767a  jal         func_21D9E8
    ctx->pc = 0x21C558u;
    SET_GPR_U32(ctx, 31, 0x21C560u);
    ctx->pc = 0x21C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C558u;
    // 0x21c55c: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D9E8u, 0x21C558u, 0x21C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C560u;
label_21c560:
    // 0x21c560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21C560u;
    {
        const bool branch_taken_0x21c560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C560u;
        // 0x21c564: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c560) {
            ctx->pc = 0x21C570u;
            goto label_21c570;
        }
    }
    ctx->pc = 0x21C568u;
label_21c568:
    // 0x21c568: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x21c568u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21c56c:
    // 0x21c56c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21c56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21c570:
    // 0x21c570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c574:
    // 0x21c574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c57c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c580: 0x3e00008  jr          $ra
    ctx->pc = 0x21C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C580u;
        // 0x21c584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C588u;
}
