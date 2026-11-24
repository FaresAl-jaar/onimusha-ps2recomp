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

// Function: sub_0023F900
// Address: 0x23f900 - 0x23fa14
void sub_0023F900_0x23f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F900_0x23f900");
#endif

    switch (ctx->pc) {
        case 0x23f920u: goto label_23f920;
        case 0x23f930u: goto label_23f930;
        case 0x23f948u: goto label_23f948;
        case 0x23f95cu: goto label_23f95c;
        case 0x23f96cu: goto label_23f96c;
        case 0x23f97cu: goto label_23f97c;
        case 0x23f98cu: goto label_23f98c;
        case 0x23f99cu: goto label_23f99c;
        case 0x23f9acu: goto label_23f9ac;
        case 0x23f9bcu: goto label_23f9bc;
        case 0x23f9ccu: goto label_23f9cc;
        case 0x23f9dcu: goto label_23f9dc;
        default: break;
    }

    ctx->pc = 0x23f900u;

    // 0x23f900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f904: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23f908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f90c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f918: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F918u;
    SET_GPR_U32(ctx, 31, 0x23F920u);
    ctx->pc = 0x23F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F918u;
    // 0x23f91c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F918u, 0x23F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F920u;
label_23f920:
    // 0x23f920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f924: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23f924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x23f928: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F928u;
    SET_GPR_U32(ctx, 31, 0x23F930u);
    ctx->pc = 0x23F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F928u;
    // 0x23f92c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F928u, 0x23F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F930u;
label_23f930:
    // 0x23f930: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23f930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23f934: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23f934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f93c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x23f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x23f940: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F940u;
    SET_GPR_U32(ctx, 31, 0x23F948u);
    ctx->pc = 0x23F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F940u;
    // 0x23f944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F940u, 0x23F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F948u;
label_23f948:
    // 0x23f948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f94c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23f94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23f950: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23f950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23f954: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F954u;
    SET_GPR_U32(ctx, 31, 0x23F95Cu);
    ctx->pc = 0x23F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F954u;
    // 0x23f958: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F954u, 0x23F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F95Cu;
label_23f95c:
    // 0x23f95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f960: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23f960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x23f964: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F964u;
    SET_GPR_U32(ctx, 31, 0x23F96Cu);
    ctx->pc = 0x23F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F964u;
    // 0x23f968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F964u, 0x23F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F96Cu;
label_23f96c:
    // 0x23f96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f970: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x23f970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x23f974: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F974u;
    SET_GPR_U32(ctx, 31, 0x23F97Cu);
    ctx->pc = 0x23F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F974u;
    // 0x23f978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F974u, 0x23F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F97Cu;
label_23f97c:
    // 0x23f97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f980: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x23f980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x23f984: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F984u;
    SET_GPR_U32(ctx, 31, 0x23F98Cu);
    ctx->pc = 0x23F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F984u;
    // 0x23f988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F984u, 0x23F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F98Cu;
label_23f98c:
    // 0x23f98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f990: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x23f990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x23f994: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F994u;
    SET_GPR_U32(ctx, 31, 0x23F99Cu);
    ctx->pc = 0x23F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F994u;
    // 0x23f998: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F994u, 0x23F99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F99Cu;
label_23f99c:
    // 0x23f99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9a0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x23f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x23f9a4: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F9A4u;
    SET_GPR_U32(ctx, 31, 0x23F9ACu);
    ctx->pc = 0x23F9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9A4u;
    // 0x23f9a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F9A4u, 0x23F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9ACu;
label_23f9ac:
    // 0x23f9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9b0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x23f9b4: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F9B4u;
    SET_GPR_U32(ctx, 31, 0x23F9BCu);
    ctx->pc = 0x23F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9B4u;
    // 0x23f9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F9B4u, 0x23F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9BCu;
label_23f9bc:
    // 0x23f9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9c0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x23f9c4: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F9C4u;
    SET_GPR_U32(ctx, 31, 0x23F9CCu);
    ctx->pc = 0x23F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9C4u;
    // 0x23f9c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F9C4u, 0x23F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9CCu;
label_23f9cc:
    // 0x23f9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9d0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x23f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x23f9d4: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F9D4u;
    SET_GPR_U32(ctx, 31, 0x23F9DCu);
    ctx->pc = 0x23F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9D4u;
    // 0x23f9d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F9D4u, 0x23F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9DCu;
label_23f9dc:
    // 0x23f9dc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x23f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x23f9e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f9e4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x23f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x23f9e8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F9E8u;
    {
        const bool branch_taken_0x23f9e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9E8u;
        // 0x23f9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9e8) {
            ctx->pc = 0x23F9FCu;
            goto label_23f9fc;
        }
    }
    ctx->pc = 0x23F9F0u;
    // 0x23f9f0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x23f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x23f9f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F9F4u;
    {
        const bool branch_taken_0x23f9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9F4u;
        // 0x23f9f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9f4) {
            ctx->pc = 0x23FA04u;
            goto label_23fa04;
        }
    }
    ctx->pc = 0x23F9FCu;
label_23f9fc:
    // 0x23f9fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fa00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fa00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fa04:
    // 0x23fa04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23fa04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fa08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23fa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA0Cu;
        // 0x23fa10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FA14u;
}
