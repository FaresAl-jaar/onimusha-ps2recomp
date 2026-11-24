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

// Function: sub_00232418
// Address: 0x232418 - 0x232498
void sub_00232418_0x232418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232418_0x232418");
#endif

    switch (ctx->pc) {
        case 0x232468u: goto label_232468;
        case 0x232474u: goto label_232474;
        default: break;
    }

    ctx->pc = 0x232418u;

    // 0x232418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23241c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23241cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232428: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23242c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23242cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232430: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232434: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x232434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232438: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x232438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23243c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x23243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x232440: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x232440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x232444: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x232444u;
    {
        const bool branch_taken_0x232444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x232448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232444u;
        // 0x232448: 0x28430024  slti        $v1, $v0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232444) {
            ctx->pc = 0x232450u;
            goto label_232450;
        }
    }
    ctx->pc = 0x23244Cu;
    // 0x23244c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x23244cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_232450:
    // 0x232450: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x232450u;
    {
        const bool branch_taken_0x232450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232450u;
        // 0x232454: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232450) {
            ctx->pc = 0x232480u;
            goto label_232480;
        }
    }
    ctx->pc = 0x232458u;
    // 0x232458: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x232458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x23245c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x23245cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x232460: 0xc08c79a  jal         func_231E68
    ctx->pc = 0x232460u;
    SET_GPR_U32(ctx, 31, 0x232468u);
    ctx->pc = 0x232464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232460u;
    // 0x232464: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E68u, 0x232460u, 0x232468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232468u;
label_232468:
    // 0x232468: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x23246c: 0xc08c8c8  jal         func_232320
    ctx->pc = 0x23246Cu;
    SET_GPR_U32(ctx, 31, 0x232474u);
    ctx->pc = 0x232470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23246Cu;
    // 0x232470: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232320u, 0x23246Cu, 0x232474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232474u;
label_232474:
    // 0x232474: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x232474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x232478: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x232478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x23247c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23247cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232480:
    // 0x232480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232488: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23248c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23248cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232490: 0x3e00008  jr          $ra
    ctx->pc = 0x232490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232490u;
        // 0x232494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232498u;
}
