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

// Function: sub_0022F810
// Address: 0x22f810 - 0x22fabc
void sub_0022F810_0x22f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F810_0x22f810");
#endif

    switch (ctx->pc) {
        case 0x22f880u: goto label_22f880;
        case 0x22f8a4u: goto label_22f8a4;
        case 0x22f8f0u: goto label_22f8f0;
        case 0x22f908u: goto label_22f908;
        case 0x22f94cu: goto label_22f94c;
        case 0x22f970u: goto label_22f970;
        case 0x22f998u: goto label_22f998;
        case 0x22f9ccu: goto label_22f9cc;
        case 0x22f9e4u: goto label_22f9e4;
        case 0x22fa08u: goto label_22fa08;
        case 0x22fa5cu: goto label_22fa5c;
        case 0x22fa70u: goto label_22fa70;
        default: break;
    }

    ctx->pc = 0x22f810u;

    // 0x22f810: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22f814: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22f814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22f818: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22f81c: 0x2454cdf0  addiu       $s4, $v0, -0x3210
    ctx->pc = 0x22f81cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954480));
    // 0x22f820: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x22f820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BCDF0u));
    // 0x22f824: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f828: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22f828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22f82c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x22f82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f830: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22f830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22f834: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22f834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f838: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x22f838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x22f83c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x22f83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x22f840: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x22f840u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f844: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x22f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x22f848: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x22f848u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f84c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x22f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x22f850: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x22f850u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f854: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x22f854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x22f858: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x22f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x22f85c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x22f85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x22f860: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x22f860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x22f864: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x22f864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x22f868: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x22f868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x22f86c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F86Cu;
    {
        const bool branch_taken_0x22f86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F86Cu;
        // 0x22f870: 0x8fb30078  lw          $s3, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f86c) {
            ctx->pc = 0x22F888u;
            goto label_22f888;
        }
    }
    ctx->pc = 0x22F874u;
    // 0x22f874: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22f874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22f878: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x22F878u;
    SET_GPR_U32(ctx, 31, 0x22F880u);
    ctx->pc = 0x22F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F878u;
    // 0x22f87c: 0x2484a370  addiu       $a0, $a0, -0x5C90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x22F878u, 0x22F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F880u;
label_22f880:
    // 0x22f880: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x22F880u;
    {
        const bool branch_taken_0x22f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F880u;
        // 0x22f884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f880) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22F888u;
label_22f888:
    // 0x22f888: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x22f888u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x22f88c: 0x2516cde8  addiu       $s6, $t0, -0x3218
    ctx->pc = 0x22f88cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954472));
    // 0x22f890: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x22f890u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BCDE8u));
    // 0x22f894: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F894u;
    {
        const bool branch_taken_0x22f894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F894u;
        // 0x22f898: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f894) {
            ctx->pc = 0x22F8ACu;
            goto label_22f8ac;
        }
    }
    ctx->pc = 0x22F89Cu;
    // 0x22f89c: 0xc08c1ce  jal         func_230738
    ctx->pc = 0x22F89Cu;
    SET_GPR_U32(ctx, 31, 0x22F8A4u);
    ctx->pc = 0x230738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230738u, 0x22F89Cu, 0x22F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8A4u;
label_22f8a4:
    // 0x22f8a4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x22f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x22f8a8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_22f8ac:
    // 0x22f8ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f8b0: 0x2451cdec  addiu       $s1, $v0, -0x3214
    ctx->pc = 0x22f8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954476));
    // 0x22f8b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f8b8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x22f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x22f8bc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x22f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x22f8c0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x22f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f8c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F8C4u;
    {
        const bool branch_taken_0x22f8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8C4u;
        // 0x22f8c8: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8c4) {
            ctx->pc = 0x22F8D8u;
            goto label_22f8d8;
        }
    }
    ctx->pc = 0x22F8CCu;
    // 0x22f8cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22F8CCu;
    {
        const bool branch_taken_0x22f8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8CCu;
        // 0x22f8d0: 0x2484a3b0  addiu       $a0, $a0, -0x5C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8cc) {
            ctx->pc = 0x22F8E8u;
            goto label_22f8e8;
        }
    }
    ctx->pc = 0x22F8D4u;
    // 0x22f8d4: 0x0  nop
    ctx->pc = 0x22f8d4u;
    // NOP
label_22f8d8:
    // 0x22f8d8: 0x1e600009  bgtz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F8D8u;
    {
        const bool branch_taken_0x22f8d8 = (GPR_S64(ctx, 19) > 0);
        ctx->pc = 0x22F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8D8u;
        // 0x22f8dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8d8) {
            ctx->pc = 0x22F900u;
            goto label_22f900;
        }
    }
    ctx->pc = 0x22F8E0u;
    // 0x22f8e0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22f8e4: 0x2484a3e0  addiu       $a0, $a0, -0x5C20
    ctx->pc = 0x22f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943712));
