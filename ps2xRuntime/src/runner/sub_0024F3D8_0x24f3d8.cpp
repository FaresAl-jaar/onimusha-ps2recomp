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

// Function: sub_0024F3D8
// Address: 0x24f3d8 - 0x24f43c
void sub_0024F3D8_0x24f3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F3D8_0x24f3d8");
#endif

    switch (ctx->pc) {
        case 0x24f3d8u: goto label_24f3d8;
        case 0x24f3dcu: goto label_24f3dc;
        case 0x24f3e0u: goto label_24f3e0;
        case 0x24f3e4u: goto label_24f3e4;
        case 0x24f3e8u: goto label_24f3e8;
        case 0x24f3ecu: goto label_24f3ec;
        case 0x24f3f0u: goto label_24f3f0;
        case 0x24f3f4u: goto label_24f3f4;
        case 0x24f3f8u: goto label_24f3f8;
        case 0x24f3fcu: goto label_24f3fc;
        case 0x24f400u: goto label_24f400;
        case 0x24f404u: goto label_24f404;
        case 0x24f408u: goto label_24f408;
        case 0x24f40cu: goto label_24f40c;
        case 0x24f410u: goto label_24f410;
        case 0x24f414u: goto label_24f414;
        case 0x24f418u: goto label_24f418;
        case 0x24f41cu: goto label_24f41c;
        case 0x24f420u: goto label_24f420;
        case 0x24f424u: goto label_24f424;
        case 0x24f428u: goto label_24f428;
        case 0x24f42cu: goto label_24f42c;
        case 0x24f430u: goto label_24f430;
        case 0x24f434u: goto label_24f434;
        case 0x24f438u: goto label_24f438;
        default: break;
    }

    ctx->pc = 0x24f3d8u;

label_24f3d8:
    // 0x24f3d8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24f3dc:
    // 0x24f3dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24f3dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24f3e0:
    // 0x24f3e0: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29912)));
label_24f3e4:
    // 0x24f3e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f3e8:
    // 0x24f3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24f3ec:
    // 0x24f3ec: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_24f3f0:
    if (ctx->pc == 0x24F3F0u) {
        ctx->pc = 0x24F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3ECu;
        // 0x24f3f0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F3F4u;
        goto label_24f3f4;
    }
    ctx->pc = 0x24F3ECu;
    {
        const bool branch_taken_0x24f3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3ECu;
        // 0x24f3f0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3ec) {
            ctx->pc = 0x24F404u;
            goto label_24f404;
        }
    }
    ctx->pc = 0x24F3F4u;
label_24f3f4:
    // 0x24f3f4: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
label_24f3f8:
    // 0x24f3f8: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29904)));
label_24f3fc:
    // 0x24f3fc: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_24f400:
    if (ctx->pc == 0x24F400u) {
        ctx->pc = 0x24F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3FCu;
        // 0x24f400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F404u;
        goto label_24f404;
    }
    ctx->pc = 0x24F3FCu;
    {
        const bool branch_taken_0x24f3fc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3FCu;
        // 0x24f400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3fc) {
            ctx->pc = 0x24F430u;
            goto label_24f430;
        }
    }
    ctx->pc = 0x24F404u;
label_24f404:
    // 0x24f404: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x24f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_24f408:
    // 0x24f408: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x24f408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24f40c:
    // 0x24f40c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24f410:
    // 0x24f410: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24f414:
    // 0x24f414: 0x40f809  jalr        $v0
label_24f418:
    if (ctx->pc == 0x24F418u) {
        ctx->pc = 0x24F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F414u;
        // 0x24f418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F41Cu;
        goto label_24f41c;
    }
    ctx->pc = 0x24F414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F41Cu);
        ctx->pc = 0x24F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F414u;
        // 0x24f418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F414u, 0x24F41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F41Cu;
label_24f41c:
    // 0x24f41c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x24f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_24f420:
    // 0x24f420: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x24f420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24f424:
    // 0x24f424: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x24f424u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_24f428:
    // 0x24f428: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24f42c:
    // 0x24f42c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x24f42cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_24f430:
    // 0x24f430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24f434:
    // 0x24f434: 0x3e00008  jr          $ra
label_24f438:
    if (ctx->pc == 0x24F438u) {
        ctx->pc = 0x24F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F434u;
        // 0x24f438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F43Cu;
        goto label_fallthrough_0x24f434;
    }
    ctx->pc = 0x24F434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F434u;
        // 0x24f438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24f434:
    ctx->pc = 0x24F43Cu;
}
