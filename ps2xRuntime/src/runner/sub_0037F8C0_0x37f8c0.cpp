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

// Function: sub_0037F8C0
// Address: 0x37f8c0 - 0x37fae8
void sub_0037F8C0_0x37f8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F8C0_0x37f8c0");
#endif

    switch (ctx->pc) {
        case 0x37f8f4u: goto label_37f8f4;
        case 0x37f934u: goto label_37f934;
        case 0x37f9c8u: goto label_37f9c8;
        case 0x37f9e0u: goto label_37f9e0;
        case 0x37fa18u: goto label_37fa18;
        case 0x37fa28u: goto label_37fa28;
        case 0x37fa48u: goto label_37fa48;
        case 0x37fa78u: goto label_37fa78;
        case 0x37fa88u: goto label_37fa88;
        case 0x37fa98u: goto label_37fa98;
        default: break;
    }

    ctx->pc = 0x37f8c0u;

    // 0x37f8c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37f8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x37f8c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37f8c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37f8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f8cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37f8d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37f8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37f8d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37f8d8: 0xc4812b70  lwc1        $f1, 0x2B70($a0)
    ctx->pc = 0x37f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f8dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37f8dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f8e0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x37F8E0u;
    {
        const bool branch_taken_0x37f8e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8E0u;
        // 0x37f8e4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8e0) {
            ctx->pc = 0x37F910u;
            goto label_37f910;
        }
    }
    ctx->pc = 0x37F8E8u;
    // 0x37f8e8: 0x26442b50  addiu       $a0, $s2, 0x2B50
    ctx->pc = 0x37f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11088));
    // 0x37f8ec: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x37F8ECu;
    SET_GPR_U32(ctx, 31, 0x37F8F4u);
    ctx->pc = 0x37F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F8ECu;
    // 0x37f8f0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x37F8ECu, 0x37F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F8F4u;
label_37f8f4:
    // 0x37f8f4: 0xc6412b70  lwc1        $f1, 0x2B70($s2)
    ctx->pc = 0x37f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f8f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37f8f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f8fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x37F8FCu;
    {
        const bool branch_taken_0x37f8fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8FCu;
        // 0x37f900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f8fc) {
            ctx->pc = 0x37F910u;
            goto label_37f910;
        }
    }
    ctx->pc = 0x37F904u;
    // 0x37f904: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x37F904u;
    {
        const bool branch_taken_0x37f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f904) {
            ctx->pc = 0x37FAD0u;
            goto label_37fad0;
        }
    }
    ctx->pc = 0x37F90Cu;
    // 0x37f90c: 0x0  nop
    ctx->pc = 0x37f90cu;
    // NOP
label_37f910:
    // 0x37f910: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x37f910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37f914: 0x26432b50  addiu       $v1, $s2, 0x2B50
    ctx->pc = 0x37f914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11088));
    // 0x37f918: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x37f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x37f91c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x37f91cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37f920: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x37f920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f924: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37f924u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37f928: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37f928u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37f92c: 0xc04d8e4  jal         func_136390
    ctx->pc = 0x37F92Cu;
    SET_GPR_U32(ctx, 31, 0x37F934u);
    ctx->pc = 0x37F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F92Cu;
    // 0x37f930: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136390u, 0x37F92Cu, 0x37F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F934u;
label_37f934:
    // 0x37f934: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x37f934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x37f938: 0x864300c0  lh          $v1, 0xC0($s2)
    ctx->pc = 0x37f938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x37f93c: 0x87a200ac  lh          $v0, 0xAC($sp)
    ctx->pc = 0x37f93cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37f940: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37f940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37f944: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f948: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37f948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f94c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37f94cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37f950: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x37f950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37f954: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x37F954u;
    {
        const bool branch_taken_0x37f954 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37f954) {
            ctx->pc = 0x37F970u;
            goto label_37f970;
        }
    }
    ctx->pc = 0x37F95Cu;
    // 0x37f95c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x37f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x37f960: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37f960u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37f964: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37f964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f968: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x37F968u;
    {
        const bool branch_taken_0x37f968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F968u;
        // 0x37f96c: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f968) {
            ctx->pc = 0x37F970u;
            goto label_37f970;
        }
    }
    ctx->pc = 0x37F970u;
