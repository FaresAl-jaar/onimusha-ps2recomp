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

// Function: sub_00252390
// Address: 0x252390 - 0x252460
void sub_00252390_0x252390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252390_0x252390");
#endif

    switch (ctx->pc) {
        case 0x2523d8u: goto label_2523d8;
        case 0x2523e8u: goto label_2523e8;
        case 0x2523f8u: goto label_2523f8;
        case 0x25241cu: goto label_25241c;
        case 0x252434u: goto label_252434;
        default: break;
    }

    ctx->pc = 0x252390u;

    // 0x252390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x252394: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x252394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x252398: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x252398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25239c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2523a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2523a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2523a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2523a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2523a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2523ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2523acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2523b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2523b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2523b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2523b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2523b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2523bc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2523bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2523c0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2523c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2523c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2523c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2523c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2523c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2523cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2523ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2523d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2523D0u;
    {
        const bool branch_taken_0x2523d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523D0u;
        // 0x2523d4: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523d0) {
            ctx->pc = 0x252400u;
            goto label_252400;
        }
    }
    ctx->pc = 0x2523D8u;
label_2523d8:
    // 0x2523d8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2523D8u;
    {
        const bool branch_taken_0x2523d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2523d8) {
            ctx->pc = 0x2523F0u;
            goto label_2523f0;
        }
    }
    ctx->pc = 0x2523E0u;
    // 0x2523e0: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x2523E0u;
    SET_GPR_U32(ctx, 31, 0x2523E8u);
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x2523E0u, 0x2523E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523E8u;
label_2523e8:
    // 0x2523e8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2523E8u;
    {
        const bool branch_taken_0x2523e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2523e8) {
            ctx->pc = 0x2523ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2523E8u;
            // 0x2523ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252440u;
            goto label_252440;
        }
    }
    ctx->pc = 0x2523F0u;
label_2523f0:
    // 0x2523f0: 0xc094892  jal         func_252248
    ctx->pc = 0x2523F0u;
    SET_GPR_U32(ctx, 31, 0x2523F8u);
    ctx->pc = 0x2523F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2523F0u;
    // 0x2523f4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252248u, 0x2523F0u, 0x2523F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523F8u;
label_2523f8:
    // 0x2523f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2523f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2523fc: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x2523fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_252400:
    // 0x252400: 0x214882b  sltu        $s1, $s0, $s4
    ctx->pc = 0x252400u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x252404: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x252404u;
    {
        const bool branch_taken_0x252404 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x252408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252404u;
        // 0x252408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252404) {
            ctx->pc = 0x252438u;
            goto label_252438;
        }
    }
    ctx->pc = 0x25240Cu;
    // 0x25240c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252410: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x252410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252414: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x252414u;
    SET_GPR_U32(ctx, 31, 0x25241Cu);
    ctx->pc = 0x252418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252414u;
    // 0x252418: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x252414u, 0x25241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25241Cu;
label_25241c:
    // 0x25241c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252420: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x252420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252424: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x252424u;
    {
        const bool branch_taken_0x252424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252424u;
        // 0x252428: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252424) {
            ctx->pc = 0x2523D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2523d8;
        }
    }
    ctx->pc = 0x25242Cu;
    // 0x25242c: 0xc0948d6  jal         func_252358
    ctx->pc = 0x25242Cu;
    SET_GPR_U32(ctx, 31, 0x252434u);
    ctx->pc = 0x252430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25242Cu;
    // 0x252430: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252358u, 0x25242Cu, 0x252434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252434u;
label_252434:
    // 0x252434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x252434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252438:
    // 0x252438: 0x211100b  movn        $v0, $s0, $s1
    ctx->pc = 0x252438u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x25243c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25243cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252440:
    // 0x252440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x252440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252444: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x252444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252448: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x252448u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25244c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x25244cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252450: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x252450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x252454: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x252454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252458: 0x3e00008  jr          $ra
    ctx->pc = 0x252458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252458u;
        // 0x25245c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252460u;
}
