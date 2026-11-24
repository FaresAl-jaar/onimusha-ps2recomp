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

// Function: sub_00216580
// Address: 0x216580 - 0x216614
void sub_00216580_0x216580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216580_0x216580");
#endif

    ctx->pc = 0x216580u;

    // 0x216580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216584: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x216584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216588: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x216588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x21658c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216590: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x216590u;
    {
        const bool branch_taken_0x216590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x216594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216590u;
        // 0x216594: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216590) {
            ctx->pc = 0x2165C8u;
            goto label_2165c8;
        }
    }
    ctx->pc = 0x216598u;
    // 0x216598: 0x2862ffff  slti        $v0, $v1, -0x1
    ctx->pc = 0x216598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x21659c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21659Cu;
    {
        const bool branch_taken_0x21659c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21659Cu;
        // 0x2165a0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21659c) {
            ctx->pc = 0x2165B8u;
            goto label_2165b8;
        }
    }
    ctx->pc = 0x2165A4u;
    // 0x2165a4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2165A4u;
    {
        const bool branch_taken_0x2165a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2165A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165A4u;
        // 0x2165a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165a4) {
            ctx->pc = 0x2165E0u;
            goto label_2165e0;
        }
    }
    ctx->pc = 0x2165ACu;
    // 0x2165ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2165ACu;
    {
        const bool branch_taken_0x2165ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165ACu;
        // 0x2165b0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165ac) {
            ctx->pc = 0x2165FCu;
            goto label_2165fc;
        }
    }
    ctx->pc = 0x2165B4u;
    // 0x2165b4: 0x0  nop
    ctx->pc = 0x2165b4u;
    // NOP
label_2165b8:
    // 0x2165b8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2165B8u;
    {
        const bool branch_taken_0x2165b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2165BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165B8u;
        // 0x2165bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165b8) {
            ctx->pc = 0x2165F8u;
            goto label_2165f8;
        }
    }
    ctx->pc = 0x2165C0u;
    // 0x2165c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2165C0u;
    {
        const bool branch_taken_0x2165c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165C0u;
        // 0x2165c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165c0) {
            ctx->pc = 0x21660Cu;
            goto label_21660c;
        }
    }
    ctx->pc = 0x2165C8u;
label_2165c8:
    // 0x2165c8: 0x1cc0000f  bgtz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2165C8u;
    {
        const bool branch_taken_0x2165c8 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x2165CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165C8u;
        // 0x2165cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165c8) {
            ctx->pc = 0x216608u;
            goto label_216608;
        }
    }
    ctx->pc = 0x2165D0u;
    // 0x2165d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2165d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2165d4: 0x80848e0  j           func_212380
    ctx->pc = 0x2165D4u;
    ctx->pc = 0x2165D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165D4u;
    // 0x2165d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x2165DCu;
    // 0x2165dc: 0x0  nop
    ctx->pc = 0x2165dcu;
    // NOP
label_2165e0:
    // 0x2165e0: 0x1cc00009  bgtz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2165E0u;
    {
        const bool branch_taken_0x2165e0 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x2165E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165E0u;
        // 0x2165e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165e0) {
            ctx->pc = 0x216608u;
            goto label_216608;
        }
    }
    ctx->pc = 0x2165E8u;
    // 0x2165e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2165e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2165ec: 0x80848e0  j           func_212380
    ctx->pc = 0x2165ECu;
    ctx->pc = 0x2165F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165ECu;
    // 0x2165f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x2165F4u;
    // 0x2165f4: 0x0  nop
    ctx->pc = 0x2165f4u;
    // NOP
label_2165f8:
    // 0x2165f8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2165f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2165fc:
    // 0x2165fc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2165fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216600: 0x80848e0  j           func_212380
    ctx->pc = 0x216600u;
    ctx->pc = 0x216604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216600u;
    // 0x216604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x216608u;
label_216608:
    // 0x216608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21660c:
    // 0x21660c: 0x3e00008  jr          $ra
    ctx->pc = 0x21660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21660Cu;
        // 0x216610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21660Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216614u;
}
