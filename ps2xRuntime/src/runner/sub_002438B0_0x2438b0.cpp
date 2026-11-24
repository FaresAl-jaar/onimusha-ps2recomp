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

// Function: sub_002438B0
// Address: 0x2438b0 - 0x243984
void sub_002438B0_0x2438b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002438B0_0x2438b0");
#endif

    switch (ctx->pc) {
        case 0x2438b0u: goto label_2438b0;
        case 0x2438b4u: goto label_2438b4;
        case 0x2438b8u: goto label_2438b8;
        case 0x2438bcu: goto label_2438bc;
        case 0x2438c0u: goto label_2438c0;
        case 0x2438c4u: goto label_2438c4;
        case 0x2438c8u: goto label_2438c8;
        case 0x2438ccu: goto label_2438cc;
        case 0x2438d0u: goto label_2438d0;
        case 0x2438d4u: goto label_2438d4;
        case 0x2438d8u: goto label_2438d8;
        case 0x2438dcu: goto label_2438dc;
        case 0x2438e0u: goto label_2438e0;
        case 0x2438e4u: goto label_2438e4;
        case 0x2438e8u: goto label_2438e8;
        case 0x2438ecu: goto label_2438ec;
        case 0x2438f0u: goto label_2438f0;
        case 0x2438f4u: goto label_2438f4;
        case 0x2438f8u: goto label_2438f8;
        case 0x2438fcu: goto label_2438fc;
        case 0x243900u: goto label_243900;
        case 0x243904u: goto label_243904;
        case 0x243908u: goto label_243908;
        case 0x24390cu: goto label_24390c;
        case 0x243910u: goto label_243910;
        case 0x243914u: goto label_243914;
        case 0x243918u: goto label_243918;
        case 0x24391cu: goto label_24391c;
        case 0x243920u: goto label_243920;
        case 0x243924u: goto label_243924;
        case 0x243928u: goto label_243928;
        case 0x24392cu: goto label_24392c;
        case 0x243930u: goto label_243930;
        case 0x243934u: goto label_243934;
        case 0x243938u: goto label_243938;
        case 0x24393cu: goto label_24393c;
        case 0x243940u: goto label_243940;
        case 0x243944u: goto label_243944;
        case 0x243948u: goto label_243948;
        case 0x24394cu: goto label_24394c;
        case 0x243950u: goto label_243950;
        case 0x243954u: goto label_243954;
        case 0x243958u: goto label_243958;
        case 0x24395cu: goto label_24395c;
        case 0x243960u: goto label_243960;
        case 0x243964u: goto label_243964;
        case 0x243968u: goto label_243968;
        case 0x24396cu: goto label_24396c;
        case 0x243970u: goto label_243970;
        case 0x243974u: goto label_243974;
        case 0x243978u: goto label_243978;
        case 0x24397cu: goto label_24397c;
        case 0x243980u: goto label_243980;
        default: break;
    }

    ctx->pc = 0x2438b0u;

label_2438b0:
    // 0x2438b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2438b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2438b4:
    // 0x2438b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2438b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2438b8:
    // 0x2438b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2438b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2438bc:
    // 0x2438bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2438bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2438c0:
    // 0x2438c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2438c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2438c4:
    // 0x2438c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2438c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2438c8:
    // 0x2438c8: 0xc090e88  jal         func_243A20
label_2438cc:
    if (ctx->pc == 0x2438CCu) {
        ctx->pc = 0x2438CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438C8u;
        // 0x2438cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438D0u;
        goto label_2438d0;
    }
    ctx->pc = 0x2438C8u;
    SET_GPR_U32(ctx, 31, 0x2438D0u);
    ctx->pc = 0x2438CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438C8u;
    // 0x2438cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243A20u, 0x2438C8u, 0x2438D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438D0u;
label_2438d0:
    // 0x2438d0: 0x200f809  jalr        $s0
label_2438d4:
    if (ctx->pc == 0x2438D4u) {
        ctx->pc = 0x2438D8u;
        goto label_2438d8;
    }
    ctx->pc = 0x2438D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2438D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2438D0u, 0x2438D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2438D8u;
label_2438d8:
    // 0x2438d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2438d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2438dc:
    // 0x2438dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2438dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2438e0:
    // 0x2438e0: 0xc090e62  jal         func_243988
label_2438e4:
    if (ctx->pc == 0x2438E4u) {
        ctx->pc = 0x2438E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438E0u;
        // 0x2438e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438E8u;
        goto label_2438e8;
    }
    ctx->pc = 0x2438E0u;
    SET_GPR_U32(ctx, 31, 0x2438E8u);
    ctx->pc = 0x2438E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438E0u;
    // 0x2438e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x2438E0u, 0x2438E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438E8u;
