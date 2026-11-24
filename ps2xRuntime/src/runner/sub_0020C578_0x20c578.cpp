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

// Function: sub_0020C578
// Address: 0x20c578 - 0x20c5dc
void sub_0020C578_0x20c578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C578_0x20c578");
#endif

    switch (ctx->pc) {
        case 0x20c590u: goto label_20c590;
        case 0x20c5acu: goto label_20c5ac;
        case 0x20c5c0u: goto label_20c5c0;
        default: break;
    }

    ctx->pc = 0x20c578u;

    // 0x20c578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c580: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c588: 0xc081d84  jal         func_207610
    ctx->pc = 0x20C588u;
    SET_GPR_U32(ctx, 31, 0x20C590u);
    ctx->pc = 0x20C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C588u;
    // 0x20c58c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20C588u, 0x20C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C590u;
label_20c590:
    // 0x20c590: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20c590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c598: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C598u;
    {
        const bool branch_taken_0x20c598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C598u;
        // 0x20c59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c598) {
            ctx->pc = 0x20C5B8u;
            goto label_20c5b8;
        }
    }
    ctx->pc = 0x20C5A0u;
    // 0x20c5a0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20c5a4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20C5A4u;
    SET_GPR_U32(ctx, 31, 0x20C5ACu);
    ctx->pc = 0x20C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5A4u;
    // 0x20c5a8: 0x248486f0  addiu       $a0, $a0, -0x7910 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20C5A4u, 0x20C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5ACu;
label_20c5ac:
    // 0x20c5ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20C5ACu;
    {
        const bool branch_taken_0x20c5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5ACu;
        // 0x20c5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5ac) {
            ctx->pc = 0x20C5C8u;
            goto label_20c5c8;
        }
    }
    ctx->pc = 0x20C5B4u;
    // 0x20c5b4: 0x0  nop
    ctx->pc = 0x20c5b4u;
    // NOP
label_20c5b8:
    // 0x20c5b8: 0xc083158  jal         func_20C560
    ctx->pc = 0x20C5B8u;
    SET_GPR_U32(ctx, 31, 0x20C5C0u);
    ctx->pc = 0x20C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C560u, 0x20C5B8u, 0x20C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5C0u;
label_20c5c0:
    // 0x20c5c0: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x20c5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x20c5c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20c5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20c5c8:
    // 0x20c5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c5cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c5ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c5d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x20C5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5D4u;
        // 0x20c5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C5DCu;
}
