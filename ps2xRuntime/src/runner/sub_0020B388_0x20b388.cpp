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

// Function: sub_0020B388
// Address: 0x20b388 - 0x20b434
void sub_0020B388_0x20b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B388_0x20b388");
#endif

    switch (ctx->pc) {
        case 0x20b388u: goto label_20b388;
        case 0x20b38cu: goto label_20b38c;
        case 0x20b390u: goto label_20b390;
        case 0x20b394u: goto label_20b394;
        case 0x20b398u: goto label_20b398;
        case 0x20b39cu: goto label_20b39c;
        case 0x20b3a0u: goto label_20b3a0;
        case 0x20b3a4u: goto label_20b3a4;
        case 0x20b3a8u: goto label_20b3a8;
        case 0x20b3acu: goto label_20b3ac;
        case 0x20b3b0u: goto label_20b3b0;
        case 0x20b3b4u: goto label_20b3b4;
        case 0x20b3b8u: goto label_20b3b8;
        case 0x20b3bcu: goto label_20b3bc;
        case 0x20b3c0u: goto label_20b3c0;
        case 0x20b3c4u: goto label_20b3c4;
        case 0x20b3c8u: goto label_20b3c8;
        case 0x20b3ccu: goto label_20b3cc;
        case 0x20b3d0u: goto label_20b3d0;
        case 0x20b3d4u: goto label_20b3d4;
        case 0x20b3d8u: goto label_20b3d8;
        case 0x20b3dcu: goto label_20b3dc;
        case 0x20b3e0u: goto label_20b3e0;
        case 0x20b3e4u: goto label_20b3e4;
        case 0x20b3e8u: goto label_20b3e8;
        case 0x20b3ecu: goto label_20b3ec;
        case 0x20b3f0u: goto label_20b3f0;
        case 0x20b3f4u: goto label_20b3f4;
        case 0x20b3f8u: goto label_20b3f8;
        case 0x20b3fcu: goto label_20b3fc;
        case 0x20b400u: goto label_20b400;
        case 0x20b404u: goto label_20b404;
        case 0x20b408u: goto label_20b408;
        case 0x20b40cu: goto label_20b40c;
        case 0x20b410u: goto label_20b410;
        case 0x20b414u: goto label_20b414;
        case 0x20b418u: goto label_20b418;
        case 0x20b41cu: goto label_20b41c;
        case 0x20b420u: goto label_20b420;
        case 0x20b424u: goto label_20b424;
        case 0x20b428u: goto label_20b428;
        case 0x20b42cu: goto label_20b42c;
        case 0x20b430u: goto label_20b430;
        default: break;
    }

    ctx->pc = 0x20b388u;

label_20b388:
    // 0x20b388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20b38c:
    // 0x20b38c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20b390:
    // 0x20b390: 0x58140  sll         $s0, $a1, 5
    ctx->pc = 0x20b390u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_20b394:
    // 0x20b394: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20b398:
    // 0x20b398: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x20b398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_20b39c:
    // 0x20b39c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20b3a0:
    // 0x20b3a0: 0x26100284  addiu       $s0, $s0, 0x284
    ctx->pc = 0x20b3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_20b3a4:
    // 0x20b3a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_20b3a8:
    // 0x20b3a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20b3ac:
    // 0x20b3ac: 0x8c93003c  lw          $s3, 0x3C($a0)
    ctx->pc = 0x20b3acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_20b3b0:
    // 0x20b3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b3b4:
    // 0x20b3b4: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x20b3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20b3b8:
    // 0x20b3b8: 0xc082d4c  jal         func_20B530
label_20b3bc:
    if (ctx->pc == 0x20B3BCu) {
        ctx->pc = 0x20B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3B8u;
        // 0x20b3bc: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B3C0u;
        goto label_20b3c0;
    }
    ctx->pc = 0x20B3B8u;
    SET_GPR_U32(ctx, 31, 0x20B3C0u);
    ctx->pc = 0x20B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3B8u;
    // 0x20b3bc: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20B3B8u, 0x20B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3C0u;
label_20b3c0:
    // 0x20b3c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b3c4:
    // 0x20b3c4: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_20b3c8:
    if (ctx->pc == 0x20B3C8u) {
        ctx->pc = 0x20B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3C4u;
        // 0x20b3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B3CCu;
        goto label_20b3cc;
    }
    ctx->pc = 0x20B3C4u;
    {
        const bool branch_taken_0x20b3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3C4u;
        // 0x20b3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3c4) {
            ctx->pc = 0x20B418u;
            goto label_20b418;
        }
    }
    ctx->pc = 0x20B3CCu;
label_20b3cc:
    // 0x20b3cc: 0xc082be6  jal         func_20AF98
label_20b3d0:
    if (ctx->pc == 0x20B3D0u) {
        ctx->pc = 0x20B3D4u;
        goto label_20b3d4;
    }
    ctx->pc = 0x20B3CCu;
    SET_GPR_U32(ctx, 31, 0x20B3D4u);
    ctx->pc = 0x20AF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AF98u, 0x20B3CCu, 0x20B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3D4u;
label_20b3d4:
    // 0x20b3d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20b3d8:
    // 0x20b3d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x20b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_20b3dc:
    // 0x20b3dc: 0x40f809  jalr        $v0
label_20b3e0:
    if (ctx->pc == 0x20B3E0u) {
        ctx->pc = 0x20B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3DCu;
        // 0x20b3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B3E4u;
        goto label_20b3e4;
    }
    ctx->pc = 0x20B3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B3E4u);
        ctx->pc = 0x20B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3DCu;
        // 0x20b3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B3DCu, 0x20B3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B3E4u;
label_20b3e4:
    // 0x20b3e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20b3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b3e8:
    // 0x20b3e8: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x20b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_20b3ec:
    // 0x20b3ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b3ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b3f0:
    // 0x20b3f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20b3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b3f4:
    // 0x20b3f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b3f8:
    // 0x20b3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b3fc:
    // 0x20b3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b400:
    // 0x20b400: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20b400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20b404:
    // 0x20b404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b408:
    // 0x20b408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20b40c:
    // 0x20b40c: 0x80849da  j           func_212768
label_20b410:
    if (ctx->pc == 0x20B410u) {
        ctx->pc = 0x20B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B40Cu;
        // 0x20b410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B414u;
        goto label_20b414;
    }
    ctx->pc = 0x20B40Cu;
    ctx->pc = 0x20B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B40Cu;
    // 0x20b410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212768u;
    sub_00212768_0x212768(rdram, ctx, runtime); return;
    ctx->pc = 0x20B414u;
label_20b414:
    // 0x20b414: 0x0  nop
    ctx->pc = 0x20b414u;
    // NOP
label_20b418:
    // 0x20b418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b41c:
    // 0x20b41c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b420:
    // 0x20b420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b424:
    // 0x20b424: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20b424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20b428:
    // 0x20b428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20b42c:
    // 0x20b42c: 0x3e00008  jr          $ra
label_20b430:
    if (ctx->pc == 0x20B430u) {
        ctx->pc = 0x20B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B42Cu;
        // 0x20b430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B434u;
        goto label_fallthrough_0x20b42c;
    }
    ctx->pc = 0x20B42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B42Cu;
        // 0x20b430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b42c:
    ctx->pc = 0x20B434u;
}
