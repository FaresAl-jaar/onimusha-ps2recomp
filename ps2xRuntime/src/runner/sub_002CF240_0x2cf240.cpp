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

// Function: sub_002CF240
// Address: 0x2cf240 - 0x2cf31c
void sub_002CF240_0x2cf240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF240_0x2cf240");
#endif

    switch (ctx->pc) {
        case 0x2cf28cu: goto label_2cf28c;
        case 0x2cf2ccu: goto label_2cf2cc;
        case 0x2cf30cu: goto label_2cf30c;
        default: break;
    }

    ctx->pc = 0x2cf240u;

    // 0x2cf240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf244: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2cf244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2cf248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf24c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2cf24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2cf250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf254: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x2cf254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x2cf258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf25c: 0x848404ec  lh          $a0, 0x4EC($a0)
    ctx->pc = 0x2cf25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1260)));
    // 0x2cf260: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cf260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cf264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf268: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2cf268u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cf26c: 0x0  nop
    ctx->pc = 0x2cf26cu;
    // NOP
    // 0x2cf270: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2cf270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cf274: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cf274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cf278: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2cf278u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2cf27c: 0x0  nop
    ctx->pc = 0x2cf27cu;
    // NOP
    // 0x2cf280: 0x0  nop
    ctx->pc = 0x2cf280u;
    // NOP
    // 0x2cf284: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2CF284u;
    SET_GPR_U32(ctx, 31, 0x2CF28Cu);
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2CF284u, 0x2CF28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF28Cu;
label_2cf28c:
    // 0x2cf28c: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2cf28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2cf290: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2cf290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2cf294: 0x860304ec  lh          $v1, 0x4EC($s0)
    ctx->pc = 0x2cf294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x2cf298: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2cf298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2cf29c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cf29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf2a0: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x2cf2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x2cf2a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cf2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf2a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2cf2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cf2ac: 0x0  nop
    ctx->pc = 0x2cf2acu;
    // NOP
    // 0x2cf2b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2cf2b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cf2b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cf2b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cf2b8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2cf2b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2cf2bc: 0x0  nop
    ctx->pc = 0x2cf2bcu;
    // NOP
    // 0x2cf2c0: 0x0  nop
    ctx->pc = 0x2cf2c0u;
    // NOP
    // 0x2cf2c4: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2CF2C4u;
    SET_GPR_U32(ctx, 31, 0x2CF2CCu);
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2CF2C4u, 0x2CF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF2CCu;
label_2cf2cc:
    // 0x2cf2cc: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2cf2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2cf2d0: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2cf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2cf2d4: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x2cf2d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2cf2d8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2cf2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2cf2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cf2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf2e0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2cf2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2cf2e4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2cf2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2cf2e8: 0x24630b8c  addiu       $v1, $v1, 0xB8C
    ctx->pc = 0x2cf2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2956));
    // 0x2cf2ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cf2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf2f0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2cf2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2cf2f4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2cf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cf2f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cf2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cf2fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cf2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf300: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf304: 0xc0968e8  jal         func_25A3A0
    ctx->pc = 0x2CF304u;
    SET_GPR_U32(ctx, 31, 0x2CF30Cu);
    ctx->pc = 0x2CF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF304u;
    // 0x2cf308: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x2CF304u, 0x2CF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF30Cu;
label_2cf30c:
    // 0x2cf30c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf314: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF314u;
        // 0x2cf318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF31Cu;
}
