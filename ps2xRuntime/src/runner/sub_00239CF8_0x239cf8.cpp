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

// Function: sub_00239CF8
// Address: 0x239cf8 - 0x239d28
void sub_00239CF8_0x239cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239CF8_0x239cf8");
#endif

    switch (ctx->pc) {
        case 0x239d10u: goto label_239d10;
        default: break;
    }

    ctx->pc = 0x239cf8u;

    // 0x239cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239cfc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x239CFCu;
    {
        const bool branch_taken_0x239cfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x239D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CFCu;
        // 0x239d00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cfc) {
            ctx->pc = 0x239D18u;
            goto label_239d18;
        }
    }
    ctx->pc = 0x239D04u;
    // 0x239d04: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x239d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x239d08: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x239D08u;
    SET_GPR_U32(ctx, 31, 0x239D10u);
    ctx->pc = 0x239D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D08u;
    // 0x239d0c: 0x2484b0a8  addiu       $a0, $a0, -0x4F58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x239D08u, 0x239D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D10u;
label_239d10:
    // 0x239d10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x239D10u;
    {
        const bool branch_taken_0x239d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D10u;
        // 0x239d14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d10) {
            ctx->pc = 0x239D1Cu;
            goto label_239d1c;
        }
    }
    ctx->pc = 0x239D18u;
label_239d18:
    // 0x239d18: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x239d18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_239d1c:
    { static uint64_t last[3]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[3]={(uint64_t)(GPR_U32(ctx,4)),(uint64_t)((int64_t)GPR_S32(ctx,2)),(uint64_t)(GPR_U32(ctx,31)),}; bool chg=first; for(int i=0;i<3;++i) chg = chg || cur[i]!=last[i]; if (chg && cur[2]!=0x239cdcu && lines<300) { ++lines; first=false; for(int i=0;i<3;++i) last[i]=cur[i]; fprintf(stderr,"[px adxtstat] hit=%u " "h=0x%llx stat=%lld ra=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2]); } }
    // 0x239d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239d20: 0x3e00008  jr          $ra
    ctx->pc = 0x239D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D20u;
        // 0x239d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239D28u;
}
