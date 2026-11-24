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

// Function: sub_002100D0
// Address: 0x2100d0 - 0x210130
void sub_002100D0_0x2100d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002100D0_0x2100d0");
#endif

    ctx->pc = 0x2100d0u;

    // 0x2100d0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2100d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2100d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2100d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2100d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2100d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2100dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2100dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2100e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2100e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2100e4: 0x24891310  addiu       $t1, $a0, 0x1310
    ctx->pc = 0x2100e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x2100e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2100e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2100ec: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2100ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2100f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2100f4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2100f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2100f8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2100f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2100fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2100fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210100: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x210104: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x210104u;
    {
        const bool branch_taken_0x210104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210104u;
        // 0x210108: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210104) {
            ctx->pc = 0x210120u;
            goto label_210120;
        }
    }
    ctx->pc = 0x21010Cu;
    // 0x21010c: 0x8d25004c  lw          $a1, 0x4C($t1)
    ctx->pc = 0x21010cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x210110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210114: 0x80888d6  j           func_222358
    ctx->pc = 0x210114u;
    ctx->pc = 0x210118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210114u;
    // 0x210118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    sub_00222358_0x222358(rdram, ctx, runtime); return;
    ctx->pc = 0x21011Cu;
    // 0x21011c: 0x0  nop
    ctx->pc = 0x21011cu;
    // NOP
label_210120:
    // 0x210120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x210124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210128: 0x3e00008  jr          $ra
    ctx->pc = 0x210128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210128u;
        // 0x21012c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210130u;
}
