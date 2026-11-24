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

// Function: sub_00246638
// Address: 0x246638 - 0x246670
void sub_00246638_0x246638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246638_0x246638");
#endif

    switch (ctx->pc) {
        case 0x24664cu: goto label_24664c;
        default: break;
    }

    ctx->pc = 0x246638u;

    // 0x246638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24663c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246640: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x246644: 0xc091966  jal         func_246598
    ctx->pc = 0x246644u;
    SET_GPR_U32(ctx, 31, 0x24664Cu);
    ctx->pc = 0x246648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246644u;
    // 0x246648: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246598u, 0x246644u, 0x24664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24664Cu;
label_24664c:
    // 0x24664c: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x24664cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x246650: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x246654: 0x2442e9c4  addiu       $v0, $v0, -0x163C
    ctx->pc = 0x246654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961604));
    // 0x246658: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x246658u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x24665c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x24665cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x246660: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246668: 0x3e00008  jr          $ra
    ctx->pc = 0x246668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246668u;
        // 0x24666c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246670u;
}
