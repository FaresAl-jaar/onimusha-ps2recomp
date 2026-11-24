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

// Function: sub_0022B4F8
// Address: 0x22b4f8 - 0x22b614
void sub_0022B4F8_0x22b4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B4F8_0x22b4f8");
#endif

    switch (ctx->pc) {
        case 0x22b540u: goto label_22b540;
        case 0x22b594u: goto label_22b594;
        case 0x22b5a0u: goto label_22b5a0;
        case 0x22b5b0u: goto label_22b5b0;
        case 0x22b5f0u: goto label_22b5f0;
        default: break;
    }

    ctx->pc = 0x22b4f8u;

    // 0x22b4f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b4fc: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x22b4fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x22b500: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22b500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22b504: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22b504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b508: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22b50c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22b50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b510: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22b510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22b514: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22b514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b518: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22b51c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22b51cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b524: 0x2503b308  addiu       $v1, $t0, -0x4CF8
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947592));
    // 0x22b528: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x22b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x22b52c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x22b52cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4BB308u));
    // 0x22b530: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22B530u;
    {
        const bool branch_taken_0x22b530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B530u;
        // 0x22b534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b530) {
            ctx->pc = 0x22B564u;
            goto label_22b564;
        }
    }
    ctx->pc = 0x22B538u;
    // 0x22b538: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22b538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22b53c: 0x0  nop
    ctx->pc = 0x22b53cu;
    // NOP
label_22b540:
    // 0x22b540: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x22b540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x22b544: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B544u;
    {
        const bool branch_taken_0x22b544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B544u;
        // 0x22b548: 0x24630104  addiu       $v1, $v1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b544) {
            ctx->pc = 0x22B564u;
            goto label_22b564;
        }
    }
    ctx->pc = 0x22B54Cu;
    // 0x22b54c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x22b54cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b550: 0x0  nop
    ctx->pc = 0x22b550u;
    // NOP
    // 0x22b554: 0x0  nop
    ctx->pc = 0x22b554u;
    // NOP
    // 0x22b558: 0x0  nop
    ctx->pc = 0x22b558u;
    // NOP
    // 0x22b55c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22B55Cu;
    {
        const bool branch_taken_0x22b55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b55c) {
            ctx->pc = 0x22B560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B55Cu;
            // 0x22b560: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b540;
        }
    }
    ctx->pc = 0x22B564u;
label_22b564:
    // 0x22b564: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x22b564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22b568: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x22B568u;
    {
        const bool branch_taken_0x22b568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B568u;
        // 0x22b56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b568) {
            ctx->pc = 0x22B5F4u;
            goto label_22b5f4;
        }
    }
    ctx->pc = 0x22B570u;
    // 0x22b570: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x22b570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x22b574: 0x2503b308  addiu       $v1, $t0, -0x4CF8
    ctx->pc = 0x22b574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947592));
    // 0x22b578: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x22b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22b57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22b580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22b584: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x22b584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x22b588: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22b588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b58c: 0xc049590  jal         func_125640
    ctx->pc = 0x22B58Cu;
    SET_GPR_U32(ctx, 31, 0x22B594u);
    ctx->pc = 0x22B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B58Cu;
    // 0x22b590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22B58Cu, 0x22B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B594u;
label_22b594:
    // 0x22b594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b598: 0xc08f8b6  jal         func_23E2D8
    ctx->pc = 0x22B598u;
    SET_GPR_U32(ctx, 31, 0x22B5A0u);
    ctx->pc = 0x22B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B598u;
    // 0x22b59c: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E2D8u, 0x22B598u, 0x22B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5A0u;
label_22b5a0:
    // 0x22b5a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B5A0u;
    {
        const bool branch_taken_0x22b5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5A0u;
        // 0x22b5a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5a0) {
            ctx->pc = 0x22B5B8u;
            goto label_22b5b8;
        }
    }
    ctx->pc = 0x22B5A8u;
    // 0x22b5a8: 0xc08ad86  jal         func_22B618
    ctx->pc = 0x22B5A8u;
    SET_GPR_U32(ctx, 31, 0x22B5B0u);
    ctx->pc = 0x22B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5A8u;
    // 0x22b5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B618u, 0x22B5A8u, 0x22B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5B0u;
label_22b5b0:
    // 0x22b5b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22B5B0u;
    {
        const bool branch_taken_0x22b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5B0u;
        // 0x22b5b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5b0) {
            ctx->pc = 0x22B5F4u;
            goto label_22b5f4;
        }
    }
    ctx->pc = 0x22B5B8u;
label_22b5b8:
    // 0x22b5b8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x22b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x22b5bc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x22b5c0: 0x2442b470  addiu       $v0, $v0, -0x4B90
    ctx->pc = 0x22b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947952));
    // 0x22b5c4: 0x2463b4a0  addiu       $v1, $v1, -0x4B60
    ctx->pc = 0x22b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948000));
    // 0x22b5c8: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x22b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x22b5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5d0: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x22b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x22b5d4: 0xae13003c  sw          $s3, 0x3C($s0)
    ctx->pc = 0x22b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
    // 0x22b5d8: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x22b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x22b5dc: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x22b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x22b5e0: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x22b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x22b5e4: 0xae10007c  sw          $s0, 0x7C($s0)
    ctx->pc = 0x22b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 16));
    // 0x22b5e8: 0xc08ad30  jal         func_22B4C0
    ctx->pc = 0x22B5E8u;
    SET_GPR_U32(ctx, 31, 0x22B5F0u);
    ctx->pc = 0x22B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5E8u;
    // 0x22b5ec: 0xae100084  sw          $s0, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B4C0u, 0x22B5E8u, 0x22B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5F0u;
label_22b5f0:
    // 0x22b5f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22b5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b5f4:
    // 0x22b5f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b5f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b5f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b5fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22b5fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b600: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22b600u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22b604: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22b604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b608: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22b608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22b60c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B60Cu;
        // 0x22b610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B614u;
}
