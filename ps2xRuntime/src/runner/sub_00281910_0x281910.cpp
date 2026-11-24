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

// Function: sub_00281910
// Address: 0x281910 - 0x281b44
void sub_00281910_0x281910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281910_0x281910");
#endif

    switch (ctx->pc) {
        case 0x2819acu: goto label_2819ac;
        case 0x2819e4u: goto label_2819e4;
        case 0x281a2cu: goto label_281a2c;
        case 0x281a88u: goto label_281a88;
        case 0x281a90u: goto label_281a90;
        case 0x281aa0u: goto label_281aa0;
        case 0x281abcu: goto label_281abc;
        default: break;
    }

    ctx->pc = 0x281910u;

    // 0x281910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x281914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x281918: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x281918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x28191c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28191cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281924: 0x87838160  lh          $v1, -0x7EA0($gp)
    ctx->pc = 0x281924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x281928: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x281928u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x28192c: 0x9483082a  lhu         $v1, 0x82A($a0)
    ctx->pc = 0x28192cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2090)));
    // 0x281930: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x281930u;
    {
        const bool branch_taken_0x281930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281930u;
        // 0x281934: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281930) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x281938u;
    // 0x281938: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x281938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x28193c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x281940: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281940u;
    {
        const bool branch_taken_0x281940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281940) {
            ctx->pc = 0x281950u;
            goto label_281950;
        }
    }
    ctx->pc = 0x281948u;
    // 0x281948: 0x10a00079  beqz        $a1, . + 4 + (0x79 << 2)
    ctx->pc = 0x281948u;
    {
        const bool branch_taken_0x281948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x281948) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x281950u;
label_281950:
    // 0x281950: 0x8e0406ac  lw          $a0, 0x6AC($s0)
    ctx->pc = 0x281950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x281954: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x281954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x281958: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x281958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28195c: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x28195Cu;
    {
        const bool branch_taken_0x28195c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28195c) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x281964u;
    // 0x281964: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x281964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281968: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x281968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x28196c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28196cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281970: 0x0  nop
    ctx->pc = 0x281970u;
    // NOP
    // 0x281974: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x281974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281978: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x281978u;
    {
        const bool branch_taken_0x281978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281978) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x281980u;
    // 0x281980: 0xc60107a4  lwc1        $f1, 0x7A4($s0)
    ctx->pc = 0x281980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281984: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x281984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x281988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28198c: 0x0  nop
    ctx->pc = 0x28198cu;
    // NOP
    // 0x281990: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x281990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281994: 0x45010066  bc1t        . + 4 + (0x66 << 2)
    ctx->pc = 0x281994u;
    {
        const bool branch_taken_0x281994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281994) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x28199Cu;
    // 0x28199c: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x28199Cu;
    {
        const bool branch_taken_0x28199c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2819A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28199Cu;
        // 0x2819a0: 0x260407a0  addiu       $a0, $s0, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28199c) {
            ctx->pc = 0x2819C8u;
            goto label_2819c8;
        }
    }
    ctx->pc = 0x2819A4u;
    // 0x2819a4: 0xc0968fc  jal         func_25A3F0
    ctx->pc = 0x2819A4u;
    SET_GPR_U32(ctx, 31, 0x2819ACu);
    ctx->pc = 0x25A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3F0u, 0x2819A4u, 0x2819ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819ACu;
label_2819ac:
    // 0x2819ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2819acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2819b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2819b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2819b4: 0x0  nop
    ctx->pc = 0x2819b4u;
    // NOP
    // 0x2819b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2819b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2819bc: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x2819BCu;
    {
        const bool branch_taken_0x2819bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2819bc) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x2819C4u;
    // 0x2819c4: 0x0  nop
    ctx->pc = 0x2819c4u;
    // NOP
label_2819c8:
    // 0x2819c8: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x2819c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x2819cc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2819ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2819d0: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2819D0u;
    {
        const bool branch_taken_0x2819d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2819d0) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x2819D8u;
    // 0x2819d8: 0xc60d07a8  lwc1        $f13, 0x7A8($s0)
    ctx->pc = 0x2819d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2819dc: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2819DCu;
    SET_GPR_U32(ctx, 31, 0x2819E4u);
    ctx->pc = 0x2819E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2819DCu;
    // 0x2819e0: 0xc60c07a0  lwc1        $f12, 0x7A0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2819DCu, 0x2819E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819E4u;
label_2819e4:
    // 0x2819e4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2819e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2819e8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2819e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2819ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2819ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2819f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2819f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2819f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2819f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2819f8: 0x0  nop
    ctx->pc = 0x2819f8u;
    // NOP
    // 0x2819fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2819fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x281a00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x281a00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x281a04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281a04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x281a08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x281a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x281a0c: 0xc60c28e0  lwc1        $f12, 0x28E0($s0)
    ctx->pc = 0x281a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281a10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x281a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x281a14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x281a14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x281a18: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x281a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x281a1c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x281a1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x281a20: 0xc60d28e8  lwc1        $f13, 0x28E8($s0)
    ctx->pc = 0x281a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x281a24: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x281A24u;
    SET_GPR_U32(ctx, 31, 0x281A2Cu);
    ctx->pc = 0x281A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A24u;
    // 0x281a28: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x281A24u, 0x281A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A2Cu;
