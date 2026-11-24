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

// Function: sub_00135930
// Address: 0x135930 - 0x135978
void sub_00135930_0x135930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135930_0x135930");
#endif

    switch (ctx->pc) {
        case 0x135954u: goto label_135954;
        case 0x135964u: goto label_135964;
        default: break;
    }

    ctx->pc = 0x135930u;

    // 0x135930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x135930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x135934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x135938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13593c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x135940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135944: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x135944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135948: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x135948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13594c: 0xc04d594  jal         func_135650
    ctx->pc = 0x13594Cu;
    SET_GPR_U32(ctx, 31, 0x135954u);
    ctx->pc = 0x135950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13594Cu;
    // 0x135950: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x13594Cu, 0x135954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135954u;
label_135954:
    // 0x135954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135958: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13595c: 0xc04144e  jal         func_105138
    ctx->pc = 0x13595Cu;
    SET_GPR_U32(ctx, 31, 0x135964u);
    ctx->pc = 0x135960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13595Cu;
    // 0x135960: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x13595Cu, 0x135964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135964u;
label_135964:
    // 0x135964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13596c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13596cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135970: 0x3e00008  jr          $ra
    ctx->pc = 0x135970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135970u;
        // 0x135974: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135978u;
}
