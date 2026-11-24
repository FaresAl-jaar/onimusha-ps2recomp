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

// Function: sub_002BB2F0
// Address: 0x2bb2f0 - 0x2bc04c
void sub_002BB2F0_0x2bb2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB2F0_0x2bb2f0");
#endif

    switch (ctx->pc) {
        case 0x2bb37cu: goto label_2bb37c;
        case 0x2bb518u: goto label_2bb518;
        case 0x2bb568u: goto label_2bb568;
        case 0x2bb578u: goto label_2bb578;
        case 0x2bb5e4u: goto label_2bb5e4;
        case 0x2bb620u: goto label_2bb620;
        case 0x2bb65cu: goto label_2bb65c;
        case 0x2bb6a4u: goto label_2bb6a4;
        case 0x2bb6bcu: goto label_2bb6bc;
        case 0x2bb6dcu: goto label_2bb6dc;
        case 0x2bb748u: goto label_2bb748;
        case 0x2bb768u: goto label_2bb768;
        case 0x2bb78cu: goto label_2bb78c;
        case 0x2bb7d8u: goto label_2bb7d8;
        case 0x2bb84cu: goto label_2bb84c;
        case 0x2bb860u: goto label_2bb860;
        case 0x2bb874u: goto label_2bb874;
        case 0x2bb8dcu: goto label_2bb8dc;
        case 0x2bb92cu: goto label_2bb92c;
        case 0x2bb98cu: goto label_2bb98c;
        case 0x2bbb54u: goto label_2bbb54;
        case 0x2bbbc0u: goto label_2bbbc0;
        case 0x2bbc34u: goto label_2bbc34;
        case 0x2bbca8u: goto label_2bbca8;
        case 0x2bbd20u: goto label_2bbd20;
        case 0x2bbd7cu: goto label_2bbd7c;
        case 0x2bbd8cu: goto label_2bbd8c;
        case 0x2bbda0u: goto label_2bbda0;
        case 0x2bbf80u: goto label_2bbf80;
        default: break;
    }

    ctx->pc = 0x2bb2f0u;

    // 0x2bb2f0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2bb2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2bb2f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2bb2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bb2f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2bb2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2bb2fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2bb2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2bb300: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2bb300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2bb304: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2bb304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2bb308: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2bb308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2bb30c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bb30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2bb310: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bb310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb314: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bb314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2bb318: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bb318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bb31c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bb31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bb320: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2bb320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bb324: 0x90880047  lbu         $t0, 0x47($a0)
    ctx->pc = 0x2bb324u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 71)));
    // 0x2bb328: 0x1100007d  beqz        $t0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2BB328u;
    {
        const bool branch_taken_0x2bb328 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB328u;
        // 0x2bb32c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb328) {
            ctx->pc = 0x2BB520u;
            goto label_2bb520;
        }
    }
    ctx->pc = 0x2BB330u;
    // 0x2bb330: 0x8f838b34  lw          $v1, -0x74CC($gp)
    ctx->pc = 0x2bb330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bb334: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x2bb334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2bb338: 0x928700ea  lbu         $a3, 0xEA($s4)
    ctx->pc = 0x2bb338u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x2bb33c: 0x2cc10007  sltiu       $at, $a2, 0x7
    ctx->pc = 0x2bb33cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2bb340: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x2bb340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bb344: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2bb344u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2bb348: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
    ctx->pc = 0x2BB348u;
    {
        const bool branch_taken_0x2bb348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB348u;
        // 0x2bb34c: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb348) {
            ctx->pc = 0x2BB518u;
            goto label_2bb518;
        }
    }
    ctx->pc = 0x2BB350u;
    // 0x2bb350: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2bb350u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2bb354: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2bb354u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2bb358: 0x24e77720  addiu       $a3, $a3, 0x7720
    ctx->pc = 0x2bb358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30496));
    // 0x2bb35c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2bb35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2bb360: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2bb360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bb364: 0xc00008  jr          $a2
    ctx->pc = 0x2BB364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BB370u: goto label_2bb370;
            case 0x2BB4C8u: goto label_2bb4c8;
            case 0x2BB4F8u: goto label_2bb4f8;
            case 0x2BB508u: goto label_2bb508;
            case 0x2BB518u: goto label_2bb518;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB364u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BB36Cu;
    // 0x2bb36c: 0x0  nop
    ctx->pc = 0x2bb36cu;
    // NOP
label_2bb370:
    // 0x2bb370: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2bb370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2bb374: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB374u;
    {
        const bool branch_taken_0x2bb374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB374u;
        // 0x2bb378: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb374) {
            ctx->pc = 0x2BB398u;
            goto label_2bb398;
        }
    }
    ctx->pc = 0x2BB37Cu;
label_2bb37c:
    // 0x2bb37c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2bb37cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb380: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2bb380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2bb384: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bb384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2bb388: 0x0  nop
    ctx->pc = 0x2bb388u;
    // NOP
    // 0x2bb38c: 0x0  nop
    ctx->pc = 0x2bb38cu;
    // NOP
    // 0x2bb390: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BB390u;
    {
        const bool branch_taken_0x2bb390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb390) {
            ctx->pc = 0x2BB37Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb37c;
        }
    }
    ctx->pc = 0x2BB398u;
label_2bb398:
    // 0x2bb398: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2bb398u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb39c: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2bb39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2bb3a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2bb3a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb3a4: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x2bb3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2bb3a8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2bb3a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb3ac: 0x0  nop
    ctx->pc = 0x2bb3acu;
    // NOP
    // 0x2bb3b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bb3b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bb3b4: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x2bb3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2bb3b8: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x2bb3b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2bb3bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2bb3bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb3c0: 0x0  nop
    ctx->pc = 0x2bb3c0u;
    // NOP
    // 0x2bb3c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bb3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bb3c8: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x2bb3c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2bb3cc: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x2bb3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bb3d0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2bb3d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb3d4: 0x0  nop
    ctx->pc = 0x2bb3d4u;
    // NOP
    // 0x2bb3d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bb3d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bb3dc: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2bb3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2bb3e0: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x2bb3e0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x2bb3e4: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x2bb3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bb3e8: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x2bb3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb3ec: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2bb3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb3f0: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2bb3f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2bb3f4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2bb3f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2bb3f8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2bb3f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2bb3fc: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x2bb3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2bb400: 0x46010044  c1          0x10044
    ctx->pc = 0x2bb400u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x2bb404: 0x0  nop
    ctx->pc = 0x2bb404u;
    // NOP
    // 0x2bb408: 0x0  nop
    ctx->pc = 0x2bb408u;
    // NOP
    // 0x2bb40c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bb40cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb410: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB410u;
    {
        const bool branch_taken_0x2bb410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bb410) {
            ctx->pc = 0x2BB428u;
            goto label_2bb428;
        }
    }
    ctx->pc = 0x2BB418u;
    // 0x2bb418: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bb418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bb41c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2BB41Cu;
    {
        const bool branch_taken_0x2bb41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB41Cu;
        // 0x2bb420: 0xa2830047  sb          $v1, 0x47($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 71), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb41c) {
            ctx->pc = 0x2BB518u;
            goto label_2bb518;
        }
    }
    ctx->pc = 0x2BB424u;
    // 0x2bb424: 0x0  nop
    ctx->pc = 0x2bb424u;
    // NOP
label_2bb428:
    // 0x2bb428: 0x8064000c  lb          $a0, 0xC($v1)
    ctx->pc = 0x2bb428u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2bb42c: 0x866500c2  lh          $a1, 0xC2($s3)
    ctx->pc = 0x2bb42cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x2bb430: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2bb430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bb434: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2bb434u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2bb438: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB438u;
    {
        const bool branch_taken_0x2bb438 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x2bb438) {
            ctx->pc = 0x2BB444u;
            goto label_2bb444;
        }
    }
    ctx->pc = 0x2BB440u;
    // 0x2bb440: 0x42023  negu        $a0, $a0
    ctx->pc = 0x2bb440u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_2bb444:
    // 0x2bb444: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x2bb444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2bb448: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB448u;
    {
        const bool branch_taken_0x2bb448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb448) {
            ctx->pc = 0x2BB470u;
            goto label_2bb470;
        }
    }
    ctx->pc = 0x2BB450u;
    // 0x2bb450: 0x92830047  lbu         $v1, 0x47($s4)
    ctx->pc = 0x2bb450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
    // 0x2bb454: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bb454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bb458: 0xa2830047  sb          $v1, 0x47($s4)
    ctx->pc = 0x2bb458u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb45c: 0xde630500  ld          $v1, 0x500($s3)
    ctx->pc = 0x2bb45cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 1280)));
    // 0x2bb460: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2bb460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2bb464: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BB464u;
    {
        const bool branch_taken_0x2bb464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB464u;
        // 0x2bb468: 0xfe630500  sd          $v1, 0x500($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 1280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb464) {
            ctx->pc = 0x2BB498u;
            goto label_2bb498;
        }
    }
    ctx->pc = 0x2BB46Cu;
    // 0x2bb46c: 0x0  nop
    ctx->pc = 0x2bb46cu;
    // NOP
