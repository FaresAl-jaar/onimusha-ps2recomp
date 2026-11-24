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

// Function: sub_0021D2D0
// Address: 0x21d2d0 - 0x21d368
void sub_0021D2D0_0x21d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D2D0_0x21d2d0");
#endif

    switch (ctx->pc) {
        case 0x21d2fcu: goto label_21d2fc;
        case 0x21d30cu: goto label_21d30c;
        case 0x21d32cu: goto label_21d32c;
        case 0x21d340u: goto label_21d340;
        default: break;
    }

    ctx->pc = 0x21d2d0u;

    // 0x21d2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d2d4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21d2d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d2dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d2e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21d2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21d2ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d2f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d2f4: 0xc0874da  jal         func_21D368
    ctx->pc = 0x21D2F4u;
    SET_GPR_U32(ctx, 31, 0x21D2FCu);
    ctx->pc = 0x21D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2F4u;
    // 0x21d2f8: 0x2453a1cc  addiu       $s3, $v0, -0x5E34 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D368u, 0x21D2F4u, 0x21D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2FCu;
label_21d2fc:
    // 0x21d2fc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21D2FCu;
    {
        const bool branch_taken_0x21d2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2FCu;
        // 0x21d300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2fc) {
            ctx->pc = 0x21D34Cu;
            goto label_21d34c;
        }
    }
    ctx->pc = 0x21D304u;
    // 0x21d304: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x21D304u;
    SET_GPR_U32(ctx, 31, 0x21D30Cu);
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x21D304u, 0x21D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D30Cu;
label_21d30c:
    // 0x21d30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21d30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d310: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d314: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D314u;
    {
        const bool branch_taken_0x21d314 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D314u;
        // 0x21d318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d314) {
            ctx->pc = 0x21D338u;
            goto label_21d338;
        }
    }
    ctx->pc = 0x21D31Cu;
    // 0x21d31c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21d320: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d324: 0xc0848e0  jal         func_212380
    ctx->pc = 0x21D324u;
    SET_GPR_U32(ctx, 31, 0x21D32Cu);
    ctx->pc = 0x21D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D324u;
    // 0x21d328: 0x34a50206  ori         $a1, $a1, 0x206 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)518);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21D324u, 0x21D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D32Cu;
label_21d32c:
    // 0x21d32c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21D32Cu;
    {
        const bool branch_taken_0x21d32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D32Cu;
        // 0x21d330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d32c) {
            ctx->pc = 0x21D34Cu;
            goto label_21d34c;
        }
    }
    ctx->pc = 0x21D334u;
    // 0x21d334: 0x0  nop
    ctx->pc = 0x21d334u;
    // NOP
label_21d338:
    // 0x21d338: 0xc087504  jal         func_21D410
    ctx->pc = 0x21D338u;
    SET_GPR_U32(ctx, 31, 0x21D340u);
    ctx->pc = 0x21D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D338u;
    // 0x21d33c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D410u, 0x21D338u, 0x21D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D340u;
label_21d340:
    // 0x21d340: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21d340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21d344: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x21d344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x21d348: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21d348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_21d34c:
    // 0x21d34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d358: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21d358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d35c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d360: 0x3e00008  jr          $ra
    ctx->pc = 0x21D360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D360u;
        // 0x21d364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D368u;
}
