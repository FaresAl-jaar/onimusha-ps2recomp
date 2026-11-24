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

// Function: sub_0037FCC0
// Address: 0x37fcc0 - 0x37fdc0
void sub_0037FCC0_0x37fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FCC0_0x37fcc0");
#endif

    switch (ctx->pc) {
        case 0x37fcf0u: goto label_37fcf0;
        case 0x37fd60u: goto label_37fd60;
        case 0x37fd78u: goto label_37fd78;
        case 0x37fdb0u: goto label_37fdb0;
        default: break;
    }

    ctx->pc = 0x37fcc0u;

    // 0x37fcc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37fcc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37fcc8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x37fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37fccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37fcd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37fcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fcd4: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x37fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37fcd8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x37fcd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37fcdc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x37fcdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37fce0: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37fce0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37fce4: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x37fce4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37fce8: 0xc04d8e4  jal         func_136390
    ctx->pc = 0x37FCE8u;
    SET_GPR_U32(ctx, 31, 0x37FCF0u);
    ctx->pc = 0x37FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FCE8u;
    // 0x37fcec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136390u, 0x37FCE8u, 0x37FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FCF0u;
label_37fcf0:
    // 0x37fcf0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x37fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x37fcf4: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x37fcf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x37fcf8: 0x87a2003c  lh          $v0, 0x3C($sp)
    ctx->pc = 0x37fcf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x37fcfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37fd00: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37fd04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37fd08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37fd08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37fd0c: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x37fd0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37fd10: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FD10u;
    {
        const bool branch_taken_0x37fd10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fd10) {
            ctx->pc = 0x37FD20u;
            goto label_37fd20;
        }
    }
    ctx->pc = 0x37FD18u;
    // 0x37fd18: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x37FD18u;
    {
        const bool branch_taken_0x37fd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fd18) {
            ctx->pc = 0x37FD20u;
            goto label_37fd20;
        }
    }
    ctx->pc = 0x37FD20u;
label_37fd20:
    // 0x37fd20: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x37fd20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x37fd24: 0x87a2003e  lh          $v0, 0x3E($sp)
    ctx->pc = 0x37fd24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x37fd28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37fd2c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37fd30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37fd34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37fd34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37fd38: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x37fd38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37fd3c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FD3Cu;
    {
        const bool branch_taken_0x37fd3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fd3c) {
            ctx->pc = 0x37FD50u;
            goto label_37fd50;
        }
    }
    ctx->pc = 0x37FD44u;
    // 0x37fd44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37FD44u;
    {
        const bool branch_taken_0x37fd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fd44) {
            ctx->pc = 0x37FD50u;
            goto label_37fd50;
        }
    }
    ctx->pc = 0x37FD4Cu;
    // 0x37fd4c: 0x0  nop
    ctx->pc = 0x37fd4cu;
    // NOP
label_37fd50:
    // 0x37fd50: 0x860500c0  lh          $a1, 0xC0($s0)
    ctx->pc = 0x37fd50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x37fd54: 0x86062b74  lh          $a2, 0x2B74($s0)
    ctx->pc = 0x37fd54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11124)));
    // 0x37fd58: 0xc0decb8  jal         func_37B2E0
    ctx->pc = 0x37FD58u;
    SET_GPR_U32(ctx, 31, 0x37FD60u);
    ctx->pc = 0x37FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD58u;
    // 0x37fd5c: 0x87a4003c  lh          $a0, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2E0u, 0x37FD58u, 0x37FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD60u;
label_37fd60:
    // 0x37fd60: 0x87a4003e  lh          $a0, 0x3E($sp)
    ctx->pc = 0x37fd60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x37fd64: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x37fd64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37fd68: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x37fd68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x37fd6c: 0x86062b74  lh          $a2, 0x2B74($s0)
    ctx->pc = 0x37fd6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11124)));
    // 0x37fd70: 0xc0decb8  jal         func_37B2E0
    ctx->pc = 0x37FD70u;
    SET_GPR_U32(ctx, 31, 0x37FD78u);
    ctx->pc = 0x37FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD70u;
    // 0x37fd74: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2E0u, 0x37FD70u, 0x37FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD78u;
label_37fd78:
    // 0x37fd78: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x37fd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37fd7c: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x37fd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x37fd80: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x37fd80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x37fd84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37fd84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37fd88: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x37fd88u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x37fd8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37fd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fd90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37fd94: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37fd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37fd98: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x37fd98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x37fd9c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x37fd9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x37fda0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x37fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37fda4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37fda8: 0xc0dfefc  jal         func_37FBF0
    ctx->pc = 0x37FDA8u;
    SET_GPR_U32(ctx, 31, 0x37FDB0u);
    ctx->pc = 0x37FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FDA8u;
    // 0x37fdac: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FBF0u, 0x37FDA8u, 0x37FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FDB0u;
label_37fdb0:
    // 0x37fdb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37fdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fdb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37fdb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x37FDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDB8u;
        // 0x37fdbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FDC0u;
}
