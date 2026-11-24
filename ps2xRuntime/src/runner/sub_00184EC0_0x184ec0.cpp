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

// Function: sub_00184EC0
// Address: 0x184ec0 - 0x185298
void sub_00184EC0_0x184ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184EC0_0x184ec0");
#endif

    switch (ctx->pc) {
        case 0x184f78u: goto label_184f78;
        case 0x185048u: goto label_185048;
        case 0x1851f8u: goto label_1851f8;
        case 0x185230u: goto label_185230;
        default: break;
    }

    ctx->pc = 0x184ec0u;

    // 0x184ec0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x184ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x184ec4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x184ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x184ec8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x184ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x184ecc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x184eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x184ed0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x184ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x184ed4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x184ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x184ed8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x184edc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x184ee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184ee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184ee8: 0x8c8901e8  lw          $t1, 0x1E8($a0)
    ctx->pc = 0x184ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x184eec: 0x8c9901ec  lw          $t9, 0x1EC($a0)
    ctx->pc = 0x184eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x184ef0: 0x694021  addu        $t0, $v1, $t1
    ctx->pc = 0x184ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x184ef4: 0x8d2311c8  lw          $v1, 0x11C8($t1)
    ctx->pc = 0x184ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4552)));
    // 0x184ef8: 0x8d120040  lw          $s2, 0x40($t0)
    ctx->pc = 0x184ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x184efc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x184efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x184f00: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x184f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184f04: 0x124000da  beqz        $s2, . + 4 + (0xDA << 2)
    ctx->pc = 0x184F04u;
    {
        const bool branch_taken_0x184f04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F04u;
        // 0x184f08: 0xc48601f0  lwc1        $f6, 0x1F0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f04) {
            ctx->pc = 0x185270u;
            goto label_185270;
        }
    }
    ctx->pc = 0x184F0Cu;
    // 0x184f0c: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x184f0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x184f10: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x184f10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x184f14: 0x312c0001  andi        $t4, $t1, 0x1
    ctx->pc = 0x184f14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x184f18: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x184f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x184f1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x184f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f20: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x184f20u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f24: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x184f24u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f28: 0x31290002  andi        $t1, $t1, 0x2
    ctx->pc = 0x184f28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x184f2c: 0x66840  sll         $t5, $a2, 1
    ctx->pc = 0x184f2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x184f30: 0x30eb0002  andi        $t3, $a3, 0x2
    ctx->pc = 0x184f30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x184f34: 0x30ea0001  andi        $t2, $a3, 0x1
    ctx->pc = 0x184f34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x184f38: 0x3c0740c9  lui         $a3, 0x40C9
    ctx->pc = 0x184f38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16585 << 16));
    // 0x184f3c: 0x3c064049  lui         $a2, 0x4049
    ctx->pc = 0x184f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16457 << 16));
    // 0x184f40: 0x34e80fdb  ori         $t0, $a3, 0xFDB
    ctx->pc = 0x184f40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4059);
    // 0x184f44: 0x34c70fdb  ori         $a3, $a2, 0xFDB
    ctx->pc = 0x184f44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
    // 0x184f48: 0x3c06c049  lui         $a2, 0xC049
    ctx->pc = 0x184f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49225 << 16));
    // 0x184f4c: 0x34c60fdb  ori         $a2, $a2, 0xFDB
    ctx->pc = 0x184f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
    // 0x184f50: 0x44863800  mtc1        $a2, $f7
    ctx->pc = 0x184f50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x184f54: 0x44884000  mtc1        $t0, $f8
    ctx->pc = 0x184f54u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x184f58: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x184f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x184f5c: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x184f5cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x184f60: 0x44874800  mtc1        $a3, $f9
    ctx->pc = 0x184f60u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x184f64: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x184f64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x184f68: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x184f68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x184f6c: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x184f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
    // 0x184f70: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x184f70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x184f74: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x184f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_184f78:
    // 0x184f78: 0x96540000  lhu         $s4, 0x0($s2)
    ctx->pc = 0x184f78u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x184f7c: 0x8c8801e8  lw          $t0, 0x1E8($a0)
    ctx->pc = 0x184f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x184f80: 0x26510002  addiu       $s1, $s2, 0x2
    ctx->pc = 0x184f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x184f84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x184f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f88: 0x143840  sll         $a3, $s4, 1
    ctx->pc = 0x184f88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x184f8c: 0x2698ffff  addiu       $t8, $s4, -0x1
    ctx->pc = 0x184f8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x184f90: 0x2278021  addu        $s0, $s1, $a3
    ctx->pc = 0x184f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x184f94: 0xf43821  addu        $a3, $a3, $s4
    ctx->pc = 0x184f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x184f98: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x184f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x184f9c: 0x79080  sll         $s2, $a3, 2
    ctx->pc = 0x184f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x184fa0: 0x2068024  and         $s0, $s0, $a2
    ctx->pc = 0x184fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
    // 0x184fa4: 0x1a83821  addu        $a3, $t5, $t0
    ctx->pc = 0x184fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x184fa8: 0xc50a11ec  lwc1        $f10, 0x11EC($t0)
    ctx->pc = 0x184fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x184fac: 0xefa821  addu        $s5, $a3, $t7
    ctx->pc = 0x184facu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x184fb0: 0x26a70140  addiu       $a3, $s5, 0x140
    ctx->pc = 0x184fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x184fb4: 0x96b50140  lhu         $s5, 0x140($s5)
    ctx->pc = 0x184fb4u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x184fb8: 0x46065034  c.lt.s      $f10, $f6
    ctx->pc = 0x184fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184fbc: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x184FBCu;
    {
        const bool branch_taken_0x184fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FBCu;
        // 0x184fc0: 0x2129021  addu        $s2, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fbc) {
            ctx->pc = 0x185048u;
            goto label_185048;
        }
    }
    ctx->pc = 0x184FC4u;
    // 0x184fc4: 0x18a040  sll         $s4, $t8, 1
    ctx->pc = 0x184fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x184fc8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x184fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x184fcc: 0x96310000  lhu         $s1, 0x0($s1)
    ctx->pc = 0x184fccu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x184fd0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x184FD0u;
    {
        const bool branch_taken_0x184fd0 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x184FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FD0u;
        // 0x184fd4: 0x11a042  srl         $s4, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fd0) {
            ctx->pc = 0x184FE4u;
            goto label_184fe4;
        }
    }
    ctx->pc = 0x184FD8u;
    // 0x184fd8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x184fd8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184fdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x184FDCu;
    {
        const bool branch_taken_0x184fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FDCu;
        // 0x184fe0: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fdc) {
            ctx->pc = 0x184FFCu;
            goto label_184ffc;
        }
    }
    ctx->pc = 0x184FE4u;
