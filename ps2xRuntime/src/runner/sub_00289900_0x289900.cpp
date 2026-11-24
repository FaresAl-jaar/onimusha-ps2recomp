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

// Function: sub_00289900
// Address: 0x289900 - 0x289cb8
void sub_00289900_0x289900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289900_0x289900");
#endif

    switch (ctx->pc) {
        case 0x289970u: goto label_289970;
        case 0x28997cu: goto label_28997c;
        case 0x28998cu: goto label_28998c;
        case 0x289998u: goto label_289998;
        case 0x2899acu: goto label_2899ac;
        case 0x2899c8u: goto label_2899c8;
        case 0x289a10u: goto label_289a10;
        case 0x289a20u: goto label_289a20;
        case 0x289a28u: goto label_289a28;
        case 0x289a80u: goto label_289a80;
        case 0x289a8cu: goto label_289a8c;
        case 0x289b30u: goto label_289b30;
        case 0x289c14u: goto label_289c14;
        default: break;
    }

    ctx->pc = 0x289900u;

    // 0x289900: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x289900u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289904: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x289904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x289908: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x289908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28990c: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28990cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x289910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x289910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x289914: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x289914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x289918: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x289918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28991c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x28991cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x289920: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x289920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x289924: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x289924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x289928: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x289928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28992c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28992cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289930: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x289930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x289934: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x289934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x289938: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x289938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28993c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x289940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x289940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x289944: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x289944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28994c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28994cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x289950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x289954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289958: 0x0  nop
    ctx->pc = 0x289958u;
    // NOP
    // 0x28995c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x28995cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x289960: 0x0  nop
    ctx->pc = 0x289960u;
    // NOP
    // 0x289964: 0x0  nop
    ctx->pc = 0x289964u;
    // NOP
    // 0x289968: 0xc096784  jal         func_259E10
    ctx->pc = 0x289968u;
    SET_GPR_U32(ctx, 31, 0x289970u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x289968u, 0x289970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289970u;
label_289970:
    // 0x289970: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x289970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x289974: 0xc041472  jal         func_1051C8
    ctx->pc = 0x289974u;
    SET_GPR_U32(ctx, 31, 0x28997Cu);
    ctx->pc = 0x289978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289974u;
    // 0x289978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x289974u, 0x28997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28997Cu;
label_28997c:
    // 0x28997c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289980: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x289980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289984: 0xc0a7330  jal         func_29CCC0
    ctx->pc = 0x289984u;
    SET_GPR_U32(ctx, 31, 0x28998Cu);
    ctx->pc = 0x289988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289984u;
    // 0x289988: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CCC0u, 0x289984u, 0x28998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28998Cu;
label_28998c:
    // 0x28998c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28998cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289990: 0x106000b5  beqz        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x289990u;
    {
        const bool branch_taken_0x289990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289990u;
        // 0x289994: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289990) {
            ctx->pc = 0x289C68u;
            goto label_289c68;
        }
    }
    ctx->pc = 0x289998u;
label_289998:
    // 0x289998: 0x8ec206c8  lw          $v0, 0x6C8($s6)
    ctx->pc = 0x289998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1736)));
    // 0x28999c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28999cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2899a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2899a4: 0xc0a2628  jal         func_2898A0
    ctx->pc = 0x2899A4u;
    SET_GPR_U32(ctx, 31, 0x2899ACu);
    ctx->pc = 0x2899A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899A4u;
    // 0x2899a8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2898A0u, 0x2899A4u, 0x2899ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899ACu;
label_2899ac:
    // 0x2899ac: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x2899ACu;
    {
        const bool branch_taken_0x2899ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2899ac) {
            ctx->pc = 0x289C58u;
            goto label_289c58;
        }
    }
    ctx->pc = 0x2899B4u;
    // 0x2899b4: 0x92830734  lbu         $v1, 0x734($s4)
    ctx->pc = 0x2899b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1844)));
    // 0x2899b8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2899b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2899bc: 0x102000a6  beqz        $at, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2899BCu;
    {
        const bool branch_taken_0x2899bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899BCu;
        // 0x2899c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899bc) {
            ctx->pc = 0x289C58u;
            goto label_289c58;
        }
    }
    ctx->pc = 0x2899C4u;
    // 0x2899c4: 0x0  nop
    ctx->pc = 0x2899c4u;
    // NOP
