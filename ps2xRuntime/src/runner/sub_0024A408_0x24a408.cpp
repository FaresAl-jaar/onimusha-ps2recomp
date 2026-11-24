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

// Function: sub_0024A408
// Address: 0x24a408 - 0x24a4cc
void sub_0024A408_0x24a408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A408_0x24a408");
#endif

    switch (ctx->pc) {
        case 0x24a480u: goto label_24a480;
        case 0x24a490u: goto label_24a490;
        case 0x24a4a0u: goto label_24a4a0;
        case 0x24a4b0u: goto label_24a4b0;
        default: break;
    }

    ctx->pc = 0x24a408u;

    // 0x24a408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a40c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24a40cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a414: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24A414u;
    {
        const bool branch_taken_0x24a414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A414u;
        // 0x24a418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a414) {
            ctx->pc = 0x24A4C0u;
            goto label_24a4c0;
        }
    }
    ctx->pc = 0x24A41Cu;
    // 0x24a41c: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x24a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x24a420: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24A420u;
    {
        const bool branch_taken_0x24a420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A420u;
        // 0x24a424: 0x28a200cc  slti        $v0, $a1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a420) {
            ctx->pc = 0x24A4A8u;
            goto label_24a4a8;
        }
    }
    ctx->pc = 0x24A428u;
    // 0x24a428: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A428u;
    {
        const bool branch_taken_0x24a428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A428u;
        // 0x24a42c: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a428) {
            ctx->pc = 0x24A458u;
            goto label_24a458;
        }
    }
    ctx->pc = 0x24A430u;
    // 0x24a430: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x24a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x24a434: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24A434u;
    {
        const bool branch_taken_0x24a434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A434u;
        // 0x24a438: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a434) {
            ctx->pc = 0x24A488u;
            goto label_24a488;
        }
    }
    ctx->pc = 0x24A43Cu;
    // 0x24a43c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24A43Cu;
    {
        const bool branch_taken_0x24a43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A43Cu;
        // 0x24a440: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a43c) {
            ctx->pc = 0x24A498u;
            goto label_24a498;
        }
    }
    ctx->pc = 0x24A444u;
    // 0x24a444: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A444u;
    {
        const bool branch_taken_0x24a444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A444u;
        // 0x24a448: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a444) {
            ctx->pc = 0x24A478u;
            goto label_24a478;
        }
    }
    ctx->pc = 0x24A44Cu;
    // 0x24a44c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x24A44Cu;
    {
        const bool branch_taken_0x24a44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A44Cu;
        // 0x24a450: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a44c) {
            ctx->pc = 0x24A4C4u;
            goto label_24a4c4;
        }
    }
    ctx->pc = 0x24A454u;
    // 0x24a454: 0x0  nop
    ctx->pc = 0x24a454u;
    // NOP
label_24a458:
    // 0x24a458: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24A458u;
    {
        const bool branch_taken_0x24a458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A458u;
        // 0x24a45c: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a458) {
            ctx->pc = 0x24A4A8u;
            goto label_24a4a8;
        }
    }
    ctx->pc = 0x24A460u;
    // 0x24a460: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A460u;
    {
        const bool branch_taken_0x24a460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A460u;
        // 0x24a464: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a460) {
            ctx->pc = 0x24A498u;
            goto label_24a498;
        }
    }
    ctx->pc = 0x24A468u;
    // 0x24a468: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24A468u;
    {
        const bool branch_taken_0x24a468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A468u;
        // 0x24a46c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a468) {
            ctx->pc = 0x24A4B8u;
            goto label_24a4b8;
        }
    }
    ctx->pc = 0x24A470u;
    // 0x24a470: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24A470u;
    {
        const bool branch_taken_0x24a470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A470u;
        // 0x24a474: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a470) {
            ctx->pc = 0x24A4C4u;
            goto label_24a4c4;
        }
    }
    ctx->pc = 0x24A478u;
label_24a478:
    // 0x24a478: 0xc0928da  jal         func_24A368
    ctx->pc = 0x24A478u;
    SET_GPR_U32(ctx, 31, 0x24A480u);
    ctx->pc = 0x24A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A368u, 0x24A478u, 0x24A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A480u;
label_24a480:
    // 0x24a480: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24A480u;
    {
        const bool branch_taken_0x24a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A480u;
        // 0x24a484: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a480) {
            ctx->pc = 0x24A4BCu;
            goto label_24a4bc;
        }
    }
    ctx->pc = 0x24A488u;
label_24a488:
    // 0x24a488: 0xc0928e2  jal         func_24A388
    ctx->pc = 0x24A488u;
    SET_GPR_U32(ctx, 31, 0x24A490u);
    ctx->pc = 0x24A388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A388u, 0x24A488u, 0x24A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A490u;
label_24a490:
    // 0x24a490: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24A490u;
    {
        const bool branch_taken_0x24a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A490u;
        // 0x24a494: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a490) {
            ctx->pc = 0x24A4BCu;
            goto label_24a4bc;
        }
    }
    ctx->pc = 0x24A498u;
label_24a498:
    // 0x24a498: 0xc0928ee  jal         func_24A3B8
    ctx->pc = 0x24A498u;
    SET_GPR_U32(ctx, 31, 0x24A4A0u);
    ctx->pc = 0x24A3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A3B8u, 0x24A498u, 0x24A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4A0u;
label_24a4a0:
    // 0x24a4a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24A4A0u;
    {
        const bool branch_taken_0x24a4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4A0u;
        // 0x24a4a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4a0) {
            ctx->pc = 0x24A4BCu;
            goto label_24a4bc;
        }
    }
    ctx->pc = 0x24A4A8u;
label_24a4a8:
    // 0x24a4a8: 0xc0928f6  jal         func_24A3D8
    ctx->pc = 0x24A4A8u;
    SET_GPR_U32(ctx, 31, 0x24A4B0u);
    ctx->pc = 0x24A3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A3D8u, 0x24A4A8u, 0x24A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4B0u;
label_24a4b0:
    // 0x24a4b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24A4B0u;
    {
        const bool branch_taken_0x24a4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4B0u;
        // 0x24a4b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4b0) {
            ctx->pc = 0x24A4BCu;
            goto label_24a4bc;
        }
    }
    ctx->pc = 0x24A4B8u;
label_24a4b8:
    // 0x24a4b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a4bc:
    // 0x24a4bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x24a4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24a4c0:
    // 0x24a4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a4c4:
    // 0x24a4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4C4u;
        // 0x24a4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A4CCu;
}
