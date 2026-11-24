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

// Function: sub_002B0140
// Address: 0x2b0140 - 0x2b01a8
void sub_002B0140_0x2b0140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0140_0x2b0140");
#endif

    switch (ctx->pc) {
        case 0x2b0168u: goto label_2b0168;
        case 0x2b017cu: goto label_2b017c;
        case 0x2b0184u: goto label_2b0184;
        default: break;
    }

    ctx->pc = 0x2b0140u;

    // 0x2b0140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b0144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b0144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b0148: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b0148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b014c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b0150: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b0150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0158: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b0158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b015c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b015cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0160: 0xc082ae0  jal         func_20AB80
    ctx->pc = 0x2B0160u;
    SET_GPR_U32(ctx, 31, 0x2B0168u);
    ctx->pc = 0x2B0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0160u;
    // 0x2b0164: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB80u, 0x2B0160u, 0x2B0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0168u;
label_2b0168:
    // 0x2b0168: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x2b0168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b016c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B016Cu;
    {
        const bool branch_taken_0x2b016c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b016c) {
            ctx->pc = 0x2B0190u;
            goto label_2b0190;
        }
    }
    ctx->pc = 0x2B0174u;
    // 0x2b0174: 0xc08d4e6  jal         func_235398
    ctx->pc = 0x2B0174u;
    SET_GPR_U32(ctx, 31, 0x2B017Cu);
    ctx->pc = 0x235398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235398u, 0x2B0174u, 0x2B017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B017Cu;
label_2b017c:
    // 0x2b017c: 0xc082ae0  jal         func_20AB80
    ctx->pc = 0x2B017Cu;
    SET_GPR_U32(ctx, 31, 0x2B0184u);
    ctx->pc = 0x2B0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B017Cu;
    // 0x2b0180: 0xae510064  sw          $s1, 0x64($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB80u, 0x2B017Cu, 0x2B0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0184u;
label_2b0184:
    // 0x2b0184: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x2b0184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x2b0188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b018c: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x2b018cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
label_2b0190:
    // 0x2b0190: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b0194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b019c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b019cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b01a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B01A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01A0u;
        // 0x2b01a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B01A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B01A8u;
}
