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

// Function: sub_00143690
// Address: 0x143690 - 0x143784
void sub_00143690_0x143690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143690_0x143690");
#endif

    switch (ctx->pc) {
        case 0x1436ecu: goto label_1436ec;
        case 0x143708u: goto label_143708;
        case 0x14373cu: goto label_14373c;
        default: break;
    }

    ctx->pc = 0x143690u;

    // 0x143690: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x143690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x143694: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x143694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x143698: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x143698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14369c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14369cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1436a0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1436a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1436a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1436a8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1436a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1436acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1436b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1436b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1436b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1436b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1436b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1436bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1436c0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1436c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1436c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1436c8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1436c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1436ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1436d0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1436d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436d4: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x1436d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1436d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1436dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1436e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436e4: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x1436E4u;
    SET_GPR_U32(ctx, 31, 0x1436ECu);
    ctx->pc = 0x1436E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1436E4u;
    // 0x1436e8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x1436E4u, 0x1436ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436ECu;
label_1436ec:
    // 0x1436ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1436ECu;
    {
        const bool branch_taken_0x1436ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1436F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436ECu;
        // 0x1436f0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436ec) {
            ctx->pc = 0x143718u;
            goto label_143718;
        }
    }
    ctx->pc = 0x1436F4u;
    // 0x1436f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1436f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1436f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1436fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1436fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143700: 0xc050de4  jal         func_143790
    ctx->pc = 0x143700u;
    SET_GPR_U32(ctx, 31, 0x143708u);
    ctx->pc = 0x143704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143700u;
    // 0x143704: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143790u, 0x143700u, 0x143708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143708u;
label_143708:
    // 0x143708: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143708u;
    {
        const bool branch_taken_0x143708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143708) {
            ctx->pc = 0x143718u;
            goto label_143718;
        }
    }
    ctx->pc = 0x143710u;
    // 0x143710: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x143710u;
    {
        const bool branch_taken_0x143710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143710u;
        // 0x143714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143710) {
            ctx->pc = 0x143758u;
            goto label_143758;
        }
    }
    ctx->pc = 0x143718u;
label_143718:
    // 0x143718: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x143718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14371c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14371cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143720: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x143720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143724: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x143724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143728: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x143728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14372c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x14372cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143730: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x143730u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143734: 0xc050e2c  jal         func_1438B0
    ctx->pc = 0x143734u;
    SET_GPR_U32(ctx, 31, 0x14373Cu);
    ctx->pc = 0x143738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143734u;
    // 0x143738: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1438B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1438B0u, 0x143734u, 0x14373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14373Cu;
label_14373c:
    // 0x14373c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14373Cu;
    {
        const bool branch_taken_0x14373c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14373c) {
            ctx->pc = 0x143750u;
            goto label_143750;
        }
    }
    ctx->pc = 0x143744u;
    // 0x143744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143744u;
    {
        const bool branch_taken_0x143744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143744u;
        // 0x143748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143744) {
            ctx->pc = 0x143758u;
            goto label_143758;
        }
    }
    ctx->pc = 0x14374Cu;
    // 0x14374c: 0x0  nop
    ctx->pc = 0x14374cu;
    // NOP
label_143750:
    // 0x143750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143754: 0x0  nop
    ctx->pc = 0x143754u;
    // NOP
label_143758:
    // 0x143758: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x143758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14375c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14375cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x143760: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x143760u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143764: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x143764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143768: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14376c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14376cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14377c: 0x3e00008  jr          $ra
    ctx->pc = 0x14377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14377Cu;
        // 0x143780: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14377Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143784u;
}
