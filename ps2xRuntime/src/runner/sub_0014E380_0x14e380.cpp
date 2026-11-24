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

// Function: sub_0014E380
// Address: 0x14e380 - 0x14e434
void sub_0014E380_0x14e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E380_0x14e380");
#endif

    switch (ctx->pc) {
        case 0x14e3ccu: goto label_14e3cc;
        case 0x14e41cu: goto label_14e41c;
        default: break;
    }

    ctx->pc = 0x14e380u;

    // 0x14e380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14e388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e38c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e390: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x14e390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14e394: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14e394u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e398: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x14E398u;
    {
        const bool branch_taken_0x14e398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E398u;
        // 0x14e39c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e398) {
            ctx->pc = 0x14E420u;
            goto label_14e420;
        }
    }
    ctx->pc = 0x14E3A0u;
    // 0x14e3a0: 0x8ca300ec  lw          $v1, 0xEC($a1)
    ctx->pc = 0x14e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e3a4: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x14e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e3a8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x14e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14e3ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14e3b0: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x14e3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e3b4: 0x96230018  lhu         $v1, 0x18($s1)
    ctx->pc = 0x14e3b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14e3b8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14E3B8u;
    {
        const bool branch_taken_0x14e3b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3B8u;
        // 0x14e3bc: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3b8) {
            ctx->pc = 0x14E420u;
            goto label_14e420;
        }
    }
    ctx->pc = 0x14E3C0u;
    // 0x14e3c0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x14e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14e3c4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x14E3C4u;
    SET_GPR_U32(ctx, 31, 0x14E3CCu);
    ctx->pc = 0x14E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E3C4u;
    // 0x14e3c8: 0x26260060  addiu       $a2, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x14E3C4u, 0x14E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3CCu;
label_14e3cc:
    // 0x14e3cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e3d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e3d4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E3D4u;
    {
        const bool branch_taken_0x14e3d4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x14E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3D4u;
        // 0x14e3d8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3d4) {
            ctx->pc = 0x14E3E8u;
            goto label_14e3e8;
        }
    }
    ctx->pc = 0x14E3DCu;
    // 0x14e3dc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x14e3dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e3e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14E3E0u;
    {
        const bool branch_taken_0x14e3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3E0u;
        // 0x14e3e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3e0) {
            ctx->pc = 0x14E400u;
            goto label_14e400;
        }
    }
    ctx->pc = 0x14E3E8u;
label_14e3e8:
    // 0x14e3e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x14e3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x14e3ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14e3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14e3f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14e3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e3f4: 0x0  nop
    ctx->pc = 0x14e3f4u;
    // NOP
    // 0x14e3f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14e3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14e3fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14e3fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14e400:
    // 0x14e400: 0x0  nop
    ctx->pc = 0x14e400u;
    // NOP
    // 0x14e404: 0x0  nop
    ctx->pc = 0x14e404u;
    // NOP
    // 0x14e408: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x14e408u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14e40c: 0x0  nop
    ctx->pc = 0x14e40cu;
    // NOP
    // 0x14e410: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x14e410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x14e414: 0xc0414dc  jal         func_105370
    ctx->pc = 0x14E414u;
    SET_GPR_U32(ctx, 31, 0x14E41Cu);
    ctx->pc = 0x14E418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E414u;
    // 0x14e418: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x14E414u, 0x14E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E41Cu;
label_14e41c:
    // 0x14e41c: 0xa6300018  sh          $s0, 0x18($s1)
    ctx->pc = 0x14e41cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 16));
label_14e420:
    // 0x14e420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14e420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e42c: 0x3e00008  jr          $ra
    ctx->pc = 0x14E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E42Cu;
        // 0x14e430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E434u;
}
