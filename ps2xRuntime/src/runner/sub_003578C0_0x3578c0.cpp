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

// Function: sub_003578C0
// Address: 0x3578c0 - 0x357d18
void sub_003578C0_0x3578c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003578C0_0x3578c0");
#endif

    switch (ctx->pc) {
        case 0x3578fcu: goto label_3578fc;
        case 0x357940u: goto label_357940;
        case 0x357948u: goto label_357948;
        case 0x357954u: goto label_357954;
        case 0x357970u: goto label_357970;
        case 0x357984u: goto label_357984;
        case 0x357994u: goto label_357994;
        case 0x3579b8u: goto label_3579b8;
        case 0x3579e8u: goto label_3579e8;
        case 0x3579f8u: goto label_3579f8;
        case 0x357a28u: goto label_357a28;
        case 0x357b20u: goto label_357b20;
        case 0x357b34u: goto label_357b34;
        case 0x357b48u: goto label_357b48;
        case 0x357b5cu: goto label_357b5c;
        case 0x357b84u: goto label_357b84;
        case 0x357b90u: goto label_357b90;
        case 0x357ba4u: goto label_357ba4;
        case 0x357c20u: goto label_357c20;
        case 0x357c50u: goto label_357c50;
        case 0x357c70u: goto label_357c70;
        case 0x357c88u: goto label_357c88;
        case 0x357ca4u: goto label_357ca4;
        case 0x357cb8u: goto label_357cb8;
        case 0x357cd0u: goto label_357cd0;
        case 0x357ce4u: goto label_357ce4;
        default: break;
    }

    ctx->pc = 0x3578c0u;

    // 0x3578c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3578c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3578c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3578c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3578c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3578c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3578cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3578ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3578d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3578d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3578d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3578d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3578d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3578d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3578dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3578dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3578e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3578e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3578e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3578e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3578e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3578ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3578ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3578f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3578f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3578f4: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x3578F4u;
    SET_GPR_U32(ctx, 31, 0x3578FCu);
    ctx->pc = 0x3578F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3578F4u;
    // 0x3578f8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x3578F4u, 0x3578FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3578FCu;
label_3578fc:
    // 0x3578fc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3578fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357900: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x357900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x357904: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x357904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x357908: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x357908u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35790c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35790cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x357910: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x357910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x357914: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x357914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x357918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x357918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35791c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x35791cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357920: 0x8ea300a4  lw          $v1, 0xA4($s5)
    ctx->pc = 0x357920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x357924: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x357924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x357928: 0x2f43c  dsll32      $fp, $v0, 16
    ctx->pc = 0x357928u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35792c: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x35792cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x357930: 0x90660005  lbu         $a2, 0x5($v1)
    ctx->pc = 0x357930u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x357934: 0x9068000a  lbu         $t0, 0xA($v1)
    ctx->pc = 0x357934u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x357938: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x357938u;
    SET_GPR_U32(ctx, 31, 0x357940u);
    ctx->pc = 0x35793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357938u;
    // 0x35793c: 0x1ef43f  dsra32      $fp, $fp, 16 (Delay Slot)
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x357938u, 0x357940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357940u;
label_357940:
    // 0x357940: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x357940u;
    SET_GPR_U32(ctx, 31, 0x357948u);
    ctx->pc = 0x357944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357940u;
    // 0x357944: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x357940u, 0x357948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357948u;
label_357948:
    // 0x357948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x357948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35794c: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x35794Cu;
    SET_GPR_U32(ctx, 31, 0x357954u);
    ctx->pc = 0x357950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35794Cu;
    // 0x357950: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x35794Cu, 0x357954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357954u;
label_357954:
    // 0x357954: 0x8ea300a4  lw          $v1, 0xA4($s5)
    ctx->pc = 0x357954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x357958: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x357958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35795c: 0x26a40090  addiu       $a0, $s5, 0x90
    ctx->pc = 0x35795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x357960: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x357960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x357964: 0x9068000b  lbu         $t0, 0xB($v1)
    ctx->pc = 0x357964u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x357968: 0xc074458  jal         func_1D1160
    ctx->pc = 0x357968u;
    SET_GPR_U32(ctx, 31, 0x357970u);
    ctx->pc = 0x35796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357968u;
    // 0x35796c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x357968u, 0x357970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357970u;
label_357970:
    // 0x357970: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x357970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357974: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x357974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x357978: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x357978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x35797c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x35797Cu;
    SET_GPR_U32(ctx, 31, 0x357984u);
    ctx->pc = 0x357980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35797Cu;
    // 0x357980: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x35797Cu, 0x357984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357984u;
