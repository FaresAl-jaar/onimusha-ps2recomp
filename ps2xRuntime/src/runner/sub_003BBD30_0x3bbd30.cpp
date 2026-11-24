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

// Function: sub_003BBD30
// Address: 0x3bbd30 - 0x3bbef4
void sub_003BBD30_0x3bbd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBD30_0x3bbd30");
#endif

    switch (ctx->pc) {
        case 0x3bbd58u: goto label_3bbd58;
        case 0x3bbd88u: goto label_3bbd88;
        case 0x3bbda0u: goto label_3bbda0;
        case 0x3bbdacu: goto label_3bbdac;
        case 0x3bbe04u: goto label_3bbe04;
        case 0x3bbe1cu: goto label_3bbe1c;
        case 0x3bbe28u: goto label_3bbe28;
        case 0x3bbea0u: goto label_3bbea0;
        case 0x3bbeb0u: goto label_3bbeb0;
        case 0x3bbee4u: goto label_3bbee4;
        default: break;
    }

    ctx->pc = 0x3bbd30u;

    // 0x3bbd30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bbd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bbd34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bbd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbd38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bbd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bbd3c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3bbd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3bbd40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bbd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bbd44: 0x90822b4b  lbu         $v0, 0x2B4B($a0)
    ctx->pc = 0x3bbd44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11083)));
    // 0x3bbd48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bbd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbd4c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3bbd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3bbd50: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3BBD50u;
    SET_GPR_U32(ctx, 31, 0x3BBD58u);
    ctx->pc = 0x3BBD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBD50u;
    // 0x3bbd54: 0xa0822b4b  sb          $v0, 0x2B4B($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3BBD50u, 0x3BBD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBD58u;
label_3bbd58:
    // 0x3bbd58: 0xc6002b20  lwc1        $f0, 0x2B20($s0)
    ctx->pc = 0x3bbd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbd5c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x3bbd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x3bbd60: 0xc6002b24  lwc1        $f0, 0x2B24($s0)
    ctx->pc = 0x3bbd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbd64: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x3bbd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3bbd68: 0xc6002b28  lwc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3bbd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbd6c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x3bbd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x3bbd70: 0x92032b59  lbu         $v1, 0x2B59($s0)
    ctx->pc = 0x3bbd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11097)));
    // 0x3bbd74: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3bbd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3bbd78: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3BBD78u;
    {
        const bool branch_taken_0x3bbd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD78u;
        // 0x3bbd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbd78) {
            ctx->pc = 0x3BBDF0u;
            goto label_3bbdf0;
        }
    }
    ctx->pc = 0x3BBD80u;
    // 0x3bbd80: 0xc0ef26c  jal         func_3BC9B0
    ctx->pc = 0x3BBD80u;
    SET_GPR_U32(ctx, 31, 0x3BBD88u);
    ctx->pc = 0x3BC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC9B0u, 0x3BBD80u, 0x3BBD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBD88u;
label_3bbd88:
    // 0x3bbd88: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3BBD88u;
    {
        const bool branch_taken_0x3bbd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbd88) {
            ctx->pc = 0x3BBE70u;
            goto label_3bbe70;
        }
    }
    ctx->pc = 0x3BBD90u;
    // 0x3bbd90: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3bbd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3bbd94: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3bbd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3bbd98: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3BBD98u;
    SET_GPR_U32(ctx, 31, 0x3BBDA0u);
    ctx->pc = 0x3BBD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBD98u;
    // 0x3bbd9c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3BBD98u, 0x3BBDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBDA0u;
label_3bbda0:
    // 0x3bbda0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3bbda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3bbda4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3BBDA4u;
    SET_GPR_U32(ctx, 31, 0x3BBDACu);
    ctx->pc = 0x3BBDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBDA4u;
    // 0x3bbda8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3BBDA4u, 0x3BBDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBDACu;
label_3bbdac:
    // 0x3bbdac: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3bbdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3bbdb0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3bbdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3bbdb4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3bbdb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bbdb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3bbdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3bbdbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bbdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bbdc0: 0x0  nop
    ctx->pc = 0x3bbdc0u;
    // NOP
    // 0x3bbdc4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bbdc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bbdc8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3bbdc8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3bbdcc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bbdccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bbdd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bbdd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bbdd4: 0x0  nop
    ctx->pc = 0x3bbdd4u;
    // NOP
    // 0x3bbdd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bbdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bbddc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bbddcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bbde0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3bbde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3bbde4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3BBDE4u;
    {
        const bool branch_taken_0x3bbde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDE4u;
        // 0x3bbde8: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbde4) {
            ctx->pc = 0x3BBE70u;
            goto label_3bbe70;
        }
    }
    ctx->pc = 0x3BBDECu;
    // 0x3bbdec: 0x0  nop
    ctx->pc = 0x3bbdecu;
    // NOP