label_184fe4:
    // 0x184fe4: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x184fe4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x184fe8: 0x291a025  or          $s4, $s4, $s1
    ctx->pc = 0x184fe8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 17));
    // 0x184fec: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x184fecu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184ff0: 0x0  nop
    ctx->pc = 0x184ff0u;
    // NOP
    // 0x184ff4: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x184ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x184ff8: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x184ff8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_184ffc:
    // 0x184ffc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x184ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x185000: 0x188840  sll         $s1, $t8, 1
    ctx->pc = 0x185000u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x185004: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x185004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185008: 0x2388821  addu        $s1, $s1, $t8
    ctx->pc = 0x185008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
    // 0x18500c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x18500cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x185010: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x185010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x185014: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x185014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x185018: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x185018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18501c: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x18501Cu;
    {
        const bool branch_taken_0x18501c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x185020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18501Cu;
        // 0x185020: 0x46057100  add.s       $f4, $f14, $f5 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[14], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18501c) {
            ctx->pc = 0x185028u;
            goto label_185028;
        }
    }
    ctx->pc = 0x185024u;
    // 0x185024: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x185024u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_185028:
    // 0x185028: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x185028u;
    {
        const bool branch_taken_0x185028 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x185028) {
            ctx->pc = 0x185040u;
            goto label_185040;
        }
    }
    ctx->pc = 0x185030u;
    // 0x185030: 0x10e4021  addu        $t0, $t0, $t6
    ctx->pc = 0x185030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x185034: 0xc50a0000  lwc1        $f10, 0x0($t0)
    ctx->pc = 0x185034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x185038: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x185038u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x18503c: 0x0  nop
    ctx->pc = 0x18503cu;
    // NOP