label_357984:
    // 0x357984: 0xc6ac0080  lwc1        $f12, 0x80($s5)
    ctx->pc = 0x357984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x357988: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x357988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35798c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x35798Cu;
    SET_GPR_U32(ctx, 31, 0x357994u);
    ctx->pc = 0x357990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35798Cu;
    // 0x357990: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x35798Cu, 0x357994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357994u;
label_357994:
    // 0x357994: 0x8ea400a4  lw          $a0, 0xA4($s5)
    ctx->pc = 0x357994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x357998: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x357998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35799c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x35799cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3579a0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x3579A0u;
    {
        const bool branch_taken_0x3579a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3579A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579A0u;
        // 0x3579a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579a0) {
            ctx->pc = 0x357A50u;
            goto label_357a50;
        }
    }
    ctx->pc = 0x3579A8u;
    // 0x3579a8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3579a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3579ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3579acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3579b0: 0x34520080  ori         $s2, $v0, 0x80
    ctx->pc = 0x3579b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3579b4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3579b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3579b8:
    // 0x3579b8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3579b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3579bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3579bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3579c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3579c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3579c4: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x3579c4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3579c8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3579c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3579cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3579ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3579d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3579d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3579d4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3579d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3579d8: 0x0  nop
    ctx->pc = 0x3579d8u;
    // NOP
    // 0x3579dc: 0x0  nop
    ctx->pc = 0x3579dcu;
    // NOP
    // 0x3579e0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3579E0u;
    SET_GPR_U32(ctx, 31, 0x3579E8u);
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3579E0u, 0x3579E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3579E8u;
label_3579e8:
    // 0x3579e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3579e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3579ec: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x3579ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x3579f0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3579F0u;
    SET_GPR_U32(ctx, 31, 0x3579F8u);
    ctx->pc = 0x3579F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3579F0u;
    // 0x3579f4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3579F0u, 0x3579F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3579F8u;
label_3579f8:
    // 0x3579f8: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3579F8u;
    {
        const bool branch_taken_0x3579f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3579f8) {
            ctx->pc = 0x357A28u;
            goto label_357a28;
        }
    }
    ctx->pc = 0x357A00u;
    // 0x357a00: 0x8ea200a4  lw          $v0, 0xA4($s5)
    ctx->pc = 0x357a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x357a04: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x357a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x357a08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x357a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x357a0c: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x357A0Cu;
    {
        const bool branch_taken_0x357a0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x357a0c) {
            ctx->pc = 0x357A28u;
            goto label_357a28;
        }
    }
    ctx->pc = 0x357A14u;
    // 0x357a14: 0x8ea200a0  lw          $v0, 0xA0($s5)
    ctx->pc = 0x357a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x357a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x357a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x357a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a20: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x357A20u;
    SET_GPR_U32(ctx, 31, 0x357A28u);
    ctx->pc = 0x357A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357A20u;
    // 0x357a24: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x357A20u, 0x357A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357A28u;
label_357a28:
    // 0x357a28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x357a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x357a2c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x357a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x357a30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x357a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x357a34: 0x8ea400a4  lw          $a0, 0xA4($s5)
    ctx->pc = 0x357a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x357a38: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x357a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x357a3c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x357a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x357a40: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x357a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x357a44: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x357a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x357a48: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x357A48u;
    {
        const bool branch_taken_0x357a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357A48u;
        // 0x357a4c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a48) {
            ctx->pc = 0x3579B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3579b8;
        }
    }
    ctx->pc = 0x357A50u;
