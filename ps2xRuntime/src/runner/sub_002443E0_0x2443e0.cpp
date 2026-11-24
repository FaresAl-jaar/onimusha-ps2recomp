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

// Function: sub_002443E0
// Address: 0x2443e0 - 0x244444
void sub_002443E0_0x2443e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002443E0_0x2443e0");
#endif

    switch (ctx->pc) {
        case 0x2443e0u: goto label_2443e0;
        case 0x2443e4u: goto label_2443e4;
        case 0x2443e8u: goto label_2443e8;
        case 0x2443ecu: goto label_2443ec;
        case 0x2443f0u: goto label_2443f0;
        case 0x2443f4u: goto label_2443f4;
        case 0x2443f8u: goto label_2443f8;
        case 0x2443fcu: goto label_2443fc;
        case 0x244400u: goto label_244400;
        case 0x244404u: goto label_244404;
        case 0x244408u: goto label_244408;
        case 0x24440cu: goto label_24440c;
        case 0x244410u: goto label_244410;
        case 0x244414u: goto label_244414;
        case 0x244418u: goto label_244418;
        case 0x24441cu: goto label_24441c;
        case 0x244420u: goto label_244420;
        case 0x244424u: goto label_244424;
        case 0x244428u: goto label_244428;
        case 0x24442cu: goto label_24442c;
        case 0x244430u: goto label_244430;
        case 0x244434u: goto label_244434;
        case 0x244438u: goto label_244438;
        case 0x24443cu: goto label_24443c;
        case 0x244440u: goto label_244440;
        default: break;
    }

    ctx->pc = 0x2443e0u;

label_2443e0:
    // 0x2443e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2443e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2443e4:
    // 0x2443e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2443e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2443e8:
    // 0x2443e8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2443e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2443ec:
    // 0x2443ec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2443f0:
    if (ctx->pc == 0x2443F0u) {
        ctx->pc = 0x2443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443ECu;
        // 0x2443f0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443F4u;
        goto label_2443f4;
    }
    ctx->pc = 0x2443ECu;
    {
        const bool branch_taken_0x2443ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443ECu;
        // 0x2443f0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443ec) {
            ctx->pc = 0x244408u;
            goto label_244408;
        }
    }
    ctx->pc = 0x2443F4u;
label_2443f4:
    // 0x2443f4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2443f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2443f8:
    // 0x2443f8: 0xc090d8a  jal         func_243628
label_2443fc:
    if (ctx->pc == 0x2443FCu) {
        ctx->pc = 0x2443FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443F8u;
        // 0x2443fc: 0x2484be68  addiu       $a0, $a0, -0x4198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244400u;
        goto label_244400;
    }
    ctx->pc = 0x2443F8u;
    SET_GPR_U32(ctx, 31, 0x244400u);
    ctx->pc = 0x2443FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443F8u;
    // 0x2443fc: 0x2484be68  addiu       $a0, $a0, -0x4198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2443F8u, 0x244400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244400u;
label_244400:
    // 0x244400: 0x1000000c  b           . + 4 + (0xC << 2)
label_244404:
    if (ctx->pc == 0x244404u) {
        ctx->pc = 0x244404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244400u;
        // 0x244404: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244408u;
        goto label_244408;
    }
    ctx->pc = 0x244400u;
    {
        const bool branch_taken_0x244400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244400u;
        // 0x244404: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244400) {
            ctx->pc = 0x244434u;
            goto label_244434;
        }
    }
    ctx->pc = 0x244408u;
label_244408:
    // 0x244408: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24440c:
    // 0x24440c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x24440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_244410:
    // 0x244410: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_244414:
    if (ctx->pc == 0x244414u) {
        ctx->pc = 0x244414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244410u;
        // 0x244414: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244418u;
        goto label_244418;
    }
    ctx->pc = 0x244410u;
    {
        const bool branch_taken_0x244410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244410) {
            ctx->pc = 0x244414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244410u;
            // 0x244414: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244428u;
            goto label_244428;
        }
    }
    ctx->pc = 0x244418u;
label_244418:
    // 0x244418: 0x40f809  jalr        $v0
label_24441c:
    if (ctx->pc == 0x24441Cu) {
        ctx->pc = 0x24441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244418u;
        // 0x24441c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244420u;
        goto label_244420;
    }
    ctx->pc = 0x244418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244420u);
        ctx->pc = 0x24441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244418u;
        // 0x24441c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244418u, 0x244420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244420u;
label_244420:
    // 0x244420: 0x10000003  b           . + 4 + (0x3 << 2)
label_244424:
    if (ctx->pc == 0x244424u) {
        ctx->pc = 0x244424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244420u;
        // 0x244424: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244428u;
        goto label_244428;
    }
    ctx->pc = 0x244420u;
    {
        const bool branch_taken_0x244420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244420u;
        // 0x244424: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244420) {
            ctx->pc = 0x244430u;
            goto label_244430;
        }
    }
    ctx->pc = 0x244428u;
label_244428:
    // 0x244428: 0xc090d8a  jal         func_243628
label_24442c:
    if (ctx->pc == 0x24442Cu) {
        ctx->pc = 0x24442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244428u;
        // 0x24442c: 0x2484be88  addiu       $a0, $a0, -0x4178 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244430u;
        goto label_244430;
    }
    ctx->pc = 0x244428u;
    SET_GPR_U32(ctx, 31, 0x244430u);
    ctx->pc = 0x24442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244428u;
    // 0x24442c: 0x2484be88  addiu       $a0, $a0, -0x4178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244428u, 0x244430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244430u;
label_244430:
    { static uint64_t last[3]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[3]={(uint64_t)((int64_t)GPR_S32(ctx,16)),(uint64_t)(GPR_U32(ctx,4)),(uint64_t)(READ32(GPR_U32(ctx,29)+8)),}; bool chg=first; for(int i=0;i<3;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<100000) { ++lines; first=false; for(int i=0;i<3;++i) last[i]=cur[i]; fprintf(stderr,"[px fsstat] hit=%u " "stat=%lld h=0x%llx ra=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2]); } }
    // 0x244430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244434:
    // 0x244434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244438:
    // 0x244438: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x244438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24443c:
    // 0x24443c: 0x3e00008  jr          $ra
label_244440:
    if (ctx->pc == 0x244440u) {
        ctx->pc = 0x244440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24443Cu;
        // 0x244440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244444u;
        goto label_fallthrough_0x24443c;
    }
    ctx->pc = 0x24443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24443Cu;
        // 0x244440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24443c:
    ctx->pc = 0x244444u;
}
