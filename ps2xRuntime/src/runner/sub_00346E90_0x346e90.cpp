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

// Function: sub_00346E90
// Address: 0x346e90 - 0x346f94
void sub_00346E90_0x346e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346E90_0x346e90");
#endif

    switch (ctx->pc) {
        case 0x346e90u: goto label_346e90;
        case 0x346e94u: goto label_346e94;
        case 0x346e98u: goto label_346e98;
        case 0x346e9cu: goto label_346e9c;
        case 0x346ea0u: goto label_346ea0;
        case 0x346ea4u: goto label_346ea4;
        case 0x346ea8u: goto label_346ea8;
        case 0x346eacu: goto label_346eac;
        case 0x346eb0u: goto label_346eb0;
        case 0x346eb4u: goto label_346eb4;
        case 0x346eb8u: goto label_346eb8;
        case 0x346ebcu: goto label_346ebc;
        case 0x346ec0u: goto label_346ec0;
        case 0x346ec4u: goto label_346ec4;
        case 0x346ec8u: goto label_346ec8;
        case 0x346eccu: goto label_346ecc;
        case 0x346ed0u: goto label_346ed0;
        case 0x346ed4u: goto label_346ed4;
        case 0x346ed8u: goto label_346ed8;
        case 0x346edcu: goto label_346edc;
        case 0x346ee0u: goto label_346ee0;
        case 0x346ee4u: goto label_346ee4;
        case 0x346ee8u: goto label_346ee8;
        case 0x346eecu: goto label_346eec;
        case 0x346ef0u: goto label_346ef0;
        case 0x346ef4u: goto label_346ef4;
        case 0x346ef8u: goto label_346ef8;
        case 0x346efcu: goto label_346efc;
        case 0x346f00u: goto label_346f00;
        case 0x346f04u: goto label_346f04;
        case 0x346f08u: goto label_346f08;
        case 0x346f0cu: goto label_346f0c;
        case 0x346f10u: goto label_346f10;
        case 0x346f14u: goto label_346f14;
        case 0x346f18u: goto label_346f18;
        case 0x346f1cu: goto label_346f1c;
        case 0x346f20u: goto label_346f20;
        case 0x346f24u: goto label_346f24;
        case 0x346f28u: goto label_346f28;
        case 0x346f2cu: goto label_346f2c;
        case 0x346f30u: goto label_346f30;
        case 0x346f34u: goto label_346f34;
        case 0x346f38u: goto label_346f38;
        case 0x346f3cu: goto label_346f3c;
        case 0x346f40u: goto label_346f40;
        case 0x346f44u: goto label_346f44;
        case 0x346f48u: goto label_346f48;
        case 0x346f4cu: goto label_346f4c;
        case 0x346f50u: goto label_346f50;
        case 0x346f54u: goto label_346f54;
        case 0x346f58u: goto label_346f58;
        case 0x346f5cu: goto label_346f5c;
        case 0x346f60u: goto label_346f60;
        case 0x346f64u: goto label_346f64;
        case 0x346f68u: goto label_346f68;
        case 0x346f6cu: goto label_346f6c;
        case 0x346f70u: goto label_346f70;
        case 0x346f74u: goto label_346f74;
        case 0x346f78u: goto label_346f78;
        case 0x346f7cu: goto label_346f7c;
        case 0x346f80u: goto label_346f80;
        case 0x346f84u: goto label_346f84;
        case 0x346f88u: goto label_346f88;
        case 0x346f8cu: goto label_346f8c;
        case 0x346f90u: goto label_346f90;
        default: break;
    }

    ctx->pc = 0x346e90u;

label_346e90:
    // 0x346e90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x346e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_346e94:
    // 0x346e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x346e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_346e98:
    // 0x346e98: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x346e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_346e9c:
    // 0x346e9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_346ea0:
    // 0x346ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346ea4:
    // 0x346ea4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x346ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_346ea8:
    // 0x346ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_346eac:
    // 0x346eac: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x346eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_346eb0:
    // 0x346eb0: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x346eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_346eb4:
    // 0x346eb4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x346eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_346eb8:
    // 0x346eb8: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x346eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346ebc:
    // 0x346ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346ec0:
    // 0x346ec0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x346ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346ec4:
    // 0x346ec4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x346ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346ec8:
    // 0x346ec8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x346ec8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_346ecc:
    // 0x346ecc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x346eccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_346ed0:
    // 0x346ed0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x346ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_346ed4:
    // 0x346ed4: 0xc0a4408  jal         func_291020
label_346ed8:
    if (ctx->pc == 0x346ED8u) {
        ctx->pc = 0x346ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346ED4u;
        // 0x346ed8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346EDCu;
        goto label_346edc;
    }
    ctx->pc = 0x346ED4u;
    SET_GPR_U32(ctx, 31, 0x346EDCu);
    ctx->pc = 0x346ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346ED4u;
    // 0x346ed8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x346ED4u, 0x346EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EDCu;