label_357a50:
    // 0x357a50: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x357a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x357a54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357a58: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x357a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
    // 0x357a5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x357a5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x357a60: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x357a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x357a64: 0x7c220040  sq          $v0, 0x40($at)
    ctx->pc = 0x357a64u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 2));
    // 0x357a68: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x357a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x357a6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357a70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x357a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357a74: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x357a74u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x357a78: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x357a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x357a7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357a80: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x357a80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x357a84: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x357a84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x357a88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357a8c: 0x78220040  lq          $v0, 0x40($at)
    ctx->pc = 0x357a8cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000040u));
    // 0x357a90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357a94: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x357a94u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x357a98: 0x8ea200a4  lw          $v0, 0xA4($s5)
    ctx->pc = 0x357a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x357a9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357aa0: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x357aa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x357aa4: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x357aa4u;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x357aa8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357aac: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x357aacu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x357ab0: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x357ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x357ab4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357ab8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x357ab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x357abc: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x357abcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x357ac0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357ac4: 0x78220060  lq          $v0, 0x60($at)
    ctx->pc = 0x357ac4u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000060u));
    // 0x357ac8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x357ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x357acc: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x357accu;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x357ad0: 0xc6a000a8  lwc1        $f0, 0xA8($s5)
    ctx->pc = 0x357ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357ad4: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x357ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x357ad8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x357ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x357adc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357ae0: 0x0  nop
    ctx->pc = 0x357ae0u;
    // NOP
    // 0x357ae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x357ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x357ae8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x357ae8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x357aec: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x357aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x357af0: 0xc6a000ac  lwc1        $f0, 0xAC($s5)
    ctx->pc = 0x357af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357af4: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x357af4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x357af8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x357af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x357afc: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x357afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x357b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357b04: 0x0  nop
    ctx->pc = 0x357b04u;
    // NOP
    // 0x357b08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x357b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x357b0c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x357b0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x357b10: 0x0  nop
    ctx->pc = 0x357b10u;
    // NOP
    // 0x357b14: 0x0  nop
    ctx->pc = 0x357b14u;
    // NOP
    // 0x357b18: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x357B18u;
    SET_GPR_U32(ctx, 31, 0x357B20u);
    ctx->pc = 0x357B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B18u;
    // 0x357b1c: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x357B18u, 0x357B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B20u;
label_357b20:
    // 0x357b20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x357b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x357b24: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x357b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x357b28: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x357b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x357b2c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x357B2Cu;
    SET_GPR_U32(ctx, 31, 0x357B34u);
    ctx->pc = 0x357B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B2Cu;
    // 0x357b30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x357B2Cu, 0x357B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B34u;
label_357b34:
    // 0x357b34: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x357b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x357b38: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x357b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x357b3c: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x357b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x357b40: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x357B40u;
    SET_GPR_U32(ctx, 31, 0x357B48u);
    ctx->pc = 0x357B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B40u;
    // 0x357b44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x357B40u, 0x357B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B48u;
label_357b48:
    // 0x357b48: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x357b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x357b4c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x357b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x357b50: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x357b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x357b54: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x357B54u;
    SET_GPR_U32(ctx, 31, 0x357B5Cu);
    ctx->pc = 0x357B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B54u;
    // 0x357b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x357B54u, 0x357B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B5Cu;
label_357b5c:
    // 0x357b5c: 0x8ea300a4  lw          $v1, 0xA4($s5)
    ctx->pc = 0x357b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x357b60: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x357b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x357b64: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x357b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x357b68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x357b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357b6c: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x357b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x357b70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x357b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x357b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357b78: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x357b78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x357b7c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x357B7Cu;
    SET_GPR_U32(ctx, 31, 0x357B84u);
    ctx->pc = 0x357B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B7Cu;
    // 0x357b80: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x357B7Cu, 0x357B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B84u;
label_357b84:
    // 0x357b84: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x357b84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x357b88: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x357B88u;
    SET_GPR_U32(ctx, 31, 0x357B90u);
    ctx->pc = 0x357B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B88u;
    // 0x357b8c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x357B88u, 0x357B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B90u;
label_357b90:
    // 0x357b90: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x357b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x357b94: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x357b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x357b98: 0x2e32021  addu        $a0, $s7, $v1
    ctx->pc = 0x357b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x357b9c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x357B9Cu;
    SET_GPR_U32(ctx, 31, 0x357BA4u);
    ctx->pc = 0x357BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B9Cu;
    // 0x357ba0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x357B9Cu, 0x357BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BA4u;
label_357ba4:
    // 0x357ba4: 0x86870008  lh          $a3, 0x8($s4)
    ctx->pc = 0x357ba4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x357ba8: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x357ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x357bac: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x357bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x357bb0: 0x96860004  lhu         $a2, 0x4($s4)
    ctx->pc = 0x357bb0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x357bb4: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x357bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x357bb8: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x357bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x357bbc: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x357bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x357bc0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x357bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x357bc4: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x357bc4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x357bc8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x357bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x357bcc: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x357bccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x357bd0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x357bd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x357bd4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x357bd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x357bd8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x357bd8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x357bdc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x357bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x357be0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x357be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x357be4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x357be4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x357be8: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x357be8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x357bec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x357becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x357bf0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x357bf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x357bf4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x357bf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x357bf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x357bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357bfc: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x357bfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x357c00: 0x34e7000f  ori         $a3, $a3, 0xF
    ctx->pc = 0x357c00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)15);
    // 0x357c04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x357c04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x357c08: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x357c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x357c0c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x357c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x357c10: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x357c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x357c14: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x357c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x357c18: 0xc074648  jal         func_1D1920
    ctx->pc = 0x357C18u;
    SET_GPR_U32(ctx, 31, 0x357C20u);
    ctx->pc = 0x357C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C18u;
    // 0x357c1c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x357C18u, 0x357C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C20u;