label_2bb470:
    // 0x2bb470: 0xa26004ee  sb          $zero, 0x4EE($s3)
    ctx->pc = 0x2bb470u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1262), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb474: 0x8064000c  lb          $a0, 0xC($v1)
    ctx->pc = 0x2bb474u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2bb478: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2bb478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bb47c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bb47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2bb480: 0xa66404ec  sh          $a0, 0x4EC($s3)
    ctx->pc = 0x2bb480u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1260), (uint16_t)GPR_U32(ctx, 4));
    // 0x2bb484: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2bb484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2bb488: 0xde640500  ld          $a0, 0x500($s3)
    ctx->pc = 0x2bb488u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 1280)));
    // 0x2bb48c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2bb48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2bb490: 0xfe630500  sd          $v1, 0x500($s3)
    ctx->pc = 0x2bb490u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1280), GPR_U64(ctx, 3));
    // 0x2bb494: 0x0  nop
    ctx->pc = 0x2bb494u;
    // NOP
label_2bb498:
    // 0x2bb498: 0x92830046  lbu         $v1, 0x46($s4)
    ctx->pc = 0x2bb498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 70)));
    // 0x2bb49c: 0x28610078  slti        $at, $v1, 0x78
    ctx->pc = 0x2bb49cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x2bb4a0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB4A0u;
    {
        const bool branch_taken_0x2bb4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb4a0) {
            ctx->pc = 0x2BB4B8u;
            goto label_2bb4b8;
        }
    }
    ctx->pc = 0x2BB4A8u;
    // 0x2bb4a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bb4ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2BB4ACu;
    {
        const bool branch_taken_0x2bb4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4ACu;
        // 0x2bb4b0: 0xa2830046  sb          $v1, 0x46($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 70), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb4ac) {
            ctx->pc = 0x2BB518u;
            goto label_2bb518;
        }
    }
    ctx->pc = 0x2BB4B4u;
    // 0x2bb4b4: 0x0  nop
    ctx->pc = 0x2bb4b4u;
    // NOP
label_2bb4b8:
    // 0x2bb4b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bb4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bb4bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BB4BCu;
    {
        const bool branch_taken_0x2bb4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4BCu;
        // 0x2bb4c0: 0xa2830047  sb          $v1, 0x47($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 71), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb4bc) {
            ctx->pc = 0x2BB518u;
            goto label_2bb518;
        }
    }
    ctx->pc = 0x2BB4C4u;
    // 0x2bb4c4: 0x0  nop
    ctx->pc = 0x2bb4c4u;
    // NOP
label_2bb4c8:
    // 0x2bb4c8: 0xde630500  ld          $v1, 0x500($s3)
    ctx->pc = 0x2bb4c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 1280)));
    // 0x2bb4cc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2bb4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2bb4d0: 0xfe630500  sd          $v1, 0x500($s3)
    ctx->pc = 0x2bb4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1280), GPR_U64(ctx, 3));
    // 0x2bb4d4: 0x8e6308cc  lw          $v1, 0x8CC($s3)
    ctx->pc = 0x2bb4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2252)));
    // 0x2bb4d8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2BB4D8u;
    {
        const bool branch_taken_0x2bb4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb4d8) {
            ctx->pc = 0x2BB518u;
            goto label_2bb518;
        }
    }
    ctx->pc = 0x2BB4E0u;
    // 0x2bb4e0: 0xae6008cc  sw          $zero, 0x8CC($s3)
    ctx->pc = 0x2bb4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2252), GPR_U32(ctx, 0));
    // 0x2bb4e4: 0x92830047  lbu         $v1, 0x47($s4)
    ctx->pc = 0x2bb4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
    // 0x2bb4e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bb4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bb4ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BB4ECu;
    {
        const bool branch_taken_0x2bb4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4ECu;
        // 0x2bb4f0: 0xa2830047  sb          $v1, 0x47($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 71), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb4ec) {
            ctx->pc = 0x2BB518u;
            goto label_2bb518;
        }
    }
    ctx->pc = 0x2BB4F4u;
    // 0x2bb4f4: 0x0  nop
    ctx->pc = 0x2bb4f4u;
    // NOP
label_2bb4f8:
    // 0x2bb4f8: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x2bb4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2bb4fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB4FCu;
    {
        const bool branch_taken_0x2bb4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4FCu;
        // 0x2bb500: 0xa2830047  sb          $v1, 0x47($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 71), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb4fc) {
            ctx->pc = 0x2BB518u;
            goto label_2bb518;
        }
    }
    ctx->pc = 0x2BB504u;
    // 0x2bb504: 0x0  nop
    ctx->pc = 0x2bb504u;
    // NOP
label_2bb508:
    // 0x2bb508: 0xa2800046  sb          $zero, 0x46($s4)
    ctx->pc = 0x2bb508u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb50c: 0xa2800047  sb          $zero, 0x47($s4)
    ctx->pc = 0x2bb50cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb510: 0xc0afd08  jal         func_2BF420
    ctx->pc = 0x2BB510u;
    SET_GPR_U32(ctx, 31, 0x2BB518u);
    ctx->pc = 0x2BB514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB510u;
    // 0x2bb514: 0x928600eb  lbu         $a2, 0xEB($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 235)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF420u, 0x2BB510u, 0x2BB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB518u;
label_2bb518:
    // 0x2bb518: 0x100002bf  b           . + 4 + (0x2BF << 2)
    ctx->pc = 0x2BB518u;
    {
        const bool branch_taken_0x2bb518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb518) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB520u;
label_2bb520:
    // 0x2bb520: 0x92830035  lbu         $v1, 0x35($s4)
    ctx->pc = 0x2bb520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
    // 0x2bb524: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2BB524u;
    {
        const bool branch_taken_0x2bb524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB524u;
        // 0x2bb528: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb524) {
            ctx->pc = 0x2BB6B0u;
            goto label_2bb6b0;
        }
    }
    ctx->pc = 0x2BB52Cu;
    // 0x2bb52c: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2BB52Cu;
    {
        const bool branch_taken_0x2bb52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bb52c) {
            ctx->pc = 0x2BB6B0u;
            goto label_2bb6b0;
        }
    }
    ctx->pc = 0x2BB534u;
    // 0x2bb534: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bb534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb538: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2BB538u;
    {
        const bool branch_taken_0x2bb538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB538u;
        // 0x2bb53c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb538) {
            ctx->pc = 0x2BB6B0u;
            goto label_2bb6b0;
        }
    }
    ctx->pc = 0x2BB540u;
    // 0x2bb540: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2BB540u;
    {
        const bool branch_taken_0x2bb540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bb540) {
            ctx->pc = 0x2BB628u;
            goto label_2bb628;
        }
    }
    ctx->pc = 0x2BB548u;
    // 0x2bb548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb54c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB54Cu;
    {
        const bool branch_taken_0x2bb54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bb54c) {
            ctx->pc = 0x2BB560u;
            goto label_2bb560;
        }
    }
    ctx->pc = 0x2BB554u;
    // 0x2bb554: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2BB554u;
    {
        const bool branch_taken_0x2bb554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb554) {
            ctx->pc = 0x2BB6B0u;
            goto label_2bb6b0;
        }
    }
    ctx->pc = 0x2BB55Cu;
    // 0x2bb55c: 0x0  nop
    ctx->pc = 0x2bb55cu;
    // NOP
label_2bb560:
    // 0x2bb560: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2BB560u;
    SET_GPR_U32(ctx, 31, 0x2BB568u);
    ctx->pc = 0x2BB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB560u;
    // 0x2bb564: 0x8e850074  lw          $a1, 0x74($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2BB560u, 0x2BB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB568u;
label_2bb568:
    // 0x2bb568: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB568u;
    {
        const bool branch_taken_0x2bb568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB568u;
        // 0x2bb56c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb568) {
            ctx->pc = 0x2BB580u;
            goto label_2bb580;
        }
    }
    ctx->pc = 0x2BB570u;
    // 0x2bb570: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BB570u;
    SET_GPR_U32(ctx, 31, 0x2BB578u);
    ctx->pc = 0x2BB574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB570u;
    // 0x2bb574: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BB570u, 0x2BB578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB578u;
label_2bb578:
    // 0x2bb578: 0x100002a7  b           . + 4 + (0x2A7 << 2)
    ctx->pc = 0x2BB578u;
    {
        const bool branch_taken_0x2bb578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb578) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB580u;
label_2bb580:
    // 0x2bb580: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2bb580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb584: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2bb584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2bb588: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2bb588u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bb58c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB58Cu;
    {
        const bool branch_taken_0x2bb58c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB58Cu;
        // 0x2bb590: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb58c) {
            ctx->pc = 0x2BB598u;
            goto label_2bb598;
        }
    }
    ctx->pc = 0x2BB594u;
    // 0x2bb594: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bb594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb598:
    // 0x2bb598: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB598u;
    {
        const bool branch_taken_0x2bb598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb598) {
            ctx->pc = 0x2BB5B0u;
            goto label_2bb5b0;
        }
    }
    ctx->pc = 0x2BB5A0u;
    // 0x2bb5a0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2bb5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2bb5a4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2bb5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2bb5a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB5A8u;
    {
        const bool branch_taken_0x2bb5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5A8u;
        // 0x2bb5ac: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb5a8) {
            ctx->pc = 0x2BB5B4u;
            goto label_2bb5b4;
        }
    }
    ctx->pc = 0x2BB5B0u;
