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

// Function: sub_0012F008
// Address: 0x12f008 - 0x12f05c
void sub_0012F008_0x12f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F008_0x12f008");
#endif

    switch (ctx->pc) {
        case 0x12f020u: goto label_12f020;
        case 0x12f050u: goto label_12f050;
        default: break;
    }

    ctx->pc = 0x12f008u;

    // 0x12f008: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f00c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x12f00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x12f010: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f018: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12F018u;
    SET_GPR_U32(ctx, 31, 0x12F020u);
    ctx->pc = 0x12F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F018u;
    // 0x12f01c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12F018u, 0x12F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F020u;
label_12f020:
    // 0x12f020: 0xdfae0010  ld          $t6, 0x10($sp)
    ctx->pc = 0x12f020u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f024: 0x3c0f3fff  lui         $t7, 0x3FFF
    ctx->pc = 0x12f024u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16383 << 16));
    // 0x12f028: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12f028u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12f02c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f030: 0xe38b8  dsll        $a3, $t6, 2
    ctx->pc = 0x12f030u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) << 2);
    // 0x12f034: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x12f034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12f038: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x12f038u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x12f03c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x12f03cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f040: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x12f040u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x12f044: 0x34ed0001  ori         $t5, $a3, 0x1
    ctx->pc = 0x12f044u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x12f048: 0xc04b93a  jal         func_12E4E8
    ctx->pc = 0x12F048u;
    SET_GPR_U32(ctx, 31, 0x12F050u);
    ctx->pc = 0x12F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F048u;
    // 0x12f04c: 0x1ae380b  movn        $a3, $t5, $t6 (Delay Slot)
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E4E8u, 0x12F048u, 0x12F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F050u;
label_12f050:
    // 0x12f050: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f054: 0x3e00008  jr          $ra
    ctx->pc = 0x12F054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F054u;
        // 0x12f058: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F05Cu;
}
