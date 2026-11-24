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

// Function: sub_0024C4F8
// Address: 0x24c4f8 - 0x24c5c8
void sub_0024C4F8_0x24c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C4F8_0x24c4f8");
#endif

    switch (ctx->pc) {
        case 0x24c55cu: goto label_24c55c;
        case 0x24c57cu: goto label_24c57c;
        default: break;
    }

    ctx->pc = 0x24c4f8u;

    // 0x24c4f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c4fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24c4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c508: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c50c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c510: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24c514: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x24c514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24c518: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x24C518u;
    {
        const bool branch_taken_0x24c518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x24C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C518u;
        // 0x24c51c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c518) {
            ctx->pc = 0x24C5B0u;
            goto label_24c5b0;
        }
    }
    ctx->pc = 0x24C520u;
    // 0x24c520: 0x82120001  lb          $s2, 0x1($s0)
    ctx->pc = 0x24c520u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x24c524: 0x56420023  bnel        $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x24C524u;
    {
        const bool branch_taken_0x24c524 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c524) {
            ctx->pc = 0x24C528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C524u;
            // 0x24c528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5B4u;
            goto label_24c5b4;
        }
    }
    ctx->pc = 0x24C52Cu;
    // 0x24c52c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x24c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x24c530: 0x58400020  blezl       $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x24C530u;
    {
        const bool branch_taken_0x24c530 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x24c530) {
            ctx->pc = 0x24C534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C530u;
            // 0x24c534: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5B4u;
            goto label_24c5b4;
        }
    }
    ctx->pc = 0x24C538u;
    // 0x24c538: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x24c538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24c53c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x24c53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x24c540: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x24c540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x24c544: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24c548: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x24c548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x24c54c: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C54Cu;
    {
        const bool branch_taken_0x24c54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C54Cu;
        // 0x24c550: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c54c) {
            ctx->pc = 0x24C564u;
            goto label_24c564;
        }
    }
    ctx->pc = 0x24C554u;
    // 0x24c554: 0xc0930ca  jal         func_24C328
    ctx->pc = 0x24C554u;
    SET_GPR_U32(ctx, 31, 0x24C55Cu);
    ctx->pc = 0x24C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C328u, 0x24C554u, 0x24C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C55Cu;
label_24c55c:
    // 0x24c55c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x24c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24c560: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x24c560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_24c564:
    // 0x24c564: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24c564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24c568: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x24c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x24c56c: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C56Cu;
    {
        const bool branch_taken_0x24c56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x24C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C56Cu;
        // 0x24c570: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c56c) {
            ctx->pc = 0x24C584u;
            goto label_24c584;
        }
    }
    ctx->pc = 0x24C574u;
    // 0x24c574: 0xc0930fc  jal         func_24C3F0
    ctx->pc = 0x24C574u;
    SET_GPR_U32(ctx, 31, 0x24C57Cu);
    ctx->pc = 0x24C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C574u;
    // 0x24c578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C3F0u, 0x24C574u, 0x24C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C57Cu;
label_24c57c:
    // 0x24c57c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x24c57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24c580: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x24c580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_24c584:
    // 0x24c584: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24c584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24c588: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x24c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x24c58c: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C58Cu;
    {
        const bool branch_taken_0x24c58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c58c) {
            ctx->pc = 0x24C590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C58Cu;
            // 0x24c590: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5B4u;
            goto label_24c5b4;
        }
    }
    ctx->pc = 0x24C594u;
    // 0x24c594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c59c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c59cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c5a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c5a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24c5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c5a8: 0x8093080  j           func_24C200
    ctx->pc = 0x24C5A8u;
    ctx->pc = 0x24C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5A8u;
    // 0x24c5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C200u;
    sub_0024C200_0x24c200(rdram, ctx, runtime); return;
    ctx->pc = 0x24C5B0u;
label_24c5b0:
    // 0x24c5b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c5b4:
    // 0x24c5b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c5b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c5bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24c5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x24C5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5C0u;
        // 0x24c5c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C5C8u;
}