label_2bb5b0:
    // 0x2bb5b0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2bb5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2bb5b4:
    // 0x2bb5b4: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2bb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2bb5b8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bb5bc: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x2bb5bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bb5c0: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x2bb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x2bb5c4: 0x8c660094  lw          $a2, 0x94($v1)
    ctx->pc = 0x2bb5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2bb5c8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2bb5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2bb5cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bb5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bb5d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bb5d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bb5d8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bb5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bb5dc: 0xc0ae8b8  jal         func_2BA2E0
    ctx->pc = 0x2BB5DCu;
    SET_GPR_U32(ctx, 31, 0x2BB5E4u);
    ctx->pc = 0x2BB5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5DCu;
    // 0x2bb5e0: 0x24c50030  addiu       $a1, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA2E0u, 0x2BB5DCu, 0x2BB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5E4u;
label_2bb5e4:
    // 0x2bb5e4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2BB5E4u;
    {
        const bool branch_taken_0x2bb5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5e4) {
            ctx->pc = 0x2BB6B0u;
            goto label_2bb6b0;
        }
    }
    ctx->pc = 0x2BB5ECu;
    // 0x2bb5ec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2bb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2bb5f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bb5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb5f4: 0x24425028  addiu       $v0, $v0, 0x5028
    ctx->pc = 0x2bb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20520));
    // 0x2bb5f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb5fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2bb5fcu;
    { uint32_t bits = FAST_READ32(0x4E5028u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb600: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2bb600u;
    { uint32_t bits = FAST_READ32(0x4E502Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb604: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bb604u;
    { uint32_t bits = FAST_READ32(0x4E5030u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb608: 0xe6820014  swc1        $f2, 0x14($s4)
    ctx->pc = 0x2bb608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x2bb60c: 0xe6810018  swc1        $f1, 0x18($s4)
    ctx->pc = 0x2bb60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x2bb610: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x2bb610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2bb614: 0x8e860028  lw          $a2, 0x28($s4)
    ctx->pc = 0x2bb614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2bb618: 0xc0af930  jal         func_2BE4C0
    ctx->pc = 0x2BB618u;
    SET_GPR_U32(ctx, 31, 0x2BB620u);
    ctx->pc = 0x2BB61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB618u;
    // 0x2bb61c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE4C0u, 0x2BB618u, 0x2BB620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB620u;
label_2bb620:
    // 0x2bb620: 0x1000027d  b           . + 4 + (0x27D << 2)
    ctx->pc = 0x2BB620u;
    {
        const bool branch_taken_0x2bb620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb620) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB628u;
label_2bb628:
    // 0x2bb628: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2bb628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2bb62c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bb630: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x2bb630u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bb634: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x2bb634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x2bb638: 0x268400b0  addiu       $a0, $s4, 0xB0
    ctx->pc = 0x2bb638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x2bb63c: 0x8c660094  lw          $a2, 0x94($v1)
    ctx->pc = 0x2bb63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2bb640: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2bb640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2bb644: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bb644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bb648: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bb648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bb64c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bb650: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bb650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bb654: 0xc0ae8b8  jal         func_2BA2E0
    ctx->pc = 0x2BB654u;
    SET_GPR_U32(ctx, 31, 0x2BB65Cu);
    ctx->pc = 0x2BB658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB654u;
    // 0x2bb658: 0x24c50030  addiu       $a1, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA2E0u, 0x2BB654u, 0x2BB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB65Cu;
label_2bb65c:
    // 0x2bb65c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BB65Cu;
    {
        const bool branch_taken_0x2bb65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb65c) {
            ctx->pc = 0x2BB6B0u;
            goto label_2bb6b0;
        }
    }
    ctx->pc = 0x2BB664u;
    // 0x2bb664: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bb664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2bb668: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bb668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb66c: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x2bb66cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x2bb670: 0x26990008  addiu       $t9, $s4, 0x8
    ctx->pc = 0x2bb670u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2bb674: 0x96830080  lhu         $v1, 0x80($s4)
    ctx->pc = 0x2bb674u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2bb678: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2bb678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2bb67c: 0x24425038  addiu       $v0, $v0, 0x5038
    ctx->pc = 0x2bb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20536));
    // 0x2bb680: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb684: 0xa6830022  sh          $v1, 0x22($s4)
    ctx->pc = 0x2bb684u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bb688: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2bb688u;
    { uint32_t bits = FAST_READ32(0x4E5038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb68c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2bb68cu;
    { uint32_t bits = FAST_READ32(0x4E503Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb690: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2bb690u;
    { uint32_t bits = FAST_READ32(0x4E5040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb694: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2bb694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2bb698: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x2bb698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2bb69c: 0xc040250  jal         func_100940
    ctx->pc = 0x2BB69Cu;
    SET_GPR_U32(ctx, 31, 0x2BB6A4u);
    ctx->pc = 0x2BB6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB69Cu;
    // 0x2bb6a0: 0xe6800010  swc1        $f0, 0x10($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2BB69Cu, 0x2BB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6A4u;
label_2bb6a4:
    // 0x2bb6a4: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x2BB6A4u;
    {
        const bool branch_taken_0x2bb6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb6a4) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB6ACu;
    // 0x2bb6ac: 0x0  nop
    ctx->pc = 0x2bb6acu;
    // NOP
label_2bb6b0:
    // 0x2bb6b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6b4: 0xc0b222c  jal         func_2C88B0
    ctx->pc = 0x2BB6B4u;
    SET_GPR_U32(ctx, 31, 0x2BB6BCu);
    ctx->pc = 0x2BB6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6B4u;
    // 0x2bb6b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C88B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C88B0u, 0x2BB6B4u, 0x2BB6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6BCu;
label_2bb6bc:
    // 0x2bb6bc: 0x14400256  bnez        $v0, . + 4 + (0x256 << 2)
    ctx->pc = 0x2BB6BCu;
    {
        const bool branch_taken_0x2bb6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb6bc) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB6C4u;
    // 0x2bb6c4: 0x92820107  lbu         $v0, 0x107($s4)
    ctx->pc = 0x2bb6c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 263)));
    // 0x2bb6c8: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x2bb6c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x2bb6cc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB6CCu;
    {
        const bool branch_taken_0x2bb6cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6CCu;
        // 0x2bb6d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6cc) {
            ctx->pc = 0x2BB6E8u;
            goto label_2bb6e8;
        }
    }
    ctx->pc = 0x2BB6D4u;
    // 0x2bb6d4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BB6D4u;
    SET_GPR_U32(ctx, 31, 0x2BB6DCu);
    ctx->pc = 0x2BB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6D4u;
    // 0x2bb6d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BB6D4u, 0x2BB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6DCu;
label_2bb6dc:
    // 0x2bb6dc: 0x1000024e  b           . + 4 + (0x24E << 2)
    ctx->pc = 0x2BB6DCu;
    {
        const bool branch_taken_0x2bb6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb6dc) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB6E4u;
    // 0x2bb6e4: 0x0  nop
    ctx->pc = 0x2bb6e4u;
    // NOP
label_2bb6e8:
    // 0x2bb6e8: 0x92660002  lbu         $a2, 0x2($s3)
    ctx->pc = 0x2bb6e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bb6ec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2bb6f0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2bb6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2bb6f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bb6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bb6f8: 0x92910100  lbu         $s1, 0x100($s4)
    ctx->pc = 0x2bb6f8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x2bb6fc: 0x2463f388  addiu       $v1, $v1, -0xC78
    ctx->pc = 0x2bb6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964104));
    // 0x2bb700: 0x928700ea  lbu         $a3, 0xEA($s4)
    ctx->pc = 0x2bb700u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x2bb704: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bb704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bb708: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2bb708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2bb70c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2bb70cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bb710: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2bb710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2bb714: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bb714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bb718: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2bb718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2bb71c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2bb71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb720: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bb720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb724: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2bb724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb728: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x2bb728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2bb72c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bb72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bb730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bb730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bb734: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2bb734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2bb738: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bb738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bb73c: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x2bb73cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x2bb740: 0xc0c75ec  jal         func_31D7B0
    ctx->pc = 0x2BB740u;
    SET_GPR_U32(ctx, 31, 0x2BB748u);
    ctx->pc = 0x2BB744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB740u;
    // 0x2bb744: 0x244600f0  addiu       $a2, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D7B0u, 0x2BB740u, 0x2BB748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB748u;
label_2bb748:
    // 0x2bb748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb74c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB74Cu;
    {
        const bool branch_taken_0x2bb74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb74c) {
            ctx->pc = 0x2BB760u;
            goto label_2bb760;
        }
    }
    ctx->pc = 0x2BB754u;
    // 0x2bb754: 0x928300ea  lbu         $v1, 0xEA($s4)
    ctx->pc = 0x2bb754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x2bb758: 0xa28300e9  sb          $v1, 0xE9($s4)
    ctx->pc = 0x2bb758u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 233), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb75c: 0x0  nop
    ctx->pc = 0x2bb75cu;
    // NOP
label_2bb760:
    // 0x2bb760: 0x27be0108  addiu       $fp, $sp, 0x108
    ctx->pc = 0x2bb760u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2bb764: 0x0  nop
    ctx->pc = 0x2bb764u;
    // NOP
label_2bb768:
    // 0x2bb768: 0x4182b  sltu        $v1, $zero, $a0
    ctx->pc = 0x2bb768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2bb76c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2bb76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2bb770: 0x146000c5  bnez        $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2BB770u;
    {
        const bool branch_taken_0x2bb770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb770) {
            ctx->pc = 0x2BBA88u;
            goto label_2bba88;
        }
    }
    ctx->pc = 0x2BB778u;
    // 0x2bb778: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2bb778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2bb77c: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB77Cu;
    {
        const bool branch_taken_0x2bb77c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2BB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB77Cu;
        // 0x2bb780: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb77c) {
            ctx->pc = 0x2BB798u;
            goto label_2bb798;
        }
    }
    ctx->pc = 0x2BB784u;
    // 0x2bb784: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BB784u;
    SET_GPR_U32(ctx, 31, 0x2BB78Cu);
    ctx->pc = 0x2BB788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB784u;
    // 0x2bb788: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BB784u, 0x2BB78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB78Cu;
