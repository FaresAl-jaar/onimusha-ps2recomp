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

// Function: sub_00211390
// Address: 0x211390 - 0x211460
void sub_00211390_0x211390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211390_0x211390");
#endif

    switch (ctx->pc) {
        case 0x2113d8u: goto label_2113d8;
        case 0x211400u: goto label_211400;
        default: break;
    }

    ctx->pc = 0x211390u;

    // 0x211390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x211394: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x211394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x211398: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x211398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21139c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x21139cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2113a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2113a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2113a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2113a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2113a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2113a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2113acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2113b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2113b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2113b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2113b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2113b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2113bc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2113bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2113c0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2113C0u;
    {
        const bool branch_taken_0x2113c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2113C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113C0u;
        // 0x2113c4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113c0) {
            ctx->pc = 0x211434u;
            goto label_211434;
        }
    }
    ctx->pc = 0x2113C8u;
    // 0x2113c8: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x2113c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2113cc: 0x241500f8  addiu       $s5, $zero, 0xF8
    ctx->pc = 0x2113ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x2113d0: 0x2414000f  addiu       $s4, $zero, 0xF
    ctx->pc = 0x2113d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2113d4: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x2113d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2113d8:
    // 0x2113d8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2113d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2113dc: 0x54560012  bnel        $v0, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x2113DCu;
    {
        const bool branch_taken_0x2113dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2113dc) {
            ctx->pc = 0x2113E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2113DCu;
            // 0x2113e0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211428u;
            goto label_211428;
        }
    }
    ctx->pc = 0x2113E4u;
    // 0x2113e4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2113e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2113e8: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x2113e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x2113ec: 0x5455000e  bnel        $v0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x2113ECu;
    {
        const bool branch_taken_0x2113ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2113ec) {
            ctx->pc = 0x2113F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2113ECu;
            // 0x2113f0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211428u;
            goto label_211428;
        }
    }
    ctx->pc = 0x2113F4u;
    // 0x2113f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2113f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113f8: 0xc084518  jal         func_211460
    ctx->pc = 0x2113F8u;
    SET_GPR_U32(ctx, 31, 0x211400u);
    ctx->pc = 0x2113FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2113F8u;
    // 0x2113fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211460u, 0x2113F8u, 0x211400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211400u;
label_211400:
    // 0x211400: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x211400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211404: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x211404u;
    {
        const bool branch_taken_0x211404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211404) {
            ctx->pc = 0x211408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211404u;
            // 0x211408: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211428u;
            goto label_211428;
        }
    }
    ctx->pc = 0x21140Cu;
    // 0x21140c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x21140cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x211410: 0x50540005  beql        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x211410u;
    {
        const bool branch_taken_0x211410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x211410) {
            ctx->pc = 0x211414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211410u;
            // 0x211414: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211428u;
            goto label_211428;
        }
    }
    ctx->pc = 0x211418u;
    // 0x211418: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x211418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x21141c: 0x14730006  bne         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x21141Cu;
    {
        const bool branch_taken_0x21141c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x211420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21141Cu;
        // 0x211420: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21141c) {
            ctx->pc = 0x211438u;
            goto label_211438;
        }
    }
    ctx->pc = 0x211424u;
    // 0x211424: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x211424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_211428:
    // 0x211428: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x211428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21142c: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x21142Cu;
    {
        const bool branch_taken_0x21142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21142Cu;
        // 0x211430: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21142c) {
            ctx->pc = 0x2113D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2113d8;
        }
    }
    ctx->pc = 0x211434u;
label_211434:
    // 0x211434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211438:
    // 0x211438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21143c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21143cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211440: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x211440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211444: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x211444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211448: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x211448u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21144c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21144cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x211450: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x211450u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211454: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x211454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x211458: 0x3e00008  jr          $ra
    ctx->pc = 0x211458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211458u;
        // 0x21145c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211460u;
}