label_22f8e8:
    // 0x22f8e8: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x22F8E8u;
    SET_GPR_U32(ctx, 31, 0x22F8F0u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x22F8E8u, 0x22F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8F0u;
label_22f8f0:
    // 0x22f8f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22f8f4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x22f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x22f8f8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x22F8F8u;
    {
        const bool branch_taken_0x22f8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8F8u;
        // 0x22f8fc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8f8) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22F900u;
label_22f900:
    // 0x22f900: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x22F900u;
    SET_GPR_U32(ctx, 31, 0x22F908u);
    ctx->pc = 0x22F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F900u;
    // 0x22f904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x22F900u, 0x22F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F908u;
label_22f908:
    // 0x22f908: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x22F908u;
    {
        const bool branch_taken_0x22f908 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F908u;
        // 0x22f90c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f908) {
            ctx->pc = 0x22F9A4u;
            goto label_22f9a4;
        }
    }
    ctx->pc = 0x22F910u;
    // 0x22f910: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22f914: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F914u;
    {
        const bool branch_taken_0x22f914 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F914u;
        // 0x22f918: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f914) {
            ctx->pc = 0x22F928u;
            goto label_22f928;
        }
    }
    ctx->pc = 0x22F91Cu;
    // 0x22f91c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x22F91Cu;
    {
        const bool branch_taken_0x22f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F91Cu;
        // 0x22f920: 0x2484a408  addiu       $a0, $a0, -0x5BF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f91c) {
            ctx->pc = 0x22F9DCu;
            goto label_22f9dc;
        }
    }
    ctx->pc = 0x22F924u;
    // 0x22f924: 0x0  nop
    ctx->pc = 0x22f924u;
    // NOP
label_22f928:
    // 0x22f928: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f92c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22f930: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x22f930u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x22f934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f938: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x22f938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x22f93c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f940: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x22f940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x22f944: 0xc049590  jal         func_125640
    ctx->pc = 0x22F944u;
    SET_GPR_U32(ctx, 31, 0x22F94Cu);
    ctx->pc = 0x22F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F944u;
    // 0x22f948: 0xac40cde4  sw          $zero, -0x321C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954468), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22F944u, 0x22F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F94Cu;
label_22f94c:
    // 0x22f94c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x22f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22f950: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x22f950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x22f954: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x22f954u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x22f958: 0xac30c8b8  sw          $s0, -0x3748($at)
    ctx->pc = 0x22f958u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953144), GPR_U32(ctx, 16));
    // 0x22f95c: 0x16a00016  bnez        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x22F95Cu;
    {
        const bool branch_taken_0x22f95c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F95Cu;
        // 0x22f960: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f95c) {
            ctx->pc = 0x22F9B8u;
            goto label_22f9b8;
        }
    }
    ctx->pc = 0x22F964u;
    // 0x22f964: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x22f964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f968: 0xc08c17e  jal         func_2305F8
    ctx->pc = 0x22F968u;
    SET_GPR_U32(ctx, 31, 0x22F970u);
    ctx->pc = 0x22F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F968u;
    // 0x22f96c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2305F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2305F8u, 0x22F968u, 0x22F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F970u;
label_22f970:
    // 0x22f970: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22F970u;
    {
        const bool branch_taken_0x22f970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F970u;
        // 0x22f974: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f970) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F978u;
    // 0x22f978: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x22f978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f97c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x22f97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f980: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x22f980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22f984: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x22f984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f988: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x22f988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x22f98c: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x22f98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x22f990: 0xc08c5d6  jal         func_231758
    ctx->pc = 0x22F990u;
    SET_GPR_U32(ctx, 31, 0x22F998u);
    ctx->pc = 0x22F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F990u;
    // 0x22f994: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231758u, 0x22F990u, 0x22F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F998u;
label_22f998:
    // 0x22f998: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F998u;
    {
        const bool branch_taken_0x22f998 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x22f998) {
            ctx->pc = 0x22F99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F998u;
            // 0x22f99c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F9B0u;
            goto label_22f9b0;
        }
    }
    ctx->pc = 0x22F9A0u;
    // 0x22f9a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22f9a4:
    // 0x22f9a4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x22F9A4u;
    {
        const bool branch_taken_0x22f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9A4u;
        // 0x22f9a8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9a4) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22F9ACu;
    // 0x22f9ac: 0x0  nop
    ctx->pc = 0x22f9acu;
    // NOP
label_22f9b0:
    // 0x22f9b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22F9B0u;
    {
        const bool branch_taken_0x22f9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9B0u;
        // 0x22f9b4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9b0) {
            ctx->pc = 0x22FA10u;
            goto label_22fa10;
        }
    }
    ctx->pc = 0x22F9B8u;
label_22f9b8:
    // 0x22f9b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x22f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f9bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22f9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9c0: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22f9c4: 0xc08c106  jal         func_230418
    ctx->pc = 0x22F9C4u;
    SET_GPR_U32(ctx, 31, 0x22F9CCu);
    ctx->pc = 0x22F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9C4u;
    // 0x22f9c8: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230418u, 0x22F9C4u, 0x22F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9CCu;
