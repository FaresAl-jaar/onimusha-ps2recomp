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

// Function: sub_002315A8
// Address: 0x2315a8 - 0x231620
void sub_002315A8_0x2315a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002315A8_0x2315a8");
#endif

    switch (ctx->pc) {
        case 0x231610u: goto label_231610;
        default: break;
    }

    ctx->pc = 0x2315a8u;

    // 0x2315a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2315a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2315ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2315acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2315b0: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x2315b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2315b4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2315B4u;
    {
        const bool branch_taken_0x2315b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2315B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315B4u;
        // 0x2315b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315b4) {
            ctx->pc = 0x2315C8u;
            goto label_2315c8;
        }
    }
    ctx->pc = 0x2315BCu;
    // 0x2315bc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2315bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2315c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2315C0u;
    {
        const bool branch_taken_0x2315c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315C0u;
        // 0x2315c4: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315c0) {
            ctx->pc = 0x231608u;
            goto label_231608;
        }
    }
    ctx->pc = 0x2315C8u;
label_2315c8:
    // 0x2315c8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2315c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2315cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2315ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2315d0: 0x8c84c8b8  lw          $a0, -0x3748($a0)
    ctx->pc = 0x2315d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953144)));
    // 0x2315d4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2315D4u;
    {
        const bool branch_taken_0x2315d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2315d4) {
            ctx->pc = 0x2315E8u;
            goto label_2315e8;
        }
    }
    ctx->pc = 0x2315DCu;
    // 0x2315dc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2315dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2315e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2315E0u;
    {
        const bool branch_taken_0x2315e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315E0u;
        // 0x2315e4: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315e0) {
            ctx->pc = 0x231608u;
            goto label_231608;
        }
    }
    ctx->pc = 0x2315E8u;
label_2315e8:
    // 0x2315e8: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2315E8u;
    {
        const bool branch_taken_0x2315e8 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x2315e8) {
            ctx->pc = 0x2315ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2315E8u;
            // 0x2315ec: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231604u;
            goto label_231604;
        }
    }
    ctx->pc = 0x2315F0u;
    // 0x2315f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2315f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2315f4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2315f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2315f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2315F8u;
    {
        const bool branch_taken_0x2315f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2315FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315F8u;
        // 0x2315fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315f8) {
            ctx->pc = 0x231614u;
            goto label_231614;
        }
    }
    ctx->pc = 0x231600u;
    // 0x231600: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x231600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_231604:
    // 0x231604: 0x2484a9b8  addiu       $a0, $a0, -0x5648
    ctx->pc = 0x231604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945208));
label_231608:
    // 0x231608: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x231608u;
    SET_GPR_U32(ctx, 31, 0x231610u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x231608u, 0x231610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231610u;
label_231610:
    // 0x231610: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x231610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_231614:
    // 0x231614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231618: 0x3e00008  jr          $ra
    ctx->pc = 0x231618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231618u;
        // 0x23161c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231620u;
}