label_185040:
    // 0x185040: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x185040u;
    {
        const bool branch_taken_0x185040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185040u;
        // 0x185044: 0xa4f80000  sh          $t8, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185040) {
            ctx->pc = 0x185168u;
            goto label_185168;
        }
    }
    ctx->pc = 0x185048u;
label_185048:
    // 0x185048: 0x15b040  sll         $s6, $s5, 1
    ctx->pc = 0x185048u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x18504c: 0x236b821  addu        $s7, $s1, $s6
    ctx->pc = 0x18504cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x185050: 0x96e70000  lhu         $a3, 0x0($s7)
    ctx->pc = 0x185050u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x185054: 0x74200  sll         $t0, $a3, 8
    ctx->pc = 0x185054u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x185058: 0x15190007  bne         $t0, $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x185058u;
    {
        const bool branch_taken_0x185058 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 25));
        ctx->pc = 0x18505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185058u;
        // 0x18505c: 0x2d53821  addu        $a3, $s6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185058) {
            ctx->pc = 0x185078u;
            goto label_185078;
        }
    }
    ctx->pc = 0x185060u;
    // 0x185060: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x185060u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x185064: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x185064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x185068: 0xc4eb0000  lwc1        $f11, 0x0($a3)
    ctx->pc = 0x185068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x18506c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18506Cu;
    {
        const bool branch_taken_0x18506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18506Cu;
        // 0x185070: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18506c) {
            ctx->pc = 0x185168u;
            goto label_185168;
        }
    }
    ctx->pc = 0x185074u;
    // 0x185074: 0x0  nop
    ctx->pc = 0x185074u;
    // NOP
label_185078:
    // 0x185078: 0x119082b  sltu        $at, $t0, $t9
    ctx->pc = 0x185078u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x18507c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x18507Cu;
    {
        const bool branch_taken_0x18507c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18507c) {
            ctx->pc = 0x185120u;
            goto label_185120;
        }
    }
    ctx->pc = 0x185084u;
    // 0x185084: 0x96e70002  lhu         $a3, 0x2($s7)
    ctx->pc = 0x185084u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x185088: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x185088u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18508c: 0x327082b  sltu        $at, $t9, $a3
    ctx->pc = 0x18508cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x185090: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x185090u;
    {
        const bool branch_taken_0x185090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x185090) {
            ctx->pc = 0x185120u;
            goto label_185120;
        }
    }
    ctx->pc = 0x185098u;
    // 0x185098: 0x84202  srl         $t0, $t0, 8
    ctx->pc = 0x185098u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x18509c: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18509Cu;
    {
        const bool branch_taken_0x18509c = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x1850A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18509Cu;
        // 0x1850a0: 0x88842  srl         $s1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18509c) {
            ctx->pc = 0x1850B0u;
            goto label_1850b0;
        }
    }
    ctx->pc = 0x1850A4u;
    // 0x1850a4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1850a4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1850a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1850A8u;
    {
        const bool branch_taken_0x1850a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1850ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850A8u;
        // 0x1850ac: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850a8) {
            ctx->pc = 0x1850C8u;
            goto label_1850c8;
        }
    }
    ctx->pc = 0x1850B0u;
