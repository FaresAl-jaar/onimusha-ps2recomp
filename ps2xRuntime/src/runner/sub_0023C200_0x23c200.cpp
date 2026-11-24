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

// Function: sub_0023C200
// Address: 0x23c200 - 0x23c258
void sub_0023C200_0x23c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C200_0x23c200");
#endif

    switch (ctx->pc) {
        case 0x23c224u: goto label_23c224;
        case 0x23c234u: goto label_23c234;
        case 0x23c23cu: goto label_23c23c;
        default: break;
    }

    ctx->pc = 0x23c200u;

    // 0x23c200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c20c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c210: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c214: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23c218: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23c218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23c21c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23C21Cu;
    SET_GPR_U32(ctx, 31, 0x23C224u);
    ctx->pc = 0x23C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C21Cu;
    // 0x23c220: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23C21Cu, 0x23C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C224u;
label_23c224:
    // 0x23c224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c228: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23c228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c22c: 0xc08f096  jal         func_23C258
    ctx->pc = 0x23C22Cu;
    SET_GPR_U32(ctx, 31, 0x23C234u);
    ctx->pc = 0x23C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C22Cu;
    // 0x23c230: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C258u, 0x23C22Cu, 0x23C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C234u;
label_23c234:
    // 0x23c234: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23C234u;
    SET_GPR_U32(ctx, 31, 0x23C23Cu);
    ctx->pc = 0x23C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C234u;
    // 0x23c238: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23C234u, 0x23C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C23Cu;
label_23c23c:
    // 0x23c23c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c240: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23c240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c244: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c24c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23c24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c250: 0x3e00008  jr          $ra
    ctx->pc = 0x23C250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C258u;
}