label_2bb78c:
    // 0x2bb78c: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x2BB78Cu;
    {
        const bool branch_taken_0x2bb78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb78c) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB794u;
    // 0x2bb794: 0x0  nop
    ctx->pc = 0x2bb794u;
    // NOP
label_2bb798:
    // 0x2bb798: 0x928600eb  lbu         $a2, 0xEB($s4)
    ctx->pc = 0x2bb798u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 235)));
    // 0x2bb79c: 0x928500ea  lbu         $a1, 0xEA($s4)
    ctx->pc = 0x2bb79cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x2bb7a0: 0x14a6000b  bne         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2BB7A0u;
    {
        const bool branch_taken_0x2bb7a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2bb7a0) {
            ctx->pc = 0x2BB7D0u;
            goto label_2bb7d0;
        }
    }
    ctx->pc = 0x2BB7A8u;
    // 0x2bb7a8: 0xde630500  ld          $v1, 0x500($s3)
    ctx->pc = 0x2bb7a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 1280)));
    // 0x2bb7ac: 0x34630801  ori         $v1, $v1, 0x801
    ctx->pc = 0x2bb7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2049);
    // 0x2bb7b0: 0xfe630500  sd          $v1, 0x500($s3)
    ctx->pc = 0x2bb7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1280), GPR_U64(ctx, 3));
    // 0x2bb7b4: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x2bb7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb7b8: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x2bb7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb7bc: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x2bb7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb7c0: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2bb7c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2bb7c4: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x2bb7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2bb7c8: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x2BB7C8u;
    {
        const bool branch_taken_0x2bb7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7C8u;
        // 0x2bb7cc: 0xe6800010  swc1        $f0, 0x10($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7c8) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB7D0u;
label_2bb7d0:
    // 0x2bb7d0: 0xc0c7650  jal         func_31D940
    ctx->pc = 0x2BB7D0u;
    SET_GPR_U32(ctx, 31, 0x2BB7D8u);
    ctx->pc = 0x2BB7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB7D0u;
    // 0x2bb7d4: 0x8f848b34  lw          $a0, -0x74CC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D940u, 0x2BB7D0u, 0x2BB7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7D8u;
label_2bb7d8:
    // 0x2bb7d8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2bb7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2bb7dc: 0x14430062  bne         $v0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2BB7DCu;
    {
        const bool branch_taken_0x2bb7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bb7dc) {
            ctx->pc = 0x2BB968u;
            goto label_2bb968;
        }
    }
    ctx->pc = 0x2BB7E4u;
    // 0x2bb7e4: 0x8f838b34  lw          $v1, -0x74CC($gp)
    ctx->pc = 0x2bb7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bb7e8: 0x928400ea  lbu         $a0, 0xEA($s4)
    ctx->pc = 0x2bb7e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x2bb7ec: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x2bb7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bb7f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2bb7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bb7f4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2bb7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bb7f8: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2bb7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2bb7fc: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2BB7FCu;
    {
        const bool branch_taken_0x2bb7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb7fc) {
            ctx->pc = 0x2BB938u;
            goto label_2bb938;
        }
    }
    ctx->pc = 0x2BB804u;
    // 0x2bb804: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x2bb804u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2bb808: 0x82830103  lb          $v1, 0x103($s4)
    ctx->pc = 0x2bb808u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 259)));
    // 0x2bb80c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2bb80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2bb810: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2BB810u;
    {
        const bool branch_taken_0x2bb810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB810u;
        // 0x2bb814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb810) {
            ctx->pc = 0x2BB938u;
            goto label_2bb938;
        }
    }
    ctx->pc = 0x2BB818u;
    // 0x2bb818: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bb818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bb81c: 0xa2830047  sb          $v1, 0x47($s4)
    ctx->pc = 0x2bb81cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb820: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2bb820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2bb824: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x2bb824u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bb828: 0x928600e9  lbu         $a2, 0xE9($s4)
    ctx->pc = 0x2bb828u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 233)));
    // 0x2bb82c: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bb82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bb830: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2bb830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2bb834: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2bb834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bb838: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bb838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bb83c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bb840: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2bb840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bb844: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2BB844u;
    SET_GPR_U32(ctx, 31, 0x2BB84Cu);
    ctx->pc = 0x2BB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB844u;
    // 0x2bb848: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2BB844u, 0x2BB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB84Cu;
label_2bb84c:
    // 0x2bb84c: 0x928300ea  lbu         $v1, 0xEA($s4)
    ctx->pc = 0x2bb84cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x2bb850: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB850u;
    {
        const bool branch_taken_0x2bb850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB850u;
        // 0x2bb854: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb850) {
            ctx->pc = 0x2BB868u;
            goto label_2bb868;
        }
    }
    ctx->pc = 0x2BB858u;
    // 0x2bb858: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BB858u;
    SET_GPR_U32(ctx, 31, 0x2BB860u);
    ctx->pc = 0x2BB85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB858u;
    // 0x2bb85c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BB858u, 0x2BB860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB860u;
label_2bb860:
    // 0x2bb860: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x2BB860u;
    {
        const bool branch_taken_0x2bb860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb860) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB868u;
label_2bb868:
    // 0x2bb868: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x2bb868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2bb86c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB86Cu;
    {
        const bool branch_taken_0x2bb86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB86Cu;
        // 0x2bb870: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb86c) {
            ctx->pc = 0x2BB890u;
            goto label_2bb890;
        }
    }
    ctx->pc = 0x2BB874u;
label_2bb874:
    // 0x2bb874: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2bb874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb878: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bb878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bb87c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bb880: 0x0  nop
    ctx->pc = 0x2bb880u;
    // NOP
    // 0x2bb884: 0x0  nop
    ctx->pc = 0x2bb884u;
    // NOP
    // 0x2bb888: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BB888u;
    {
        const bool branch_taken_0x2bb888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb888) {
            ctx->pc = 0x2BB874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb874;
        }
    }
    ctx->pc = 0x2BB890u;
label_2bb890:
    // 0x2bb890: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x2bb890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb894: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x2bb894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x2bb898: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x2bb898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x2bb89c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2bb89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2bb8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb8a4: 0x0  nop
    ctx->pc = 0x2bb8a4u;
    // NOP
    // 0x2bb8a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bb8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bb8ac: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2bb8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2bb8b0: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2bb8b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bb8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb8b8: 0x0  nop
    ctx->pc = 0x2bb8b8u;
    // NOP
    // 0x2bb8bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bb8bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bb8c0: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2bb8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2bb8c4: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x2bb8c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bb8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb8cc: 0x0  nop
    ctx->pc = 0x2bb8ccu;
    // NOP
    // 0x2bb8d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bb8d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bb8d4: 0xc0c8bf0  jal         func_322FC0
    ctx->pc = 0x2BB8D4u;
    SET_GPR_U32(ctx, 31, 0x2BB8DCu);
    ctx->pc = 0x2BB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB8D4u;
    // 0x2bb8d8: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x322FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322FC0u, 0x2BB8D4u, 0x2BB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8DCu;
label_2bb8dc:
    // 0x2bb8dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb8e0: 0x4a1000b  bgez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BB8E0u;
    {
        const bool branch_taken_0x2bb8e0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x2bb8e0) {
            ctx->pc = 0x2BB910u;
            goto label_2bb910;
        }
    }
    ctx->pc = 0x2BB8E8u;
    // 0x2bb8e8: 0xde630500  ld          $v1, 0x500($s3)
    ctx->pc = 0x2bb8e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 1280)));
    // 0x2bb8ec: 0x34630801  ori         $v1, $v1, 0x801
    ctx->pc = 0x2bb8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2049);
    // 0x2bb8f0: 0xfe630500  sd          $v1, 0x500($s3)
    ctx->pc = 0x2bb8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1280), GPR_U64(ctx, 3));
    // 0x2bb8f4: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x2bb8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb8f8: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x2bb8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb8fc: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x2bb8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb900: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2bb900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2bb904: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x2bb904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2bb908: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x2BB908u;
    {
        const bool branch_taken_0x2bb908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB908u;
        // 0x2bb90c: 0xe6800010  swc1        $f0, 0x10($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb908) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB910u;
label_2bb910:
    // 0x2bb910: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x2bb910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x2bb914: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x2bb914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x2bb918: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2bb918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2bb91c: 0xae620148  sw          $v0, 0x148($s3)
    ctx->pc = 0x2bb91cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 2));
    // 0x2bb920: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2bb920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2bb924: 0xc0c8c24  jal         func_323090
    ctx->pc = 0x2BB924u;
    SET_GPR_U32(ctx, 31, 0x2BB92Cu);
    ctx->pc = 0x2BB928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB924u;
    // 0x2bb928: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323090u, 0x2BB924u, 0x2BB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB92Cu;
