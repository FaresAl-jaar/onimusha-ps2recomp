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

// Function: sub_001257B0
// Address: 0x1257b0 - 0x125858
void sub_001257B0_0x1257b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001257B0_0x1257b0");
#endif

    switch (ctx->pc) {
        case 0x1257dcu: goto label_1257dc;
        case 0x125808u: goto label_125808;
        case 0x125814u: goto label_125814;
        case 0x125844u: goto label_125844;
        default: break;
    }

    ctx->pc = 0x1257b0u;

    // 0x1257b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1257b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1257b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1257b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1257b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1257b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1257bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1257bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1257c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1257c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1257c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257c8: 0x8c8e004c  lw          $t6, 0x4C($a0)
    ctx->pc = 0x1257c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1257cc: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1257CCu;
    {
        const bool branch_taken_0x1257cc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1257D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257CCu;
        // 0x1257d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257cc) {
            ctx->pc = 0x1257ECu;
            goto label_1257ec;
        }
    }
    ctx->pc = 0x1257D4u;
    // 0x1257d4: 0xc0488f2  jal         func_1223C8
    ctx->pc = 0x1257D4u;
    SET_GPR_U32(ctx, 31, 0x1257DCu);
    ctx->pc = 0x1257D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1257D4u;
    // 0x1257d8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1223C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223C8u, 0x1257D4u, 0x1257DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1257DCu;
label_1257dc:
    // 0x1257dc: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1257dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1257e0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1257e0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1257E4u;
    {
        const bool branch_taken_0x1257e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257E4u;
        // 0x1257e8: 0x40702d  daddu       $t6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257e4) {
            ctx->pc = 0x125814u;
            goto label_125814;
        }
    }
    ctx->pc = 0x1257ECu;
label_1257ec:
    // 0x1257ec: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x1257ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1257f0: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x1257f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1257f4: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x1257f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1257f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1257F8u;
    {
        const bool branch_taken_0x1257f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257F8u;
        // 0x1257fc: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257f8) {
            ctx->pc = 0x12582Cu;
            goto label_12582c;
        }
    }
    ctx->pc = 0x125800u;
    // 0x125800: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x125800u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125804: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x125804u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
label_125808:
    // 0x125808: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x125808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x12580c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x12580cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125810: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x125810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_125814:
    // 0x125814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125818: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x125818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12581c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12581cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125824: 0x3e00008  jr          $ra
    ctx->pc = 0x125824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125824u;
        // 0x125828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12582Cu;
label_12582c:
    // 0x12582c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125830: 0x22f8004  sllv        $s0, $t7, $s1
    ctx->pc = 0x125830u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 17) & 0x1F));
    // 0x125834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x125834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125838: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12583c: 0xc0488f2  jal         func_1223C8
    ctx->pc = 0x12583Cu;
    SET_GPR_U32(ctx, 31, 0x125844u);
    ctx->pc = 0x125840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12583Cu;
    // 0x125840: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1223C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223C8u, 0x12583Cu, 0x125844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125844u;
label_125844:
    // 0x125844: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x125844u;
    {
        const bool branch_taken_0x125844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125844u;
        // 0x125848: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125844) {
            ctx->pc = 0x125814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125814;
        }
    }
    ctx->pc = 0x12584Cu;
    // 0x12584c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x12584cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x125850: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x125850u;
    {
        const bool branch_taken_0x125850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125850u;
        // 0x125854: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125850) {
            ctx->pc = 0x125808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125808;
        }
    }
    ctx->pc = 0x125858u;
}