label_22f9cc:
    // 0x22f9cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22F9CCu;
    {
        const bool branch_taken_0x22f9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9CCu;
        // 0x22f9d0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9cc) {
            ctx->pc = 0x22F9F8u;
            goto label_22f9f8;
        }
    }
    ctx->pc = 0x22F9D4u;
label_22f9d4:
    // 0x22f9d4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x22f9d8: 0x2484a438  addiu       $a0, $a0, -0x5BC8
    ctx->pc = 0x22f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943800));
label_22f9dc:
    // 0x22f9dc: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x22F9DCu;
    SET_GPR_U32(ctx, 31, 0x22F9E4u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x22F9DCu, 0x22F9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9E4u;
label_22f9e4:
    // 0x22f9e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22f9e8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x22f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x22f9ec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x22F9ECu;
    {
        const bool branch_taken_0x22f9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9ECu;
        // 0x22f9f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9ec) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22F9F4u;
    // 0x22f9f4: 0x0  nop
    ctx->pc = 0x22f9f4u;
    // NOP
label_22f9f8:
    // 0x22f9f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22f9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9fc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x22f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22fa00: 0xc04a040  jal         func_128100
    ctx->pc = 0x22FA00u;
    SET_GPR_U32(ctx, 31, 0x22FA08u);
    ctx->pc = 0x22FA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA00u;
    // 0x22fa04: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x22FA00u, 0x22FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA08u;
label_22fa08:
    // 0x22fa08: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x22fa08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fa0c: 0xae080114  sw          $t0, 0x114($s0)
    ctx->pc = 0x22fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 8));
label_22fa10:
    // 0x22fa10: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22fa14: 0x266307ff  addiu       $v1, $s3, 0x7FF
    ctx->pc = 0x22fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2047));
    // 0x22fa18: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x22fa18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fa1c: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x22fa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x22fa20: 0x2a620000  slti        $v0, $s3, 0x0
    ctx->pc = 0x22fa20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22fa24: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x22fa24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x22fa28: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22fa2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fa30: 0x2452cde8  addiu       $s2, $v0, -0x3218
    ctx->pc = 0x22fa30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954472));
    // 0x22fa34: 0x133ac3  sra         $a3, $s3, 11
    ctx->pc = 0x22fa34u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 19), 11));
    // 0x22fa38: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x22fa3c: 0xae040110  sw          $a0, 0x110($s0)
    ctx->pc = 0x22fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 4));
    // 0x22fa40: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22fa44: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x22fa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22fa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22fa4c: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x22fa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22fa50: 0xac67cdfc  sw          $a3, -0x3204($v1)
    ctx->pc = 0x22fa50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x4BCDFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDFCu, _value); } while (0);
    // 0x22fa54: 0xc08c344  jal         func_230D10
    ctx->pc = 0x22FA54u;
    SET_GPR_U32(ctx, 31, 0x22FA5Cu);
    ctx->pc = 0x22FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA54u;
    // 0x22fa58: 0xac46cdf8  sw          $a2, -0x3208($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954488), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D10u, 0x22FA54u, 0x22FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA5Cu;
label_22fa5c:
    // 0x22fa5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22fa5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa60: 0x6230009  bgezl       $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22FA60u;
    {
        const bool branch_taken_0x22fa60 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x22fa60) {
            ctx->pc = 0x22FA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA60u;
            // 0x22fa64: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FA88u;
            goto label_22fa88;
        }
    }
    ctx->pc = 0x22FA68u;
    // 0x22fa68: 0xc08c1ce  jal         func_230738
    ctx->pc = 0x22FA68u;
    SET_GPR_U32(ctx, 31, 0x22FA70u);
    ctx->pc = 0x22FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA68u;
    // 0x22fa6c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230738u, 0x22FA68u, 0x22FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA70u;
label_22fa70:
    // 0x22fa70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fa74: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x22fa78: 0xac62cdf0  sw          $v0, -0x3210($v1)
    ctx->pc = 0x22fa78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BCDF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDF0u, _value); } while (0);
    // 0x22fa7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22FA7Cu;
    {
        const bool branch_taken_0x22fa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA7Cu;
        // 0x22fa80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa7c) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22FA84u;
    // 0x22fa84: 0x0  nop
    ctx->pc = 0x22fa84u;
    // NOP
label_22fa88:
    // 0x22fa88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22fa88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fa8c:
    // 0x22fa8c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22fa8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fa90: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x22fa90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22fa94: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22fa94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fa98: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x22fa98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22fa9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22fa9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22faa0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x22faa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22faa4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x22faa4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22faa8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x22faa8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22faac: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x22faacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22fab0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x22fab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22fab4: 0x3e00008  jr          $ra
    ctx->pc = 0x22FAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAB4u;
        // 0x22fab8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FABCu;
}
