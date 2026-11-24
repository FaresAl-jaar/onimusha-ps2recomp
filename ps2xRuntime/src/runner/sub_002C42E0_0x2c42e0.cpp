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

// Function: sub_002C42E0
// Address: 0x2c42e0 - 0x2c4530
void sub_002C42E0_0x2c42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C42E0_0x2c42e0");
#endif

    switch (ctx->pc) {
        case 0x2c435cu: goto label_2c435c;
        case 0x2c44e4u: goto label_2c44e4;
        default: break;
    }

    ctx->pc = 0x2c42e0u;

    // 0x2c42e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c42e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c42e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c42e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c42e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c42e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c42ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c42ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c42f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c42f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c42f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c42f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c42f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c42fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4300: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c4300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4308: 0x90d00001  lbu         $s0, 0x1($a2)
    ctx->pc = 0x2c4308u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c430c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C430Cu;
    {
        const bool branch_taken_0x2c430c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2C4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C430Cu;
        // 0x2c4310: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c430c) {
            ctx->pc = 0x2C431Cu;
            goto label_2c431c;
        }
    }
    ctx->pc = 0x2C4314u;
    // 0x2c4314: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4314u;
    {
        const bool branch_taken_0x2c4314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4314u;
        // 0x2c4318: 0x101823  negu        $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4314) {
            ctx->pc = 0x2C4320u;
            goto label_2c4320;
        }
    }
    ctx->pc = 0x2C431Cu;
label_2c431c:
    // 0x2c431c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2c431cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4320:
    // 0x2c4320: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4324: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C4324u;
    {
        const bool branch_taken_0x2c4324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4324u;
        // 0x2c4328: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4324) {
            ctx->pc = 0x2C43F0u;
            goto label_2c43f0;
        }
    }
    ctx->pc = 0x2C432Cu;
    // 0x2c432c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C432Cu;
    {
        const bool branch_taken_0x2c432c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c432c) {
            ctx->pc = 0x2C43B8u;
            goto label_2c43b8;
        }
    }
    ctx->pc = 0x2C4334u;
    // 0x2c4334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4338: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C4338u;
    {
        const bool branch_taken_0x2c4338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4338u;
        // 0x2c433c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4338) {
            ctx->pc = 0x2C4388u;
            goto label_2c4388;
        }
    }
    ctx->pc = 0x2C4340u;
    // 0x2c4340: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4340u;
    {
        const bool branch_taken_0x2c4340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4340) {
            ctx->pc = 0x2C4350u;
            goto label_2c4350;
        }
    }
    ctx->pc = 0x2C4348u;
    // 0x2c4348: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2C4348u;
    {
        const bool branch_taken_0x2c4348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4348) {
            ctx->pc = 0x2C4450u;
            goto label_2c4450;
        }
    }
    ctx->pc = 0x2C4350u;
label_2c4350:
    // 0x2c4350: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c4350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c4354: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C4354u;
    SET_GPR_U32(ctx, 31, 0x2C435Cu);
    ctx->pc = 0x2C4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4354u;
    // 0x2c4358: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C4354u, 0x2C435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C435Cu;
label_2c435c:
    // 0x2c435c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C435Cu;
    {
        const bool branch_taken_0x2c435c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c435c) {
            ctx->pc = 0x2C4450u;
            goto label_2c4450;
        }
    }
    ctx->pc = 0x2C4364u;
    // 0x2c4364: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2c4364u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c4368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c436c: 0x14830038  bne         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C436Cu;
    {
        const bool branch_taken_0x2c436c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c436c) {
            ctx->pc = 0x2C4450u;
            goto label_2c4450;
        }
    }
    ctx->pc = 0x2C4374u;
    // 0x2c4374: 0x94422ad0  lhu         $v0, 0x2AD0($v0)
    ctx->pc = 0x2c4374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10960)));
    // 0x2c4378: 0x408826  xor         $s1, $v0, $zero
    ctx->pc = 0x2c4378u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2c437c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2C437Cu;
    {
        const bool branch_taken_0x2c437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C437Cu;
        // 0x2c4380: 0x2e310001  sltiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c437c) {
            ctx->pc = 0x2C4450u;
            goto label_2c4450;
        }
    }
    ctx->pc = 0x2C4384u;
    // 0x2c4384: 0x0  nop
    ctx->pc = 0x2c4384u;
    // NOP
