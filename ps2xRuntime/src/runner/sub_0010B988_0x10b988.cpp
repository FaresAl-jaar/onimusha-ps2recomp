#include <cstdio>
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

// Function: sub_0010B988
// Address: 0x10b988 - 0x10b9d0
void sub_0010B988_0x10b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B988_0x10b988");
#endif

    switch (ctx->pc) {
        case 0x10b9c4u: goto label_10b9c4;
        default: break;
    }

    ctx->pc = 0x10b988u;

    // 0x10b988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b98c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10b990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b994: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10b994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10b998: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10b998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10b99c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10b9a0: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x10b9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10b9a4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x10b9a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10b9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b9ac: 0xace200c4  sw          $v0, 0xC4($a3)
    ctx->pc = 0x10b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 196), GPR_U32(ctx, 2));
    // 0x10b9b0: 0xace500ec  sw          $a1, 0xEC($a3)
    ctx->pc = 0x10b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 236), GPR_U32(ctx, 5));
    // 0x10b9b4: 0xace600f8  sw          $a2, 0xF8($a3)
    ctx->pc = 0x10b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 6));
    // 0x10b9b8: 0xace000f0  sw          $zero, 0xF0($a3)
    ctx->pc = 0x10b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
    // 0x10b9bc: 0xc042c3a  jal         func_10B0E8
    ctx->pc = 0x10B9BCu;
    SET_GPR_U32(ctx, 31, 0x10B9C4u);
    ctx->pc = 0x10B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B9BCu;
    // 0x10b9c0: 0xace000f4  sw          $zero, 0xF4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B0E8u, 0x10B9BCu, 0x10B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B9C4u;
label_10b9c4:
    { static uint64_t last[1]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[1]={(uint64_t)((int64_t)GPR_S32(ctx,2)),}; bool chg=first; for(int i=0;i<1;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<200) { ++lines; first=false; for(int i=0;i<1;++i) last[i]=cur[i]; fprintf(stderr,"[px getpic] hit=%u " "v0=%lld" "\n",hits,(unsigned long long)cur[0]); } }
    // 0x10b9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9C8u;
        // 0x10b9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B9D0u;
}
