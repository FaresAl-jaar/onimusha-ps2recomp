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

// Function: sub_003590B0
// Address: 0x3590b0 - 0x359140
void sub_003590B0_0x3590b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003590B0_0x3590b0");
#endif

    switch (ctx->pc) {
        case 0x3590ecu: goto label_3590ec;
        case 0x35910cu: goto label_35910c;
        case 0x359128u: goto label_359128;
        default: break;
    }

    ctx->pc = 0x3590b0u;

    // 0x3590b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3590b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3590b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3590b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3590b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3590b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3590bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3590bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3590c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3590c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3590c4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3590C4u;
    {
        const bool branch_taken_0x3590c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3590C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590C4u;
        // 0x3590c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590c4) {
            ctx->pc = 0x359128u;
            goto label_359128;
        }
    }
    ctx->pc = 0x3590CCu;
    // 0x3590cc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3590ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x3590d0: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x3590d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
    // 0x3590d4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x3590d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x3590d8: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x3590d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x3590dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3590DCu;
    {
        const bool branch_taken_0x3590dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3590dc) {
            ctx->pc = 0x3590F0u;
            goto label_3590f0;
        }
    }
    ctx->pc = 0x3590E4u;
    // 0x3590e4: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x3590E4u;
    SET_GPR_U32(ctx, 31, 0x3590ECu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x3590E4u, 0x3590ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590ECu;
label_3590ec:
    // 0x3590ec: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x3590ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_3590f0:
    // 0x3590f0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3590F0u;
    {
        const bool branch_taken_0x3590f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3590F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3590F0u;
        // 0x3590f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590f0) {
            ctx->pc = 0x359110u;
            goto label_359110;
        }
    }
    ctx->pc = 0x3590F8u;
    // 0x3590f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3590f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3590fc: 0x24427570  addiu       $v0, $v0, 0x7570
    ctx->pc = 0x3590fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30064));
    // 0x359100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x359100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359104: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x359104u;
    SET_GPR_U32(ctx, 31, 0x35910Cu);
    ctx->pc = 0x359108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359104u;
    // 0x359108: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x359104u, 0x35910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35910Cu;
label_35910c:
    // 0x35910c: 0x0  nop
    ctx->pc = 0x35910cu;
    // NOP
label_359110:
    // 0x359110: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x359110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x359114: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x359114u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x359118: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359118u;
    {
        const bool branch_taken_0x359118 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x35911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359118u;
        // 0x35911c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359118) {
            ctx->pc = 0x359128u;
            goto label_359128;
        }
    }
    ctx->pc = 0x359120u;
    // 0x359120: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x359120u;
    SET_GPR_U32(ctx, 31, 0x359128u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x359120u, 0x359128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359128u;
label_359128:
    // 0x359128: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x359128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35912c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35912cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359138: 0x3e00008  jr          $ra
    ctx->pc = 0x359138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359138u;
        // 0x35913c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359140u;
}
