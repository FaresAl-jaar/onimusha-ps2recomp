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

// Function: sub_0024C3F0
// Address: 0x24c3f0 - 0x24c4f4
void sub_0024C3F0_0x24c3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C3F0_0x24c3f0");
#endif

    switch (ctx->pc) {
        case 0x24c4a0u: goto label_24c4a0;
        case 0x24c4d0u: goto label_24c4d0;
        default: break;
    }

    ctx->pc = 0x24c3f0u;

    // 0x24c3f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24c3f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c3f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c400: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24c400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c404: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24c404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24c408: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24c408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c40c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24c40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24c410: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24c410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c414: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24c418: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c41c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24c420: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x24c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24c424: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24C424u;
    {
        const bool branch_taken_0x24c424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C424u;
        // 0x24c428: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c424) {
            ctx->pc = 0x24C4D0u;
            goto label_24c4d0;
        }
    }
    ctx->pc = 0x24C42Cu;
    // 0x24c42c: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x24c42cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x24c430: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24c430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c434: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x24C434u;
    {
        const bool branch_taken_0x24c434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x24C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C434u;
        // 0x24c438: 0x92070003  lbu         $a3, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c434) {
            ctx->pc = 0x24C460u;
            goto label_24c460;
        }
    }
    ctx->pc = 0x24C43Cu;
    // 0x24c43c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x24c43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24c440: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x24c440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x24c444: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24c444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24c448: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x24c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x24c44c: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x24c44cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x24c450: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x24c450u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24c454: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x24c454u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24c458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C458u;
    {
        const bool branch_taken_0x24c458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C458u;
        // 0x24c45c: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c458) {
            ctx->pc = 0x24C464u;
            goto label_24c464;
        }
    }
    ctx->pc = 0x24C460u;
label_24c460:
    // 0x24c460: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x24c460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24c464:
    // 0x24c464: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x24c464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24c468: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x24c468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x24c46c: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x24c46cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x24c470: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24c470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c474: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x24c474u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x24c478: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x24c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x24c47c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x24c47cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x24c480: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24c480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24c484: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24c488: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x24c488u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24c48c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x24c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x24c490: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C490u;
    {
        const bool branch_taken_0x24c490 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x24C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C490u;
        // 0x24c494: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c490) {
            ctx->pc = 0x24C4A8u;
            goto label_24c4a8;
        }
    }
    ctx->pc = 0x24C498u;
    // 0x24c498: 0xc092fc4  jal         func_24BF10
    ctx->pc = 0x24C498u;
    SET_GPR_U32(ctx, 31, 0x24C4A0u);
    ctx->pc = 0x24BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF10u, 0x24C498u, 0x24C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4A0u;
label_24c4a0:
    // 0x24c4a0: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x24c4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x24c4a4: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x24c4a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_24c4a8:
    // 0x24c4a8: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x24c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x24c4ac: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x24c4acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x24c4b0: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C4B0u;
    {
        const bool branch_taken_0x24c4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x24c4b0) {
            ctx->pc = 0x24C4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C4B0u;
            // 0x24c4b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C4D4u;
            goto label_24c4d4;
        }
    }
    ctx->pc = 0x24C4B8u;
    // 0x24c4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c4bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c4c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c4c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x24c4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c4c8: 0xc092d28  jal         func_24B4A0
    ctx->pc = 0x24C4C8u;
    SET_GPR_U32(ctx, 31, 0x24C4D0u);
    ctx->pc = 0x24C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C4C8u;
    // 0x24c4cc: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B4A0u, 0x24C4C8u, 0x24C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4D0u;
label_24c4d0:
    // 0x24c4d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c4d4:
    // 0x24c4d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c4d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c4d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c4dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24c4dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c4e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24c4e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c4e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24c4e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24c4e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24c4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x24C4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4ECu;
        // 0x24c4f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C4F4u;
}