label_2899c8:
    // 0x2899c8: 0x92840735  lbu         $a0, 0x735($s4)
    ctx->pc = 0x2899c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1845)));
    // 0x2899cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2899ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2899d0: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x2899d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x2899d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2899d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2899d8: 0x14600099  bnez        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x2899D8u;
    {
        const bool branch_taken_0x2899d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2899d8) {
            ctx->pc = 0x289C40u;
            goto label_289c40;
        }
    }
    ctx->pc = 0x2899E0u;
    // 0x2899e0: 0x8e85004c  lw          $a1, 0x4C($s4)
    ctx->pc = 0x2899e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2899e4: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2899e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2899e8: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x2899e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2899ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2899ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2899f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2899f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2899f4: 0x90630730  lbu         $v1, 0x730($v1)
    ctx->pc = 0x2899f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x2899f8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2899f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2899fc: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x2899fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x289a00: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x289a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x289a04: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x289a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x289a08: 0xc041442  jal         func_105108
    ctx->pc = 0x289A08u;
    SET_GPR_U32(ctx, 31, 0x289A10u);
    ctx->pc = 0x289A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A08u;
    // 0x289a0c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x289A08u, 0x289A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A10u;
label_289a10:
    // 0x289a10: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x289a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x289a14: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x289a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x289a18: 0xc0414d0  jal         func_105340
    ctx->pc = 0x289A18u;
    SET_GPR_U32(ctx, 31, 0x289A20u);
    ctx->pc = 0x289A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A18u;
    // 0x289a1c: 0x26c60020  addiu       $a2, $s6, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x289A18u, 0x289A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A20u;
label_289a20:
    // 0x289a20: 0xc0968fc  jal         func_25A3F0
    ctx->pc = 0x289A20u;
    SET_GPR_U32(ctx, 31, 0x289A28u);
    ctx->pc = 0x289A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A20u;
    // 0x289a24: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3F0u, 0x289A20u, 0x289A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A28u;
label_289a28:
    // 0x289a28: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x289a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x289a2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289a30: 0x0  nop
    ctx->pc = 0x289a30u;
    // NOP
    // 0x289a34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x289a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289a38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x289A38u;
    {
        const bool branch_taken_0x289a38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289a38) {
            ctx->pc = 0x289A50u;
            goto label_289a50;
        }
    }
    ctx->pc = 0x289A40u;
    // 0x289a40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x289a40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x289a44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x289a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x289a48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x289A48u;
    {
        const bool branch_taken_0x289a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A48u;
        // 0x289a4c: 0x27a200b4  addiu       $v0, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a48) {
            ctx->pc = 0x289A6Cu;
            goto label_289a6c;
        }
    }
    ctx->pc = 0x289A50u;
label_289a50:
    // 0x289a50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x289a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x289a54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x289a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x289a58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x289a58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x289a5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x289a5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x289a60: 0x0  nop
    ctx->pc = 0x289a60u;
    // NOP
    // 0x289a64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x289a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x289a68: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x289a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_289a6c:
    // 0x289a6c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x289a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x289a70: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x289a70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x289a74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x289a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x289a78: 0xc041472  jal         func_1051C8
    ctx->pc = 0x289A78u;
    SET_GPR_U32(ctx, 31, 0x289A80u);
    ctx->pc = 0x289A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A78u;
    // 0x289a7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x289A78u, 0x289A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A80u;
label_289a80:
    // 0x289a80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x289a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x289a84: 0xc041468  jal         func_1051A0
    ctx->pc = 0x289A84u;
    SET_GPR_U32(ctx, 31, 0x289A8Cu);
    ctx->pc = 0x289A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A84u;
    // 0x289a88: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x289A84u, 0x289A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A8Cu;
label_289a8c:
    // 0x289a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x289a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x289a90: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x289a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x289a94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x289a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289a98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x289a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289a9c: 0x0  nop
    ctx->pc = 0x289a9cu;
    // NOP
    // 0x289aa0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x289aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x289aa4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x289aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x289aa8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x289aa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289ab0: 0x0  nop
    ctx->pc = 0x289ab0u;
    // NOP
    // 0x289ab4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x289ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289ab8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x289AB8u;
    {
        const bool branch_taken_0x289ab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289ab8) {
            ctx->pc = 0x289AD0u;
            goto label_289ad0;
        }
    }
    ctx->pc = 0x289AC0u;
    // 0x289ac0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x289ac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x289ac4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x289ac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x289ac8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x289AC8u;
    {
        const bool branch_taken_0x289ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AC8u;
        // 0x289acc: 0x3075ffff  andi        $s5, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ac8) {
            ctx->pc = 0x289AECu;
            goto label_289aec;
        }
    }
    ctx->pc = 0x289AD0u;
