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

// Function: sub_00357530
// Address: 0x357530 - 0x3575c0
void sub_00357530_0x357530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357530_0x357530");
#endif

    switch (ctx->pc) {
        case 0x35756cu: goto label_35756c;
        case 0x35758cu: goto label_35758c;
        case 0x3575a8u: goto label_3575a8;
        default: break;
    }

    ctx->pc = 0x357530u;

    // 0x357530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x357534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x357538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35753c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35753cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x357540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x357540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357544: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x357544u;
    {
        const bool branch_taken_0x357544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x357548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357544u;
        // 0x357548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357544) {
            ctx->pc = 0x3575A8u;
            goto label_3575a8;
        }
    }
    ctx->pc = 0x35754Cu;
    // 0x35754c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x35754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x357550: 0x24429070  addiu       $v0, $v0, -0x6F90
    ctx->pc = 0x357550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938736));
    // 0x357554: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x357554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x357558: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x357558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x35755c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35755Cu;
    {
        const bool branch_taken_0x35755c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35755c) {
            ctx->pc = 0x357570u;
            goto label_357570;
        }
    }
    ctx->pc = 0x357564u;
    // 0x357564: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x357564u;
    SET_GPR_U32(ctx, 31, 0x35756Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x357564u, 0x35756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35756Cu;
label_35756c:
    // 0x35756c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x35756cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_357570:
    // 0x357570: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x357570u;
    {
        const bool branch_taken_0x357570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x357574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357570u;
        // 0x357574: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357570) {
            ctx->pc = 0x357590u;
            goto label_357590;
        }
    }
    ctx->pc = 0x357578u;
    // 0x357578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35757c: 0x24429090  addiu       $v0, $v0, -0x6F70
    ctx->pc = 0x35757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938768));
    // 0x357580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x357580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357584: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x357584u;
    SET_GPR_U32(ctx, 31, 0x35758Cu);
    ctx->pc = 0x357588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357584u;
    // 0x357588: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x357584u, 0x35758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35758Cu;
label_35758c:
    // 0x35758c: 0x0  nop
    ctx->pc = 0x35758cu;
    // NOP
label_357590:
    // 0x357590: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x357590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x357594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x357594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x357598: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357598u;
    {
        const bool branch_taken_0x357598 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x35759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357598u;
        // 0x35759c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357598) {
            ctx->pc = 0x3575A8u;
            goto label_3575a8;
        }
    }
    ctx->pc = 0x3575A0u;
    // 0x3575a0: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x3575A0u;
    SET_GPR_U32(ctx, 31, 0x3575A8u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x3575A0u, 0x3575A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575A8u;
label_3575a8:
    // 0x3575a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3575a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3575acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3575b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3575b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3575b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3575b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3575b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3575B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3575BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575B8u;
        // 0x3575bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3575B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3575C0u;
}