label_2c4388:
    // 0x2c4388: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c4388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c438c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c438cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c4390: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c4390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c4394: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c4394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c439c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c43a0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C43A0u;
    {
        const bool branch_taken_0x2c43a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c43a0) {
            ctx->pc = 0x2C4450u;
            goto label_2c4450;
        }
    }
    ctx->pc = 0x2C43A8u;
    // 0x2c43a8: 0x94422ad0  lhu         $v0, 0x2AD0($v0)
    ctx->pc = 0x2c43a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10960)));
    // 0x2c43ac: 0x408826  xor         $s1, $v0, $zero
    ctx->pc = 0x2c43acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2c43b0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C43B0u;
    {
        const bool branch_taken_0x2c43b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43B0u;
        // 0x2c43b4: 0x2e310001  sltiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43b0) {
            ctx->pc = 0x2C4450u;
            goto label_2c4450;
        }
    }
    ctx->pc = 0x2C43B8u;
label_2c43b8:
    // 0x2c43b8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c43b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c43bc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c43bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c43c0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c43c4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c43c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c43c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c43cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c43d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c43d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C43D4u;
    {
        const bool branch_taken_0x2c43d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c43d4) {
            ctx->pc = 0x2C4450u;
            goto label_2c4450;
        }
    }
    ctx->pc = 0x2C43DCu;
    // 0x2c43dc: 0x94422ad0  lhu         $v0, 0x2AD0($v0)
    ctx->pc = 0x2c43dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10960)));
    // 0x2c43e0: 0x408826  xor         $s1, $v0, $zero
    ctx->pc = 0x2c43e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2c43e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C43E4u;
    {
        const bool branch_taken_0x2c43e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43E4u;
        // 0x2c43e8: 0x2e310001  sltiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43e4) {
            ctx->pc = 0x2C4450u;
            goto label_2c4450;
        }
    }
    ctx->pc = 0x2C43ECu;
    // 0x2c43ec: 0x0  nop
    ctx->pc = 0x2c43ecu;
    // NOP
label_2c43f0:
    // 0x2c43f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c43f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c43f4: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2c43f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c43f8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c43fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c4400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4404: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4408: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4408u;
    {
        const bool branch_taken_0x2c4408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4408) {
            ctx->pc = 0x2C4420u;
            goto label_2c4420;
        }
    }
    ctx->pc = 0x2C4410u;
    // 0x2c4410: 0x94422ad0  lhu         $v0, 0x2AD0($v0)
    ctx->pc = 0x2c4410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10960)));
    // 0x2c4414: 0x408826  xor         $s1, $v0, $zero
    ctx->pc = 0x2c4414u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2c4418: 0x2e310001  sltiu       $s1, $s1, 0x1
    ctx->pc = 0x2c4418u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c441c: 0x0  nop
    ctx->pc = 0x2c441cu;
    // NOP
