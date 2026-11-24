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

// Function: sub_002BA870
// Address: 0x2ba870 - 0x2ba99c
void sub_002BA870_0x2ba870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA870_0x2ba870");
#endif

    switch (ctx->pc) {
        case 0x2ba88cu: goto label_2ba88c;
        case 0x2ba8a0u: goto label_2ba8a0;
        case 0x2ba900u: goto label_2ba900;
        default: break;
    }

    ctx->pc = 0x2ba870u;

    // 0x2ba870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ba870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ba874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ba878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ba87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba880: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba884: 0xc0b222c  jal         func_2C88B0
    ctx->pc = 0x2BA884u;
    SET_GPR_U32(ctx, 31, 0x2BA88Cu);
    ctx->pc = 0x2BA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA884u;
    // 0x2ba888: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C88B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C88B0u, 0x2BA884u, 0x2BA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA88Cu;
label_2ba88c:
    // 0x2ba88c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2BA88Cu;
    {
        const bool branch_taken_0x2ba88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA88Cu;
        // 0x2ba890: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba88c) {
            ctx->pc = 0x2BA988u;
            goto label_2ba988;
        }
    }
    ctx->pc = 0x2BA894u;
    // 0x2ba894: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x2ba894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x2ba898: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2BA898u;
    SET_GPR_U32(ctx, 31, 0x2BA8A0u);
    ctx->pc = 0x2BA89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA898u;
    // 0x2ba89c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2BA898u, 0x2BA8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8A0u;
label_2ba8a0:
    // 0x2ba8a0: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x2ba8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2ba8a4: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2ba8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ba8a8: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x2ba8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ba8ac: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x2ba8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba8b0: 0x460c601a  mula.s      $f12, $f12
    ctx->pc = 0x2ba8b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[12], ctx->f[12]));
    // 0x2ba8b4: 0x460d685c  madd.s      $f1, $f13, $f13
    ctx->pc = 0x2ba8b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x2ba8b8: 0x46010044  c1          0x10044
    ctx->pc = 0x2ba8b8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x2ba8bc: 0x0  nop
    ctx->pc = 0x2ba8bcu;
    // NOP
    // 0x2ba8c0: 0x0  nop
    ctx->pc = 0x2ba8c0u;
    // NOP
    // 0x2ba8c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ba8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba8c8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2BA8C8u;
    {
        const bool branch_taken_0x2ba8c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba8c8) {
            ctx->pc = 0x2BA8F8u;
            goto label_2ba8f8;
        }
    }
    ctx->pc = 0x2BA8D0u;
    // 0x2ba8d0: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2ba8d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2ba8d4: 0x34630801  ori         $v1, $v1, 0x801
    ctx->pc = 0x2ba8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2049);
    // 0x2ba8d8: 0xfe030500  sd          $v1, 0x500($s0)
    ctx->pc = 0x2ba8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
    // 0x2ba8dc: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2ba8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba8e0: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2ba8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba8e4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2ba8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba8e8: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2ba8e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2ba8ec: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2ba8ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2ba8f0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2BA8F0u;
    {
        const bool branch_taken_0x2ba8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8F0u;
        // 0x2ba8f4: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8f0) {
            ctx->pc = 0x2BA988u;
            goto label_2ba988;
        }
    }
    ctx->pc = 0x2BA8F8u;
label_2ba8f8:
    // 0x2ba8f8: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2BA8F8u;
    SET_GPR_U32(ctx, 31, 0x2BA900u);
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2BA8F8u, 0x2BA900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA900u;
label_2ba900:
    // 0x2ba900: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x2ba900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x2ba904: 0xa20004ee  sb          $zero, 0x4EE($s0)
    ctx->pc = 0x2ba904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1262), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ba908: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x2ba908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x2ba90c: 0x9224005e  lbu         $a0, 0x5E($s1)
    ctx->pc = 0x2ba90cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2ba910: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ba910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba914: 0x0  nop
    ctx->pc = 0x2ba914u;
    // NOP
    // 0x2ba918: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ba918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ba91c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ba91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ba920: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ba920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ba924: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2ba924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ba928: 0x0  nop
    ctx->pc = 0x2ba928u;
    // NOP
    // 0x2ba92c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2ba92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ba930: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BA930u;
    {
        const bool branch_taken_0x2ba930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA930u;
        // 0x2ba934: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba930) {
            ctx->pc = 0x2BA978u;
            goto label_2ba978;
        }
    }
    ctx->pc = 0x2BA938u;
    // 0x2ba938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ba938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba93c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2BA93Cu;
    {
        const bool branch_taken_0x2ba93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ba93c) {
            ctx->pc = 0x2BA978u;
            goto label_2ba978;
        }
    }
    ctx->pc = 0x2BA944u;
    // 0x2ba944: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BA944u;
    {
        const bool branch_taken_0x2ba944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA944u;
        // 0x2ba948: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba944) {
            ctx->pc = 0x2BA978u;
            goto label_2ba978;
        }
    }
    ctx->pc = 0x2BA94Cu;
    // 0x2ba94c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA94Cu;
    {
        const bool branch_taken_0x2ba94c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ba94c) {
            ctx->pc = 0x2BA960u;
            goto label_2ba960;
        }
    }
    ctx->pc = 0x2BA954u;
    // 0x2ba954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA954u;
    {
        const bool branch_taken_0x2ba954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba954) {
            ctx->pc = 0x2BA978u;
            goto label_2ba978;
        }
    }
    ctx->pc = 0x2BA95Cu;
    // 0x2ba95c: 0x0  nop
    ctx->pc = 0x2ba95cu;
    // NOP
label_2ba960:
    // 0x2ba960: 0xa60504ec  sh          $a1, 0x4EC($s0)
    ctx->pc = 0x2ba960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1260), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ba964: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2ba964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2ba968: 0x34630440  ori         $v1, $v1, 0x440
    ctx->pc = 0x2ba968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1088);
    // 0x2ba96c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA96Cu;
    {
        const bool branch_taken_0x2ba96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA96Cu;
        // 0x2ba970: 0xfe030500  sd          $v1, 0x500($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba96c) {
            ctx->pc = 0x2BA988u;
            goto label_2ba988;
        }
    }
    ctx->pc = 0x2BA974u;
    // 0x2ba974: 0x0  nop
    ctx->pc = 0x2ba974u;
    // NOP
label_2ba978:
    // 0x2ba978: 0xa60504ec  sh          $a1, 0x4EC($s0)
    ctx->pc = 0x2ba978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1260), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ba97c: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x2ba97cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2ba980: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2ba980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2ba984: 0xfe030500  sd          $v1, 0x500($s0)
    ctx->pc = 0x2ba984u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 3));
label_2ba988:
    // 0x2ba988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba994: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA994u;
        // 0x2ba998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA99Cu;
}
