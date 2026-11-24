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

// Function: sub_0037C910
// Address: 0x37c910 - 0x37cb28
void sub_0037C910_0x37c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C910_0x37c910");
#endif

    switch (ctx->pc) {
        case 0x37c968u: goto label_37c968;
        case 0x37c994u: goto label_37c994;
        case 0x37c9c8u: goto label_37c9c8;
        case 0x37c9d4u: goto label_37c9d4;
        case 0x37ca34u: goto label_37ca34;
        case 0x37ca48u: goto label_37ca48;
        case 0x37ca50u: goto label_37ca50;
        case 0x37ca70u: goto label_37ca70;
        case 0x37cad0u: goto label_37cad0;
        case 0x37cae8u: goto label_37cae8;
        default: break;
    }

    ctx->pc = 0x37c910u;

    // 0x37c910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37c914: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c918: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37c91c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c920: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37c920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37c924: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37c924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37c928: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x37c928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x37c92c: 0x8c902b80  lw          $s0, 0x2B80($a0)
    ctx->pc = 0x37c92cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11136)));
    // 0x37c930: 0xa0852bbd  sb          $a1, 0x2BBD($a0)
    ctx->pc = 0x37c930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11197), (uint8_t)GPR_U32(ctx, 5));
    // 0x37c934: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x37c934u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37c938: 0x10a30069  beq         $a1, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x37C938u;
    {
        const bool branch_taken_0x37c938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C938u;
        // 0x37c93c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c938) {
            ctx->pc = 0x37CAE0u;
            goto label_37cae0;
        }
    }
    ctx->pc = 0x37C940u;
    // 0x37c940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c944: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37C944u;
    {
        const bool branch_taken_0x37c944 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c944) {
            ctx->pc = 0x37C9A0u;
            goto label_37c9a0;
        }
    }
    ctx->pc = 0x37C94Cu;
    // 0x37c94c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C94Cu;
    {
        const bool branch_taken_0x37c94c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c94c) {
            ctx->pc = 0x37C960u;
            goto label_37c960;
        }
    }
    ctx->pc = 0x37C954u;
    // 0x37c954: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x37C954u;
    {
        const bool branch_taken_0x37c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c954) {
            ctx->pc = 0x37CB10u;
            goto label_37cb10;
        }
    }
    ctx->pc = 0x37C95Cu;
    // 0x37c95c: 0x0  nop
    ctx->pc = 0x37c95cu;
    // NOP
label_37c960:
    // 0x37c960: 0xc0e0094  jal         func_380250
    ctx->pc = 0x37C960u;
    SET_GPR_U32(ctx, 31, 0x37C968u);
    ctx->pc = 0x380250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380250u, 0x37C960u, 0x37C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C968u;
label_37c968:
    // 0x37c968: 0x82232b8f  lb          $v1, 0x2B8F($s1)
    ctx->pc = 0x37c968u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11151)));
    // 0x37c96c: 0x26252b50  addiu       $a1, $s1, 0x2B50
    ctx->pc = 0x37c96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11088));
    // 0x37c970: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37c974: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x37c974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37c978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c97c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x37c97cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37c980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37c980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c984: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x37c984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x37c988: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37c988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c98c: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37C98Cu;
    SET_GPR_U32(ctx, 31, 0x37C994u);
    ctx->pc = 0x37C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C98Cu;
    // 0x37c990: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37C98Cu, 0x37C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C994u;
label_37c994:
    // 0x37c994: 0x92220821  lbu         $v0, 0x821($s1)
    ctx->pc = 0x37c994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37c998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37c99c: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37c99cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
label_37c9a0:
    // 0x37c9a0: 0x26232b50  addiu       $v1, $s1, 0x2B50
    ctx->pc = 0x37c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11088));
    // 0x37c9a4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x37c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37c9a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x37c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37c9ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x37c9acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37c9b0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x37c9b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37c9b4: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37c9b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37c9b8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37c9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37c9bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x37c9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37c9c0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x37C9C0u;
    SET_GPR_U32(ctx, 31, 0x37C9C8u);
    ctx->pc = 0x37C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9C0u;
    // 0x37c9c4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x37C9C0u, 0x37C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9C8u;
label_37c9c8:
    // 0x37c9c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37c9c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37c9cc: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x37C9CCu;
    SET_GPR_U32(ctx, 31, 0x37C9D4u);
    ctx->pc = 0x37C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9CCu;
    // 0x37c9d0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x37C9CCu, 0x37C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9D4u;
label_37c9d4:
    // 0x37c9d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x37c9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c9d8: 0x0  nop
    ctx->pc = 0x37c9d8u;
    // NOP
    // 0x37c9dc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x37c9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37c9e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x37C9E0u;
    {
        const bool branch_taken_0x37c9e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C9E0u;
        // 0x37c9e4: 0x3c024461  lui         $v0, 0x4461 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c9e0) {
            ctx->pc = 0x37CA00u;
            goto label_37ca00;
        }
    }
    ctx->pc = 0x37C9E8u;
    // 0x37c9e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37c9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c9ec: 0x0  nop
    ctx->pc = 0x37c9ecu;
    // NOP
    // 0x37c9f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37c9f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37c9f4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x37C9F4u;
    {
        const bool branch_taken_0x37c9f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c9f4) {
            ctx->pc = 0x37CA58u;
            goto label_37ca58;
        }
    }
    ctx->pc = 0x37C9FCu;
    // 0x37c9fc: 0x0  nop
    ctx->pc = 0x37c9fcu;
    // NOP
