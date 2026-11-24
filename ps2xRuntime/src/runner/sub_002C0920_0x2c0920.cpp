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

// Function: sub_002C0920
// Address: 0x2c0920 - 0x2c0b90
void sub_002C0920_0x2c0920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0920_0x2c0920");
#endif

    switch (ctx->pc) {
        case 0x2c095cu: goto label_2c095c;
        case 0x2c0988u: goto label_2c0988;
        case 0x2c0998u: goto label_2c0998;
        case 0x2c09f0u: goto label_2c09f0;
        case 0x2c0a00u: goto label_2c0a00;
        case 0x2c0b3cu: goto label_2c0b3c;
        default: break;
    }

    ctx->pc = 0x2c0920u;

    // 0x2c0920: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c0920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c0924: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c0924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c0928: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c0928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c092c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c0930: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c0930u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0934: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c0934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c0938: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c0938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c093c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c093cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c0940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c0944: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c0944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c094c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c0950: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x2c0950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2c0954: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C0954u;
    SET_GPR_U32(ctx, 31, 0x2C095Cu);
    ctx->pc = 0x2C0958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0954u;
    // 0x2c0958: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C0954u, 0x2C095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C095Cu;
label_2c095c:
    // 0x2c095c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c095cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0960: 0x12200059  beqz        $s1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2C0960u;
    {
        const bool branch_taken_0x2c0960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0960) {
            ctx->pc = 0x2C0AC8u;
            goto label_2c0ac8;
        }
    }
    ctx->pc = 0x2C0968u;
    // 0x2c0968: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x2c0968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c096c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c096cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c0970: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C0970u;
    {
        const bool branch_taken_0x2c0970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0970u;
        // 0x2c0974: 0x82500004  lb          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0970) {
            ctx->pc = 0x2C09E0u;
            goto label_2c09e0;
        }
    }
    ctx->pc = 0x2C0978u;
    // 0x2c0978: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c0978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c097c: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2c097cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2c0980: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C0980u;
    SET_GPR_U32(ctx, 31, 0x2C0988u);
    ctx->pc = 0x2C0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0980u;
    // 0x2c0984: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C0980u, 0x2C0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0988u;
label_2c0988:
    // 0x2c0988: 0x27b50088  addiu       $s5, $sp, 0x88
    ctx->pc = 0x2c0988u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2c098c: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x2c098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c0990: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2C0990u;
    SET_GPR_U32(ctx, 31, 0x2C0998u);
    ctx->pc = 0x2C0994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0990u;
    // 0x2c0994: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2C0990u, 0x2C0998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0998u;
label_2c0998:
    // 0x2c0998: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x2c0998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x2c099c: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2c099cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2c09a0: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x2c09a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x2c09a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c09a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c09a8: 0x0  nop
    ctx->pc = 0x2c09a8u;
    // NOP
    // 0x2c09ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c09acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c09b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c09b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c09b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2c09b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c09b8: 0x0  nop
    ctx->pc = 0x2c09b8u;
    // NOP
    // 0x2c09bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2c09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c09c0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c09c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c09c4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c09c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c09c8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c09c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c09cc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2c09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c09d0: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2c09d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c09d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C09D4u;
    {
        const bool branch_taken_0x2c09d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09D4u;
        // 0x2c09d8: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09d4) {
            ctx->pc = 0x2C0A40u;
            goto label_2c0a40;
        }
    }
    ctx->pc = 0x2C09DCu;
    // 0x2c09dc: 0x0  nop
    ctx->pc = 0x2c09dcu;
    // NOP
label_2c09e0:
    // 0x2c09e0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2c09e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2c09e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c09e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c09e8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C09E8u;
    SET_GPR_U32(ctx, 31, 0x2C09F0u);
    ctx->pc = 0x2C09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C09E8u;
    // 0x2c09ec: 0x26660020  addiu       $a2, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C09E8u, 0x2C09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C09F0u;
label_2c09f0:
    // 0x2c09f0: 0x27b50088  addiu       $s5, $sp, 0x88
    ctx->pc = 0x2c09f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2c09f4: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x2c09f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c09f8: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2C09F8u;
    SET_GPR_U32(ctx, 31, 0x2C0A00u);
    ctx->pc = 0x2C09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C09F8u;
    // 0x2c09fc: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2C09F8u, 0x2C0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A00u;