label_37f970:
    // 0x37f970: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x37f970u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37f974: 0x864300c2  lh          $v1, 0xC2($s2)
    ctx->pc = 0x37f974u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x37f978: 0x87a200ae  lh          $v0, 0xAE($sp)
    ctx->pc = 0x37f978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x37f97c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37f980: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f984: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37f984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f988: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37f988u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37f98c: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x37f98cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37f990: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x37F990u;
    {
        const bool branch_taken_0x37f990 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F990u;
        // 0x37f994: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f990) {
            ctx->pc = 0x37F9B0u;
            goto label_37f9b0;
        }
    }
    ctx->pc = 0x37F998u;
    // 0x37f998: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x37f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x37f99c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37f9a0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37f9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f9a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37F9A4u;
    {
        const bool branch_taken_0x37f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F9A4u;
        // 0x37f9a8: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f9a4) {
            ctx->pc = 0x37F9B0u;
            goto label_37f9b0;
        }
    }
    ctx->pc = 0x37F9ACu;
    // 0x37f9ac: 0x0  nop
    ctx->pc = 0x37f9acu;
    // NOP
label_37f9b0:
    // 0x37f9b0: 0x87a400ac  lh          $a0, 0xAC($sp)
    ctx->pc = 0x37f9b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37f9b4: 0x864500c0  lh          $a1, 0xC0($s2)
    ctx->pc = 0x37f9b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x37f9b8: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x37f9b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37f9bc: 0x86462b74  lh          $a2, 0x2B74($s2)
    ctx->pc = 0x37f9bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11124)));
    // 0x37f9c0: 0xc0decb8  jal         func_37B2E0
    ctx->pc = 0x37F9C0u;
    SET_GPR_U32(ctx, 31, 0x37F9C8u);
    ctx->pc = 0x37F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F9C0u;
    // 0x37f9c4: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2E0u, 0x37F9C0u, 0x37F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F9C8u;
label_37f9c8:
    // 0x37f9c8: 0x87a400ae  lh          $a0, 0xAE($sp)
    ctx->pc = 0x37f9c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x37f9cc: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x37f9ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f9d0: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x37f9d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x37f9d4: 0x86462b74  lh          $a2, 0x2B74($s2)
    ctx->pc = 0x37f9d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11124)));
    // 0x37f9d8: 0xc0decb8  jal         func_37B2E0
    ctx->pc = 0x37F9D8u;
    SET_GPR_U32(ctx, 31, 0x37F9E0u);
    ctx->pc = 0x37F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F9D8u;
    // 0x37f9dc: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2E0u, 0x37F9D8u, 0x37F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F9E0u;
label_37f9e0:
    // 0x37f9e0: 0x864300c0  lh          $v1, 0xC0($s2)
    ctx->pc = 0x37f9e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x37f9e4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x37f9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f9e8: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x37f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x37f9ec: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x37f9ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x37f9f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37f9f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37f9f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37f9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f9f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x37f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37f9fc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37fa00: 0xa64200c0  sh          $v0, 0xC0($s2)
    ctx->pc = 0x37fa00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x37fa04: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x37fa04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x37fa08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x37fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37fa0c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37fa10: 0xc0dfefc  jal         func_37FBF0
    ctx->pc = 0x37FA10u;
    SET_GPR_U32(ctx, 31, 0x37FA18u);
    ctx->pc = 0x37FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA10u;
    // 0x37fa14: 0xa64200c2  sh          $v0, 0xC2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FBF0u, 0x37FA10u, 0x37FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA18u;
