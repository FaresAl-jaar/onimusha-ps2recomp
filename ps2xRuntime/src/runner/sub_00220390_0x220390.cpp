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

// Function: sub_00220390
// Address: 0x220390 - 0x2203fc
void sub_00220390_0x220390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220390_0x220390");
#endif

    switch (ctx->pc) {
        case 0x2203acu: goto label_2203ac;
        case 0x2203d0u: goto label_2203d0;
        default: break;
    }

    ctx->pc = 0x220390u;

    // 0x220390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22039c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2203a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2203a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2203a4: 0xc088100  jal         func_220400
    ctx->pc = 0x2203A4u;
    SET_GPR_U32(ctx, 31, 0x2203ACu);
    ctx->pc = 0x2203A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203A4u;
    // 0x2203a8: 0x26110d30  addiu       $s1, $s0, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220400u, 0x2203A4u, 0x2203ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203ACu;
label_2203ac:
    // 0x2203ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2203acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2203B0u;
    {
        const bool branch_taken_0x2203b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2203B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203B0u;
        // 0x2203b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203b0) {
            ctx->pc = 0x2203C8u;
            goto label_2203c8;
        }
    }
    ctx->pc = 0x2203B8u;
    // 0x2203b8: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x2203bc: 0x8e2302ac  lw          $v1, 0x2AC($s1)
    ctx->pc = 0x2203bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x2203c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2203c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2203c4: 0xae2202a8  sw          $v0, 0x2A8($s1)
    ctx->pc = 0x2203c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
label_2203c8:
    // 0x2203c8: 0xc08810e  jal         func_220438
    ctx->pc = 0x2203C8u;
    SET_GPR_U32(ctx, 31, 0x2203D0u);
    ctx->pc = 0x220438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220438u, 0x2203C8u, 0x2203D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203D0u;
label_2203d0:
    // 0x2203d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2203D0u;
    {
        const bool branch_taken_0x2203d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2203D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203D0u;
        // 0x2203d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203d0) {
            ctx->pc = 0x2203ECu;
            goto label_2203ec;
        }
    }
    ctx->pc = 0x2203D8u;
    // 0x2203d8: 0x8e2202cc  lw          $v0, 0x2CC($s1)
    ctx->pc = 0x2203d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
    // 0x2203dc: 0x8e2302ac  lw          $v1, 0x2AC($s1)
    ctx->pc = 0x2203dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x2203e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2203e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2203e4: 0xae2202cc  sw          $v0, 0x2CC($s1)
    ctx->pc = 0x2203e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 2));
    // 0x2203e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2203e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2203ec:
    // 0x2203ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2203ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2203f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2203f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2203f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2203F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2203F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203F4u;
        // 0x2203f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2203F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2203FCu;
}