label_1850b0:
    // 0x1850b0: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x1850b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1850b4: 0x2288825  or          $s1, $s1, $t0
    ctx->pc = 0x1850b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x1850b8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1850b8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1850bc: 0x0  nop
    ctx->pc = 0x1850bcu;
    // NOP
    // 0x1850c0: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1850c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1850c4: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1850c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_1850c8:
    // 0x1850c8: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x1850c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1850cc: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1850CCu;
    {
        const bool branch_taken_0x1850cc = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x1850D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850CCu;
        // 0x1850d0: 0x74042  srl         $t0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850cc) {
            ctx->pc = 0x1850E0u;
            goto label_1850e0;
        }
    }
    ctx->pc = 0x1850D4u;
    // 0x1850d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1850d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1850d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1850D8u;
    {
        const bool branch_taken_0x1850d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1850DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850D8u;
        // 0x1850dc: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1850d8) {
            ctx->pc = 0x1850F8u;
            goto label_1850f8;
        }
    }
    ctx->pc = 0x1850E0u;
label_1850e0:
    // 0x1850e0: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x1850e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1850e4: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1850e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1850e8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1850e8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1850ec: 0x0  nop
    ctx->pc = 0x1850ecu;
    // NOP
    // 0x1850f0: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1850f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1850f4: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1850f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1850f8:
    // 0x1850f8: 0x153840  sll         $a3, $s5, 1
    ctx->pc = 0x1850f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1850fc: 0xf53821  addu        $a3, $a3, $s5
    ctx->pc = 0x1850fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x185100: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x185100u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x185104: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x185104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x185108: 0xc4e2000c  lwc1        $f2, 0xC($a3)
    ctx->pc = 0x185108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18510c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x18510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185110: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x185110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185114: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x185114u;
    {
        const bool branch_taken_0x185114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185114u;
        // 0x185118: 0xc4e30000  lwc1        $f3, 0x0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185114) {
            ctx->pc = 0x185168u;
            goto label_185168;
        }
    }
    ctx->pc = 0x18511Cu;
    // 0x18511c: 0x0  nop
    ctx->pc = 0x18511cu;
    // NOP
label_185120:
    // 0x185120: 0x11400007  beqz        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x185120u;
    {
        const bool branch_taken_0x185120 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x185120) {
            ctx->pc = 0x185140u;
            goto label_185140;
        }
    }
    ctx->pc = 0x185128u;
    // 0x185128: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x185128u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x18512c: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x18512Cu;
    {
        const bool branch_taken_0x18512c = (GPR_S64(ctx, 21) >= 0);
        if (branch_taken_0x18512c) {
            ctx->pc = 0x185158u;
            goto label_185158;
        }
    }
    ctx->pc = 0x185134u;
    // 0x185134: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x185134u;
    {
        const bool branch_taken_0x185134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185134u;
        // 0x185138: 0x300a82d  daddu       $s5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185134) {
            ctx->pc = 0x185158u;
            goto label_185158;
        }
    }
    ctx->pc = 0x18513Cu;
    // 0x18513c: 0x0  nop
    ctx->pc = 0x18513cu;
    // NOP
label_185140:
    // 0x185140: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x185140u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x185144: 0x315082a  slt         $at, $t8, $s5
    ctx->pc = 0x185144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x185148: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x185148u;
    {
        const bool branch_taken_0x185148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x185148) {
            ctx->pc = 0x185158u;
            goto label_185158;
        }
    }
    ctx->pc = 0x185150u;
    // 0x185150: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x185150u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185154: 0x0  nop
    ctx->pc = 0x185154u;
    // NOP
label_185158:
    // 0x185158: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x185158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18515c: 0x14e0ffba  bnez        $a3, . + 4 + (-0x46 << 2)
    ctx->pc = 0x18515Cu;
    {
        const bool branch_taken_0x18515c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x185160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18515Cu;
        // 0x185160: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18515c) {
            ctx->pc = 0x185048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185048;
        }
    }
    ctx->pc = 0x185164u;
    // 0x185164: 0x0  nop
    ctx->pc = 0x185164u;
    // NOP
