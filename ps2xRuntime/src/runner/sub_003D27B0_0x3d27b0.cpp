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

// Function: sub_003D27B0
// Address: 0x3d27b0 - 0x3d2840
void sub_003D27B0_0x3d27b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D27B0_0x3d27b0");
#endif

    switch (ctx->pc) {
        case 0x3d27c4u: goto label_3d27c4;
        case 0x3d27dcu: goto label_3d27dc;
        case 0x3d2810u: goto label_3d2810;
        case 0x3d2820u: goto label_3d2820;
        case 0x3d2830u: goto label_3d2830;
        default: break;
    }

    ctx->pc = 0x3d27b0u;

    // 0x3d27b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d27b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d27b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d27b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d27b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d27b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d27bc: 0xc0f4990  jal         func_3D2640
    ctx->pc = 0x3D27BCu;
    SET_GPR_U32(ctx, 31, 0x3D27C4u);
    ctx->pc = 0x3D27C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D27BCu;
    // 0x3d27c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2640u, 0x3D27BCu, 0x3D27C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D27C4u;
label_3d27c4:
    // 0x3d27c4: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3d27c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3d27c8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3d27c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d27cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D27CCu;
    {
        const bool branch_taken_0x3d27cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27CCu;
        // 0x3d27d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d27cc) {
            ctx->pc = 0x3D27E8u;
            goto label_3d27e8;
        }
    }
    ctx->pc = 0x3D27D4u;
    // 0x3d27d4: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x3D27D4u;
    SET_GPR_U32(ctx, 31, 0x3D27DCu);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x3D27D4u, 0x3D27DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D27DCu;
label_3d27dc:
    // 0x3d27dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D27DCu;
    {
        const bool branch_taken_0x3d27dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d27dc) {
            ctx->pc = 0x3D2830u;
            goto label_3d2830;
        }
    }
    ctx->pc = 0x3D27E4u;
    // 0x3d27e4: 0x0  nop
    ctx->pc = 0x3d27e4u;
    // NOP
label_3d27e8:
    // 0x3d27e8: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3d27e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3d27ec: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x3d27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x3d27f0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D27F0u;
    {
        const bool branch_taken_0x3d27f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D27F0u;
        // 0x3d27f4: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d27f0) {
            ctx->pc = 0x3D2818u;
            goto label_3d2818;
        }
    }
    ctx->pc = 0x3D27F8u;
    // 0x3d27f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D27F8u;
    {
        const bool branch_taken_0x3d27f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d27f8) {
            ctx->pc = 0x3D2808u;
            goto label_3d2808;
        }
    }
    ctx->pc = 0x3D2800u;
    // 0x3d2800: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2800u;
    {
        const bool branch_taken_0x3d2800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2800) {
            ctx->pc = 0x3D2828u;
            goto label_3d2828;
        }
    }
    ctx->pc = 0x3D2808u;
label_3d2808:
    // 0x3d2808: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3D2808u;
    SET_GPR_U32(ctx, 31, 0x3D2810u);
    ctx->pc = 0x3D280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2808u;
    // 0x3d280c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3D2808u, 0x3D2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2810u;
label_3d2810:
    // 0x3d2810: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2810u;
    {
        const bool branch_taken_0x3d2810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2810) {
            ctx->pc = 0x3D2830u;
            goto label_3d2830;
        }
    }
    ctx->pc = 0x3D2818u;
label_3d2818:
    // 0x3d2818: 0xc0a0488  jal         func_281220
    ctx->pc = 0x3D2818u;
    SET_GPR_U32(ctx, 31, 0x3D2820u);
    ctx->pc = 0x3D281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2818u;
    // 0x3d281c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281220u, 0x3D2818u, 0x3D2820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2820u;
label_3d2820:
    // 0x3d2820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2820u;
    {
        const bool branch_taken_0x3d2820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2820) {
            ctx->pc = 0x3D2830u;
            goto label_3d2830;
        }
    }
    ctx->pc = 0x3D2828u;
label_3d2828:
    // 0x3d2828: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3D2828u;
    SET_GPR_U32(ctx, 31, 0x3D2830u);
    ctx->pc = 0x3D282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2828u;
    // 0x3d282c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3D2828u, 0x3D2830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2830u;
label_3d2830:
    // 0x3d2830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d2830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d2834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2838: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2838u;
        // 0x3d283c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2840u;
}