label_37ca00:
    // 0x37ca00: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x37ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x37ca04: 0xae222b70  sw          $v0, 0x2B70($s1)
    ctx->pc = 0x37ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11120), GPR_U32(ctx, 2));
    // 0x37ca08: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x37ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x37ca0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37ca0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37ca10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37ca10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37ca14: 0x0  nop
    ctx->pc = 0x37ca14u;
    // NOP
    // 0x37ca18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37ca18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37ca1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x37CA1Cu;
    {
        const bool branch_taken_0x37ca1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CA1Cu;
        // 0x37ca20: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ca1c) {
            ctx->pc = 0x37CA38u;
            goto label_37ca38;
        }
    }
    ctx->pc = 0x37CA24u;
    // 0x37ca24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ca28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37ca28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37ca2c: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37CA2Cu;
    SET_GPR_U32(ctx, 31, 0x37CA34u);
    ctx->pc = 0x37CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA2Cu;
    // 0x37ca30: 0xe6212b70  swc1        $f1, 0x2B70($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37CA2Cu, 0x37CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA34u;
label_37ca34:
    // 0x37ca34: 0x0  nop
    ctx->pc = 0x37ca34u;
    // NOP
label_37ca38:
    // 0x37ca38: 0xc62c2b54  lwc1        $f12, 0x2B54($s1)
    ctx->pc = 0x37ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37ca3c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x37ca3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x37ca40: 0xc0dfd24  jal         func_37F490
    ctx->pc = 0x37CA40u;
    SET_GPR_U32(ctx, 31, 0x37CA48u);
    ctx->pc = 0x37CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA40u;
    // 0x37ca44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F490u, 0x37CA40u, 0x37CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA48u;
label_37ca48:
    // 0x37ca48: 0xc0dfcfc  jal         func_37F3F0
    ctx->pc = 0x37CA48u;
    SET_GPR_U32(ctx, 31, 0x37CA50u);
    ctx->pc = 0x37CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA48u;
    // 0x37ca4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F3F0u, 0x37CA48u, 0x37CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA50u;
label_37ca50:
    // 0x37ca50: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x37CA50u;
    {
        const bool branch_taken_0x37ca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ca50) {
            ctx->pc = 0x37CB10u;
            goto label_37cb10;
        }
    }
    ctx->pc = 0x37CA58u;
label_37ca58:
    // 0x37ca58: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x37ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x37ca5c: 0xae222b70  sw          $v0, 0x2B70($s1)
    ctx->pc = 0x37ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11120), GPR_U32(ctx, 2));
    // 0x37ca60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x37ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x37ca64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37ca64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37ca68: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37CA68u;
    SET_GPR_U32(ctx, 31, 0x37CA70u);
    ctx->pc = 0x37CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA68u;
    // 0x37ca6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37CA68u, 0x37CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA70u;
label_37ca70:
    // 0x37ca70: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x37ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37ca74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37ca78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37ca78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37ca7c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37ca80: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x37ca80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37ca84: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37ca88: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x37ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x37ca8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37ca8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ca90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ca94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37ca94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ca98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37ca98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ca9c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x37ca9cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x37caa0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x37caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x37caa4: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37caa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37caa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37caa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37caac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37caacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37cab0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37cab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x37cab4: 0x0  nop
    ctx->pc = 0x37cab4u;
    // NOP
    // 0x37cab8: 0xa6222b74  sh          $v0, 0x2B74($s1)
    ctx->pc = 0x37cab8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11124), (uint16_t)GPR_U32(ctx, 2));
    // 0x37cabc: 0x922208e8  lbu         $v0, 0x8E8($s1)
    ctx->pc = 0x37cabcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x37cac0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x37cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x37cac4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x37cac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37cac8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37CAC8u;
    SET_GPR_U32(ctx, 31, 0x37CAD0u);
    ctx->pc = 0x37CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CAC8u;
    // 0x37cacc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37CAC8u, 0x37CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CAD0u;
label_37cad0:
    // 0x37cad0: 0x92220821  lbu         $v0, 0x821($s1)
    ctx->pc = 0x37cad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37cad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37cad8: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x37cad8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37cadc: 0x0  nop
    ctx->pc = 0x37cadcu;
    // NOP
label_37cae0:
    // 0x37cae0: 0xc0dfe30  jal         func_37F8C0
    ctx->pc = 0x37CAE0u;
    SET_GPR_U32(ctx, 31, 0x37CAE8u);
    ctx->pc = 0x37CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CAE0u;
    // 0x37cae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F8C0u, 0x37CAE0u, 0x37CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CAE8u;
label_37cae8:
    // 0x37cae8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37CAE8u;
    {
        const bool branch_taken_0x37cae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cae8) {
            ctx->pc = 0x37CB10u;
            goto label_37cb10;
        }
    }
    ctx->pc = 0x37CAF0u;
    // 0x37caf0: 0x92242bb4  lbu         $a0, 0x2BB4($s1)
    ctx->pc = 0x37caf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11188)));
    // 0x37caf4: 0x240300f3  addiu       $v1, $zero, 0xF3
    ctx->pc = 0x37caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x37caf8: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x37caf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
    // 0x37cafc: 0xa2242bb4  sb          $a0, 0x2BB4($s1)
    ctx->pc = 0x37cafcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11188), (uint8_t)GPR_U32(ctx, 4));
    // 0x37cb00: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x37cb00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x37cb04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37cb08: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x37cb08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x37cb0c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37cb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_37cb10:
    // 0x37cb10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37cb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37cb14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37cb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37cb18: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x37cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37cb1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37cb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cb20: 0x3e00008  jr          $ra
    ctx->pc = 0x37CB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB20u;
        // 0x37cb24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CB28u;
}
