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

// Function: sub_002B0470
// Address: 0x2b0470 - 0x2b04f4
void sub_002B0470_0x2b0470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0470_0x2b0470");
#endif

    switch (ctx->pc) {
        case 0x2b048cu: goto label_2b048c;
        default: break;
    }

    ctx->pc = 0x2b0470u;

    // 0x2b0470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b0470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b0474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0478: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b0478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b047c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B047Cu;
    {
        const bool branch_taken_0x2b047c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b047c) {
            ctx->pc = 0x2B04D8u;
            goto label_2b04d8;
        }
    }
    ctx->pc = 0x2B0484u;
    // 0x2b0484: 0xc081dae  jal         func_2076B8
    ctx->pc = 0x2B0484u;
    SET_GPR_U32(ctx, 31, 0x2B048Cu);
    ctx->pc = 0x2B0488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0484u;
    // 0x2b0488: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076B8u, 0x2B0484u, 0x2B048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B048Cu;
label_2b048c:
    { static uint64_t last[2]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[2]={(uint64_t)(GPR_U32(ctx,2)),(uint64_t)(GPR_U32(ctx,4)),}; bool chg=first; for(int i=0;i<2;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<40) { ++lines; first=false; for(int i=0;i<2;++i) last[i]=cur[i]; fprintf(stderr,"[px mwstat] hit=%u " "stat=%llu h=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1]); } }
    // 0x2b048c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b048cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b0490: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b0490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b0494: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0494u;
    {
        const bool branch_taken_0x2b0494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0494) {
            ctx->pc = 0x2B04A8u;
            goto label_2b04a8;
        }
    }
    ctx->pc = 0x2B049Cu;
    // 0x2b049c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B049Cu;
    {
        const bool branch_taken_0x2b049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B049Cu;
        // 0x2b04a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b049c) {
            ctx->pc = 0x2B04E8u;
            goto label_2b04e8;
        }
    }
    ctx->pc = 0x2B04A4u;
    // 0x2b04a4: 0x0  nop
    ctx->pc = 0x2b04a4u;
    // NOP
label_2b04a8:
    // 0x2b04a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b04ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B04ACu;
    {
        const bool branch_taken_0x2b04ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04ACu;
        // 0x2b04b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04ac) {
            ctx->pc = 0x2B04C0u;
            goto label_2b04c0;
        }
    }
    ctx->pc = 0x2B04B4u;
    // 0x2b04b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B04B4u;
    {
        const bool branch_taken_0x2b04b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b04b4) {
            ctx->pc = 0x2B04E8u;
            goto label_2b04e8;
        }
    }
    ctx->pc = 0x2B04BCu;
    // 0x2b04bc: 0x0  nop
    ctx->pc = 0x2b04bcu;
    // NOP
label_2b04c0:
    // 0x2b04c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b04c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b04c4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B04C4u;
    {
        const bool branch_taken_0x2b04c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b04c4) {
            ctx->pc = 0x2B04E0u;
            goto label_2b04e0;
        }
    }
    ctx->pc = 0x2B04CCu;
    // 0x2b04cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B04CCu;
    {
        const bool branch_taken_0x2b04cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b04cc) {
            ctx->pc = 0x2B04E0u;
            goto label_2b04e0;
        }
    }
    ctx->pc = 0x2B04D4u;
    // 0x2b04d4: 0x0  nop
    ctx->pc = 0x2b04d4u;
    // NOP
label_2b04d8:
    // 0x2b04d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B04D8u;
    {
        const bool branch_taken_0x2b04d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04D8u;
        // 0x2b04dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04d8) {
            ctx->pc = 0x2B04E8u;
            goto label_2b04e8;
        }
    }
    ctx->pc = 0x2B04E0u;
label_2b04e0:
    // 0x2b04e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b04e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b04e4: 0x0  nop
    ctx->pc = 0x2b04e4u;
    // NOP
label_2b04e8:
    // 0x2b04e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b04e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b04ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B04ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04ECu;
        // 0x2b04f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B04ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B04F4u;
}