label_2bb92c:
    // 0x2bb92c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bb930: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BB930u;
    {
        const bool branch_taken_0x2bb930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB930u;
        // 0x2bb934: 0xa2830047  sb          $v1, 0x47($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 71), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb930) {
            ctx->pc = 0x2BB960u;
            goto label_2bb960;
        }
    }
    ctx->pc = 0x2BB938u;
label_2bb938:
    // 0x2bb938: 0xde630500  ld          $v1, 0x500($s3)
    ctx->pc = 0x2bb938u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 1280)));
    // 0x2bb93c: 0x34630801  ori         $v1, $v1, 0x801
    ctx->pc = 0x2bb93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2049);
    // 0x2bb940: 0xfe630500  sd          $v1, 0x500($s3)
    ctx->pc = 0x2bb940u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1280), GPR_U64(ctx, 3));
    // 0x2bb944: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x2bb944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb948: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x2bb948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb94c: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x2bb94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb950: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2bb950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2bb954: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x2bb954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2bb958: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x2bb958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x2bb95c: 0x0  nop
    ctx->pc = 0x2bb95cu;
    // NOP
label_2bb960:
    // 0x2bb960: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x2BB960u;
    {
        const bool branch_taken_0x2bb960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb960) {
            ctx->pc = 0x2BC018u;
            goto label_2bc018;
        }
    }
    ctx->pc = 0x2BB968u;
label_2bb968:
    // 0x2bb968: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x2bb968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2bb96c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bb96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bb970: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2bb970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2bb974: 0x904200ec  lbu         $v0, 0xEC($v0)
    ctx->pc = 0x2bb974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x2bb978: 0xa28200ea  sb          $v0, 0xEA($s4)
    ctx->pc = 0x2bb978u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 234), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bb97c: 0x928600eb  lbu         $a2, 0xEB($s4)
    ctx->pc = 0x2bb97cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 235)));
    // 0x2bb980: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2bb980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bb984: 0xc0c7650  jal         func_31D940
    ctx->pc = 0x2BB984u;
    SET_GPR_U32(ctx, 31, 0x2BB98Cu);
    ctx->pc = 0x2BB988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB984u;
    // 0x2bb988: 0x928500ea  lbu         $a1, 0xEA($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D940u, 0x2BB984u, 0x2BB98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB98Cu;
label_2bb98c:
    // 0x2bb98c: 0x928300ea  lbu         $v1, 0xEA($s4)
    ctx->pc = 0x2bb98cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x2bb990: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2bb990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bb994: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB994u;
    {
        const bool branch_taken_0x2bb994 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bb994) {
            ctx->pc = 0x2BB9A0u;
            goto label_2bb9a0;
        }
    }
    ctx->pc = 0x2BB99Cu;
    // 0x2bb99c: 0xa28600eb  sb          $a2, 0xEB($s4)
    ctx->pc = 0x2bb99cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 235), (uint8_t)GPR_U32(ctx, 6));
label_2bb9a0:
    // 0x2bb9a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2bb9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2bb9a4: 0x10c30024  beq         $a2, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BB9A4u;
    {
        const bool branch_taken_0x2bb9a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9A4u;
        // 0x2bb9a8: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb9a4) {
            ctx->pc = 0x2BBA38u;
            goto label_2bba38;
        }
    }
    ctx->pc = 0x2BB9ACu;
    // 0x2bb9ac: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x2bb9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2bb9b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2bb9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2bb9b4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2bb9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2bb9b8: 0xa06600ec  sb          $a2, 0xEC($v1)
    ctx->pc = 0x2bb9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 236), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bb9bc: 0x8f838b34  lw          $v1, -0x74CC($gp)
    ctx->pc = 0x2bb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bb9c0: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x2bb9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bb9c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bb9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bb9c8: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x2bb9c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2bb9cc: 0x773823  subu        $a3, $v1, $s7
    ctx->pc = 0x2bb9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2bb9d0: 0x1ce00003  bgtz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB9D0u;
    {
        const bool branch_taken_0x2bb9d0 = (GPR_S64(ctx, 7) > 0);
        if (branch_taken_0x2bb9d0) {
            ctx->pc = 0x2BB9E0u;
            goto label_2bb9e0;
        }
    }
    ctx->pc = 0x2BB9D8u;
    // 0x2bb9d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bb9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb9dc: 0x0  nop
    ctx->pc = 0x2bb9dcu;
    // NOP
label_2bb9e0:
    // 0x2bb9e0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bb9e0u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bb9e4: 0x48262001  qmfc2.i     $a2, $vf4
    ctx->pc = 0x2bb9e4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb9e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2bb9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2bb9ec: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x2bb9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2bb9f0: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x2bb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2bb9f4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2bb9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2bb9f8: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2bb9f8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2bb9fc: 0x0  nop
    ctx->pc = 0x2bb9fcu;
    // NOP
    // 0x2bba00: 0x0  nop
    ctx->pc = 0x2bba00u;
    // NOP
    // 0x2bba04: 0x1810  mfhi        $v1
    ctx->pc = 0x2bba04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2bba08: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2bba08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bba0c: 0xa48300f0  sh          $v1, 0xF0($a0)
    ctx->pc = 0x2bba0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bba10: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bba10u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bba14: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x2bba14u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bba18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2bba18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bba1c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2bba1cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2bba20: 0x0  nop
    ctx->pc = 0x2bba20u;
    // NOP
    // 0x2bba24: 0x0  nop
    ctx->pc = 0x2bba24u;
    // NOP
    // 0x2bba28: 0x1810  mfhi        $v1
    ctx->pc = 0x2bba28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2bba2c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2bba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2bba30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BBA30u;
    {
        const bool branch_taken_0x2bba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA30u;
        // 0x2bba34: 0xa48300f2  sh          $v1, 0xF2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 242), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba30) {
            ctx->pc = 0x2BBA78u;
            goto label_2bba78;
        }
    }
    ctx->pc = 0x2BBA38u;
label_2bba38:
    // 0x2bba38: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2bba38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2bba3c: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x2bba3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2bba40: 0x30660003  andi        $a2, $v1, 0x3
    ctx->pc = 0x2bba40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2bba44: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2bba44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2bba48: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x2bba48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2bba4c: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x2bba4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2bba50: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x2bba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2bba54: 0x906500ec  lbu         $a1, 0xEC($v1)
    ctx->pc = 0x2bba54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x2bba58: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2bba58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2bba5c: 0xa08500ec  sb          $a1, 0xEC($a0)
    ctx->pc = 0x2bba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 236), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bba60: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2bba60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2bba64: 0x84c300f0  lh          $v1, 0xF0($a2)
    ctx->pc = 0x2bba64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 240)));
    // 0x2bba68: 0xa4e300f0  sh          $v1, 0xF0($a3)
    ctx->pc = 0x2bba68u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bba6c: 0x84c300f2  lh          $v1, 0xF2($a2)
    ctx->pc = 0x2bba6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 242)));
    // 0x2bba70: 0xa4e300f2  sh          $v1, 0xF2($a3)
    ctx->pc = 0x2bba70u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bba74: 0x0  nop
    ctx->pc = 0x2bba74u;
    // NOP
label_2bba78:
    // 0x2bba78: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2bba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2bba7c: 0x30710003  andi        $s1, $v1, 0x3
    ctx->pc = 0x2bba7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2bba80: 0xa2910100  sb          $s1, 0x100($s4)
    ctx->pc = 0x2bba80u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 256), (uint8_t)GPR_U32(ctx, 17));
    // 0x2bba84: 0x0  nop
    ctx->pc = 0x2bba84u;
    // NOP
