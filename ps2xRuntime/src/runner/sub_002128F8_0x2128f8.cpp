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

// Function: sub_002128F8
// Address: 0x2128f8 - 0x21296c
void sub_002128F8_0x2128f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002128F8_0x2128f8");
#endif

    switch (ctx->pc) {
        case 0x212910u: goto label_212910;
        case 0x212930u: goto label_212930;
        case 0x212938u: goto label_212938;
        case 0x212954u: goto label_212954;
        default: break;
    }

    ctx->pc = 0x2128f8u;

    // 0x2128f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2128f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2128fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2128fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x212904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x212908: 0xc084ece  jal         func_213B38
    ctx->pc = 0x212908u;
    SET_GPR_U32(ctx, 31, 0x212910u);
    ctx->pc = 0x21290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212908u;
    // 0x21290c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B38u, 0x212908u, 0x212910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212910u;
label_212910:
    // 0x212910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212914: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x212914u;
    {
        const bool branch_taken_0x212914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x212918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212914u;
        // 0x212918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212914) {
            ctx->pc = 0x212928u;
            goto label_212928;
        }
    }
    ctx->pc = 0x21291Cu;
    // 0x21291c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21291Cu;
    {
        const bool branch_taken_0x21291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21291Cu;
        // 0x212920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21291c) {
            ctx->pc = 0x212958u;
            goto label_212958;
        }
    }
    ctx->pc = 0x212924u;
    // 0x212924: 0x0  nop
    ctx->pc = 0x212924u;
    // NOP
label_212928:
    // 0x212928: 0xc084a5c  jal         func_212970
    ctx->pc = 0x212928u;
    SET_GPR_U32(ctx, 31, 0x212930u);
    ctx->pc = 0x212970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212970u, 0x212928u, 0x212930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212930u;
label_212930:
    // 0x212930: 0xc084a74  jal         func_2129D0
    ctx->pc = 0x212930u;
    SET_GPR_U32(ctx, 31, 0x212938u);
    ctx->pc = 0x212934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212930u;
    // 0x212934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129D0u, 0x212930u, 0x212938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212938u;
label_212938:
    // 0x212938: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x212938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21293c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21293cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212940: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x212940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212944: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212944u;
    {
        const bool branch_taken_0x212944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x212948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212944u;
        // 0x212948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212944) {
            ctx->pc = 0x212954u;
            goto label_212954;
        }
    }
    ctx->pc = 0x21294Cu;
    // 0x21294c: 0xc084f78  jal         func_213DE0
    ctx->pc = 0x21294Cu;
    SET_GPR_U32(ctx, 31, 0x212954u);
    ctx->pc = 0x213DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213DE0u, 0x21294Cu, 0x212954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212954u;
label_212954:
    // 0x212954: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x212954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_212958:
    // 0x212958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21295c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21295cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212964: 0x3e00008  jr          $ra
    ctx->pc = 0x212964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212964u;
        // 0x212968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21296Cu;
}
