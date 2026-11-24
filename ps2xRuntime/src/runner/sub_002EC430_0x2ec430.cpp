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

// Function: sub_002EC430
// Address: 0x2ec430 - 0x2ec5b4
void sub_002EC430_0x2ec430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC430_0x2ec430");
#endif

    switch (ctx->pc) {
        case 0x2ec448u: goto label_2ec448;
        case 0x2ec45cu: goto label_2ec45c;
        case 0x2ec470u: goto label_2ec470;
        case 0x2ec478u: goto label_2ec478;
        case 0x2ec48cu: goto label_2ec48c;
        case 0x2ec498u: goto label_2ec498;
        case 0x2ec4acu: goto label_2ec4ac;
        case 0x2ec4b8u: goto label_2ec4b8;
        case 0x2ec4ccu: goto label_2ec4cc;
        case 0x2ec4d8u: goto label_2ec4d8;
        case 0x2ec4ecu: goto label_2ec4ec;
        case 0x2ec500u: goto label_2ec500;
        case 0x2ec514u: goto label_2ec514;
        case 0x2ec528u: goto label_2ec528;
        case 0x2ec530u: goto label_2ec530;
        case 0x2ec544u: goto label_2ec544;
        case 0x2ec550u: goto label_2ec550;
        case 0x2ec564u: goto label_2ec564;
        case 0x2ec570u: goto label_2ec570;
        case 0x2ec584u: goto label_2ec584;
        case 0x2ec590u: goto label_2ec590;
        case 0x2ec5a4u: goto label_2ec5a4;
        default: break;
    }

    ctx->pc = 0x2ec430u;

    // 0x2ec430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec434: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ec434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ec438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec43c: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x2ec43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x2ec440: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x2EC440u;
    SET_GPR_U32(ctx, 31, 0x2EC448u);
    ctx->pc = 0x2EC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC440u;
    // 0x2ec444: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x2EC440u, 0x2EC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC448u;
label_2ec448:
    // 0x2ec448: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2ec448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2ec44c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2EC44Cu;
    {
        const bool branch_taken_0x2ec44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC44Cu;
        // 0x2ec450: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec44c) {
            ctx->pc = 0x2EC4F0u;
            goto label_2ec4f0;
        }
    }
    ctx->pc = 0x2EC454u;
    // 0x2ec454: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC454u;
    SET_GPR_U32(ctx, 31, 0x2EC45Cu);
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC454u, 0x2EC45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC45Cu;
label_2ec45c:
    // 0x2ec45c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec460: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC460u;
    {
        const bool branch_taken_0x2ec460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC460u;
        // 0x2ec464: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec460) {
            ctx->pc = 0x2EC470u;
            goto label_2ec470;
        }
    }
    ctx->pc = 0x2EC468u;
    // 0x2ec468: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC468u;
    SET_GPR_U32(ctx, 31, 0x2EC470u);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC468u, 0x2EC470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC470u;
label_2ec470:
    // 0x2ec470: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC470u;
    SET_GPR_U32(ctx, 31, 0x2EC478u);
    ctx->pc = 0x2EC474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC470u;
    // 0x2ec474: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC470u, 0x2EC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC478u;
label_2ec478:
    // 0x2ec478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec47c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC47Cu;
    {
        const bool branch_taken_0x2ec47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC47Cu;
        // 0x2ec480: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec47c) {
            ctx->pc = 0x2EC490u;
            goto label_2ec490;
        }
    }
    ctx->pc = 0x2EC484u;
    // 0x2ec484: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC484u;
    SET_GPR_U32(ctx, 31, 0x2EC48Cu);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC484u, 0x2EC48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC48Cu;
label_2ec48c:
    // 0x2ec48c: 0x0  nop
    ctx->pc = 0x2ec48cu;
    // NOP