label_2bba88:
    // 0x2bba88: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x2bba88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2bba8c: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x2bba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x2bba90: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x2bba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2bba94: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x2bba94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2bba98: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x2bba98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x2bba9c: 0x908700ec  lbu         $a3, 0xEC($a0)
    ctx->pc = 0x2bba9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2bbaa0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2bbaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2bbaa4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2bbaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2bbaa8: 0x8f898b34  lw          $t1, -0x74CC($gp)
    ctx->pc = 0x2bbaa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2bbaac: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2bbaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2bbab0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2bbab0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbab4: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x2bbab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2bbab8: 0x75100  sll         $t2, $a3, 4
    ctx->pc = 0x2bbab8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2bbabc: 0x908800ec  lbu         $t0, 0xEC($a0)
    ctx->pc = 0x2bbabcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2bbac0: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x2bbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2bbac4: 0x90a700ec  lbu         $a3, 0xEC($a1)
    ctx->pc = 0x2bbac4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x2bbac8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2bbac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2bbacc: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2bbaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2bbad0: 0x24d500ec  addiu       $s5, $a2, 0xEC
    ctx->pc = 0x2bbad0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 236));
    // 0x2bbad4: 0x8d240018  lw          $a0, 0x18($t1)
    ctx->pc = 0x2bbad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x2bbad8: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x2bbad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2bbadc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2bbadcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2bbae0: 0x90c900ec  lbu         $t1, 0xEC($a2)
    ctx->pc = 0x2bbae0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 236)));
    // 0x2bbae4: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x2bbae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2bbae8: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2bbae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2bbaec: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x2bbaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2bbaf0: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x2bbaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2bbaf4: 0x15060014  bne         $t0, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BBAF4u;
    {
        const bool branch_taken_0x2bbaf4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAF4u;
        // 0x2bbaf8: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbaf4) {
            ctx->pc = 0x2BBB48u;
            goto label_2bbb48;
        }
    }
    ctx->pc = 0x2BBAFCu;
    // 0x2bbafc: 0x14c50012  bne         $a2, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BBAFCu;
    {
        const bool branch_taken_0x2bbafc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x2bbafc) {
            ctx->pc = 0x2BBB48u;
            goto label_2bbb48;
        }
    }
    ctx->pc = 0x2BBB04u;
    // 0x2bbb04: 0x14a70010  bne         $a1, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BBB04u;
    {
        const bool branch_taken_0x2bbb04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x2bbb04) {
            ctx->pc = 0x2BBB48u;
            goto label_2bbb48;
        }
    }
    ctx->pc = 0x2BBB0Cu;
    // 0x2bbb0c: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x2bbb0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bbb10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bbb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bbb14: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x2bbb14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bbb18: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2bbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2bbb1c: 0x846500f0  lh          $a1, 0xF0($v1)
    ctx->pc = 0x2bbb1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2bbb20: 0x846300f2  lh          $v1, 0xF2($v1)
    ctx->pc = 0x2bbb20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 242)));
    // 0x2bbb24: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2bbb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2bbb28: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2bbb28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbb2c: 0x0  nop
    ctx->pc = 0x2bbb2cu;
    // NOP
    // 0x2bbb30: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2bbb30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2bbb34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2bbb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2bbb38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbb38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbb3c: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x2BBB3Cu;
    {
        const bool branch_taken_0x2bbb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB3Cu;
        // 0x2bbb40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb3c) {
            ctx->pc = 0x2BBF28u;
            goto label_2bbf28;
        }
    }
    ctx->pc = 0x2BBB44u;
    // 0x2bbb44: 0x0  nop
    ctx->pc = 0x2bbb44u;
    // NOP
label_2bbb48:
    // 0x2bbb48: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2bbb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bbb4c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBB4Cu;
    {
        const bool branch_taken_0x2bbb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBB4Cu;
        // 0x2bbb50: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbb4c) {
            ctx->pc = 0x2BBB70u;
            goto label_2bbb70;
        }
    }
    ctx->pc = 0x2BBB54u;
label_2bbb54:
    // 0x2bbb54: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2bbb54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbb58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bbb5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bbb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bbb60: 0x0  nop
    ctx->pc = 0x2bbb60u;
    // NOP
    // 0x2bbb64: 0x0  nop
    ctx->pc = 0x2bbb64u;
    // NOP
    // 0x2bbb68: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BBB68u;
    {
        const bool branch_taken_0x2bbb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbb68) {
            ctx->pc = 0x2BBB54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbb54;
        }
    }
    ctx->pc = 0x2BBB70u;
label_2bbb70:
    // 0x2bbb70: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x2bbb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x2bbb74: 0x85090000  lh          $t1, 0x0($t0)
    ctx->pc = 0x2bbb74u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2bbb78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bbb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bbb7c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2bbb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bbb80: 0x2825021  addu        $t2, $s4, $v0
    ctx->pc = 0x2bbb80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2bbb84: 0x854400f0  lh          $a0, 0xF0($t2)
    ctx->pc = 0x2bbb84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 240)));
    // 0x2bbb88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2bbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bbb8c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2bbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2bbb90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2bbb90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbb94: 0x0  nop
    ctx->pc = 0x2bbb94u;
    // NOP
    // 0x2bbb98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bbb98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bbb9c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2bbb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2bbba0: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x2bbba0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2bbba4: 0x854400f2  lh          $a0, 0xF2($t2)
    ctx->pc = 0x2bbba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 242)));
    // 0x2bbba8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2bbba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2bbbac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2bbbacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbbb0: 0x0  nop
    ctx->pc = 0x2bbbb0u;
    // NOP
    // 0x2bbbb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bbbb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bbbb8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBBB8u;
    {
        const bool branch_taken_0x2bbbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBB8u;
        // 0x2bbbbc: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbb8) {
            ctx->pc = 0x2BBBDCu;
            goto label_2bbbdc;
        }
    }
    ctx->pc = 0x2BBBC0u;
label_2bbbc0:
    // 0x2bbbc0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2bbbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbbc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bbbc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bbbcc: 0x0  nop
    ctx->pc = 0x2bbbccu;
    // NOP
    // 0x2bbbd0: 0x0  nop
    ctx->pc = 0x2bbbd0u;
    // NOP
    // 0x2bbbd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BBBD4u;
    {
        const bool branch_taken_0x2bbbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbbd4) {
            ctx->pc = 0x2BBBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbbc0;
        }
    }
    ctx->pc = 0x2BBBDCu;
label_2bbbdc:
    // 0x2bbbdc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2bbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2bbbe0: 0x84c80000  lh          $t0, 0x0($a2)
    ctx->pc = 0x2bbbe0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bbbe4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bbbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bbbe8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2bbbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bbbec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bbbf0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2bbbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bbbf4: 0x2824821  addu        $t1, $s4, $v0
    ctx->pc = 0x2bbbf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2bbbf8: 0x852200f0  lh          $v0, 0xF0($t1)
    ctx->pc = 0x2bbbf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 240)));
    // 0x2bbbfc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2bbbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2bbc00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbc04: 0x0  nop
    ctx->pc = 0x2bbc04u;
    // NOP
    // 0x2bbc08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bbc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bbc0c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2bbc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2bbc10: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x2bbc10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2bbc14: 0x852200f2  lh          $v0, 0xF2($t1)
    ctx->pc = 0x2bbc14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 242)));
    // 0x2bbc18: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2bbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2bbc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbc20: 0x0  nop
    ctx->pc = 0x2bbc20u;
    // NOP
    // 0x2bbc24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bbc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bbc28: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x2bbc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2bbc2c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBC2Cu;
    {
        const bool branch_taken_0x2bbc2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC2Cu;
        // 0x2bbc30: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc2c) {
            ctx->pc = 0x2BBC50u;
            goto label_2bbc50;
        }
    }
    ctx->pc = 0x2BBC34u;
label_2bbc34:
    // 0x2bbc34: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2bbc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbc38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bbc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bbc3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2bbc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2bbc40: 0x0  nop
    ctx->pc = 0x2bbc40u;
    // NOP
    // 0x2bbc44: 0x0  nop
    ctx->pc = 0x2bbc44u;
    // NOP
    // 0x2bbc48: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BBC48u;
    {
        const bool branch_taken_0x2bbc48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc48) {
            ctx->pc = 0x2BBC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbc34;
        }
    }
    ctx->pc = 0x2BBC50u;
label_2bbc50:
    // 0x2bbc50: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2bbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2bbc54: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x2bbc54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bbc58: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bbc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bbc5c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2bbc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2bbc60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bbc64: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2bbc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bbc68: 0x2824021  addu        $t0, $s4, $v0
    ctx->pc = 0x2bbc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2bbc6c: 0x850200f0  lh          $v0, 0xF0($t0)
    ctx->pc = 0x2bbc6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 240)));
    // 0x2bbc70: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2bbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2bbc74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbc78: 0x0  nop
    ctx->pc = 0x2bbc78u;
    // NOP
    // 0x2bbc7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bbc7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bbc80: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2bbc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2bbc84: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x2bbc84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bbc88: 0x850200f2  lh          $v0, 0xF2($t0)
    ctx->pc = 0x2bbc88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 242)));
    // 0x2bbc8c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2bbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bbc90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbc94: 0x0  nop
    ctx->pc = 0x2bbc94u;
    // NOP
    // 0x2bbc98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bbc98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bbc9c: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x2bbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2bbca0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBCA0u;
    {
        const bool branch_taken_0x2bbca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCA0u;
        // 0x2bbca4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbca0) {
            ctx->pc = 0x2BBCC4u;
            goto label_2bbcc4;
        }
    }
    ctx->pc = 0x2BBCA8u;
label_2bbca8:
    // 0x2bbca8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2bbca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbcac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bbcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bbcb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2bbcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2bbcb4: 0x0  nop
    ctx->pc = 0x2bbcb4u;
    // NOP
    // 0x2bbcb8: 0x0  nop
    ctx->pc = 0x2bbcb8u;
    // NOP
    // 0x2bbcbc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BBCBCu;
    {
        const bool branch_taken_0x2bbcbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbcbc) {
            ctx->pc = 0x2BBCA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbca8;
        }
    }
    ctx->pc = 0x2BBCC4u;
label_2bbcc4:
    // 0x2bbcc4: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x2bbcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2bbcc8: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x2bbcc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bbccc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bbcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bbcd0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2bbcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bbcd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bbcd8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2bbcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bbcdc: 0x2824021  addu        $t0, $s4, $v0
    ctx->pc = 0x2bbcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2bbce0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2bbce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bbce4: 0x850200f0  lh          $v0, 0xF0($t0)
    ctx->pc = 0x2bbce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 240)));
    // 0x2bbce8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bbce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bbcec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbcecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbcf0: 0x0  nop
    ctx->pc = 0x2bbcf0u;
    // NOP
    // 0x2bbcf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bbcf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bbcf8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2bbcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2bbcfc: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x2bbcfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2bbd00: 0x850200f2  lh          $v0, 0xF2($t0)
    ctx->pc = 0x2bbd00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 242)));
    // 0x2bbd04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bbd08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbd0c: 0x0  nop
    ctx->pc = 0x2bbd0cu;
    // NOP
    // 0x2bbd10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bbd10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bbd14: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x2bbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2bbd18: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2BBD18u;
    SET_GPR_U32(ctx, 31, 0x2BBD20u);
    ctx->pc = 0x2BBD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD18u;
    // 0x2bbd1c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2BBD18u, 0x2BBD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD20u;