label_289ad0:
    // 0x289ad0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x289ad0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x289ad4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x289ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x289ad8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x289ad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x289adc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x289adcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x289ae0: 0x0  nop
    ctx->pc = 0x289ae0u;
    // NOP
    // 0x289ae4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x289ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x289ae8: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x289ae8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_289aec:
    // 0x289aec: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x289aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x289af0: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x289af0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x289af4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x289af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x289af8: 0x722823  subu        $a1, $v1, $s2
    ctx->pc = 0x289af8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x289afc: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x289afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x289b00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x289b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x289b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x289b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x289b0c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x289b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x289b10: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x289b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x289b14: 0x0  nop
    ctx->pc = 0x289b14u;
    // NOP
    // 0x289b18: 0x0  nop
    ctx->pc = 0x289b18u;
    // NOP
    // 0x289b1c: 0x1010  mfhi        $v0
    ctx->pc = 0x289b1cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x289b20: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x289b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x289b24: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x289b24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x289b28: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x289B28u;
    SET_GPR_U32(ctx, 31, 0x289B30u);
    ctx->pc = 0x289B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B28u;
    // 0x289b2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x289B28u, 0x289B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B30u;
label_289b30:
    // 0x289b30: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x289b30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x289b34: 0x32a4ffff  andi        $a0, $s5, 0xFFFF
    ctx->pc = 0x289b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x289b38: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x289b38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x289b3c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x289B3Cu;
    {
        const bool branch_taken_0x289b3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x289B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B3Cu;
        // 0x289b40: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b3c) {
            ctx->pc = 0x289B50u;
            goto label_289b50;
        }
    }
    ctx->pc = 0x289B44u;
    // 0x289b44: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x289b44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x289b48: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x289b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x289b4c: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x289b4cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_289b50:
    // 0x289b50: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x289b50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289b54: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x289b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x289b58: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x289B58u;
    {
        const bool branch_taken_0x289b58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b58) {
            ctx->pc = 0x289B70u;
            goto label_289b70;
        }
    }
    ctx->pc = 0x289B60u;
    // 0x289b60: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x289b60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x289b64: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x289b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x289b68: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x289b68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x289b6c: 0x0  nop
    ctx->pc = 0x289b6cu;
    // NOP
label_289b70:
    // 0x289b70: 0x96250008  lhu         $a1, 0x8($s1)
    ctx->pc = 0x289b70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289b74: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x289b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x289b78: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x289B78u;
    {
        const bool branch_taken_0x289b78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x289B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B78u;
        // 0x289b7c: 0xa41823  subu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b78) {
            ctx->pc = 0x289BA8u;
            goto label_289ba8;
        }
    }
    ctx->pc = 0x289B80u;
    // 0x289b80: 0x9624000a  lhu         $a0, 0xA($s1)
    ctx->pc = 0x289b80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x289b84: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x289b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x289b88: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x289b88u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x289b8c: 0x0  nop
    ctx->pc = 0x289b8cu;
    // NOP
    // 0x289b90: 0x0  nop
    ctx->pc = 0x289b90u;
    // NOP
    // 0x289b94: 0x1812  mflo        $v1
    ctx->pc = 0x289b94u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x289b98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x289b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x289b9c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x289b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x289ba0: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x289ba0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x289ba4: 0x0  nop
    ctx->pc = 0x289ba4u;
    // NOP
label_289ba8:
    // 0x289ba8: 0x9625000c  lhu         $a1, 0xC($s1)
    ctx->pc = 0x289ba8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289bac: 0xb2082a  slt         $at, $a1, $s2
    ctx->pc = 0x289bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x289bb0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x289BB0u;
    {
        const bool branch_taken_0x289bb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x289bb0) {
            ctx->pc = 0x289BE0u;
            goto label_289be0;
        }
    }
    ctx->pc = 0x289BB8u;
    // 0x289bb8: 0x9624000e  lhu         $a0, 0xE($s1)
    ctx->pc = 0x289bb8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x289bbc: 0xb21823  subu        $v1, $a1, $s2
    ctx->pc = 0x289bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x289bc0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x289bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x289bc4: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x289bc4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x289bc8: 0x0  nop
    ctx->pc = 0x289bc8u;
    // NOP
    // 0x289bcc: 0x0  nop
    ctx->pc = 0x289bccu;
    // NOP
    // 0x289bd0: 0x1812  mflo        $v1
    ctx->pc = 0x289bd0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x289bd4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x289bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x289bd8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x289bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x289bdc: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x289bdcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_289be0:
    // 0x289be0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x289be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x289be4: 0x8c24cf00  lw          $a0, -0x3100($at)
    ctx->pc = 0x289be4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CF00u));
    // 0x289be8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x289be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x289bec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x289becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x289bf0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x289BF0u;
    {
        const bool branch_taken_0x289bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289BF0u;
        // 0x289bf4: 0x3c080067  lui         $t0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289bf0) {
            ctx->pc = 0x289C18u;
            goto label_289c18;
        }
    }
    ctx->pc = 0x289BF8u;
    // 0x289bf8: 0x32a9ffff  andi        $t1, $s5, 0xFFFF
    ctx->pc = 0x289bf8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x289bfc: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x289bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x289c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x289c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x289c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c0c: 0xc0a2730  jal         func_289CC0
    ctx->pc = 0x289C0Cu;
    SET_GPR_U32(ctx, 31, 0x289C14u);
    ctx->pc = 0x289C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C0Cu;
    // 0x289c10: 0x25086520  addiu       $t0, $t0, 0x6520 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289CC0u, 0x289C0Cu, 0x289C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C14u;
