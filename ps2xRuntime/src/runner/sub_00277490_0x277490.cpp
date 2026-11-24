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

// Function: sub_00277490
// Address: 0x277490 - 0x277560
void sub_00277490_0x277490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277490_0x277490");
#endif

    switch (ctx->pc) {
        case 0x2774c8u: goto label_2774c8;
        case 0x2774e0u: goto label_2774e0;
        case 0x2774f4u: goto label_2774f4;
        case 0x277518u: goto label_277518;
        case 0x277548u: goto label_277548;
        case 0x277550u: goto label_277550;
        default: break;
    }

    ctx->pc = 0x277490u;

    // 0x277490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277494: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x277494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x277498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27749c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27749cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2774a0: 0x90830051  lbu         $v1, 0x51($a0)
    ctx->pc = 0x2774a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
    // 0x2774a4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2774A4u;
    {
        const bool branch_taken_0x2774a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2774A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774A4u;
        // 0x2774a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774a4) {
            ctx->pc = 0x2774C0u;
            goto label_2774c0;
        }
    }
    ctx->pc = 0x2774ACu;
    // 0x2774ac: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2774acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2774b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2774B0u;
    {
        const bool branch_taken_0x2774b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2774b0) {
            ctx->pc = 0x2774C0u;
            goto label_2774c0;
        }
    }
    ctx->pc = 0x2774B8u;
    // 0x2774b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2774B8u;
    {
        const bool branch_taken_0x2774b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2774b8) {
            ctx->pc = 0x2774D0u;
            goto label_2774d0;
        }
    }
    ctx->pc = 0x2774C0u;
label_2774c0:
    // 0x2774c0: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x2774C0u;
    SET_GPR_U32(ctx, 31, 0x2774C8u);
    ctx->pc = 0x2774C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2774C0u;
    // 0x2774c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x2774C0u, 0x2774C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774C8u;
label_2774c8:
    // 0x2774c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2774C8u;
    {
        const bool branch_taken_0x2774c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2774c8) {
            ctx->pc = 0x277550u;
            goto label_277550;
        }
    }
    ctx->pc = 0x2774D0u;
label_2774d0:
    // 0x2774d0: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x2774d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2774d4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2774d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2774d8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2774D8u;
    SET_GPR_U32(ctx, 31, 0x2774E0u);
    ctx->pc = 0x2774DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2774D8u;
    // 0x2774dc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2774D8u, 0x2774E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774E0u;
label_2774e0:
    // 0x2774e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2774e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774e4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2774E4u;
    {
        const bool branch_taken_0x2774e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2774E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774E4u;
        // 0x2774e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774e4) {
            ctx->pc = 0x277500u;
            goto label_277500;
        }
    }
    ctx->pc = 0x2774ECu;
    // 0x2774ec: 0xc09daa8  jal         func_276AA0
    ctx->pc = 0x2774ECu;
    SET_GPR_U32(ctx, 31, 0x2774F4u);
    ctx->pc = 0x276AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276AA0u, 0x2774ECu, 0x2774F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774F4u;
label_2774f4:
    // 0x2774f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2774F4u;
    {
        const bool branch_taken_0x2774f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2774f4) {
            ctx->pc = 0x277550u;
            goto label_277550;
        }
    }
    ctx->pc = 0x2774FCu;
    // 0x2774fc: 0x0  nop
    ctx->pc = 0x2774fcu;
    // NOP
label_277500:
    // 0x277500: 0x8ca329c0  lw          $v1, 0x29C0($a1)
    ctx->pc = 0x277500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10688)));
    // 0x277504: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x277504u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277508: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x277508u;
    {
        const bool branch_taken_0x277508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277508u;
        // 0x27750c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277508) {
            ctx->pc = 0x277520u;
            goto label_277520;
        }
    }
    ctx->pc = 0x277510u;
    // 0x277510: 0xc09daa8  jal         func_276AA0
    ctx->pc = 0x277510u;
    SET_GPR_U32(ctx, 31, 0x277518u);
    ctx->pc = 0x276AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276AA0u, 0x277510u, 0x277518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277518u;
label_277518:
    // 0x277518: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x277518u;
    {
        const bool branch_taken_0x277518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277518) {
            ctx->pc = 0x277550u;
            goto label_277550;
        }
    }
    ctx->pc = 0x277520u;
label_277520:
    // 0x277520: 0x860300c4  lh          $v1, 0xC4($s0)
    ctx->pc = 0x277520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x277524: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x277524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x277528: 0xa60300c4  sh          $v1, 0xC4($s0)
    ctx->pc = 0x277528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x27752c: 0x860300c4  lh          $v1, 0xC4($s0)
    ctx->pc = 0x27752cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x277530: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x277530u;
    {
        const bool branch_taken_0x277530 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x277530) {
            ctx->pc = 0x277550u;
            goto label_277550;
        }
    }
    ctx->pc = 0x277538u;
    // 0x277538: 0x90a408e8  lbu         $a0, 0x8E8($a1)
    ctx->pc = 0x277538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
    // 0x27753c: 0x920700b3  lbu         $a3, 0xB3($s0)
    ctx->pc = 0x27753cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 179)));
    // 0x277540: 0xc0bc31c  jal         func_2F0C70
    ctx->pc = 0x277540u;
    SET_GPR_U32(ctx, 31, 0x277548u);
    ctx->pc = 0x277544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277540u;
    // 0x277544: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0C70u, 0x277540u, 0x277548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277548u;
label_277548:
    // 0x277548: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x277548u;
    SET_GPR_U32(ctx, 31, 0x277550u);
    ctx->pc = 0x27754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277548u;
    // 0x27754c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x277548u, 0x277550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277550u;
label_277550:
    // 0x277550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x277550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277558: 0x3e00008  jr          $ra
    ctx->pc = 0x277558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277558u;
        // 0x27755c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277560u;
}