label_2ec490:
    // 0x2ec490: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC490u;
    SET_GPR_U32(ctx, 31, 0x2EC498u);
    ctx->pc = 0x2EC494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC490u;
    // 0x2ec494: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC490u, 0x2EC498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC498u;
label_2ec498:
    // 0x2ec498: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec49c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC49Cu;
    {
        const bool branch_taken_0x2ec49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC49Cu;
        // 0x2ec4a0: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec49c) {
            ctx->pc = 0x2EC4B0u;
            goto label_2ec4b0;
        }
    }
    ctx->pc = 0x2EC4A4u;
    // 0x2ec4a4: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC4A4u;
    SET_GPR_U32(ctx, 31, 0x2EC4ACu);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC4A4u, 0x2EC4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4ACu;
label_2ec4ac:
    // 0x2ec4ac: 0x0  nop
    ctx->pc = 0x2ec4acu;
    // NOP
label_2ec4b0:
    // 0x2ec4b0: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC4B0u;
    SET_GPR_U32(ctx, 31, 0x2EC4B8u);
    ctx->pc = 0x2EC4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC4B0u;
    // 0x2ec4b4: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC4B0u, 0x2EC4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4B8u;
label_2ec4b8:
    // 0x2ec4b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec4bc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC4BCu;
    {
        const bool branch_taken_0x2ec4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4BCu;
        // 0x2ec4c0: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4bc) {
            ctx->pc = 0x2EC4D0u;
            goto label_2ec4d0;
        }
    }
    ctx->pc = 0x2EC4C4u;
    // 0x2ec4c4: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC4C4u;
    SET_GPR_U32(ctx, 31, 0x2EC4CCu);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC4C4u, 0x2EC4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4CCu;
label_2ec4cc:
    // 0x2ec4cc: 0x0  nop
    ctx->pc = 0x2ec4ccu;
    // NOP
label_2ec4d0:
    // 0x2ec4d0: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC4D0u;
    SET_GPR_U32(ctx, 31, 0x2EC4D8u);
    ctx->pc = 0x2EC4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC4D0u;
    // 0x2ec4d4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC4D0u, 0x2EC4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4D8u;
label_2ec4d8:
    // 0x2ec4d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec4dc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC4DCu;
    {
        const bool branch_taken_0x2ec4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4DCu;
        // 0x2ec4e0: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4dc) {
            ctx->pc = 0x2EC4F0u;
            goto label_2ec4f0;
        }
    }
    ctx->pc = 0x2EC4E4u;
    // 0x2ec4e4: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC4E4u;
    SET_GPR_U32(ctx, 31, 0x2EC4ECu);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC4E4u, 0x2EC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4ECu;
label_2ec4ec:
    // 0x2ec4ec: 0x0  nop
    ctx->pc = 0x2ec4ecu;
    // NOP
label_2ec4f0:
    // 0x2ec4f0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ec4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ec4f4: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x2ec4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x2ec4f8: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x2EC4F8u;
    SET_GPR_U32(ctx, 31, 0x2EC500u);
    ctx->pc = 0x2EC4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC4F8u;
    // 0x2ec4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x2EC4F8u, 0x2EC500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC500u;
label_2ec500:
    // 0x2ec500: 0x2c43001e  sltiu       $v1, $v0, 0x1E
    ctx->pc = 0x2ec500u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2ec504: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2EC504u;
    {
        const bool branch_taken_0x2ec504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC504u;
        // 0x2ec508: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec504) {
            ctx->pc = 0x2EC5A8u;
            goto label_2ec5a8;
        }
    }
    ctx->pc = 0x2EC50Cu;
    // 0x2ec50c: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC50Cu;
    SET_GPR_U32(ctx, 31, 0x2EC514u);
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC50Cu, 0x2EC514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC514u;
label_2ec514:
    // 0x2ec514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec518: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC518u;
    {
        const bool branch_taken_0x2ec518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC518u;
        // 0x2ec51c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec518) {
            ctx->pc = 0x2EC528u;
            goto label_2ec528;
        }
    }
    ctx->pc = 0x2EC520u;
    // 0x2ec520: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC520u;
    SET_GPR_U32(ctx, 31, 0x2EC528u);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC520u, 0x2EC528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC528u;
