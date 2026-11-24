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

// Function: sub_0028F1F0
// Address: 0x28f1f0 - 0x28f2f4
void sub_0028F1F0_0x28f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F1F0_0x28f1f0");
#endif

    switch (ctx->pc) {
        case 0x28f224u: goto label_28f224;
        case 0x28f290u: goto label_28f290;
        case 0x28f2b4u: goto label_28f2b4;
        case 0x28f2e0u: goto label_28f2e0;
        default: break;
    }

    ctx->pc = 0x28f1f0u;

    // 0x28f1f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28f1f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28f1f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f1fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x28f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28f200: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x28f200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x28f204: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F204u;
    {
        const bool branch_taken_0x28f204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F204u;
        // 0x28f208: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f204) {
            ctx->pc = 0x28F218u;
            goto label_28f218;
        }
    }
    ctx->pc = 0x28F20Cu;
    // 0x28f20c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x28F20Cu;
    {
        const bool branch_taken_0x28f20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f20c) {
            ctx->pc = 0x28F298u;
            goto label_28f298;
        }
    }
    ctx->pc = 0x28F214u;
    // 0x28f214: 0x0  nop
    ctx->pc = 0x28f214u;
    // NOP
label_28f218:
    // 0x28f218: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x28f218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28f21c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F21Cu;
    {
        const bool branch_taken_0x28f21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F21Cu;
        // 0x28f220: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f21c) {
            ctx->pc = 0x28F240u;
            goto label_28f240;
        }
    }
    ctx->pc = 0x28F224u;
label_28f224:
    // 0x28f224: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x28f224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28f228: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28f22c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28f230: 0x0  nop
    ctx->pc = 0x28f230u;
    // NOP
    // 0x28f234: 0x0  nop
    ctx->pc = 0x28f234u;
    // NOP
    // 0x28f238: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28F238u;
    {
        const bool branch_taken_0x28f238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f238) {
            ctx->pc = 0x28F224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f224;
        }
    }
    ctx->pc = 0x28F240u;
label_28f240:
    // 0x28f240: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28f244: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x28f244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x28f248: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x28f248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x28f24c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x28f24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28f250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28f250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28f254: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x28f254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x28f258: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x28f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28f25c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x28f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x28f260: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28f260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28f264: 0xa7a2006e  sh          $v0, 0x6E($sp)
    ctx->pc = 0x28f264u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 110), (uint16_t)GPR_U32(ctx, 2));
    // 0x28f268: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x28f268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f26c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f26cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f270: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x28f270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x28f274: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x28f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f27c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x28f27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x28f280: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x28f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f284: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f288: 0xc04f7dc  jal         func_13DF70
    ctx->pc = 0x28F288u;
    SET_GPR_U32(ctx, 31, 0x28F290u);
    ctx->pc = 0x28F28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F288u;
    // 0x28f28c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF70u, 0x28F288u, 0x28F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F290u;
label_28f290:
    // 0x28f290: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28F290u;
    {
        const bool branch_taken_0x28f290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f290) {
            ctx->pc = 0x28F2E0u;
            goto label_28f2e0;
        }
    }
    ctx->pc = 0x28F298u;
label_28f298:
    // 0x28f298: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28f29c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x28f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x28f2a0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28F2A0u;
    {
        const bool branch_taken_0x28f2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2A0u;
        // 0x28f2a4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2a0) {
            ctx->pc = 0x28F2E0u;
            goto label_28f2e0;
        }
    }
    ctx->pc = 0x28F2A8u;
    // 0x28f2a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2ac: 0xc049590  jal         func_125640
    ctx->pc = 0x28F2ACu;
    SET_GPR_U32(ctx, 31, 0x28F2B4u);
    ctx->pc = 0x28F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2ACu;
    // 0x28f2b0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x28F2ACu, 0x28F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2B4u;
label_28f2b4:
    // 0x28f2b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28f2b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f2bc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x28f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x28f2c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x28f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f2c4: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x28f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x28f2c8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x28f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x28f2cc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28f2d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x28f2d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28f2d8: 0xc04f7dc  jal         func_13DF70
    ctx->pc = 0x28F2D8u;
    SET_GPR_U32(ctx, 31, 0x28F2E0u);
    ctx->pc = 0x28F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2D8u;
    // 0x28f2dc: 0xa7a2002e  sh          $v0, 0x2E($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF70u, 0x28F2D8u, 0x28F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2E0u;
label_28f2e0:
    // 0x28f2e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28f2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f2e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28F2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2ECu;
        // 0x28f2f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F2F4u;
}
