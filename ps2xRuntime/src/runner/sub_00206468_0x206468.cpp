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

// Function: sub_00206468
// Address: 0x206468 - 0x206540
void sub_00206468_0x206468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206468_0x206468");
#endif

    switch (ctx->pc) {
        case 0x206490u: goto label_206490;
        case 0x2064a0u: goto label_2064a0;
        case 0x2064b0u: goto label_2064b0;
        case 0x2064bcu: goto label_2064bc;
        case 0x2064c8u: goto label_2064c8;
        case 0x2064d0u: goto label_2064d0;
        case 0x2064e8u: goto label_2064e8;
        case 0x2064fcu: goto label_2064fc;
        default: break;
    }

    ctx->pc = 0x206468u;

    // 0x206468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20646c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20647c: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x20647cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x206480: 0x5220002b  beql        $s1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x206480u;
    {
        const bool branch_taken_0x206480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x206480) {
            ctx->pc = 0x206484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206480u;
            // 0x206484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206530u;
            goto label_206530;
        }
    }
    ctx->pc = 0x206488u;
    // 0x206488: 0xc08319c  jal         func_20C670
    ctx->pc = 0x206488u;
    SET_GPR_U32(ctx, 31, 0x206490u);
    ctx->pc = 0x20C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C670u, 0x206488u, 0x206490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206490u;
label_206490:
    // 0x206490: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x206490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x206494: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x206494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x206498: 0xc087684  jal         func_21DA10
    ctx->pc = 0x206498u;
    SET_GPR_U32(ctx, 31, 0x2064A0u);
    ctx->pc = 0x20649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206498u;
    // 0x20649c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x206498u, 0x2064A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064A0u;
label_2064a0:
    // 0x2064a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2064A0u;
    {
        const bool branch_taken_0x2064a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064a0) {
            ctx->pc = 0x2064A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064A0u;
            // 0x2064a4: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064C0u;
            goto label_2064c0;
        }
    }
    ctx->pc = 0x2064A8u;
    // 0x2064a8: 0xc08168c  jal         func_205A30
    ctx->pc = 0x2064A8u;
    SET_GPR_U32(ctx, 31, 0x2064B0u);
    ctx->pc = 0x2064ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064A8u;
    // 0x2064ac: 0x2404fecc  addiu       $a0, $zero, -0x134 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x2064A8u, 0x2064B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064B0u;
label_2064b0:
    // 0x2064b0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2064b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2064b4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2064B4u;
    SET_GPR_U32(ctx, 31, 0x2064BCu);
    ctx->pc = 0x2064B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064B4u;
    // 0x2064b8: 0x248473b8  addiu       $a0, $a0, 0x73B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2064B4u, 0x2064BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064BCu;
label_2064bc:
    // 0x2064bc: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x2064bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_2064c0:
    // 0x2064c0: 0xc082be6  jal         func_20AF98
    ctx->pc = 0x2064C0u;
    SET_GPR_U32(ctx, 31, 0x2064C8u);
    ctx->pc = 0x2064C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064C0u;
    // 0x2064c4: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AF98u, 0x2064C0u, 0x2064C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064C8u;
label_2064c8:
    // 0x2064c8: 0xc082be6  jal         func_20AF98
    ctx->pc = 0x2064C8u;
    SET_GPR_U32(ctx, 31, 0x2064D0u);
    ctx->pc = 0x2064CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2064C8u;
    // 0x2064cc: 0x260402a4  addiu       $a0, $s0, 0x2A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AF98u, 0x2064C8u, 0x2064D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064D0u;
label_2064d0:
    // 0x2064d0: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x2064d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x2064d4: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2064d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2064d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2064D8u;
    {
        const bool branch_taken_0x2064d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064d8) {
            ctx->pc = 0x2064DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064D8u;
            // 0x2064dc: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064ECu;
            goto label_2064ec;
        }
    }
    ctx->pc = 0x2064E0u;
    // 0x2064e0: 0xc0832b6  jal         func_20CAD8
    ctx->pc = 0x2064E0u;
    SET_GPR_U32(ctx, 31, 0x2064E8u);
    ctx->pc = 0x20CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAD8u, 0x2064E0u, 0x2064E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064E8u;
label_2064e8:
    // 0x2064e8: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2064e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2064ec:
    // 0x2064ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2064ECu;
    {
        const bool branch_taken_0x2064ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064ec) {
            ctx->pc = 0x2064F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064ECu;
            // 0x2064f0: 0x8e0202e0  lw          $v0, 0x2E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206500u;
            goto label_206500;
        }
    }
    ctx->pc = 0x2064F4u;
    // 0x2064f4: 0xc092dee  jal         func_24B7B8
    ctx->pc = 0x2064F4u;
    SET_GPR_U32(ctx, 31, 0x2064FCu);
    ctx->pc = 0x24B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7B8u, 0x2064F4u, 0x2064FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064FCu;
label_2064fc:
    // 0x2064fc: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x2064fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_206500:
    // 0x206500: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x206500u;
    {
        const bool branch_taken_0x206500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206500u;
        // 0x206504: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206500) {
            ctx->pc = 0x206528u;
            goto label_206528;
        }
    }
    ctx->pc = 0x206508u;
    // 0x206508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x206508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20650c: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x20650cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x206510: 0xae0202fc  sw          $v0, 0x2FC($s0)
    ctx->pc = 0x206510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 2));
    // 0x206514: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x206514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x206518: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x206518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x20651c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20651Cu;
    {
        const bool branch_taken_0x20651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20651Cu;
        // 0x206520: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20651c) {
            ctx->pc = 0x20652Cu;
            goto label_20652c;
        }
    }
    ctx->pc = 0x206524u;
    // 0x206524: 0x0  nop
    ctx->pc = 0x206524u;
    // NOP
label_206528:
    // 0x206528: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x206528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
label_20652c:
    // 0x20652c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20652cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206530:
    // 0x206530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206538: 0x3e00008  jr          $ra
    ctx->pc = 0x206538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206538u;
        // 0x20653c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206540u;
}