label_357c20:
    // 0x357c20: 0x8ea300a4  lw          $v1, 0xA4($s5)
    ctx->pc = 0x357c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x357c24: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x357c24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x357c28: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x357c28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x357c2c: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x357c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x357c30: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x357c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x357c34: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x357c34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x357c38: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x357c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x357c3c: 0x90680008  lbu         $t0, 0x8($v1)
    ctx->pc = 0x357c3cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x357c40: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x357c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x357c44: 0x90690001  lbu         $t1, 0x1($v1)
    ctx->pc = 0x357c44u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x357c48: 0xc075cb8  jal         func_1D72E0
    ctx->pc = 0x357C48u;
    SET_GPR_U32(ctx, 31, 0x357C50u);
    ctx->pc = 0x357C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C48u;
    // 0x357c4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D72E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D72E0u, 0x357C48u, 0x357C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C50u;
label_357c50:
    // 0x357c50: 0x8ea300a4  lw          $v1, 0xA4($s5)
    ctx->pc = 0x357c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x357c54: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x357c54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x357c58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c5c: 0x162100  sll         $a0, $s6, 4
    ctx->pc = 0x357c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x357c60: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x357c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x357c64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x357c64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x357c68: 0xc074654  jal         func_1D1950
    ctx->pc = 0x357C68u;
    SET_GPR_U32(ctx, 31, 0x357C70u);
    ctx->pc = 0x357C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C68u;
    // 0x357c6c: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1950u, 0x357C68u, 0x357C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C70u;
label_357c70:
    // 0x357c70: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x357c70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x357c74: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x357c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x357c78: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x357c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x357c7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c80: 0xc074648  jal         func_1D1920
    ctx->pc = 0x357C80u;
    SET_GPR_U32(ctx, 31, 0x357C88u);
    ctx->pc = 0x357C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C80u;
    // 0x357c84: 0x2e22021  addu        $a0, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x357C80u, 0x357C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C88u;
label_357c88:
    // 0x357c88: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x357c88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x357c8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x357c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x357c90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x357c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x357c94: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x357c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x357c98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x357c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x357c9c: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x357C9Cu;
    SET_GPR_U32(ctx, 31, 0x357CA4u);
    ctx->pc = 0x357CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C9Cu;
    // 0x357ca0: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x357C9Cu, 0x357CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CA4u;
label_357ca4:
    // 0x357ca4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x357ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x357ca8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x357ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x357cac: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x357cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x357cb0: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x357CB0u;
    SET_GPR_U32(ctx, 31, 0x357CB8u);
    ctx->pc = 0x357CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CB0u;
    // 0x357cb4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x357CB0u, 0x357CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CB8u;
label_357cb8:
    // 0x357cb8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x357cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x357cbc: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x357CBCu;
    {
        const bool branch_taken_0x357cbc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x357CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357CBCu;
        // 0x357cc0: 0x38283  sra         $s0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357cbc) {
            ctx->pc = 0x357CE8u;
            goto label_357ce8;
        }
    }
    ctx->pc = 0x357CC4u;
    // 0x357cc4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x357cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cc8: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x357CC8u;
    SET_GPR_U32(ctx, 31, 0x357CD0u);
    ctx->pc = 0x357CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CC8u;
    // 0x357ccc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x357CC8u, 0x357CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CD0u;
label_357cd0:
    // 0x357cd0: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x357cd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x357cd4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x357cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x357cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cdc: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x357CDCu;
    SET_GPR_U32(ctx, 31, 0x357CE4u);
    ctx->pc = 0x357CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CDCu;
    // 0x357ce0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x357CDCu, 0x357CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CE4u;
label_357ce4:
    // 0x357ce4: 0x0  nop
    ctx->pc = 0x357ce4u;
    // NOP
label_357ce8:
    // 0x357ce8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x357ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x357cec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x357cecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x357cf0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x357cf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x357cf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x357cf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357cf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x357cf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x357cfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x357cfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357d00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x357d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357d04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x357d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357d10: 0x3e00008  jr          $ra
    ctx->pc = 0x357D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D10u;
        // 0x357d14: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357D18u;
}
