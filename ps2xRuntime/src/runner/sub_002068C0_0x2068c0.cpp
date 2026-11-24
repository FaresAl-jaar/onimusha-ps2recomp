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

// Function: sub_002068C0
// Address: 0x2068c0 - 0x206910
void sub_002068C0_0x2068c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002068C0_0x2068c0");
#endif

    switch (ctx->pc) {
        case 0x2068e4u: goto label_2068e4;
        default: break;
    }

    ctx->pc = 0x2068c0u;

    // 0x2068c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2068c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2068c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2068c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2068c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2068c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2068ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2068d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2068d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2068d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2068d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2068d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2068dc: 0xc081a0a  jal         func_206828
    ctx->pc = 0x2068DCu;
    SET_GPR_U32(ctx, 31, 0x2068E4u);
    ctx->pc = 0x2068E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068DCu;
    // 0x2068e0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206828u, 0x2068DCu, 0x2068E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068E4u;
label_2068e4:
    // 0x2068e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2068e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2068e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2068e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2068ec: 0xae1101b4  sw          $s1, 0x1B4($s0)
    ctx->pc = 0x2068ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 17));
    // 0x2068f0: 0xae1201b8  sw          $s2, 0x1B8($s0)
    ctx->pc = 0x2068f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 18));
    // 0x2068f4: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x2068f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x2068f8: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x2068f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x2068fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2068fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206908: 0x3e00008  jr          $ra
    ctx->pc = 0x206908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206908u;
        // 0x20690c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206910u;
}