label_2ec528:
    // 0x2ec528: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC528u;
    SET_GPR_U32(ctx, 31, 0x2EC530u);
    ctx->pc = 0x2EC52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC528u;
    // 0x2ec52c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC528u, 0x2EC530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC530u;
label_2ec530:
    // 0x2ec530: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec534: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC534u;
    {
        const bool branch_taken_0x2ec534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC534u;
        // 0x2ec538: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec534) {
            ctx->pc = 0x2EC548u;
            goto label_2ec548;
        }
    }
    ctx->pc = 0x2EC53Cu;
    // 0x2ec53c: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC53Cu;
    SET_GPR_U32(ctx, 31, 0x2EC544u);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC53Cu, 0x2EC544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC544u;
label_2ec544:
    // 0x2ec544: 0x0  nop
    ctx->pc = 0x2ec544u;
    // NOP
label_2ec548:
    // 0x2ec548: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC548u;
    SET_GPR_U32(ctx, 31, 0x2EC550u);
    ctx->pc = 0x2EC54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC548u;
    // 0x2ec54c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC548u, 0x2EC550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC550u;
label_2ec550:
    // 0x2ec550: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec554: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC554u;
    {
        const bool branch_taken_0x2ec554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC554u;
        // 0x2ec558: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec554) {
            ctx->pc = 0x2EC568u;
            goto label_2ec568;
        }
    }
    ctx->pc = 0x2EC55Cu;
    // 0x2ec55c: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC55Cu;
    SET_GPR_U32(ctx, 31, 0x2EC564u);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC55Cu, 0x2EC564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC564u;
label_2ec564:
    // 0x2ec564: 0x0  nop
    ctx->pc = 0x2ec564u;
    // NOP
label_2ec568:
    // 0x2ec568: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC568u;
    SET_GPR_U32(ctx, 31, 0x2EC570u);
    ctx->pc = 0x2EC56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC568u;
    // 0x2ec56c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC568u, 0x2EC570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC570u;
label_2ec570:
    // 0x2ec570: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec574: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC574u;
    {
        const bool branch_taken_0x2ec574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC574u;
        // 0x2ec578: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec574) {
            ctx->pc = 0x2EC588u;
            goto label_2ec588;
        }
    }
    ctx->pc = 0x2EC57Cu;
    // 0x2ec57c: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC57Cu;
    SET_GPR_U32(ctx, 31, 0x2EC584u);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC57Cu, 0x2EC584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC584u;
label_2ec584:
    // 0x2ec584: 0x0  nop
    ctx->pc = 0x2ec584u;
    // NOP
label_2ec588:
    // 0x2ec588: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x2EC588u;
    SET_GPR_U32(ctx, 31, 0x2EC590u);
    ctx->pc = 0x2EC58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC588u;
    // 0x2ec58c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x2EC588u, 0x2EC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC590u;
label_2ec590:
    // 0x2ec590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec594: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC594u;
    {
        const bool branch_taken_0x2ec594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC594u;
        // 0x2ec598: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec594) {
            ctx->pc = 0x2EC5A8u;
            goto label_2ec5a8;
        }
    }
    ctx->pc = 0x2EC59Cu;
    // 0x2ec59c: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x2EC59Cu;
    SET_GPR_U32(ctx, 31, 0x2EC5A4u);
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x2EC59Cu, 0x2EC5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5A4u;
label_2ec5a4:
    // 0x2ec5a4: 0x0  nop
    ctx->pc = 0x2ec5a4u;
    // NOP
label_2ec5a8:
    // 0x2ec5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5ACu;
        // 0x2ec5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC5B4u;
}
