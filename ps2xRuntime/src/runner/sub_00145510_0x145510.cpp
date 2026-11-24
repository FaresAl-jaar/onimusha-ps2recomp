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

// Function: sub_00145510
// Address: 0x145510 - 0x1455f4
void sub_00145510_0x145510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145510_0x145510");
#endif

    switch (ctx->pc) {
        case 0x145530u: goto label_145530;
        case 0x14553cu: goto label_14553c;
        case 0x145560u: goto label_145560;
        case 0x14556cu: goto label_14556c;
        case 0x145590u: goto label_145590;
        case 0x14559cu: goto label_14559c;
        case 0x1455c0u: goto label_1455c0;
        case 0x1455ccu: goto label_1455cc;
        default: break;
    }

    ctx->pc = 0x145510u;

    // 0x145510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14551c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145520: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x145520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x145524: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x145524u;
    {
        const bool branch_taken_0x145524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x145528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145524u;
        // 0x145528: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145524) {
            ctx->pc = 0x145550u;
            goto label_145550;
        }
    }
    ctx->pc = 0x14552Cu;
    // 0x14552c: 0x0  nop
    ctx->pc = 0x14552cu;
    // NOP
label_145530:
    // 0x145530: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x145530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145534: 0xc051580  jal         func_145600
    ctx->pc = 0x145534u;
    SET_GPR_U32(ctx, 31, 0x14553Cu);
    ctx->pc = 0x145538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145534u;
    // 0x145538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145600u, 0x145534u, 0x14553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14553Cu;
label_14553c:
    // 0x14553c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14553cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145540: 0x0  nop
    ctx->pc = 0x145540u;
    // NOP
    // 0x145544: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x145544u;
    {
        const bool branch_taken_0x145544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145544) {
            ctx->pc = 0x145530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145530;
        }
    }
    ctx->pc = 0x14554Cu;
    // 0x14554c: 0x0  nop
    ctx->pc = 0x14554cu;
    // NOP
label_145550:
    // 0x145550: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x145550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x145554: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x145554u;
    {
        const bool branch_taken_0x145554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x145554) {
            ctx->pc = 0x145580u;
            goto label_145580;
        }
    }
    ctx->pc = 0x14555Cu;
    // 0x14555c: 0x0  nop
    ctx->pc = 0x14555cu;
    // NOP
label_145560:
    // 0x145560: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x145560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145564: 0xc051580  jal         func_145600
    ctx->pc = 0x145564u;
    SET_GPR_U32(ctx, 31, 0x14556Cu);
    ctx->pc = 0x145568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145564u;
    // 0x145568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145600u, 0x145564u, 0x14556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14556Cu;
label_14556c:
    // 0x14556c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14556cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145570: 0x0  nop
    ctx->pc = 0x145570u;
    // NOP
    // 0x145574: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x145574u;
    {
        const bool branch_taken_0x145574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145574) {
            ctx->pc = 0x145560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145560;
        }
    }
    ctx->pc = 0x14557Cu;
    // 0x14557c: 0x0  nop
    ctx->pc = 0x14557cu;
    // NOP
label_145580:
    // 0x145580: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x145580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x145584: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x145584u;
    {
        const bool branch_taken_0x145584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x145584) {
            ctx->pc = 0x1455B0u;
            goto label_1455b0;
        }
    }
    ctx->pc = 0x14558Cu;
    // 0x14558c: 0x0  nop
    ctx->pc = 0x14558cu;
    // NOP
label_145590:
    // 0x145590: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x145590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145594: 0xc051580  jal         func_145600
    ctx->pc = 0x145594u;
    SET_GPR_U32(ctx, 31, 0x14559Cu);
    ctx->pc = 0x145598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145594u;
    // 0x145598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145600u, 0x145594u, 0x14559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14559Cu;
label_14559c:
    // 0x14559c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1455a0: 0x0  nop
    ctx->pc = 0x1455a0u;
    // NOP
    // 0x1455a4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1455A4u;
    {
        const bool branch_taken_0x1455a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1455a4) {
            ctx->pc = 0x145590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145590;
        }
    }
    ctx->pc = 0x1455ACu;
    // 0x1455ac: 0x0  nop
    ctx->pc = 0x1455acu;
    // NOP
label_1455b0:
    // 0x1455b0: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1455b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1455b4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1455B4u;
    {
        const bool branch_taken_0x1455b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1455b4) {
            ctx->pc = 0x1455E0u;
            goto label_1455e0;
        }
    }
    ctx->pc = 0x1455BCu;
    // 0x1455bc: 0x0  nop
    ctx->pc = 0x1455bcu;
    // NOP
label_1455c0:
    // 0x1455c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1455c4: 0xc051580  jal         func_145600
    ctx->pc = 0x1455C4u;
    SET_GPR_U32(ctx, 31, 0x1455CCu);
    ctx->pc = 0x1455C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1455C4u;
    // 0x1455c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145600u, 0x1455C4u, 0x1455CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455CCu;
label_1455cc:
    // 0x1455cc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1455ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1455d0: 0x0  nop
    ctx->pc = 0x1455d0u;
    // NOP
    // 0x1455d4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1455D4u;
    {
        const bool branch_taken_0x1455d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1455d4) {
            ctx->pc = 0x1455C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1455c0;
        }
    }
    ctx->pc = 0x1455DCu;
    // 0x1455dc: 0x0  nop
    ctx->pc = 0x1455dcu;
    // NOP
label_1455e0:
    // 0x1455e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1455e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1455e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1455e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1455e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1455e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1455ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1455ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1455F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455ECu;
        // 0x1455f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1455ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1455F4u;
}