label_2c0a00:
    // 0x2c0a00: 0x3c034422  lui         $v1, 0x4422
    ctx->pc = 0x2c0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17442 << 16));
    // 0x2c0a04: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x2c0a04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x2c0a08: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x2c0a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x2c0a0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c0a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0a10: 0x0  nop
    ctx->pc = 0x2c0a10u;
    // NOP
    // 0x2c0a14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c0a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0a18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c0a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c0a1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2c0a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c0a20: 0x0  nop
    ctx->pc = 0x2c0a20u;
    // NOP
    // 0x2c0a24: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2c0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0a28: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c0a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c0a2c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c0a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c0a30: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c0a30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c0a34: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2c0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c0a38: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2c0a38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c0a3c: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x2c0a3cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_2c0a40:
    // 0x2c0a40: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x2c0a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x2c0a44: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c0a44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c0a48: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0A48u;
    {
        const bool branch_taken_0x2c0a48 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2c0a48) {
            ctx->pc = 0x2C0A54u;
            goto label_2c0a54;
        }
    }
    ctx->pc = 0x2C0A50u;
    // 0x2c0a50: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2c0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2c0a54:
    // 0x2c0a54: 0x82420003  lb          $v0, 0x3($s2)
    ctx->pc = 0x2c0a54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2c0a58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2c0a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0a5c: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C0A5Cu;
    {
        const bool branch_taken_0x2c0a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0a5c) {
            ctx->pc = 0x2C0AC8u;
            goto label_2c0ac8;
        }
    }
    ctx->pc = 0x2C0A64u;
    // 0x2c0a64: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2c0a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0a68: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x2c0a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2c0a6c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2c0a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0a70: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2c0a70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c0a74: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x2c0a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2c0a78: 0x46000044  c1          0x44
    ctx->pc = 0x2c0a78u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c0a7c: 0x0  nop
    ctx->pc = 0x2c0a7cu;
    // NOP
    // 0x2c0a80: 0x0  nop
    ctx->pc = 0x2c0a80u;
    // NOP
    // 0x2c0a84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0A84u;
    {
        const bool branch_taken_0x2c0a84 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2c0a84) {
            ctx->pc = 0x2C0A98u;
            goto label_2c0a98;
        }
    }
    ctx->pc = 0x2C0A8Cu;
    // 0x2c0a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0a90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0A90u;
    {
        const bool branch_taken_0x2c0a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A90u;
        // 0x2c0a94: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a90) {
            ctx->pc = 0x2C0AB4u;
            goto label_2c0ab4;
        }
    }
    ctx->pc = 0x2C0A98u;
label_2c0a98:
    // 0x2c0a98: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c0a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c0a9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0aa0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c0aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c0aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0aa8: 0x0  nop
    ctx->pc = 0x2c0aa8u;
    // NOP
    // 0x2c0aac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0ab0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c0ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c0ab4:
    // 0x2c0ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0ab8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0AB8u;
    {
        const bool branch_taken_0x2c0ab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0ab8) {
            ctx->pc = 0x2C0AC8u;
            goto label_2c0ac8;
        }
    }
    ctx->pc = 0x2C0AC0u;
    // 0x2c0ac0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c0ac0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0ac4: 0x0  nop
    ctx->pc = 0x2c0ac4u;
    // NOP
label_2c0ac8:
    // 0x2c0ac8: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x2c0ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c0acc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0ad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0AD0u;
    {
        const bool branch_taken_0x2c0ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AD0u;
        // 0x2c0ad4: 0x16102b  sltu        $v0, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ad0) {
            ctx->pc = 0x2C0AE0u;
            goto label_2c0ae0;
        }
    }
    ctx->pc = 0x2C0AD8u;
    // 0x2c0ad8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c0ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c0adc: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2c0adcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c0ae0:
    // 0x2c0ae0: 0x12c0001f  beqz        $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C0AE0u;
    {
        const bool branch_taken_0x2c0ae0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ae0) {
            ctx->pc = 0x2C0B60u;
            goto label_2c0b60;
        }
    }
    ctx->pc = 0x2C0AE8u;
    // 0x2c0ae8: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c0ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c0aec: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C0AECu;
    {
        const bool branch_taken_0x2c0aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AECu;
        // 0x2c0af0: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0aec) {
            ctx->pc = 0x2C0B48u;
            goto label_2c0b48;
        }
    }
    ctx->pc = 0x2C0AF4u;
    // 0x2c0af4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C0AF4u;
    {
        const bool branch_taken_0x2c0af4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AF4u;
        // 0x2c0af8: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0af4) {
            ctx->pc = 0x2C0B30u;
            goto label_2c0b30;
        }
    }
    ctx->pc = 0x2C0AFCu;
    // 0x2c0afc: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c0afcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c0b00: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c0b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c0b04: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c0b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0b08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c0b0c: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c0b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0b10: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c0b10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c0b14: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c0b14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0b18: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c0b18u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0b1c: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c0b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c0b20: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c0b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0b28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C0B28u;
    {
        const bool branch_taken_0x2c0b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B28u;
        // 0x2c0b2c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b28) {
            ctx->pc = 0x2C0B58u;
            goto label_2c0b58;
        }
    }
    ctx->pc = 0x2C0B30u;
label_2c0b30:
    // 0x2c0b30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c0b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b34: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C0B34u;
    SET_GPR_U32(ctx, 31, 0x2C0B3Cu);
    ctx->pc = 0x2C0B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0B34u;
    // 0x2c0b38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C0B34u, 0x2C0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0B3Cu;
label_2c0b3c:
    // 0x2c0b3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0B3Cu;
    {
        const bool branch_taken_0x2c0b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b3c) {
            ctx->pc = 0x2C0B50u;
            goto label_2c0b50;
        }
    }
    ctx->pc = 0x2C0B44u;
    // 0x2c0b44: 0x0  nop
    ctx->pc = 0x2c0b44u;
    // NOP
label_2c0b48:
    // 0x2c0b48: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c0b48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c0b4c: 0x0  nop
    ctx->pc = 0x2c0b4cu;
    // NOP
label_2c0b50:
    // 0x2c0b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0b54: 0x0  nop
    ctx->pc = 0x2c0b54u;
    // NOP
label_2c0b58:
    // 0x2c0b58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0B58u;
    {
        const bool branch_taken_0x2c0b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b58) {
            ctx->pc = 0x2C0B68u;
            goto label_2c0b68;
        }
    }
    ctx->pc = 0x2C0B60u;
label_2c0b60:
    // 0x2c0b60: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x2c0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2c0b64: 0x0  nop
    ctx->pc = 0x2c0b64u;
    // NOP
label_2c0b68:
    // 0x2c0b68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c0b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0b6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c0b6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0b70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c0b70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0b74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c0b74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0b78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c0b78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0b7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c0b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0b88: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B88u;
        // 0x2c0b8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0B90u;
}
