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

// Function: sub_003557A0
// Address: 0x3557a0 - 0x355860
void sub_003557A0_0x3557a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003557A0_0x3557a0");
#endif

    switch (ctx->pc) {
        case 0x3557ecu: goto label_3557ec;
        case 0x355824u: goto label_355824;
        case 0x355834u: goto label_355834;
        case 0x355844u: goto label_355844;
        default: break;
    }

    ctx->pc = 0x3557a0u;

    // 0x3557a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3557a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3557a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3557a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3557a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3557a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3557ac: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3557acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3557b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3557b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3557b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3557b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3557b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3557b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3557bc: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3557bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3557c0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3557c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3557c4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3557c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3557c8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3557c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3557cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3557ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3557d0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3557d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3557d4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3557d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3557d8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3557d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3557dc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3557dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3557e0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3557e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3557e4: 0xc04d594  jal         func_135650
    ctx->pc = 0x3557E4u;
    SET_GPR_U32(ctx, 31, 0x3557ECu);
    ctx->pc = 0x3557E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3557E4u;
    // 0x3557e8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x3557E4u, 0x3557ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3557ECu;
label_3557ec:
    // 0x3557ec: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3557ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3557f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3557f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3557f4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3557f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3557f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3557f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3557fc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3557fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x355800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x355804: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x355804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x355808: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x355808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x35580c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x35580cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x355810: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x355810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x355814: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x355814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x355818: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x355818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35581c: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x35581Cu;
    SET_GPR_U32(ctx, 31, 0x355824u);
    ctx->pc = 0x355820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35581Cu;
    // 0x355820: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x35581Cu, 0x355824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355824u;
label_355824:
    // 0x355824: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x355824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355828: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x355828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x35582c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x35582Cu;
    SET_GPR_U32(ctx, 31, 0x355834u);
    ctx->pc = 0x355830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35582Cu;
    // 0x355830: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x35582Cu, 0x355834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355834u;
label_355834:
    // 0x355834: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x355834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x355838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35583c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x35583Cu;
    SET_GPR_U32(ctx, 31, 0x355844u);
    ctx->pc = 0x355840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35583Cu;
    // 0x355840: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x35583Cu, 0x355844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355844u;
label_355844:
    // 0x355844: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x355844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x355848: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x355848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x35584c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35584cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355850: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x355850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x355854: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x355854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355858: 0x3e00008  jr          $ra
    ctx->pc = 0x355858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355858u;
        // 0x35585c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355860u;
}
