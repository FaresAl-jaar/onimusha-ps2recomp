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

// Function: sub_0021A438
// Address: 0x21a438 - 0x21a4d0
void sub_0021A438_0x21a438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A438_0x21a438");
#endif

    switch (ctx->pc) {
        case 0x21a450u: goto label_21a450;
        case 0x21a478u: goto label_21a478;
        case 0x21a490u: goto label_21a490;
        case 0x21a4a8u: goto label_21a4a8;
        case 0x21a4bcu: goto label_21a4bc;
        default: break;
    }

    ctx->pc = 0x21a438u;

    // 0x21a438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a43c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21a43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21a440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a444: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a448: 0xc084990  jal         func_212640
    ctx->pc = 0x21A448u;
    SET_GPR_U32(ctx, 31, 0x21A450u);
    ctx->pc = 0x21A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A448u;
    // 0x21a44c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x21A448u, 0x21A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A450u;
label_21a450:
    // 0x21a450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a454: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x21a454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21a458: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a45c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x21a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x21a460: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A460u;
    {
        const bool branch_taken_0x21a460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A460u;
        // 0x21a464: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a460) {
            ctx->pc = 0x21A470u;
            goto label_21a470;
        }
    }
    ctx->pc = 0x21A468u;
    // 0x21a468: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21A468u;
    {
        const bool branch_taken_0x21a468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A468u;
        // 0x21a46c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a468) {
            ctx->pc = 0x21A4B4u;
            goto label_21a4b4;
        }
    }
    ctx->pc = 0x21A470u;
label_21a470:
    // 0x21a470: 0xc086934  jal         func_21A4D0
    ctx->pc = 0x21A470u;
    SET_GPR_U32(ctx, 31, 0x21A478u);
    ctx->pc = 0x21A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A4D0u, 0x21A470u, 0x21A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A478u;
label_21a478:
    // 0x21a478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a47c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x21a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a480: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21A480u;
    {
        const bool branch_taken_0x21a480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A480u;
        // 0x21a484: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a480) {
            ctx->pc = 0x21A4B4u;
            goto label_21a4b4;
        }
    }
    ctx->pc = 0x21A488u;
    // 0x21a488: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21A488u;
    SET_GPR_U32(ctx, 31, 0x21A490u);
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21A488u, 0x21A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A490u;
label_21a490:
    // 0x21a490: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A490u;
    {
        const bool branch_taken_0x21a490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A490u;
        // 0x21a494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a490) {
            ctx->pc = 0x21A4B4u;
            goto label_21a4b4;
        }
    }
    ctx->pc = 0x21A498u;
    // 0x21a498: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x21a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a49c: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x21a49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x21a4a0: 0xc08857e  jal         func_2215F8
    ctx->pc = 0x21A4A0u;
    SET_GPR_U32(ctx, 31, 0x21A4A8u);
    ctx->pc = 0x21A4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4A0u;
    // 0x21a4a4: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215F8u, 0x21A4A0u, 0x21A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4A8u;
label_21a4a8:
    // 0x21a4a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x21a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a4ac: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x21a4acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x21a4b0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x21a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_21a4b4:
    // 0x21a4b4: 0xc084996  jal         func_212658
    ctx->pc = 0x21A4B4u;
    SET_GPR_U32(ctx, 31, 0x21A4BCu);
    ctx->pc = 0x21A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4B4u;
    // 0x21a4b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x21A4B4u, 0x21A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4BCu;
label_21a4bc:
    // 0x21a4bc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x21a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a4c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21a4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a4c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x21A4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4C8u;
        // 0x21a4cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A4D0u;
}
