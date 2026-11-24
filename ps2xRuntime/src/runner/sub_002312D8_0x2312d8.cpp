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

// Function: sub_002312D8
// Address: 0x2312d8 - 0x231318
void sub_002312D8_0x2312d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002312D8_0x2312d8");
#endif

    switch (ctx->pc) {
        case 0x2312ecu: goto label_2312ec;
        default: break;
    }

    ctx->pc = 0x2312d8u;

    // 0x2312d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2312d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2312dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2312dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2312e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2312e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2312e4: 0xc08c4d4  jal         func_231350
    ctx->pc = 0x2312E4u;
    SET_GPR_U32(ctx, 31, 0x2312ECu);
    ctx->pc = 0x2312E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312E4u;
    // 0x2312e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231350u, 0x2312E4u, 0x2312ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312ECu;
label_2312ec:
    // 0x2312ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2312ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2312f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2312f4: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x2312f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x2312f8: 0x24630ffe  addiu       $v1, $v1, 0xFFE
    ctx->pc = 0x2312f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4094));
    // 0x2312fc: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x2312fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x231300: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x231300u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x231304: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x231304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x231308: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x231308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x23130c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23130cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231310: 0x3e00008  jr          $ra
    ctx->pc = 0x231310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231310u;
        // 0x231314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231318u;
}
