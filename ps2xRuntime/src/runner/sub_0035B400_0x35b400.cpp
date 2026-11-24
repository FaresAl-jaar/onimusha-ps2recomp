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

// Function: sub_0035B400
// Address: 0x35b400 - 0x35b4c8
void sub_0035B400_0x35b400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B400_0x35b400");
#endif

    switch (ctx->pc) {
        case 0x35b420u: goto label_35b420;
        case 0x35b474u: goto label_35b474;
        case 0x35b4bcu: goto label_35b4bc;
        default: break;
    }

    ctx->pc = 0x35b400u;

    // 0x35b400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b408: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b40c: 0x844203a0  lh          $v0, 0x3A0($v0)
    ctx->pc = 0x35b40cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 928)));
    // 0x35b410: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x35b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x35b414: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35b414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35b418: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x35B418u;
    SET_GPR_U32(ctx, 31, 0x35B420u);
    ctx->pc = 0x35B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B418u;
    // 0x35b41c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x35B418u, 0x35B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B420u;
label_35b420:
    // 0x35b420: 0x8f858bb8  lw          $a1, -0x7448($gp)
    ctx->pc = 0x35b420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b424: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x35b424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x35b428: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x35b428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35b42c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b430: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x35b430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x35b434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35b434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b438: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35b438u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35b43c: 0xa4a203a0  sh          $v0, 0x3A0($a1)
    ctx->pc = 0x35b43cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 928), (uint16_t)GPR_U32(ctx, 2));
    // 0x35b440: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b444: 0x846203a0  lh          $v0, 0x3A0($v1)
    ctx->pc = 0x35b444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 928)));
    // 0x35b448: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x35b448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x35b44c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b450: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x35b450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35b454: 0x0  nop
    ctx->pc = 0x35b454u;
    // NOP
    // 0x35b458: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x35b458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x35b45c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35b45cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35b460: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x35b460u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35b464: 0x0  nop
    ctx->pc = 0x35b464u;
    // NOP
    // 0x35b468: 0x0  nop
    ctx->pc = 0x35b468u;
    // NOP
    // 0x35b46c: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35B46Cu;
    SET_GPR_U32(ctx, 31, 0x35B474u);
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35B46Cu, 0x35B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B474u;
label_35b474:
    // 0x35b474: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35b474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b478: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35b47c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x35b47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35b480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b484: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x35b484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x35b488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35b488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b48c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35b48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35b490: 0x848203a0  lh          $v0, 0x3A0($a0)
    ctx->pc = 0x35b490u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x35b494: 0x248502b0  addiu       $a1, $a0, 0x2B0
    ctx->pc = 0x35b494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x35b498: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x35b498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35b49c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x35b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35b4a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x35b4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x35b4a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35b4a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35b4a8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x35b4a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35b4ac: 0x0  nop
    ctx->pc = 0x35b4acu;
    // NOP
    // 0x35b4b0: 0x0  nop
    ctx->pc = 0x35b4b0u;
    // NOP
    // 0x35b4b4: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35B4B4u;
    SET_GPR_U32(ctx, 31, 0x35B4BCu);
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35B4B4u, 0x35B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4BCu;
label_35b4bc:
    // 0x35b4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x35B4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4C0u;
        // 0x35b4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B4C8u;
}