label_281a2c:
    // 0x281a2c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x281a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x281a30: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x281a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x281a34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x281a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281a38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x281a38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x281a3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281a40: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x281a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x281a44: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x281a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x281a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a4c: 0x0  nop
    ctx->pc = 0x281a4cu;
    // NOP
    // 0x281a50: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x281a50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x281a54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281a54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x281a58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x281a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x281a5c: 0x0  nop
    ctx->pc = 0x281a5cu;
    // NOP
    // 0x281a60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x281a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x281a64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x281a64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x281a68: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x281a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x281a6c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x281a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x281a70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x281a70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x281a74: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x281a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x281a78: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x281a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x281a7c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x281a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x281a80: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x281A80u;
    SET_GPR_U32(ctx, 31, 0x281A88u);
    ctx->pc = 0x281A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A80u;
    // 0x281a84: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x281A80u, 0x281A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A88u;
label_281a88:
    // 0x281a88: 0xc096a10  jal         func_25A840
    ctx->pc = 0x281A88u;
    SET_GPR_U32(ctx, 31, 0x281A90u);
    ctx->pc = 0x281A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A88u;
    // 0x281a8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A840u, 0x281A88u, 0x281A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A90u;
label_281a90:
    // 0x281a90: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x281A90u;
    {
        const bool branch_taken_0x281a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281A90u;
        // 0x281a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a90) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x281A98u;
    // 0x281a98: 0xc0a0624  jal         func_281890
    ctx->pc = 0x281A98u;
    SET_GPR_U32(ctx, 31, 0x281AA0u);
    ctx->pc = 0x281A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281A98u;
    // 0x281a9c: 0x260507a0  addiu       $a1, $s0, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281890u, 0x281A98u, 0x281AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AA0u;
label_281aa0:
    // 0x281aa0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x281AA0u;
    {
        const bool branch_taken_0x281aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281aa0) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x281AA8u;
    // 0x281aa8: 0x260207a0  addiu       $v0, $s0, 0x7A0
    ctx->pc = 0x281aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x281aac: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x281aacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x281ab0: 0xc60d28e8  lwc1        $f13, 0x28E8($s0)
    ctx->pc = 0x281ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x281ab4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x281AB4u;
    SET_GPR_U32(ctx, 31, 0x281ABCu);
    ctx->pc = 0x281AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281AB4u;
    // 0x281ab8: 0xc60c28e0  lwc1        $f12, 0x28E0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x281AB4u, 0x281ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281ABCu;
label_281abc:
    // 0x281abc: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x281abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x281ac0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x281ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x281ac4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x281ac4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x281ac8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x281ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x281acc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x281accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281ad0: 0x0  nop
    ctx->pc = 0x281ad0u;
    // NOP
    // 0x281ad4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x281ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x281ad8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x281ad8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x281adc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281adcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x281ae0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x281ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x281ae4: 0x0  nop
    ctx->pc = 0x281ae4u;
    // NOP
    // 0x281ae8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x281ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x281aec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x281aecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x281af0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x281af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x281af4: 0xa60300c2  sh          $v1, 0xC2($s0)
    ctx->pc = 0x281af4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x281af8: 0x7a0328e0  lq          $v1, 0x28E0($s0)
    ctx->pc = 0x281af8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 10464)));
    // 0x281afc: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x281afcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x281b00: 0x92030839  lbu         $v1, 0x839($s0)
    ctx->pc = 0x281b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2105)));
    // 0x281b04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x281B04u;
    {
        const bool branch_taken_0x281b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281b04) {
            ctx->pc = 0x281B18u;
            goto label_281b18;
        }
    }
    ctx->pc = 0x281B0Cu;
    // 0x281b0c: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x281b0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x281b10: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x281b14: 0xa60300c2  sh          $v1, 0xC2($s0)
    ctx->pc = 0x281b14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 3));
label_281b18:
    // 0x281b18: 0x92030839  lbu         $v1, 0x839($s0)
    ctx->pc = 0x281b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2105)));
    // 0x281b1c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x281b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x281b20: 0x9063003c  lbu         $v1, 0x3C($v1)
    ctx->pc = 0x281b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x281b24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281B24u;
    {
        const bool branch_taken_0x281b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B24u;
        // 0x281b28: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b24) {
            ctx->pc = 0x281B30u;
            goto label_281b30;
        }
    }
    ctx->pc = 0x281B2Cu;
    // 0x281b2c: 0x0  nop
    ctx->pc = 0x281b2cu;
    // NOP
label_281b30:
    // 0x281b30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281b34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x281B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B3Cu;
        // 0x281b40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281B44u;
}