label_2bbd20:
    // 0x2bbd20: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x2bbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2bbd24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bbd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bbd28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bbd28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbd2c: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x2bbd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bbd30: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x2bbd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2bbd34: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2bbd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bbd38: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2bbd38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bbd3c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2bbd3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bbd40: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x2bbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
    // 0x2bbd44: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x2bbd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x2bbd48: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2bbd48u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
    // 0x2bbd4c: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x2bbd4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2bbd50: 0x46010504  c1          0x10504
    ctx->pc = 0x2bbd50u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[1]);
    // 0x2bbd54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbd58: 0x0  nop
    ctx->pc = 0x2bbd58u;
    // NOP
    // 0x2bbd5c: 0x0  nop
    ctx->pc = 0x2bbd5cu;
    // NOP
    // 0x2bbd60: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bbd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbd64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBD64u;
    {
        const bool branch_taken_0x2bbd64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bbd64) {
            ctx->pc = 0x2BBD70u;
            goto label_2bbd70;
        }
    }
    ctx->pc = 0x2BBD6Cu;
    // 0x2bbd6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bbd6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bbd70:
    // 0x2bbd70: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2bbd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bbd74: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2BBD74u;
    SET_GPR_U32(ctx, 31, 0x2BBD7Cu);
    ctx->pc = 0x2BBD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD74u;
    // 0x2bbd78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2BBD74u, 0x2BBD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD7Cu;
label_2bbd7c:
    // 0x2bbd7c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2bbd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bbd80: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2bbd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2bbd84: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2BBD84u;
    SET_GPR_U32(ctx, 31, 0x2BBD8Cu);
    ctx->pc = 0x2BBD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD84u;
    // 0x2bbd88: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2BBD84u, 0x2BBD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD8Cu;
label_2bbd8c:
    // 0x2bbd8c: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x2bbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2bbd90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2bbd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bbd94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bbd98: 0xc041468  jal         func_1051A0
    ctx->pc = 0x2BBD98u;
    SET_GPR_U32(ctx, 31, 0x2BBDA0u);
    ctx->pc = 0x2BBD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBD98u;
    // 0x2bbd9c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x2BBD98u, 0x2BBDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBDA0u;
label_2bbda0:
    // 0x2bbda0: 0x0  nop
    ctx->pc = 0x2bbda0u;
    // NOP
    // 0x2bbda4: 0x0  nop
    ctx->pc = 0x2bbda4u;
    // NOP
    // 0x2bbda8: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x2bbda8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x2bbdac: 0x0  nop
    ctx->pc = 0x2bbdacu;
    // NOP
    // 0x2bbdb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bbdb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbdb4: 0x0  nop
    ctx->pc = 0x2bbdb4u;
    // NOP
    // 0x2bbdb8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bbdb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbdbc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBDBCu;
    {
        const bool branch_taken_0x2bbdbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bbdbc) {
            ctx->pc = 0x2BBDC8u;
            goto label_2bbdc8;
        }
    }
    ctx->pc = 0x2BBDC4u;
    // 0x2bbdc4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2bbdc4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2bbdc8:
    // 0x2bbdc8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bbdcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bbdccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbdd0: 0x0  nop
    ctx->pc = 0x2bbdd0u;
    // NOP
    // 0x2bbdd4: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2bbdd4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x2bbdd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2bbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2bbddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbde0: 0x0  nop
    ctx->pc = 0x2bbde0u;
    // NOP
    // 0x2bbde4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2bbde4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2bbde8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bbde8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbdec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBDECu;
    {
        const bool branch_taken_0x2bbdec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bbdec) {
            ctx->pc = 0x2BBE00u;
            goto label_2bbe00;
        }
    }
    ctx->pc = 0x2BBDF4u;
    // 0x2bbdf4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2bbdf4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2bbdf8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2bbdf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbdfc: 0x0  nop
    ctx->pc = 0x2bbdfcu;
    // NOP
label_2bbe00:
    // 0x2bbe00: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x2bbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2bbe04: 0xc46e0000  lwc1        $f14, 0x0($v1)
    ctx->pc = 0x2bbe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2bbe08: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2bbe08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2bbe0c: 0xc7ad00f0  lwc1        $f13, 0xF0($sp)
    ctx->pc = 0x2bbe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bbe10: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x2bbe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bbe14: 0xc7aa00e0  lwc1        $f10, 0xE0($sp)
    ctx->pc = 0x2bbe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2bbe18: 0xc7a80100  lwc1        $f8, 0x100($sp)
    ctx->pc = 0x2bbe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2bbe1c: 0xc7c70000  lwc1        $f7, 0x0($fp)
    ctx->pc = 0x2bbe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bbe20: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x2bbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2bbe24: 0xc46b0000  lwc1        $f11, 0x0($v1)
    ctx->pc = 0x2bbe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2bbe28: 0xc7a500d0  lwc1        $f5, 0xD0($sp)
    ctx->pc = 0x2bbe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bbe2c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2bbe2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bbe30: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2bbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2bbe34: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bbe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bbe38: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x2bbe38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2bbe3c: 0x460d581a  mula.s      $f11, $f13
    ctx->pc = 0x2bbe3cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[11], ctx->f[13]));
    // 0x2bbe40: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2bbe44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbe44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbe48: 0x460e605d  msub.s      $f1, $f12, $f14
    ctx->pc = 0x2bbe48u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[14]));
    // 0x2bbe4c: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x2bbe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2bbe50: 0xc4690000  lwc1        $f9, 0x0($v1)
    ctx->pc = 0x2bbe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2bbe54: 0x460203c2  mul.s       $f15, $f0, $f2
    ctx->pc = 0x2bbe54u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bbe58: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x2bbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2bbe5c: 0x460d601a  mula.s      $f12, $f13
    ctx->pc = 0x2bbe5cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[12], ctx->f[13]));
    // 0x2bbe60: 0x460e581c  madd.s      $f0, $f11, $f14
    ctx->pc = 0x2bbe60u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[11], ctx->f[14]));
    // 0x2bbe64: 0x460a581a  mula.s      $f11, $f10
    ctx->pc = 0x2bbe64u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[11], ctx->f[10]));
    // 0x2bbe68: 0x4609635d  msub.s      $f13, $f12, $f9
    ctx->pc = 0x2bbe68u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[9]));
    // 0x2bbe6c: 0x4608581a  mula.s      $f11, $f8
    ctx->pc = 0x2bbe6cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[11], ctx->f[8]));
    // 0x2bbe70: 0x460761dd  msub.s      $f7, $f12, $f7
    ctx->pc = 0x2bbe70u;
    ctx->f[7] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[7]));
    // 0x2bbe74: 0x4605581a  mula.s      $f11, $f5
    ctx->pc = 0x2bbe74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[11], ctx->f[5]));
    // 0x2bbe78: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2bbe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bbe7c: 0x46076941  sub.s       $f5, $f13, $f7
    ctx->pc = 0x2bbe7cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x2bbe80: 0x46037834  c.lt.s      $f15, $f3
    ctx->pc = 0x2bbe80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbe84: 0x4604611d  msub.s      $f4, $f12, $f4
    ctx->pc = 0x2bbe84u;
    ctx->f[4] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[4]));
    // 0x2bbe88: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2bbe88u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2bbe8c: 0x46053302  mul.s       $f12, $f6, $f5
    ctx->pc = 0x2bbe8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x2bbe90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBE90u;
    {
        const bool branch_taken_0x2bbe90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE90u;
        // 0x2bbe94: 0x46043282  mul.s       $f10, $f6, $f4 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe90) {
            ctx->pc = 0x2BBEA0u;
            goto label_2bbea0;
        }
    }
    ctx->pc = 0x2BBE98u;
    // 0x2bbe98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBE98u;
    {
        const bool branch_taken_0x2bbe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE98u;
        // 0x2bbe9c: 0x46007986  mov.s       $f6, $f15 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe98) {
            ctx->pc = 0x2BBEA4u;
            goto label_2bbea4;
        }
    }
    ctx->pc = 0x2BBEA0u;
label_2bbea0:
    // 0x2bbea0: 0x46037981  sub.s       $f6, $f15, $f3
    ctx->pc = 0x2bbea0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