label_2c4420:
    // 0x2c4420: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2c4420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c4424: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2c4424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c4428: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c4428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c442c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c442cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4434: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4438: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4438u;
    {
        const bool branch_taken_0x2c4438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4438) {
            ctx->pc = 0x2C4450u;
            goto label_2c4450;
        }
    }
    ctx->pc = 0x2C4440u;
    // 0x2c4440: 0x94422ad0  lhu         $v0, 0x2AD0($v0)
    ctx->pc = 0x2c4440u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10960)));
    // 0x2c4444: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2c4444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2c4448: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c4448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c444c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2c444cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2c4450:
    // 0x2c4450: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4450u;
    {
        const bool branch_taken_0x2c4450 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2C4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4450u;
        // 0x2c4454: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4450) {
            ctx->pc = 0x2C4460u;
            goto label_2c4460;
        }
    }
    ctx->pc = 0x2C4458u;
    // 0x2c4458: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c4458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c445c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c445cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c4460:
    // 0x2c4460: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4460u;
    {
        const bool branch_taken_0x2c4460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4460) {
            ctx->pc = 0x2C4488u;
            goto label_2c4488;
        }
    }
    ctx->pc = 0x2C4468u;
    // 0x2c4468: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c4468u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c446c: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2c446cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c4470: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x2c4470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2c4474: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x2c4474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c4478: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c4478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c447c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C447Cu;
    {
        const bool branch_taken_0x2c447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c447c) {
            ctx->pc = 0x2C4488u;
            goto label_2c4488;
        }
    }
    ctx->pc = 0x2C4484u;
    // 0x2c4484: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c4484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4488:
    // 0x2c4488: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4488u;
    {
        const bool branch_taken_0x2c4488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4488) {
            ctx->pc = 0x2C4508u;
            goto label_2c4508;
        }
    }
    ctx->pc = 0x2C4490u;
    // 0x2c4490: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c4490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c4494: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C4494u;
    {
        const bool branch_taken_0x2c4494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4494u;
        // 0x2c4498: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4494) {
            ctx->pc = 0x2C44F0u;
            goto label_2c44f0;
        }
    }
    ctx->pc = 0x2C449Cu;
    // 0x2c449c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C449Cu;
    {
        const bool branch_taken_0x2c449c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C449Cu;
        // 0x2c44a0: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c449c) {
            ctx->pc = 0x2C44D8u;
            goto label_2c44d8;
        }
    }
    ctx->pc = 0x2C44A4u;
    // 0x2c44a4: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c44a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c44a8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c44a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c44ac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c44acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c44b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c44b4: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c44b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c44b8: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c44b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c44bc: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c44bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c44c0: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c44c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c44c4: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c44c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c44c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c44cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c44d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C44D0u;
    {
        const bool branch_taken_0x2c44d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C44D0u;
        // 0x2c44d4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c44d0) {
            ctx->pc = 0x2C4500u;
            goto label_2c4500;
        }
    }
    ctx->pc = 0x2C44D8u;
label_2c44d8:
    // 0x2c44d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c44d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c44dc: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C44DCu;
    SET_GPR_U32(ctx, 31, 0x2C44E4u);
    ctx->pc = 0x2C44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C44DCu;
    // 0x2c44e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C44DCu, 0x2C44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44E4u;
label_2c44e4:
    // 0x2c44e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C44E4u;
    {
        const bool branch_taken_0x2c44e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44e4) {
            ctx->pc = 0x2C44F8u;
            goto label_2c44f8;
        }
    }
    ctx->pc = 0x2C44ECu;
    // 0x2c44ec: 0x0  nop
    ctx->pc = 0x2c44ecu;
    // NOP
label_2c44f0:
    // 0x2c44f0: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c44f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c44f4: 0x0  nop
    ctx->pc = 0x2c44f4u;
    // NOP
label_2c44f8:
    // 0x2c44f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c44f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c44fc: 0x0  nop
    ctx->pc = 0x2c44fcu;
    // NOP
label_2c4500:
    // 0x2c4500: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4500u;
    {
        const bool branch_taken_0x2c4500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4500) {
            ctx->pc = 0x2C4510u;
            goto label_2c4510;
        }
    }
    ctx->pc = 0x2C4508u;
label_2c4508:
    // 0x2c4508: 0x26420006  addiu       $v0, $s2, 0x6
    ctx->pc = 0x2c4508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x2c450c: 0x0  nop
    ctx->pc = 0x2c450cu;
    // NOP
label_2c4510:
    // 0x2c4510: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c4510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4514: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c4514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c451c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c451cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4528: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4528u;
        // 0x2c452c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4530u;
}