label_185168:
    // 0x185168: 0x8c8701e8  lw          $a3, 0x1E8($a0)
    ctx->pc = 0x185168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x18516c: 0x1a73821  addu        $a3, $t5, $a3
    ctx->pc = 0x18516cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x185170: 0xef3821  addu        $a3, $a3, $t7
    ctx->pc = 0x185170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x185174: 0x1660001a  bnez        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x185174u;
    {
        const bool branch_taken_0x185174 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x185178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185174u;
        // 0x185178: 0xa4f50140  sh          $s5, 0x140($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 320), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185174) {
            ctx->pc = 0x1851E0u;
            goto label_1851e0;
        }
    }
    ctx->pc = 0x18517Cu;
    // 0x18517c: 0x46052281  sub.s       $f10, $f4, $f5
    ctx->pc = 0x18517cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x185180: 0x460a7443  div.s       $f17, $f14, $f10
    ctx->pc = 0x185180u;
    { if (ctx->f[10] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[17] = FPU_DIV_S(ctx->f[14], ctx->f[10]); }
    // 0x185184: 0x460534c1  sub.s       $f19, $f6, $f5
    ctx->pc = 0x185184u;
    ctx->f[19] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x185188: 0x46139c82  mul.s       $f18, $f19, $f19
    ctx->pc = 0x185188u;
    ctx->f[18] = FPU_MUL_S(ctx->f[19], ctx->f[19]);
    // 0x18518c: 0x46118c02  mul.s       $f16, $f17, $f17
    ctx->pc = 0x18518cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
    // 0x185190: 0x46139282  mul.s       $f10, $f18, $f19
    ctx->pc = 0x185190u;
    ctx->f[10] = FPU_MUL_S(ctx->f[18], ctx->f[19]);
    // 0x185194: 0x460a83c2  mul.s       $f15, $f16, $f10
    ctx->pc = 0x185194u;
    ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[10]);
    // 0x185198: 0x46126282  mul.s       $f10, $f12, $f18
    ctx->pc = 0x185198u;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[18]);
    // 0x18519c: 0x46105402  mul.s       $f16, $f10, $f16
    ctx->pc = 0x18519cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[10], ctx->f[16]);
    // 0x1851a0: 0x461192c2  mul.s       $f11, $f18, $f17
    ctx->pc = 0x1851a0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[18], ctx->f[17]);
    // 0x1851a4: 0x460f6a82  mul.s       $f10, $f13, $f15
    ctx->pc = 0x1851a4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
    // 0x1851a8: 0x46115442  mul.s       $f17, $f10, $f17
    ctx->pc = 0x1851a8u;
    ctx->f[17] = FPU_MUL_S(ctx->f[10], ctx->f[17]);
    // 0x1851ac: 0x460b7bc1  sub.s       $f15, $f15, $f11
    ctx->pc = 0x1851acu;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[11]);
    // 0x1851b0: 0x460b7a81  sub.s       $f10, $f15, $f11
    ctx->pc = 0x1851b0u;
    ctx->f[10] = FPU_SUB_S(ctx->f[15], ctx->f[11]);
    // 0x1851b4: 0x46108ac1  sub.s       $f11, $f17, $f16
    ctx->pc = 0x1851b4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x1851b8: 0x460b72c0  add.s       $f11, $f14, $f11
    ctx->pc = 0x1851b8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x1851bc: 0x460a9a80  add.s       $f10, $f19, $f10
    ctx->pc = 0x1851bcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[19], ctx->f[10]);
    // 0x1851c0: 0x460b181a  mula.s      $f3, $f11
    ctx->pc = 0x1851c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[11]));
    // 0x1851c4: 0x46008ac7  neg.s       $f11, $f17
    ctx->pc = 0x1851c4u;
    ctx->f[11] = FPU_NEG_S(ctx->f[17]);
    // 0x1851c8: 0x46105ac0  add.s       $f11, $f11, $f16
    ctx->pc = 0x1851c8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[16]);
    // 0x1851cc: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x1851ccu;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x1851d0: 0x460b12dc  madd.s      $f11, $f2, $f11
    ctx->pc = 0x1851d0u;
    ctx->f[11] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[11]));
    // 0x1851d4: 0x460b5018  adda.s      $f10, $f11
    ctx->pc = 0x1851d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[10], ctx->f[11]));
    // 0x1851d8: 0x460f02dc  madd.s      $f11, $f0, $f15
    ctx->pc = 0x1851d8u;
    ctx->f[11] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[15]));
    // 0x1851dc: 0x0  nop
    ctx->pc = 0x1851dcu;
    // NOP
