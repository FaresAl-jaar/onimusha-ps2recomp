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

// Function: sub_0021B7D8
// Address: 0x21b7d8 - 0x21b834
void sub_0021B7D8_0x21b7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B7D8_0x21b7d8");
#endif

    switch (ctx->pc) {
        case 0x21b7f4u: goto label_21b7f4;
        default: break;
    }

    ctx->pc = 0x21b7d8u;

    // 0x21b7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21b7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b7e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21b7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21b7ec: 0xc086c6a  jal         func_21B1A8
    ctx->pc = 0x21B7ECu;
    SET_GPR_U32(ctx, 31, 0x21B7F4u);
    ctx->pc = 0x21B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B7ECu;
    // 0x21b7f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1A8u, 0x21B7ECu, 0x21B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B7F4u;
label_21b7f4:
    // 0x21b7f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B7F4u;
    {
        const bool branch_taken_0x21b7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7F4u;
        // 0x21b7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7f4) {
            ctx->pc = 0x21B818u;
            goto label_21b818;
        }
    }
    ctx->pc = 0x21B7FCu;
    // 0x21b7fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21b7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b80c: 0x3e00008  jr          $ra
    ctx->pc = 0x21B80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B80Cu;
        // 0x21b810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B814u;
    // 0x21b814: 0x0  nop
    ctx->pc = 0x21b814u;
    // NOP
label_21b818:
    // 0x21b818: 0x8e241fc0  lw          $a0, 0x1FC0($s1)
    ctx->pc = 0x21b818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8128)));
    // 0x21b81c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b81cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b820: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b824: 0x24841198  addiu       $a0, $a0, 0x1198
    ctx->pc = 0x21b824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    // 0x21b828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b82c: 0x8086a96  j           func_21AA58
    ctx->pc = 0x21B82Cu;
    ctx->pc = 0x21B830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B82Cu;
    // 0x21b830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AA58u;
    sub_0021AA58_0x21aa58(rdram, ctx, runtime); return;
    ctx->pc = 0x21B834u;
}
