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

// Function: sub_00207728
// Address: 0x207728 - 0x2077c0
void sub_00207728_0x207728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207728_0x207728");
#endif

    switch (ctx->pc) {
        case 0x207740u: goto label_207740;
        case 0x20775cu: goto label_20775c;
        case 0x207768u: goto label_207768;
        case 0x207784u: goto label_207784;
        default: break;
    }

    ctx->pc = 0x207728u;

    // 0x207728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20772c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20772cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x207734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207738: 0xc081d84  jal         func_207610
    ctx->pc = 0x207738u;
    SET_GPR_U32(ctx, 31, 0x207740u);
    ctx->pc = 0x20773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207738u;
    // 0x20773c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207738u, 0x207740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207740u;
label_207740:
    // 0x207740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x207740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207748: 0x2404fff4  addiu       $a0, $zero, -0xC
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x20774c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20774Cu;
    {
        const bool branch_taken_0x20774c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x207750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20774Cu;
        // 0x207750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20774c) {
            ctx->pc = 0x207770u;
            goto label_207770;
        }
    }
    ctx->pc = 0x207754u;
    // 0x207754: 0xc08168c  jal         func_205A30
    ctx->pc = 0x207754u;
    SET_GPR_U32(ctx, 31, 0x20775Cu);
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x207754u, 0x20775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20775Cu;
label_20775c:
    // 0x20775c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207760: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207760u;
    SET_GPR_U32(ctx, 31, 0x207768u);
    ctx->pc = 0x207764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207760u;
    // 0x207764: 0x248477d8  addiu       $a0, $a0, 0x77D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207760u, 0x207768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207768u;
label_207768:
    // 0x207768: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x207768u;
    {
        const bool branch_taken_0x207768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207768u;
        // 0x20776c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207768) {
            ctx->pc = 0x2077ACu;
            goto label_2077ac;
        }
    }
    ctx->pc = 0x207770u;
label_207770:
    // 0x207770: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x207770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x207774: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x207774u;
    {
        const bool branch_taken_0x207774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x207778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207774u;
        // 0x207778: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207774) {
            ctx->pc = 0x2077ACu;
            goto label_2077ac;
        }
    }
    ctx->pc = 0x20777Cu;
    // 0x20777c: 0xc087dfe  jal         func_21F7F8
    ctx->pc = 0x20777Cu;
    SET_GPR_U32(ctx, 31, 0x207784u);
    ctx->pc = 0x207780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20777Cu;
    // 0x207780: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F7F8u, 0x20777Cu, 0x207784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207784u;
label_207784:
    // 0x207784: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x207784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x207788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20778c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20778cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207790: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x207790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x207794: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x207794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207798: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207798u;
    {
        const bool branch_taken_0x207798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x20779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207798u;
        // 0x20779c: 0x223100a  movz        $v0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207798) {
            ctx->pc = 0x2077A8u;
            goto label_2077a8;
        }
    }
    ctx->pc = 0x2077A0u;
    // 0x2077a0: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2077A0u;
    {
        const bool branch_taken_0x2077a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2077A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077A0u;
        // 0x2077a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077a0) {
            ctx->pc = 0x2077B0u;
            goto label_2077b0;
        }
    }
    ctx->pc = 0x2077A8u;
label_2077a8:
    // 0x2077a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2077a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2077ac:
    // 0x2077ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2077acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2077b0:
    // 0x2077b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2077b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2077b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2077b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2077b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2077B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2077BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077B8u;
        // 0x2077bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2077C0u;
}
