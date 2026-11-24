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

// Function: sub_00275410
// Address: 0x275410 - 0x275490
void sub_00275410_0x275410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275410_0x275410");
#endif

    ctx->pc = 0x275410u;

    // 0x275410: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x275410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275414: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275414u;
    {
        const bool branch_taken_0x275414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x275418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275414u;
        // 0x275418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275414) {
            ctx->pc = 0x275428u;
            goto label_275428;
        }
    }
    ctx->pc = 0x27541Cu;
    // 0x27541c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27541Cu;
    {
        const bool branch_taken_0x27541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27541c) {
            ctx->pc = 0x275488u;
            goto label_275488;
        }
    }
    ctx->pc = 0x275424u;
    // 0x275424: 0x0  nop
    ctx->pc = 0x275424u;
    // NOP
label_275428:
    // 0x275428: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x275428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27542c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x27542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x275430: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x275430u;
    {
        const bool branch_taken_0x275430 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x275434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275430u;
        // 0x275434: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275430) {
            ctx->pc = 0x275448u;
            goto label_275448;
        }
    }
    ctx->pc = 0x275438u;
    // 0x275438: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x275438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x27543c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x27543cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275440u;
    {
        const bool branch_taken_0x275440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275440) {
            ctx->pc = 0x275450u;
            goto label_275450;
        }
    }
    ctx->pc = 0x275448u;
label_275448:
    // 0x275448: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x275448u;
    {
        const bool branch_taken_0x275448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275448u;
        // 0x27544c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275448) {
            ctx->pc = 0x275488u;
            goto label_275488;
        }
    }
    ctx->pc = 0x275450u;
label_275450:
    // 0x275450: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x275450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x275454: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x275454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275458: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x275458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27545c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275460: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275460u;
    {
        const bool branch_taken_0x275460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x275460) {
            ctx->pc = 0x275478u;
            goto label_275478;
        }
    }
    ctx->pc = 0x275468u;
    // 0x275468: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x275468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27546c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27546Cu;
    {
        const bool branch_taken_0x27546c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27546c) {
            ctx->pc = 0x275480u;
            goto label_275480;
        }
    }
    ctx->pc = 0x275474u;
    // 0x275474: 0x0  nop
    ctx->pc = 0x275474u;
    // NOP
label_275478:
    // 0x275478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275478u;
    {
        const bool branch_taken_0x275478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275478u;
        // 0x27547c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275478) {
            ctx->pc = 0x275488u;
            goto label_275488;
        }
    }
    ctx->pc = 0x275480u;
label_275480:
    // 0x275480: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x275480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x275484: 0x0  nop
    ctx->pc = 0x275484u;
    // NOP
label_275488:
    // 0x275488: 0x3e00008  jr          $ra
    ctx->pc = 0x275488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275490u;
}
