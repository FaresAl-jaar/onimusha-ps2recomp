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

// Function: sub_0011F3D0
// Address: 0x11f3d0 - 0x11f424
void sub_0011F3D0_0x11f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F3D0_0x11f3d0");
#endif

    switch (ctx->pc) {
        case 0x11f3d0u: goto label_11f3d0;
        case 0x11f3d4u: goto label_11f3d4;
        case 0x11f3d8u: goto label_11f3d8;
        case 0x11f3dcu: goto label_11f3dc;
        case 0x11f3e0u: goto label_11f3e0;
        case 0x11f3e4u: goto label_11f3e4;
        case 0x11f3e8u: goto label_11f3e8;
        case 0x11f3ecu: goto label_11f3ec;
        case 0x11f3f0u: goto label_11f3f0;
        case 0x11f3f4u: goto label_11f3f4;
        case 0x11f3f8u: goto label_11f3f8;
        case 0x11f3fcu: goto label_11f3fc;
        case 0x11f400u: goto label_11f400;
        case 0x11f404u: goto label_11f404;
        case 0x11f408u: goto label_11f408;
        case 0x11f40cu: goto label_11f40c;
        case 0x11f410u: goto label_11f410;
        case 0x11f414u: goto label_11f414;
        case 0x11f418u: goto label_11f418;
        case 0x11f41cu: goto label_11f41c;
        case 0x11f420u: goto label_11f420;
        default: break;
    }

    ctx->pc = 0x11f3d0u;

label_11f3d0:
    // 0x11f3d0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_11f3d4:
    // 0x11f3d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f3d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11f3d8:
    // 0x11f3d8: 0x8c454188  lw          $a1, 0x4188($v0)
    ctx->pc = 0x11f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
label_11f3dc:
    // 0x11f3dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11f3e0:
    // 0x11f3e0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_11f3e4:
    if (ctx->pc == 0x11F3E4u) {
        ctx->pc = 0x11F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3E0u;
        // 0x11f3e4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F3E8u;
        goto label_11f3e8;
    }
    ctx->pc = 0x11F3E0u;
    {
        const bool branch_taken_0x11f3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3E0u;
        // 0x11f3e4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3e0) {
            ctx->pc = 0x11F414u;
            goto label_11f414;
        }
    }
    ctx->pc = 0x11F3E8u;
label_11f3e8:
    // 0x11f3e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_11f3ec:
    // 0x11f3ec: 0x8c4341a4  lw          $v1, 0x41A4($v0)
    ctx->pc = 0x11f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16804)));
label_11f3f0:
    // 0x11f3f0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_11f3f4:
    if (ctx->pc == 0x11F3F4u) {
        ctx->pc = 0x11F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3F0u;
        // 0x11f3f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F3F8u;
        goto label_11f3f8;
    }
    ctx->pc = 0x11F3F0u;
    {
        const bool branch_taken_0x11f3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3F0u;
        // 0x11f3f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3f0) {
            ctx->pc = 0x11F418u;
            goto label_11f418;
        }
    }
    ctx->pc = 0x11F3F8u;
label_11f3f8:
    // 0x11f3f8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_11f3fc:
    // 0x11f3fc: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x11f3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11f400:
    // 0x11f400: 0x8c5c418c  lw          $gp, 0x418C($v0)
    ctx->pc = 0x11f400u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16780)));
label_11f404:
    // 0x11f404: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11f404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_11f408:
    // 0x11f408: 0xa0f809  jalr        $a1
label_11f40c:
    if (ctx->pc == 0x11F40Cu) {
        ctx->pc = 0x11F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F408u;
        // 0x11f40c: 0x8c644190  lw          $a0, 0x4190($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F410u;
        goto label_11f410;
    }
    ctx->pc = 0x11F408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F410u);
        ctx->pc = 0x11F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F408u;
        // 0x11f40c: 0x8c644190  lw          $a0, 0x4190($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F408u, 0x11F410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F410u;
label_11f410:
    // 0x11f410: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x11f410u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f414:
    // 0x11f414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11f414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11f418:
    // 0x11f418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11f41c:
    // 0x11f41c: 0x3e00008  jr          $ra
label_11f420:
    if (ctx->pc == 0x11F420u) {
        ctx->pc = 0x11F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F41Cu;
        // 0x11f420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F424u;
        goto label_fallthrough_0x11f41c;
    }
    ctx->pc = 0x11F41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F41Cu;
        // 0x11f420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11f41c:
    ctx->pc = 0x11F424u;
}
