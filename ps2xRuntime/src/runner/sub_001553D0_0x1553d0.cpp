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

// Function: sub_001553D0
// Address: 0x1553d0 - 0x155470
void sub_001553D0_0x1553d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001553D0_0x1553d0");
#endif

    switch (ctx->pc) {
        case 0x1553e8u: goto label_1553e8;
        case 0x155408u: goto label_155408;
        case 0x15541cu: goto label_15541c;
        case 0x155438u: goto label_155438;
        default: break;
    }

    ctx->pc = 0x1553d0u;

    // 0x1553d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1553d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1553d4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1553d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1553d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1553d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1553dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1553dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1553e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1553e4: 0x2463f090  addiu       $v1, $v1, -0xF70
    ctx->pc = 0x1553e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963344));
label_1553e8:
    // 0x1553e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1553ec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1553ECu;
    {
        const bool branch_taken_0x1553ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553ECu;
        // 0x1553f0: 0x3c020080  lui         $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553ec) {
            ctx->pc = 0x155448u;
            goto label_155448;
        }
    }
    ctx->pc = 0x1553F4u;
    // 0x1553f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1553f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1553f8: 0x2442f090  addiu       $v0, $v0, -0xF70
    ctx->pc = 0x1553f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963344));
    // 0x1553fc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1553fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155400: 0xc08c550  jal         func_231540
    ctx->pc = 0x155400u;
    SET_GPR_U32(ctx, 31, 0x155408u);
    ctx->pc = 0x155404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155400u;
    // 0x155404: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231540u, 0x155400u, 0x155408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155408u;
label_155408:
    { static uint64_t last[3]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[3]={(uint64_t)((GPR_U32(ctx,16)-0x7ff090u)/4),(uint64_t)(READ32(GPR_U32(ctx,16))),(uint64_t)(GPR_U32(ctx,2)),}; bool chg=first; for(int i=0;i<3;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<40) { ++lines; first=false; for(int i=0;i<3;++i) last[i]=cur[i]; fprintf(stderr,"[px adxstat] hit=%u " "slot=%llu h=0x%llx st=%llu" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2]); } }
    // 0x155408: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x155408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15540c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15540Cu;
    {
        const bool branch_taken_0x15540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15540c) {
            ctx->pc = 0x155428u;
            goto label_155428;
        }
    }
    ctx->pc = 0x155414u;
    // 0x155414: 0xc08c550  jal         func_231540
    ctx->pc = 0x155414u;
    SET_GPR_U32(ctx, 31, 0x15541Cu);
    ctx->pc = 0x155418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155414u;
    // 0x155418: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231540u, 0x155414u, 0x15541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15541Cu;
label_15541c:
    // 0x15541c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15541cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155420: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x155420u;
    {
        const bool branch_taken_0x155420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x155420) {
            ctx->pc = 0x155430u;
            goto label_155430;
        }
    }
    ctx->pc = 0x155428u;
label_155428:
    // 0x155428: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x155428u;
    {
        const bool branch_taken_0x155428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155428u;
        // 0x15542c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155428) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x155430u;
label_155430:
    // 0x155430: 0xc08c1c2  jal         func_230708
    ctx->pc = 0x155430u;
    SET_GPR_U32(ctx, 31, 0x155438u);
    ctx->pc = 0x155434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155430u;
    // 0x155434: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230708u, 0x155430u, 0x155438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155438u;
label_155438:
    // 0x155438: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x155438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x15543c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15543Cu;
    {
        const bool branch_taken_0x15543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15543Cu;
        // 0x155440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15543c) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x155444u;
    // 0x155444: 0x0  nop
    ctx->pc = 0x155444u;
    // NOP
label_155448:
    // 0x155448: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x155448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15544c: 0x2c820024  sltiu       $v0, $a0, 0x24
    ctx->pc = 0x15544cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x155450: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x155450u;
    {
        const bool branch_taken_0x155450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155450u;
        // 0x155454: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155450) {
            ctx->pc = 0x1553E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1553e8;
        }
    }
    ctx->pc = 0x155458u;
    { static uint64_t last[1]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[1]={(uint64_t)(READ32(GPR_U32(ctx,28)-0x7a44u)),}; bool chg=first; for(int i=0;i<1;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<20) { ++lines; first=false; for(int i=0;i<1;++i) last[i]=cur[i]; fprintf(stderr,"[px pending] hit=%u " "gp7a44=0x%llx" "\n",hits,(unsigned long long)cur[0]); } }
    // 0x155458: 0x8f8285bc  lw          $v0, -0x7A44($gp)
    ctx->pc = 0x155458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
    // 0x15545c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15545cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_155460:
    // 0x155460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155468: 0x3e00008  jr          $ra
    ctx->pc = 0x155468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155468u;
        // 0x15546c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155470u;
}
