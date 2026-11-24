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

// Function: sub_0011F350
// Address: 0x11f350 - 0x11f3d0
void sub_0011F350_0x11f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F350_0x11f350");
#endif

    switch (ctx->pc) {
        case 0x11f380u: goto label_11f380;
        case 0x11f388u: goto label_11f388;
        case 0x11f3b4u: goto label_11f3b4;
        default: break;
    }

    ctx->pc = 0x11f350u;

    // 0x11f350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f354: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11f354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11f358: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11f358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f35c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11f35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f360: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11f360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f364: 0x8c4341c8  lw          $v1, 0x41C8($v0)
    ctx->pc = 0x11f364u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4041C8u));
    // 0x11f368: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11f368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f36c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f370: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F370u;
    {
        const bool branch_taken_0x11f370 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x11F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F370u;
        // 0x11f374: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f370) {
            ctx->pc = 0x11F380u;
            goto label_11f380;
        }
    }
    ctx->pc = 0x11F378u;
    // 0x11f378: 0xc047d0a  jal         func_11F428
    ctx->pc = 0x11F378u;
    SET_GPR_U32(ctx, 31, 0x11F380u);
    ctx->pc = 0x11F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F428u, 0x11F378u, 0x11F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F380u;
label_11f380:
    // 0x11f380: 0xc046028  jal         func_1180A0
    ctx->pc = 0x11F380u;
    SET_GPR_U32(ctx, 31, 0x11F388u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x11F380u, 0x11F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F388u;
label_11f388:
    // 0x11f388: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11f388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11f38c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11f390: 0x8cb14188  lw          $s1, 0x4188($a1)
    ctx->pc = 0x11f390u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x694188u));
    // 0x11f394: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11f394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11f398: 0xac904190  sw          $s0, 0x4190($a0)
    ctx->pc = 0x11f398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x694190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x694190u, _value); } while (0);
    // 0x11f39c: 0xacb24188  sw          $s2, 0x4188($a1)
    ctx->pc = 0x11f39cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x694188u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x694188u, _value); } while (0);
    // 0x11f3a0: 0xac7c418c  sw          $gp, 0x418C($v1)
    ctx->pc = 0x11f3a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 28)); ps2TraceGuestWrite(rdram, 0x69418Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x69418Cu, _value); } while (0);
    // 0x11f3a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F3A4u;
    {
        const bool branch_taken_0x11f3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3A4u;
        // 0x11f3a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3a4) {
            ctx->pc = 0x11F3B8u;
            goto label_11f3b8;
        }
    }
    ctx->pc = 0x11F3ACu;
    // 0x11f3ac: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x11F3ACu;
    SET_GPR_U32(ctx, 31, 0x11F3B4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x11F3ACu, 0x11F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3B4u;
label_11f3b4:
    // 0x11f3b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11f3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f3b8:
    // 0x11f3b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f3bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11f3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f3c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11f3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3C8u;
        // 0x11f3cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F3D0u;
}