label_37fa18:
    // 0x37fa18: 0x864500c0  lh          $a1, 0xC0($s2)
    ctx->pc = 0x37fa18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x37fa1c: 0x864600c2  lh          $a2, 0xC2($s2)
    ctx->pc = 0x37fa1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x37fa20: 0xc04d548  jal         func_135520
    ctx->pc = 0x37FA20u;
    SET_GPR_U32(ctx, 31, 0x37FA28u);
    ctx->pc = 0x37FA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA20u;
    // 0x37fa24: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135520u, 0x37FA20u, 0x37FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA28u;
label_37fa28:
    // 0x37fa28: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x37fa2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x37fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37fa30: 0x2442afd0  addiu       $v0, $v0, -0x5030
    ctx->pc = 0x37fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946768));
    // 0x37fa34: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x37fa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37fa38: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37fa38u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65AFD0u));
    // 0x37fa3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x37fa3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fa40: 0xc041442  jal         func_105108
    ctx->pc = 0x37FA40u;
    SET_GPR_U32(ctx, 31, 0x37FA48u);
    ctx->pc = 0x37FA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA40u;
    // 0x37fa44: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x37FA40u, 0x37FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA48u;
label_37fa48:
    // 0x37fa48: 0x86432b76  lh          $v1, 0x2B76($s2)
    ctx->pc = 0x37fa48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11126)));
    // 0x37fa4c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x37fa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x37fa50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37fa50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37fa54: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x37fa54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37fa58: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x37FA58u;
    {
        const bool branch_taken_0x37fa58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA58u;
        // 0x37fa5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa58) {
            ctx->pc = 0x37FA80u;
            goto label_37fa80;
        }
    }
    ctx->pc = 0x37FA60u;
    // 0x37fa60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37fa60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37fa64: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x37fa64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37fa68: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x37FA68u;
    {
        const bool branch_taken_0x37fa68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA68u;
        // 0x37fa6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa68) {
            ctx->pc = 0x37FA80u;
            goto label_37fa80;
        }
    }
    ctx->pc = 0x37FA70u;
    // 0x37fa70: 0xc0dfcec  jal         func_37F3B0
    ctx->pc = 0x37FA70u;
    SET_GPR_U32(ctx, 31, 0x37FA78u);
    ctx->pc = 0x37F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F3B0u, 0x37FA70u, 0x37FA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA78u;
label_37fa78:
    // 0x37fa78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37FA78u;
    {
        const bool branch_taken_0x37fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fa78) {
            ctx->pc = 0x37FA88u;
            goto label_37fa88;
        }
    }
    ctx->pc = 0x37FA80u;
label_37fa80:
    // 0x37fa80: 0xc0dfcf4  jal         func_37F3D0
    ctx->pc = 0x37FA80u;
    SET_GPR_U32(ctx, 31, 0x37FA88u);
    ctx->pc = 0x37FA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA80u;
    // 0x37fa84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F3D0u, 0x37FA80u, 0x37FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA88u;
label_37fa88:
    // 0x37fa88: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x37fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x37fa8c: 0xc64c2b60  lwc1        $f12, 0x2B60($s2)
    ctx->pc = 0x37fa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37fa90: 0xc0414dc  jal         func_105370
    ctx->pc = 0x37FA90u;
    SET_GPR_U32(ctx, 31, 0x37FA98u);
    ctx->pc = 0x37FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA90u;
    // 0x37fa94: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x37FA90u, 0x37FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA98u;
label_37fa98:
    // 0x37fa98: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x37fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x37fa9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37fa9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37faa0: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x37faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37faa4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x37faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37faa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37faa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37faac: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x37faacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x37fab0: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x37fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37fab4: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x37fab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37fab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37fab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37fabc: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x37fabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x37fac0: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x37fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37fac4: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x37fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37fac8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37fac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37facc: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x37faccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_37fad0:
    // 0x37fad0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37fad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37fad4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37fad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37fad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37fadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fae0: 0x3e00008  jr          $ra
    ctx->pc = 0x37FAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FAE0u;
        // 0x37fae4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FAE8u;
}