label_1851e0:
    // 0x1851e0: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1851E0u;
    {
        const bool branch_taken_0x1851e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851e0) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x1851E8u;
    // 0x1851e8: 0x46095836  c.le.s      $f11, $f9
    ctx->pc = 0x1851e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[11], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1851ec: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1851ECu;
    {
        const bool branch_taken_0x1851ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1851ec) {
            ctx->pc = 0x185220u;
            goto label_185220;
        }
    }
    ctx->pc = 0x1851F4u;
    // 0x1851f4: 0x0  nop
    ctx->pc = 0x1851f4u;
    // NOP
label_1851f8:
    // 0x1851f8: 0x46085ac1  sub.s       $f11, $f11, $f8
    ctx->pc = 0x1851f8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[8]);
    // 0x1851fc: 0x46095836  c.le.s      $f11, $f9
    ctx->pc = 0x1851fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[11], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185200: 0x0  nop
    ctx->pc = 0x185200u;
    // NOP
    // 0x185204: 0x0  nop
    ctx->pc = 0x185204u;
    // NOP
    // 0x185208: 0x0  nop
    ctx->pc = 0x185208u;
    // NOP
    // 0x18520c: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x18520Cu;
    {
        const bool branch_taken_0x18520c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18520c) {
            ctx->pc = 0x1851F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1851f8;
        }
    }
    ctx->pc = 0x185214u;
    // 0x185214: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x185214u;
    {
        const bool branch_taken_0x185214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185214) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x18521Cu;
    // 0x18521c: 0x0  nop
    ctx->pc = 0x18521cu;
    // NOP
label_185220:
    // 0x185220: 0x46075834  c.lt.s      $f11, $f7
    ctx->pc = 0x185220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185224: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x185224u;
    {
        const bool branch_taken_0x185224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185224) {
            ctx->pc = 0x185250u;
            goto label_185250;
        }
    }
    ctx->pc = 0x18522Cu;
    // 0x18522c: 0x0  nop
    ctx->pc = 0x18522cu;
    // NOP
label_185230:
    // 0x185230: 0x46085ac0  add.s       $f11, $f11, $f8
    ctx->pc = 0x185230u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
    // 0x185234: 0x46075834  c.lt.s      $f11, $f7
    ctx->pc = 0x185234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185238: 0x0  nop
    ctx->pc = 0x185238u;
    // NOP
    // 0x18523c: 0x0  nop
    ctx->pc = 0x18523cu;
    // NOP
    // 0x185240: 0x0  nop
    ctx->pc = 0x185240u;
    // NOP
    // 0x185244: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x185244u;
    {
        const bool branch_taken_0x185244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185244) {
            ctx->pc = 0x185230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185230;
        }
    }
    ctx->pc = 0x18524Cu;
    // 0x18524c: 0x0  nop
    ctx->pc = 0x18524cu;
    // NOP
label_185250:
    // 0x185250: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x185250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x185254: 0xe4ab0000  swc1        $f11, 0x0($a1)
    ctx->pc = 0x185254u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x185258: 0x28670003  slti        $a3, $v1, 0x3
    ctx->pc = 0x185258u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18525c: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x18525cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x185260: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x185260u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x185264: 0x14e0ff44  bnez        $a3, . + 4 + (-0xBC << 2)
    ctx->pc = 0x185264u;
    {
        const bool branch_taken_0x185264 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x185268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185264u;
        // 0x185268: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185264) {
            ctx->pc = 0x184F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184f78;
        }
    }
    ctx->pc = 0x18526Cu;
    // 0x18526c: 0x0  nop
    ctx->pc = 0x18526cu;
    // NOP
label_185270:
    // 0x185270: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x185270u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185274: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x185274u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185278: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x185278u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18527c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18527cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185280: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18528c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18528cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185290: 0x3e00008  jr          $ra
    ctx->pc = 0x185290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185290u;
        // 0x185294: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185298u;
}
