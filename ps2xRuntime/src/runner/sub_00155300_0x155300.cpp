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

// Function: sub_00155300
// Address: 0x155300 - 0x155384
void sub_00155300_0x155300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155300_0x155300");
#endif

    switch (ctx->pc) {
        case 0x155364u: goto label_155364;
        default: break;
    }

    ctx->pc = 0x155300u;

    // 0x155300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    { static uint64_t last[6]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[6]={(uint64_t)(GPR_U32(ctx,4)),(uint64_t)(GPR_U32(ctx,5)),(uint64_t)(GPR_U32(ctx,6)),(uint64_t)(GPR_U32(ctx,7)),(uint64_t)(GPR_U32(ctx,8)),(uint64_t)(GPR_U32(ctx,31)),}; bool chg=first; for(int i=0;i<6;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<40) { ++lines; first=false; for(int i=0;i<6;++i) last[i]=cur[i]; fprintf(stderr,"[px enq] hit=%u " "a0=0x%llx a1=0x%llx a2=0x%llx a3=0x%llx t0=0x%llx ra=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4],(unsigned long long)cur[5]); } }
    // 0x155308: 0x8f8485bc  lw          $a0, -0x7A44($gp)
    ctx->pc = 0x155308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
    // 0x15530c: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x15530cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x155310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155310u;
    {
        const bool branch_taken_0x155310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155310u;
        // 0x155314: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155310) {
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x155318u;
    // 0x155318: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x155318u;
    {
        const bool branch_taken_0x155318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155318) {
            ctx->pc = 0x155378u;
            goto label_155378;
        }
    }
    ctx->pc = 0x155320u;
label_155320:
    // 0x155320: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x155320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x155324: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x155324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x155328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15532c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x155330: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155334: 0x2442e810  addiu       $v0, $v0, -0x17F0
    ctx->pc = 0x155334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961168));
    // 0x155338: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x155338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15533c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15533cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155340: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x155340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x155344: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x155344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x155348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15534c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x15534cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x155350: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x155350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x155354: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x155354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x155358: 0xac870060  sw          $a3, 0x60($a0)
    ctx->pc = 0x155358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 7));
    // 0x15535c: 0xc049590  jal         func_125640
    ctx->pc = 0x15535Cu;
    SET_GPR_U32(ctx, 31, 0x155364u);
    ctx->pc = 0x155360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15535Cu;
    // 0x155360: 0xac880064  sw          $t0, 0x64($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x15535Cu, 0x155364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155364u;
label_155364:
    // 0x155364: 0x8f8385bc  lw          $v1, -0x7A44($gp)
    ctx->pc = 0x155364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
    // 0x155368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15536c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155370: 0xaf8385bc  sw          $v1, -0x7A44($gp)
    ctx->pc = 0x155370u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935996), GPR_U32(ctx, 3));
    // 0x155374: 0x0  nop
    ctx->pc = 0x155374u;
    // NOP
label_155378:
    // 0x155378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15537c: 0x3e00008  jr          $ra
    ctx->pc = 0x15537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15537Cu;
        // 0x155380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15537Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155384u;
}
