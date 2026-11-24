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

// Function: sub_00208870
// Address: 0x208870 - 0x2088e4
void sub_00208870_0x208870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208870_0x208870");
#endif

    switch (ctx->pc) {
        case 0x20889cu: goto label_20889c;
        case 0x2088c8u: goto label_2088c8;
        default: break;
    }

    ctx->pc = 0x208870u;

    // 0x208870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208874: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x208874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20887c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20887cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208888: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x208888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x20888c: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20888Cu;
    {
        const bool branch_taken_0x20888c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20888c) {
            ctx->pc = 0x208890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20888Cu;
            // 0x208890: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2088C0u;
            goto label_2088c0;
        }
    }
    ctx->pc = 0x208894u;
    // 0x208894: 0xc082262  jal         func_208988
    ctx->pc = 0x208894u;
    SET_GPR_U32(ctx, 31, 0x20889Cu);
    ctx->pc = 0x208898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208894u;
    // 0x208898: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208988u, 0x208894u, 0x20889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20889Cu;
label_20889c:
    // 0x20889c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20889cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2088a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2088a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2088A4u;
    {
        const bool branch_taken_0x2088a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2088A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088A4u;
        // 0x2088a8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088a4) {
            ctx->pc = 0x2088B8u;
            goto label_2088b8;
        }
    }
    ctx->pc = 0x2088ACu;
    // 0x2088ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2088ACu;
    {
        const bool branch_taken_0x2088ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088ACu;
        // 0x2088b0: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088ac) {
            ctx->pc = 0x2088BCu;
            goto label_2088bc;
        }
    }
    ctx->pc = 0x2088B4u;
    // 0x2088b4: 0x0  nop
    ctx->pc = 0x2088b4u;
    // NOP
label_2088b8:
    // 0x2088b8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2088b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_2088bc:
    // 0x2088bc: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x2088bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2088c0:
    // 0x2088c0: 0xc0821e6  jal         func_208798
    ctx->pc = 0x2088C0u;
    SET_GPR_U32(ctx, 31, 0x2088C8u);
    ctx->pc = 0x2088C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088C0u;
    // 0x2088c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x2088C0u, 0x2088C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088C8u;
label_2088c8:
    // 0x2088c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2088c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2088ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2088d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2088d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2088d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2088d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2088d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2088dc: 0x80898da  j           func_226368
    ctx->pc = 0x2088DCu;
    ctx->pc = 0x2088E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088DCu;
    // 0x2088e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226368u;
    sub_00226368_0x226368(rdram, ctx, runtime); return;
    ctx->pc = 0x2088E4u;
}
