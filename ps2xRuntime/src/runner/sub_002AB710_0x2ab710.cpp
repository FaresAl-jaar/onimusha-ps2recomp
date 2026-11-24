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

// Function: sub_002AB710
// Address: 0x2ab710 - 0x2ab758
void sub_002AB710_0x2ab710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB710_0x2ab710");
#endif

    switch (ctx->pc) {
        case 0x2ab74cu: goto label_2ab74c;
        default: break;
    }

    ctx->pc = 0x2ab710u;

    // 0x2ab710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab714: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ab714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab718: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab718u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab71c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab720: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x2ab720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x2ab724: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ab724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab728: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab728u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab72c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab72cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab730: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab738: 0x34456f80  ori         $a1, $v0, 0x6F80
    ctx->pc = 0x2ab738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28544);
    // 0x2ab73c: 0x2406068c  addiu       $a2, $zero, 0x68C
    ctx->pc = 0x2ab73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1676));
    // 0x2ab740: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab744: 0xc097c20  jal         func_25F080
    ctx->pc = 0x2AB744u;
    SET_GPR_U32(ctx, 31, 0x2AB74Cu);
    ctx->pc = 0x2AB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB744u;
    // 0x2ab748: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F080u, 0x2AB744u, 0x2AB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB74Cu;
label_2ab74c:
    // 0x2ab74c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab750: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB750u;
        // 0x2ab754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB758u;
}
