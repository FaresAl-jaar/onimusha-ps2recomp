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

// Function: sub_002DD1F0
// Address: 0x2dd1f0 - 0x2dd2b0
void sub_002DD1F0_0x2dd1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD1F0_0x2dd1f0");
#endif

    switch (ctx->pc) {
        case 0x2dd22cu: goto label_2dd22c;
        case 0x2dd244u: goto label_2dd244;
        case 0x2dd25cu: goto label_2dd25c;
        case 0x2dd27cu: goto label_2dd27c;
        case 0x2dd298u: goto label_2dd298;
        default: break;
    }

    ctx->pc = 0x2dd1f0u;

    // 0x2dd1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dd1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dd1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dd200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd204: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DD204u;
    {
        const bool branch_taken_0x2dd204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD204u;
        // 0x2dd208: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd204) {
            ctx->pc = 0x2DD298u;
            goto label_2dd298;
        }
    }
    ctx->pc = 0x2DD20Cu;
    // 0x2dd20c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dd210: 0x244279a0  addiu       $v0, $v0, 0x79A0
    ctx->pc = 0x2dd210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31136));
    // 0x2dd214: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2dd214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2dd218: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x2dd218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2dd21c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD21Cu;
    {
        const bool branch_taken_0x2dd21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd21c) {
            ctx->pc = 0x2DD230u;
            goto label_2dd230;
        }
    }
    ctx->pc = 0x2DD224u;
    // 0x2dd224: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DD224u;
    SET_GPR_U32(ctx, 31, 0x2DD22Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DD224u, 0x2DD22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD22Cu;
label_2dd22c:
    // 0x2dd22c: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2dd22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
label_2dd230:
    // 0x2dd230: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x2dd230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x2dd234: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD234u;
    {
        const bool branch_taken_0x2dd234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd234) {
            ctx->pc = 0x2DD248u;
            goto label_2dd248;
        }
    }
    ctx->pc = 0x2DD23Cu;
    // 0x2dd23c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DD23Cu;
    SET_GPR_U32(ctx, 31, 0x2DD244u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DD23Cu, 0x2DD244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD244u;
label_2dd244:
    // 0x2dd244: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x2dd244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
label_2dd248:
    // 0x2dd248: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x2dd248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2dd24c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD24Cu;
    {
        const bool branch_taken_0x2dd24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd24c) {
            ctx->pc = 0x2DD260u;
            goto label_2dd260;
        }
    }
    ctx->pc = 0x2DD254u;
    // 0x2dd254: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DD254u;
    SET_GPR_U32(ctx, 31, 0x2DD25Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DD254u, 0x2DD25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD25Cu;
label_2dd25c:
    // 0x2dd25c: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x2dd25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_2dd260:
    // 0x2dd260: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD260u;
    {
        const bool branch_taken_0x2dd260 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD260u;
        // 0x2dd264: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd260) {
            ctx->pc = 0x2DD280u;
            goto label_2dd280;
        }
    }
    ctx->pc = 0x2DD268u;
    // 0x2dd268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd26c: 0x244279c0  addiu       $v0, $v0, 0x79C0
    ctx->pc = 0x2dd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31168));
    // 0x2dd270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd274: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2DD274u;
    SET_GPR_U32(ctx, 31, 0x2DD27Cu);
    ctx->pc = 0x2DD278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD274u;
    // 0x2dd278: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2DD274u, 0x2DD27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD27Cu;
label_2dd27c:
    // 0x2dd27c: 0x0  nop
    ctx->pc = 0x2dd27cu;
    // NOP
label_2dd280:
    // 0x2dd280: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dd280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dd284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dd284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dd288: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD288u;
    {
        const bool branch_taken_0x2dd288 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD288u;
        // 0x2dd28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd288) {
            ctx->pc = 0x2DD298u;
            goto label_2dd298;
        }
    }
    ctx->pc = 0x2DD290u;
    // 0x2dd290: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DD290u;
    SET_GPR_U32(ctx, 31, 0x2DD298u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DD290u, 0x2DD298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD298u;
label_2dd298:
    // 0x2dd298: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dd298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd29c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dd29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd2a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd2a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2A8u;
        // 0x2dd2ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD2B0u;
}
