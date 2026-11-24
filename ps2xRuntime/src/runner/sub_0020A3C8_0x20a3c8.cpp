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

// Function: sub_0020A3C8
// Address: 0x20a3c8 - 0x20a488
void sub_0020A3C8_0x20a3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A3C8_0x20a3c8");
#endif

    switch (ctx->pc) {
        case 0x20a3f0u: goto label_20a3f0;
        case 0x20a428u: goto label_20a428;
        case 0x20a438u: goto label_20a438;
        case 0x20a444u: goto label_20a444;
        case 0x20a44cu: goto label_20a44c;
        default: break;
    }

    ctx->pc = 0x20a3c8u;

    // 0x20a3c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a3cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a3d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a3d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a3dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20a3dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20a3e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a3e8: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A3E8u;
    SET_GPR_U32(ctx, 31, 0x20A3F0u);
    ctx->pc = 0x20A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A3E8u;
    // 0x20a3ec: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A3E8u, 0x20A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A3F0u;
label_20a3f0:
    // 0x20a3f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20a3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a3f8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a3fc: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A3FCu;
    {
        const bool branch_taken_0x20a3fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3FCu;
        // 0x20a400: 0x248483f8  addiu       $a0, $a0, -0x7C08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3fc) {
            ctx->pc = 0x20A420u;
            goto label_20a420;
        }
    }
    ctx->pc = 0x20A404u;
    // 0x20a404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a40c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a410: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20a410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a414: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a418: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A418u;
    ctx->pc = 0x20A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A418u;
    // 0x20a41c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A420u;
label_20a420:
    // 0x20a420: 0xc092dee  jal         func_24B7B8
    ctx->pc = 0x20A420u;
    SET_GPR_U32(ctx, 31, 0x20A428u);
    ctx->pc = 0x20A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A420u;
    // 0x20a424: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7B8u, 0x20A420u, 0x20A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A428u;
label_20a428:
    // 0x20a428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a42c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20a42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a430: 0xc0828c0  jal         func_20A300
    ctx->pc = 0x20A430u;
    SET_GPR_U32(ctx, 31, 0x20A438u);
    ctx->pc = 0x20A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A430u;
    // 0x20a434: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A300u, 0x20A430u, 0x20A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A438u;
label_20a438:
    // 0x20a438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a43c: 0xc08283e  jal         func_20A0F8
    ctx->pc = 0x20A43Cu;
    SET_GPR_U32(ctx, 31, 0x20A444u);
    ctx->pc = 0x20A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A43Cu;
    // 0x20a440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A0F8u, 0x20A43Cu, 0x20A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A444u;
label_20a444:
    // 0x20a444: 0xc082816  jal         func_20A058
    ctx->pc = 0x20A444u;
    SET_GPR_U32(ctx, 31, 0x20A44Cu);
    ctx->pc = 0x20A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A444u;
    // 0x20a448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A058u, 0x20A444u, 0x20A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A44Cu;
label_20a44c:
    // 0x20a44c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a450: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x20a450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x20a454: 0xae0202e4  sw          $v0, 0x2E4($s0)
    ctx->pc = 0x20a454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    // 0x20a458: 0xae1202ec  sw          $s2, 0x2EC($s0)
    ctx->pc = 0x20a458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 18));
    // 0x20a45c: 0xae1302f0  sw          $s3, 0x2F0($s0)
    ctx->pc = 0x20a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 19));
    // 0x20a460: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A460u;
    {
        const bool branch_taken_0x20a460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A460u;
        // 0x20a464: 0xae1102dc  sw          $s1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a460) {
            ctx->pc = 0x20A46Cu;
            goto label_20a46c;
        }
    }
    ctx->pc = 0x20A468u;
    // 0x20a468: 0xae1102e8  sw          $s1, 0x2E8($s0)
    ctx->pc = 0x20a468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
label_20a46c:
    // 0x20a46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a474: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a478: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20a478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a47c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a480: 0x3e00008  jr          $ra
    ctx->pc = 0x20A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A480u;
        // 0x20a484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A488u;
}