label_289c14:
    // 0x289c14: 0x0  nop
    ctx->pc = 0x289c14u;
    // NOP
label_289c18:
    // 0x289c18: 0x32a4ffff  andi        $a0, $s5, 0xFFFF
    ctx->pc = 0x289c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x289c1c: 0x18800008  blez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x289C1Cu;
    {
        const bool branch_taken_0x289c1c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x289C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C1Cu;
        // 0x289c20: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c1c) {
            ctx->pc = 0x289C40u;
            goto label_289c40;
        }
    }
    ctx->pc = 0x289C24u;
    // 0x289c24: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x289c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x289c28: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x289C28u;
    {
        const bool branch_taken_0x289c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x289c28) {
            ctx->pc = 0x289C40u;
            goto label_289c40;
        }
    }
    ctx->pc = 0x289C30u;
    // 0x289c30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c34: 0x327effff  andi        $fp, $s3, 0xFFFF
    ctx->pc = 0x289c34u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x289c38: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x289c38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c3c: 0x0  nop
    ctx->pc = 0x289c3cu;
    // NOP
label_289c40:
    // 0x289c40: 0x92830734  lbu         $v1, 0x734($s4)
    ctx->pc = 0x289c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1844)));
    // 0x289c44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x289c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x289c48: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x289c48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289c4c: 0x1460ff5e  bnez        $v1, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x289C4Cu;
    {
        const bool branch_taken_0x289c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289c4c) {
            ctx->pc = 0x2899C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2899c8;
        }
    }
    ctx->pc = 0x289C54u;
    // 0x289c54: 0x0  nop
    ctx->pc = 0x289c54u;
    // NOP
label_289c58:
    // 0x289c58: 0x8e940018  lw          $s4, 0x18($s4)
    ctx->pc = 0x289c58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x289c5c: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x289c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289c60: 0x1460ff4d  bnez        $v1, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x289C60u;
    {
        const bool branch_taken_0x289c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289c60) {
            ctx->pc = 0x289998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289998;
        }
    }
    ctx->pc = 0x289C68u;
label_289c68:
    // 0x289c68: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x289C68u;
    {
        const bool branch_taken_0x289c68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x289c68) {
            ctx->pc = 0x289C80u;
            goto label_289c80;
        }
    }
    ctx->pc = 0x289C70u;
    // 0x289c70: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x289c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x289c74: 0xaec307c0  sw          $v1, 0x7C0($s6)
    ctx->pc = 0x289c74u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1984), GPR_U32(ctx, 3));
    // 0x289c78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289C78u;
    {
        const bool branch_taken_0x289c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C78u;
        // 0x289c7c: 0xa2fe0733  sb          $fp, 0x733($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 1843), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c78) {
            ctx->pc = 0x289C88u;
            goto label_289c88;
        }
    }
    ctx->pc = 0x289C80u;
label_289c80:
    // 0x289c80: 0xaec007c0  sw          $zero, 0x7C0($s6)
    ctx->pc = 0x289c80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1984), GPR_U32(ctx, 0));
    // 0x289c84: 0x0  nop
    ctx->pc = 0x289c84u;
    // NOP
label_289c88:
    // 0x289c88: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x289c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289c8c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x289c8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x289c90: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x289c90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289c94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x289c94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x289c98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x289c98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289c9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x289c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289ca0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x289ca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289ca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x289ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x289CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CB0u;
        // 0x289cb4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289CB8u;
}