label_2bbea4:
    // 0x2bbea4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2bbea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2bbea8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2bbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2bbeac: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2bbeacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bbeb0: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2bbeb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2bbeb4: 0x46061901  sub.s       $f4, $f3, $f6
    ctx->pc = 0x2bbeb4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2bbeb8: 0x46037834  c.lt.s      $f15, $f3
    ctx->pc = 0x2bbeb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbebc: 0x460420c2  mul.s       $f3, $f4, $f4
    ctx->pc = 0x2bbebcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2bbec0: 0x46032a02  mul.s       $f8, $f5, $f3
    ctx->pc = 0x2bbec0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2bbec4: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2bbec4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2bbec8: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x2bbec8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2bbecc: 0x46032982  mul.s       $f6, $f5, $f3
    ctx->pc = 0x2bbeccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2bbed0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBED0u;
    {
        const bool branch_taken_0x2bbed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBED0u;
        // 0x2bbed4: 0x460429c0  add.s       $f7, $f5, $f4 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbed0) {
            ctx->pc = 0x2BBEE8u;
            goto label_2bbee8;
        }
    }
    ctx->pc = 0x2BBED8u;
    // 0x2bbed8: 0x460c0900  add.s       $f4, $f1, $f12
    ctx->pc = 0x2bbed8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2bbedc: 0x460a6a41  sub.s       $f9, $f13, $f10
    ctx->pc = 0x2bbedcu;
    ctx->f[9] = FPU_SUB_S(ctx->f[13], ctx->f[10]);
    // 0x2bbee0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBEE0u;
    {
        const bool branch_taken_0x2bbee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEE0u;
        // 0x2bbee4: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbee0) {
            ctx->pc = 0x2BBEF8u;
            goto label_2bbef8;
        }
    }
    ctx->pc = 0x2BBEE8u;
label_2bbee8:
    // 0x2bbee8: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2bbee8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2bbeec: 0x460a6a40  add.s       $f9, $f13, $f10
    ctx->pc = 0x2bbeecu;
    ctx->f[9] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x2bbef0: 0x460a6901  sub.s       $f4, $f13, $f10
    ctx->pc = 0x2bbef0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[13], ctx->f[10]);
    // 0x2bbef4: 0x0  nop
    ctx->pc = 0x2bbef4u;
    // NOP
label_2bbef8:
    // 0x2bbef8: 0x460860c2  mul.s       $f3, $f12, $f8
    ctx->pc = 0x2bbef8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x2bbefc: 0x46072042  mul.s       $f1, $f4, $f7
    ctx->pc = 0x2bbefcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2bbf00: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x2bbf00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[1]));
    // 0x2bbf04: 0x4602a042  mul.s       $f1, $f20, $f2
    ctx->pc = 0x2bbf04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2bbf08: 0x460648dc  madd.s      $f3, $f9, $f6
    ctx->pc = 0x2bbf08u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[9], ctx->f[6]));
    // 0x2bbf0c: 0xc7a500c0  lwc1        $f5, 0xC0($sp)
    ctx->pc = 0x2bbf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bbf10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbf10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbf14: 0x4603581a  mula.s      $f11, $f3
    ctx->pc = 0x2bbf14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[11], ctx->f[3]));
    // 0x2bbf18: 0x46002b1c  madd.s      $f12, $f5, $f0
    ctx->pc = 0x2bbf18u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0]));
    // 0x2bbf1c: 0x4600581a  mula.s      $f11, $f0
    ctx->pc = 0x2bbf1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[11], ctx->f[0]));
    // 0x2bbf20: 0x46032b5d  msub.s      $f13, $f5, $f3
    ctx->pc = 0x2bbf20u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[3]));
    // 0x2bbf24: 0x0  nop
    ctx->pc = 0x2bbf24u;
    // NOP
label_2bbf28:
    // 0x2bbf28: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x2bbf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbf2c: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x2bbf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbf30: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x2bbf30u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2bbf34: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x2bbf34u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2bbf38: 0x460c601a  mula.s      $f12, $f12
    ctx->pc = 0x2bbf38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[12], ctx->f[12]));
    // 0x2bbf3c: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBF3Cu;
    {
        const bool branch_taken_0x2bbf3c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF3Cu;
        // 0x2bbf40: 0x460d6d1c  madd.s      $f20, $f13, $f13 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf3c) {
            ctx->pc = 0x2BBF60u;
            goto label_2bbf60;
        }
    }
    ctx->pc = 0x2BBF44u;
    // 0x2bbf44: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x2bbf44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
    // 0x2bbf48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbf48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbf4c: 0x0  nop
    ctx->pc = 0x2bbf4cu;
    // NOP
    // 0x2bbf50: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bbf50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbf54: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBF54u;
    {
        const bool branch_taken_0x2bbf54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bbf54) {
            ctx->pc = 0x2BBF78u;
            goto label_2bbf78;
        }
    }
    ctx->pc = 0x2BBF5Cu;
    // 0x2bbf5c: 0x0  nop
    ctx->pc = 0x2bbf5cu;
    // NOP
label_2bbf60:
    // 0x2bbf60: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x2bbf60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bbf64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bbf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbf68: 0xa28300e9  sb          $v1, 0xE9($s4)
    ctx->pc = 0x2bbf68u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 233), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbf6c: 0x1000fdfe  b           . + 4 + (-0x202 << 2)
    ctx->pc = 0x2BBF6Cu;
    {
        const bool branch_taken_0x2bbf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF6Cu;
        // 0x2bbf70: 0xa28300ea  sb          $v1, 0xEA($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 234), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf6c) {
            ctx->pc = 0x2BB768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb768;
        }
    }
    ctx->pc = 0x2BBF74u;
    // 0x2bbf74: 0x0  nop
    ctx->pc = 0x2bbf74u;
    // NOP
label_2bbf78:
    // 0x2bbf78: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2BBF78u;
    SET_GPR_U32(ctx, 31, 0x2BBF80u);
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2BBF78u, 0x2BBF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF80u;
label_2bbf80:
    // 0x2bbf80: 0x3c044422  lui         $a0, 0x4422
    ctx->pc = 0x2bbf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17442 << 16));
    // 0x2bbf84: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2bbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2bbf88: 0x3484f983  ori         $a0, $a0, 0xF983
    ctx->pc = 0x2bbf88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63875);
    // 0x2bbf8c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2bbf8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bbf90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bbf90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbf94: 0x0  nop
    ctx->pc = 0x2bbf94u;
    // NOP
    // 0x2bbf98: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bbf98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bbf9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bbf9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bbfa0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2bbfa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bbfa4: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x2bbfa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbfa8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2bbfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2bbfac: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBFACu;
    {
        const bool branch_taken_0x2bbfac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BBFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFACu;
        // 0x2bbfb0: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfac) {
            ctx->pc = 0x2BBFC0u;
            goto label_2bbfc0;
        }
    }
    ctx->pc = 0x2BBFB4u;
    // 0x2bbfb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BBFB4u;
    {
        const bool branch_taken_0x2bbfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB4u;
        // 0x2bbfb8: 0xa6830086  sh          $v1, 0x86($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 134), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfb4) {
            ctx->pc = 0x2BC000u;
            goto label_2bc000;
        }
    }
    ctx->pc = 0x2BBFBCu;
    // 0x2bbfbc: 0x0  nop
    ctx->pc = 0x2bbfbcu;
    // NOP
label_2bbfc0:
    // 0x2bbfc0: 0x86840086  lh          $a0, 0x86($s4)
    ctx->pc = 0x2bbfc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 134)));
    // 0x2bbfc4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2bbfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2bbfc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2bbfc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2bbfcc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2bbfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bbfd0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBFD0u;
    {
        const bool branch_taken_0x2bbfd0 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2bbfd0) {
            ctx->pc = 0x2BBFDCu;
            goto label_2bbfdc;
        }
    }
    ctx->pc = 0x2BBFD8u;
    // 0x2bbfd8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2bbfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2bbfdc:
    // 0x2bbfdc: 0x28610701  slti        $at, $v1, 0x701
    ctx->pc = 0x2bbfdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1793) ? 1 : 0);
    // 0x2bbfe0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BBFE0u;
    {
        const bool branch_taken_0x2bbfe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbfe0) {
            ctx->pc = 0x2BC000u;
            goto label_2bc000;
        }
    }
    ctx->pc = 0x2BBFE8u;
    // 0x2bbfe8: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x2bbfe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bbfec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bbfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbff0: 0xa28300e9  sb          $v1, 0xE9($s4)
    ctx->pc = 0x2bbff0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 233), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbff4: 0x1000fddc  b           . + 4 + (-0x224 << 2)
    ctx->pc = 0x2BBFF4u;
    {
        const bool branch_taken_0x2bbff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFF4u;
        // 0x2bbff8: 0xa28300ea  sb          $v1, 0xEA($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 234), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbff4) {
            ctx->pc = 0x2BB768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb768;
        }
    }
    ctx->pc = 0x2BBFFCu;
    // 0x2bbffc: 0x0  nop
    ctx->pc = 0x2bbffcu;
    // NOP
label_2bc000:
    // 0x2bc000: 0xa26004ee  sb          $zero, 0x4EE($s3)
    ctx->pc = 0x2bc000u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1262), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc004: 0x86830086  lh          $v1, 0x86($s4)
    ctx->pc = 0x2bc004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 134)));
    // 0x2bc008: 0xa66304ec  sh          $v1, 0x4EC($s3)
    ctx->pc = 0x2bc008u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1260), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bc00c: 0xde630500  ld          $v1, 0x500($s3)
    ctx->pc = 0x2bc00cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 1280)));
    // 0x2bc010: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2bc010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2bc014: 0xfe630500  sd          $v1, 0x500($s3)
    ctx->pc = 0x2bc014u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 1280), GPR_U64(ctx, 3));
label_2bc018:
    // 0x2bc018: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2bc018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bc01c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2bc01cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc020: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2bc020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bc024: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2bc024u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc028: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2bc028u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc02c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2bc02cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc030: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2bc030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc034: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2bc034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc038: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2bc038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc03c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bc03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc040: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bc040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc044: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC044u;
        // 0x2bc048: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC04Cu;
}
