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

// Function: sub_003BCC70
// Address: 0x3bcc70 - 0x3bccf8
void sub_003BCC70_0x3bcc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCC70_0x3bcc70");
#endif

    switch (ctx->pc) {
        case 0x3bccbcu: goto label_3bccbc;
        case 0x3bccdcu: goto label_3bccdc;
        default: break;
    }

    ctx->pc = 0x3bcc70u;

    // 0x3bcc70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3bcc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3bcc74: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3bcc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3bcc78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bcc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bcc7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bcc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3bcc80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bcc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bcc84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bcc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bcc88: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bcc88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bcc8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bcc8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcc90: 0x8c822b50  lw          $v0, 0x2B50($a0)
    ctx->pc = 0x3bcc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11088)));
    // 0x3bcc94: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x3bcc94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3bcc98: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3bcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bcc9c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3bcc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3bcca0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3bcca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bcca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bcca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcca8: 0x26122910  addiu       $s2, $s0, 0x2910
    ctx->pc = 0x3bcca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 10512));
    // 0x3bccac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3bccacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3bccb0: 0x92022901  lbu         $v0, 0x2901($s0)
    ctx->pc = 0x3bccb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10497)));
    // 0x3bccb4: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3BCCB4u;
    SET_GPR_U32(ctx, 31, 0x3BCCBCu);
    ctx->pc = 0x3BCCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCCB4u;
    // 0x3bccb8: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3BCCB4u, 0x3BCCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCCBCu;
label_3bccbc:
    // 0x3bccbc: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3bccbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3bccc0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3bccc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bccc4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3bccc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bccc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3bccc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcccc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3bccccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3bccd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bccd4: 0xc0aa0c8  jal         func_2A8320
    ctx->pc = 0x3BCCD4u;
    SET_GPR_U32(ctx, 31, 0x3BCCDCu);
    ctx->pc = 0x3BCCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCCD4u;
    // 0x3bccd8: 0x27a90050  addiu       $t1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8320u, 0x3BCCD4u, 0x3BCCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCCDCu;
label_3bccdc:
    // 0x3bccdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bccdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bcce0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3bcce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3bcce4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bcce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bcce8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bcce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bccec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bccecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCCF0u;
        // 0x3bccf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCCF8u;
}