label_3bbdf0:
    // 0x3bbdf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bbdf4: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3BBDF4u;
    {
        const bool branch_taken_0x3bbdf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BBDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBDF4u;
        // 0x3bbdf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbdf4) {
            ctx->pc = 0x3BBE68u;
            goto label_3bbe68;
        }
    }
    ctx->pc = 0x3BBDFCu;
    // 0x3bbdfc: 0xc0ef288  jal         func_3BCA20
    ctx->pc = 0x3BBDFCu;
    SET_GPR_U32(ctx, 31, 0x3BBE04u);
    ctx->pc = 0x3BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCA20u, 0x3BBDFCu, 0x3BBE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBE04u;
label_3bbe04:
    // 0x3bbe04: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3BBE04u;
    {
        const bool branch_taken_0x3bbe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbe04) {
            ctx->pc = 0x3BBE70u;
            goto label_3bbe70;
        }
    }
    ctx->pc = 0x3BBE0Cu;
    // 0x3bbe0c: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3bbe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3bbe10: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3bbe10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3bbe14: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3BBE14u;
    SET_GPR_U32(ctx, 31, 0x3BBE1Cu);
    ctx->pc = 0x3BBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBE14u;
    // 0x3bbe18: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3BBE14u, 0x3BBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBE1Cu;
label_3bbe1c:
    // 0x3bbe1c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3bbe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3bbe20: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3BBE20u;
    SET_GPR_U32(ctx, 31, 0x3BBE28u);
    ctx->pc = 0x3BBE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBE20u;
    // 0x3bbe24: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3BBE20u, 0x3BBE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBE28u;
label_3bbe28:
    // 0x3bbe28: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3bbe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3bbe2c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3bbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3bbe30: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3bbe30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bbe34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3bbe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3bbe38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bbe38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bbe3c: 0x0  nop
    ctx->pc = 0x3bbe3cu;
    // NOP
    // 0x3bbe40: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bbe40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bbe44: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3bbe44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3bbe48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bbe48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bbe4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bbe4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bbe50: 0x0  nop
    ctx->pc = 0x3bbe50u;
    // NOP
    // 0x3bbe54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bbe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bbe58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bbe58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bbe5c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3bbe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3bbe60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBE60u;
    {
        const bool branch_taken_0x3bbe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBE60u;
        // 0x3bbe64: 0xa60200c2  sh          $v0, 0xC2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbe60) {
            ctx->pc = 0x3BBE70u;
            goto label_3bbe70;
        }
    }
    ctx->pc = 0x3BBE68u;
label_3bbe68:
    // 0x3bbe68: 0x86022b40  lh          $v0, 0x2B40($s0)
    ctx->pc = 0x3bbe68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11072)));
    // 0x3bbe6c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3bbe6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_3bbe70:
    // 0x3bbe70: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3bbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bbe74: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x3bbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3bbe78: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3bbe78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bbe7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bbe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbe80: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3bbe80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3bbe84: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3bbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3bbe88: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3bbe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bbe8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bbe8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bbe90: 0x0  nop
    ctx->pc = 0x3bbe90u;
    // NOP
    // 0x3bbe94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3bbe94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3bbe98: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3BBE98u;
    SET_GPR_U32(ctx, 31, 0x3BBEA0u);
    ctx->pc = 0x3BBE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBE98u;
    // 0x3bbe9c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3BBE98u, 0x3BBEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBEA0u;
label_3bbea0:
    // 0x3bbea0: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3bbea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3bbea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bbea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbea8: 0xc0aa1c8  jal         func_2A8720
    ctx->pc = 0x3BBEA8u;
    SET_GPR_U32(ctx, 31, 0x3BBEB0u);
    ctx->pc = 0x3BBEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBEA8u;
    // 0x3bbeac: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8720u, 0x3BBEA8u, 0x3BBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBEB0u;
label_3bbeb0:
    // 0x3bbeb0: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x3bbeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3bbeb4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3bbeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3bbeb8: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x3bbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x3bbebc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3bbebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3bbec0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3bbec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3bbec4: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3bbec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
    // 0x3bbec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bbec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbecc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3bbeccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbed0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3bbed0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbed4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3bbed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3bbed8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bbed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bbedc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3BBEDCu;
    SET_GPR_U32(ctx, 31, 0x3BBEE4u);
    ctx->pc = 0x3BBEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBEDCu;
    // 0x3bbee0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3BBEDCu, 0x3BBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBEE4u;
label_3bbee4:
    // 0x3bbee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bbee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bbee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bbee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bbeec: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBEECu;
        // 0x3bbef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBEF4u;
}
