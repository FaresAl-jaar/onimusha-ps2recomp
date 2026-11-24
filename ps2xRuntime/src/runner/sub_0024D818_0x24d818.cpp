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

// Function: sub_0024D818
// Address: 0x24d818 - 0x24d94c
void sub_0024D818_0x24d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D818_0x24d818");
#endif

    switch (ctx->pc) {
        case 0x24d878u: goto label_24d878;
        case 0x24d880u: goto label_24d880;
        case 0x24d890u: goto label_24d890;
        case 0x24d898u: goto label_24d898;
        case 0x24d8a4u: goto label_24d8a4;
        case 0x24d8b0u: goto label_24d8b0;
        case 0x24d8ecu: goto label_24d8ec;
        default: break;
    }

    ctx->pc = 0x24d818u;

    // 0x24d818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d824: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d828: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24d828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d82c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24d830: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24d838: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x24d838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x24d83c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x24d83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d840: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24D840u;
    {
        const bool branch_taken_0x24d840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D840u;
        // 0x24d844: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d840) {
            ctx->pc = 0x24D870u;
            goto label_24d870;
        }
    }
    ctx->pc = 0x24D848u;
    // 0x24d848: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d854: 0x2484e338  addiu       $a0, $a0, -0x1CC8
    ctx->pc = 0x24d854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959928));
    // 0x24d858: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d85c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d85cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d860: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24d860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d864: 0x808baa4  j           func_22EA90
    ctx->pc = 0x24D864u;
    ctx->pc = 0x24D868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D864u;
    // 0x24d868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x24D86Cu;
    // 0x24d86c: 0x0  nop
    ctx->pc = 0x24d86cu;
    // NOP
label_24d870:
    // 0x24d870: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x24D870u;
    SET_GPR_U32(ctx, 31, 0x24D878u);
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x24D870u, 0x24D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D878u;
label_24d878:
    // 0x24d878: 0xc093654  jal         func_24D950
    ctx->pc = 0x24D878u;
    SET_GPR_U32(ctx, 31, 0x24D880u);
    ctx->pc = 0x24D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D878u;
    // 0x24d87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D950u, 0x24D878u, 0x24D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D880u;
label_24d880:
    // 0x24d880: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x24d880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x24d884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24d884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d888: 0xc0933ce  jal         func_24CF38
    ctx->pc = 0x24D888u;
    SET_GPR_U32(ctx, 31, 0x24D890u);
    ctx->pc = 0x24D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D888u;
    // 0x24d88c: 0x2484daf8  addiu       $a0, $a0, -0x2508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF38u, 0x24D888u, 0x24D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D890u;
label_24d890:
    // 0x24d890: 0xc0933f0  jal         func_24CFC0
    ctx->pc = 0x24D890u;
    SET_GPR_U32(ctx, 31, 0x24D898u);
    ctx->pc = 0x24D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D890u;
    // 0x24d894: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CFC0u, 0x24D890u, 0x24D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D898u;
label_24d898:
    // 0x24d898: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24d89c: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x24D89Cu;
    SET_GPR_U32(ctx, 31, 0x24D8A4u);
    ctx->pc = 0x24D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D89Cu;
    // 0x24d8a0: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x24D89Cu, 0x24D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8A4u;
label_24d8a4:
    // 0x24d8a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24d8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d8a8: 0xc09341e  jal         func_24D078
    ctx->pc = 0x24D8A8u;
    SET_GPR_U32(ctx, 31, 0x24D8B0u);
    ctx->pc = 0x24D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8A8u;
    // 0x24d8ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D078u, 0x24D8A8u, 0x24D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8B0u;
label_24d8b0:
    // 0x24d8b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d8b4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x24D8B4u;
    {
        const bool branch_taken_0x24d8b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8B4u;
        // 0x24d8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8b4) {
            ctx->pc = 0x24D8E0u;
            goto label_24d8e0;
        }
    }
    ctx->pc = 0x24D8BCu;
    // 0x24d8bc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d8c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d8c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d8c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d8c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d8c8: 0x2484e378  addiu       $a0, $a0, -0x1C88
    ctx->pc = 0x24d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959992));
    // 0x24d8cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d8ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d8d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d8d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d8d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24d8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d8d8: 0x808baa4  j           func_22EA90
    ctx->pc = 0x24D8D8u;
    ctx->pc = 0x24D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8D8u;
    // 0x24d8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x24D8E0u;
label_24d8e0:
    // 0x24d8e0: 0x8e2500ec  lw          $a1, 0xEC($s1)
    ctx->pc = 0x24d8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x24d8e4: 0xc093594  jal         func_24D650
    ctx->pc = 0x24D8E4u;
    SET_GPR_U32(ctx, 31, 0x24D8ECu);
    ctx->pc = 0x24D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8E4u;
    // 0x24d8e8: 0x8e2600f0  lw          $a2, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D650u, 0x24D8E4u, 0x24D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8ECu;
label_24d8ec:
    // 0x24d8ec: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x24d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
    // 0x24d8f0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x24d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x24d8f4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x24d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x24d8f8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x24d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x24d8fc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x24d8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x24d900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d904: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x24d904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
    // 0x24d908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d90c: 0x2463daa8  addiu       $v1, $v1, -0x2558
    ctx->pc = 0x24d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957736));
    // 0x24d910: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d914: 0x2484da90  addiu       $a0, $a0, -0x2570
    ctx->pc = 0x24d914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957712));
    // 0x24d918: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d91c: 0x24a5dae0  addiu       $a1, $a1, -0x2520
    ctx->pc = 0x24d91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957792));
    // 0x24d920: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24d920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d924: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x24d924u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
    // 0x24d928: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x24d928u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x24d92c: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x24d92cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x24d930: 0x3c09004c  lui         $t1, 0x4C
    ctx->pc = 0x24d930u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)76 << 16));
    // 0x24d934: 0xacc28fa0  sw          $v0, -0x7060($a2)
    ctx->pc = 0x24d934u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4C8FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C8FA0u, _value); } while (0);
    // 0x24d938: 0xace3b2f4  sw          $v1, -0x4D0C($a3)
    ctx->pc = 0x24d938u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BB2F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB2F4u, _value); } while (0);
    // 0x24d93c: 0xad04b2f8  sw          $a0, -0x4D08($t0)
    ctx->pc = 0x24d93cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4BB2F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB2F8u, _value); } while (0);
    // 0x24d940: 0xad257564  sw          $a1, 0x7564($t1)
    ctx->pc = 0x24d940u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4C7564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C7564u, _value); } while (0);
    // 0x24d944: 0x808d1fc  j           func_2347F0
    ctx->pc = 0x24D944u;
    ctx->pc = 0x24D948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D944u;
    // 0x24d948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347F0u;
    sub_002347F0_0x2347f0(rdram, ctx, runtime); return;
    ctx->pc = 0x24D94Cu;
}