label_346edc:
    // 0x346edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346ee0:
    // 0x346ee0: 0xc0a43fc  jal         func_290FF0
label_346ee4:
    if (ctx->pc == 0x346EE4u) {
        ctx->pc = 0x346EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EE0u;
        // 0x346ee4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346EE8u;
        goto label_346ee8;
    }
    ctx->pc = 0x346EE0u;
    SET_GPR_U32(ctx, 31, 0x346EE8u);
    ctx->pc = 0x346EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EE0u;
    // 0x346ee4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x346EE0u, 0x346EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EE8u;
label_346ee8:
    // 0x346ee8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x346ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_346eec:
    // 0x346eec: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x346eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_346ef0:
    // 0x346ef0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x346ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_346ef4:
    // 0x346ef4: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x346ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_346ef8:
    // 0x346ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x346ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346efc:
    // 0x346efc: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x346efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_346f00:
    // 0x346f00: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x346f00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_346f04:
    // 0x346f04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x346f04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346f08:
    // 0x346f08: 0xc0510e0  jal         func_144380
label_346f0c:
    if (ctx->pc == 0x346F0Cu) {
        ctx->pc = 0x346F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F08u;
        // 0x346f0c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346F10u;
        goto label_346f10;
    }
    ctx->pc = 0x346F08u;
    SET_GPR_U32(ctx, 31, 0x346F10u);
    ctx->pc = 0x346F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F08u;
    // 0x346f0c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x346F08u, 0x346F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F10u;
label_346f10:
    // 0x346f10: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x346f10u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_346f14:
    // 0x346f14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x346f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346f18:
    // 0x346f18: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x346f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_346f1c:
    // 0x346f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346f20:
    // 0x346f20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x346f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_346f24:
    // 0x346f24: 0x24050213  addiu       $a1, $zero, 0x213
    ctx->pc = 0x346f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
label_346f28:
    // 0x346f28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x346f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_346f2c:
    // 0x346f2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x346f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_346f30:
    // 0x346f30: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x346f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_346f34:
    // 0x346f34: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x346f34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_346f38:
    // 0x346f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_346f3c:
    // 0x346f3c: 0x0  nop
    ctx->pc = 0x346f3cu;
    // NOP
label_346f40:
    // 0x346f40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x346f40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_346f44:
    // 0x346f44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x346f44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_346f48:
    // 0x346f48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x346f48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_346f4c:
    // 0x346f4c: 0x0  nop
    ctx->pc = 0x346f4cu;
    // NOP
label_346f50:
    // 0x346f50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x346f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_346f54:
    // 0x346f54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x346f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_346f58:
    // 0x346f58: 0xc0d0484  jal         func_341210
label_346f5c:
    if (ctx->pc == 0x346F5Cu) {
        ctx->pc = 0x346F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F58u;
        // 0x346f5c: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346F60u;
        goto label_346f60;
    }
    ctx->pc = 0x346F58u;
    SET_GPR_U32(ctx, 31, 0x346F60u);
    ctx->pc = 0x346F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F58u;
    // 0x346f5c: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x346F58u, 0x346F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F60u;
label_346f60:
    // 0x346f60: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x346f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_346f64:
    // 0x346f64: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x346f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_346f68:
    // 0x346f68: 0x320f809  jalr        $t9
label_346f6c:
    if (ctx->pc == 0x346F6Cu) {
        ctx->pc = 0x346F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F68u;
        // 0x346f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346F70u;
        goto label_346f70;
    }
    ctx->pc = 0x346F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346F70u);
        ctx->pc = 0x346F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F68u;
        // 0x346f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346F68u, 0x346F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x346F70u;
label_346f70:
    // 0x346f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346f74:
    // 0x346f74: 0xc0e28e4  jal         func_38A390
label_346f78:
    if (ctx->pc == 0x346F78u) {
        ctx->pc = 0x346F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F74u;
        // 0x346f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346F7Cu;
        goto label_346f7c;
    }
    ctx->pc = 0x346F74u;
    SET_GPR_U32(ctx, 31, 0x346F7Cu);
    ctx->pc = 0x346F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F74u;
    // 0x346f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A390u, 0x346F74u, 0x346F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F7Cu;
label_346f7c:
    // 0x346f7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x346f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_346f80:
    // 0x346f80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x346f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_346f84:
    // 0x346f84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_346f88:
    // 0x346f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_346f8c:
    // 0x346f8c: 0x3e00008  jr          $ra
label_346f90:
    if (ctx->pc == 0x346F90u) {
        ctx->pc = 0x346F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F8Cu;
        // 0x346f90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346F94u;
        goto label_fallthrough_0x346f8c;
    }
    ctx->pc = 0x346F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F8Cu;
        // 0x346f90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x346f8c:
    ctx->pc = 0x346F94u;
}