label_2438e8:
    // 0x2438e8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_2438ec:
    if (ctx->pc == 0x2438ECu) {
        ctx->pc = 0x2438ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438E8u;
        // 0x2438ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438F0u;
        goto label_2438f0;
    }
    ctx->pc = 0x2438E8u;
    {
        const bool branch_taken_0x2438e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2438ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438E8u;
        // 0x2438ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438e8) {
            ctx->pc = 0x24396Cu;
            goto label_24396c;
        }
    }
    ctx->pc = 0x2438F0u;
label_2438f0:
    // 0x2438f0: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x2438f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
label_2438f4:
    // 0x2438f4: 0x24835f40  addiu       $v1, $a0, 0x5F40
    ctx->pc = 0x2438f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
label_2438f8:
    // 0x2438f8: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x2438f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_2438fc:
    // 0x2438fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_243900:
    if (ctx->pc == 0x243900u) {
        ctx->pc = 0x243900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438FCu;
        // 0x243900: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243904u;
        goto label_243904;
    }
    ctx->pc = 0x2438FCu;
    {
        const bool branch_taken_0x2438fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438FCu;
        // 0x243900: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438fc) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x243904u;
label_243904:
    // 0x243904: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x243904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_243908:
    // 0x243908: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x243908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_24390c:
    // 0x24390c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_243910:
    if (ctx->pc == 0x243910u) {
        ctx->pc = 0x243910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24390Cu;
        // 0x243910: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243914u;
        goto label_243914;
    }
    ctx->pc = 0x24390Cu;
    {
        const bool branch_taken_0x24390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24390Cu;
        // 0x243910: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24390c) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x243914u;
label_243914:
    // 0x243914: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x243914u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_243918:
    // 0x243918: 0x0  nop
    ctx->pc = 0x243918u;
    // NOP
label_24391c:
    // 0x24391c: 0x0  nop
    ctx->pc = 0x24391cu;
    // NOP
label_243920:
    // 0x243920: 0x0  nop
    ctx->pc = 0x243920u;
    // NOP
label_243924:
    // 0x243924: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_243928:
    if (ctx->pc == 0x243928u) {
        ctx->pc = 0x243928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243924u;
        // 0x243928: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24392Cu;
        goto label_24392c;
    }
    ctx->pc = 0x243924u;
    {
        const bool branch_taken_0x243924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243924) {
            ctx->pc = 0x243928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243924u;
            // 0x243928: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243908;
        }
    }
    ctx->pc = 0x24392Cu;
label_24392c:
    // 0x24392c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x24392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_243930:
    // 0x243930: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
label_243934:
    if (ctx->pc == 0x243934u) {
        ctx->pc = 0x243934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243930u;
        // 0x243934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243938u;
        goto label_243938;
    }
    ctx->pc = 0x243930u;
    {
        const bool branch_taken_0x243930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x243934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243930u;
        // 0x243934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243930) {
            ctx->pc = 0x24396Cu;
            goto label_24396c;
        }
    }
    ctx->pc = 0x243938u;
label_243938:
    // 0x243938: 0x24825f40  addiu       $v0, $a0, 0x5F40
    ctx->pc = 0x243938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
label_24393c:
    // 0x24393c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24393cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243940:
    // 0x243940: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x243940u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_243944:
    // 0x243944: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x243944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_243948:
    // 0x243948: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x243948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_24394c:
    // 0x24394c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24394cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_243950:
    // 0x243950: 0xc049f18  jal         func_127C60
label_243954:
    if (ctx->pc == 0x243954u) {
        ctx->pc = 0x243954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243950u;
        // 0x243954: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243958u;
        goto label_243958;
    }
    ctx->pc = 0x243950u;
    SET_GPR_U32(ctx, 31, 0x243958u);
    ctx->pc = 0x243954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243950u;
    // 0x243954: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x243950u, 0x243958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243958u;
label_243958:
    // 0x243958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24395c:
    // 0x24395c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24395cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243960:
    // 0x243960: 0xc049522  jal         func_125488
label_243964:
    if (ctx->pc == 0x243964u) {
        ctx->pc = 0x243964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243960u;
        // 0x243964: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243968u;
        goto label_243968;
    }
    ctx->pc = 0x243960u;
    SET_GPR_U32(ctx, 31, 0x243968u);
    ctx->pc = 0x243964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243960u;
    // 0x243964: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x243960u, 0x243968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243968u;
label_243968:
    // 0x243968: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x243968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24396c:
    // 0x24396c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24396cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243970:
    // 0x243970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_243974:
    // 0x243974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x243974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_243978:
    // 0x243978: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x243978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24397c:
    // 0x24397c: 0x3e00008  jr          $ra
label_243980:
    if (ctx->pc == 0x243980u) {
        ctx->pc = 0x243980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24397Cu;
        // 0x243980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243984u;
        goto label_fallthrough_0x24397c;
    }
    ctx->pc = 0x24397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24397Cu;
        // 0x243980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24397Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24397c:
    ctx->pc = 0x243984u;
}
