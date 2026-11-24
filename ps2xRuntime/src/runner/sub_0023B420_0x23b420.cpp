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

// Function: sub_0023B420
// Address: 0x23b420 - 0x23b50c
void sub_0023B420_0x23b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B420_0x23b420");
#endif

    switch (ctx->pc) {
        case 0x23b444u: goto label_23b444;
        case 0x23b47cu: goto label_23b47c;
        case 0x23b484u: goto label_23b484;
        case 0x23b48cu: goto label_23b48c;
        case 0x23b4a0u: goto label_23b4a0;
        case 0x23b4b4u: goto label_23b4b4;
        case 0x23b4d0u: goto label_23b4d0;
        case 0x23b4ecu: goto label_23b4ec;
        default: break;
    }

    ctx->pc = 0x23b420u;

    // 0x23b420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b424: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23b428: 0x3c13004d  lui         $s3, 0x4D
    ctx->pc = 0x23b428u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
    // 0x23b42c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23b434: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23b434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23b438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23b43c: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x23B43Cu;
    SET_GPR_U32(ctx, 31, 0x23B444u);
    ctx->pc = 0x23B440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B43Cu;
    // 0x23b440: 0x26708f88  addiu       $s0, $s3, -0x7078 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x23B43Cu, 0x23B444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B444u;
label_23b444:
    // 0x23b444: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23b448: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B448u;
    {
        const bool branch_taken_0x23b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B448u;
        // 0x23b44c: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b448) {
            ctx->pc = 0x23B468u;
            goto label_23b468;
        }
    }
    ctx->pc = 0x23B450u;
    // 0x23b450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b458: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b45c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b460: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x23B460u;
    ctx->pc = 0x23B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B460u;
    // 0x23b464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B468u;
label_23b468:
    // 0x23b468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b46c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23b46cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b470: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23b470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23b474: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x23B474u;
    SET_GPR_U32(ctx, 31, 0x23B47Cu);
    ctx->pc = 0x23B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B474u;
    // 0x23b478: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x23B474u, 0x23B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B47Cu;
label_23b47c:
    // 0x23b47c: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x23B47Cu;
    SET_GPR_U32(ctx, 31, 0x23B484u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x23B47Cu, 0x23B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B484u;
label_23b484:
    // 0x23b484: 0xc08da82  jal         func_236A08
    ctx->pc = 0x23B484u;
    SET_GPR_U32(ctx, 31, 0x23B48Cu);
    ctx->pc = 0x236A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A08u, 0x23B484u, 0x23B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B48Cu;
label_23b48c:
    // 0x23b48c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b490: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23b490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x23b494: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23b494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23b498: 0x2470ef88  addiu       $s0, $v1, -0x1078
    ctx->pc = 0x23b498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963080));
    // 0x23b49c: 0x0  nop
    ctx->pc = 0x23b49cu;
    // NOP
label_23b4a0:
    // 0x23b4a0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x23b4a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23b4a4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B4A4u;
    {
        const bool branch_taken_0x23b4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x23b4a4) {
            ctx->pc = 0x23B4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B4A4u;
            // 0x23b4a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B4B8u;
            goto label_23b4b8;
        }
    }
    ctx->pc = 0x23B4ACu;
    // 0x23b4ac: 0xc08f83a  jal         func_23E0E8
    ctx->pc = 0x23B4ACu;
    SET_GPR_U32(ctx, 31, 0x23B4B4u);
    ctx->pc = 0x23B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4ACu;
    // 0x23b4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E0E8u, 0x23B4ACu, 0x23B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4B4u;
label_23b4b4:
    // 0x23b4b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23b4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_23b4b8:
    // 0x23b4b8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23B4B8u;
    {
        const bool branch_taken_0x23b4b8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x23B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4B8u;
        // 0x23b4bc: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4b8) {
            ctx->pc = 0x23B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b4a0;
        }
    }
    ctx->pc = 0x23B4C0u;
    // 0x23b4c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23b4c4: 0x26708f88  addiu       $s0, $s3, -0x7078
    ctx->pc = 0x23b4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938504));
    // 0x23b4c8: 0xc08d57e  jal         func_2355F8
    ctx->pc = 0x23B4C8u;
    SET_GPR_U32(ctx, 31, 0x23B4D0u);
    ctx->pc = 0x23B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B4C8u;
    // 0x23b4cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2355F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2355F8u, 0x23B4C8u, 0x23B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4D0u;
label_23b4d0:
    // 0x23b4d0: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x23b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x23b4d4: 0x8c628f90  lw          $v0, -0x7070($v1)
    ctx->pc = 0x23b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C8F90u));
    // 0x23b4d8: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x23b4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x23b4dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B4DCu;
    {
        const bool branch_taken_0x23b4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4dc) {
            ctx->pc = 0x23B4ECu;
            goto label_23b4ec;
        }
    }
    ctx->pc = 0x23B4E4u;
    // 0x23b4e4: 0xc08d57e  jal         func_2355F8
    ctx->pc = 0x23B4E4u;
    SET_GPR_U32(ctx, 31, 0x23B4ECu);
    ctx->pc = 0x2355F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2355F8u, 0x23B4E4u, 0x23B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4ECu;
label_23b4ec:
    // 0x23b4ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x23b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x23b4f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b4f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b4fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b4fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b504: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x23B504u;
    ctx->pc = 0x23B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B504u;
    // 0x23b508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x23B50Cu;
}
